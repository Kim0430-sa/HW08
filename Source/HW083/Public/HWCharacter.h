// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HWCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UWidgetComponent;
struct FInputActionValue;

UCLASS()
class HW083_API AHWCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHWCharacter();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	UWidgetComponent* OverheadWidget;
	
	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void AddHealth(float Amount);
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "health")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "health")
	float Health;

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(
		float DamageAmount,
		struct FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;

	UFUNCTION()
	void Move(const FInputActionValue& value);
	
	UFUNCTION()
	void StartJump(const FInputActionValue& Value);
	
	UFUNCTION()
	void StopJump(const FInputActionValue& Value);
	
	UFUNCTION()
	void Look(const FInputActionValue& Value);
	
	UFUNCTION()
	void StartSprint(const FInputActionValue& Value);
	
	UFUNCTION()
	void StopSprint(const FInputActionValue& Value);

	void OnDeath();
	void UpdateOverheadHP();
private:
	float NormalSpeed;
	float SprintSpeedMultiplier;
	float SprintSpeed;
};
