// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BP_WeaponSettings_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponSettings.BP_WeaponSettings_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_WeaponSettings_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSettings.BP_WeaponSettings_C.UserConstructionScript");

	ABP_WeaponSettings_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSettings.BP_WeaponSettings_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABP_WeaponSettings_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSettings.BP_WeaponSettings_C.ReceiveBeginPlay");

	ABP_WeaponSettings_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
