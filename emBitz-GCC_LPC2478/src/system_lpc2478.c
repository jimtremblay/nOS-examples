/*
 * Copyright (c) 2014 Alain Royer
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include <string.h>
#include "system_lpc2478.h"
#include "nOS.h"


//extern void SysTick_Handler(void) __attribute__ ((interrupt ("IRQ")));


static uint32_t VIC_SpuriousInt;

static  void  MAM_Init                          (void);
static  void  VIC_Init                          (void);

static  void  VIC_Dummy                         (uint32_t VicInt);              /* Prototypes for dummy interrupt handlers. */
static  void  VIC_DummyWDT                      (void);
static  void  VIC_DummySW                       (void);
static  void  VIC_DummyDEBUGRX                  (void);
static  void  VIC_DummyDEBUGTX                  (void);
static  void  VIC_DummyTIMER0                   (void);
static  void  VIC_DummyTIMER1                   (void);
static  void  VIC_DummyUART0                    (void);
static  void  VIC_DummyUART1                    (void);
static  void  VIC_DummyPWM01                    (void);
static  void  VIC_DummyI2C0                     (void);
static  void  VIC_DummySPI                      (void);
static  void  VIC_DummySSP1                     (void);
static  void  VIC_DummyPLL                      (void);
static  void  VIC_DummyRTC                      (void);
static  void  VIC_DummyEINT0                    (void);
static  void  VIC_DummyEINT1                    (void);
static  void  VIC_DummyEINT2                    (void);
static  void  VIC_DummyEINT3                    (void);
static  void  VIC_DummyAD0                      (void);
static  void  VIC_DummyI2C1                     (void);
static  void  VIC_DummyBOD                      (void);
static  void  VIC_DummyETHERNET                 (void);
static  void  VIC_DummyUSB                      (void);
static  void  VIC_DummyCAN01                    (void);
static  void  VIC_DummyMMC                      (void);
static  void  VIC_DummyGP_DMA                   (void);
static  void  VIC_DummyTIMER2                   (void);
static  void  VIC_DummyTIMER3                   (void);
static  void  VIC_DummyUART2                    (void);
static  void  VIC_DummyUART3                    (void);
static  void  VIC_DummyI2C2                     (void);
static  void  VIC_DummyI2S                      (void);



void SystemInit(void)
{
    VIC_Init();                                             /* Initialize the Vectored Interrupt Controller.    */
    SystemCoreClockUpdate();
    SysTick_Config(SYSTEM_CORE_CLOCK / NOS_CONFIG_TICKS_PER_SECOND);
    MAM_Init();                                             /* Initialize the Memory acceleration module.       */
}

/*

  Name:           SystemCoreClockUpdate.

  Description:    Set up and activate the PLL.

   Note(s):       (1) The PLL output frequency is calculated by:

                              Fcco = 2 * Fin * m / n

                      where

                              Fin is the PLL input clock (here, the main oscillator)
                              M   is the PLL clock multiplier. The value (M - 1) is programmed in PLLCFG.
                              N   is the PLL clock divider.    The value (N - 1) is programmed in PLLCFG.

                  (2) Fcco must be between 275 and 550 MHz. The ARM Core clock must never exceed 72 MHz.
                      Set clk_div to divide Fcco accordingly.

                  (3) When using the USB device, you must choose Fcco as a multiple of 96 MHz, and then
                      set clk_div_usb to divide Fcco to exactly 48 MHz.

                  (4) In this example

                            Fin         = 12MHz,
                            M           = 12,
                            N           =  1,
                            clk_div     =  4, and
                            clk_div_usb =  6.

                    Therefore, Fcco        = 2 * Fin * M / N      = (2 * 12 * 12 / 1) = 288MHz.
                    The processor clock    = (Fcco / clk_div)     = (288MHz / 4)      =  72MHz.
                    Finally, the USB clock = (Fcco / clk_div_usb) = (288MHz / 6)      =  48MHz.

*/
void SystemCoreClockUpdate(void)
{
    uint32_t  m;
    uint32_t  n;
    uint32_t  clk_div;
    uint32_t  clk_div_usb;

    m           =  8;                               /* PLL Multiplier =  9, MSEL bits = 9 - 1 = 8.              */
    n           =  0;                               /* PLL Divider    =  1, NSEL bits =  1 - 1 =  0.            */
    clk_div     =  3;                               /* Cfg the ARM Core clock div to 4. CCLKSEL =  4 - 1.       */
    clk_div_usb =  5;                               /* Cfg the USB clock divider to 6, USBSEL  = 6 - 1.         */

    if((PLLSTAT & PLLSTAT_PLLC) != 0)               /* If the PLL is already running.                           */
    {
        PLLCON  &= ~PLLSTAT_PLLC;                   /* Disconnect the PLL.                                      */
        PLLFEED  =  0xAA;                           /* PLL register update sequence, 0xAA, 0x55.                */
        PLLFEED  =  0x55;
    }

    PLLCON   &= ~PLLCON_PLLE;                       /* Disable the PLL.                                         */
    PLLFEED   =  0xAA;                              /* PLL register update sequence, 0xAA, 0x55.                */
    PLLFEED   =  0x55;

    SCS      &= ~SCS_OSCRANGE;                      /* OSCRANGE = 0, Main OSC is between 1 and 20 Mhz.          */
    SCS      |=  SCS_OSCEN;                         /* OSCEN = 1, Enable the main oscillator.                   */

    while((SCS & SCS_OSCSTAT) == 0);                /* Wait until OSCSTAT is set (Main OSC rdy to be used).     */

    CLKSRCSEL = CLKSRCSEL_CLKSRC_MAIN_OSC;          /* Select main OSC, 12MHz, as the PLL clock source.         */

    PLLCFG    = (m << 0) | (n << 16);               /* Configure the PLL multiplier and divider.                */
    PLLFEED   = 0xAA;                               /* PLL register update sequence, 0xAA, 0x55.                */
    PLLFEED   = 0x55;

    PLLCON   |= PLLCON_PLLE;                        /* Enable the PLL.                                          */
    PLLFEED   = 0xAA;                               /* PLL register update sequence, 0xAA, 0x55.                */
    PLLFEED   = 0x55;

    CCLKCFG   = clk_div;                            /* Configure the ARM Core Processor clock divider.          */

    while((PLLSTAT & PLLSTAT_PLOCK) == 0);          /* Wait for PCLOCK to become set.                           */

    PLLCON   |= PLLCON_PLLC;                        /* Connect the PLL. The PLL is now the active clk src.      */
    PLLFEED   = 0xAA;                               /* PLL register update sequence, 0xAA, 0x55.                */
    PLLFEED   = 0x55;

    while((PLLSTAT & PLLSTAT_PLLC) == 0);           /* Wait PLLC, the PLL connect status bit to become set.     */
}


