// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Top_Menu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spec_Top_Menu.Spec_Top_Menu_C.OnUserSettingsChanged
// (Final, Native, Event, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bUseGamepad__pf           (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Top_Menu_C::OnUserSettingsChanged(bool bpp__bUseGamepad__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.OnUserSettingsChanged");

	USpec_Top_Menu_C_OnUserSettingsChanged_Params params;
	params.bpp__bUseGamepad__pf = bpp__bUseGamepad__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.OnSpectatorTargetChanged
// (Final, Native, Event, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   bpp__Role__pf                  (ConstParm, Parm, OutParm, ReferenceParm)
// class AShooterCharacter*       bpp__Target__pf                (Parm, ZeroConstructor, IsPlainOldData)

void USpec_Top_Menu_C::OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.OnSpectatorTargetChanged");

	USpec_Top_Menu_C_OnSpectatorTargetChanged_Params params;
	params.bpp__Allegiance__pf = bpp__Allegiance__pf;
	params.bpp__Role__pf = bpp__Role__pf;
	params.bpp__Target__pf = bpp__Target__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.OnOneTeammateLeft
// (Native, Public, BlueprintCallable)

void USpec_Top_Menu_C::OnOneTeammateLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.OnOneTeammateLeft");

	USpec_Top_Menu_C_OnOneTeammateLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void USpec_Top_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.Construct");

	USpec_Top_Menu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ToolBarButton_K2Node_ComponentBoundEvent_476_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__ToolBarButton_K2Node_ComponentBoundEvent_476_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ToolBarButton_K2Node_ComponentBoundEvent_476_OnButtonHoverEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__ToolBarButton_K2Node_ComponentBoundEvent_476_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_448_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_448_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_448_OnButtonHoverEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_448_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__MenuModeButton_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__MenuModeButton_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__MenuModeButton_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__MenuModeButton_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__HudButton_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__HudButton_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__HudButton_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__HudButton_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__HideMenuButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__HideMenuButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__HideMenuButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__HideMenuButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__GameModeButton_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__GameModeButton_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__GameModeButton_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__GameModeButton_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_387_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_387_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_387_OnButtonHoverEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_387_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_193_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_193_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_193_OnButtonClickedEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_193_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersNextButton_K2Node_ComponentBoundEvent_413_OnButtonHoverEvent__DelegateSignature
// (Native, Public)

void USpec_Top_Menu_C::BndEvt__CyclePlayersNextButton_K2Node_ComponentBoundEvent_413_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spec_Top_Menu.Spec_Top_Menu_C.BndEvt__CyclePlayersNextButton_K2Node_ComponentBoundEvent_413_OnButtonHoverEvent__DelegateSignature");

	USpec_Top_Menu_C_BndEvt__CyclePlayersNextButton_K2Node_ComponentBoundEvent_413_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Spec_Top_Menu.Spec_Top_Menu_C.OnOneTeammateLeftDelegate__DelegateSignature
// (Public, Delegate)

void USpec_Top_Menu_C::OnOneTeammateLeftDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Spec_Top_Menu.Spec_Top_Menu_C.OnOneTeammateLeftDelegate__DelegateSignature");

	USpec_Top_Menu_C_OnOneTeammateLeftDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
