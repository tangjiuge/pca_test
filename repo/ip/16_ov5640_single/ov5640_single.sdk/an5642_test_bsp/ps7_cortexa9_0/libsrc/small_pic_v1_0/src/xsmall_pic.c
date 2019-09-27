// ==============================================================
// File generated on Tue Aug 20 10:43:01 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xsmall_pic.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XSmall_pic_CfgInitialize(XSmall_pic *InstancePtr, XSmall_pic_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XSmall_pic_Start(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_AP_CTRL) & 0x80;
    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XSmall_pic_IsDone(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XSmall_pic_IsIdle(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XSmall_pic_IsReady(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XSmall_pic_EnableAutoRestart(XSmall_pic *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XSmall_pic_DisableAutoRestart(XSmall_pic *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XSmall_pic_Get_return(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_AP_RETURN);
    return Data;
}
void XSmall_pic_Set_image_src(XSmall_pic *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_IMAGE_SRC_DATA, Data);
}

u32 XSmall_pic_Get_image_src(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_IMAGE_SRC_DATA);
    return Data;
}

void XSmall_pic_Set_small_pic_dst(XSmall_pic *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_SMALL_PIC_DST_DATA, Data);
}

u32 XSmall_pic_Get_small_pic_dst(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_SMALL_PIC_DST_DATA);
    return Data;
}

void XSmall_pic_Set_therehold(XSmall_pic *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_THEREHOLD_DATA, Data);
}

u32 XSmall_pic_Get_therehold(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_THEREHOLD_DATA);
    return Data;
}

void XSmall_pic_Set_distingish_dst(XSmall_pic *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_DISTINGISH_DST_DATA, Data);
}

u32 XSmall_pic_Get_distingish_dst(XSmall_pic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_DISTINGISH_DST_DATA);
    return Data;
}

void XSmall_pic_InterruptGlobalEnable(XSmall_pic *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_GIE, 1);
}

void XSmall_pic_InterruptGlobalDisable(XSmall_pic *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_GIE, 0);
}

void XSmall_pic_InterruptEnable(XSmall_pic *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_IER);
    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_IER, Register | Mask);
}

void XSmall_pic_InterruptDisable(XSmall_pic *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_IER);
    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_IER, Register & (~Mask));
}

void XSmall_pic_InterruptClear(XSmall_pic *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSmall_pic_WriteReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_ISR, Mask);
}

u32 XSmall_pic_InterruptGetEnabled(XSmall_pic *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_IER);
}

u32 XSmall_pic_InterruptGetStatus(XSmall_pic *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XSmall_pic_ReadReg(InstancePtr->Axilites_BaseAddress, XSMALL_PIC_AXILITES_ADDR_ISR);
}

