/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://chibios-gfx.com/license.html
 */



#ifndef _ILI9341_H_
#define _ILI9341_H_

#define ILI9341_MOSI 23
#define ILI9341_MISO 19
#define ILI9341_CLK  18
#define ILI9341_CS   5
#define ILI9341_DC   21
#define ILI9341_BCKL 27
#define ILI9341_BCKL_ON 1

#define LVGL_LCD_SPI VSPI_HOST
#define SPI_FREQ 26

#define LVGL_TOUCH_CS_GPIO 22
#define LVGL_TOUCH_IRQ_GPIO 0
#define XPT2046_CLK_FREQ 2

#define LCD_VERTICAL_MAX                320
#define LCD_HORIZONTAL_MAX              240

#define ILI9341_DEVICE_CODE_READ_REG    0x00
#define ILI9341_SOFT_RESET_REG          0x01
#define ILI9341_IDENTINFO_R_REG         0x04
#define ILI9341_STATUS_R_REG            0x09
#define ILI9341_POWERMODE_R_REG         0x0A
#define ILI9341_MADCTL_R_REG            0x0B
#define ILI9341_PIXFORMAT_R_REG         0x0C
#define ILI9341_IMGFORMAT_R_REG         0x0D
#define ILI9341_SIGMODE_R_REG           0x0E
#define ILI9341_SD_RESULT_R_REG         0x0F
#define ILI9341_SLEEP_ENTER_REG         0x10
#define ILI9341_SLEEP_OUT_REG           0x11
#define ILI9341_PARTIALMODE_REG         0x12
#define ILI9341_NORDISPMODE_REG         0x13
#define ILI9341_INVERSIONOFF_REG        0x20
#define ILI9341_INVERSIONON_REG         0x21
#define ILI9341_GAMMASET_REG            0x26
#define ILI9341_DISPLAYOFF_REG          0x28
#define ILI9341_DISPLAYON_REG           0x29
#define ILI9341_COLADDRSET_REG          0x2A
#define ILI9341_PAGEADDRSET_REG         0x2B
#define ILI9341_MEMORYWRITE_REG         0x2C
#define ILI9341_COLORSET_REG            0x2D
#define ILI9341_MEMORYREAD_REG          0x2E
#define ILI9341_PARTIALAREA_REG         0x30
#define ILI9341_VERTSCROLL_REG          0x33
#define ILI9341_TEAREFFECTLINEOFF_REG   0x34
#define ILI9341_TEAREFFECTLINEON_REG    0x35
#define ILI9341_MEMACCESS_REG           0x36
#define ILI9341_VERSCRSRART_REG         0x37
#define ILI9341_IDLEMODEOFF_REG         0x38
#define ILI9341_IDLEMODEON_REG          0x39
#define ILI9341_PIXFORMATSET_REG        0x3A
#define ILI9341_WRITEMEMCONTINUE_REG    0x3C
#define ILI9341_READMEMCONTINUE_REG     0x3E
#define ILI9341_SETTEATSCAN_REG         0x44
#define ILI9341_GETSCANLINE_REG         0x45
#define ILI9341_WRITEBRIGHT_REG         0x51
#define ILI9341_READBRIGHT_REG          0x52
#define ILI9341_WRITECTRL_REG           0x53
#define ILI9341_READCTRL_REG            0x54
#define ILI9341_WRITECABC_REG           0x55
#define ILI9341_READCABC_REG            0x56
#define ILI9341_WRITECABCMB_REG         0x5E
#define ILI9341_READCABCMB_REG          0x5F
#define ILI9341_RGB_ISCTL_REG           0xB0
#define ILI9341_FRAMECTL_NOR_REG        0xB1
#define ILI9341_FRAMECTL_IDLE_REG       0xB2
#define ILI9341_FRAMECTL_PARTIAL_REG    0xB3
#define ILI9341_INVERCTL_REG            0xB4
#define ILI9341_BLANKPORCTL_REG         0xB5
#define ILI9341_FUNCTONCTL_REG          0xB6
#define ILI9341_ENTRYMODE_REG           0xB7
#define ILI9341_BLIGHTCTL1_REG          0xB8
#define ILI9341_BLIGHTCTL2_REG          0xB9
#define ILI9341_BLIGHTCTL3_REG          0xBA
#define ILI9341_BLIGHTCTL4_REG          0xBB
#define ILI9341_BLIGHTCTL5_REG          0xBC
#define ILI9341_BLIGHTCTL7_REG          0xBE
#define ILI9341_BLIGHTCTL8_REG          0xBF
#define ILI9341_POWERCTL1_REG           0xC0
#define ILI9341_POWERCTL2_REG           0xC1
#define ILI9341_VCOMCTL1_REG            0xC5
#define ILI9341_VCOMCTL2_REG            0xC7
#define ILI9341_POWERCTLA_REG           0xCB
#define ILI9341_POWERCTLB_REG           0xCF
#define ILI9341_NVMEMWRITE_REG          0xD0
#define ILI9341_NVMEMPROTECTKEY_REG     0xD1
#define ILI9341_NVMEMSTATUS_REG         0xD2
#define ILI9341_READID4_REG             0xD3
#define ILI9341_READID1_REG             0xDA
#define ILI9341_READID2_REG             0xDB
#define ILI9341_READID3_REG             0xDC
#define ILI9341_POSGAMMACORRECTION_REG  0xE0
#define ILI9341_NEGGAMMACORRECTION_REG  0xE1
#define ILI9341_DIGGAMCTL1_REG          0xE2
#define ILI9341_DIGGAMCTL2_REG          0xE3
#define ILI9341_DIVTIMCTL_A_REG         0xE8
#define ILI9341_DIVTIMCTL_B_REG         0xEA
#define ILI9341_POWONSEQCTL_REG         0xED
#define ILI9341_ENABLE_3G_REG           0xF2
#define ILI9341_INTERFCTL_REG           0xF6
#define ILI9341_PUMPRATIOCTL_REG        0xF7

#endif /* _ILI9341_H_ */