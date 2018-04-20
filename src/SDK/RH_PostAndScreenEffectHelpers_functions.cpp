// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PostAndScreenEffectHelpers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraGravityEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*        bpp__CameraToAdjustGravityEffect__pf (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          bpp__GravityEffectStrength__pf (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__OriginalValues__pf        (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__Saturation__pf            (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__Contrast__pf              (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__CrushxShadows__pfT        (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__GrainxJitter__pfT         (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__GrainxIntensity__pfT      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPostAndScreenEffectHelpers_C::STATIC_SetCameraGravityEffect(class UCameraComponent* bpp__CameraToAdjustGravityEffect__pf, float bpp__GravityEffectStrength__pf, float bpp__OriginalValues__pf, float bpp__Saturation__pf, float bpp__Contrast__pf, float bpp__CrushxShadows__pfT, float bpp__GrainxJitter__pfT, float bpp__GrainxIntensity__pfT, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraGravityEffect");

	UPostAndScreenEffectHelpers_C_SetCameraGravityEffect_Params params;
	params.bpp__CameraToAdjustGravityEffect__pf = bpp__CameraToAdjustGravityEffect__pf;
	params.bpp__GravityEffectStrength__pf = bpp__GravityEffectStrength__pf;
	params.bpp__OriginalValues__pf = bpp__OriginalValues__pf;
	params.bpp__Saturation__pf = bpp__Saturation__pf;
	params.bpp__Contrast__pf = bpp__Contrast__pf;
	params.bpp__CrushxShadows__pfT = bpp__CrushxShadows__pfT;
	params.bpp__GrainxJitter__pfT = bpp__GrainxJitter__pfT;
	params.bpp__GrainxIntensity__pfT = bpp__GrainxIntensity__pfT;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*        bpp__ScreenCameraToAffect__pf  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstance*       bpp__PostEffectMaterialInstanceToAdd__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPostAndScreenEffectHelpers_C::STATIC_SetCameraEffect(class UCameraComponent* bpp__ScreenCameraToAffect__pf, class UMaterialInstance* bpp__PostEffectMaterialInstanceToAdd__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraEffect");

	UPostAndScreenEffectHelpers_C_SetCameraEffect_Params params;
	params.bpp__ScreenCameraToAffect__pf = bpp__ScreenCameraToAffect__pf;
	params.bpp__PostEffectMaterialInstanceToAdd__pf = bpp__PostEffectMaterialInstanceToAdd__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraChromaticAberration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*        bpp__CameraToAdjustChromaticAberrationOf__pf (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          bpp__ChromaticAberrationStrength__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPostAndScreenEffectHelpers_C::STATIC_SetCameraChromaticAberration(class UCameraComponent* bpp__CameraToAdjustChromaticAberrationOf__pf, float bpp__ChromaticAberrationStrength__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraChromaticAberration");

	UPostAndScreenEffectHelpers_C_SetCameraChromaticAberration_Params params;
	params.bpp__CameraToAdjustChromaticAberrationOf__pf = bpp__CameraToAdjustChromaticAberrationOf__pf;
	params.bpp__ChromaticAberrationStrength__pf = bpp__ChromaticAberrationStrength__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.RemoveCameraEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*        bpp__ScreenCameraToAffect__pf  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstance*       bpp__PostEffectMaterialInstanceToRemove__pf (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPostAndScreenEffectHelpers_C::STATIC_RemoveCameraEffect(class UCameraComponent* bpp__ScreenCameraToAffect__pf, class UMaterialInstance* bpp__PostEffectMaterialInstanceToRemove__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.RemoveCameraEffect");

	UPostAndScreenEffectHelpers_C_RemoveCameraEffect_Params params;
	params.bpp__ScreenCameraToAffect__pf = bpp__ScreenCameraToAffect__pf;
	params.bpp__PostEffectMaterialInstanceToRemove__pf = bpp__PostEffectMaterialInstanceToRemove__pf;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.BruteUltimateAvailableEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       bpp__ShooterxCharacterxReference__pfTT (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsxEffectxAvailablex__pfTTzy (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPostAndScreenEffectHelpers_C::STATIC_BruteUltimateAvailableEffect(class AShooterCharacter* bpp__ShooterxCharacterxReference__pfTT, bool bpp__IsxEffectxAvailablex__pfTTzy, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.BruteUltimateAvailableEffect");

	UPostAndScreenEffectHelpers_C_BruteUltimateAvailableEffect_Params params;
	params.bpp__ShooterxCharacterxReference__pfTT = bpp__ShooterxCharacterxReference__pfTT;
	params.bpp__IsxEffectxAvailablex__pfTTzy = bpp__IsxEffectxAvailablex__pfTTzy;
	params.bpp____WorldContext__pf = bpp____WorldContext__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.AdjustForScopeView
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*        bpp__CameraToAdjustForScopeView__pf (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bpp__IsEnteringScopeView__pf   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 bpp____WorldContext__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UPostAndScreenEffectHelpers_C::STATIC_AdjustForScopeView(class UCameraComponent* bpp__CameraToAdjustForScopeView__pf, bool bpp__IsEnteringScopeView__pf, class UObject* bpp____WorldContext__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.AdjustForScopeView");

	UPostAndScreenEffectHelpers_C_AdjustForScopeView_Params params;
	params.bpp__CameraToAdjustForScopeView__pf = bpp__CameraToAdjustForScopeView__pf;
	params.bpp__IsEnteringScopeView__pf = bpp__IsEnteringScopeView__pf;
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
