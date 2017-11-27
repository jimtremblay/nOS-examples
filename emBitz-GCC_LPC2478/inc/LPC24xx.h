/******************************************************************************
 *   LPC24xx.h:  Header file for NXP LPC23xx/24xx Family Microprocessors
 *   The header file is the super set of all hardware definition of the
 *   peripherals for the LPC23xx/24xx family microprocessor.
 *
 *   Copyright(C) 2006-2008, NXP Semiconductor
 *   All rights reserved.
 *
 *   History
 *   2005.10.01  ver 1.00    Preliminary version, first Release
 *   2007.05.17  ver 1.01    several corrections
 *   2007.09.05  ver 1.02    added VICVectPriorityx symbols
 *   2007.09.05  ver 1.03    FIO1PIN1 value corrected
 *   2008.04.23  ver 1.04    EMC_DYN_CFGx,EMC_DYN_RASCASx value corrected
 *
******************************************************************************/

#ifndef __LPC24xx_H
#define __LPC24xx_H

/* Vectored Interrupt Controller (VIC) */
#define VIC_BASE_ADDR	0xFFFFF000
#define VICIRQStatus   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x000))
#define VICFIQStatus   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x004))
#define VICRawIntr     (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x008))
#define VICIntSelect   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x00C))
#define VICIntEnable   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x010))
#define VICIntEnClear  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x014))
#define VICSoftInt     (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x018))
#define VICSoftIntClr  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x01C))
#define VICProtection  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x020))
#define VICSWPrioMask  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x024))

#define VICVectAddr0   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x100))
#define VICVectAddr1   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x104))
#define VICVectAddr2   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x108))
#define VICVectAddr3   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x10C))
#define VICVectAddr4   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x110))
#define VICVectAddr5   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x114))
#define VICVectAddr6   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x118))
#define VICVectAddr7   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x11C))
#define VICVectAddr8   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x120))
#define VICVectAddr9   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x124))
#define VICVectAddr10  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x128))
#define VICVectAddr11  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x12C))
#define VICVectAddr12  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x130))
#define VICVectAddr13  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x134))
#define VICVectAddr14  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x138))
#define VICVectAddr15  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x13C))
#define VICVectAddr16  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x140))
#define VICVectAddr17  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x144))
#define VICVectAddr18  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x148))
#define VICVectAddr19  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x14C))
#define VICVectAddr20  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x150))
#define VICVectAddr21  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x154))
#define VICVectAddr22  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x158))
#define VICVectAddr23  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x15C))
#define VICVectAddr24  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x160))
#define VICVectAddr25  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x164))
#define VICVectAddr26  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x168))
#define VICVectAddr27  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x16C))
#define VICVectAddr28  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x170))
#define VICVectAddr29  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x174))
#define VICVectAddr30  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x178))
#define VICVectAddr31  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x17C))

/* The name convention below is from previous LPC2000 family MCUs, in LPC23xx/24xx,
these registers are known as "VICVectPriority(x)". */
#define VICVectCntl0   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x200))
#define VICVectCntl1   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x204))
#define VICVectCntl2   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x208))
#define VICVectCntl3   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x20C))
#define VICVectCntl4   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x210))
#define VICVectCntl5   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x214))
#define VICVectCntl6   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x218))
#define VICVectCntl7   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x21C))
#define VICVectCntl8   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x220))
#define VICVectCntl9   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x224))
#define VICVectCntl10  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x228))
#define VICVectCntl11  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x22C))
#define VICVectCntl12  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x230))
#define VICVectCntl13  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x234))
#define VICVectCntl14  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x238))
#define VICVectCntl15  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x23C))
#define VICVectCntl16  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x240))
#define VICVectCntl17  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x244))
#define VICVectCntl18  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x248))
#define VICVectCntl19  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x24C))
#define VICVectCntl20  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x250))
#define VICVectCntl21  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x254))
#define VICVectCntl22  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x258))
#define VICVectCntl23  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x25C))
#define VICVectCntl24  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x260))
#define VICVectCntl25  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x264))
#define VICVectCntl26  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x268))
#define VICVectCntl27  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x26C))
#define VICVectCntl28  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x270))
#define VICVectCntl29  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x274))
#define VICVectCntl30  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x278))
#define VICVectCntl31  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x27C))

/* LPC23xx/24xx VICVectPriority(x)". */
#define VICVectPriority0   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x200))
#define VICVectPriority1   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x204))
#define VICVectPriority2   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x208))
#define VICVectPriority3   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x20C))
#define VICVectPriority4   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x210))
#define VICVectPriority5   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x214))
#define VICVectPriority6   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x218))
#define VICVectPriority7   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x21C))
#define VICVectPriority8   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x220))
#define VICVectPriority9   (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x224))
#define VICVectPriority10  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x228))
#define VICVectPriority11  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x22C))
#define VICVectPriority12  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x230))
#define VICVectPriority13  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x234))
#define VICVectPriority14  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x238))
#define VICVectPriority15  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x23C))
#define VICVectPriority16  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x240))
#define VICVectPriority17  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x244))
#define VICVectPriority18  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x248))
#define VICVectPriority19  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x24C))
#define VICVectPriority20  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x250))
#define VICVectPriority21  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x254))
#define VICVectPriority22  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x258))
#define VICVectPriority23  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x25C))
#define VICVectPriority24  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x260))
#define VICVectPriority25  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x264))
#define VICVectPriority26  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x268))
#define VICVectPriority27  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x26C))
#define VICVectPriority28  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x270))
#define VICVectPriority29  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x274))
#define VICVectPriority30  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x278))
#define VICVectPriority31  (*(volatile unsigned long *)(VIC_BASE_ADDR + 0x27C))
#define VICVectAddr        (*(volatile unsigned long *)(VIC_BASE_ADDR + 0xF00))
//#define  VICAddress    (*(volatile unsigned long *)(VIC_BASE_ADDR + 0xF00))

/***************************************************************************
 **
 **  VIC Interrupt channels
 **
 ***************************************************************************/
#define VIC_WDT          0   /* Watchdog                           */
#define VIC_SW           1   /* Software interrupts                */
#define VIC_DEBUGRX      2   /* Embedded ICE, DbgCommRx            */
#define VIC_DEBUGTX      3   /* Embedded ICE, DbgCommTx            */
#define VIC_TIMER0       4   /* Timer 0 (Match 0-3 Capture 0-3)    */
#define VIC_TIMER1       5   /* Timer 1 (Match 0-3 Capture 0-3)    */
#define VIC_UART0        6   /* UART 0  (RLS, THRE, RDA, CTI)      */
#define VIC_UART1        7   /* UART 1  (RLS, THRE, RDA, CTI, MSI) */
#define VIC_PWM01        8   /* PWM 01  (Match 0-6 Capture 0-3)    */
#define VIC_I2C0         9   /* I2C 0   (SI)                       */
#define VIC_SPI          10  /* SPI 0, SSP 0                       */
#define VIC_SSP1         11  /* SSP 1                              */
#define VIC_PLL          12  /* PLL lock (PLOCK)                   */
#define VIC_RTC          13  /* RTC      (RTCCIF, RTCALF)          */
#define VIC_EINT0        14  /* External interrupt 0 (EINT0)       */
#define VIC_EINT1        15  /* External interrupt 1 (EINT1)       */
#define VIC_EINT2        16  /* External interrupt 2 (EINT2)       */
#define VIC_EINT3        17  /* External interrupt 3 (EINT3)       */
#define VIC_AD0          18  /* A/D converter 0                    */
#define VIC_I2C1         19  /* I2C 1                              */
#define VIC_BOD          20  /* Brown out detect                   */
#define VIC_ETHERNET     21  /* Ethernet                           */
#define VIC_USB          22  /* USB Low and High priority          */
#define VIC_CAN12        23  /* CAN1,2 Tx, Rx                      */
#define VIC_MMC          24  /* SD/MMC                             */
#define VIC_GP_DMA       25  /* DMA channel 0, DMA channel 1       */
#define VIC_TIMER2       26  /* Timer 2 (Match 0-3 Capture 0-3)    */
#define VIC_TIMER3       27  /* Timer 3 (Match 0-3 Capture 0-3)    */
#define VIC_UART2        28  /* UART 2  (RLS, THRE, RDA, CTI)      */
#define VIC_UART3        29  /* UART 3  (RLS, THRE, RDA, CTI, MSI) */
#define VIC_I2C2         30  /* I2C 0   (SI)                       */
#define VIC_I2S          31  /* I2S Rx, Tx                         */

/* Pin Connect Block */
#define PINSEL_BASE_ADDR	0xE002C000
#define PINSEL0        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x00))
#define PINSEL1        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x04))
#define PINSEL2        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x08))
#define PINSEL3        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x0C))
#define PINSEL4        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x10))
#define PINSEL5        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x14))
#define PINSEL6        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x18))
#define PINSEL7        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x1C))
#define PINSEL8        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x20))
#define PINSEL9        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x24))
#define PINSEL10       (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x28))

#define PINMODE0        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x40))
#define PINMODE1        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x44))
#define PINMODE2        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x48))
#define PINMODE3        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x4C))
#define PINMODE4        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x50))
#define PINMODE5        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x54))
#define PINMODE6        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x58))
#define PINMODE7        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x5C))
#define PINMODE8        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x60))
#define PINMODE9        (*(volatile unsigned long *)(PINSEL_BASE_ADDR + 0x64))

/* General Purpose Input/Output (GPIO) */
#define GPIO_BASE_ADDR		0xE0028000
#define IOPIN0         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x00))
#define IOSET0         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x04))
#define IODIR0         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x08))
#define IOCLR0         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x0C))
#define IOPIN1         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x10))
#define IOSET1         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x14))
#define IODIR1         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x18))
#define IOCLR1         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x1C))

/* GPIO Interrupt Registers */
#define IO0_INT_EN_R    (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x90))
#define IO0_INT_EN_F    (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x94))
#define IO0_INT_STAT_R  (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x84))
#define IO0_INT_STAT_F  (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x88))
#define IO0_INT_CLR     (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x8C))

#define IO2_INT_EN_R    (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0xB0))
#define IO2_INT_EN_F    (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0xB4))
#define IO2_INT_STAT_R  (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0xA4))
#define IO2_INT_STAT_F  (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0xA8))
#define IO2_INT_CLR     (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0xAC))

#define IO_INT_STAT     (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x80))

#define PARTCFG_BASE_ADDR		0x3FFF8000
#define PARTCFG        (*(volatile unsigned long *)(PARTCFG_BASE_ADDR + 0x00))

/* Fast I/O setup */
#define FIO_BASE_ADDR		0x3FFFC000
#define FIO0DIR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x00))
#define FIO0MASK       (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x10))
#define FIO0PIN        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x14))
#define FIO0SET        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x18))
#define FIO0CLR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x1C))

#define FIO1DIR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x20))
#define FIO1MASK       (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x30))
#define FIO1PIN        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x34))
#define FIO1SET        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x38))
#define FIO1CLR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x3C))

#define FIO2DIR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x40))
#define FIO2MASK       (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x50))
#define FIO2PIN        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x54))
#define FIO2SET        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x58))
#define FIO2CLR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x5C))

#define FIO3DIR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x60))
#define FIO3MASK       (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x70))
#define FIO3PIN        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x74))
#define FIO3SET        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x78))
#define FIO3CLR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x7C))

#define FIO4DIR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x80))
#define FIO4MASK       (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x90))
#define FIO4PIN        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x94))
#define FIO4SET        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x98))
#define FIO4CLR        (*(volatile unsigned long *)(FIO_BASE_ADDR + 0x9C))

/* FIOs can be accessed through uin16_t, HALF-uint16_tor uint8_t. */
#define FIO0DIR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x00))
#define FIO1DIR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x20))
#define FIO2DIR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x40))
#define FIO3DIR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x60))
#define FIO4DIR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x80))

#define FIO0DIR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x01))
#define FIO1DIR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x21))
#define FIO2DIR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x41))
#define FIO3DIR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x61))
#define FIO4DIR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x81))

#define FIO0DIR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x02))
#define FIO1DIR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x22))
#define FIO2DIR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x42))
#define FIO3DIR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x62))
#define FIO4DIR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x82))

#define FIO0DIR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x03))
#define FIO1DIR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x23))
#define FIO2DIR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x43))
#define FIO3DIR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x63))
#define FIO4DIR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x83))

#define FIO0DIRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x00))
#define FIO1DIRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x20))
#define FIO2DIRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x40))
#define FIO3DIRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x60))
#define FIO4DIRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x80))

#define FIO0DIRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x02))
#define FIO1DIRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x22))
#define FIO2DIRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x42))
#define FIO3DIRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x62))
#define FIO4DIRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x82))

#define FIO0MASK0      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x10))
#define FIO1MASK0      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x30))
#define FIO2MASK0      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x50))
#define FIO3MASK0      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x70))
#define FIO4MASK0      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x90))

#define FIO0MASK1      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x11))
#define FIO1MASK1      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x21))
#define FIO2MASK1      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x51))
#define FIO3MASK1      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x71))
#define FIO4MASK1      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x91))

#define FIO0MASK2      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x12))
#define FIO1MASK2      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x32))
#define FIO2MASK2      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x52))
#define FIO3MASK2      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x72))
#define FIO4MASK2      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x92))

#define FIO0MASK3      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x13))
#define FIO1MASK3      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x33))
#define FIO2MASK3      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x53))
#define FIO3MASK3      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x73))
#define FIO4MASK3      (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x93))

#define FIO0MASKL      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x10))
#define FIO1MASKL      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x30))
#define FIO2MASKL      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x50))
#define FIO3MASKL      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x70))
#define FIO4MASKL      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x90))

#define FIO0MASKU      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x12))
#define FIO1MASKU      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x32))
#define FIO2MASKU      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x52))
#define FIO3MASKU      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x72))
#define FIO4MASKU      (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x92))

#define FIO0PIN0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x14))
#define FIO1PIN0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x34))
#define FIO2PIN0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x54))
#define FIO3PIN0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x74))
#define FIO4PIN0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x94))

