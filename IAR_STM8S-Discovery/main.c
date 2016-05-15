#include <iostm8s105c6.h>
#include "nOS.h"

#define THREAD_STACK_SIZE       128

int ThreadA(void *arg);
int ThreadB(void *arg);
nOS_Sem semA;
nOS_Sem semB;
nOS_Thread threadA;
nOS_Thread threadB;
nOS_Stack threadAStack[THREAD_STACK_SIZE];
nOS_Stack threadBStack[THREAD_STACK_SIZE];

static void SysTick_Init(void)
{
    CLK_CKDIVR = 0;         /* Default 16 MHz RC oscillator with no prescaler */

    TIM4_IER_UIE = 1;       /* Enable TIM4 interrupts */
    TIM4_PSCR_PSC = 6;      /* Prescaler of 64 from main clock */
    TIM4_ARR = 250;         /* Compare value for 1000 Hz tick */
    TIM4_CR1_CEN = 1;       /* Counter enable */
}

static void LED_Init(void)
{
    PD_DDR_bit.DDR0 = 1;    /* Set LED pin as output */
    PD_CR1_bit.C10 = 1;     /* Set LED pin as push-pull */
    PD_ODR_bit.ODR0 = 0;    /* Turn off LED */
}

int ThreadA(void *arg)
{
    NOS_UNUSED(arg);

    while (1) {
        nOS_SemTake(&semB, NOS_WAIT_INFINITE);
        PD_ODR_bit.ODR0 = 1;
        nOS_SleepMs(500);
        nOS_SemGive(&semA);
    }
}

int ThreadB(void *arg)
{
    NOS_UNUSED(arg);

    while (1) {
        nOS_SemTake(&semA, NOS_WAIT_INFINITE);
        PD_ODR_bit.ODR0 = 0;
        nOS_SleepMs(500);
        nOS_SemGive(&semB);
    }
}

NOS_ISR(TIM4_OVR_UIF_vector)
{
    TIM4_SR_UIF = 0;        /* Clear TIM4 interrupt flag */
    nOS_Tick();
}

int main (void)
{
    volatile uint32_t cntr = 0;

    LED_Init();

    nOS_Init();

    nOS_ThreadSetName(NULL, "main");

    nOS_SemCreate(&semA, 1, 1);
    nOS_SemCreate(&semB, 0, 1);

    nOS_ThreadCreate(&threadA, ThreadA, NULL, threadAStack, THREAD_STACK_SIZE, NOS_CONFIG_HIGHEST_THREAD_PRIO,   NOS_THREAD_READY, "ThreadA");
    nOS_ThreadCreate(&threadB, ThreadB, NULL, threadBStack, THREAD_STACK_SIZE, NOS_CONFIG_HIGHEST_THREAD_PRIO-1, NOS_THREAD_READY, "ThreadB");

    nOS_Start(SysTick_Init);
    
    asm("RIM");             /* Enable global interrupts */

    while (1) {
        cntr++;
    }
}