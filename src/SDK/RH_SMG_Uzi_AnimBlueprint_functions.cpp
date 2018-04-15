// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SMG_Uzi_AnimBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SMG_Uzi_AnimBlueprint.SMG_Uzi_AnimBlueprint_C.ExecuteUbergraph_SMG_Uzi_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void USMG_Uzi_AnimBlueprint_C::ExecuteUbergraph_SMG_Uzi_AnimBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SMG_Uzi_AnimBlueprint.SMG_Uzi_AnimBlueprint_C.ExecuteUbergraph_SMG_Uzi_AnimBlueprint");

	USMG_Uzi_AnimBlueprint_C_ExecuteUbergraph_SMG_Uzi_AnimBlueprint_Params params;
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
