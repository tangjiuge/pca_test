// ==============================================================
// File generated on Mon Aug 19 15:59:29 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XCONV3_H
#define XCONV3_H

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
#include "xconv3_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XConv3_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XConv3;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XConv3_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XConv3_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XConv3_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XConv3_ReadReg(BaseAddress, RegOffset) \
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
int XConv3_Initialize(XConv3 *InstancePtr, u16 DeviceId);
XConv3_Config* XConv3_LookupConfig(u16 DeviceId);
int XConv3_CfgInitialize(XConv3 *InstancePtr, XConv3_Config *ConfigPtr);
#else
int XConv3_Initialize(XConv3 *InstancePtr, const char* InstanceName);
int XConv3_Release(XConv3 *InstancePtr);
#endif

void XConv3_Start(XConv3 *InstancePtr);
u32 XConv3_IsDone(XConv3 *InstancePtr);
u32 XConv3_IsIdle(XConv3 *InstancePtr);
u32 XConv3_IsReady(XConv3 *InstancePtr);
void XConv3_EnableAutoRestart(XConv3 *InstancePtr);
void XConv3_DisableAutoRestart(XConv3 *InstancePtr);
u32 XConv3_Get_return(XConv3 *InstancePtr);

void XConv3_Set_feature_src(XConv3 *InstancePtr, u32 Data);
u32 XConv3_Get_feature_src(XConv3 *InstancePtr);
void XConv3_Set_weight_src(XConv3 *InstancePtr, u32 Data);
u32 XConv3_Get_weight_src(XConv3 *InstancePtr);
void XConv3_Set_bias(XConv3 *InstancePtr, u32 Data);
u32 XConv3_Get_bias(XConv3 *InstancePtr);
void XConv3_Set_feature_dst(XConv3 *InstancePtr, u32 Data);
u32 XConv3_Get_feature_dst(XConv3 *InstancePtr);

void XConv3_InterruptGlobalEnable(XConv3 *InstancePtr);
void XConv3_InterruptGlobalDisable(XConv3 *InstancePtr);
void XConv3_InterruptEnable(XConv3 *InstancePtr, u32 Mask);
void XConv3_InterruptDisable(XConv3 *InstancePtr, u32 Mask);
void XConv3_InterruptClear(XConv3 *InstancePtr, u32 Mask);
u32 XConv3_InterruptGetEnabled(XConv3 *InstancePtr);
u32 XConv3_InterruptGetStatus(XConv3 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
