// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Event_BikeRace_End_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Event_BikeRace_End.Event_BikeRace_End_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AEvent_BikeRace_End_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.UserConstructionScript");

	AEvent_BikeRace_End_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_End.Event_BikeRace_End_C.StartCountdownTimer
// (Native, Public, BlueprintCallable)

void AEvent_BikeRace_End_C::StartCountdownTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.StartCountdownTimer");

	AEvent_BikeRace_End_C_StartCountdownTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_End.Event_BikeRace_End_C.SetMyStartLocation
// (Native, Public, BlueprintCallable)
// Parameters:
// class AEvent_BikeRace_Start_C* bpp__Start__pf                 (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_BikeRace_End_C::SetMyStartLocation(class AEvent_BikeRace_Start_C* bpp__Start__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.SetMyStartLocation");

	AEvent_BikeRace_End_C_SetMyStartLocation_Params params;
	params.bpp__Start__pf = bpp__Start__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_End.Event_BikeRace_End_C.SetMyBike
// (Native, Public, BlueprintCallable)
// Parameters:
// class ABMXTest_C*              bpp__Bike__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_BikeRace_End_C::SetMyBike(class ABMXTest_C* bpp__Bike__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.SetMyBike");

	AEvent_BikeRace_End_C_SetMyBike_Params params;
	params.bpp__Bike__pf = bpp__Bike__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_End.Event_BikeRace_End_C.ReceiveTick
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_BikeRace_End_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.ReceiveTick");

	AEvent_BikeRace_End_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_End.Event_BikeRace_End_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void AEvent_BikeRace_End_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.ReceiveBeginPlay");

	AEvent_BikeRace_End_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_End.Event_BikeRace_End_C.OrientRamp
// (Native, Public, BlueprintCallable)

void AEvent_BikeRace_End_C::OrientRamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.OrientRamp");

	AEvent_BikeRace_End_C_OrientRamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_End.Event_BikeRace_End_C.ExecuteUbergraph_Event_BikeRace_End_1
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_BikeRace_End_C::ExecuteUbergraph_Event_BikeRace_End_1(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.ExecuteUbergraph_Event_BikeRace_End_1");

	AEvent_BikeRace_End_C_ExecuteUbergraph_Event_BikeRace_End_1_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_BikeRace_End.Event_BikeRace_End_C.BndEvt__BikeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     bpp__OverlappedComponent__pf   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  bpp__OtherActor__pf            (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     bpp__OtherComp__pf             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            bpp__OtherBodyIndex__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bFromSweep__pf            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              bpp__SweepResult__pf           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AEvent_BikeRace_End_C::BndEvt__BikeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, const struct FHitResult& bpp__SweepResult__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_BikeRace_End.Event_BikeRace_End_C.BndEvt__BikeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AEvent_BikeRace_End_C_BndEvt__BikeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.bpp__OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	params.bpp__OtherActor__pf = bpp__OtherActor__pf;
	params.bpp__OtherComp__pf = bpp__OtherComp__pf;
	params.bpp__OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	params.bpp__bFromSweep__pf = bpp__bFromSweep__pf;
	params.bpp__SweepResult__pf = bpp__SweepResult__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
