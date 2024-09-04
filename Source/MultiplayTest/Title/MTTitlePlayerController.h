// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MTTitlePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYTEST_API AMTTitlePlayerController : public APlayerController
{
	GENERATED_BODY()
	
    UFUNCTION(BlueprintCallable)
    void CancelPending();
	
	
};
