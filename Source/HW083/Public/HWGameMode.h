// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "HWGameMode.generated.h"

/**
 * 
 */
UCLASS()
class HW083_API AHWGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	AHWGameMode(); // 캐릭터 생성자

protected:
	virtual void BeginPlay() override;

	int32 CurrentWave;

	// ✅ 웨이브 시작 함수
	void StartWave();
};

