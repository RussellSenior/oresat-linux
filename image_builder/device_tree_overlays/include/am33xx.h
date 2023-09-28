/* Copied from https://github.com/beagleboard/bb.org-overlays */

/* SPDX-License-Identifier: GPL-2.0 */
/*
 * This header provides constants specific to AM33XX pinctrl bindings.
 */

#ifndef _DT_BINDINGS_PINCTRL_AM33XX_H
#define _DT_BINDINGS_PINCTRL_AM33XX_H

#include "omap.h"

#define GPIO_ACTIVE_LOW 0
#define GPIO_ACTIVE_HIGH 1

/* am33xx specific mux bit defines */
#undef PULL_ENA
#undef INPUT_EN

#define PULL_DISABLE  (1 << 3)
#define INPUT_EN      (1 << 5)
#define SLEWCTRL_SLOW (1 << 6)
#define SLEWCTRL_FAST 0

/* update macro depending on INPUT_EN and PULL_ENA */
#undef PIN_OUTPUT
#undef PIN_OUTPUT_PULLUP
#undef PIN_OUTPUT_PULLDOWN
#undef PIN_INPUT
#undef PIN_INPUT_PULLUP
#undef PIN_INPUT_PULLDOWN

#define PIN_OUTPUT          (PULL_DISABLE)
#define PIN_OUTPUT_PULLUP   (PULL_UP)
#define PIN_OUTPUT_PULLDOWN 0
#define PIN_INPUT           (INPUT_EN | PULL_DISABLE)
#define PIN_INPUT_PULLUP    (INPUT_EN | PULL_UP)
#define PIN_INPUT_PULLDOWN  (INPUT_EN)

/* undef non-existing modes */
#undef PIN_OFF_NONE
#undef PIN_OFF_OUTPUT_HIGH
#undef PIN_OFF_OUTPUT_LOW
#undef PIN_OFF_INPUT_PULLUP
#undef PIN_OFF_INPUT_PULLDOWN
#undef PIN_OFF_WAKEUPENABLE

#define AM335X_PIN_OFFSET_MIN 0x0800U

