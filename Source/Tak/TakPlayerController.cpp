// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TakPlayerController.h"

ATakPlayerController::ATakPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
