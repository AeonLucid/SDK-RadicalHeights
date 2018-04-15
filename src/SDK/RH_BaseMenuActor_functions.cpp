// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BaseMenuActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction BaseMenuActor.BaseMenuActor_C.OnCustomizationCompleted__DelegateSignature
// (Public, Delegate)
// Parameters:
// class ABaseMenuActor_C*        bpp__MenuActor__pf             (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::OnCustomizationCompleted__DelegateSignature(class ABaseMenuActor_C* bpp__MenuActor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction BaseMenuActor.BaseMenuActor_C.OnCustomizationCompleted__DelegateSignature");

	ABaseMenuActor_C_OnCustomizationCompleted__DelegateSignature_Params params;
	params.bpp__MenuActor__pf = bpp__MenuActor__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABaseMenuActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.UserConstructionScript");

	ABaseMenuActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.UnhideDelayed
// (Native, Public, BlueprintCallable)

void ABaseMenuActor_C::UnhideDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.UnhideDelayed");

	ABaseMenuActor_C_UnhideDelayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ToggleVisibilityForKickDecal
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bVisible__pf              (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::ToggleVisibilityForKickDecal(bool bpp__bVisible__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ToggleVisibilityForKickDecal");

	ABaseMenuActor_C_ToggleVisibilityForKickDecal_Params params;
	params.bpp__bVisible__pf = bpp__bVisible__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ToggleCustomizationFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__WeaponIsFocused__pf       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__WeaponIsPrimary__pf       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMenuWorldState>   bpp__CurrentScene__pf          (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::ToggleCustomizationFocus(bool bpp__WeaponIsFocused__pf, bool bpp__WeaponIsPrimary__pf, TEnumAsByte<EMenuWorldState> bpp__CurrentScene__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ToggleCustomizationFocus");

	ABaseMenuActor_C_ToggleCustomizationFocus_Params params;
	params.bpp__WeaponIsFocused__pf = bpp__WeaponIsFocused__pf;
	params.bpp__WeaponIsPrimary__pf = bpp__WeaponIsPrimary__pf;
	params.bpp__CurrentScene__pf = bpp__CurrentScene__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ShowMeshByTag
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   bpp__Tag__pf                   (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::ShowMeshByTag(const struct FName& bpp__Tag__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ShowMeshByTag");

	ABaseMenuActor_C_ShowMeshByTag_Params params;
	params.bpp__Tag__pf = bpp__Tag__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ShowHideCustomizationWeapon
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bpp__ShouldUseOffset__pf       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsVisible__pf             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__PositionalOffset__pf      (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  bpp__MeshToModify__pf          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABaseMenuActor_C::ShowHideCustomizationWeapon(bool bpp__ShouldUseOffset__pf, bool bpp__IsVisible__pf, const struct FVector& bpp__PositionalOffset__pf, class USkeletalMeshComponent* bpp__MeshToModify__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ShowHideCustomizationWeapon");

	ABaseMenuActor_C_ShowHideCustomizationWeapon_Params params;
	params.bpp__ShouldUseOffset__pf = bpp__ShouldUseOffset__pf;
	params.bpp__IsVisible__pf = bpp__IsVisible__pf;
	params.bpp__PositionalOffset__pf = bpp__PositionalOffset__pf;
	params.bpp__MeshToModify__pf = bpp__MeshToModify__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.SetupForLobby
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Slot__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::SetupForLobby(int bpp__Slot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.SetupForLobby");

	ABaseMenuActor_C_SetupForLobby_Params params;
	params.bpp__Slot__pf = bpp__Slot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.SetupForCustomization
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__IsWeaponFocused__pf       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsWeaponPrimary__pf       (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::SetupForCustomization(bool bpp__IsWeaponFocused__pf, bool bpp__IsWeaponPrimary__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.SetupForCustomization");

	ABaseMenuActor_C_SetupForCustomization_Params params;
	params.bpp__IsWeaponFocused__pf = bpp__IsWeaponFocused__pf;
	params.bpp__IsWeaponPrimary__pf = bpp__IsWeaponPrimary__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.SetupForCharacterSelect
// (Native, Public, BlueprintCallable)

void ABaseMenuActor_C::SetupForCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.SetupForCharacterSelect");

	ABaseMenuActor_C_SetupForCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABaseMenuActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ReceiveBeginPlay");

	ABaseMenuActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.PlayLobbyAnimation
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Slot__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::PlayLobbyAnimation(int bpp__Slot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.PlayLobbyAnimation");

	ABaseMenuActor_C_PlayLobbyAnimation_Params params;
	params.bpp__Slot__pf = bpp__Slot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.OnEnableDemoMode
// (Native, Public, BlueprintCallable)

void ABaseMenuActor_C::OnEnableDemoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.OnEnableDemoMode");

	ABaseMenuActor_C_OnEnableDemoMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.InternalToggleCustomizationFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// class ABaseMenuActor_C*        bpp__Unused__pf                (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::InternalToggleCustomizationFocus(class ABaseMenuActor_C* bpp__Unused__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.InternalToggleCustomizationFocus");

	ABaseMenuActor_C_InternalToggleCustomizationFocus_Params params;
	params.bpp__Unused__pf = bpp__Unused__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.HideMeshByTag
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   bpp__Tag__pf                   (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::HideMeshByTag(const struct FName& bpp__Tag__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.HideMeshByTag");

	ABaseMenuActor_C_HideMeshByTag_Params params;
	params.bpp__Tag__pf = bpp__Tag__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ExecuteUbergraph_BaseMenuActor_5
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::ExecuteUbergraph_BaseMenuActor_5(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ExecuteUbergraph_BaseMenuActor_5");

	ABaseMenuActor_C_ExecuteUbergraph_BaseMenuActor_5_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPToggleCustomizationFocus
// (Final, Native, Event, Public)
// Parameters:
// bool                           bpp__bWeaponFocused__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bWeaponPrimary__pf        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMenuWorldState>   bpp__CurrentScene__pf          (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::BPToggleCustomizationFocus(bool bpp__bWeaponFocused__pf, bool bpp__bWeaponPrimary__pf, TEnumAsByte<EMenuWorldState> bpp__CurrentScene__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPToggleCustomizationFocus");

	ABaseMenuActor_C_BPToggleCustomizationFocus_Params params;
	params.bpp__bWeaponFocused__pf = bpp__bWeaponFocused__pf;
	params.bpp__bWeaponPrimary__pf = bpp__bWeaponPrimary__pf;
	params.bpp__CurrentScene__pf = bpp__CurrentScene__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPSetupForLobby
// (Final, Native, Event, Public)
// Parameters:
// int                            bpp__Slot__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::BPSetupForLobby(int bpp__Slot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPSetupForLobby");

	ABaseMenuActor_C_BPSetupForLobby_Params params;
	params.bpp__Slot__pf = bpp__Slot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPSetupForCustomization
// (Final, Native, Event, Public)
// Parameters:
// bool                           bpp__bWeaponFocused__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bWeaponPrimary__pf        (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::BPSetupForCustomization(bool bpp__bWeaponFocused__pf, bool bpp__bWeaponPrimary__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPSetupForCustomization");

	ABaseMenuActor_C_BPSetupForCustomization_Params params;
	params.bpp__bWeaponFocused__pf = bpp__bWeaponFocused__pf;
	params.bpp__bWeaponPrimary__pf = bpp__bWeaponPrimary__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPSetupForCharacterSelect
// (Final, Native, Event, Public)

void ABaseMenuActor_C::BPSetupForCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPSetupForCharacterSelect");

	ABaseMenuActor_C_BPSetupForCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPOnLoadoutApplied
// (Final, Native, Event, Public)
// Parameters:
// int                            bpp__LobbySlot__pf             (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::BPOnLoadoutApplied(int bpp__LobbySlot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPOnLoadoutApplied");

	ABaseMenuActor_C_BPOnLoadoutApplied_Params params;
	params.bpp__LobbySlot__pf = bpp__LobbySlot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ApplyCustomizationFX
// (Native, Public, BlueprintCallable)

void ABaseMenuActor_C::ApplyCustomizationFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ApplyCustomizationFX");

	ABaseMenuActor_C_ApplyCustomizationFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