#define AM335X_PIN_GPMC_AD0          0x800
#define AM335X_PIN_GPMC_AD1          0x804
#define AM335X_PIN_GPMC_AD2          0x808
#define AM335X_PIN_GPMC_AD3          0x80c
#define AM335X_PIN_GPMC_AD4          0x810
#define AM335X_PIN_GPMC_AD5          0x814
#define AM335X_PIN_GPMC_AD6          0x818
#define AM335X_PIN_GPMC_AD7          0x81c
#define AM335X_PIN_GPMC_AD8          0x820
#define AM335X_PIN_GPMC_AD9          0x824
#define AM335X_PIN_GPMC_AD10         0x828
#define AM335X_PIN_GPMC_AD11         0x82c
#define AM335X_PIN_GPMC_AD12         0x830
#define AM335X_PIN_GPMC_AD13         0x834
#define AM335X_PIN_GPMC_AD14         0x838
#define AM335X_PIN_GPMC_AD15         0x83c
#define AM335X_PIN_GPMC_A0           0x840
#define AM335X_PIN_GPMC_A1           0x844
#define AM335X_PIN_GPMC_A2           0x848
#define AM335X_PIN_GPMC_A3           0x84c
#define AM335X_PIN_GPMC_A4           0x850
#define AM335X_PIN_GPMC_A5           0x854
#define AM335X_PIN_GPMC_A6           0x858
#define AM335X_PIN_GPMC_A7           0x85c
#define AM335X_PIN_GPMC_A8           0x860
#define AM335X_PIN_GPMC_A9           0x864
#define AM335X_PIN_GPMC_A10          0x868
#define AM335X_PIN_GPMC_A11          0x86c
#define AM335X_PIN_GPMC_WAIT0        0x870
#define AM335X_PIN_GPMC_WPN          0x874
#define AM335X_PIN_GPMC_BEN1         0x878
#define AM335X_PIN_GPMC_CSN0         0x87c
#define AM335X_PIN_GPMC_CSN1         0x880
#define AM335X_PIN_GPMC_CSN2         0x884
#define AM335X_PIN_GPMC_CSN3         0x888
#define AM335X_PIN_GPMC_CLK          0x88c
#define AM335X_PIN_GPMC_ADVN_ALE     0x890
#define AM335X_PIN_GPMC_OEN_REN      0x894
#define AM335X_PIN_GPMC_WEN          0x898
#define AM335X_PIN_GPMC_BEN0_CLE     0x89c
#define AM335X_PIN_LCD_DATA0         0x8a0
#define AM335X_PIN_LCD_DATA1         0x8a4
#define AM335X_PIN_LCD_DATA2         0x8a8
#define AM335X_PIN_LCD_DATA3         0x8ac
#define AM335X_PIN_LCD_DATA4         0x8b0
#define AM335X_PIN_LCD_DATA5         0x8b4
#define AM335X_PIN_LCD_DATA6         0x8b8
#define AM335X_PIN_LCD_DATA7         0x8bc
#define AM335X_PIN_LCD_DATA8         0x8c0
#define AM335X_PIN_LCD_DATA9         0x8c4
#define AM335X_PIN_LCD_DATA10        0x8c8
#define AM335X_PIN_LCD_DATA11        0x8cc
#define AM335X_PIN_LCD_DATA12        0x8d0
#define AM335X_PIN_LCD_DATA13        0x8d4
#define AM335X_PIN_LCD_DATA14        0x8d8
#define AM335X_PIN_LCD_DATA15        0x8dc
#define AM335X_PIN_LCD_VSYNC         0x8e0
#define AM335X_PIN_LCD_HSYNC         0x8e4
#define AM335X_PIN_LCD_PCLK          0x8e8
#define AM335X_PIN_LCD_AC_BIAS_EN    0x8ec
#define AM335X_PIN_MMC0_DAT3         0x8f0
#define AM335X_PIN_MMC0_DAT2         0x8f4
#define AM335X_PIN_MMC0_DAT1         0x8f8
#define AM335X_PIN_MMC0_DAT0         0x8fc
#define AM335X_PIN_MMC0_CLK          0x900
#define AM335X_PIN_MMC0_CMD          0x904
#define AM335X_PIN_MII1_COL          0x908
#define AM335X_PIN_MII1_CRS          0x90c
#define AM335X_PIN_MII1_RX_ER        0x910
#define AM335X_PIN_MII1_TX_EN        0x914
#define AM335X_PIN_MII1_RX_DV        0x918
#define AM335X_PIN_MII1_TXD3         0x91c
#define AM335X_PIN_MII1_TXD2         0x920
#define AM335X_PIN_MII1_TXD1         0x924
#define AM335X_PIN_MII1_TXD0         0x928
#define AM335X_PIN_MII1_TX_CLK       0x92c
#define AM335X_PIN_MII1_RX_CLK       0x930
#define AM335X_PIN_MII1_RXD3         0x934
#define AM335X_PIN_MII1_RXD2         0x938
#define AM335X_PIN_MII1_RXD1         0x93c
#define AM335X_PIN_MII1_RXD0         0x940
#define AM335X_PIN_RMII1_REF_CLK     0x944
#define AM335X_PIN_MDIO              0x948
#define AM335X_PIN_MDC               0x94c
#define AM335X_PIN_SPI0_SCLK         0x950
#define AM335X_PIN_SPI0_D0           0x954
#define AM335X_PIN_SPI0_D1           0x958
#define AM335X_PIN_SPI0_CS0          0x95c
#define AM335X_PIN_SPI0_CS1          0x960
#define AM335X_PIN_ECAP0_IN_PWM0_OUT 0x964
#define AM335X_PIN_UART0_CTSN        0x968
#define AM335X_PIN_UART0_RTSN        0x96c
#define AM335X_PIN_UART0_RXD         0x970
#define AM335X_PIN_UART0_TXD         0x974
#define AM335X_PIN_UART1_CTSN        0x978
#define AM335X_PIN_UART1_RTSN        0x97c
#define AM335X_PIN_UART1_RXD         0x980
#define AM335X_PIN_UART1_TXD         0x984
#define AM335X_PIN_I2C0_SDA          0x988
#define AM335X_PIN_I2C0_SCL          0x98c
#define AM335X_PIN_MCASP0_ACLKX      0x990
#define AM335X_PIN_MCASP0_FSX        0x994
#define AM335X_PIN_MCASP0_AXR0       0x998
#define AM335X_PIN_MCASP0_AHCLKR     0x99c
#define AM335X_PIN_MCASP0_ACLKR      0x9a0
#define AM335X_PIN_MCASP0_FSR        0x9a4
#define AM335X_PIN_MCASP0_AXR1       0x9a8
#define AM335X_PIN_MCASP0_AHCLKX     0x9ac
#define AM335X_PIN_XDMA_EVENT_INTR0  0x9b0
#define AM335X_PIN_XDMA_EVENT_INTR1  0x9b4
#define AM335X_PIN_WARMRSTN          0x9b8
#define AM335X_PIN_NNMI              0x9c0
#define AM335X_PIN_TMS               0x9d0
#define AM335X_PIN_TDI               0x9d4
#define AM335X_PIN_TDO               0x9d8
#define AM335X_PIN_TCK               0x9dc
#define AM335X_PIN_TRSTN             0x9e0
#define AM335X_PIN_EMU0              0x9e4
#define AM335X_PIN_EMU1              0x9e8
#define AM335X_PIN_RTC_PWRONRSTN     0x9f8
#define AM335X_PIN_PMIC_POWER_EN     0x9fc
#define AM335X_PIN_EXT_WAKEUP        0xa00
#define AM335X_PIN_USB0_DRVVBUS      0xa1c
#define AM335X_PIN_USB1_DRVVBUS      0xa34

#define AM335X_PIN_OFFSET_MAX 0x0a34U

#endif