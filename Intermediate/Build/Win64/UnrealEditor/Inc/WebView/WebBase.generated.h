// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntPoint;
class UObject;
#ifdef WEBVIEW_WebBase_generated_h
#error "WebBase.generated.h already included, missing '#pragma once' in WebBase.h"
#endif
#define WEBVIEW_WebBase_generated_h

#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_21_DELEGATE \
static inline void FOnPreReBuild_DelegateWrapper(const FMulticastScriptDelegate& OnPreReBuild) \
{ \
	OnPreReBuild.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_22_DELEGATE \
struct WebBase_eventOnStateLoad_Parms \
{ \
	int32 state; \
}; \
static inline void FOnStateLoad_DelegateWrapper(const FMulticastScriptDelegate& OnStateLoad, int32 state) \
{ \
	WebBase_eventOnStateLoad_Parms Parms; \
	Parms.state=state; \
	OnStateLoad.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_23_DELEGATE \
struct WebBase_eventOnUrlChanged_Parms \
{ \
	FText Url; \
}; \
static inline void FOnUrlChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUrlChanged, FText const& Url) \
{ \
	WebBase_eventOnUrlChanged_Parms Parms; \
	Parms.Url=Url; \
	OnUrlChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_24_DELEGATE \
struct WebBase_eventOnJsStr_Parms \
{ \
	FString Type; \
	FString JSON; \
	FString FuncName; \
}; \
static inline void FOnJsStr_DelegateWrapper(const FMulticastScriptDelegate& OnJsStr, const FString& Type, const FString& JSON, const FString& FuncName) \
{ \
	WebBase_eventOnJsStr_Parms Parms; \
	Parms.Type=Type; \
	Parms.JSON=JSON; \
	Parms.FuncName=FuncName; \
	OnJsStr.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_25_DELEGATE \
struct WebBase_eventOnBeforePopup_Parms \
{ \
	FString Url; \
	FString Frame; \
}; \
static inline void FOnBeforePopup_DelegateWrapper(const FMulticastScriptDelegate& OnBeforePopup, const FString& Url, const FString& Frame) \
{ \
	WebBase_eventOnBeforePopup_Parms Parms; \
	Parms.Url=Url; \
	Parms.Frame=Frame; \
	OnBeforePopup.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_26_DELEGATE \
struct WebBase_eventOnDownloadComplete_Parms \
{ \
	FString Url; \
	FString File; \
}; \
static inline void FOnDownloadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadComplete, const FString& Url, const FString& File) \
{ \
	WebBase_eventOnDownloadComplete_Parms Parms; \
	Parms.Url=Url; \
	Parms.File=File; \
	OnDownloadComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowAddress); \
	DECLARE_FUNCTION(execWebPixel); \
	DECLARE_FUNCTION(execZoomLevel); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execUnbindUObject); \
	DECLARE_FUNCTION(execBindUObject); \
	DECLARE_FUNCTION(execCallJsonStr); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execLoadURL); \
	DECLARE_FUNCTION(execExecuteJavascript);


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowAddress); \
	DECLARE_FUNCTION(execWebPixel); \
	DECLARE_FUNCTION(execZoomLevel); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execUnbindUObject); \
	DECLARE_FUNCTION(execBindUObject); \
	DECLARE_FUNCTION(execCallJsonStr); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execLoadURL); \
	DECLARE_FUNCTION(execExecuteJavascript);


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebBase(); \
	friend struct Z_Construct_UClass_UWebBase_Statics; \
public: \
	DECLARE_CLASS(UWebBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebView"), NO_API) \
	DECLARE_SERIALIZER(UWebBase)


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWebBase(); \
	friend struct Z_Construct_UClass_UWebBase_Statics; \
public: \
	DECLARE_CLASS(UWebBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebView"), NO_API) \
	DECLARE_SERIALIZER(UWebBase)


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebBase(UWebBase&&); \
	NO_API UWebBase(const UWebBase&); \
public:


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebBase(UWebBase&&); \
	NO_API UWebBase(const UWebBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBase)


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_PROLOG
#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_RPC_WRAPPERS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_INCLASS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WebBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBVIEW_API UClass* StaticClass<class UWebBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
