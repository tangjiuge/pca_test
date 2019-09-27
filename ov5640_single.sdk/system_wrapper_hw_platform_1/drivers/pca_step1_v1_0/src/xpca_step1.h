// ==============================================================
// File generated on Thu Sep 26 16:15:26 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XPCA_STEP1_H
#define XPCA_STEP1_H

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
#include "xpca_step1_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XPca_step1_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XPca_step1;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XPca_step1_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XPca_step1_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XPca_step1_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XPca_step1_ReadReg(BaseAddress, RegOffset) \
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
int XPca_step1_Initialize(XPca_step1 *InstancePtr, u16 DeviceId);
XPca_step1_Config* XPca_step1_LookupConfig(u16 DeviceId);
int XPca_step1_CfgInitialize(XPca_step1 *InstancePtr, XPca_step1_Config *ConfigPtr);
#else
int XPca_step1_Initialize(XPca_step1 *InstancePtr, const char* InstanceName);
int XPca_step1_Release(XPca_step1 *InstancePtr);
#endif

void XPca_step1_Start(XPca_step1 *InstancePtr);
u32 XPca_step1_IsDone(XPca_step1 *InstancePtr);
u32 XPca_step1_IsIdle(XPca_step1 *InstancePtr);
u32 XPca_step1_IsReady(XPca_step1 *InstancePtr);
void XPca_step1_EnableAutoRestart(XPca_step1 *InstancePtr);
void XPca_step1_DisableAutoRestart(XPca_step1 *InstancePtr);
u32 XPca_step1_Get_return(XPca_step1 *InstancePtr);

void XPca_step1_Set_src_0(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_src_0(XPca_step1 *InstancePtr);
void XPca_step1_Set_src_1(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_src_1(XPca_step1 *InstancePtr);
void XPca_step1_Set_src_2(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_src_2(XPca_step1 *InstancePtr);
void XPca_step1_Set_src_3(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_src_3(XPca_step1 *InstancePtr);
void XPca_step1_Set_src_4(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_src_4(XPca_step1 *InstancePtr);
void XPca_step1_Set_dst_0(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_dst_0(XPca_step1 *InstancePtr);
void XPca_step1_Set_dst_1(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_dst_1(XPca_step1 *InstancePtr);
void XPca_step1_Set_dst_2(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_dst_2(XPca_step1 *InstancePtr);
void XPca_step1_Set_dst_3(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_dst_3(XPca_step1 *InstancePtr);
void XPca_step1_Set_dst_4(XPca_step1 *InstancePtr, u32 Data);
u32 XPca_step1_Get_dst_4(XPca_step1 *InstancePtr);

void XPca_step1_InterruptGlobalEnable(XPca_step1 *InstancePtr);
void XPca_step1_InterruptGlobalDisable(XPca_step1 *InstancePtr);
void XPca_step1_InterruptEnable(XPca_step1 *InstancePtr, u32 Mask);
void XPca_step1_InterruptDisable(XPca_step1 *InstancePtr, u32 Mask);
void XPca_step1_InterruptClear(XPca_step1 *InstancePtr, u32 Mask);
u32 XPca_step1_InterruptGetEnabled(XPca_step1 *InstancePtr);
u32 XPca_step1_InterruptGetStatus(XPca_step1 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
