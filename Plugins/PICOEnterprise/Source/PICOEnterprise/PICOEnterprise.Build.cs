// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

using UnrealBuildTool;
using System.IO;

public class PICOEnterprise : ModuleRules
{
	public PICOEnterprise(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicIncludePathModuleNames.AddRange(
            new[] {
                "Launch",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "HeadMountedDisplay",
                "PICOXRHMD",
            }
        );

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            // Vulkan
            AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
            {
                string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
                AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "PICOEnterprise_UPL.xml"));
            }
        }
    }
}
