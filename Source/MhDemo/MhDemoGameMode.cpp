// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MhDemoGameMode.h"
#include "MhDemoHUD.h"
#include "MhDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMhDemoGameMode::AMhDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMhDemoHUD::StaticClass();
}
