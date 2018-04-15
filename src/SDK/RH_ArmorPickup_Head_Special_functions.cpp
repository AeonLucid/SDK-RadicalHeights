// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ArmorPickup_Head_Special_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorPickup_Head_Special.ArmorPickup_Head_Special_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AArmorPickup_Head_Special_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorPickup_Head_Special.ArmorPickup_Head_Special_C.UserConstructionScript");

	AArmorPickup_Head_Special_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