#define FIO0PIN1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x15))
#define FIO1PIN1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x35))
#define FIO2PIN1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x55))
#define FIO3PIN1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x75))
#define FIO4PIN1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x95))

#define FIO0PIN2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x16))
#define FIO1PIN2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x36))
#define FIO2PIN2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x56))
#define FIO3PIN2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x76))
#define FIO4PIN2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x96))

#define FIO0PIN3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x17))
#define FIO1PIN3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x37))
#define FIO2PIN3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x57))
#define FIO3PIN3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x77))
#define FIO4PIN3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x97))

#define FIO0PINL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x14))
#define FIO1PINL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x34))
#define FIO2PINL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x54))
#define FIO3PINL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x74))
#define FIO4PINL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x94))

#define FIO0PINU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x16))
#define FIO1PINU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x36))
#define FIO2PINU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x56))
#define FIO3PINU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x76))
#define FIO4PINU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x96))

#define FIO0SET0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x18))
#define FIO1SET0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x38))
#define FIO2SET0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x58))
#define FIO3SET0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x78))
#define FIO4SET0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x98))

#define FIO0SET1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x19))
#define FIO1SET1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x29))
#define FIO2SET1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x59))
#define FIO3SET1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x79))
#define FIO4SET1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x99))

#define FIO0SET2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x1A))
#define FIO1SET2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x3A))
#define FIO2SET2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x5A))
#define FIO3SET2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x7A))
#define FIO4SET2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x9A))

#define FIO0SET3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x1B))
#define FIO1SET3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x3B))
#define FIO2SET3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x5B))
#define FIO3SET3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x7B))
#define FIO4SET3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x9B))

#define FIO0SETL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x18))
#define FIO1SETL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x38))
#define FIO2SETL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x58))
#define FIO3SETL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x78))
#define FIO4SETL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x98))

#define FIO0SETU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x1A))
#define FIO1SETU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x3A))
#define FIO2SETU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x5A))
#define FIO3SETU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x7A))
#define FIO4SETU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x9A))

#define FIO0CLR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x1C))
#define FIO1CLR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x3C))
#define FIO2CLR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x5C))
#define FIO3CLR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x7C))
#define FIO4CLR0       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x9C))

#define FIO0CLR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x1D))
#define FIO1CLR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x2D))
#define FIO2CLR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x5D))
#define FIO3CLR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x7D))
#define FIO4CLR1       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x9D))

#define FIO0CLR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x1E))
#define FIO1CLR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x3E))
#define FIO2CLR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x5E))
#define FIO3CLR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x7E))
#define FIO4CLR2       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x9E))

#define FIO0CLR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x1F))
#define FIO1CLR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x3F))
#define FIO2CLR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x5F))
#define FIO3CLR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x7F))
#define FIO4CLR3       (*(volatile unsigned char *)(FIO_BASE_ADDR + 0x9F))

#define FIO0CLRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x1C))
#define FIO1CLRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x3C))
#define FIO2CLRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x5C))
#define FIO3CLRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x7C))
#define FIO4CLRL       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x9C))

#define FIO0CLRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x1E))
#define FIO1CLRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x3E))
#define FIO2CLRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x5E))
#define FIO3CLRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x7E))
#define FIO4CLRU       (*(volatile unsigned int16_t *)(FIO_BASE_ADDR + 0x9E))


/* System Control Block(SCB) modules include Memory Accelerator Module,
Phase Locked Loop, VPB divider, Power Control, External Interrupt,
Reset, and Code Security/Debugging */
#define SCB_BASE_ADDR	0xE01FC000

/* Memory Accelerator Module (MAM) */
#define MAMCR          (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x000))
#define MAMTIM         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x004))
#define MEMMAP         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x040))

/* Phase Locked Loop (PLL) */
#define PLLCON         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x080))
#define PLLCFG         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x084))
#define PLLSTAT        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x088))
#define PLLFEED        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x08C))

/* Power Control */
#define PCON           (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x0C0))
#define PCONP          (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x0C4))

/* Clock Divider */
// #define APBDIV         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x100))
#define CCLKCFG        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x104))
#define USBCLKCFG      (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x108))
#define CLKSRCSEL      (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x10C))
#define PCLKSEL0       (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x1A8))
#define PCLKSEL1       (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x1AC))

/* External Interrupts */
#define EXTINT         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x140))
#define INTWAKE        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x144))
#define EXTMODE        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x148))
#define EXTPOLAR       (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x14C))

/* Reset, reset source identification */
#define RSIR           (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x180))

/* RSID, code security protection */
#define CSPR           (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x184))

/* AHB configuration */
#define AHBCFG1        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x188))
#define AHBCFG2        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x18C))

/* System Controls and Status */
#define SCS            (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x1A0))

/* MPMC(EMC) registers, note: all the external memory controller(EMC) registers
are for LPC24xx only. */
#define STATIC_MEM0_BASE		0x80000000
#define STATIC_MEM1_BASE		0x81000000
#define STATIC_MEM2_BASE		0x82000000
#define STATIC_MEM3_BASE		0x83000000

#define DYNAMIC_MEM0_BASE		0xA0000000
#define DYNAMIC_MEM1_BASE		0xB0000000
#define DYNAMIC_MEM2_BASE		0xC0000000
#define DYNAMIC_MEM3_BASE		0xD0000000

/* External Memory Controller (EMC) */
#define EMC_BASE_ADDR		0xFFE08000
#define EMC_CTRL            (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x000))
#define EMC_STAT            (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x004))
#define EMC_CONFIG          (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x008))
#define EMC_DYNAMIC_CTRL    (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x020))
#define EMC_DYNAMIC_RFR     (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x024))
#define EMC_DYNAMIC_RD_CFG  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x028))
#define EMC_DYNAMIC_RP      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x030))
#define EMC_DYNAMIC_RAS     (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x034))
#define EMC_DYNAMIC_SREX    (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x038))
#define EMC_DYNAMIC_APR     (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x03C))
#define EMC_DYNAMIC_DAL     (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x040))
#define EMC_DYNAMIC_WR      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x044))
#define EMC_DYNAMIC_RC      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x048))
#define EMC_DYNAMIC_RFC     (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x04C))
#define EMC_DYNAMIC_XSR     (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x050))
#define EMC_DYNAMIC_RRD     (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x054))
#define EMC_DYNAMIC_MRD     (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x058))

#define EMC_STA_EXT_WAIT    (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x080))

/* Dynamic RAM access registers */

#define EMC_DYN_CFG0      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x100))
#define EMC_DYN_RASCAS0   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x104))
#define EMC_DYN_CFG1      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x120))
#define EMC_DYN_RASCAS1   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x124))
#define EMC_DYN_CFG2      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x140))
#define EMC_DYN_RASCAS2   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x144))
#define EMC_DYN_CFG3      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x160))
#define EMC_DYN_RASCAS3   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x164))

/* static RAM access registers */
#define EMC_STA_CFG0      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x200))
#define EMC_STA_WAITWEN0  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x204))
#define EMC_STA_WAITOEN0  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x208))
#define EMC_STA_WAITRD0   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x20C))
#define EMC_STA_WAITPAGE0 (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x210))
#define EMC_STA_WAITWR0   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x214))
#define EMC_STA_WAITTURN0 (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x218))

#define EMC_STA_CFG1      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x220))
#define EMC_STA_WAITWEN1  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x224))
#define EMC_STA_WAITOEN1  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x228))
#define EMC_STA_WAITRD1   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x22C))
#define EMC_STA_WAITPAGE1 (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x230))
#define EMC_STA_WAITWR1   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x234))
#define EMC_STA_WAITTURN1 (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x238))

#define EMC_STA_CFG2      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x240))
#define EMC_STA_WAITWEN2  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x244))
#define EMC_STA_WAITOEN2  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x248))
#define EMC_STA_WAITRD2   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x24C))
#define EMC_STA_WAITPAGE2 (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x250))
#define EMC_STA_WAITWR2   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x254))
#define EMC_STA_WAITTURN2 (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x258))

#define EMC_STA_CFG3      (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x260))
#define EMC_STA_WAITWEN3  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x264))
#define EMC_STA_WAITOEN3  (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x268))
#define EMC_STA_WAITRD3   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x26C))
#define EMC_STA_WAITPAGE3 (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x270))
#define EMC_STA_WAITWR3   (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x274))
#define EMC_STA_WAITTURN3 (*(volatile unsigned long *)(EMC_BASE_ADDR + 0x278))



/* Timer 0 */
#define TMR0_BASE_ADDR		0xE0004000
#define T0IR           (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x00))
#define T0TCR          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x04))
#define T0TC           (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x08))
#define T0PR           (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x0C))
#define T0PC           (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x10))
#define T0MCR          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x14))
#define T0MR0          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x18))
#define T0MR1          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x1C))
#define T0MR2          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x20))
#define T0MR3          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x24))
#define T0CCR          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x28))
#define T0CR0          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x2C))
#define T0CR1          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x30))
#define T0CR2          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x34))
#define T0CR3          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x38))
#define T0EMR          (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x3C))
#define T0CTCR         (*(volatile unsigned long *)(TMR0_BASE_ADDR + 0x70))

/* Timer 1 */
#define TMR1_BASE_ADDR		0xE0008000
#define T1IR           (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x00))
#define T1TCR          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x04))
#define T1TC           (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x08))
#define T1PR           (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x0C))
#define T1PC           (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x10))
#define T1MCR          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x14))
#define T1MR0          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x18))
#define T1MR1          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x1C))
#define T1MR2          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x20))
#define T1MR3          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x24))
#define T1CCR          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x28))
#define T1CR0          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x2C))
#define T1CR1          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x30))
#define T1CR2          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x34))
#define T1CR3          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x38))
#define T1EMR          (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x3C))
#define T1CTCR         (*(volatile unsigned long *)(TMR1_BASE_ADDR + 0x70))

/* Timer 2 */
#define TMR2_BASE_ADDR		0xE0070000
#define T2IR           (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x00))
#define T2TCR          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x04))
#define T2TC           (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x08))
#define T2PR           (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x0C))
#define T2PC           (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x10))
#define T2MCR          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x14))
#define T2MR0          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x18))
#define T2MR1          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x1C))
#define T2MR2          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x20))
#define T2MR3          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x24))
#define T2CCR          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x28))
#define T2CR0          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x2C))
#define T2CR1          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x30))
#define T2CR2          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x34))
#define T2CR3          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x38))
#define T2EMR          (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x3C))
#define T2CTCR         (*(volatile unsigned long *)(TMR2_BASE_ADDR + 0x70))

/* Timer 3 */
#define TMR3_BASE_ADDR		0xE0074000
#define T3IR           (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x00))
#define T3TCR          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x04))
#define T3TC           (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x08))
#define T3PR           (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x0C))
#define T3PC           (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x10))
#define T3MCR          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x14))
#define T3MR0          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x18))
#define T3MR1          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x1C))
#define T3MR2          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x20))
#define T3MR3          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x24))
#define T3CCR          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x28))
#define T3CR0          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x2C))
#define T3CR1          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x30))
#define T3CR2          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x34))
#define T3CR3          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x38))
#define T3EMR          (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x3C))
#define T3CTCR         (*(volatile unsigned long *)(TMR3_BASE_ADDR + 0x70))


/* Pulse Width Modulator (PWM) */
#define PWM0_BASE_ADDR		0xE0014000
#define PWM0IR          (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x00))
#define PWM0TCR         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x04))
#define PWM0TC          (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x08))
#define PWM0PR          (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x0C))
#define PWM0PC          (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x10))
#define PWM0MCR         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x14))
#define PWM0MR0         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x18))
#define PWM0MR1         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x1C))
#define PWM0MR2         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x20))
#define PWM0MR3         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x24))
#define PWM0CCR         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x28))
#define PWM0CR0         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x2C))
#define PWM0CR1         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x30))
#define PWM0CR2         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x34))
#define PWM0CR3         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x38))
#define PWM0EMR         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x3C))
#define PWM0MR4         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x40))
#define PWM0MR5         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x44))
#define PWM0MR6         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x48))
#define PWM0PCR         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x4C))
#define PWM0LER         (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x50))
#define PWM0CTCR        (*(volatile unsigned long *)(PWM0_BASE_ADDR + 0x70))

#define PWM1_BASE_ADDR		0xE0018000
#define PWM1IR          (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x00))
#define PWM1TCR         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x04))
#define PWM1TC          (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x08))
#define PWM1PR          (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x0C))
#define PWM1PC          (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x10))
#define PWM1MCR         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x14))
#define PWM1MR0         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x18))
#define PWM1MR1         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x1C))
#define PWM1MR2         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x20))
#define PWM1MR3         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x24))
#define PWM1CCR         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x28))
#define PWM1CR0         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x2C))
#define PWM1CR1         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x30))
#define PWM1CR2         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x34))
#define PWM1CR3         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x38))
#define PWM1EMR         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x3C))
#define PWM1MR4         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x40))
#define PWM1MR5         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x44))
#define PWM1MR6         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x48))
#define PWM1PCR         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x4C))
#define PWM1LER         (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x50))
#define PWM1CTCR        (*(volatile unsigned long *)(PWM1_BASE_ADDR + 0x70))


/* Universal Asynchronous Receiver Transmitter 0 (UART0) */
#define UART0_BASE_ADDR		0xE000C000
#define U0RBR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x00))
#define U0THR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x00))
#define U0DLL          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x00))
#define U0DLM          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x04))
#define U0IER          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x04))
#define U0IIR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x08))
#define U0FCR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x08))
#define U0LCR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x0C))
#define U0LSR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x14))
#define U0SCR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x1C))
#define U0ACR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x20))
#define U0ICR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x24))
#define U0FDR          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x28))
#define U0TER          (*(volatile unsigned long *)(UART0_BASE_ADDR + 0x30))

