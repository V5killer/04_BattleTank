// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAiController.h"


ATank*  ATankAiController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAiController::BeginPlay()
{
	Super::BeginPlay();
	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AiController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AiController found player: %s"), *(PlayerTank->GetName()));
	}
}


ATank*  ATankAiController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr; }
	return Cast<ATank>(PlayerPawn);
}