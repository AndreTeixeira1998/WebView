// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebView/Public/WebBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBase() {}
// Cross Module References
	WEBVIEW_API UClass* Z_Construct_UClass_UHtmlHeaders_NoRegister();
	WEBVIEW_API UClass* Z_Construct_UClass_UHtmlHeaders();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebView();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebBase();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebViewObject_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UHtmlHeaders::execReplace)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Replace(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHtmlHeaders::execExistAppend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExistAppend(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	void UHtmlHeaders::StaticRegisterNativesUHtmlHeaders()
	{
		UClass* Class = UHtmlHeaders::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExistAppend", &UHtmlHeaders::execExistAppend },
			{ "Replace", &UHtmlHeaders::execReplace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics
	{
		struct HtmlHeaders_eventExistAppend_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HtmlHeaders_eventExistAppend_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HtmlHeaders_eventExistAppend_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHtmlHeaders, nullptr, "ExistAppend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::HtmlHeaders_eventExistAppend_Parms), Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHtmlHeaders_ExistAppend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHtmlHeaders_ExistAppend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHtmlHeaders_Replace_Statics
	{
		struct HtmlHeaders_eventReplace_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HtmlHeaders_eventReplace_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HtmlHeaders_eventReplace_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHtmlHeaders, nullptr, "Replace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::HtmlHeaders_eventReplace_Parms), Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHtmlHeaders_Replace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHtmlHeaders_Replace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHtmlHeaders);
	UClass* Z_Construct_UClass_UHtmlHeaders_NoRegister()
	{
		return UHtmlHeaders::StaticClass();
	}
	struct Z_Construct_UClass_UHtmlHeaders_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHtmlHeaders_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebView,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHtmlHeaders_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHtmlHeaders_ExistAppend, "ExistAppend" }, // 2027510264
		{ &Z_Construct_UFunction_UHtmlHeaders_Replace, "Replace" }, // 1690829959
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHtmlHeaders_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers_MetaData[] = {
		{ "Category", "Web View|HTML" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHtmlHeaders, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHtmlHeaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHtmlHeaders_Statics::NewProp_Headers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHtmlHeaders_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHtmlHeaders>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHtmlHeaders_Statics::ClassParams = {
		&UHtmlHeaders::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHtmlHeaders_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHtmlHeaders_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHtmlHeaders_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHtmlHeaders_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHtmlHeaders()
	{
		if (!Z_Registration_Info_UClass_UHtmlHeaders.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHtmlHeaders.OuterSingleton, Z_Construct_UClass_UHtmlHeaders_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHtmlHeaders.OuterSingleton;
	}
	template<> WEBVIEW_API UClass* StaticClass<UHtmlHeaders>()
	{
		return UHtmlHeaders::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHtmlHeaders);
	struct Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnPreReBuild__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics
	{
		struct WebBase_eventOnStateLoad_Parms
		{
			int32 state;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_state;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnStateLoad_Parms, state), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnStateLoad__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::WebBase_eventOnStateLoad_Parms), Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics
	{
		struct WebBase_eventOnUrlChanged_Parms
		{
			FText Url;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnUrlChanged_Parms, Url), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnUrlChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::WebBase_eventOnUrlChanged_Parms), Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics
	{
		struct WebBase_eventOnJsStr_Parms
		{
			FString Type;
			FString JSON;
			FString FuncName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuncName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FuncName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnJsStr_Parms, Type), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnJsStr_Parms, JSON), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName = { "FuncName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnJsStr_Parms, FuncName), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnJsStr__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::WebBase_eventOnJsStr_Parms), Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics
	{
		struct WebBase_eventOnBeforePopup_Parms
		{
			FString Url;
			FString Frame;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnBeforePopup_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnBeforePopup_Parms, Frame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnBeforePopup__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::WebBase_eventOnBeforePopup_Parms), Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics
	{
		struct WebBase_eventOnDownloadComplete_Parms
		{
			FString Url;
			FString File;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnDownloadComplete_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnDownloadComplete_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnDownloadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::WebBase_eventOnDownloadComplete_Parms), Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics
	{
		struct WebBase_eventOnBeforeRequest_Parms
		{
			FString URL;
			int32 ResourceType;
			UHtmlHeaders* Headers;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnBeforeRequest_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnBeforeRequest_Parms, ResourceType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnBeforeRequest_Parms, Headers), Z_Construct_UClass_UHtmlHeaders_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::NewProp_Headers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*  ResourceType\n\x09  0: Top level page.\n\x09  1: Frame or iframe.\n\x09  3: CSS stylesheet.\n\x09  4: External script.\n\x09  5: Image (jpg/gif/png/etc).\n\x09  6: Font.\n\x09  7: Some other subresource. This is the default type if the actual type is unknown.\n\x09  8: Object (or embed) tag for a plugin, or a resource that a plugin requested.\n\x09  9: Media resource.\n\x09  10: Main resource of a dedicated worker.\n\x09  11: Main resource of a shared worker.\n\x09  12: Explicitly requested prefetch.\n\x09  13: Favicon.\n\x09  14: XMLHttpRequest.\n\x09  15: A request for a <ping>\n\x09  16: Main resource of a service worker.\n\x09  17: A report of Content Security Policy violations.\n\x09  18: A resource that a plugin requested.\n\x09  19: A main-frame service worker navigation preload request.\n\x09  20: A sub-frame service worker navigation preload request.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "ResourceType\n       0: Top level page.\n       1: Frame or iframe.\n       3: CSS stylesheet.\n       4: External script.\n       5: Image (jpg/gif/png/etc).\n       6: Font.\n       7: Some other subresource. This is the default type if the actual type is unknown.\n       8: Object (or embed) tag for a plugin, or a resource that a plugin requested.\n       9: Media resource.\n       10: Main resource of a dedicated worker.\n       11: Main resource of a shared worker.\n       12: Explicitly requested prefetch.\n       13: Favicon.\n       14: XMLHttpRequest.\n       15: A request for a <ping>\n       16: Main resource of a service worker.\n       17: A report of Content Security Policy violations.\n       18: A resource that a plugin requested.\n       19: A main-frame service worker navigation preload request.\n       20: A sub-frame service worker navigation preload request." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnBeforeRequest__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::WebBase_eventOnBeforeRequest_Parms), Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWebBase::execShowDevTools)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDevTools();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execReopenRender)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReopenRender(Z_Param_NewURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execShowAddress)
	{
		P_GET_UBOOL(Z_Param_show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAddress(Z_Param_show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execWebPixel)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_pixel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WebPixel(Z_Param_pixel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execZoomLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_zoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomLevel(Z_Param_zoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execUnbindUObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bIsPermanent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindUObject(Z_Param_Name,Z_Param_Object,Z_Param_bIsPermanent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execBindUObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bIsPermanent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindUObject(Z_Param_Name,Z_Param_Object,Z_Param_bIsPermanent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execCallJsonStr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Function);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallJsonStr(Z_Param_Function,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execLoadURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_PostData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadURL(Z_Param_NewURL,Z_Param_PostData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execExecuteJavascript)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScriptText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteJavascript(Z_Param_ScriptText);
		P_NATIVE_END;
	}
	void UWebBase::StaticRegisterNativesUWebBase()
	{
		UClass* Class = UWebBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindUObject", &UWebBase::execBindUObject },
			{ "CallJsonStr", &UWebBase::execCallJsonStr },
			{ "ExecuteJavascript", &UWebBase::execExecuteJavascript },
			{ "GetUrl", &UWebBase::execGetUrl },
			{ "LoadURL", &UWebBase::execLoadURL },
			{ "Reload", &UWebBase::execReload },
			{ "ReopenRender", &UWebBase::execReopenRender },
			{ "ShowAddress", &UWebBase::execShowAddress },
			{ "ShowDevTools", &UWebBase::execShowDevTools },
			{ "UnbindUObject", &UWebBase::execUnbindUObject },
			{ "WebPixel", &UWebBase::execWebPixel },
			{ "ZoomLevel", &UWebBase::execZoomLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebBase_BindUObject_Statics
	{
		struct WebBase_eventBindUObject_Parms
		{
			FString Name;
			UObject* Object;
			bool bIsPermanent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bIsPermanent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPermanent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventBindUObject_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventBindUObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_bIsPermanent_SetBit(void* Obj)
	{
		((WebBase_eventBindUObject_Parms*)Obj)->bIsPermanent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_bIsPermanent = { "bIsPermanent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebBase_eventBindUObject_Parms), &Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_bIsPermanent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_BindUObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_bIsPermanent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_BindUObject_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Name|Object" },
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09 * Expose a UObject instance to the browser runtime.\n\x09 * Properties and Functions will be accessible from JavaScript side.\n\x09 * As all communication with the rendering procesis asynchronous, return values (both for properties and function results) are wrapped into JS Future objects.\n\x09 * @param Name The name of the object.\n\x09 *        The object will show up as window.ue4.{Name} on the javascript side.\n\x09 *        If there is an existing object of the same name, this object will replace it. If bIsPermanent is false and there is an existing permanent binding, the permanent binding will be restored when the temporary one is removed.\n\x09 * @param Object The object instance.\n\x09 * @param bIsPermanent If true, the object will be visible to all pages loaded through this browser widget,\n\x09 *        otherwise, it will be deleted when navigating away from the current page.\n\x09 *        Non-permanent bindings should be registered from inside an OnLoadStarted event handler in order to be available before JS code starts loading.\n\x09 */" },
		{ "CPP_Default_bIsPermanent", "true" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Expose a UObject instance to the browser runtime.\nProperties and Functions will be accessible from JavaScript side.\nAs all communication with the rendering procesis asynchronous, return values (both for properties and function results) are wrapped into JS Future objects.\n@param Name The name of the object.\n       The object will show up as window.ue4.{Name} on the javascript side.\n       If there is an existing object of the same name, this object will replace it. If bIsPermanent is false and there is an existing permanent binding, the permanent binding will be restored when the temporary one is removed.\n@param Object The object instance.\n@param bIsPermanent If true, the object will be visible to all pages loaded through this browser widget,\n       otherwise, it will be deleted when navigating away from the current page.\n       Non-permanent bindings should be registered from inside an OnLoadStarted event handler in order to be available before JS code starts loading." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_BindUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "BindUObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_BindUObject_Statics::WebBase_eventBindUObject_Parms), Z_Construct_UFunction_UWebBase_BindUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_BindUObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_BindUObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_BindUObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_BindUObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_BindUObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_CallJsonStr_Statics
	{
		struct WebBase_eventCallJsonStr_Parms
		{
			FString Function;
			FString Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventCallJsonStr_Parms, Function), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventCallJsonStr_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Data" },
		{ "AutoCreateRefTerm", "Data" },
		{ "Category", "Web View" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "CallJsonStr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::WebBase_eventCallJsonStr_Parms), Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_CallJsonStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics
	{
		struct WebBase_eventExecuteJavascript_Parms
		{
			FString ScriptText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText = { "ScriptText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventExecuteJavascript_Parms, ScriptText), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Executes a JavaScript string in the context of the web page\n\x09* @param ScriptText JavaScript string to execute\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Executes a JavaScript string in the context of the web page\n@param ScriptText JavaScript string to execute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "ExecuteJavascript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::WebBase_eventExecuteJavascript_Parms), Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_ExecuteJavascript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_GetUrl_Statics
	{
		struct WebBase_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_GetUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Gets the currently loaded URL.\n\x09* @return The URL, or empty string if no document is loaded.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Gets the currently loaded URL.\n@return The URL, or empty string if no document is loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "GetUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_GetUrl_Statics::WebBase_eventGetUrl_Parms), Z_Construct_UFunction_UWebBase_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_LoadURL_Statics
	{
		struct WebBase_eventLoadURL_Parms
		{
			FString NewURL;
			FString PostData;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PostData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_LoadURL_Statics::NewProp_NewURL = { "NewURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventLoadURL_Parms, NewURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_LoadURL_Statics::NewProp_PostData = { "PostData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventLoadURL_Parms, PostData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_LoadURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_LoadURL_Statics::NewProp_NewURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_LoadURL_Statics::NewProp_PostData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_LoadURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09 * Load the specified URL\n\x09 * @param NewURL New URL to load\n\x09 */" },
		{ "CPP_Default_PostData", "" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Load the specified URL\n@param NewURL New URL to load" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_LoadURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "LoadURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_LoadURL_Statics::WebBase_eventLoadURL_Parms), Z_Construct_UFunction_UWebBase_LoadURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_LoadURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_LoadURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_LoadURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_LoadURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_LoadURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_Reload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** Reload the current page. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Reload the current page." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_ReopenRender_Statics
	{
		struct WebBase_eventReopenRender_Parms
		{
			FString NewURL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_ReopenRender_Statics::NewProp_NewURL = { "NewURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventReopenRender_Parms, NewURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_ReopenRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_ReopenRender_Statics::NewProp_NewURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ReopenRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* reopen a new render to replace old render.\n\x09* @param NewURL New URL to load.\n\x09*        if NewURL is empty,will Assign old URL.\n\x09*/" },
		{ "CPP_Default_NewURL", "" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "reopen a new render to replace old render.\n@param NewURL New URL to load.\n       if NewURL is empty,will Assign old URL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_ReopenRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "ReopenRender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_ReopenRender_Statics::WebBase_eventReopenRender_Parms), Z_Construct_UFunction_UWebBase_ReopenRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ReopenRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ReopenRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ReopenRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_ReopenRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_ReopenRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_ShowAddress_Statics
	{
		struct WebBase_eventShowAddress_Parms
		{
			bool show;
		};
		static void NewProp_show_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_show;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebBase_ShowAddress_Statics::NewProp_show_SetBit(void* Obj)
	{
		((WebBase_eventShowAddress_Parms*)Obj)->show = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebBase_ShowAddress_Statics::NewProp_show = { "show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebBase_eventShowAddress_Parms), &Z_Construct_UFunction_UWebBase_ShowAddress_Statics::NewProp_show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_ShowAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_ShowAddress_Statics::NewProp_show,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ShowAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Set web show address\n\x09* @ show : true:show false:hide\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Set web show address\n@ show : true:show false:hide" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_ShowAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "ShowAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_ShowAddress_Statics::WebBase_eventShowAddress_Parms), Z_Construct_UFunction_UWebBase_ShowAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ShowAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ShowAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ShowAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_ShowAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_ShowAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_ShowDevTools_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ShowDevTools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Show Dev Tools for debug web \n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Show Dev Tools for debug web" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_ShowDevTools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "ShowDevTools", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ShowDevTools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ShowDevTools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_ShowDevTools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_ShowDevTools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_UnbindUObject_Statics
	{
		struct WebBase_eventUnbindUObject_Parms
		{
			FString Name;
			UObject* Object;
			bool bIsPermanent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bIsPermanent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPermanent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventUnbindUObject_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventUnbindUObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_bIsPermanent_SetBit(void* Obj)
	{
		((WebBase_eventUnbindUObject_Parms*)Obj)->bIsPermanent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_bIsPermanent = { "bIsPermanent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebBase_eventUnbindUObject_Parms), &Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_bIsPermanent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_bIsPermanent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Name|Object" },
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09 * Remove an existing script binding registered by BindUObject.\n\x09 * @param Name The name of the object to remove.\n\x09 * @param Object The object will only be removed if it is the same object as the one passed in.\n\x09 * @param bIsPermanent Must match the bIsPermanent argument passed to BindUObject.\n\x09 */" },
		{ "CPP_Default_bIsPermanent", "true" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Remove an existing script binding registered by BindUObject.\n@param Name The name of the object to remove.\n@param Object The object will only be removed if it is the same object as the one passed in.\n@param bIsPermanent Must match the bIsPermanent argument passed to BindUObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "UnbindUObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::WebBase_eventUnbindUObject_Parms), Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_UnbindUObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_WebPixel_Statics
	{
		struct WebBase_eventWebPixel_Parms
		{
			FIntPoint pixel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_pixel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebBase_WebPixel_Statics::NewProp_pixel = { "pixel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventWebPixel_Parms, pixel), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_WebPixel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_WebPixel_Statics::NewProp_pixel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_WebPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Set web page zoom level\n\x09* @ pixel.x : between 128 and 1024*8\n\x09* @ pixel.y : between 64 and 756*8\n\x09* when Pixel was set,then zoom invalid\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Set web page zoom level\n@ pixel.x : between 128 and 1024*8\n@ pixel.y : between 64 and 756*8\nwhen Pixel was set,then zoom invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_WebPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "WebPixel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_WebPixel_Statics::WebBase_eventWebPixel_Parms), Z_Construct_UFunction_UWebBase_WebPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_WebPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_WebPixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_WebPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_WebPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_WebPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_ZoomLevel_Statics
	{
		struct WebBase_eventZoomLevel_Parms
		{
			float zoom;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_zoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventZoomLevel_Parms, zoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::NewProp_zoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Set web page zoom level \n\x09* @ zoom : between -7.5 and 9.0\n\x09* when Pixel was set,then zoom invalid \n\x09*/" },
		{ "CPP_Default_zoom", "0.000000" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Set web page zoom level\n@ zoom : between -7.5 and 9.0\nwhen Pixel was set,then zoom invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "ZoomLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::WebBase_eventZoomLevel_Parms), Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_ZoomLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebBase);
	UClass* Z_Construct_UClass_UWebBase_NoRegister()
	{
		return UWebBase::StaticClass();
	}
	struct Z_Construct_UClass_UWebBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ViewObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__ViewObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadState_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUrlChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUrlChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJsEventStr_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJsEventStr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeforePopup_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeforePopup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDownloadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownloadComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreReBuild_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreReBuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeforeRequest_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeforeRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_urlInitial_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_urlInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTransparency_MetaData[];
#endif
		static void NewProp_bEnableTransparency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTransparency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_styleText_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_styleText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightKeyPopup_MetaData[];
#endif
		static void NewProp_RightKeyPopup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightKeyPopup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchInputMethod_MetaData[];
#endif
		static void NewProp_SwitchInputMethod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SwitchInputMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RateFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_addressShow_MetaData[];
#endif
		static void NewProp_addressShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_addressShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_controlShow_MetaData[];
#endif
		static void NewProp_controlShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_controlShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_downloadTip_MetaData[];
#endif
		static void NewProp_downloadTip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_downloadTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Pixel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Pixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Zoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__Zoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WebView,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBase_BindUObject, "BindUObject" }, // 94296602
		{ &Z_Construct_UFunction_UWebBase_CallJsonStr, "CallJsonStr" }, // 3669394074
		{ &Z_Construct_UFunction_UWebBase_ExecuteJavascript, "ExecuteJavascript" }, // 3849499339
		{ &Z_Construct_UFunction_UWebBase_GetUrl, "GetUrl" }, // 736070978
		{ &Z_Construct_UFunction_UWebBase_LoadURL, "LoadURL" }, // 309799232
		{ &Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature, "OnBeforePopup__DelegateSignature" }, // 3599838317
		{ &Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature, "OnBeforeRequest__DelegateSignature" }, // 1923341225
		{ &Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature, "OnDownloadComplete__DelegateSignature" }, // 3850413416
		{ &Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature, "OnJsStr__DelegateSignature" }, // 2956779389
		{ &Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature, "OnPreReBuild__DelegateSignature" }, // 2552426169
		{ &Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature, "OnStateLoad__DelegateSignature" }, // 1429993099
		{ &Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature, "OnUrlChanged__DelegateSignature" }, // 877326609
		{ &Z_Construct_UFunction_UWebBase_Reload, "Reload" }, // 3776648100
		{ &Z_Construct_UFunction_UWebBase_ReopenRender, "ReopenRender" }, // 2004851304
		{ &Z_Construct_UFunction_UWebBase_ShowAddress, "ShowAddress" }, // 23700224
		{ &Z_Construct_UFunction_UWebBase_ShowDevTools, "ShowDevTools" }, // 4012074784
		{ &Z_Construct_UFunction_UWebBase_UnbindUObject, "UnbindUObject" }, // 407138020
		{ &Z_Construct_UFunction_UWebBase_WebPixel, "WebPixel" }, // 126512765
		{ &Z_Construct_UFunction_UWebBase_ZoomLevel, "ZoomLevel" }, // 114352728
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * , BlueprintType, hidecategories = (Object)\n *///UCLASS()\n" },
		{ "IncludePath", "WebBase.h" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", ", BlueprintType, hidecategories = (Object)\n //UCLASS()" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject_MetaData[] = {
		{ "Comment", "/** this party is blueprint delegate params */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "this party is blueprint delegate params" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject = { "_ViewObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, _ViewObject), Z_Construct_UClass_UWebViewObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when loading stat changed */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when loading stat changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState = { "OnLoadState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnLoadState), Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState_MetaData)) }; // 1429993099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when the Url changes. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when the Url changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged = { "OnUrlChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnUrlChanged), Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged_MetaData)) }; // 877326609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "// Called with ue.interface.broadcast(name, data) in the browser context.\n" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called with ue.interface.broadcast(name, data) in the browser context." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr = { "OnJsEventStr", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnJsEventStr), Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr_MetaData)) }; // 2956779389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when a popup is about to spawn. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when a popup is about to spawn." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup = { "OnBeforePopup", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnBeforePopup), Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup_MetaData)) }; // 3599838317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when a popup is about to spawn. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when a popup is about to spawn." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete = { "OnDownloadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnDownloadComplete), Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete_MetaData)) }; // 3850413416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when a popup is about to spawn. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when a popup is about to spawn." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild = { "OnPreReBuild", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnPreReBuild), Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild_MetaData)) }; // 2552426169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforeRequest_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** called when resouce load. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "called when resouce load." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforeRequest = { "OnBeforeRequest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnBeforeRequest), Z_Construct_UDelegateFunction_UWebBase_OnBeforeRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforeRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforeRequest_MetaData)) }; // 1923341225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial_MetaData[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** URL that the browser will initially navigate to. The URL should include the protocol, eg http:// */" },
		{ "DisplayName", "Initial URL" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "URL that the browser will initially navigate to. The URL should include the protocol, eg http://" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial = { "urlInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, urlInitial), METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_MetaData[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** Configure webpage  mouse is transparency */" },
		{ "DisplayName", "Enable Transparency" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Configure webpage  mouse is transparency" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->bEnableTransparency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency = { "bEnableTransparency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_styleText_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** Control and Editor show text style  */" },
		{ "DisplayName", "Text Style" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Control and Editor show text style" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_styleText = { "styleText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, styleText), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_styleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_styleText_MetaData)) }; // 2453068466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** popup a menu using right mouse in web page */" },
		{ "DisplayName", "Show Popup Menu" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "popup a menu using right mouse in web page" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->RightKeyPopup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup = { "RightKeyPopup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_MetaData[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** Whether to show an address bar. */" },
		{ "DisplayName", "Switch Input Method" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Whether to show an address bar." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->SwitchInputMethod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod = { "SwitchInputMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame_MetaData[] = {
		{ "Category", "Web View" },
		{ "ClampMax", "60" },
		{ "ClampMin", "30" },
		{ "Comment", "/** Configure webpage flush frame rate */" },
		{ "DisplayName", "Frame Rate" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Configure webpage flush frame rate" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame = { "RateFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, RateFrame), METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground_MetaData[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** Configure webpage is transparency */" },
		{ "DisplayName", "Background Color" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Configure webpage is transparency" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground = { "ColorBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, ColorBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** Whether to show an address bar. */" },
		{ "DisplayName", "Show Address" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Whether to show an address bar." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->addressShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow = { "addressShow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** Whether to show standard controls like Back, Forward, Reload etc. */" },
		{ "DisplayName", "Show Controls" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Whether to show standard controls like Back, Forward, Reload etc." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->controlShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow = { "controlShow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** When Download file Whether to show Tip Dialog. */" },
		{ "DisplayName", "Download Tip" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "When Download file Whether to show Tip Dialog." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->downloadTip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip = { "downloadTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel_MetaData[] = {
		{ "Category", "Web View|Screen" },
		{ "Comment", "/** set web page rendering pixel size, 8*4 default :The browser calculates the size itself  */" },
		{ "DisplayName", "Web Pixel" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "set web page rendering pixel size, 8*4 default :The browser calculates the size itself" },
		{ "UIMax", "8192" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel = { "_Pixel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, _Pixel), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom_MetaData[] = {
		{ "Category", "Web View|Screen" },
		{ "ClampMax", "5.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**  Page Zoom Level. The value is consistent with that of chrome */" },
		{ "DisplayName", "Zoom Level" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Page Zoom Level. The value is consistent with that of chrome" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom = { "_Zoom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, _Zoom), METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforeRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_styleText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBase_Statics::ClassParams = {
		&UWebBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWebBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebBase()
	{
		if (!Z_Registration_Info_UClass_UWebBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBase.OuterSingleton, Z_Construct_UClass_UWebBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebBase.OuterSingleton;
	}
	template<> WEBVIEW_API UClass* StaticClass<UWebBase>()
	{
		return UWebBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHtmlHeaders, UHtmlHeaders::StaticClass, TEXT("UHtmlHeaders"), &Z_Registration_Info_UClass_UHtmlHeaders, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHtmlHeaders), 2108261102U) },
		{ Z_Construct_UClass_UWebBase, UWebBase::StaticClass, TEXT("UWebBase"), &Z_Registration_Info_UClass_UWebBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBase), 1204076729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_640727893(TEXT("/Script/WebView"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS