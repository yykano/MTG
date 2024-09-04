// Fill out your copyright notice in the Description page of Project Settings.


#include "Lobby/MTLobbyCharacter.h"
#include "Components/ArrowComponent.h"


// Sets default values
AMTLobbyCharacter::AMTLobbyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMTLobbyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMTLobbyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMTLobbyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

