// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BattleRifle_m14_AnimBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleRifle_m14_AnimBlueprint.BattleRifle_m14_AnimBlueprint_C.ExecuteUbergraph_BattleRifle_m14_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UBattleRifle_m14_AnimBlueprint_C::ExecuteUbergraph_BattleRifle_m14_AnimBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleRifle_m14_AnimBlueprint.BattleRifle_m14_AnimBlueprint_C.ExecuteUbergraph_BattleRifle_m14_AnimBlueprint");

	UBattleRifle_m14_AnimBlueprint_C_ExecuteUbergraph_BattleRifle_m14_AnimBlueprint_Params params;
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
