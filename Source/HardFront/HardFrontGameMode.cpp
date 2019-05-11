// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HardFrontGameMode.h"
#include "HardFrontHUD.h"
#include "HardFrontCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHardFrontGameMode::AHardFrontGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHardFrontHUD::StaticClass();
}
