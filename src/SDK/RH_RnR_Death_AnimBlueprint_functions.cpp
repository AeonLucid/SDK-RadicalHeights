// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_RnR_Death_AnimBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RnR_Death_AnimBlueprint.RnR_Death_AnimBlueprint_C.BlueprintUpdateAnimation
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__DeltaTimeX__pf            (Parm, ZeroConstructor, IsPlainOldData)

void URnR_Death_AnimBlueprint_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function RnR_Death_AnimBlueprint.RnR_Death_AnimBlueprint_C.BlueprintUpdateAnimation");

	URnR_Death_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
