// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BaseCharacterDialogue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnTaunt
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnTaunt");

	UBaseCharacterDialogue_C_OnTaunt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnTargetHitConfirmation
// (Final, Native, Event, Public)
// Parameters:
// bool                           bpp__UsedPrimaryWeapon__pf     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__UsedSecondaryWeapon__pf   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterClass>     bpp__HitClass__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::OnTargetHitConfirmation(bool bpp__UsedPrimaryWeapon__pf, bool bpp__UsedSecondaryWeapon__pf, TEnumAsByte<EShooterClass> bpp__HitClass__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnTargetHitConfirmation");

	UBaseCharacterDialogue_C_OnTargetHitConfirmation_Params params;
	params.bpp__UsedPrimaryWeapon__pf = bpp__UsedPrimaryWeapon__pf;
	params.bpp__UsedSecondaryWeapon__pf = bpp__UsedSecondaryWeapon__pf;
	params.bpp__HitClass__pf = bpp__HitClass__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnStopAbility
// (Final, Native, Event, Public)
// Parameters:
// class UShooterAbility*         bpp__Ability__pf__const        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseCharacterDialogue_C::OnStopAbility(class UShooterAbility* bpp__Ability__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnStopAbility");

	UBaseCharacterDialogue_C_OnStopAbility_Params params;
	params.bpp__Ability__pf__const = bpp__Ability__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnStartAbility
// (Final, Native, Event, Public)
// Parameters:
// class UShooterAbility*         bpp__Ability__pf__const        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseCharacterDialogue_C::OnStartAbility(class UShooterAbility* bpp__Ability__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnStartAbility");

	UBaseCharacterDialogue_C_OnStartAbility_Params params;
	params.bpp__Ability__pf__const = bpp__Ability__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnRespawn
// (Final, Native, Event, Public)
// Parameters:
// class UShooterCharacterDefinition* bpp__CharacterDefinition__pf   (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::OnRespawn(class UShooterCharacterDefinition* bpp__CharacterDefinition__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnRespawn");

	UBaseCharacterDialogue_C_OnRespawn_Params params;
	params.bpp__CharacterDefinition__pf = bpp__CharacterDefinition__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnLowHealth
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnLowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnLowHealth");

	UBaseCharacterDialogue_C_OnLowHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnKill
// (Final, Native, Event, Public)
// Parameters:
// TEnumAsByte<EShooterGang>      bpp__KilledGang__pf            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__WasKick__pf               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterClass>     bpp__KilledClass__pf           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAbilityType>      bpp__KillerAbilityType__pf     (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::OnKill(TEnumAsByte<EShooterGang> bpp__KilledGang__pf, bool bpp__WasKick__pf, TEnumAsByte<EShooterClass> bpp__KilledClass__pf, TEnumAsByte<EAbilityType> bpp__KillerAbilityType__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnKill");

	UBaseCharacterDialogue_C_OnKill_Params params;
	params.bpp__KilledGang__pf = bpp__KilledGang__pf;
	params.bpp__WasKick__pf = bpp__WasKick__pf;
	params.bpp__KilledClass__pf = bpp__KilledClass__pf;
	params.bpp__KillerAbilityType__pf = bpp__KillerAbilityType__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnHitVocal
// (Final, Native, Event, Public)
// Parameters:
// TEnumAsByte<EAudioDamageCategory> bpp__DamageCategory__pf        (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__DamageTaken__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::OnHitVocal(TEnumAsByte<EAudioDamageCategory> bpp__DamageCategory__pf, float bpp__DamageTaken__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnHitVocal");

	UBaseCharacterDialogue_C_OnHitVocal_Params params;
	params.bpp__DamageCategory__pf = bpp__DamageCategory__pf;
	params.bpp__DamageTaken__pf = bpp__DamageTaken__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnHealedBy
// (Final, Native, Event, Public)
// Parameters:
// int                            bpp__HealAmount__pf            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       bpp__Healer__pf                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  bpp__HealCauser__pf            (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__PreviousHealthPercentage__pf (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__NewHealthPercentage__pf   (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::OnHealedBy(int bpp__HealAmount__pf, class AShooterCharacter* bpp__Healer__pf, class AActor* bpp__HealCauser__pf, float bpp__PreviousHealthPercentage__pf, float bpp__NewHealthPercentage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnHealedBy");

	UBaseCharacterDialogue_C_OnHealedBy_Params params;
	params.bpp__HealAmount__pf = bpp__HealAmount__pf;
	params.bpp__Healer__pf = bpp__Healer__pf;
	params.bpp__HealCauser__pf = bpp__HealCauser__pf;
	params.bpp__PreviousHealthPercentage__pf = bpp__PreviousHealthPercentage__pf;
	params.bpp__NewHealthPercentage__pf = bpp__NewHealthPercentage__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnFlagCapture
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnFlagCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnFlagCapture");

	UBaseCharacterDialogue_C_OnFlagCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDeath
// (Final, Native, Event, Public)
// Parameters:
// TEnumAsByte<EAudioDamageCategory> bpp__KillingDamageCategory__pf (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::OnDeath(TEnumAsByte<EAudioDamageCategory> bpp__KillingDamageCategory__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDeath");

	UBaseCharacterDialogue_C_OnDeath_Params params;
	params.bpp__KillingDamageCategory__pf = bpp__KillingDamageCategory__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningBelow
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnDamageWarningBelow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningBelow");

	UBaseCharacterDialogue_C_OnDamageWarningBelow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningBehind
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnDamageWarningBehind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningBehind");

	UBaseCharacterDialogue_C_OnDamageWarningBehind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningAbove
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnDamageWarningAbove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningAbove");

	UBaseCharacterDialogue_C_OnDamageWarningAbove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnCheerAllyKill
// (Final, Native, Event, Public)
// Parameters:
// TEnumAsByte<EShooterClass>     bpp__CheerTargetClass__pf      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::OnCheerAllyKill(TEnumAsByte<EShooterClass> bpp__CheerTargetClass__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnCheerAllyKill");

	UBaseCharacterDialogue_C_OnCheerAllyKill_Params params;
	params.bpp__CheerTargetClass__pf = bpp__CheerTargetClass__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAllyObjectiveEncourage
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnAllyObjectiveEncourage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAllyObjectiveEncourage");

	UBaseCharacterDialogue_C_OnAllyObjectiveEncourage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAllyObjectiveAffirm
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnAllyObjectiveAffirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAllyObjectiveAffirm");

	UBaseCharacterDialogue_C_OnAllyObjectiveAffirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAbilityFail
// (Final, Native, Event, Public)

void UBaseCharacterDialogue_C::OnAbilityFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAbilityFail");

	UBaseCharacterDialogue_C_OnAbilityFail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_10
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::ExecuteUbergraph_BaseCharacterDialogue_10(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_10");

	UBaseCharacterDialogue_C_ExecuteUbergraph_BaseCharacterDialogue_10_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_9
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::ExecuteUbergraph_BaseCharacterDialogue_9(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_9");

	UBaseCharacterDialogue_C_ExecuteUbergraph_BaseCharacterDialogue_9_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_7
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDialogue_C::ExecuteUbergraph_BaseCharacterDialogue_7(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_7");

	UBaseCharacterDialogue_C_ExecuteUbergraph_BaseCharacterDialogue_7_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
