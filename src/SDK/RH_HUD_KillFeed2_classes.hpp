#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_KillFeed2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_KillFeed2.HUD_KillFeed2_C
// 0x0010 (0x02D0 - 0x02C0)
class UHUD_KillFeed2_C : public UShooterKillFeed
{
public:
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MsgIndex;                                                 // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_KillFeed2.HUD_KillFeed2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
