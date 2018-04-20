// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Rifle_m16_AnimBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rifle_m16_AnimBlueprint.Rifle_m16_AnimBlueprint_C.ExecuteUbergraph_Rifle_m16_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void URifle_m16_AnimBlueprint_C::ExecuteUbergraph_Rifle_m16_AnimBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rifle_m16_AnimBlueprint.Rifle_m16_AnimBlueprint_C.ExecuteUbergraph_Rifle_m16_AnimBlueprint");

	URifle_m16_AnimBlueprint_C_ExecuteUbergraph_Rifle_m16_AnimBlueprint_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
