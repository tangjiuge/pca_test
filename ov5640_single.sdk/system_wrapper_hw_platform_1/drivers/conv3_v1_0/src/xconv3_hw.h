// ==============================================================
// File generated on Mon Aug 19 15:59:29 +0800 2019
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
// 0x18 : Data signal of feature_src
//        bit 31~0 - feature_src[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of weight_src
//        bit 31~0 - weight_src[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of bias
//        bit 31~0 - bias[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of feature_dst
//        bit 31~0 - feature_dst[31:0] (Read/Write)
// 0x34 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCONV3_AXILITES_ADDR_AP_CTRL          0x00
#define XCONV3_AXILITES_ADDR_GIE              0x04
#define XCONV3_AXILITES_ADDR_IER              0x08
#define XCONV3_AXILITES_ADDR_ISR              0x0c
#define XCONV3_AXILITES_ADDR_AP_RETURN        0x10
#define XCONV3_AXILITES_BITS_AP_RETURN        32
#define XCONV3_AXILITES_ADDR_FEATURE_SRC_DATA 0x18
#define XCONV3_AXILITES_BITS_FEATURE_SRC_DATA 32
#define XCONV3_AXILITES_ADDR_WEIGHT_SRC_DATA  0x20
#define XCONV3_AXILITES_BITS_WEIGHT_SRC_DATA  32
#define XCONV3_AXILITES_ADDR_BIAS_DATA        0x28
#define XCONV3_AXILITES_BITS_BIAS_DATA        32
#define XCONV3_AXILITES_ADDR_FEATURE_DST_DATA 0x30
#define XCONV3_AXILITES_BITS_FEATURE_DST_DATA 32

