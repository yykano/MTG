// Fill out your copyright notice in the Description page of Project Settings.


#include "Title/MTTitlePlayerController.h"


void AMTTitlePlayerController::CancelPending()
{
    GEngine->CancelPending(GetWorld());
}

