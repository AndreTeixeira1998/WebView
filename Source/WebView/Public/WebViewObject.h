// Copyright aSurgingRiver, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WebViewObject.generated.h"

class UWebBase;

UCLASS()
class WEBVIEW_API UWebViewObject : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Web View")
	void Asyn(const FString& Name, const FString& Data, const FString& Callback);

	void SetUMG(UWebBase* InWidget);
private:
	TWeakObjectPtr<UWebBase> UMG;
};