/* Universal Asynchronous Receiver Transmitter 1 (UART1) */
#define UART1_BASE_ADDR		0xE0010000
#define U1RBR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x00))
#define U1THR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x00))
#define U1DLL          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x00))
#define U1DLM          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x04))
#define U1IER          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x04))
#define U1IIR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x08))
#define U1FCR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x08))
#define U1LCR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x0C))
#define U1MCR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x10))
#define U1LSR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x14))
#define U1MSR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x18))
#define U1SCR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x1C))
#define U1ACR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x20))
#define U1FDR          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x28))
#define U1TER          (*(volatile unsigned long *)(UART1_BASE_ADDR + 0x30))

/* Universal Asynchronous Receiver Transmitter 2 (UART2) */
#define UART2_BASE_ADDR		0xE0078000
#define U2RBR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x00))
#define U2THR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x00))
#define U2DLL          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x00))
#define U2DLM          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x04))
#define U2IER          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x04))
#define U2IIR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x08))
#define U2FCR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x08))
#define U2LCR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x0C))
#define U2LSR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x14))
#define U2SCR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x1C))
#define U2ACR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x20))
#define U2ICR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x24))
#define U2FDR          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x28))
#define U2TER          (*(volatile unsigned long *)(UART2_BASE_ADDR + 0x30))

/* Universal Asynchronous Receiver Transmitter 3 (UART3) */
#define UART3_BASE_ADDR		0xE007C000
#define U3RBR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x00))
#define U3THR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x00))
#define U3DLL          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x00))
#define U3DLM          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x04))
#define U3IER          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x04))
#define U3IIR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x08))
#define U3FCR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x08))
#define U3LCR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x0C))
#define U3LSR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x14))
#define U3SCR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x1C))
#define U3ACR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x20))
#define U3ICR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x24))
#define U3FDR          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x28))
#define U3TER          (*(volatile unsigned long *)(UART3_BASE_ADDR + 0x30))

/* I2C Interface 0 */
#define I2C0_BASE_ADDR		0xE001C000
#define I20CONSET      (*(volatile unsigned long *)(I2C0_BASE_ADDR + 0x00))
#define I20STAT        (*(volatile unsigned long *)(I2C0_BASE_ADDR + 0x04))
#define I20DAT         (*(volatile unsigned long *)(I2C0_BASE_ADDR + 0x08))
#define I20ADR         (*(volatile unsigned long *)(I2C0_BASE_ADDR + 0x0C))
#define I20SCLH        (*(volatile unsigned long *)(I2C0_BASE_ADDR + 0x10))
#define I20SCLL        (*(volatile unsigned long *)(I2C0_BASE_ADDR + 0x14))
#define I20CONCLR      (*(volatile unsigned long *)(I2C0_BASE_ADDR + 0x18))

/* I2C Interface 1 */
#define I2C1_BASE_ADDR		0xE005C000
#define I21CONSET      (*(volatile unsigned long *)(I2C1_BASE_ADDR + 0x00))
#define I21STAT        (*(volatile unsigned long *)(I2C1_BASE_ADDR + 0x04))
#define I21DAT         (*(volatile unsigned long *)(I2C1_BASE_ADDR + 0x08))
#define I21ADR         (*(volatile unsigned long *)(I2C1_BASE_ADDR + 0x0C))
#define I21SCLH        (*(volatile unsigned long *)(I2C1_BASE_ADDR + 0x10))
#define I21SCLL        (*(volatile unsigned long *)(I2C1_BASE_ADDR + 0x14))
#define I21CONCLR      (*(volatile unsigned long *)(I2C1_BASE_ADDR + 0x18))

/* I2C Interface 2 */
#define I2C2_BASE_ADDR		0xE0080000
#define I22CONSET      (*(volatile unsigned long *)(I2C2_BASE_ADDR + 0x00))
#define I22STAT        (*(volatile unsigned long *)(I2C2_BASE_ADDR + 0x04))
#define I22DAT         (*(volatile unsigned long *)(I2C2_BASE_ADDR + 0x08))
#define I22ADR         (*(volatile unsigned long *)(I2C2_BASE_ADDR + 0x0C))
#define I22SCLH        (*(volatile unsigned long *)(I2C2_BASE_ADDR + 0x10))
#define I22SCLL        (*(volatile unsigned long *)(I2C2_BASE_ADDR + 0x14))
#define I22CONCLR      (*(volatile unsigned long *)(I2C2_BASE_ADDR + 0x18))

/* SPI0 (Serial Peripheral Interface 0) */
#define SPI0_BASE_ADDR		0xE0020000
#define S0SPCR         (*(volatile unsigned long *)(SPI0_BASE_ADDR + 0x00))
#define S0SPSR         (*(volatile unsigned long *)(SPI0_BASE_ADDR + 0x04))
#define S0SPDR         (*(volatile unsigned long *)(SPI0_BASE_ADDR + 0x08))
#define S0SPCCR        (*(volatile unsigned long *)(SPI0_BASE_ADDR + 0x0C))
#define S0SPINT        (*(volatile unsigned long *)(SPI0_BASE_ADDR + 0x1C))

/* SSP0 Controller */
#define SSP0_BASE_ADDR		0xE0068000
#define SSP0CR0        (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x00))
#define SSP0CR1        (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x04))
#define SSP0DR         (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x08))
#define SSP0SR         (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x0C))
#define SSP0CPSR       (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x10))
#define SSP0IMSC       (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x14))
#define SSP0RIS        (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x18))
#define SSP0MIS        (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x1C))
#define SSP0ICR        (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x20))
#define SSP0DMACR      (*(volatile unsigned long *)(SSP0_BASE_ADDR + 0x24))

/* SSP1 Controller */
#define SSP1_BASE_ADDR		0xE0030000
#define SSP1CR0        (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x00))
#define SSP1CR1        (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x04))
#define SSP1DR         (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x08))
#define SSP1SR         (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x0C))
#define SSP1CPSR       (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x10))
#define SSP1IMSC       (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x14))
#define SSP1RIS        (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x18))
#define SSP1MIS        (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x1C))
#define SSP1ICR        (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x20))
#define SSP1DMACR      (*(volatile unsigned long *)(SSP1_BASE_ADDR + 0x24))


/* Real Time Clock */
#define RTC_BASE_ADDR		0xE0024000
#define RTC_ILR         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x00))
#define RTC_CTC         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x04))
#define RTC_CCR         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x08))
#define RTC_CIIR        (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x0C))
#define RTC_AMR         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x10))
#define RTC_CTIME0      (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x14))
#define RTC_CTIME1      (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x18))
#define RTC_CTIME2      (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x1C))
#define RTC_SEC         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x20))
#define RTC_MIN         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x24))
#define RTC_HOUR        (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x28))
#define RTC_DOM         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x2C))
#define RTC_DOW         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x30))
#define RTC_DOY         (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x34))
#define RTC_MONTH       (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x38))
#define RTC_YEAR        (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x3C))
#define RTC_CISS        (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x40))
#define RTC_ALSEC       (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x60))
#define RTC_ALMIN       (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x64))
#define RTC_ALHOUR      (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x68))
#define RTC_ALDOM       (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x6C))
#define RTC_ALDOW       (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x70))
#define RTC_ALDOY       (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x74))
#define RTC_ALMON       (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x78))
#define RTC_ALYEAR      (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x7C))
#define RTC_PREINT      (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x80))
#define RTC_PREFRAC     (*(volatile unsigned long *)(RTC_BASE_ADDR + 0x84))


/* A/D Converter 0 (AD0) */
#define AD0_BASE_ADDR		0xE0034000
#define AD0CR          (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x00))
#define AD0GDR         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x04))
#define AD0INTEN       (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x0C))
#define AD0DR0         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x10))
#define AD0DR1         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x14))
#define AD0DR2         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x18))
#define AD0DR3         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x1C))
#define AD0DR4         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x20))
#define AD0DR5         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x24))
#define AD0DR6         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x28))
#define AD0DR7         (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x2C))
#define AD0STAT        (*(volatile unsigned long *)(AD0_BASE_ADDR + 0x30))


/* D/A Converter */
#define DAC_BASE_ADDR		0xE006C000
#define DACR           (*(volatile unsigned long *)(DAC_BASE_ADDR + 0x00))


/* Watchdog */
#define WDG_BASE_ADDR		0xE0000000
#define WDMOD          (*(volatile unsigned long *)(WDG_BASE_ADDR + 0x00))
#define WDTC           (*(volatile unsigned long *)(WDG_BASE_ADDR + 0x04))
#define WDFEED         (*(volatile unsigned long *)(WDG_BASE_ADDR + 0x08))
#define WDTV           (*(volatile unsigned long *)(WDG_BASE_ADDR + 0x0C))
#define WDCLKSEL       (*(volatile unsigned long *)(WDG_BASE_ADDR + 0x10))

/* CAN CONTROLLERS AND ACCEPTANCE FILTER */
#define CAN_ACCEPT_BASE_ADDR		0xE003C000
#define CAN_AFMR		(*(volatile unsigned long *)(CAN_ACCEPT_BASE_ADDR + 0x00))
#define CAN_SFF_SA 		(*(volatile unsigned long *)(CAN_ACCEPT_BASE_ADDR + 0x04))
#define CAN_SFF_GRP_SA 	(*(volatile unsigned long *)(CAN_ACCEPT_BASE_ADDR + 0x08))
#define CAN_EFF_SA 		(*(volatile unsigned long *)(CAN_ACCEPT_BASE_ADDR + 0x0C))
#define CAN_EFF_GRP_SA 	(*(volatile unsigned long *)(CAN_ACCEPT_BASE_ADDR + 0x10))
#define CAN_EOT 		(*(volatile unsigned long *)(CAN_ACCEPT_BASE_ADDR + 0x14))
#define CAN_LUT_ERR_ADR (*(volatile unsigned long *)(CAN_ACCEPT_BASE_ADDR + 0x18))
#define CAN_LUT_ERR 	(*(volatile unsigned long *)(CAN_ACCEPT_BASE_ADDR + 0x1C))

#define CAN_CENTRAL_BASE_ADDR		0xE0040000
#define CAN_TX_SR 	(*(volatile unsigned long *)(CAN_CENTRAL_BASE_ADDR + 0x00))
#define CAN_RX_SR 	(*(volatile unsigned long *)(CAN_CENTRAL_BASE_ADDR + 0x04))
#define CAN_MSR 	(*(volatile unsigned long *)(CAN_CENTRAL_BASE_ADDR + 0x08))

#define CAN1_BASE_ADDR		0xE0044000
#define CAN1MOD 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x00))
#define CAN1CMR 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x04))
#define CAN1GSR 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x08))
#define CAN1ICR 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x0C))
#define CAN1IER 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x10))
#define CAN1BTR 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x14))
#define CAN1EWL 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x18))
#define CAN1SR 		(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x1C))
#define CAN1RFS 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x20))
#define CAN1RID 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x24))
#define CAN1RDA 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x28))
#define CAN1RDB 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x2C))

#define CAN1TFI1 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x30))
#define CAN1TID1 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x34))
#define CAN1TDA1 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x38))
#define CAN1TDB1 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x3C))
#define CAN1TFI2 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x40))
#define CAN1TID2 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x44))
#define CAN1TDA2 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x48))
#define CAN1TDB2 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x4C))
#define CAN1TFI3 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x50))
#define CAN1TID3 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x54))
#define CAN1TDA3 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x58))
#define CAN1TDB3 	(*(volatile unsigned long *)(CAN1_BASE_ADDR + 0x5C))

#define CAN2_BASE_ADDR		0xE0048000
#define CAN2MOD 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x00))
#define CAN2CMR 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x04))
#define CAN2GSR 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x08))
#define CAN2ICR 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x0C))
#define CAN2IER 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x10))
#define CAN2BTR 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x14))
#define CAN2EWL 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x18))
#define CAN2SR 		(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x1C))
#define CAN2RFS 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x20))
#define CAN2RID 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x24))
#define CAN2RDA 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x28))
#define CAN2RDB 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x2C))

#define CAN2TFI1 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x30))
#define CAN2TID1 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x34))
#define CAN2TDA1 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x38))
#define CAN2TDB1 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x3C))
#define CAN2TFI2 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x40))
#define CAN2TID2 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x44))
#define CAN2TDA2 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x48))
#define CAN2TDB2 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x4C))
#define CAN2TFI3 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x50))
#define CAN2TID3 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x54))
#define CAN2TDA3 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x58))
#define CAN2TDB3 	(*(volatile unsigned long *)(CAN2_BASE_ADDR + 0x5C))


/* MultiMedia Card Interface(MCI) Controller */
#define MCI_BASE_ADDR		0xE008C000
#define MCI_POWER      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x00))
#define MCI_CLOCK      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x04))
#define MCI_ARGUMENT   (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x08))
#define MCI_COMMAND    (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x0C))
#define MCI_RESP_CMD   (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x10))
#define MCI_RESP0      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x14))
#define MCI_RESP1      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x18))
#define MCI_RESP2      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x1C))
#define MCI_RESP3      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x20))
#define MCI_DATA_TMR   (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x24))
#define MCI_DATA_LEN   (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x28))
#define MCI_DATA_CTRL  (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x2C))
#define MCI_DATA_CNT   (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x30))
#define MCI_STATUS     (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x34))
#define MCI_CLEAR      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x38))
#define MCI_MASK0      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x3C))
#define MCI_MASK1      (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x40))
#define MCI_FIFO_CNT   (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x48))
#define MCI_FIFO       (*(volatile unsigned long *)(MCI_BASE_ADDR + 0x80))


/* I2S Interface Controller (I2S) */
#define I2S_BASE_ADDR		0xE0088000
#define I2S_DAO        (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x00))
#define I2S_DAI        (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x04))
#define I2S_TX_FIFO    (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x08))
#define I2S_RX_FIFO    (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x0C))
#define I2S_STATE      (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x10))
#define I2S_DMA1       (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x14))
#define I2S_DMA2       (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x18))
#define I2S_IRQ        (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x1C))
#define I2S_TXRATE     (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x20))
#define I2S_RXRATE     (*(volatile unsigned long *)(I2S_BASE_ADDR + 0x24))


