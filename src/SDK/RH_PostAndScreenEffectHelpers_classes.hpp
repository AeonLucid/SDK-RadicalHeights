#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PostAndScreenEffectHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UPostAndScreenEffectHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass PostAndScreenEffectHelpers.PostAndScreenEffectHelpers_C");
		return ptr;
	}


	void STATIC_SetCameraGravityEffect(class UCameraComponent* bpp__CameraToAdjustGravityEffect__pf, float bpp__GravityEffectStrength__pf, float bpp__OriginalValues__pf, float bpp__Saturation__pf, float bpp__Contrast__pf, float bpp__CrushxShadows__pfT, float bpp__GrainxJitter__pfT, float bpp__GrainxIntensity__pfT, class UObject* bpp____WorldContext__pf);
	void STATIC_SetCameraEffect(class UCameraComponent* bpp__ScreenCameraToAffect__pf, class UMaterialInstance* bpp__PostEffectMaterialInstanceToAdd__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_SetCameraChromaticAberration(class UCameraComponent* bpp__CameraToAdjustChromaticAberrationOf__pf, float bpp__ChromaticAberrationStrength__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_RemoveCameraEffect(class UCameraComponent* bpp__ScreenCameraToAffect__pf, class UMaterialInstance* bpp__PostEffectMaterialInstanceToRemove__pf, class UObject* bpp____WorldContext__pf);
	void STATIC_BruteUltimateAvailableEffect(class AShooterCharacter* bpp__ShooterxCharacterxReference__pfTT, bool bpp__IsxEffectxAvailablex__pfTTzy, class UObject* bpp____WorldContext__pf);
	void STATIC_AdjustForScopeView(class UCameraComponent* bpp__CameraToAdjustForScopeView__pf, bool bpp__IsEnteringScopeView__pf, class UObject* bpp____WorldContext__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
