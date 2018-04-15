#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PawnHelpers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PawnHelpers.PawnHelpers_C.UpdateCharacterIndexForPost
struct UPawnHelpers_C_UpdateCharacterIndexForPost_Params
{
	class AShooterCharacter*                           bpp__ShooterCharacterInput__pf;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bIncludeWeapons__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bSetWeaponsOnly__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.UpdateBitPanelDisplayOnShooterCharacter
struct UPawnHelpers_C_UpdateBitPanelDisplayOnShooterCharacter_Params
{
	class AShooterCharacter*                           bpp__Pawn__pf;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         bpp__CharacterClass__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__AnimationStateTime__pf;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__LastTimeLength__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInkBlotStates>                        bpp__CurrentInkBlotState__pf;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.ToggleDeathFxOnPawn
struct UPawnHelpers_C_ToggleDeathFxOnPawn_Params
{
	class AShooterCharacter*                           bpp__ShooterPawnInput__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__IsEnabledBool__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.SetScalarOnWeapon
struct UPawnHelpers_C_SetScalarOnWeapon_Params
{
	struct FName                                       bpp__NameOfScalarParam__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__ValueOfScalarParam__pf;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bSetOnThirdPersonWeaponNotFirst__pf;                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              bpp__ShooterWeaponToSetScalar__pf;                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.SetScalarOnTertiaryWeapon
struct UPawnHelpers_C_SetScalarOnTertiaryWeapon_Params
{
	class AShooterCharacter*                           bpp__ShooterPawnInput__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bpp__NameOfScalarParam__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__ValueOfScalarParam__pf;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bSetOnThirdPersonWeaponNotFirst__pf;                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.SetScalarOnAllPlayerWeaponsofClass
struct UPawnHelpers_C_SetScalarOnAllPlayerWeaponsofClass_Params
{
	class AShooterCharacter*                           bpp__ShooterPawnInput__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bpp__NameOfScalarParam__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__ValueOfScalarParam__pf;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bSetOnThirdPersonWeaponNotFirst__pf;                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      bpp__WeaponTypeToFind__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.SetScalarOnAllPawnWeapons
struct UPawnHelpers_C_SetScalarOnAllPawnWeapons_Params
{
	class AShooterCharacter*                           bpp__ShooterPawnInput__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       bpp__NameOfScalarParam__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__ValueOfScalarParam__pf;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bSetOnThirdPersonWeaponNotFirst__pf;                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.NormalizeFloat0to1
struct UPawnHelpers_C_NormalizeFloat0to1_Params
{
	float                                              bpp__CurrentTime__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__EventTime__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__MaxTime__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bShouldInvertResult__pf;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__Result0to1__pf;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.IsThirdPersonPawn
struct UPawnHelpers_C_IsThirdPersonPawn_Params
{
	class AShooterCharacter*                           bpp__ShooterPawnInput__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bThisIsAThirdPersonPawn__pf;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.IsAliveOrDeadFirstPersonPawn
struct UPawnHelpers_C_IsAliveOrDeadFirstPersonPawn_Params
{
	class AShooterCharacter*                           bpp__ShooterPawnInput__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bThisIsAnAliveOrDeadFirstPersonPawn__pf;             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.IsAliveFirstPersonPawn
struct UPawnHelpers_C_IsAliveFirstPersonPawn_Params
{
	class AShooterCharacter*                           bpp__ShooterPawnInput__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bThisIsAnAliveFirstPersonPawn__pf;                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.GetTeamIndexForPosts
struct UPawnHelpers_C_GetTeamIndexForPosts_Params
{
	class AShooterCharacter*                           bpp__ShooterCharacterInputParam__pf;                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__PostScalar__pf;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.GetPostIndexFromPawnState
struct UPawnHelpers_C_GetPostIndexFromPawnState_Params
{
	class APlayerPawn_C*                               bpp__PlayerPawnInput__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__PostIndiceOutput__pf;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.ApplyStickerDataToWeapon
struct UPawnHelpers_C_ApplyStickerDataToWeapon_Params
{
	TArray<class USkeletalMeshComponent*>              bpp__WeaponMeshes__pf;                                    // (Parm, OutParm, ZeroConstructor)
	class UCustomStickerData*                          bpp__StickerDataTouse__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        bpp__MaterialsToSkip__pf;                                 // (Parm, OutParm, ZeroConstructor)
	struct FStickerUVTransforms                        bpp__StickerUvTransformData__pf;                          // (Parm)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PawnHelpers.PawnHelpers_C.ApplyStickerDataToMaterial
struct UPawnHelpers_C_ApplyStickerDataToMaterial_Params
{
	class UMaterialInstanceDynamic*                    bpp__Material__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomStickerData*                          bpp__StickerDataTouse__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStickerUVTransforms                        bpp__StickerUvTransformData__pf;                          // (Parm)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
