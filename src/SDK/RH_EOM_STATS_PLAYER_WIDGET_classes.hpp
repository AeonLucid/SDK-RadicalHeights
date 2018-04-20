#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_STATS_PLAYER_WIDGET_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EOM_STATS_PLAYER_WIDGET.EOM_STATS_PLAYER_WIDGET_C
// 0x00D8 (0x0360 - 0x0288)
class UEOM_STATS_PLAYER_WIDGET_C : public UShooterEomStatsWidget
{
public:
	class UEOM_StatsPlayerWidget_Entry_C*              EOM_Stats_Assists;                                        // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_StatsPlayerWidget_Entry_C*              EOM_STATS_BOOST;                                          // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_StatsPlayerWidget_Entry_C*              EOM_STATS_CASH;                                           // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_StatsPlayerWidget_Entry_C*              EOM_STATS_DEATHTAX;                                       // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_StatsPlayerWidget_Entry_C*              EOM_STATS_KILLS;                                          // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_StatsPlayerWidget_Entry_C*              EOM_STATS_SUBTOTAL;                                       // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_StatsPlayerWidget_Entry_C*              EOM_STATS_TOTAL;                                          // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_StatsPlayerWidget_Entry_C*              EOM_STATS_WINNER_BONUS;                                   // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FSlateBrush                                 NewVar_1;                                                 // 0x02D0(0x0090) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_STATS_PLAYER_WIDGET.EOM_STATS_PLAYER_WIDGET_C");
		return ptr;
	}


	void GetBrush_3();
	struct FSlateBrush GetBrush_2();
	void GetBrush_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
