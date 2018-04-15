// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ArmorPickup_Body_Light_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorPickup_Body_Light.ArmorPickup_Body_Light_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AArmorPickup_Body_Light_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorPickup_Body_Light.ArmorPickup_Body_Light_C.UserConstructionScript");

	AArmorPickup_Body_Light_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
