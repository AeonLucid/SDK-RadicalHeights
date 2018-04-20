#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_InGameNotification_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_InGameNotification.HUD_InGameNotification_C
// 0x0018 (0x0360 - 0x0348)
class UHUD_InGameNotification_C : public UShooterInGameNotification
{
public:
	class UWidgetAnimation*                            Anim_PartyInvite;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            Anim_CustomGameInvite;                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            Anim_HostMigration;                                       // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_InGameNotification.HUD_InGameNotification_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
