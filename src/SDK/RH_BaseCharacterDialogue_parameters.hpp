#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BaseCharacterDialogue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnTaunt
struct UBaseCharacterDialogue_C_OnTaunt_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnTargetHitConfirmation
struct UBaseCharacterDialogue_C_OnTargetHitConfirmation_Params
{
	bool                                               bpp__UsedPrimaryWeapon__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__UsedSecondaryWeapon__pf;                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         bpp__HitClass__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnStopAbility
struct UBaseCharacterDialogue_C_OnStopAbility_Params
{
	class UShooterAbility*                             bpp__Ability__pf__const;                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnStartAbility
struct UBaseCharacterDialogue_C_OnStartAbility_Params
{
	class UShooterAbility*                             bpp__Ability__pf__const;                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnRespawn
struct UBaseCharacterDialogue_C_OnRespawn_Params
{
	class UShooterCharacterDefinition*                 bpp__CharacterDefinition__pf;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnLowHealth
struct UBaseCharacterDialogue_C_OnLowHealth_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnKill
struct UBaseCharacterDialogue_C_OnKill_Params
{
	TEnumAsByte<EShooterGang>                          bpp__KilledGang__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__WasKick__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         bpp__KilledClass__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAbilityType>                          bpp__KillerAbilityType__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnHitVocal
struct UBaseCharacterDialogue_C_OnHitVocal_Params
{
	TEnumAsByte<EAudioDamageCategory>                  bpp__DamageCategory__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__DamageTaken__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnHealedBy
struct UBaseCharacterDialogue_C_OnHealedBy_Params
{
	int                                                bpp__HealAmount__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           bpp__Healer__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      bpp__HealCauser__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__PreviousHealthPercentage__pf;                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__NewHealthPercentage__pf;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnFlagCapture
struct UBaseCharacterDialogue_C_OnFlagCapture_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDeath
struct UBaseCharacterDialogue_C_OnDeath_Params
{
	TEnumAsByte<EAudioDamageCategory>                  bpp__KillingDamageCategory__pf;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningBelow
struct UBaseCharacterDialogue_C_OnDamageWarningBelow_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningBehind
struct UBaseCharacterDialogue_C_OnDamageWarningBehind_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnDamageWarningAbove
struct UBaseCharacterDialogue_C_OnDamageWarningAbove_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnCheerAllyKill
struct UBaseCharacterDialogue_C_OnCheerAllyKill_Params
{
	TEnumAsByte<EShooterClass>                         bpp__CheerTargetClass__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAllyObjectiveEncourage
struct UBaseCharacterDialogue_C_OnAllyObjectiveEncourage_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAllyObjectiveAffirm
struct UBaseCharacterDialogue_C_OnAllyObjectiveAffirm_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.OnAbilityFail
struct UBaseCharacterDialogue_C_OnAbilityFail_Params
{
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_10
struct UBaseCharacterDialogue_C_ExecuteUbergraph_BaseCharacterDialogue_10_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_9
struct UBaseCharacterDialogue_C_ExecuteUbergraph_BaseCharacterDialogue_9_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDialogue.BaseCharacterDialogue_C.ExecuteUbergraph_BaseCharacterDialogue_7
struct UBaseCharacterDialogue_C_ExecuteUbergraph_BaseCharacterDialogue_7_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