/* General-purpose DMA Controller */
#define DMA_BASE_ADDR		0xFFE04000
#define GPDMA_INT_STAT         (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x000))
#define GPDMA_INT_TCSTAT       (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x004))
#define GPDMA_INT_TCCLR        (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x008))
#define GPDMA_INT_ERR_STAT     (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x00C))
#define GPDMA_INT_ERR_CLR      (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x010))
#define GPDMA_RAW_INT_TCSTAT   (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x014))
#define GPDMA_RAW_INT_ERR_STAT (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x018))
#define GPDMA_ENABLED_CHNS     (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x01C))
#define GPDMA_SOFT_BREQ        (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x020))
#define GPDMA_SOFT_SREQ        (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x024))
#define GPDMA_SOFT_LBREQ       (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x028))
#define GPDMA_SOFT_LSREQ       (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x02C))
#define GPDMA_CONFIG           (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x030))
#define GPDMA_SYNC             (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x034))

/* DMA channel 0 registers */
#define GPDMA_CH0_SRC      (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x100))
#define GPDMA_CH0_DEST     (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x104))
#define GPDMA_CH0_LLI      (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x108))
#define GPDMA_CH0_CTRL     (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x10C))
#define GPDMA_CH0_CFG      (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x110))

/* DMA channel 1 registers */
#define GPDMA_CH1_SRC      (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x120))
#define GPDMA_CH1_DEST     (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x124))
#define GPDMA_CH1_LLI      (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x128))
#define GPDMA_CH1_CTRL     (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x12C))
#define GPDMA_CH1_CFG      (*(volatile unsigned long *)(DMA_BASE_ADDR + 0x130))


/* USB Controller */
#define USB_INT_BASE_ADDR	0xE01FC1C0
#define USB_BASE_ADDR		0xFFE0C200		/* USB Base Address */

#define USB_INT_STAT    (*(volatile unsigned long *)(USB_INT_BASE_ADDR + 0x00))

/* USB Device Interrupt Registers */
#define DEV_INT_STAT    (*(volatile unsigned long *)(USB_BASE_ADDR + 0x00))
#define DEV_INT_EN      (*(volatile unsigned long *)(USB_BASE_ADDR + 0x04))
#define DEV_INT_CLR     (*(volatile unsigned long *)(USB_BASE_ADDR + 0x08))
#define DEV_INT_SET     (*(volatile unsigned long *)(USB_BASE_ADDR + 0x0C))
#define DEV_INT_PRIO    (*(volatile unsigned long *)(USB_BASE_ADDR + 0x2C))

/* USB Device Endpoint Interrupt Registers */
#define EP_INT_STAT     (*(volatile unsigned long *)(USB_BASE_ADDR + 0x30))
#define EP_INT_EN       (*(volatile unsigned long *)(USB_BASE_ADDR + 0x34))
#define EP_INT_CLR      (*(volatile unsigned long *)(USB_BASE_ADDR + 0x38))
#define EP_INT_SET      (*(volatile unsigned long *)(USB_BASE_ADDR + 0x3C))
#define EP_INT_PRIO     (*(volatile unsigned long *)(USB_BASE_ADDR + 0x40))

/* USB Device Endpoint Realization Registers */
#define REALIZE_EP      (*(volatile unsigned long *)(USB_BASE_ADDR + 0x44))
#define EP_INDEX        (*(volatile unsigned long *)(USB_BASE_ADDR + 0x48))
#define MAXPACKET_SIZE  (*(volatile unsigned long *)(USB_BASE_ADDR + 0x4C))

/* USB Device Command Reagisters */
#define CMD_CODE        (*(volatile unsigned long *)(USB_BASE_ADDR + 0x10))
#define CMD_DATA        (*(volatile unsigned long *)(USB_BASE_ADDR + 0x14))

/* USB Device Data Transfer Registers */
#define RX_DATA         (*(volatile unsigned long *)(USB_BASE_ADDR + 0x18))
#define TX_DATA         (*(volatile unsigned long *)(USB_BASE_ADDR + 0x1C))
#define RX_PLENGTH      (*(volatile unsigned long *)(USB_BASE_ADDR + 0x20))
#define TX_PLENGTH      (*(volatile unsigned long *)(USB_BASE_ADDR + 0x24))
#define USB_CTRL        (*(volatile unsigned long *)(USB_BASE_ADDR + 0x28))

/* USB Device DMA Registers */
#define DMA_REQ_STAT        (*(volatile unsigned long *)(USB_BASE_ADDR + 0x50))
#define DMA_REQ_CLR         (*(volatile unsigned long *)(USB_BASE_ADDR + 0x54))
#define DMA_REQ_SET         (*(volatile unsigned long *)(USB_BASE_ADDR + 0x58))
#define UDCA_HEAD           (*(volatile unsigned long *)(USB_BASE_ADDR + 0x80))
#define EP_DMA_STAT         (*(volatile unsigned long *)(USB_BASE_ADDR + 0x84))
#define EP_DMA_EN           (*(volatile unsigned long *)(USB_BASE_ADDR + 0x88))
#define EP_DMA_DIS          (*(volatile unsigned long *)(USB_BASE_ADDR + 0x8C))
#define DMA_INT_STAT        (*(volatile unsigned long *)(USB_BASE_ADDR + 0x90))
#define DMA_INT_EN          (*(volatile unsigned long *)(USB_BASE_ADDR + 0x94))
#define EOT_INT_STAT        (*(volatile unsigned long *)(USB_BASE_ADDR + 0xA0))
#define EOT_INT_CLR         (*(volatile unsigned long *)(USB_BASE_ADDR + 0xA4))
#define EOT_INT_SET         (*(volatile unsigned long *)(USB_BASE_ADDR + 0xA8))
#define NDD_REQ_INT_STAT    (*(volatile unsigned long *)(USB_BASE_ADDR + 0xAC))
#define NDD_REQ_INT_CLR     (*(volatile unsigned long *)(USB_BASE_ADDR + 0xB0))
#define NDD_REQ_INT_SET     (*(volatile unsigned long *)(USB_BASE_ADDR + 0xB4))
#define SYS_ERR_INT_STAT    (*(volatile unsigned long *)(USB_BASE_ADDR + 0xB8))
#define SYS_ERR_INT_CLR     (*(volatile unsigned long *)(USB_BASE_ADDR + 0xBC))
#define SYS_ERR_INT_SET     (*(volatile unsigned long *)(USB_BASE_ADDR + 0xC0))

/* USB Host and OTG registers are for LPC24xx only */
/* USB Host Controller */
#define USBHC_BASE_ADDR		0xFFE0C000
#define HC_REVISION         (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x00))
#define HC_CONTROL          (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x04))
#define HC_CMD_STAT         (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x08))
#define HC_INT_STAT         (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x0C))
#define HC_INT_EN           (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x10))
#define HC_INT_DIS          (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x14))
#define HC_HCCA             (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x18))
#define HC_PERIOD_CUR_ED    (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x1C))
#define HC_CTRL_HEAD_ED     (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x20))
#define HC_CTRL_CUR_ED      (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x24))
#define HC_BULK_HEAD_ED     (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x28))
#define HC_BULK_CUR_ED      (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x2C))
#define HC_DONE_HEAD        (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x30))
#define HC_FM_INTERVAL      (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x34))
#define HC_FM_REMAINING     (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x38))
#define HC_FM_NUMBER        (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x3C))
#define HC_PERIOD_START     (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x40))
#define HC_LS_THRHLD        (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x44))
#define HC_RH_DESCA         (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x48))
#define HC_RH_DESCB         (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x4C))
#define HC_RH_STAT          (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x50))
#define HC_RH_PORT_STAT1    (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x54))
#define HC_RH_PORT_STAT2    (*(volatile unsigned long *)(USBHC_BASE_ADDR + 0x58))

/* USB OTG Controller */
#define USBOTG_BASE_ADDR	0xFFE0C100
#define OTG_INT_STAT        (*(volatile unsigned long *)(USBOTG_BASE_ADDR + 0x00))
#define OTG_INT_EN          (*(volatile unsigned long *)(USBOTG_BASE_ADDR + 0x04))
#define OTG_INT_SET         (*(volatile unsigned long *)(USBOTG_BASE_ADDR + 0x08))
#define OTG_INT_CLR         (*(volatile unsigned long *)(USBOTG_BASE_ADDR + 0x0C))
/* On LPC23xx, the name is USBPortSel, on LPC24xx, the name is OTG_STAT_CTRL */
#define OTG_STAT_CTRL       (*(volatile unsigned long *)(USBOTG_BASE_ADDR + 0x10))
#define OTG_TIMER           (*(volatile unsigned long *)(USBOTG_BASE_ADDR + 0x14))

#define USBOTG_I2C_BASE_ADDR	0xFFE0C300
#define OTG_I2C_RX          (*(volatile unsigned long *)(USBOTG_I2C_BASE_ADDR + 0x00))
#define OTG_I2C_TX          (*(volatile unsigned long *)(USBOTG_I2C_BASE_ADDR + 0x00))
#define OTG_I2C_STS         (*(volatile unsigned long *)(USBOTG_I2C_BASE_ADDR + 0x04))
#define OTG_I2C_CTL         (*(volatile unsigned long *)(USBOTG_I2C_BASE_ADDR + 0x08))
#define OTG_I2C_CLKHI       (*(volatile unsigned long *)(USBOTG_I2C_BASE_ADDR + 0x0C))
#define OTG_I2C_CLKLO       (*(volatile unsigned long *)(USBOTG_I2C_BASE_ADDR + 0x10))

/* On LPC23xx, the names are USBClkCtrl and USBClkSt; on LPC24xx, the names are
OTG_CLK_CTRL and OTG_CLK_STAT respectively. */
#define USBOTG_CLK_BASE_ADDR	0xFFE0CFF0
#define OTG_CLK_CTRL        (*(volatile unsigned long *)(USBOTG_CLK_BASE_ADDR + 0x04))
#define OTG_CLK_STAT        (*(volatile unsigned long *)(USBOTG_CLK_BASE_ADDR + 0x08))

/* Note: below three register name convention is for LPC23xx USB device only, match
with the spec. update in USB Device Section. */
#define USBPortSel          (*(volatile unsigned long *)(USBOTG_BASE_ADDR + 0x10))
#define USBClkCtrl          (*(volatile unsigned long *)(USBOTG_CLK_BASE_ADDR + 0x04))
#define USBClkSt            (*(volatile unsigned long *)(USBOTG_CLK_BASE_ADDR + 0x08))

/* Ethernet MAC (32 bit data bus) -- all registers are RW unless indicated in parentheses */
#define MAC_BASE_ADDR		0xFFE00000 /* AHB Peripheral # 0 */
#define MAC_MAC1            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x000)) /* MAC config reg 1 */
#define MAC_MAC2            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x004)) /* MAC config reg 2 */
#define MAC_IPGT            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x008)) /* b2b InterPacketGap reg */
#define MAC_IPGR            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x00C)) /* non b2b InterPacketGap reg */
#define MAC_CLRT            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x010)) /* CoLlision window/ReTry reg */
#define MAC_MAXF            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x014)) /* MAXimum Frame reg */
#define MAC_SUPP            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x018)) /* PHY SUPPort reg */
#define MAC_TEST            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x01C)) /* TEST reg */
#define MAC_MCFG            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x020)) /* MII Mgmt ConFiG reg */
#define MAC_MCMD            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x024)) /* MII Mgmt CoMmanD reg */
#define MAC_MADR            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x028)) /* MII Mgmt ADdRess reg */
#define MAC_MWTD            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x02C)) /* MII Mgmt WriTe Data reg (WO) */
#define MAC_MRDD            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x030)) /* MII Mgmt ReaD Data reg (RO) */
#define MAC_MIND            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x034)) /* MII Mgmt INDicators reg (RO) */

#define MAC_SA0             (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x040)) /* Station Address 0 reg */
#define MAC_SA1             (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x044)) /* Station Address 1 reg */
#define MAC_SA2             (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x048)) /* Station Address 2 reg */

#define MAC_COMMAND         (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x100)) /* Command reg */
#define MAC_STATUS          (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x104)) /* Status reg (RO) */
#define MAC_RXDESCRIPTOR    (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x108)) /* Rx descriptor base address reg */
#define MAC_RXSTATUS        (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x10C)) /* Rx status base address reg */
#define MAC_RXDESCRIPTORNUM (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x110)) /* Rx number of descriptors reg */
#define MAC_RXPRODUCEINDEX  (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x114)) /* Rx produce index reg (RO) */
#define MAC_RXCONSUMEINDEX  (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x118)) /* Rx consume index reg */
#define MAC_TXDESCRIPTOR    (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x11C)) /* Tx descriptor base address reg */
#define MAC_TXSTATUS        (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x120)) /* Tx status base address reg */
#define MAC_TXDESCRIPTORNUM (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x124)) /* Tx number of descriptors reg */
#define MAC_TXPRODUCEINDEX  (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x128)) /* Tx produce index reg */
#define MAC_TXCONSUMEINDEX  (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x12C)) /* Tx consume index reg (RO) */

#define MAC_TSV0            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x158)) /* Tx status vector 0 reg (RO) */
#define MAC_TSV1            (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x15C)) /* Tx status vector 1 reg (RO) */
#define MAC_RSV             (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x160)) /* Rx status vector reg (RO) */

#define MAC_FLOWCONTROLCNT  (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x170)) /* Flow control counter reg */
#define MAC_FLOWCONTROLSTS  (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x174)) /* Flow control status reg */

#define MAC_RXFILTERCTRL    (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x200)) /* Rx filter ctrl reg */
#define MAC_RXFILTERWOLSTS  (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x204)) /* Rx filter WoL status reg (RO) */
#define MAC_RXFILTERWOLCLR  (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x208)) /* Rx filter WoL clear reg (WO) */

#define MAC_HASHFILTERL     (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x210)) /* Hash filter LSBs reg */
#define MAC_HASHFILTERH     (*(volatile unsigned long *)(MAC_BASE_ADDR + 0x214)) /* Hash filter MSBs reg */

