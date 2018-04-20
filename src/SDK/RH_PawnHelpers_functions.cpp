// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PawnHelpers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PawnHelpers.PawnHelpers_C.UpdateCharacterIndexForPost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterCharacterInput__pf (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bIncludeWeapons__pf       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bSetWeaponsOnly__pf       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_UpdateCharacterIndexForPost(class AShooterCharacter* bpp__ShooterCharacterInput__pf, bool bpp__bIncludeWeapons__pf, bool bpp__bSetWeaponsOnly__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.UpdateCharacterIndexForPost");

	UPawnHelpers_C_UpdateCharacterIndexForPost_Params params;
	params.bpp__ShooterCharacterInput__pf = bpp__ShooterCharacterInput__pf;
	params.bpp__bIncludeWeapons__pf = bpp__bIncludeWeapons__pf;
	params.bpp__bSetWeaponsOnly__pf = bpp__bSetWeaponsOnly__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PawnHelpers.PawnHelpers_C.UpdateBitPanelDisplayOnShooterCharacter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__Pawn__pf                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterClass>     bpp__CharacterClass__pf        (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__AnimationStateTime__pf    (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__LastTimeLength__pf        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInkBlotStates>    bpp__CurrentInkBlotState__pf   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_UpdateBitPanelDisplayOnShooterCharacter(class AShooterCharacter* bpp__Pawn__pf, TEnumAsByte<EShooterClass> bpp__CharacterClass__pf, float bpp__AnimationStateTime__pf, float bpp__LastTimeLength__pf, TEnumAsByte<EInkBlotStates> bpp__CurrentInkBlotState__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.UpdateBitPanelDisplayOnShooterCharacter");

	UPawnHelpers_C_UpdateBitPanelDisplayOnShooterCharacter_Params params;
	params.bpp__Pawn__pf = bpp__Pawn__pf;
	params.bpp__CharacterClass__pf = bpp__CharacterClass__pf;
	params.bpp__AnimationStateTime__pf = bpp__AnimationStateTime__pf;
	params.bpp__LastTimeLength__pf = bpp__LastTimeLength__pf;
	params.bpp__CurrentInkBlotState__pf = bpp__CurrentInkBlotState__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PawnHelpers.PawnHelpers_C.ToggleDeathFxOnPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterPawnInput__pf      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsEnabledBool__pf         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_ToggleDeathFxOnPawn(class AShooterCharacter* bpp__ShooterPawnInput__pf, bool bpp__IsEnabledBool__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.ToggleDeathFxOnPawn");

	UPawnHelpers_C_ToggleDeathFxOnPawn_Params params;
	params.bpp__ShooterPawnInput__pf = bpp__ShooterPawnInput__pf;
	params.bpp__IsEnabledBool__pf = bpp__IsEnabledBool__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PawnHelpers.PawnHelpers_C.SetScalarOnWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   bpp__NameOfScalarParam__pf     (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__ValueOfScalarParam__pf    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bSetOnThirdPersonWeaponNotFirst__pf (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterWeapon*          bpp__ShooterWeaponToSetScalar__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_SetScalarOnWeapon(const struct FName& bpp__NameOfScalarParam__pf, float bpp__ValueOfScalarParam__pf, bool bpp__bSetOnThirdPersonWeaponNotFirst__pf, class AShooterWeapon* bpp__ShooterWeaponToSetScalar__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.SetScalarOnWeapon");

	UPawnHelpers_C_SetScalarOnWeapon_Params params;
	params.bpp__NameOfScalarParam__pf = bpp__NameOfScalarParam__pf;
	params.bpp__ValueOfScalarParam__pf = bpp__ValueOfScalarParam__pf;
	params.bpp__bSetOnThirdPersonWeaponNotFirst__pf = bpp__bSetOnThirdPersonWeaponNotFirst__pf;
	params.bpp__ShooterWeaponToSetScalar__pf = bpp__ShooterWeaponToSetScalar__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PawnHelpers.PawnHelpers_C.SetScalarOnTertiaryWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterPawnInput__pf      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   bpp__NameOfScalarParam__pf     (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__ValueOfScalarParam__pf    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bSetOnThirdPersonWeaponNotFirst__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_SetScalarOnTertiaryWeapon(class AShooterCharacter* bpp__ShooterPawnInput__pf, const struct FName& bpp__NameOfScalarParam__pf, float bpp__ValueOfScalarParam__pf, bool bpp__bSetOnThirdPersonWeaponNotFirst__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.SetScalarOnTertiaryWeapon");

	UPawnHelpers_C_SetScalarOnTertiaryWeapon_Params params;
	params.bpp__ShooterPawnInput__pf = bpp__ShooterPawnInput__pf;
	params.bpp__NameOfScalarParam__pf = bpp__NameOfScalarParam__pf;
	params.bpp__ValueOfScalarParam__pf = bpp__ValueOfScalarParam__pf;
	params.bpp__bSetOnThirdPersonWeaponNotFirst__pf = bpp__bSetOnThirdPersonWeaponNotFirst__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PawnHelpers.PawnHelpers_C.SetScalarOnAllPlayerWeaponsofClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterPawnInput__pf      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   bpp__NameOfScalarParam__pf     (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__ValueOfScalarParam__pf    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bSetOnThirdPersonWeaponNotFirst__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  bpp__WeaponTypeToFind__pf      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_SetScalarOnAllPlayerWeaponsofClass(class AShooterCharacter* bpp__ShooterPawnInput__pf, const struct FName& bpp__NameOfScalarParam__pf, float bpp__ValueOfScalarParam__pf, bool bpp__bSetOnThirdPersonWeaponNotFirst__pf, class UClass* bpp__WeaponTypeToFind__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.SetScalarOnAllPlayerWeaponsofClass");

	UPawnHelpers_C_SetScalarOnAllPlayerWeaponsofClass_Params params;
	params.bpp__ShooterPawnInput__pf = bpp__ShooterPawnInput__pf;
	params.bpp__NameOfScalarParam__pf = bpp__NameOfScalarParam__pf;
	params.bpp__ValueOfScalarParam__pf = bpp__ValueOfScalarParam__pf;
	params.bpp__bSetOnThirdPersonWeaponNotFirst__pf = bpp__bSetOnThirdPersonWeaponNotFirst__pf;
	params.bpp__WeaponTypeToFind__pf = bpp__WeaponTypeToFind__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PawnHelpers.PawnHelpers_C.SetScalarOnAllPawnWeapons
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterPawnInput__pf      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   bpp__NameOfScalarParam__pf     (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__ValueOfScalarParam__pf    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bSetOnThirdPersonWeaponNotFirst__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_SetScalarOnAllPawnWeapons(class AShooterCharacter* bpp__ShooterPawnInput__pf, const struct FName& bpp__NameOfScalarParam__pf, float bpp__ValueOfScalarParam__pf, bool bpp__bSetOnThirdPersonWeaponNotFirst__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.SetScalarOnAllPawnWeapons");

	UPawnHelpers_C_SetScalarOnAllPawnWeapons_Params params;
	params.bpp__ShooterPawnInput__pf = bpp__ShooterPawnInput__pf;
	params.bpp__NameOfScalarParam__pf = bpp__NameOfScalarParam__pf;
	params.bpp__ValueOfScalarParam__pf = bpp__ValueOfScalarParam__pf;
	params.bpp__bSetOnThirdPersonWeaponNotFirst__pf = bpp__bSetOnThirdPersonWeaponNotFirst__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PawnHelpers.PawnHelpers_C.NormalizeFloat0to1
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          bpp__CurrentTime__pf           (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__EventTime__pf             (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__MaxTime__pf               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bShouldInvertResult__pf   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__Result0to1__pf            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_NormalizeFloat0to1(float bpp__CurrentTime__pf, float bpp__EventTime__pf, float bpp__MaxTime__pf, bool bpp__bShouldInvertResult__pf, class UObject* bpp____WorldContext__pf, float* bpp__Result0to1__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.NormalizeFloat0to1");

	UPawnHelpers_C_NormalizeFloat0to1_Params params;
	params.bpp__CurrentTime__pf = bpp__CurrentTime__pf;
	params.bpp__EventTime__pf = bpp__EventTime__pf;
	params.bpp__MaxTime__pf = bpp__MaxTime__pf;
	params.bpp__bShouldInvertResult__pf = bpp__bShouldInvertResult__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__Result0to1__pf != nullptr)
		*bpp__Result0to1__pf = params.bpp__Result0to1__pf;
}


// Function PawnHelpers.PawnHelpers_C.IsThirdPersonPawn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterPawnInput__pf      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bThisIsAThirdPersonPawn__pf (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_IsThirdPersonPawn(class AShooterCharacter* bpp__ShooterPawnInput__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bThisIsAThirdPersonPawn__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.IsThirdPersonPawn");

	UPawnHelpers_C_IsThirdPersonPawn_Params params;
	params.bpp__ShooterPawnInput__pf = bpp__ShooterPawnInput__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__bThisIsAThirdPersonPawn__pf != nullptr)
		*bpp__bThisIsAThirdPersonPawn__pf = params.bpp__bThisIsAThirdPersonPawn__pf;
}


// Function PawnHelpers.PawnHelpers_C.IsAliveOrDeadFirstPersonPawn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterPawnInput__pf      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bThisIsAnAliveOrDeadFirstPersonPawn__pf (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_IsAliveOrDeadFirstPersonPawn(class AShooterCharacter* bpp__ShooterPawnInput__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bThisIsAnAliveOrDeadFirstPersonPawn__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.IsAliveOrDeadFirstPersonPawn");

	UPawnHelpers_C_IsAliveOrDeadFirstPersonPawn_Params params;
	params.bpp__ShooterPawnInput__pf = bpp__ShooterPawnInput__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__bThisIsAnAliveOrDeadFirstPersonPawn__pf != nullptr)
		*bpp__bThisIsAnAliveOrDeadFirstPersonPawn__pf = params.bpp__bThisIsAnAliveOrDeadFirstPersonPawn__pf;
}


// Function PawnHelpers.PawnHelpers_C.IsAliveFirstPersonPawn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterPawnInput__pf      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bThisIsAnAliveFirstPersonPawn__pf (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_IsAliveFirstPersonPawn(class AShooterCharacter* bpp__ShooterPawnInput__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bThisIsAnAliveFirstPersonPawn__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.IsAliveFirstPersonPawn");

	UPawnHelpers_C_IsAliveFirstPersonPawn_Params params;
	params.bpp__ShooterPawnInput__pf = bpp__ShooterPawnInput__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__bThisIsAnAliveFirstPersonPawn__pf != nullptr)
		*bpp__bThisIsAnAliveFirstPersonPawn__pf = params.bpp__bThisIsAnAliveFirstPersonPawn__pf;
}


// Function PawnHelpers.PawnHelpers_C.GetTeamIndexForPosts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterCharacterInputParam__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__PostScalar__pf            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_GetTeamIndexForPosts(class AShooterCharacter* bpp__ShooterCharacterInputParam__pf, class UObject* bpp____WorldContext__pf, float* bpp__PostScalar__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.GetTeamIndexForPosts");

	UPawnHelpers_C_GetTeamIndexForPosts_Params params;
	params.bpp__ShooterCharacterInputParam__pf = bpp__ShooterCharacterInputParam__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__PostScalar__pf != nullptr)
		*bpp__PostScalar__pf = params.bpp__PostScalar__pf;
}


// Function PawnHelpers.PawnHelpers_C.GetPostIndexFromPawnState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerPawn_C*           bpp__PlayerPawnInput__pf       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__PostIndiceOutput__pf      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_GetPostIndexFromPawnState(class APlayerPawn_C* bpp__PlayerPawnInput__pf, class UObject* bpp____WorldContext__pf, float* bpp__PostIndiceOutput__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.GetPostIndexFromPawnState");

	UPawnHelpers_C_GetPostIndexFromPawnState_Params params;
	params.bpp__PlayerPawnInput__pf = bpp__PlayerPawnInput__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__PostIndiceOutput__pf != nullptr)
		*bpp__PostIndiceOutput__pf = params.bpp__PostIndiceOutput__pf;
}


// Function PawnHelpers.PawnHelpers_C.ApplyStickerDataToWeapon
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class USkeletalMeshComponent*> bpp__WeaponMeshes__pf          (Parm, OutParm, ZeroConstructor)
// class UCustomStickerData*      bpp__StickerDataTouse__pf      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    bpp__MaterialsToSkip__pf       (Parm, OutParm, ZeroConstructor)
// struct FStickerUVTransforms    bpp__StickerUvTransformData__pf (Parm)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_ApplyStickerDataToWeapon(class UCustomStickerData* bpp__StickerDataTouse__pf, const struct FStickerUVTransforms& bpp__StickerUvTransformData__pf, class UObject* bpp____WorldContext__pf, TArray<class USkeletalMeshComponent*>* bpp__WeaponMeshes__pf, TArray<int>* bpp__MaterialsToSkip__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.ApplyStickerDataToWeapon");

	UPawnHelpers_C_ApplyStickerDataToWeapon_Params params;
	params.bpp__StickerDataTouse__pf = bpp__StickerDataTouse__pf;
	params.bpp__StickerUvTransformData__pf = bpp__StickerUvTransformData__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__WeaponMeshes__pf != nullptr)
		*bpp__WeaponMeshes__pf = params.bpp__WeaponMeshes__pf;
	if (bpp__MaterialsToSkip__pf != nullptr)
		*bpp__MaterialsToSkip__pf = params.bpp__MaterialsToSkip__pf;
}


// Function PawnHelpers.PawnHelpers_C.ApplyStickerDataToMaterial
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* bpp__Material__pf              (Parm, ZeroConstructor, IsPlainOldData)
// class UCustomStickerData*      bpp__StickerDataTouse__pf      (Parm, ZeroConstructor, IsPlainOldData)
// struct FStickerUVTransforms    bpp__StickerUvTransformData__pf (Parm)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPawnHelpers_C::STATIC_ApplyStickerDataToMaterial(class UMaterialInstanceDynamic* bpp__Material__pf, class UCustomStickerData* bpp__StickerDataTouse__pf, const struct FStickerUVTransforms& bpp__StickerUvTransformData__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PawnHelpers.PawnHelpers_C.ApplyStickerDataToMaterial");

	UPawnHelpers_C_ApplyStickerDataToMaterial_Params params;
	params.bpp__Material__pf = bpp__Material__pf;
	params.bpp__StickerDataTouse__pf = bpp__StickerDataTouse__pf;
	params.bpp__StickerUvTransformData__pf = bpp__StickerUvTransformData__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
