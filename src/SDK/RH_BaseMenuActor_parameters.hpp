#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BaseMenuActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// DelegateFunction BaseMenuActor.BaseMenuActor_C.OnCustomizationCompleted__DelegateSignature
struct ABaseMenuActor_C_OnCustomizationCompleted__DelegateSignature_Params
{
	class ABaseMenuActor_C*                            bpp__MenuActor__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.UserConstructionScript
struct ABaseMenuActor_C_UserConstructionScript_Params
{
};

// Function BaseMenuActor.BaseMenuActor_C.UnhideDelayed
struct ABaseMenuActor_C_UnhideDelayed_Params
{
};

// Function BaseMenuActor.BaseMenuActor_C.ToggleVisibilityForKickDecal
struct ABaseMenuActor_C_ToggleVisibilityForKickDecal_Params
{
	bool                                               bpp__bVisible__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.ToggleCustomizationFocus
struct ABaseMenuActor_C_ToggleCustomizationFocus_Params
{
	bool                                               bpp__WeaponIsFocused__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__WeaponIsPrimary__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuWorldState>                       bpp__CurrentScene__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.ShowMeshByTag
struct ABaseMenuActor_C_ShowMeshByTag_Params
{
	struct FName                                       bpp__Tag__pf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.ShowHideCustomizationWeapon
struct ABaseMenuActor_C_ShowHideCustomizationWeapon_Params
{
	bool                                               bpp__ShouldUseOffset__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__IsVisible__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__PositionalOffset__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      bpp__MeshToModify__pf;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.SetupForLobby
struct ABaseMenuActor_C_SetupForLobby_Params
{
	int                                                bpp__Slot__pf;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.SetupForCustomization
struct ABaseMenuActor_C_SetupForCustomization_Params
{
	bool                                               bpp__IsWeaponFocused__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__IsWeaponPrimary__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.SetupForCharacterSelect
struct ABaseMenuActor_C_SetupForCharacterSelect_Params
{
};

// Function BaseMenuActor.BaseMenuActor_C.ReceiveBeginPlay
struct ABaseMenuActor_C_ReceiveBeginPlay_Params
{
};

// Function BaseMenuActor.BaseMenuActor_C.PlayLobbyAnimation
struct ABaseMenuActor_C_PlayLobbyAnimation_Params
{
	int                                                bpp__Slot__pf;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.OnEnableDemoMode
struct ABaseMenuActor_C_OnEnableDemoMode_Params
{
};

// Function BaseMenuActor.BaseMenuActor_C.InternalToggleCustomizationFocus
struct ABaseMenuActor_C_InternalToggleCustomizationFocus_Params
{
	class ABaseMenuActor_C*                            bpp__Unused__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.HideMeshByTag
struct ABaseMenuActor_C_HideMeshByTag_Params
{
	struct FName                                       bpp__Tag__pf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.ExecuteUbergraph_BaseMenuActor_5
struct ABaseMenuActor_C_ExecuteUbergraph_BaseMenuActor_5_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.BPToggleCustomizationFocus
struct ABaseMenuActor_C_BPToggleCustomizationFocus_Params
{
	bool                                               bpp__bWeaponFocused__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bWeaponPrimary__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuWorldState>                       bpp__CurrentScene__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.BPSetupForLobby
struct ABaseMenuActor_C_BPSetupForLobby_Params
{
	int                                                bpp__Slot__pf;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.BPSetupForCustomization
struct ABaseMenuActor_C_BPSetupForCustomization_Params
{
	bool                                               bpp__bWeaponFocused__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bWeaponPrimary__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.BPSetupForCharacterSelect
struct ABaseMenuActor_C_BPSetupForCharacterSelect_Params
{
};

// Function BaseMenuActor.BaseMenuActor_C.BPOnLoadoutApplied
struct ABaseMenuActor_C_BPOnLoadoutApplied_Params
{
	int                                                bpp__LobbySlot__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseMenuActor.BaseMenuActor_C.ApplyCustomizationFX
struct ABaseMenuActor_C_ApplyCustomizationFX_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