void RegisterISR(uint8_t VIC_Number, uint8_t Priority, uint32_t Address)
{
    uint32_t*  pVectorAddress;
    uint32_t*  pVectorPriority;

    VICIntEnClear   |= (1 << VIC_Number);                                                           /* Disable IRQ                  */
    //VICIntSelect    &= ((1 << VIC_Number) ^ 0xFF);                                                /* Configure the IRQ source.    */
    pVectorAddress   = (uint32_t*)((uint32_t)VIC_BASE_ADDR + 0x100 + ((uint32_t)VIC_Number * 4));   /* Set the vector address.      */
    *pVectorAddress  = Address;
    pVectorPriority  = (uint32_t*)((uint32_t)pVectorAddress + 0x100);                               /* Set the vector priority.     */
    *pVectorPriority = (uint32_t)Priority;
    VICIntEnable    |= (1 << VIC_Number);                                                           /* Enable the interrupt source. */
}

void SysTick_Config(uint32_t ClockDiv)
{
    uint32_t  pclk_freq;
    uint32_t  rld_cnts;

    PCONP |= PCONP_PCTIM0;
                                                                                                /* VIC timer #0 init.                                   */
    RegisterISR(VIC_TIMER0, ISR_Priority_OsTick, (uint32_t)SysTick_Handler);

    pclk_freq = CPU_PclkFreq(PCLK_TIMER0);                                                      /* Get the peripheral clock frequency.                  */

    rld_cnts = ClockDiv;                                                                        /* Calculate the nbr of cnts necessary for the OS tick. */

    T0TCR  = TxTCR_RESET;                                                                       /* Disable and reset ctr 0 and the prescale ctr 0.      */
    T0TCR  = 0;                                                                                 /* Clear the reset bit.                                 */
    T0PR   = 0;                                                                                 /* Prescaler is set to no division.                     */

    T0MR0  = rld_cnts;
    T0MCR  = (TxMCR_MR0I | TxMCR_MR0R);                                                         /* Interrupt on MR0 (reset TC), stop TC.                */

    T0CCR  = 0;                                                                                 /* Capture is disabled.                                 */
    T0EMR  = 0;                                                                                 /* No external match output.                            */
    T0TCR |= TxTCR_CE;                                                                          /* Enable timer 0.                                      */
}


