// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Weap_FAMAS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weap_FAMAS.Weap_FAMAS_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AWeap_FAMAS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_FAMAS.Weap_FAMAS_C.UserConstructionScript");

	AWeap_FAMAS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_FAMAS.Weap_FAMAS_C.OnWeaponCustomizationCompleted
// (Final, Native, Event, Public)

void AWeap_FAMAS_C::OnWeaponCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_FAMAS.Weap_FAMAS_C.OnWeaponCustomizationCompleted");

	AWeap_FAMAS_C_OnWeaponCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
