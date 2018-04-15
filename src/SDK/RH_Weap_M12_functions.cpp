// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Weap_M12_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weap_M12.Weap_M12_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AWeap_M12_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_M12.Weap_M12_C.UserConstructionScript");

	AWeap_M12_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_M12.Weap_M12_C.OnWeaponCustomizationCompleted
// (Final, Native, Event, Public)

void AWeap_M12_C::OnWeaponCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_M12.Weap_M12_C.OnWeaponCustomizationCompleted");

	AWeap_M12_C_OnWeaponCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
