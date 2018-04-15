// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Weap_1888_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weap_1888.Weap_1887_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AWeap_1887_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_1888.Weap_1887_C.UserConstructionScript");

	AWeap_1887_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_1888.Weap_1887_C.OnWeaponCustomizationCompleted
// (Final, Native, Event, Public)

void AWeap_1887_C::OnWeaponCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_1888.Weap_1887_C.OnWeaponCustomizationCompleted");

	AWeap_1887_C_OnWeaponCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
