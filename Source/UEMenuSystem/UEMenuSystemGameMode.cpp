// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEMenuSystemGameMode.h"
#include "UEMenuSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEMenuSystemGameMode::AUEMenuSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
