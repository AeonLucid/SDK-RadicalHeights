// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Loadout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spec_Loadout.Spec_Loadout_C.OnUserSettingsChanged
// (Final, Native, Event, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bUseGamepad__pf           (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Loadout_C::OnUserSettingsChanged(bool bpp__bUseGamepad__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Loadout.Spec_Loadout_C.OnUserSettingsChanged");

	USpec_Loadout_C_OnUserSettingsChanged_Params params;
	params.bpp__bUseGamepad__pf = bpp__bUseGamepad__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Loadout.Spec_Loadout_C.OnSpectatorTargetChanged
// (Final, Native, Event, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   bpp__Role__pf                  (ConstParm, Parm, OutParm, ReferenceParm)
// class AShooterCharacter*       bpp__Target__pf                (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Loadout_C::OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Loadout.Spec_Loadout_C.OnSpectatorTargetChanged");

	USpec_Loadout_C_OnSpectatorTargetChanged_Params params;
	params.bpp__Allegiance__pf = bpp__Allegiance__pf;
	params.bpp__Role__pf = bpp__Role__pf;
	params.bpp__Target__pf = bpp__Target__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
