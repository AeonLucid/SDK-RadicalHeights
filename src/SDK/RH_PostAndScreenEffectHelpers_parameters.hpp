#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PostAndScreenEffectHelpers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraGravityEffect
struct UPostAndScreenEffectHelpers_C_SetCameraGravityEffect_Params
{
	class UCameraComponent*                            bpp__CameraToAdjustGravityEffect__pf;                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              bpp__GravityEffectStrength__pf;                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__OriginalValues__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__Saturation__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__Contrast__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__CrushxShadows__pfT;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__GrainxJitter__pfT;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__GrainxIntensity__pfT;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraEffect
struct UPostAndScreenEffectHelpers_C_SetCameraEffect_Params
{
	class UCameraComponent*                            bpp__ScreenCameraToAffect__pf;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstance*                           bpp__PostEffectMaterialInstanceToAdd__pf;                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.SetCameraChromaticAberration
struct UPostAndScreenEffectHelpers_C_SetCameraChromaticAberration_Params
{
	class UCameraComponent*                            bpp__CameraToAdjustChromaticAberrationOf__pf;             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              bpp__ChromaticAberrationStrength__pf;                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.RemoveCameraEffect
struct UPostAndScreenEffectHelpers_C_RemoveCameraEffect_Params
{
	class UCameraComponent*                            bpp__ScreenCameraToAffect__pf;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstance*                           bpp__PostEffectMaterialInstanceToRemove__pf;              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.BruteUltimateAvailableEffect
struct UPostAndScreenEffectHelpers_C_BruteUltimateAvailableEffect_Params
{
	class AShooterCharacter*                           bpp__ShooterxCharacterxReference__pfTT;                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__IsxEffectxAvailablex__pfTTzy;                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C.AdjustForScopeView
struct UPostAndScreenEffectHelpers_C_AdjustForScopeView_Params
{
	class UCameraComponent*                            bpp__CameraToAdjustForScopeView__pf;                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bpp__IsEnteringScopeView__pf;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     bpp____WorldContext__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
