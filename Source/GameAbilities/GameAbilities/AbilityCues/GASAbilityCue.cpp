// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "GameAbilities.h"
#include "../GASAbility.h"
#include "GASAbilityCue.h"

UGASAbilityCue::UGASAbilityCue(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}
UWorld* UGASAbilityCue::GetWorld() const
{
	return GetOuterAGASAbility()->GetWorld();
}
