#ifndef __SYSTEM_LPC2478_H__
#define __SYSTEM_LPC2478_H__

#include <stdint.h>
#include "lpc24xx.h"


#define  SYSTEM_CORE_CLOCK                          16000000ul

#define  VICVECTBASEADDRESS                         0xFFFFF100
#define  VICPRIORITYBASEADDRESS                     0xFFFFF200


#define  PCLK_WDT                                   0
#define  PCLK_TIMER0                                1
#define  PCLK_TIMER1                                2
#define  PCLK_UART0                                 3
#define  PCLK_UART1                                 4
#define  PCLK_PWM0                                  5
#define  PCLK_PWM1                                  6
#define  PCLK_I2C0                                  7
#define  PCLK_SPI                                   8
#define  PCLK_RTC                                   9
#define  PCLK_SSP1                                  10
#define  PCLK_DAC                                   11
#define  PCLK_ADC                                   12
#define  PCLK_CAN1                                  13
#define  PCLK_CAN2                                  14
#define  PCLK_ACF                                   15

#define  PCLK_BAT_RAM                               16
#define  PCLK_GPIO                                  17
#define  PCLK_PCB                                   18
#define  PCLK_I2C1                                  19
#define  PCLK_PCLCD                                 20
#define  PCLK_SSP0                                  21
#define  PCLK_TIMER2                                22
#define  PCLK_TIMER3                                23
#define  PCLK_UART2                                 24
#define  PCLK_UART3                                 25
#define  PCLK_I2C2                                  26
#define  PCLK_I2S                                   27
#define  PCLK_MCI                                   28
#define  PCLK_SYSCON                                30

#define ISR_Priority_OsTick                         7

void            SystemInit                      (void);
void            SystemCoreClockUpdate           (void);
void            SysTick_Config                  (uint32_t ClockDiv);
uint32_t        CPU_ClkFreq                     (void);
uint32_t        CPU_PclkFreq                    (uint8_t pclk);
void            RegisterISR                     (uint8_t VIC_Number, uint8_t Priority, uint32_t Address);
void            UNDEF_Handler                   (void);
void            IRQ_Handler                     (void);
void            FIQ_Handler                     (void);
void            SysTick_Handler                 (void);

#endif //__SYSTEM_LPC2478_H__
