// ==============================================================
// File generated on Tue Aug 20 11:11:24 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XSMALL_PIC_H
#define XSMALL_PIC_H

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
#include "xsmall_pic_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XSmall_pic_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XSmall_pic;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XSmall_pic_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XSmall_pic_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XSmall_pic_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XSmall_pic_ReadReg(BaseAddress, RegOffset) \
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
int XSmall_pic_Initialize(XSmall_pic *InstancePtr, u16 DeviceId);
XSmall_pic_Config* XSmall_pic_LookupConfig(u16 DeviceId);
int XSmall_pic_CfgInitialize(XSmall_pic *InstancePtr, XSmall_pic_Config *ConfigPtr);
#else
int XSmall_pic_Initialize(XSmall_pic *InstancePtr, const char* InstanceName);
int XSmall_pic_Release(XSmall_pic *InstancePtr);
#endif

void XSmall_pic_Start(XSmall_pic *InstancePtr);
u32 XSmall_pic_IsDone(XSmall_pic *InstancePtr);
u32 XSmall_pic_IsIdle(XSmall_pic *InstancePtr);
u32 XSmall_pic_IsReady(XSmall_pic *InstancePtr);
void XSmall_pic_EnableAutoRestart(XSmall_pic *InstancePtr);
void XSmall_pic_DisableAutoRestart(XSmall_pic *InstancePtr);
u32 XSmall_pic_Get_return(XSmall_pic *InstancePtr);

void XSmall_pic_Set_image_src(XSmall_pic *InstancePtr, u32 Data);
u32 XSmall_pic_Get_image_src(XSmall_pic *InstancePtr);
void XSmall_pic_Set_small_pic_dst(XSmall_pic *InstancePtr, u32 Data);
u32 XSmall_pic_Get_small_pic_dst(XSmall_pic *InstancePtr);
void XSmall_pic_Set_therehold(XSmall_pic *InstancePtr, u32 Data);
u32 XSmall_pic_Get_therehold(XSmall_pic *InstancePtr);
void XSmall_pic_Set_distingish_dst(XSmall_pic *InstancePtr, u32 Data);
u32 XSmall_pic_Get_distingish_dst(XSmall_pic *InstancePtr);

void XSmall_pic_InterruptGlobalEnable(XSmall_pic *InstancePtr);
void XSmall_pic_InterruptGlobalDisable(XSmall_pic *InstancePtr);
void XSmall_pic_InterruptEnable(XSmall_pic *InstancePtr, u32 Mask);
void XSmall_pic_InterruptDisable(XSmall_pic *InstancePtr, u32 Mask);
void XSmall_pic_InterruptClear(XSmall_pic *InstancePtr, u32 Mask);
u32 XSmall_pic_InterruptGetEnabled(XSmall_pic *InstancePtr);
u32 XSmall_pic_InterruptGetStatus(XSmall_pic *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
