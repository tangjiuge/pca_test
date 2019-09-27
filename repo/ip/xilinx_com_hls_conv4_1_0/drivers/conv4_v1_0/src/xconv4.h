// ==============================================================
// File generated on Wed Sep 04 09:50:18 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XCONV4_H
#define XCONV4_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xconv4_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XConv4_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XConv4;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XConv4_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XConv4_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XConv4_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XConv4_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XConv4_Initialize(XConv4 *InstancePtr, u16 DeviceId);
XConv4_Config* XConv4_LookupConfig(u16 DeviceId);
int XConv4_CfgInitialize(XConv4 *InstancePtr, XConv4_Config *ConfigPtr);
#else
int XConv4_Initialize(XConv4 *InstancePtr, const char* InstanceName);
int XConv4_Release(XConv4 *InstancePtr);
#endif

void XConv4_Start(XConv4 *InstancePtr);
u32 XConv4_IsDone(XConv4 *InstancePtr);
u32 XConv4_IsIdle(XConv4 *InstancePtr);
u32 XConv4_IsReady(XConv4 *InstancePtr);
void XConv4_EnableAutoRestart(XConv4 *InstancePtr);
void XConv4_DisableAutoRestart(XConv4 *InstancePtr);
u32 XConv4_Get_return(XConv4 *InstancePtr);

void XConv4_Set_feature_src_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_src_0(XConv4 *InstancePtr);
void XConv4_Set_feature_src_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_src_1(XConv4 *InstancePtr);
void XConv4_Set_feature_src_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_src_2(XConv4 *InstancePtr);
void XConv4_Set_feature_src_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_src_3(XConv4 *InstancePtr);
void XConv4_Set_feature_src_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_src_4(XConv4 *InstancePtr);
void XConv4_Set_feature_src_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_src_5(XConv4 *InstancePtr);
void XConv4_Set_feature_src_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_src_6(XConv4 *InstancePtr);
void XConv4_Set_feature_src_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_src_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_0_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_0_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_0_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_0_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_0_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_0_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_0_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_0_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_0_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_0_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_0_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_0_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_0_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_0_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_0_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_0_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_1_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_1_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_1_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_1_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_1_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_1_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_1_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_1_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_1_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_1_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_1_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_1_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_1_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_1_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_1_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_1_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_2_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_2_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_2_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_2_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_2_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_2_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_2_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_2_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_2_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_2_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_2_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_2_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_2_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_2_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_2_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_2_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_3_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_3_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_3_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_3_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_3_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_3_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_3_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_3_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_3_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_3_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_3_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_3_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_3_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_3_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_3_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_3_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_4_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_4_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_4_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_4_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_4_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_4_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_4_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_4_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_4_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_4_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_4_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_4_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_4_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_4_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_4_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_4_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_5_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_5_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_5_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_5_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_5_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_5_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_5_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_5_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_5_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_5_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_5_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_5_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_5_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_5_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_5_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_5_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_6_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_6_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_6_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_6_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_6_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_6_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_6_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_6_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_6_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_6_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_6_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_6_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_6_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_6_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_6_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_6_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_7_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_7_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_7_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_7_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_7_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_7_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_7_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_7_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_7_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_7_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_7_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_7_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_7_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_7_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_7_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_7_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_8_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_8_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_8_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_8_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_8_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_8_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_8_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_8_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_8_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_8_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_8_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_8_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_8_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_8_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_8_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_8_7(XConv4 *InstancePtr);
void XConv4_Set_weight_src_9_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_9_0(XConv4 *InstancePtr);
void XConv4_Set_weight_src_9_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_9_1(XConv4 *InstancePtr);
void XConv4_Set_weight_src_9_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_9_2(XConv4 *InstancePtr);
void XConv4_Set_weight_src_9_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_9_3(XConv4 *InstancePtr);
void XConv4_Set_weight_src_9_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_9_4(XConv4 *InstancePtr);
void XConv4_Set_weight_src_9_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_9_5(XConv4 *InstancePtr);
void XConv4_Set_weight_src_9_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_9_6(XConv4 *InstancePtr);
void XConv4_Set_weight_src_9_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_weight_src_9_7(XConv4 *InstancePtr);
void XConv4_Set_bias(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_bias(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_0(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_0(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_1(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_1(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_2(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_2(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_3(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_3(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_4(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_4(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_5(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_5(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_6(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_6(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_7(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_7(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_8(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_8(XConv4 *InstancePtr);
void XConv4_Set_feature_dst_9(XConv4 *InstancePtr, u32 Data);
u32 XConv4_Get_feature_dst_9(XConv4 *InstancePtr);

void XConv4_InterruptGlobalEnable(XConv4 *InstancePtr);
void XConv4_InterruptGlobalDisable(XConv4 *InstancePtr);
void XConv4_InterruptEnable(XConv4 *InstancePtr, u32 Mask);
void XConv4_InterruptDisable(XConv4 *InstancePtr, u32 Mask);
void XConv4_InterruptClear(XConv4 *InstancePtr, u32 Mask);
u32 XConv4_InterruptGetEnabled(XConv4 *InstancePtr);
u32 XConv4_InterruptGetStatus(XConv4 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
