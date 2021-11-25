// Copyright aSurgingRiver, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
    public class WebView : ModuleRules
    {
        public WebView(ReadOnlyTargetRules Target) : base(Target)
        {

            //PublicDefinitions.Add("JSON_LIB"); //��� �Զ���ĺ� ���� ����ĺ�
            //PublicDependencyModuleNames.Add("JsonLibrary");

            PublicDependencyModuleNames.AddRange(
                new string[]{
                    "Core",
                    "CoreUObject",
                    "Slate",
                    "SlateCore",
                    "UMG",
                    "Engine",
                    "CefCore"
                }
            );

            if (Target.bBuildEditor == true) {
                PrivateIncludePathModuleNames.AddRange(
                    new string[] {
                        "UnrealEd",
                    }
                );
                PrivateDependencyModuleNames.AddRange(
                    new string[] {
                        "UnrealEd",
                    }
                );
            }
        }
    }
}
