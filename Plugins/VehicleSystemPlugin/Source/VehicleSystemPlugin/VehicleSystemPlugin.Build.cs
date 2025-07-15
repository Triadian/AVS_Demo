// Copyright 2019-2023 Seven47 Software. All Rights Reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited

using UnrealBuildTool;

public class VehicleSystemPlugin : ModuleRules
{
	public VehicleSystemPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Projects", "Core", "CoreUObject", "Engine", "InputCore" });
		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
