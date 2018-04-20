// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_LootBoxPickup_Spawning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ALootBoxPickup_Spawning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.UserConstructionScript");

	ALootBoxPickup_Spawning_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.StopInteract
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__Interactor__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ALootBoxPickup_Spawning_C::StopInteract(class AShooterCharacter* bpp__Interactor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.StopInteract");

	ALootBoxPickup_Spawning_C_StopInteract_Params params;
	params.bpp__Interactor__pf = bpp__Interactor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.StartInteract
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__Interactor__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ALootBoxPickup_Spawning_C::StartInteract(class AShooterCharacter* bpp__Interactor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.StartInteract");

	ALootBoxPickup_Spawning_C_StartInteract_Params params;
	params.bpp__Interactor__pf = bpp__Interactor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.SpawnLoot
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__Interactor__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ALootBoxPickup_Spawning_C::SpawnLoot(class AShooterCharacter* bpp__Interactor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.SpawnLoot");

	ALootBoxPickup_Spawning_C_SpawnLoot_Params params;
	params.bpp__Interactor__pf = bpp__Interactor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ALootBoxPickup_Spawning_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.ReceiveBeginPlay");

	ALootBoxPickup_Spawning_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.ExecuteUbergraph_LootBoxPickup_Spawning_2
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ALootBoxPickup_Spawning_C::ExecuteUbergraph_LootBoxPickup_Spawning_2(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.ExecuteUbergraph_LootBoxPickup_Spawning_2");

	ALootBoxPickup_Spawning_C_ExecuteUbergraph_LootBoxPickup_Spawning_2_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.CheckWarmUpPhase
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bpp__Warmup__pf                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALootBoxPickup_Spawning_C::CheckWarmUpPhase(bool* bpp__Warmup__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.CheckWarmUpPhase");

	ALootBoxPickup_Spawning_C_CheckWarmUpPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Warmup__pf != nullptr)
		*bpp__Warmup__pf = params.bpp__Warmup__pf;
}


// DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnStopInteractDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALootBoxPickup_Spawning_C::OnStopInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnStopInteractDelegate__DelegateSignature");

	ALootBoxPickup_Spawning_C_OnStopInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnStartInteractDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALootBoxPickup_Spawning_C::OnStartInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnStartInteractDelegate__DelegateSignature");

	ALootBoxPickup_Spawning_C_OnStartInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnInteractDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALootBoxPickup_Spawning_C::OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction LootBoxPickup_Spawning.LootBoxPickup_Spawning_C.OnInteractDelegate__DelegateSignature");

	ALootBoxPickup_Spawning_C_OnInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
