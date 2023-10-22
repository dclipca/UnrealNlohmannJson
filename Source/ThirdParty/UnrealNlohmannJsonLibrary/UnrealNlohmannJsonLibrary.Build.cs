// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class UnrealNlohmannJsonLibrary : ModuleRules
{
	public UnrealNlohmannJsonLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		PublicSystemIncludePaths.Add("$(ModuleDir)/Public");

		PublicIncludePaths.AddRange(
			new string[] {
				ModuleDirectory + "/ThirdParty/UnrealNlohmannJson",
				// ... add other public include paths required here ...
			}
		);
	}
}
