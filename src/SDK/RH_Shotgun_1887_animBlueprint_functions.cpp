// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Shotgun_1887_animBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shotgun_1887_animBlueprint.Shotgun_1887_animBlueprint_C.ExecuteUbergraph_Shotgun_1887_animBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UShotgun_1887_animBlueprint_C::ExecuteUbergraph_Shotgun_1887_animBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shotgun_1887_animBlueprint.Shotgun_1887_animBlueprint_C.ExecuteUbergraph_Shotgun_1887_animBlueprint");

	UShotgun_1887_animBlueprint_C_ExecuteUbergraph_Shotgun_1887_animBlueprint_Params params;
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
