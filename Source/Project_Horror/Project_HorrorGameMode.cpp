// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Project_HorrorGameMode.h"
#include "Project_HorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_HorrorGameMode::AProject_HorrorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
