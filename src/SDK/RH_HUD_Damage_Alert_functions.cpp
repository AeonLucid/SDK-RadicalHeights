// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Damage_Alert_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Damage_Alert.HUD_Damage_Alert_C.ExecuteUbergraph_HUD_Damage_Alert
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Damage_Alert_C::ExecuteUbergraph_HUD_Damage_Alert(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Damage_Alert.HUD_Damage_Alert_C.ExecuteUbergraph_HUD_Damage_Alert");

	UHUD_Damage_Alert_C_ExecuteUbergraph_HUD_Damage_Alert_Params params;
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
