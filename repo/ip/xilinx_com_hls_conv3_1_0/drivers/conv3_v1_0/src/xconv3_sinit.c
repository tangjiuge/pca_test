// ==============================================================
// File generated on Wed Sep 04 09:50:08 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xconv3.h"

extern XConv3_Config XConv3_ConfigTable[];

XConv3_Config *XConv3_LookupConfig(u16 DeviceId) {
	XConv3_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCONV3_NUM_INSTANCES; Index++) {
		if (XConv3_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XConv3_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XConv3_Initialize(XConv3 *InstancePtr, u16 DeviceId) {
	XConv3_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XConv3_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XConv3_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

