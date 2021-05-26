/*
 * (C) Copyright 2013-2016
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 *
 * wangwei <wangwei@allwinnertech.com>
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __SID_H__
#define __SID_H__

#include <linux/types.h>
#include <asm/arch/cpu.h>

#define SID_PRCTL               (SUNXI_SID_BASE + 0x40)
#define SID_PRKEY               (SUNXI_SID_BASE + 0x50)
#define SID_RDKEY               (SUNXI_SID_BASE + 0x60)
#define SJTAG_AT0               (SUNXI_SID_BASE + 0x80)
#define SJTAG_AT1               (SUNXI_SID_BASE + 0x84)
#define SJTAG_S                 (SUNXI_SID_BASE + 0x88)

#define SID_EFUSE               (SUNXI_SID_BASE + 0x200)
#define SID_SECURE_MODE         (SUNXI_SID_BASE + 0xA0)
#define SID_OP_LOCK  (0xAC)

/*efuse power ctl*/
#define EFUSE_HV_SWITCH			(SUNXI_RTC_BASE + 0x204)

#define EFUSE_CHIPD             (0x00) /* 0x0-0xf, 128bits */
#define EFUSE_BROM_CONFIG       (0x10) /* 16 bit config, 16 bits try */
#define EFUSE_THERMAL_SENSOR    (0x14) /* 0x14-0x1b, 64bits */
#define EFUSE_TF_ZONE           (0x20) /* 0x20-0x2f, 128bits */

#define EFUSE_ROTPK             (0x30) /* 0x30-0x4f, 256bits */
#define EFUSE_NV1               (0x50) /* 0x50-0x53, 32 bits */
#define EFUSE_PSENSOR		(0x54) /* 0x54-0x57, 32 bits */
#define EFUSE_ANTI_BLUSHING	(0x58) /* 0x58-0x5B, 32 bits */
#define EFUSE_CLIENT_RESERVE	(0x5C) /* 0x5C-0x7B, 256bits */


/* write protect */
#define EFUSE_WRITE_PROTECT     (0x7C) /* 0x7C-0x7D, 16bits */
/* read  protect */
#define EFUSE_READ_PROTECT      (0x7E) /* 0x7E-0x7F, 16bits */
/* jtag security */
#define EFUSE_LCJS              (0x48)
/* jtag attribute */
#define EFUSE_ATTR              (0x4C)

/*0x50-0x6F
0x50-0x67: 192bits HUK hardware Unique key
0x68-0x6b: 32bits ID of operator
0x6C-0x6F: 32bits ID
*/
#define EFUSE_HUK               (0x50)
#define EFUSE_INDENTIFICATION   (0x68)
#define EFUSE_ID                (0x6C)

#endif    /*  #ifndef __SID_H__  */
