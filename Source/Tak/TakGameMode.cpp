// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TakGameMode.h"
#include "TakPlayerController.h"
#include "TakPawn.h"

ATakGameMode::ATakGameMode()
{
	// no pawn by default
	DefaultPawnClass = ATakPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ATakPlayerController::StaticClass();
}