uint32_t CPU_ClkFreq(void)
{
    uint32_t  clk_src;
    uint32_t  clk_div;
    uint32_t  clk_freq;
    uint32_t  pll_stat;                                                             /* PLL status                                   */
    uint32_t  pll_clk_feq;                                                          /* When the PLL is enabled, this is Fcco.       */
    uint32_t  pll_msel;                                                             /* PLL multipler and pre-dividier values        */
    uint32_t  pll_nsel;


    clk_src = SYSTEM_CORE_CLOCK;
    pll_stat = PLLSTAT;

    if((PLLSTAT & (PLLSTAT_PLLC | PLLSTAT_PLLE)) == (PLLSTAT_PLLC | PLLSTAT_PLLE))
    {
        pll_msel    = (uint32_t)((pll_stat >>  0 ) & 0x3FFF) + 1;
        pll_nsel    = (uint32_t)((pll_stat >> 16 ) & 0x000F) + 1;
        pll_clk_feq = (2 * pll_msel * (clk_src / pll_nsel));                        /* Compute the PLL output frequency.            */
    }
    else
    {
        pll_clk_feq = (clk_src);                                                    /* The PLL is bypassed.                         */
    }

    clk_div  = (uint32_t)(CCLKCFG & 0xFF) + 1;                                      /* Obtain the CPU core clock divider.           */
    clk_freq = (uint32_t)(pll_clk_feq / clk_div);                                   /* Compute the ARM Core clock frequency.        */

    return (clk_freq);
}


uint32_t CPU_PclkFreq(uint8_t pclk)
{
    uint32_t  clk_freq;
    uint32_t  pclk_freq;
    uint32_t  sel;


    clk_freq = CPU_ClkFreq();

    if(pclk > 30)       return (uint32_t)0;

    if(pclk < 16)       sel = (PCLKSEL0 >> (2 *  pclk      )) & 0x03;
    else                sel = (PCLKSEL1 >> (2 * (pclk - 16))) & 0x03;

    if(sel == 0)        pclk_freq  = clk_freq / 4;
    else if(sel == 1)   pclk_freq  = clk_freq;
    else if(sel == 2)   pclk_freq  = clk_freq / 2;
    else
    {
        if((pclk == PCLK_CAN1) || (pclk == PCLK_CAN2))  pclk_freq  = clk_freq / 6;
        else                                            pclk_freq  = clk_freq / 8;
    }

    return(pclk_freq);
}


static void MAM_Init(void)
{
    uint32_t clk_freq;

    clk_freq = CPU_ClkFreq();                                   /* Get the current core clock frequency.                    */

    MAMCR    = 0;                                               /* Disable MAM functionality.                               */

    if(clk_freq < 20000000)                                     /* Compare current clock frequency with MAM modes.          */
    {
        MAMTIM = 1;                                             /* Set MAM fetch cycles to 1 processor clk in duration.     */
    }

    if(clk_freq < 40000000 && clk_freq >= 2000000)
    {
        MAMTIM = 2;                                             /* Set MAM fetch cycles to 2 processor clk in duration.     */
    }

    if(clk_freq >= 40000000)
    {
        MAMTIM = 3;                                             /* Set MAM fetch cycles to 3 processor clk in duration.     */
    }

    MAMCR = 2;                                                  /* Enable full MAM functionality.                           */
}


static void VIC_Init(void)
{
    //memcpy((void *)0x40000000, (void *)0x00000000, 64);
    //MEMMAP = 2;                                     /* interrupt vectors are remapped to Static RAM             */

    VICIntEnClear =  0xFFFFFFFF;                    /* Disable ALL interrupts.                                  */
    VICVectAddr   =  0;                             /* Acknowledge any pending VIC interrupt.                   */
    VICProtection =  0;                             /* Allow VIC reg access in User or Privileged modes.        */

    VICVectAddr0  = (uint32_t)VIC_DummyWDT;         /* Set the vector address.                                  */
    VICVectAddr1  = (uint32_t)VIC_DummySW;
    VICVectAddr2  = (uint32_t)VIC_DummyDEBUGRX;
    VICVectAddr3  = (uint32_t)VIC_DummyDEBUGTX;
    VICVectAddr4  = (uint32_t)VIC_DummyTIMER0;
    VICVectAddr5  = (uint32_t)VIC_DummyTIMER1;
    VICVectAddr6  = (uint32_t)VIC_DummyUART0;
    VICVectAddr7  = (uint32_t)VIC_DummyUART1;
    VICVectAddr8  = (uint32_t)VIC_DummyPWM01;
    VICVectAddr9  = (uint32_t)VIC_DummyI2C0;
    VICVectAddr10 = (uint32_t)VIC_DummySPI;
    VICVectAddr11 = (uint32_t)VIC_DummySSP1;
    VICVectAddr12 = (uint32_t)VIC_DummyPLL;
    VICVectAddr13 = (uint32_t)VIC_DummyRTC;
    VICVectAddr14 = (uint32_t)VIC_DummyEINT0;
    VICVectAddr15 = (uint32_t)VIC_DummyEINT1;
    VICVectAddr16 = (uint32_t)VIC_DummyEINT2;
    VICVectAddr17 = (uint32_t)VIC_DummyEINT3;
    VICVectAddr18 = (uint32_t)VIC_DummyAD0;
    VICVectAddr19 = (uint32_t)VIC_DummyI2C1;
    VICVectAddr20 = (uint32_t)VIC_DummyBOD;
    VICVectAddr21 = (uint32_t)VIC_DummyETHERNET;
    VICVectAddr22 = (uint32_t)VIC_DummyUSB;
    VICVectAddr23 = (uint32_t)VIC_DummyCAN01;
    VICVectAddr24 = (uint32_t)VIC_DummyMMC;
    VICVectAddr25 = (uint32_t)VIC_DummyGP_DMA;
    VICVectAddr26 = (uint32_t)VIC_DummyTIMER2;
    VICVectAddr27 = (uint32_t)VIC_DummyTIMER3;
    VICVectAddr28 = (uint32_t)VIC_DummyUART2;
    VICVectAddr29 = (uint32_t)VIC_DummyUART3;
    VICVectAddr30 = (uint32_t)VIC_DummyI2C2;
    VICVectAddr31 = (uint32_t)VIC_DummyI2S;
}


