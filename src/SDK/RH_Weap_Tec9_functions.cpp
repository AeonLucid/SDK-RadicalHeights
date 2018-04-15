// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Weap_Tec9_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weap_Tec9.Weap_TEC9_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AWeap_TEC9_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Tec9.Weap_TEC9_C.UserConstructionScript");

	AWeap_TEC9_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_Tec9.Weap_TEC9_C.OnWeaponCustomizationCompleted
// (Final, Native, Event, Public)

void AWeap_TEC9_C::OnWeaponCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Tec9.Weap_TEC9_C.OnWeaponCustomizationCompleted");

	AWeap_TEC9_C_OnWeaponCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
