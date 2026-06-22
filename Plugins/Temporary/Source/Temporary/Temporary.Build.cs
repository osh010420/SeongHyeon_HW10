using UnrealBuildTool;
using System.IO;

public class Temporary : ModuleRules
{
    public Temporary(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core", "CoreUObject", "Engine"
        });

        PublicIncludePaths.Add(ModuleDirectory);

    }
}