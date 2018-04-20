// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Droid_Noisemaker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Droid_Noisemaker.Droid_Noisemaker_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ADroid_Noisemaker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Droid_Noisemaker.Droid_Noisemaker_C.UserConstructionScript");

	ADroid_Noisemaker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
