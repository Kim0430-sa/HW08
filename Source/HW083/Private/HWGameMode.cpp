// Fill out your copyright notice in the Description page of Project Settings.


#include "HWGameMode.h"
#include "HWGameInstance.h"
#include "HWCharacter.h"
#include "HWPlayerController.h"
#include "HWGameState.h"

AHWGameMode::AHWGameMode()
{
	DefaultPawnClass = AHWCharacter::StaticClass(); // 캐릭터 기본
	PlayerControllerClass =  AHWPlayerController::StaticClass();
	GameStateClass = AHWGameState::StaticClass();
	CurrentWave = 0;
}

void AHWGameMode::BeginPlay()
{
	Super::BeginPlay();

	
	StartWave();
}

void AHWGameMode::StartWave()
{
	
	if (UHWGameInstance* GI = Cast<UHWGameInstance>(GetGameInstance()))
	{
		GI->CurrentWave++; 

		FString WaveMessage = FString::Printf(TEXT("Wave %d 시작!"), GI->CurrentWave);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, WaveMessage);
		}

	
	}
}