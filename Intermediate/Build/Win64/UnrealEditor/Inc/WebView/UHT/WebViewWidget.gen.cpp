// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebView/Public/WebViewWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebViewWidget() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebView();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebBase();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebViewWidget();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebViewWidget_NoRegister();
// End Cross Module References
	void UWebViewWidget::StaticRegisterNativesUWebViewWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebViewWidget);
	UClass* Z_Construct_UClass_UWebViewWidget_NoRegister()
	{
		return UWebViewWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWebViewWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebViewWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebViewWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebViewWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebViewWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebViewWidget_Statics::ClassParams = {
		&UWebViewWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebViewWidget()
	{
		if (!Z_Registration_Info_UClass_UWebViewWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebViewWidget.OuterSingleton, Z_Construct_UClass_UWebViewWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebViewWidget.OuterSingleton;
	}
	template<> WEBVIEW_API UClass* StaticClass<UWebViewWidget>()
	{
		return UWebViewWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebViewWidget);
	UWebViewWidget::~UWebViewWidget() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebViewWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebViewWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebViewWidget, UWebViewWidget::StaticClass, TEXT("UWebViewWidget"), &Z_Registration_Info_UClass_UWebViewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebViewWidget), 2602347618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebViewWidget_h_567670802(TEXT("/Script/WebView"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebViewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebViewWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
