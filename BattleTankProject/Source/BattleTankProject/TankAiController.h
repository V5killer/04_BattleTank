// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAiController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKPROJECT_API ATankAiController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	void BeginPlay() override;
	
	
};
