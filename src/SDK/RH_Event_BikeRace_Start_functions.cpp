// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Event_BikeRace_Start_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AEvent_BikeRace_Start_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_Start.Event_BikeRace_Start_C.UserConstructionScript");

	AEvent_BikeRace_Start_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_Start.Event_BikeRace_Start_C.StartRace
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__Interactor__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_BikeRace_Start_C::StartRace(class AShooterCharacter* bpp__Interactor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_Start.Event_BikeRace_Start_C.StartRace");

	AEvent_BikeRace_Start_C_StartRace_Params params;
	params.bpp__Interactor__pf = bpp__Interactor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_Start.Event_BikeRace_Start_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void AEvent_BikeRace_Start_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_Start.Event_BikeRace_Start_C.ReceiveBeginPlay");

	AEvent_BikeRace_Start_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_Start.Event_BikeRace_Start_C.OrientBikeRack
// (Native, Public, BlueprintCallable)

void AEvent_BikeRace_Start_C::OrientBikeRack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_Start.Event_BikeRace_Start_C.OrientBikeRack");

	AEvent_BikeRace_Start_C_OrientBikeRack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_Start.Event_BikeRace_Start_C.OnRep_RaceStarted
// (Native, Public, BlueprintCallable)

void AEvent_BikeRace_Start_C::OnRep_RaceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_Start.Event_BikeRace_Start_C.OnRep_RaceStarted");

	AEvent_BikeRace_Start_C_OnRep_RaceStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_Start.Event_BikeRace_Start_C.CleanupRaceObjects
// (Native, Public, BlueprintCallable)

void AEvent_BikeRace_Start_C::CleanupRaceObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_Start.Event_BikeRace_Start_C.CleanupRaceObjects");

	AEvent_BikeRace_Start_C_CleanupRaceObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_Start.Event_BikeRace_Start_C.ChooseRaceDestination
// (Native, Public, BlueprintCallable)

void AEvent_BikeRace_Start_C::ChooseRaceDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_Start.Event_BikeRace_Start_C.ChooseRaceDestination");

	AEvent_BikeRace_Start_C_ChooseRaceDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_Start.Event_BikeRace_Start_C.CheckDespawn
// (Native, Public, BlueprintCallable)

void AEvent_BikeRace_Start_C::CheckDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_Start.Event_BikeRace_Start_C.CheckDespawn");

	AEvent_BikeRace_Start_C_CheckDespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Event_BikeRace_Start.Event_BikeRace_Start_C.OnInteractDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_BikeRace_Start_C::OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Event_BikeRace_Start.Event_BikeRace_Start_C.OnInteractDelegate__DelegateSignature");

	AEvent_BikeRace_Start_C_OnInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
