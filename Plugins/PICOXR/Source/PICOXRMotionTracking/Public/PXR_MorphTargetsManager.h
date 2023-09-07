// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#pragma once

#include "Components/SkinnedMeshComponent.h"

struct PICOXRMOTIONTRACKING_API FPXRMorphTargetsManager
{
public:
	void ResetMeshMorphTargetCurves(USkinnedMeshComponent* TargetMeshComponent);
	void UpdateMeshMorphTargets(USkinnedMeshComponent* TargetMeshComponent);
	void SetMeshMorphTargetValue(FName MorphTargetName, float Value);
	float GetMeshMorphTargetValue(FName MorphTargetName) const;
	void EmptyMorphTargets();
	TMap<FName, float> MeshMorphTargetCurves;
};