#define MAC_INTSTATUS       (*(volatile unsigned long *)(MAC_BASE_ADDR + 0xFE0)) /* Interrupt status reg (RO) */
#define MAC_INTENABLE       (*(volatile unsigned long *)(MAC_BASE_ADDR + 0xFE4)) /* Interrupt enable reg  */
#define MAC_INTCLEAR        (*(volatile unsigned long *)(MAC_BASE_ADDR + 0xFE8)) /* Interrupt clear reg (WO) */
#define MAC_INTSET          (*(volatile unsigned long *)(MAC_BASE_ADDR + 0xFEC)) /* Interrupt set reg (WO) */

#define MAC_POWERDOWN       (*(volatile unsigned long *)(MAC_BASE_ADDR + 0xFF4)) /* Power-down reg */
#define MAC_MODULEID        (*(volatile unsigned long *)(MAC_BASE_ADDR + 0xFFC)) /* Module ID reg (RO) */


#define BIT_DEF_00          0x00000001
#define BIT_DEF_01          0x00000002
#define BIT_DEF_02          0x00000004
#define BIT_DEF_03          0x00000008
#define BIT_DEF_04          0x00000010
#define BIT_DEF_05          0x00000020
#define BIT_DEF_06          0x00000040
#define BIT_DEF_07          0x00000080
#define BIT_DEF_08          0x00000100
#define BIT_DEF_09          0x00000200
#define BIT_DEF_10          0x00000400
#define BIT_DEF_11          0x00000800
#define BIT_DEF_12          0x00001000
#define BIT_DEF_13          0x00002000
#define BIT_DEF_14          0x00004000
#define BIT_DEF_15          0x00008000
#define BIT_DEF_16          0x00010000
#define BIT_DEF_17          0x00020000
#define BIT_DEF_18          0x00040000
#define BIT_DEF_19          0x00080000
#define BIT_DEF_20          0x00100000
#define BIT_DEF_21          0x00200000
#define BIT_DEF_22          0x00400000
#define BIT_DEF_23          0x00800000
#define BIT_DEF_24          0x01000000
#define BIT_DEF_25          0x02000000
#define BIT_DEF_26          0x04000000
#define BIT_DEF_27          0x08000000
#define BIT_DEF_28          0x10000000
#define BIT_DEF_29          0x20000000
#define BIT_DEF_30          0x40000000
#define BIT_DEF_31          0x80000000


#define CLKSRCSEL_CLKSRC_INT_RC             (uint32_t)(0)
#define CLKSRCSEL_CLKSRC_MAIN_OSC           (uint32_t)(BIT_DEF_00)
#define CLKSRCSEL_CLKSRC_RTC_OSC            (uint32_t)(BIT_DEF_01)
#define CLKSRCSEL_CLKSRC_MASK               (uint32_t)(BIT_DEF_00 | BIT_DEF_01)

