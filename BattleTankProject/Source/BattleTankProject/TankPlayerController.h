// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "Engine/World.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANKPROJECT_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	ATank* GetControlledTank() const;
	
	void BeginPlay() override;
	
	void Tick(float DeltaTime) override;

	// Start the tank moving the barrel so that a shot would hit where
	//the crosshair intersects the world
	void AimTowardsCrosshair();

	bool GetSightRayHitLocation(FVector& HitLocation) const;

	bool GetLookDirection(FVector2D ScreenLocation, FVector & LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector &HitLocation) const;

	bool GetCrosshairTraceHit(FString &ObjectHit, FVector &HitLoc);

	UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5f;

	UPROPERTY(EditAnywhere)
		float CrossHairYLocation = 0.33333f;

	UPROPERTY(EditAnywhere)
		float LineTraceRange = 1000000.0f;

};
