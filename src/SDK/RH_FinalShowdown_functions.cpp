// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_FinalShowdown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction FinalShowdown.FinalShowdown_C.Dispatch_ShowdownSpawn__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void AFinalShowdown_C::Dispatch_ShowdownSpawn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction FinalShowdown.FinalShowdown_C.Dispatch_ShowdownSpawn__DelegateSignature");

	AFinalShowdown_C_Dispatch_ShowdownSpawn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalShowdown.FinalShowdown_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AFinalShowdown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalShowdown.FinalShowdown_C.UserConstructionScript");

	AFinalShowdown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalShowdown.FinalShowdown_C.SizeLightToZoneRadius
// (Native, Public, BlueprintCallable)

void AFinalShowdown_C::SizeLightToZoneRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalShowdown.FinalShowdown_C.SizeLightToZoneRadius");

	AFinalShowdown_C_SizeLightToZoneRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalShowdown.FinalShowdown_C.ReceiveTick
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AFinalShowdown_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalShowdown.FinalShowdown_C.ReceiveTick");

	AFinalShowdown_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalShowdown.FinalShowdown_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void AFinalShowdown_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalShowdown.FinalShowdown_C.ReceiveBeginPlay");

	AFinalShowdown_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalShowdown.FinalShowdown_C.OnShowdownLowered
// (Final, Native, Event, Public)

void AFinalShowdown_C::OnShowdownLowered()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalShowdown.FinalShowdown_C.OnShowdownLowered");

	AFinalShowdown_C_OnShowdownLowered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
