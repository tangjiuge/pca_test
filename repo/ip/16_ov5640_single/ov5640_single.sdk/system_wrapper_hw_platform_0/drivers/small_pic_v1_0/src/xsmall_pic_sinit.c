// ==============================================================
// File generated on Tue Aug 20 11:11:24 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xsmall_pic.h"

extern XSmall_pic_Config XSmall_pic_ConfigTable[];

XSmall_pic_Config *XSmall_pic_LookupConfig(u16 DeviceId) {
	XSmall_pic_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XSMALL_PIC_NUM_INSTANCES; Index++) {
		if (XSmall_pic_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XSmall_pic_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XSmall_pic_Initialize(XSmall_pic *InstancePtr, u16 DeviceId) {
	XSmall_pic_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XSmall_pic_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XSmall_pic_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