static void VIC_Dummy(uint32_t VicInt)
{
    VIC_SpuriousInt = VicInt;
    (void)VIC_SpuriousInt;

    while(1);
}


static void VIC_DummyWDT        (void)              {   VIC_Dummy(VIC_WDT);         }
static void VIC_DummySW         (void)              {   VIC_Dummy(VIC_SW);          }
static void VIC_DummyDEBUGRX    (void)              {   VIC_Dummy(VIC_DEBUGRX);     }
static void VIC_DummyDEBUGTX    (void)              {   VIC_Dummy(VIC_DEBUGTX);     }
static void VIC_DummyTIMER0     (void)              {   VIC_Dummy(VIC_TIMER0);      }
static void VIC_DummyTIMER1     (void)              {   VIC_Dummy(VIC_TIMER1);      }
static void VIC_DummyUART0      (void)              {   VIC_Dummy(VIC_UART0);       }
static void VIC_DummyUART1      (void)              {   VIC_Dummy(VIC_UART1);       }
static void VIC_DummyPWM01      (void)              {   VIC_Dummy(VIC_PWM01);       }
static void VIC_DummyI2C0       (void)              {   VIC_Dummy(VIC_I2C0);        }
static void VIC_DummySPI        (void)              {   VIC_Dummy(VIC_SPI);         }
static void VIC_DummySSP1       (void)              {   VIC_Dummy(VIC_SSP1);        }
static void VIC_DummyPLL        (void)              {   VIC_Dummy(VIC_PLL);         }
static void VIC_DummyRTC        (void)              {   VIC_Dummy(VIC_RTC);         }
static void VIC_DummyEINT0      (void)              {   VIC_Dummy(VIC_EINT0);       }
static void VIC_DummyEINT1      (void)              {   VIC_Dummy(VIC_EINT1);       }
static void VIC_DummyEINT2      (void)              {   VIC_Dummy(VIC_EINT2);       }
static void VIC_DummyEINT3      (void)              {   VIC_Dummy(VIC_EINT3);       }
static void VIC_DummyAD0        (void)              {   VIC_Dummy(VIC_AD0);         }
static void VIC_DummyI2C1       (void)              {   VIC_Dummy(VIC_I2C1);        }
static void VIC_DummyBOD        (void)              {   VIC_Dummy(VIC_BOD);         }
static void VIC_DummyETHERNET   (void)              {   VIC_Dummy(VIC_ETHERNET);    }
static void VIC_DummyUSB        (void)              {   VIC_Dummy(VIC_USB);         }
static void VIC_DummyCAN01      (void)              {   VIC_Dummy(VIC_CAN12);       }
static void VIC_DummyMMC        (void)              {   VIC_Dummy(VIC_MMC);         }
static void VIC_DummyGP_DMA     (void)              {   VIC_Dummy(VIC_GP_DMA);      }
static void VIC_DummyTIMER2     (void)              {   VIC_Dummy(VIC_TIMER2);      }
static void VIC_DummyTIMER3     (void)              {   VIC_Dummy(VIC_TIMER3);      }
static void VIC_DummyUART2      (void)              {   VIC_Dummy(VIC_UART2);       }
static void VIC_DummyUART3      (void)              {   VIC_Dummy(VIC_UART3);       }
static void VIC_DummyI2C2       (void)              {   VIC_Dummy(VIC_I2C2);        }
static void VIC_DummyI2S        (void)              {   VIC_Dummy(VIC_I2S);         }


void UNDEF_Handler(void)    { while(1); }
void IRQ_Handler  (void)    { while(1); }
void PAbt_Handler (void)    { while(1); }
void DAbt_Handler (void)    { while(1); }
void FIQ_Handler  (void)    { while(1); }
