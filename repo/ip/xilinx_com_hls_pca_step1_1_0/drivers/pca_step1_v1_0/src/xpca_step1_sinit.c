// ==============================================================
// File generated on Thu Sep 26 16:15:26 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xpca_step1.h"

extern XPca_step1_Config XPca_step1_ConfigTable[];

XPca_step1_Config *XPca_step1_LookupConfig(u16 DeviceId) {
	XPca_step1_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XPCA_STEP1_NUM_INSTANCES; Index++) {
		if (XPca_step1_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XPca_step1_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XPca_step1_Initialize(XPca_step1 *InstancePtr, u16 DeviceId) {
	XPca_step1_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XPca_step1_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XPca_step1_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

