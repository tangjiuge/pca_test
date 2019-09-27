// ==============================================================
// File generated on Thu Sep 26 16:13:41 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XPCA_STEP2_H
#define XPCA_STEP2_H

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
#include "xpca_step2_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XPca_step2_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XPca_step2;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XPca_step2_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XPca_step2_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XPca_step2_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XPca_step2_ReadReg(BaseAddress, RegOffset) \
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
int XPca_step2_Initialize(XPca_step2 *InstancePtr, u16 DeviceId);
XPca_step2_Config* XPca_step2_LookupConfig(u16 DeviceId);
int XPca_step2_CfgInitialize(XPca_step2 *InstancePtr, XPca_step2_Config *ConfigPtr);
#else
int XPca_step2_Initialize(XPca_step2 *InstancePtr, const char* InstanceName);
int XPca_step2_Release(XPca_step2 *InstancePtr);
#endif

void XPca_step2_Start(XPca_step2 *InstancePtr);
u32 XPca_step2_IsDone(XPca_step2 *InstancePtr);
u32 XPca_step2_IsIdle(XPca_step2 *InstancePtr);
u32 XPca_step2_IsReady(XPca_step2 *InstancePtr);
void XPca_step2_EnableAutoRestart(XPca_step2 *InstancePtr);
void XPca_step2_DisableAutoRestart(XPca_step2 *InstancePtr);
u32 XPca_step2_Get_return(XPca_step2 *InstancePtr);

void XPca_step2_Set_src_0(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_src_0(XPca_step2 *InstancePtr);
void XPca_step2_Set_src_1(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_src_1(XPca_step2 *InstancePtr);
void XPca_step2_Set_src_2(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_src_2(XPca_step2 *InstancePtr);
void XPca_step2_Set_src_3(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_src_3(XPca_step2 *InstancePtr);
void XPca_step2_Set_src_4(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_src_4(XPca_step2 *InstancePtr);
void XPca_step2_Set_dst_0(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_dst_0(XPca_step2 *InstancePtr);
void XPca_step2_Set_dst_1(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_dst_1(XPca_step2 *InstancePtr);
void XPca_step2_Set_dst_2(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_dst_2(XPca_step2 *InstancePtr);
void XPca_step2_Set_dst_3(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_dst_3(XPca_step2 *InstancePtr);
void XPca_step2_Set_dst_4(XPca_step2 *InstancePtr, u32 Data);
u32 XPca_step2_Get_dst_4(XPca_step2 *InstancePtr);

void XPca_step2_InterruptGlobalEnable(XPca_step2 *InstancePtr);
void XPca_step2_InterruptGlobalDisable(XPca_step2 *InstancePtr);
void XPca_step2_InterruptEnable(XPca_step2 *InstancePtr, u32 Mask);
void XPca_step2_InterruptDisable(XPca_step2 *InstancePtr, u32 Mask);
void XPca_step2_InterruptClear(XPca_step2 *InstancePtr, u32 Mask);
u32 XPca_step2_InterruptGetEnabled(XPca_step2 *InstancePtr);
u32 XPca_step2_InterruptGetStatus(XPca_step2 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
