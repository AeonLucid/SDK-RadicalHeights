// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Consumable_MedKit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Consumable_MedKit.Consumable_Medkit_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AConsumable_Medkit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_MedKit.Consumable_Medkit_C.UserConstructionScript");

	AConsumable_Medkit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_MedKit.Consumable_Medkit_C.OnWeaponCustomizationCompleted
// (Final, Native, Event, Public)

void AConsumable_Medkit_C::OnWeaponCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_MedKit.Consumable_Medkit_C.OnWeaponCustomizationCompleted");

	AConsumable_Medkit_C_OnWeaponCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
