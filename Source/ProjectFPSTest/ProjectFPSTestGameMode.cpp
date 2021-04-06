// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectFPSTestGameMode.h"
#include "ProjectFPSTestHUD.h"
#include "ProjectFPSTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectFPSTestGameMode::AProjectFPSTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectFPSTestHUD::StaticClass();
}
