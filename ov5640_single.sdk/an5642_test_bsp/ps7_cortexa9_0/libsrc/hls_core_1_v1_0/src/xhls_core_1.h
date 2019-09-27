// ==============================================================
// File generated on Wed Aug 14 17:20:13 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XHLS_CORE_1_H
#define XHLS_CORE_1_H

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
#include "xhls_core_1_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XHls_core_1_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XHls_core_1;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XHls_core_1_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XHls_core_1_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XHls_core_1_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XHls_core_1_ReadReg(BaseAddress, RegOffset) \
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
int XHls_core_1_Initialize(XHls_core_1 *InstancePtr, u16 DeviceId);
XHls_core_1_Config* XHls_core_1_LookupConfig(u16 DeviceId);
int XHls_core_1_CfgInitialize(XHls_core_1 *InstancePtr, XHls_core_1_Config *ConfigPtr);
#else
int XHls_core_1_Initialize(XHls_core_1 *InstancePtr, const char* InstanceName);
int XHls_core_1_Release(XHls_core_1 *InstancePtr);
#endif

void XHls_core_1_Start(XHls_core_1 *InstancePtr);
u32 XHls_core_1_IsDone(XHls_core_1 *InstancePtr);
u32 XHls_core_1_IsIdle(XHls_core_1 *InstancePtr);
u32 XHls_core_1_IsReady(XHls_core_1 *InstancePtr);
void XHls_core_1_EnableAutoRestart(XHls_core_1 *InstancePtr);
void XHls_core_1_DisableAutoRestart(XHls_core_1 *InstancePtr);
u32 XHls_core_1_Get_return(XHls_core_1 *InstancePtr);

void XHls_core_1_Set_feature_src(XHls_core_1 *InstancePtr, u32 Data);
u32 XHls_core_1_Get_feature_src(XHls_core_1 *InstancePtr);
void XHls_core_1_Set_weight_src(XHls_core_1 *InstancePtr, u32 Data);
u32 XHls_core_1_Get_weight_src(XHls_core_1 *InstancePtr);
void XHls_core_1_Set_bias(XHls_core_1 *InstancePtr, u32 Data);
u32 XHls_core_1_Get_bias(XHls_core_1 *InstancePtr);
void XHls_core_1_Set_feature_dst(XHls_core_1 *InstancePtr, u32 Data);
u32 XHls_core_1_Get_feature_dst(XHls_core_1 *InstancePtr);

void XHls_core_1_InterruptGlobalEnable(XHls_core_1 *InstancePtr);
void XHls_core_1_InterruptGlobalDisable(XHls_core_1 *InstancePtr);
void XHls_core_1_InterruptEnable(XHls_core_1 *InstancePtr, u32 Mask);
void XHls_core_1_InterruptDisable(XHls_core_1 *InstancePtr, u32 Mask);
void XHls_core_1_InterruptClear(XHls_core_1 *InstancePtr, u32 Mask);
u32 XHls_core_1_InterruptGetEnabled(XHls_core_1 *InstancePtr);
u32 XHls_core_1_InterruptGetStatus(XHls_core_1 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
