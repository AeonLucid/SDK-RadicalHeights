// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BMXTest_BikeRace_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BMXTest_BikeRace.BMXTest_BikeRace_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABMXTest_BikeRace_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest_BikeRace.BMXTest_BikeRace_C.UserConstructionScript");

	ABMXTest_BikeRace_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BMXTest_BikeRace.BMXTest_BikeRace_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABMXTest_BikeRace_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest_BikeRace.BMXTest_BikeRace_C.ReceiveBeginPlay");

	ABMXTest_BikeRace_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BMXTest_BikeRace.BMXTest_BikeRace_C.ForceStopMusic
// (Native, Public, BlueprintCallable)

void ABMXTest_BikeRace_C::ForceStopMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest_BikeRace.BMXTest_BikeRace_C.ForceStopMusic");

	ABMXTest_BikeRace_C_ForceStopMusic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BMXTest_BikeRace.BMXTest_BikeRace_C.BikeInteraction
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__Interactor__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ABMXTest_BikeRace_C::BikeInteraction(class AShooterCharacter* bpp__Interactor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BMXTest_BikeRace.BMXTest_BikeRace_C.BikeInteraction");

	ABMXTest_BikeRace_C_BikeInteraction_Params params;
	params.bpp__Interactor__pf = bpp__Interactor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction BMXTest_BikeRace.BMXTest_BikeRace_C.OnInteractDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABMXTest_BikeRace_C::OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction BMXTest_BikeRace.BMXTest_BikeRace_C.OnInteractDelegate__DelegateSignature");

	ABMXTest_BikeRace_C_OnInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
