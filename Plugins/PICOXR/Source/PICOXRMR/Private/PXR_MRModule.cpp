// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#include "PXR_MRModule.h"
#include "PXR_AnchorManager.h"

#define LOCTEXT_NAMESPACE "FPICOXRMRModule"

FPICOXRMRModule::FPICOXRMRModule()
	: PICOXRHMD(nullptr)
{
}

FPICOXRMRModule::~FPICOXRMRModule()
{
}

void FPICOXRMRModule::StartupModule()
{
	if (GEngine)
	{
		if (GEngine->XRSystem.IsValid() && (GEngine->XRSystem->GetSystemName() == TEXT("PICOXRHMD")))
		{
			PICOXRHMD = static_cast<FPICOXRHMD*>(GEngine->XRSystem.Get());
		}
	}

	FPICOAnchorManager::GetInstance()->Initialize(PICOXRHMD);
}

void FPICOXRMRModule::ShutdownModule()
{
	FPICOAnchorManager::GetInstance()->Shutdown();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPICOXRMRModule, PICOXRMR)