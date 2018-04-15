#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PawnHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass PawnHelpers.PawnHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UPawnHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass PawnHelpers.PawnHelpers_C");
		return ptr;
	}


	void STATIC_UpdateCharacterIndexForPost(class AShooterCharacter* bpp__ShooterCharacterInput__pf, bool bpp__bIncludeWeapons__pf, bool bpp__bSetWeaponsOnly__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_UpdateBitPanelDisplayOnShooterCharacter(class AShooterCharacter* bpp__Pawn__pf, TEnumAsByte<EShooterClass> bpp__CharacterClass__pf, float bpp__AnimationStateTime__pf, float bpp__LastTimeLength__pf, TEnumAsByte<EInkBlotStates> bpp__CurrentInkBlotState__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_ToggleDeathFxOnPawn(class AShooterCharacter* bpp__ShooterPawnInput__pf, bool bpp__IsEnabledBool__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_SetScalarOnWeapon(const struct FName& bpp__NameOfScalarParam__pf, float bpp__ValueOfScalarParam__pf, bool bpp__bSetOnThirdPersonWeaponNotFirst__pf, class AShooterWeapon* bpp__ShooterWeaponToSetScalar__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_SetScalarOnTertiaryWeapon(class AShooterCharacter* bpp__ShooterPawnInput__pf, const struct FName& bpp__NameOfScalarParam__pf, float bpp__ValueOfScalarParam__pf, bool bpp__bSetOnThirdPersonWeaponNotFirst__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_SetScalarOnAllPlayerWeaponsofClass(class AShooterCharacter* bpp__ShooterPawnInput__pf, const struct FName& bpp__NameOfScalarParam__pf, float bpp__ValueOfScalarParam__pf, bool bpp__bSetOnThirdPersonWeaponNotFirst__pf, class UClass* bpp__WeaponTypeToFind__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_SetScalarOnAllPawnWeapons(class AShooterCharacter* bpp__ShooterPawnInput__pf, const struct FName& bpp__NameOfScalarParam__pf, float bpp__ValueOfScalarParam__pf, bool bpp__bSetOnThirdPersonWeaponNotFirst__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_NormalizeFloat0to1(float bpp__CurrentTime__pf, float bpp__EventTime__pf, float bpp__MaxTime__pf, bool bpp__bShouldInvertResult__pf, class UObject* bpp____WorldContext__pf, float* bpp__Result0to1__pf);
	void STATIC_IsThirdPersonPawn(class AShooterCharacter* bpp__ShooterPawnInput__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bThisIsAThirdPersonPawn__pf);
	void STATIC_IsAliveOrDeadFirstPersonPawn(class AShooterCharacter* bpp__ShooterPawnInput__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bThisIsAnAliveOrDeadFirstPersonPawn__pf);
	void STATIC_IsAliveFirstPersonPawn(class AShooterCharacter* bpp__ShooterPawnInput__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bThisIsAnAliveFirstPersonPawn__pf);
	void STATIC_GetTeamIndexForPosts(class AShooterCharacter* bpp__ShooterCharacterInputParam__pf, class UObject* bpp____WorldContext__pf, float* bpp__PostScalar__pf);
	void STATIC_GetPostIndexFromPawnState(class APlayerPawn_C* bpp__PlayerPawnInput__pf, class UObject* bpp____WorldContext__pf, float* bpp__PostIndiceOutput__pf);
	void STATIC_ApplyStickerDataToWeapon(class UCustomStickerData* bpp__StickerDataTouse__pf, const struct FStickerUVTransforms& bpp__StickerUvTransformData__pf, class UObject* bpp____WorldContext__pf, TArray<class USkeletalMeshComponent*>* bpp__WeaponMeshes__pf, TArray<int>* bpp__MaterialsToSkip__pf);
	void STATIC_ApplyStickerDataToMaterial(class UMaterialInstanceDynamic* bpp__Material__pf, class UCustomStickerData* bpp__StickerDataTouse__pf, const struct FStickerUVTransforms& bpp__StickerUvTransformData__pf, class UObject* bpp____WorldContext__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
