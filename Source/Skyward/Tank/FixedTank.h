// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Tank/TankBase.h"
#include "FixedTank.generated.h"


/**
 * 
 */
UCLASS()
class SKYWARD_API AFixedTank : public ATankBase
{
	GENERATED_BODY()

public:
	AFixedTank();

public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;


	
	UPROPERTY()
	float Interval = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimerHandle TimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* Flame_Fire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundWave* FireSound;

	void SpawnBullet() override;

	void SetupTimer() override;


	
};

