// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ShooterAbility_Sprint_Instance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C.ReceiveTick
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_Sprint_Instance_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C.ReceiveTick");

	UShooterAbility_Sprint_Instance_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C.OnAbilityUpdate
// (Final, Native, Event, Public)

void UShooterAbility_Sprint_Instance_C::OnAbilityUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C.OnAbilityUpdate");

	UShooterAbility_Sprint_Instance_C_OnAbilityUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C.OnAbilityStop
// (Final, Native, Event, Public)

void UShooterAbility_Sprint_Instance_C::OnAbilityStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C.OnAbilityStop");

	UShooterAbility_Sprint_Instance_C_OnAbilityStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C.OnAbilityStart
// (Final, Native, Event, Public)

void UShooterAbility_Sprint_Instance_C::OnAbilityStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C.OnAbilityStart");

	UShooterAbility_Sprint_Instance_C_OnAbilityStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
