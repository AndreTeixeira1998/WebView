// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHtmlHeaders;
class UObject;
#ifdef WEBVIEW_WebBase_generated_h
#error "WebBase.generated.h already included, missing '#pragma once' in WebBase.h"
#endif
#define WEBVIEW_WebBase_generated_h

#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReplace); \
	DECLARE_FUNCTION(execExistAppend);


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplace); \
	DECLARE_FUNCTION(execExistAppend);


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_ACCESSORS
#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHtmlHeaders(); \
	friend struct Z_Construct_UClass_UHtmlHeaders_Statics; \
public: \
	DECLARE_CLASS(UHtmlHeaders, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebView"), NO_API) \
	DECLARE_SERIALIZER(UHtmlHeaders)


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHtmlHeaders(); \
	friend struct Z_Construct_UClass_UHtmlHeaders_Statics; \
public: \
	DECLARE_CLASS(UHtmlHeaders, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebView"), NO_API) \
	DECLARE_SERIALIZER(UHtmlHeaders)


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHtmlHeaders(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHtmlHeaders) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHtmlHeaders); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHtmlHeaders); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHtmlHeaders(UHtmlHeaders&&); \
	NO_API UHtmlHeaders(const UHtmlHeaders&); \
public: \
	NO_API virtual ~UHtmlHeaders();


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHtmlHeaders(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHtmlHeaders(UHtmlHeaders&&); \
	NO_API UHtmlHeaders(const UHtmlHeaders&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHtmlHeaders); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHtmlHeaders); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHtmlHeaders) \
	NO_API virtual ~UHtmlHeaders();


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_13_PROLOG
#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_ACCESSORS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_INCLASS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_ACCESSORS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBVIEW_API UClass* StaticClass<class UHtmlHeaders>();

#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_39_DELEGATE \
static inline void FOnPreReBuild_DelegateWrapper(const FMulticastScriptDelegate& OnPreReBuild) \
{ \
	OnPreReBuild.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_40_DELEGATE \
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


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_41_DELEGATE \
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


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_42_DELEGATE \
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


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_43_DELEGATE \
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


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_44_DELEGATE \
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


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_67_DELEGATE \
struct WebBase_eventOnBeforeRequest_Parms \
{ \
	FString URL; \
	int32 ResourceType; \
	UHtmlHeaders* Headers; \
}; \
static inline void FOnBeforeRequest_DelegateWrapper(const FMulticastScriptDelegate& OnBeforeRequest, const FString& URL, int32 ResourceType, UHtmlHeaders* Headers) \
{ \
	WebBase_eventOnBeforeRequest_Parms Parms; \
	Parms.URL=URL; \
	Parms.ResourceType=ResourceType; \
	Parms.Headers=Headers; \
	OnBeforeRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_SPARSE_DATA
#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowDevTools); \
	DECLARE_FUNCTION(execReopenRender); \
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


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowDevTools); \
	DECLARE_FUNCTION(execReopenRender); \
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


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_ACCESSORS
#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebBase(); \
	friend struct Z_Construct_UClass_UWebBase_Statics; \
public: \
	DECLARE_CLASS(UWebBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebView"), NO_API) \
	DECLARE_SERIALIZER(UWebBase)


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUWebBase(); \
	friend struct Z_Construct_UClass_UWebBase_Statics; \
public: \
	DECLARE_CLASS(UWebBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebView"), NO_API) \
	DECLARE_SERIALIZER(UWebBase)


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebBase(UWebBase&&); \
	NO_API UWebBase(const UWebBase&); \
public: \
	NO_API virtual ~UWebBase();


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebBase(UWebBase&&); \
	NO_API UWebBase(const UWebBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBase) \
	NO_API virtual ~UWebBase();


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_33_PROLOG
#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_SPARSE_DATA \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_RPC_WRAPPERS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_ACCESSORS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_INCLASS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_SPARSE_DATA \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_ACCESSORS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WebBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBVIEW_API UClass* StaticClass<class UWebBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_WebView_Source_WebView_Public_WebBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
