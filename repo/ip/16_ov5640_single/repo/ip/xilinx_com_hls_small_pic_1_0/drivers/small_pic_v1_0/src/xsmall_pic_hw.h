// ==============================================================
// File generated on Tue Aug 20 11:11:24 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x18 : Data signal of image_src
//        bit 31~0 - image_src[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of small_pic_dst
//        bit 31~0 - small_pic_dst[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of therehold
//        bit 31~0 - therehold[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of distingish_dst
//        bit 31~0 - distingish_dst[31:0] (Read/Write)
// 0x34 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XSMALL_PIC_AXILITES_ADDR_AP_CTRL             0x00
#define XSMALL_PIC_AXILITES_ADDR_GIE                 0x04
#define XSMALL_PIC_AXILITES_ADDR_IER                 0x08
#define XSMALL_PIC_AXILITES_ADDR_ISR                 0x0c
#define XSMALL_PIC_AXILITES_ADDR_AP_RETURN           0x10
#define XSMALL_PIC_AXILITES_BITS_AP_RETURN           32
#define XSMALL_PIC_AXILITES_ADDR_IMAGE_SRC_DATA      0x18
#define XSMALL_PIC_AXILITES_BITS_IMAGE_SRC_DATA      32
#define XSMALL_PIC_AXILITES_ADDR_SMALL_PIC_DST_DATA  0x20
#define XSMALL_PIC_AXILITES_BITS_SMALL_PIC_DST_DATA  32
#define XSMALL_PIC_AXILITES_ADDR_THEREHOLD_DATA      0x28
#define XSMALL_PIC_AXILITES_BITS_THEREHOLD_DATA      32
#define XSMALL_PIC_AXILITES_ADDR_DISTINGISH_DST_DATA 0x30
#define XSMALL_PIC_AXILITES_BITS_DISTINGISH_DST_DATA 32

