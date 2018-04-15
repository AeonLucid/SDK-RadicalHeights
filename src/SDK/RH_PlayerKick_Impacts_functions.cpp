// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PlayerKick_Impacts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerKick_Impacts.PlayerKick_Impacts_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerKick_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerKick_Impacts.PlayerKick_Impacts_C.UserConstructionScript");

	APlayerKick_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