#define PINSEL0_P0_0_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_0_RD1                    (uint32_t)(BIT_DEF_00)
#define PINSEL0_P0_0_TXD3                   (uint32_t)(BIT_DEF_01)
#define PINSEL0_P0_0_SDA1                   (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL0_P0_0_MASK                   (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL0_P0_1_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_1_TD1                    (uint32_t)(BIT_DEF_02)
#define PINSEL0_P0_1_RXD3                   (uint32_t)(BIT_DEF_03)
#define PINSEL0_P0_1_SCL                    (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL0_P0_1_MASK                   (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL0_P0_2_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_2_TXD0                   (uint32_t)(BIT_DEF_04)
#define PINSEL0_P0_2_MASK                   (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL0_P0_3_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_3_RXD0                   (uint32_t)(BIT_DEF_06)
#define PINSEL0_P0_3_MASK                   (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL0_P0_4_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_4_I2SRX_CLK              (uint32_t)(BIT_DEF_08)
#define PINSEL0_P0_4_LCDVD_0                (uint32_t)(BIT_DEF_08)
#define PINSEL0_P0_4_RD2                    (uint32_t)(BIT_DEF_09)
#define PINSEL0_P0_4_CAP2_0                 (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL0_P0_4_MASK                   (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL0_P0_5_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_5_I2SRX_WS               (uint32_t)(BIT_DEF_10)
#define PINSEL0_P0_5_LCDVD_1                (uint32_t)(BIT_DEF_10)
#define PINSEL0_P0_5_TD2                    (uint32_t)(BIT_DEF_11)
#define PINSEL0_P0_5_CAP2_1                 (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL0_P0_5_MASK                   (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL0_P0_6_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_6_I2SRX_SDA              (uint32_t)(BIT_DEF_12)
#define PINSEL0_P0_6_LCDVD_8                (uint32_t)(BIT_DEF_12)
#define PINSEL0_P0_6_SSEL1                  (uint32_t)(BIT_DEF_13)
#define PINSEL0_P0_6_MAT2_0                 (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL0_P0_6_MASK                   (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL0_P0_7_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_7_I2STX_CLK              (uint32_t)(BIT_DEF_14)
#define PINSEL0_P0_7_LCDVD_9                (uint32_t)(BIT_DEF_14)
#define PINSEL0_P0_7_SCK1                   (uint32_t)(BIT_DEF_15)
#define PINSEL0_P0_7_MAT2_1                 (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL0_P0_7_MASK                   (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL0_P0_8_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_8_I2STX_WS               (uint32_t)(BIT_DEF_16)
#define PINSEL0_P0_8_LCDV_16                (uint32_t)(BIT_DEF_16)
#define PINSEL0_P0_8_MISO1                  (uint32_t)(BIT_DEF_17)
#define PINSEL0_P0_8_MAT2_2                 (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL0_P0_8_MASK                   (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL0_P0_9_GPIO                   (uint32_t)(0)
#define PINSEL0_P0_9_I2STX_SDA              (uint32_t)(BIT_DEF_18)
#define PINSEL0_P0_9_LCDVD_17               (uint32_t)(BIT_DEF_18)
#define PINSEL0_P0_9_MOSI1                  (uint32_t)(BIT_DEF_19)
#define PINSEL0_P0_9_MAT2_3                 (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL0_P0_9_MASK                   (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL0_P0_10_GPIO                  (uint32_t)(0)
#define PINSEL0_P0_10_TXD2                  (uint32_t)(BIT_DEF_20)
#define PINSEL0_P0_10_SDA2                  (uint32_t)(BIT_DEF_21)
#define PINSEL0_P0_10_MAT3_0                (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL0_P0_10_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL0_P0_11_GPIO                  (uint32_t)(0)
#define PINSEL0_P0_11_RXD2                  (uint32_t)(BIT_DEF_22)
#define PINSEL0_P0_11_SCL2                  (uint32_t)(BIT_DEF_23)
#define PINSEL0_P0_11_MAT3_1                (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL0_P0_11_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL0_P0_12_GPIO                  (uint32_t)(0)
#define PINSEL0_P0_12_USB_PPWR2             (uint32_t)(BIT_DEF_24)
#define PINSEL0_P0_12_MISO1                 (uint32_t)(BIT_DEF_25)
#define PINSEL0_P0_12_AD0_6                 (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL0_P0_12_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL0_P0_13_GPIO                  (uint32_t)(0)
#define PINSEL0_P0_13_USB_UP_LED2           (uint32_t)(BIT_DEF_26)
#define PINSEL0_P0_13_MOSI1                 (uint32_t)(BIT_DEF_27)
#define PINSEL0_P0_13_AD0_7                 (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL0_P0_13_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL0_P0_14_GPIO                  (uint32_t)(0)
#define PINSEL0_P0_14_USB_HSTEN2            (uint32_t)(BIT_DEF_28)
#define PINSEL0_P0_14_USB_CONN              (uint32_t)(BIT_DEF_29)
#define PINSEL0_P0_14_SSEL1                 (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL0_P0_14_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL0_P0_15_GPIO                  (uint32_t)(0)
#define PINSEL0_P0_15_TXD1                  (uint32_t)(BIT_DEF_30)
#define PINSEL0_P0_15_SCK0                  (uint32_t)(BIT_DEF_31)
#define PINSEL0_P0_15_SCK                   (uint32_t)(BIT_DEF_30 | BIT_DEF_31)
#define PINSEL0_P0_15_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL1_P0_16_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_16_RXD1                  (uint32_t)(BIT_DEF_00)
#define PINSEL1_P0_16_SSEL0                 (uint32_t)(BIT_DEF_01)
#define PINSEL1_P0_16_SSEL                  (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL1_P0_16_MASK                  (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL1_P0_17_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_17_CTS1                  (uint32_t)(BIT_DEF_02)
#define PINSEL1_P0_17_MISO0                 (uint32_t)(BIT_DEF_03)
#define PINSEL1_P0_17_MISO                  (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL1_P0_17_MASK                  (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL1_P0_18_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_18_MOSI0                 (uint32_t)(BIT_DEF_04)
#define PINSEL1_P0_18_MOSI                  (uint32_t)(BIT_DEF_05)
#define PINSEL1_P0_18_MASK                  (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL1_P0_18_MASK                  (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL1_P0_19_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_19_DSR1                  (uint32_t)(BIT_DEF_06)
#define PINSEL1_P0_19_MCICLK                (uint32_t)(BIT_DEF_07)
#define PINSEL1_P0_19_SDA1                  (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL1_P0_19_MASK                  (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL1_P0_20_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_20_DTR1                  (uint32_t)(BIT_DEF_08)
#define PINSEL1_P0_20_MCICMD                (uint32_t)(BIT_DEF_08)
#define PINSEL1_P0_20_SCL1                  (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL1_P0_20_MASK                  (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL1_P0_21_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_21_RI1                   (uint32_t)(BIT_DEF_10)
#define PINSEL1_P0_21_MCIPWR                (uint32_t)(BIT_DEF_11)
#define PINSEL1_P0_21_RD1                   (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL1_P0_21_MASK                  (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL1_P0_22_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_22_RTS1                  (uint32_t)(BIT_DEF_12)
#define PINSEL1_P0_22_MCIDAT0               (uint32_t)(BIT_DEF_13)
#define PINSEL1_P0_22_TD1                   (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL1_P0_22_MASK                  (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL1_P0_23_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_23_AD0_0                 (uint32_t)(BIT_DEF_14)
#define PINSEL1_P0_23_I2SRX_CLK             (uint32_t)(BIT_DEF_15)
#define PINSEL1_P0_23_CAP3_0                (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL1_P0_23_MASK                  (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL1_P0_24_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_24_AD0_1                 (uint32_t)(BIT_DEF_16)
#define PINSEL1_P0_24_I2SRX_WS              (uint32_t)(BIT_DEF_17)
#define PINSEL1_P0_24_CAP3_1                (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL1_P0_24_MASK                  (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL1_P0_25_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_25_AD0_2                 (uint32_t)(BIT_DEF_18)
#define PINSEL1_P0_25_I2SRX_SDA             (uint32_t)(BIT_DEF_19)
#define PINSEL1_P0_25_TXD3                  (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL1_P0_25_MASK                  (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL1_P0_26_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_26_AD0_3                 (uint32_t)(BIT_DEF_20)
#define PINSEL1_P0_26_AOUT                  (uint32_t)(BIT_DEF_21)
#define PINSEL1_P0_26_RXD3                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL1_P0_26_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL1_P0_27_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_27_SDA0                  (uint32_t)(BIT_DEF_22)
#define PINSEL1_P0_27_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL1_P0_28_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_28_SCL0                  (uint32_t)(BIT_DEF_24)
#define PINSEL1_P0_28_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL1_P0_29_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_29_USB_DP_1              (uint32_t)(BIT_DEF_26)
#define PINSEL1_P0_29_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL1_P0_30_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_30_USB_DM_1              (uint32_t)(BIT_DEF_28)
#define PINSEL1_P0_30_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL1_P0_31_GPIO                  (uint32_t)(0)
#define PINSEL1_P0_31_USB_DP_2              (uint32_t)(BIT_DEF_30)
#define PINSEL1_P0_31_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL2_P1_0_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_0_ENET_TXD0              (uint32_t)(BIT_DEF_00)
#define PINSEL2_P1_0_MASK                   (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL2_P1_1_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_1_ENET_TXD1              (uint32_t)(BIT_DEF_02)
#define PINSEL2_P1_1_MASK                   (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL2_P1_2_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_2_ENET_TXD2              (uint32_t)(BIT_DEF_04)
#define PINSEL2_P1_2_MCICLK                 (uint32_t)(BIT_DEF_05)
#define PINSEL2_P1_2_PWM0_1                 (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL2_P1_2_MASK                   (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL2_P1_3_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_3_ENET_TXD3              (uint32_t)(BIT_DEF_06)
#define PINSEL2_P1_3_MCICMD                 (uint32_t)(BIT_DEF_07)
#define PINSEL2_P1_3_PWM0_2                 (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL2_P1_3_MASK                   (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL2_P1_4_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_4_ENET_TX_EN             (uint32_t)(BIT_DEF_08)
#define PINSEL2_P1_4_MASK                   (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL2_P1_5_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_5_ENET_TX_ER             (uint32_t)(BIT_DEF_10)
#define PINSEL2_P1_5_MCIPWR                 (uint32_t)(BIT_DEF_11)
#define PINSEL2_P1_5_PWM0_3                 (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL2_P1_5_MASK                   (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL2_P1_6_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_6_ENET_TX_CLK            (uint32_t)(BIT_DEF_12)
#define PINSEL2_P1_6_MCIDAT0                (uint32_t)(BIT_DEF_13)
#define PINSEL2_P1_6_PWM0_4                 (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL2_P1_6_MASK                   (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL2_P1_7_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_7_ENET_COL               (uint32_t)(BIT_DEF_14)
#define PINSEL2_P1_7_MCIDAT1                (uint32_t)(BIT_DEF_15)
#define PINSEL2_P1_7_PWM0_5                 (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL2_P1_7_MASK                   (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL2_P1_8_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_8_ENET_CRS_DV            (uint32_t)(BIT_DEF_16)
#define PINSEL2_P1_8_ENET_CRS               (uint32_t)(BIT_DEF_16)
#define PINSEL2_P1_8_MASK                   (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL2_P1_9_GPIO                   (uint32_t)(0)
#define PINSEL2_P1_9_ENET_RXD0              (uint32_t)(BIT_DEF_18)
#define PINSEL2_P1_9_MASK                   (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL2_P1_10_GPIO                  (uint32_t)(0)
#define PINSEL2_P1_10_ENET_RXD1             (uint32_t)(BIT_DEF_20)
#define PINSEL2_P1_10_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL2_P1_11_GPIO                  (uint32_t)(0)
#define PINSEL2_P1_11_ENET_RXD2             (uint32_t)(BIT_DEF_22)
#define PINSEL2_P1_11_MCIDAT2               (uint32_t)(BIT_DEF_23)
#define PINSEL2_P1_11_PWM0_6                (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL2_P1_11_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL2_P1_12_GPIO                  (uint32_t)(0)
#define PINSEL2_P1_12_ENET_RXD3             (uint32_t)(BIT_DEF_24)
#define PINSEL2_P1_12_MCIDAT3               (uint32_t)(BIT_DEF_25)
#define PINSEL2_P1_12_PCAP0_0               (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL2_P1_12_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL2_P1_13_GPIO                  (uint32_t)(0)
#define PINSEL2_P1_13_ENET_RX_DV            (uint32_t)(BIT_DEF_26)
#define PINSEL2_P1_13_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL2_P1_14_GPIO                  (uint32_t)(0)
#define PINSEL2_P1_14_ENET_RX_ER            (uint32_t)(BIT_DEF_28)
#define PINSEL2_P1_14_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL2_P1_15_GPIO                  (uint32_t)(0)
#define PINSEL2_P1_15_ENET_REF_CLK          (uint32_t)(BIT_DEF_30)
#define PINSEL2_P1_15_ENET_RX_CLK           (uint32_t)(BIT_DEF_30)
#define PINSEL2_P1_15_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL3_P1_16_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_16_ENET_MDC              (uint32_t)(BIT_DEF_00)
#define PINSEL3_P1_16_MASK                  (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL3_P1_17_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_17_ENET_MDIO             (uint32_t)(BIT_DEF_02)
#define PINSEL3_P1_17_MASK                  (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL3_P1_18_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_18_USP_UP_LED1           (uint32_t)(BIT_DEF_04)
#define PINSEL3_P1_18_PWM1_1                (uint32_t)(BIT_DEF_05)
#define PINSEL3_P1_18_CAP1_0                (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL3_P1_18_MASK                  (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL3_P1_19_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_19_USB_TX_E1             (uint32_t)(BIT_DEF_06)
#define PINSEL3_P1_19_USB_PPWR1             (uint32_t)(BIT_DEF_07)
#define PINSEL3_P1_19_CAP1_1                (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL3_P1_19_MASK                  (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL3_P1_20_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_20_USB_TX_DP1            (uint32_t)(BIT_DEF_08)
#define PINSEL3_P1_20_LCDVD_6               (uint32_t)(BIT_DEF_08)
#define PINSEL3_P1_20_LCDVD_10              (uint32_t)(BIT_DEF_08)
#define PINSEL3_P1_20_PWM1_2                (uint32_t)(BIT_DEF_09)
#define PINSEL3_P1_20_SCK0                  (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL3_P1_20_SCK0                  (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL3_P1_21_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_21_USB_TX_DM1            (uint32_t)(BIT_DEF_10)
#define PINSEL3_P1_21_LCDVD_7               (uint32_t)(BIT_DEF_10)
#define PINSEL3_P1_21_LCDVD_11              (uint32_t)(BIT_DEF_10)
#define PINSEL3_P1_21_PWM1_3                (uint32_t)(BIT_DEF_11)
#define PINSEL3_P1_21_SSEL1                 (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL3_P1_21_MASK                  (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL3_P1_22_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_22_USB_RCV1              (uint32_t)(BIT_DEF_12)
#define PINSEL3_P1_22_LCDVD_8               (uint32_t)(BIT_DEF_12)
#define PINSEL3_P1_22_LCDVD_12              (uint32_t)(BIT_DEF_12)
#define PINSEL3_P1_22_USB_PW1               (uint32_t)(BIT_DEF_13)
#define PINSEL3_P1_22_MAT1_0                (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL3_P1_22_MASK                  (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL3_P1_23_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_23_USB_RX_DP1            (uint32_t)(BIT_DEF_14)
#define PINSEL3_P1_23_LCDVD_9               (uint32_t)(BIT_DEF_14)
#define PINSEL3_P1_23_LCDVD_13              (uint32_t)(BIT_DEF_14)
#define PINSEL3_P1_23_PWM1_4                (uint32_t)(BIT_DEF_15)
#define PINSEL3_P1_23_MISO0                 (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL3_P1_23_MASK                  (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL3_P1_24_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_24_USB_DM1               (uint32_t)(BIT_DEF_16)
#define PINSEL3_P1_24_LCDVD_10              (uint32_t)(BIT_DEF_16)
#define PINSEL3_P1_24_LCDVD_14              (uint32_t)(BIT_DEF_16)
#define PINSEL3_P1_24_PWM1_5                (uint32_t)(BIT_DEF_17)
#define PINSEL3_P1_24_MOSI0                 (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL3_P1_24_MASK                  (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL3_P1_25_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_25_USB_LS1               (uint32_t)(BIT_DEF_18)
#define PINSEL3_P1_25_LCDVD_11              (uint32_t)(BIT_DEF_18)
#define PINSEL3_P1_25_LCDVD_15              (uint32_t)(BIT_DEF_18)
#define PINSEL3_P1_25_USB_HSTEN1            (uint32_t)(BIT_DEF_19)
#define PINSEL3_P1_25_MAT1_1                (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL3_P1_25_MASK                  (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL3_P1_26_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_26_USB_SSPND1            (uint32_t)(BIT_DEF_20)
#define PINSEL3_P1_26_LCDVD_12              (uint32_t)(BIT_DEF_20)
#define PINSEL3_P1_26_LCDVD_20              (uint32_t)(BIT_DEF_20)
#define PINSEL3_P1_26 PWM1_6                (uint32_t)(BIT_DEF_21)
#define PINSEL3_P1_26_CAP0_0                (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL3_P1_26_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL3_P1_27_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_27_USB_INT1              (uint32_t)(BIT_DEF_22)
#define PINSEL3_P1_27_LCDVD_13              (uint32_t)(BIT_DEF_22)
#define PINSEL3_P1_27_LCDVD_21              (uint32_t)(BIT_DEF_22)
#define PINSEL3_P1_27_USB_OVRCR1            (uint32_t)(BIT_DEF_23)
#define PINSEL3_P1_27_CAP0_1                (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL3_P1_27_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL3_P1_28_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_28_USB_SCL1              (uint32_t)(BIT_DEF_24)
#define PINSEL3_P1_28_LCDVD_14              (uint32_t)(BIT_DEF_24)
#define PINSEL3_P1_28_LCDVD_22              (uint32_t)(BIT_DEF_24)
#define PINSEL3_P1_28_PCAP1_0               (uint32_t)(BIT_DEF_25)
#define PINSEL3_P1_28_MAT0_0                (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL3_P1_28_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL3_P1_29_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_29_USB_SDA1              (uint32_t)(BIT_DEF_26)
#define PINSEL3_P1_29_LCDVD_15              (uint32_t)(BIT_DEF_26)
#define PINSEL3_P1_29_LCDVD_23              (uint32_t)(BIT_DEF_26)
#define PINSEL3_P1_29_PCAP1_1               (uint32_t)(BIT_DEF_27)
#define PINSEL3_P1_29_MAT0_1                (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL3_P1_29_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL3_P1_30_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_30_USB_PWRD2             (uint32_t)(BIT_DEF_28)
#define PINSEL3_P1_30_VBUS                  (uint32_t)(BIT_DEF_29)
#define PINSEL3_P1_30_AD0_4                 (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL3_P1_30_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL3_P1_31_GPIO                  (uint32_t)(0)
#define PINSEL3_P1_31_USB_OVRCR2            (uint32_t)(BIT_DEF_30)
#define PINSEL3_P1_31_SCK1                  (uint32_t)(BIT_DEF_31)
#define PINSEL3_P1_31_AD0_5                 (uint32_t)(BIT_DEF_30 | BIT_DEF_31)
#define PINSEL3_P1_31_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL4_P2_0_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_0_                       (uint32_t)(BIT_DEF_00)
#define PINSEL4_P2_0_MASK                   (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL4_P2_1_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_1_                       (uint32_t)(BIT_DEF_02)
#define PINSEL4_P2_1_MASK                   (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL4_P2_2_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_2_                       (uint32_t)(BIT_DEF_04)
#define PINSEL4_P2_2_MASK                   (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL4_P2_3_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_3_                       (uint32_t)(BIT_DEF_06)
#define PINSEL4_P2_3_MASK                   (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL4_P2_4_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_4_                       (uint32_t)(BIT_DEF_08)
#define PINSEL4_P2_4_MASK                   (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL4_P2_5_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_5_                       (uint32_t)(BIT_DEF_10)
#define PINSEL4_P2_5_MASK                   (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL4_P2_6_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_6_                       (uint32_t)(BIT_DEF_12)
#define PINSEL4_P2_6_MASK                   (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL4_P2_7_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_7_                       (uint32_t)(BIT_DEF_14)
#define PINSEL4_P2_7_MASK                   (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL4_P2_8_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_8_                       (uint32_t)(BIT_DEF_16)
#define PINSEL4_P2_8_MASK                   (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL4_P2_9_GPIO                   (uint32_t)(0)
#define PINSEL4_P2_9_                       (uint32_t)(BIT_DEF_18)
#define PINSEL4_P2_9_MASK                   (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL4_P2_10_GPIO                  (uint32_t)(0)
#define PINSEL4_P2_10                       (uint32_t)(BIT_DEF_20)
#define PINSEL4_P2_10_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL4_P2_11_GPIO                  (uint32_t)(0)
#define PINSEL4_P2_11                       (uint32_t)(BIT_DEF_22)
#define PINSEL4_P2_11_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL4_P2_12_GPIO                  (uint32_t)(0)
#define PINSEL4_P2_12                       (uint32_t)(BIT_DEF_24)
#define PINSEL4_P2_12_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL4_P2_13_GPIO                  (uint32_t)(0)
#define PINSEL4_P2_13                       (uint32_t)(BIT_DEF_26)
#define PINSEL4_P2_13_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL4_P2_14_GPIO                  (uint32_t)(0)
#define PINSEL4_P2_14                       (uint32_t)(BIT_DEF_28)
#define PINSEL4_P2_14_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL4_P2_15_GPIO                  (uint32_t)(0)
#define PINSEL4_P2_15                       (uint32_t)(BIT_DEF_30)
#define PINSEL4_P2_15_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL5_P2_16_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_16_                      (uint32_t)(BIT_DEF_00)
#define PINSEL5_P2_16_MASK                  (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL5_P2_17_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_17_                      (uint32_t)(BIT_DEF_02)
#define PINSEL5_P2_17_MASK                  (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL5_P2_18_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_18_                      (uint32_t)(BIT_DEF_04)
#define PINSEL5_P2_18_MASK                  (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL5_P2_19_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_19_                      (uint32_t)(BIT_DEF_06)
#define PINSEL5_P2_19_MASK                  (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL5_P2_20_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_20_                      (uint32_t)(BIT_DEF_08)
#define PINSEL5_P2_20_MASK                  (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL5_P2_21_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_21_                      (uint32_t)(BIT_DEF_10)
#define PINSEL5_P2_21_MASK                  (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL5_P2_22_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_22_                      (uint32_t)(BIT_DEF_12)
#define PINSEL5_P2_22_MASK                  (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL5_P2_23_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_23_                      (uint32_t)(BIT_DEF_14)
#define PINSEL5_P2_23_MASK                  (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL5_P2_24_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_24_                      (uint32_t)(BIT_DEF_16)
#define PINSEL5_P2_24_MASK                  (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL5_P2_25_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_25_                      (uint32_t)(BIT_DEF_18)
#define PINSEL5_P2_25_MASK                  (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL5_P2_26_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_26                       (uint32_t)(BIT_DEF_20)
#define PINSEL5_P2_26_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL5_P2_27_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_27                       (uint32_t)(BIT_DEF_22)
#define PINSEL5_P2_27_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL5_P2_28_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_28                       (uint32_t)(BIT_DEF_24)
#define PINSEL5_P2_28_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL5_P2_29_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_29                       (uint32_t)(BIT_DEF_26)
#define PINSEL5_P2_29_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL5_P2_30_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_30                       (uint32_t)(BIT_DEF_28)
#define PINSEL5_P2_30_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL5_P2_31_GPIO                  (uint32_t)(0)
#define PINSEL5_P2_31                       (uint32_t)(BIT_DEF_30)
#define PINSEL5_P2_31_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL6_P3_0_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_0_                       (uint32_t)(BIT_DEF_00)
#define PINSEL6_P3_0_MASK                   (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL6_P3_1_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_1_                       (uint32_t)(BIT_DEF_02)
#define PINSEL6_P3_1_MASK                   (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL6_P3_2_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_2_                       (uint32_t)(BIT_DEF_04)
#define PINSEL6_P3_2_MASK                   (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL6_P3_3_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_3_                       (uint32_t)(BIT_DEF_06)
#define PINSEL6_P3_3_MASK                   (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL6_P3_4_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_4_                       (uint32_t)(BIT_DEF_08)
#define PINSEL6_P3_4_MASK                   (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL6_P3_5_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_5_                       (uint32_t)(BIT_DEF_10)
#define PINSEL6_P3_5_MASK                   (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL6_P3_6_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_6_                       (uint32_t)(BIT_DEF_12)
#define PINSEL6_P3_6_MASK                   (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL6_P3_7_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_7_                       (uint32_t)(BIT_DEF_14)
#define PINSEL6_P3_7_MASK                   (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL6_P3_8_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_8_                       (uint32_t)(BIT_DEF_16)
#define PINSEL6_P3_8_MASK                   (uint32_t)(BIT_DEF_16 | BIT_DEF_17
#define PINSEL6_P3_9_GPIO                   (uint32_t)(0)
#define PINSEL6_P3_9_                       (uint32_t)(BIT_DEF_18)
#define PINSEL6_P3_9_MASK                   (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL6_P3_10_GPIO                  (uint32_t)(0)
#define PINSEL6_P3_10                       (uint32_t)(BIT_DEF_20)
#define PINSEL6_P3_10_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL6_P3_11_GPIO                  (uint32_t)(0)
#define PINSEL6_P3_11                       (uint32_t)(BIT_DEF_22)
#define PINSEL6_P3_11_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL6_P3_12_GPIO                  (uint32_t)(0)
#define PINSEL6_P3_12                       (uint32_t)(BIT_DEF_24)
#define PINSEL6_P3_12_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL6_P3_13_GPIO                  (uint32_t)(0)
#define PINSEL6_P3_13                       (uint32_t)(BIT_DEF_26)
#define PINSEL6_P3_13_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL6_P3_14_GPIO                  (uint32_t)(0)
#define PINSEL6_P3_14                       (uint32_t)(BIT_DEF_28)
#define PINSEL6_P3_14_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL6_P3_15_GPIO                  (uint32_t)(0)
#define PINSEL6_P3_15                       (uint32_t)(BIT_DEF_30)
#define PINSEL6_P3_15_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL7_P3_16_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_16_                      (uint32_t)(BIT_DEF_00)
#define PINSEL7_P3_16_MASK                  (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL7_P3_17_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_17_                      (uint32_t)(BIT_DEF_02)
#define PINSEL7_P3_17_MASK                  (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL7_P3_18_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_18_                      (uint32_t)(BIT_DEF_04)
#define PINSEL7_P3_18_MASK                  (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL7_P3_19_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_19_                      (uint32_t)(BIT_DEF_06)
#define PINSEL7_P3_19_MASK                  (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL7_P3_20_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_20_                      (uint32_t)(BIT_DEF_08)
#define PINSEL7_P3_20_MASK                  (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL7_P3_21_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_21_                      (uint32_t)(BIT_DEF_10)
#define PINSEL7_P3_21_MASK                  (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL7_P3_22_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_22_                      (uint32_t)(BIT_DEF_12)
#define PINSEL7_P3_22_MASK                  (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL7_P3_23_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_23_                      (uint32_t)(BIT_DEF_14)
#define PINSEL7_P3_23_MASK                  (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL7_P3_24_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_24_                      (uint32_t)(BIT_DEF_16)
#define PINSEL7_P3_24_MASK                  (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL7_P3_25_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_25_                      (uint32_t)(BIT_DEF_18)
#define PINSEL7_P3_25_MASK                  (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL7_P3_26_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_26                       (uint32_t)(BIT_DEF_20)
#define PINSEL7_P3_26_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL7_P3_27_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_27                       (uint32_t)(BIT_DEF_22)
#define PINSEL7_P3_27_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL7_P3_28_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_28                       (uint32_t)(BIT_DEF_24)
#define PINSEL7_P3_28_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL7_P3_29_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_29                       (uint32_t)(BIT_DEF_26)
#define PINSEL7_P3_29_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL7_P3_30_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_30                       (uint32_t)(BIT_DEF_28)
#define PINSEL7_P3_30_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL7_P3_31_GPIO                  (uint32_t)(0)
#define PINSEL7_P3_31                       (uint32_t)(BIT_DEF_30)
#define PINSEL7_P3_31_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL8_P4_0_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_0_                       (uint32_t)(BIT_DEF_00)
#define PINSEL8_P4_0_MASK                   (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL8_P4_1_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_1_                       (uint32_t)(BIT_DEF_02)
#define PINSEL8_P4_1_MASK                   (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL8_P4_2_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_2_                       (uint32_t)(BIT_DEF_04)
#define PINSEL8_P4_2_MASK                   (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL8_P4_3_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_3_                       (uint32_t)(BIT_DEF_06)
#define PINSEL8_P4_3_MASK                   (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL8_P4_4_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_4_                       (uint32_t)(BIT_DEF_08)
#define PINSEL8_P4_4_MASK                   (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL8_P4_5_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_5_                       (uint32_t)(BIT_DEF_10)
#define PINSEL8_P4_5_MASK                   (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL8_P4_6_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_6_                       (uint32_t)(BIT_DEF_12)
#define PINSEL8_P4_6_MASK                   (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL8_P4_7_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_7_                       (uint32_t)(BIT_DEF_14)
#define PINSEL8_P4_7_MASK                   (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL8_P4_8_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_8_                       (uint32_t)(BIT_DEF_16)
#define PINSEL8_P4_8_MASK                   (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL8_P4_9_GPIO                   (uint32_t)(0)
#define PINSEL8_P4_9_                       (uint32_t)(BIT_DEF_18)
#define PINSEL8_P4_9_MASK                   (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL8_P4_10_GPIO                  (uint32_t)(0)
#define PINSEL8_P4_10                       (uint32_t)(BIT_DEF_20)
#define PINSEL8_P4_10_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL8_P4_11_GPIO                  (uint32_t)(0)
#define PINSEL8_P4_11                       (uint32_t)(BIT_DEF_22)
#define PINSEL8_P4_11_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL8_P4_12_GPIO                  (uint32_t)(0)
#define PINSEL8_P4_12                       (uint32_t)(BIT_DEF_24)
#define PINSEL8_P4_12_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL8_P4_13_GPIO                  (uint32_t)(0)
#define PINSEL8_P4_13                       (uint32_t)(BIT_DEF_26)
#define PINSEL8_P4_13_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL8_P4_14_GPIO                  (uint32_t)(0)
#define PINSEL8_P4_14                       (uint32_t)(BIT_DEF_28)
#define PINSEL8_P4_14_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL8_P4_15_GPIO                  (uint32_t)(0)
#define PINSEL8_P4_15                       (uint32_t)(BIT_DEF_30)
#define PINSEL8_P4_15_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL9_P4_16_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_16_                      (uint32_t)(BIT_DEF_00)
#define PINSEL9_P4_16_MASK                  (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINSEL9_P4_17_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_17_                      (uint32_t)(BIT_DEF_02)
#define PINSEL9_P4_17_MASK                  (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL9_P4_18_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_18_                      (uint32_t)(BIT_DEF_04)
#define PINSEL9_P4_18_MASK                  (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINSEL9_P4_19_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_19_                      (uint32_t)(BIT_DEF_06)
#define PINSEL9_P4_19_MASK                  (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINSEL9_P4_20_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_20_                      (uint32_t)(BIT_DEF_08)
#define PINSEL9_P4_20_MASK                  (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINSEL9_P4_21_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_21_                      (uint32_t)(BIT_DEF_10)
#define PINSEL9_P4_21_MASK                  (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINSEL9_P4_22_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_22_                      (uint32_t)(BIT_DEF_12)
#define PINSEL9_P4_22_MASK                  (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINSEL9_P4_23_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_23_                      (uint32_t)(BIT_DEF_14)
#define PINSEL9_P4_23_MASK                  (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINSEL9_P4_24_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_24_                      (uint32_t)(BIT_DEF_16)
#define PINSEL9_P4_24_MASK                  (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINSEL9_P4_25_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_25_                      (uint32_t)(BIT_DEF_18)
#define PINSEL9_P4_25_MASK                  (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINSEL9_P4_26_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_26                       (uint32_t)(BIT_DEF_20)
#define PINSEL9_P4_26_MASK                  (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINSEL9_P4_27_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_27                       (uint32_t)(BIT_DEF_22)
#define PINSEL9_P4_27_MASK                  (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINSEL9_P4_28_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_28                       (uint32_t)(BIT_DEF_24)
#define PINSEL9_P4_28_MASK                  (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINSEL9_P4_29_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_29                       (uint32_t)(BIT_DEF_26)
#define PINSEL9_P4_29_MASK                  (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINSEL9_P4_30_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_30                       (uint32_t)(BIT_DEF_28)
#define PINSEL9_P4_30_MASK                  (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINSEL9_P4_31_GPIO                  (uint32_t)(0)
#define PINSEL9_P4_31                       (uint32_t)(BIT_DEF_30)
#define PINSEL9_P4_31_MASK                  (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PINSEL10_GPIO_TRACE_DISABLE         (uint32_t)(0)
#define PINSEL10_GPIO_TRACE_ENABLE          (uint32_t)(BIT_DEF_03)
#define PINSEL10_GPIO_TRACE_MASK            (uint32_t)(BIT_DEF_03)

