// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_PanelInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spec_PanelInterface.Spec_PanelInterface_C.OnUserSettingsChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bpp__bUseGamepad__pf           (Parm, ZeroConstructor, IsPlainOldData)

void USpec_PanelInterface_C::OnUserSettingsChanged(bool bpp__bUseGamepad__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_PanelInterface.Spec_PanelInterface_C.OnUserSettingsChanged");

	USpec_PanelInterface_C_OnUserSettingsChanged_Params params;
	params.bpp__bUseGamepad__pf = bpp__bUseGamepad__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_PanelInterface.Spec_PanelInterface_C.OnSpectatorTargetChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   bpp__Role__pf                  (ConstParm, Parm, OutParm, ReferenceParm)
// class AShooterCharacter*       bpp__Target__pf                (Parm, ZeroConstructor, IsPlainOldData)

void USpec_PanelInterface_C::OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_PanelInterface.Spec_PanelInterface_C.OnSpectatorTargetChanged");

	USpec_PanelInterface_C_OnSpectatorTargetChanged_Params params;
	params.bpp__Allegiance__pf = bpp__Allegiance__pf;
	params.bpp__Role__pf = bpp__Role__pf;
	params.bpp__Target__pf = bpp__Target__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
