// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SPEC_Char_Box_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SPEC_Char_Box.SPEC_Char_Box_C.SetAllegiance
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf            (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_Char_Box_C::SetAllegiance(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_Char_Box.SPEC_Char_Box_C.SetAllegiance");

	USPEC_Char_Box_C_SetAllegiance_Params params;
	params.bpp__Allegiance__pf = bpp__Allegiance__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SPEC_Char_Box.SPEC_Char_Box_C.OnPlayerStatusChanged
// (Final, Native, Event, Public)
// Parameters:
// TEnumAsByte<EShooterPlayerStatus> bpp__PlayerStatus__pf          (Parm, ZeroConstructor, IsPlainOldData)

void USPEC_Char_Box_C::OnPlayerStatusChanged(TEnumAsByte<EShooterPlayerStatus> bpp__PlayerStatus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SPEC_Char_Box.SPEC_Char_Box_C.OnPlayerStatusChanged");

	USPEC_Char_Box_C_OnPlayerStatusChanged_Params params;
	params.bpp__PlayerStatus__pf = bpp__PlayerStatus__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