#define PINSEL11_LCDPE                      (uint32_t)(BIT_DEF_00)
#define PINSEL11_LCDPE_MASK                 (uint32_t)(BIT_DEF_00)
#define PINSEL11_LCDM_4B_MONO_STN_SINGLE    (uint32_t)(0)
#define PINSEL11_LCDM_8B_MONO_STN_SINGLE    (uint32_t)(BIT_DEF_01)
#define PINSEL11_LCDM_COLOR_STN_SINGLE      (uint32_t)(BIT_DEF_01)
#define PINSEL11_LCDM_4B_MONO_STN_DUAL      (uint32_t)(BIT_DEF_02)
#define PINSEL11_LCDM_COLOR_STN_DUAL        (uint32_t)(BIT_DEF_01 | BIT_DEF_02)
#define PINSEL11_LCDM_8B_MONO_STN_DUAL      (uint32_t)(BIT_DEF_01 | BIT_DEF_02)
#define PINSEL11_LCDM_TFT_12B               (uint32_t)(BIT_DEF_03)
#define PINSEL11_LCDM_TFT_16B_565           (uint32_t)(BIT_DEF_01 | BIT_DEF_03)
#define PINSEL11_LCDM_TFT_16B_1555          (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINSEL11_LCDM_TFT_24B               (uint32_t)(BIT_DEF_01 | BIT_DEF_02 | BIT_DEF_03)
#define PINSEL11_LCDM_MASK                  (uint32_t)(BIT_DEF_01 | BIT_DEF_02 | BIT_DEF_03)

#define PINMODE_PIN_0_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_0_NO_PULL               (uint32_t)(BIT_DEF_01)
#define PINMODE_PIN_0_PULL_DOWN             (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINMODE_PIN_0_MASK                  (uint32_t)(BIT_DEF_00 | BIT_DEF_01)
#define PINMODE_PIN_1_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_1_NO_PULL               (uint32_t)(BIT_DEF_03)
#define PINMODE_PIN_1_PULL_DOWN             (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINMODE_PIN_1_MASK                  (uint32_t)(BIT_DEF_02 | BIT_DEF_03)
#define PINMODE_PIN_2_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_2_NO_PULL               (uint32_t)(BIT_DEF_05)
#define PINMODE_PIN_2_PULL_DOWN             (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINMODE_PIN_2_MASK                  (uint32_t)(BIT_DEF_04 | BIT_DEF_05)
#define PINMODE_PIN_3_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_3_NO_PULL               (uint32_t)(BIT_DEF_07)
#define PINMODE_PIN_3_PULL_DOWN             (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINMODE_PIN_3_MASK                  (uint32_t)(BIT_DEF_06 | BIT_DEF_07)
#define PINMODE_PIN_4_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_4_NO_PULL               (uint32_t)(BIT_DEF_09)
#define PINMODE_PIN_4_PULL_DOWN             (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINMODE_PIN_4_MASK                  (uint32_t)(BIT_DEF_08 | BIT_DEF_09)
#define PINMODE_PIN_5_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_5_NO_PULL               (uint32_t)(BIT_DEF_11)
#define PINMODE_PIN_5_PULL_DOWN             (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINMODE_PIN_5_MASK                  (uint32_t)(BIT_DEF_10 | BIT_DEF_11)
#define PINMODE_PIN_6_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_6_NO_PULL               (uint32_t)(BIT_DEF_13)
#define PINMODE_PIN_6_PULL_DOWN             (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINMODE_PIN_6_MASK                  (uint32_t)(BIT_DEF_12 | BIT_DEF_13)
#define PINMODE_PIN_7_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_7_NO_PULL               (uint32_t)(BIT_DEF_15)
#define PINMODE_PIN_7_PULL_DOWN             (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINMODE_PIN_7_MASK                  (uint32_t)(BIT_DEF_14 | BIT_DEF_15)
#define PINMODE_PIN_8_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_8_NO_PULL               (uint32_t)(BIT_DEF_17)
#define PINMODE_PIN_8_PULL_DOWN             (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINMODE_PIN_8_MASK                  (uint32_t)(BIT_DEF_16 | BIT_DEF_17)
#define PINMODE_PIN_9_PULL_UP               (uint32_t)(0)
#define PINMODE_PIN_9_NO_PULL               (uint32_t)(BIT_DEF_19)
#define PINMODE_PIN_9_PULL_DOWN             (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINMODE_PIN_9_MASK                  (uint32_t)(BIT_DEF_18 | BIT_DEF_19)
#define PINMODE_PIN_10_PULL_UP              (uint32_t)(0)
#define PINMODE_PIN_10_NO_PULL              (uint32_t)(BIT_DEF_21)
#define PINMODE_PIN_10_PULL_DOWN            (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINMODE_PIN_10_MASK                 (uint32_t)(BIT_DEF_20 | BIT_DEF_21)
#define PINMODE_PIN_11_PULL_UP              (uint32_t)(0)
#define PINMODE_PIN_11_NO_PULL              (uint32_t)(BIT_DEF_23)
#define PINMODE_PIN_11_PULL_DOWN            (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINMODE_PIN_11_MASK                 (uint32_t)(BIT_DEF_22 | BIT_DEF_23)
#define PINMODE_PIN_12_PULL_UP              (uint32_t)(0)
#define PINMODE_PIN_12_NO_PULL              (uint32_t)(BIT_DEF_25)
#define PINMODE_PIN_12_PULL_DOWN            (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINMODE_PIN_12_MASK                 (uint32_t)(BIT_DEF_24 | BIT_DEF_25)
#define PINMODE_PIN_13_PULL_UP              (uint32_t)(0)
#define PINMODE_PIN_13_NO_PULL              (uint32_t)(BIT_DEF_27)
#define PINMODE_PIN_13_PULL_DOWN            (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINMODE_PIN_13_MASK                 (uint32_t)(BIT_DEF_26 | BIT_DEF_27)
#define PINMODE_PIN_14_PULL_UP              (uint32_t)(0)
#define PINMODE_PIN_14_NO_PULL              (uint32_t)(BIT_DEF_29)
#define PINMODE_PIN_14_PULL_DOWN            (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINMODE_PIN_14_MASK                 (uint32_t)(BIT_DEF_28 | BIT_DEF_29)
#define PINMODE_PIN_15_PULL_UP              (uint32_t)(0)
#define PINMODE_PIN_15_NO_PULL              (uint32_t)(BIT_DEF_31)
#define PINMODE_PIN_15_PULL_DOWN            (uint32_t)(BIT_DEF_30 | BIT_DEF_31)
#define PINMODE_PIN_15_MASK                 (uint32_t)(BIT_DEF_30 | BIT_DEF_31)

