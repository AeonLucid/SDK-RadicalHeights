#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_LootBoxPickup_Spawning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.UserConstructionScript
struct ALootBoxPickup_Spawning_C_UserConstructionScript_Params
{
};

// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.StopInteract
struct ALootBoxPickup_Spawning_C_StopInteract_Params
{
	class AShooterCharacter*                           bpp__Interactor__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.StartInteract
struct ALootBoxPickup_Spawning_C_StartInteract_Params
{
	class AShooterCharacter*                           bpp__Interactor__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.SpawnLoot
struct ALootBoxPickup_Spawning_C_SpawnLoot_Params
{
	class AShooterCharacter*                           bpp__Interactor__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.ReceiveBeginPlay
struct ALootBoxPickup_Spawning_C_ReceiveBeginPlay_Params
{
};

// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.ExecuteUbergraph_LootBoxPickup_Spawning_2
struct ALootBoxPickup_Spawning_C_ExecuteUbergraph_LootBoxPickup_Spawning_2_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.CheckWarmUpPhase
struct ALootBoxPickup_Spawning_C_CheckWarmUpPhase_Params
{
	bool                                               bpp__Warmup__pf;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnStopInteractDelegate__DelegateSignature
struct ALootBoxPickup_Spawning_C_OnStopInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnStartInteractDelegate__DelegateSignature
struct ALootBoxPickup_Spawning_C_OnStartInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnInteractDelegate__DelegateSignature
struct ALootBoxPickup_Spawning_C_OnInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
