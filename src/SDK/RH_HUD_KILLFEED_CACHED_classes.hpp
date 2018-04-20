#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_KILLFEED_CACHED_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_KILLFEED_CACHED.HUD_KILLFEED_CACHED_C
// 0x0010 (0x0258 - 0x0248)
class UHUD_KILLFEED_CACHED_C : public UShooterUserWidget
{
public:
	class UHUD_KillFeed2_C*                            HUDKillFeed;                                              // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget;                                      // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_KILLFEED_CACHED.HUD_KILLFEED_CACHED_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
