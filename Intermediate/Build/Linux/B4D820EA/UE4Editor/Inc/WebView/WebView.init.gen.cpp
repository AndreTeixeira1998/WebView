// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebView_init() {}
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WebView()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/WebView",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4FC7404B,
				0xA38D17E8,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif