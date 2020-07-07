// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Second_window_library.generated.h"

/**
 * 
 */
UCLASS()
class SECOND_WINDOW_API USecond_window_library : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Utilities")
		static void SetTextureTargetSize(UTextureRenderTarget2D* target, int x, int y);
	
};
