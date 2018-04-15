// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Event_Spin2Win_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Event_Spin2Win.Event_Spin2Win_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AEvent_Spin2Win_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.UserConstructionScript");

	AEvent_Spin2Win_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.Update Rotation
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          bpp__Time__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_Spin2Win_C::Update_Rotation(float bpp__Time__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.Update Rotation");

	AEvent_Spin2Win_C_Update_Rotation_Params params;
	params.bpp__Time__pf = bpp__Time__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.SpawnPrizes
// (Native, Public, BlueprintCallable)

void AEvent_Spin2Win_C::SpawnPrizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.SpawnPrizes");

	AEvent_Spin2Win_C_SpawnPrizes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.ReceiveTick
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_Spin2Win_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.ReceiveTick");

	AEvent_Spin2Win_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void AEvent_Spin2Win_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.ReceiveBeginPlay");

	AEvent_Spin2Win_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.OnRep_Wheel Spinning
// (Native, Public, BlueprintCallable)

void AEvent_Spin2Win_C::OnRep_Wheel_Spinning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.OnRep_Wheel Spinning");

	AEvent_Spin2Win_C_OnRep_Wheel_Spinning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.NetMulticastPlayPrizeFX
// (Net, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// int                            bpp__PrizeIndex__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_Spin2Win_C::NetMulticastPlayPrizeFX(int bpp__PrizeIndex__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.NetMulticastPlayPrizeFX");

	AEvent_Spin2Win_C_NetMulticastPlayPrizeFX_Params params;
	params.bpp__PrizeIndex__pf = bpp__PrizeIndex__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.InitializePrizeGroups
// (Native, Public, BlueprintCallable)

void AEvent_Spin2Win_C::InitializePrizeGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.InitializePrizeGroups");

	AEvent_Spin2Win_C_InitializePrizeGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.ForceWheelPosition
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          bpp__RelativeRotation__pf      (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_Spin2Win_C::ForceWheelPosition(float bpp__RelativeRotation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.ForceWheelPosition");

	AEvent_Spin2Win_C_ForceWheelPosition_Params params;
	params.bpp__RelativeRotation__pf = bpp__RelativeRotation__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.FlashWinner
// (Native, Public, BlueprintCallable)

void AEvent_Spin2Win_C::FlashWinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.FlashWinner");

	AEvent_Spin2Win_C_FlashWinner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.ExecuteUbergraph_Event_Spin2Win_2
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_Spin2Win_C::ExecuteUbergraph_Event_Spin2Win_2(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.ExecuteUbergraph_Event_Spin2Win_2");

	AEvent_Spin2Win_C_ExecuteUbergraph_Event_Spin2Win_2_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Event_Spin2Win.Event_Spin2Win_C.ButtonPressed
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__Interactor__pf            (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_Spin2Win_C::ButtonPressed(class AShooterCharacter* bpp__Interactor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Spin2Win.Event_Spin2Win_C.ButtonPressed");

	AEvent_Spin2Win_C_ButtonPressed_Params params;
	params.bpp__Interactor__pf = bpp__Interactor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Event_Spin2Win.Event_Spin2Win_C.OnInteractDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void AEvent_Spin2Win_C::OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Event_Spin2Win.Event_Spin2Win_C.OnInteractDelegate__DelegateSignature");

	AEvent_Spin2Win_C_OnInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
