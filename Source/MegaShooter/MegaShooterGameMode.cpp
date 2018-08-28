// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MegaShooterGameMode.h"
#include "MegaShooterCharacter.h"

AMegaShooterGameMode::AMegaShooterGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMegaShooterCharacter::StaticClass();	
}
