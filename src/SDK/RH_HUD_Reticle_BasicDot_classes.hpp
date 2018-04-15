#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Reticle_BasicDot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C
// 0x0018 (0x0260 - 0x0248)
class UHUD_Reticle_BasicDot_C : public UShooterCrosshairWidget
{
public:
	class UImage*                                      bg_center_pip;                                            // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                K2Node_Event_NewColor;                                    // 0x0250(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C");
		return ptr;
	}


	void WeaponReloadStart();
	void WeaponReloadFinished();
	void WeaponFired();
	void WeaponEquipStarted();
	void WeaponEquipFinished();
	void CrosshairColorChanged(const struct FLinearColor& bpp__NewColor__pf);
	void Construct();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
