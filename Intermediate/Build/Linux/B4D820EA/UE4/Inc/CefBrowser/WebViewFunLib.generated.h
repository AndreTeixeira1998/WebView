// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebCookie;
#ifdef CEFBROWSER_WebViewFunLib_generated_h
#error "WebViewFunLib.generated.h already included, missing '#pragma once' in WebViewFunLib.h"
#endif
#define CEFBROWSER_WebViewFunLib_generated_h

#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_SPARSE_DATA
#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteCookies); \
	DECLARE_FUNCTION(execSetCookie);


#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteCookies); \
	DECLARE_FUNCTION(execSetCookie);


#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebViewFunLib(); \
	friend struct Z_Construct_UClass_UWebViewFunLib_Statics; \
public: \
	DECLARE_CLASS(UWebViewFunLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CefBrowser"), NO_API) \
	DECLARE_SERIALIZER(UWebViewFunLib)


#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWebViewFunLib(); \
	friend struct Z_Construct_UClass_UWebViewFunLib_Statics; \
public: \
	DECLARE_CLASS(UWebViewFunLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CefBrowser"), NO_API) \
	DECLARE_SERIALIZER(UWebViewFunLib)


#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebViewFunLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebViewFunLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebViewFunLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebViewFunLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebViewFunLib(UWebViewFunLib&&); \
	NO_API UWebViewFunLib(const UWebViewFunLib&); \
public:


#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebViewFunLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebViewFunLib(UWebViewFunLib&&); \
	NO_API UWebViewFunLib(const UWebViewFunLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebViewFunLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebViewFunLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebViewFunLib)


#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_13_PROLOG
#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_SPARSE_DATA \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_RPC_WRAPPERS \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_INCLASS \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_SPARSE_DATA \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CEFBROWSER_API UClass* StaticClass<class UWebViewFunLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS