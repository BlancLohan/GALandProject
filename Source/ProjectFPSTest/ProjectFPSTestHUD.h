// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ProjectFPSTestHUD.generated.h"

UCLASS()
class AProjectFPSTestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AProjectFPSTestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

