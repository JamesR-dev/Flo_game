// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FloGameMode.h"
#include "FloPlayerController.h"
#include "FloCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFloGameMode::AFloGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFloPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}