// ==============================================================
// File generated on Thu Sep 26 16:13:41 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xpca_step2.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XPca_step2_CfgInitialize(XPca_step2 *InstancePtr, XPca_step2_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XPca_step2_Start(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_AP_CTRL) & 0x80;
    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XPca_step2_IsDone(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XPca_step2_IsIdle(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XPca_step2_IsReady(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XPca_step2_EnableAutoRestart(XPca_step2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XPca_step2_DisableAutoRestart(XPca_step2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XPca_step2_Get_return(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_AP_RETURN);
    return Data;
}
void XPca_step2_Set_src_0(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_0_DATA, Data);
}

u32 XPca_step2_Get_src_0(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_0_DATA);
    return Data;
}

void XPca_step2_Set_src_1(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_1_DATA, Data);
}

u32 XPca_step2_Get_src_1(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_1_DATA);
    return Data;
}

void XPca_step2_Set_src_2(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_2_DATA, Data);
}

u32 XPca_step2_Get_src_2(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_2_DATA);
    return Data;
}

void XPca_step2_Set_src_3(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_3_DATA, Data);
}

u32 XPca_step2_Get_src_3(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_3_DATA);
    return Data;
}

void XPca_step2_Set_src_4(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_4_DATA, Data);
}

u32 XPca_step2_Get_src_4(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_SRC_4_DATA);
    return Data;
}

void XPca_step2_Set_dst_0(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_0_DATA, Data);
}

u32 XPca_step2_Get_dst_0(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_0_DATA);
    return Data;
}

void XPca_step2_Set_dst_1(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_1_DATA, Data);
}

u32 XPca_step2_Get_dst_1(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_1_DATA);
    return Data;
}

void XPca_step2_Set_dst_2(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_2_DATA, Data);
}

u32 XPca_step2_Get_dst_2(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_2_DATA);
    return Data;
}

void XPca_step2_Set_dst_3(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_3_DATA, Data);
}

u32 XPca_step2_Get_dst_3(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_3_DATA);
    return Data;
}

void XPca_step2_Set_dst_4(XPca_step2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_4_DATA, Data);
}

u32 XPca_step2_Get_dst_4(XPca_step2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_DST_4_DATA);
    return Data;
}

void XPca_step2_InterruptGlobalEnable(XPca_step2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_GIE, 1);
}

void XPca_step2_InterruptGlobalDisable(XPca_step2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_GIE, 0);
}

void XPca_step2_InterruptEnable(XPca_step2 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_IER);
    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_IER, Register | Mask);
}

void XPca_step2_InterruptDisable(XPca_step2 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_IER);
    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_IER, Register & (~Mask));
}

void XPca_step2_InterruptClear(XPca_step2 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPca_step2_WriteReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_ISR, Mask);
}

u32 XPca_step2_InterruptGetEnabled(XPca_step2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_IER);
}

u32 XPca_step2_InterruptGetStatus(XPca_step2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPca_step2_ReadReg(InstancePtr->Axilites_BaseAddress, XPCA_STEP2_AXILITES_ADDR_ISR);
}

