// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraAbilitySystemGlobals.h"

#include "Aura/UI/AuraAbilityTypes.h"


FGameplayEffectContext* UAuraAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FAuraGameplayEffectContext();
}