#define PCON_PM0                            (uint8_t)(BIT_DEF_00)
#define PCON_PM1                            (uint8_t)(BIT_DEF_01)
#define PCON_BODPDM                         (uint8_t)(BIT_DEF_02)
#define PCON_BOGD                           (uint8_t)(BIT_DEF_03)
#define PCON_BORD                           (uint8_t)(BIT_DEF_04)
#define PCON_PM2                            (uint8_t)(BIT_DEF_07)

#define PCONP_PCTIM0                        (uint32_t)(BIT_DEF_01)
#define PCONP_PCTIM1                        (uint32_t)(BIT_DEF_02)
#define PCONP_PCUART0                       (uint32_t)(BIT_DEF_03)
#define PCONP_PCUART1                       (uint32_t)(BIT_DEF_04)
#define PCONP_PCPWM0                        (uint32_t)(BIT_DEF_05)
#define PCONP_PCPWM1                        (uint32_t)(BIT_DEF_06)
#define PCONP_PCI2C0                        (uint32_t)(BIT_DEF_07)
#define PCONP_PCSPI                         (uint32_t)(BIT_DEF_08)
#define PCONP_PCRTC                         (uint32_t)(BIT_DEF_09)
#define PCONP_PCSSP1                        (uint32_t)(BIT_DEF_10)
#define PCONP_PCEMC                         (uint32_t)(BIT_DEF_11)
#define PCONP_PCAD                          (uint32_t)(BIT_DEF_12)
#define PCONP_PCAN1                         (uint32_t)(BIT_DEF_13)
#define PCONP_PCAN2                         (uint32_t)(BIT_DEF_14)
#define PCONP_PCI2C1                        (uint32_t)(BIT_DEF_19)
#define PCONP_PCLCD                         (uint32_t)(BIT_DEF_20)
#define PCONP_PCSSP0                        (uint32_t)(BIT_DEF_21)
#define PCONP_PCTIM2                        (uint32_t)(BIT_DEF_22)
#define PCONP_PCTIM3                        (uint32_t)(BIT_DEF_23)
#define PCONP_PCUART2                       (uint32_t)(BIT_DEF_24)
#define PCONP_PCUART3                       (uint32_t)(BIT_DEF_25)
#define PCONP_PCI2C2                        (uint32_t)(BIT_DEF_26)
#define PCONP_PCI2S                         (uint32_t)(BIT_DEF_27)
#define PCONP_PCSDC                         (uint32_t)(BIT_DEF_28)
#define PCONP_PCGPDMA                       (uint32_t)(BIT_DEF_29)
#define PCONP_PCENET                        (uint32_t)(BIT_DEF_30)
#define PCONP_PCUSB                         (uint32_t)(BIT_DEF_31)


#define PLLCON_PLLE                         BIT_DEF_00
#define PLLCON_PLLC                         BIT_DEF_01

#define PLLSTAT_PLLE                        (uint32_t)(BIT_DEF_24)
#define PLLSTAT_PLLC                        (uint32_t)(BIT_DEF_25)
#define PLLSTAT_PLOCK                       (uint32_t)(BIT_DEF_26)

#define PWMxCTCR_TM                         (uint8_t)(0)
#define PWMxCTCR_CM_RISING                  (uint8_t)(BIT_DEF_00)
#define PWMxCTCR_CM_FALLING                 (uint8_t)(BIT_DEF_01)
#define PWMxCTCR_CM_BOTH_EDGE               (uint8_t)(BIT_DEF_00 | BIT_DEF_01)
#define PWMxCTCR_MODE_MASK                  (uint8_t)(BIT_DEF_00 | BIT_DEF_01)
#define PWMxCTCR_PCAP_SELECT                (uint8_t)(0)
#define PWMxCTCR_INPUT_SELECT_MASK          (uint8_t)(BIT_DEF_02 | BIT_DEF_03)

#define PWMxLER_EM0L                        (uint8_t)(BIT_DEF_00)
#define PWMxLER_EM1L                        (uint8_t)(BIT_DEF_01)
#define PWMxLER_EM2L                        (uint8_t)(BIT_DEF_02)
#define PWMxLER_EM3L                        (uint8_t)(BIT_DEF_03)
#define PWMxLER_EM4L                        (uint8_t)(BIT_DEF_04)
#define PWMxLER_EM5L                        (uint8_t)(BIT_DEF_05)
#define PWMxLER_EM6L                        (uint8_t)(BIT_DEF_06)

#define PWMxMR0IF                           (uint16_t)(BIT_DEF_00)
#define PWMxMR1IF                           (uint16_t)(BIT_DEF_01)
#define PWMxMR2IF                           (uint16_t)(BIT_DEF_02)
#define PWMxMR3IF                           (uint16_t)(BIT_DEF_03)
#define PWMxCAP0IF                          (uint16_t)(BIT_DEF_04)
#define PWM1CAP1IF                          (uint16_t)(BIT_DEF_05)
#define PWMxMR4                             (uint16_t)(BIT_DEF_08)

#define PWMxMCR_PWMMR0I                     (uint32_t)(BIT_DEF_00)
#define PWMxMCR_PWMMR0R                     (uint32_t)(BIT_DEF_01)
#define PWMxMCR_PWMMR0S                     (uint32_t)(BIT_DEF_02)
#define PWMxMCR_PWMMR1I                     (uint32_t)(BIT_DEF_03)
#define PWMxMCR_PWMMR1R                     (uint32_t)(BIT_DEF_04)
#define PWMxMCR_PWMMR1S                     (uint32_t)(BIT_DEF_05)
#define PWMxMCR_PWMMR2I                     (uint32_t)(BIT_DEF_06)
#define PWMxMCR_PWMMR2R                     (uint32_t)(BIT_DEF_07)
#define PWMxMCR_PWMMR2S                     (uint32_t)(BIT_DEF_08)
#define PWMxMCR_PWMMR3I                     (uint32_t)(BIT_DEF_09)
#define PWMxMCR_PWMMR3R                     (uint32_t)(BIT_DEF_10)
#define PWMxMCR_PWMMR3S                     (uint32_t)(BIT_DEF_11)
#define PWMxMCR_PWMMR4I                     (uint32_t)(BIT_DEF_12)
#define PWMxMCR_PWMMR4R                     (uint32_t)(BIT_DEF_13)
#define PWMxMCR_PWMMR4S                     (uint32_t)(BIT_DEF_14)
#define PWMxMCR_PWMMR5I                     (uint32_t)(BIT_DEF_15)
#define PWMxMCR_PWMMR5R                     (uint32_t)(BIT_DEF_16)
#define PWMxMCR_PWMMR5S                     (uint32_t)(BIT_DEF_17)
#define PWMxMCR_PWMMR6I                     (uint32_t)(BIT_DEF_18)
#define PWMxMCR_PWMMR6R                     (uint32_t)(BIT_DEF_19)
#define PWMxMCR_PWMMR6S                     (uint32_t)(BIT_DEF_20)

#define PWMxPCR_PWMSEL2                     (uint32_t)(BIT_DEF_02)
#define PWMxPCR_PWMSEL3                     (uint32_t)(BIT_DEF_03)
#define PWMxPCR_PWMSEL4                     (uint32_t)(BIT_DEF_04)
#define PWMxPCR_PWMSEL5                     (uint32_t)(BIT_DEF_05)
#define PWMxPCR_PWMSEL6                     (uint32_t)(BIT_DEF_06)
#define PWMxPCR_PWMENA1                     (uint32_t)(BIT_DEF_09)
#define PWMxPCR_PWMENA2                     (uint32_t)(BIT_DEF_10)
#define PWMxPCR_PWMENA3                     (uint32_t)(BIT_DEF_11)
#define PWMxPCR_PWMENA4                     (uint32_t)(BIT_DEF_12)
#define PWMxPCR_PWMENA5                     (uint32_t)(BIT_DEF_13)
#define PWMxPCR_PWMENA6                     (uint32_t)(BIT_DEF_14)

#define PWMxTCR_CE                          BIT_DEF_00
#define PWMxTCR_CR                          BIT_DEF_01
#define PWMxTCR_PWMEN                       BIT_DEF_03
#define PWMxTCR_MASTER_DISABLE              BIT_DEF_04

#define SCS_GPIOM                           (uint32_t)(BIT_DEF_00)
#define SCS_EMC_RST_DIS                     (uint32_t)(BIT_DEF_01)
#define SCS_OSCRANGE                        (uint32_t)(BIT_DEF_04)
#define SCS_OSCEN                           (uint32_t)(BIT_DEF_05)
#define SCS_OSCSTAT                         (uint32_t)(BIT_DEF_06)

#define TxCCR_CAP0RE                        (uint16_t)(BIT_DEF_00)
#define TxCCR_CAP0FE                        (uint16_t)(BIT_DEF_01)
#define TxCCR_CAP0I                         (uint16_t)(BIT_DEF_02)
#define TxCCR_CAP1RE                        (uint16_t)(BIT_DEF_03)
#define TxCCR_CAP1FE                        (uint16_t)(BIT_DEF_04)
#define TxCCR_CAP1I                         (uint16_t)(BIT_DEF_05)

#define TxEMR_EM0                           (uint16_t)(BIT_DEF_00)
#define TxEMR_EM1                           (uint16_t)(BIT_DEF_01)
#define TxEMR_EM2                           (uint16_t)(BIT_DEF_02)
#define TxEMR_EM3                           (uint16_t)(BIT_DEF_03)
#define TxEMR_EMC0_NOTHING                  (uint16_t)(0)
#define TxEMR_EMC0_LOW                      (uint16_t)(BIT_DEF_04)
#define TxEMR_EMC0_HIGH                     (uint16_t)(BIT_DEF_05)
#define TxEMR_EMC0_TOGGLE                   (uint16_t)(BIT_DEF_04 | BIT_DEF_05)
#define TxEMR_EMC0_MASK                     (uint16_t)(BIT_DEF_04 | BIT_DEF_05)
#define TxEMR_EMC1_NOTHING                  (uint16_t)(0)
#define TxEMR_EMC1_LOW                      (uint16_t)(BIT_DEF_06)
#define TxEMR_EMC1_HIGH                     (uint16_t)(BIT_DEF_07)
#define TxEMR_EMC1_TOGGLE                   (uint16_t)(BIT_DEF_06 | BIT_DEF_07)
#define TxEMR_EMC1_MASK                     (uint16_t)(BIT_DEF_06 | BIT_DEF_07)
#define TxEMR_EMC2_NOTHING                  (uint16_t)(0)
#define TxEMR_EMC2_LOW                      (uint16_t)(BIT_DEF_08)
#define TxEMR_EMC2_HIGH                     (uint16_t)(BIT_DEF_09)
#define TxEMR_EMC2_TOGGLE                   (uint16_t)(BIT_DEF_08 | BIT_DEF_09)
#define TxEMR_EMC2_MASK                     (uint16_t)(BIT_DEF_08 | BIT_DEF_09)
#define TxEMR_EMC3_NOTHING                  (uint16_t)(0)
#define TxEMR_EMC3_LOW                      (uint16_t)(BIT_DEF_10)
#define TxEMR_EMC3_HIGH                     (uint16_t)(BIT_DEF_11)
#define TxEMR_EMC3_TOGGLE                   (uint16_t)(BIT_DEF_10 | BIT_DEF_11)
#define TxEMR_EMC3_MASK                     (uint16_t)(BIT_DEF_10 | BIT_DEF_11)

#define TxMCR_MR0I                          (uint16_t)(BIT_DEF_00)
#define TxMCR_MR0R                          (uint16_t)(BIT_DEF_01)
#define TxMCR_MR0S                          (uint16_t)(BIT_DEF_02)
#define TxMCR_MR1I                          (uint16_t)(BIT_DEF_03)
#define TxMCR_MR1R                          (uint16_t)(BIT_DEF_04)
#define TxMCR_MR1S                          (uint16_t)(BIT_DEF_05)
#define TxMCR_MR2I                          (uint16_t)(BIT_DEF_06)
#define TxMCR_MR2R                          (uint16_t)(BIT_DEF_07)
#define TxMCR_MR2S                          (uint16_t)(BIT_DEF_08)
#define TxMCR_MR3I                          (uint16_t)(BIT_DEF_09)
#define TxMCR_MR3R                          (uint16_t)(BIT_DEF_10)
#define TxMCR_MR3S                          (uint16_t)(BIT_DEF_11)

#define TxTCR_CE                            (uint8_t)(BIT_DEF_00)
#define TxTCR_RESET                         (uint8_t)(BIT_DEF_01)

#define UxLCR_DLAB                          (uint8_t)(BIT_DEF_07)

#define UxIER_RBR                           (uint8_t)(BIT_DEF_00)
#define UxIER_THRE                          (uint8_t)(BIT_DEF_01)
#define UxIER_RLS                           (uint8_t)(BIT_DEF_02)


#endif  // __LPC24xx_H
