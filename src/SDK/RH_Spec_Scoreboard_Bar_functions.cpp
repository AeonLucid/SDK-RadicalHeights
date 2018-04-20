// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Scoreboard_Bar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SetHoveredIfExists
// (Native, Public, BlueprintCallable)
// Parameters:
// class USPEC_Char_Box_C*        bpp__CharBox__pf               (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Scoreboard_Bar_C::SetHoveredIfExists(class USPEC_Char_Box_C* bpp__CharBox__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SetHoveredIfExists");

	USpec_Scoreboard_Bar_C_SetHoveredIfExists_Params params;
	params.bpp__CharBox__pf = bpp__CharBox__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SelectCharBox
// (Native, Public, BlueprintCallable)
// Parameters:
// class USPEC_Char_Box_C*        bpp__CharxBox__pfT             (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Scoreboard_Bar_C::SelectCharBox(class USPEC_Char_Box_C* bpp__CharxBox__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SelectCharBox");

	USpec_Scoreboard_Bar_C_SelectCharBox_Params params;
	params.bpp__CharxBox__pfT = bpp__CharxBox__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnUserSettingsChanged
// (Final, Native, Event, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bUseGamepad__pf           (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Scoreboard_Bar_C::OnUserSettingsChanged(bool bpp__bUseGamepad__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnUserSettingsChanged");

	USpec_Scoreboard_Bar_C_OnUserSettingsChanged_Params params;
	params.bpp__bUseGamepad__pf = bpp__bUseGamepad__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnSpectatorTargetChanged
// (Final, Native, Event, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   bpp__Role__pf                  (ConstParm, Parm, OutParm, ReferenceParm)
// class AShooterCharacter*       bpp__Target__pf                (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Scoreboard_Bar_C::OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnSpectatorTargetChanged");

	USpec_Scoreboard_Bar_C_OnSpectatorTargetChanged_Params params;
	params.bpp__Allegiance__pf = bpp__Allegiance__pf;
	params.bpp__Role__pf = bpp__Role__pf;
	params.bpp__Target__pf = bpp__Target__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnSpectatorPlayerChosen
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Scoreboard_Bar_C::OnSpectatorPlayerChosen(int bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnSpectatorPlayerChosen");

	USpec_Scoreboard_Bar_C_OnSpectatorPlayerChosen_Params params;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnEntryVisibilityChanged
// (Final, Native, Event, Public)
// Parameters:
// class UShooterPlayerListEntry* bpp__Entry__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bIsVisible__pf            (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Scoreboard_Bar_C::OnEntryVisibilityChanged(class UShooterPlayerListEntry* bpp__Entry__pf, bool bpp__bIsVisible__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.OnEntryVisibilityChanged");

	USpec_Scoreboard_Bar_C_OnEntryVisibilityChanged_Params params;
	params.bpp__Entry__pf = bpp__Entry__pf;
	params.bpp__bIsVisible__pf = bpp__bIsVisible__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.HideHoveredIfNotActive
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Index__pf                 (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Scoreboard_Bar_C::HideHoveredIfNotActive(int bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.HideHoveredIfNotActive");

	USpec_Scoreboard_Bar_C_HideHoveredIfNotActive_Params params;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void USpec_Scoreboard_Bar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.Construct");

	USpec_Scoreboard_Bar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2325_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2325_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2325_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2325_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2280_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2280_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2280_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2280_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_291_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_291_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_291_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_291_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2192_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2192_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2192_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2192_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2150_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2150_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2150_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2150_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2068_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2068_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2068_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2068_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2029_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2029_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2029_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2029_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1034_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1034_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1034_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1034_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1006_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1006_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1006_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1006_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_527_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_527_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_527_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_527_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_885_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_885_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_885_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_885_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_861_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_861_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_861_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_861_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_482_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_482_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_482_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_482_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_415_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_415_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_415_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_415_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1845_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1845_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1845_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1845_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1806_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1806_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1806_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1806_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_316_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_316_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_316_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_316_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1951_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1951_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1951_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1951_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1915_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1915_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1915_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1915_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1169_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1169_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1169_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1169_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1138_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1138_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1138_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1138_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2467_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2467_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2467_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2467_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2419_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2419_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2419_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2419_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__CyclePlayerUp_K2Node_ComponentBoundEvent_2818_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__CyclePlayerUp_K2Node_ComponentBoundEvent_2818_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__CyclePlayerUp_K2Node_ComponentBoundEvent_2818_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__CyclePlayerUp_K2Node_ComponentBoundEvent_2818_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__CyclePlayerDown_K2Node_ComponentBoundEvent_2875_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__CyclePlayerDown_K2Node_ComponentBoundEvent_2875_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__CyclePlayerDown_K2Node_ComponentBoundEvent_2875_OnButtonHoverEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__CyclePlayerDown_K2Node_ComponentBoundEvent_2875_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F9_K2Node_ComponentBoundEvent_3815_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F9_K2Node_ComponentBoundEvent_3815_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F9_K2Node_ComponentBoundEvent_3815_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F9_K2Node_ComponentBoundEvent_3815_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F8_K2Node_ComponentBoundEvent_3868_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F8_K2Node_ComponentBoundEvent_3868_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F8_K2Node_ComponentBoundEvent_3868_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F8_K2Node_ComponentBoundEvent_3868_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F7_K2Node_ComponentBoundEvent_3922_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F7_K2Node_ComponentBoundEvent_3922_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F7_K2Node_ComponentBoundEvent_3922_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F7_K2Node_ComponentBoundEvent_3922_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F6_K2Node_ComponentBoundEvent_3977_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F6_K2Node_ComponentBoundEvent_3977_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F6_K2Node_ComponentBoundEvent_3977_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F6_K2Node_ComponentBoundEvent_3977_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F5_K2Node_ComponentBoundEvent_4033_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F5_K2Node_ComponentBoundEvent_4033_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F5_K2Node_ComponentBoundEvent_4033_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F5_K2Node_ComponentBoundEvent_4033_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F4_K2Node_ComponentBoundEvent_4090_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F4_K2Node_ComponentBoundEvent_4090_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F4_K2Node_ComponentBoundEvent_4090_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F4_K2Node_ComponentBoundEvent_4090_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F3_K2Node_ComponentBoundEvent_4148_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F3_K2Node_ComponentBoundEvent_4148_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F3_K2Node_ComponentBoundEvent_4148_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F3_K2Node_ComponentBoundEvent_4148_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F2_K2Node_ComponentBoundEvent_4207_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F2_K2Node_ComponentBoundEvent_4207_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F2_K2Node_ComponentBoundEvent_4207_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F2_K2Node_ComponentBoundEvent_4207_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F1_K2Node_ComponentBoundEvent_4267_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F1_K2Node_ComponentBoundEvent_4267_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F1_K2Node_ComponentBoundEvent_4267_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F1_K2Node_ComponentBoundEvent_4267_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F10_K2Node_ComponentBoundEvent_3755_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_F10_K2Node_ComponentBoundEvent_3755_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_F10_K2Node_ComponentBoundEvent_3755_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_F10_K2Node_ComponentBoundEvent_3755_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_354_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Scoreboard_Bar_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_354_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_354_OnButtonClickedEvent__DelegateSignature");

	USpec_Scoreboard_Bar_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_354_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SpectatorIndexChosen__DelegateSignature
// (Public, Delegate)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Scoreboard_Bar_C::SpectatorIndexChosen__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C.SpectatorIndexChosen__DelegateSignature");

	USpec_Scoreboard_Bar_C_SpectatorIndexChosen__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
