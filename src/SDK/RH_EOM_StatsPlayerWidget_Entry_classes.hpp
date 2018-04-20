#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_StatsPlayerWidget_Entry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EOM_StatsPlayerWidget_Entry.EOM_StatsPlayerWidget_Entry_C
// 0x00A0 (0x0320 - 0x0280)
class UEOM_StatsPlayerWidget_Entry_C : public UShooterEOMStatsEntryWidget
{
public:
	class UWidgetSwitcher*                             EOM_STATS_SIGN_SWITCHER;                                  // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET
	struct FSlateBrush                                 NewVar_1;                                                 // 0x0290(0x0090) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_StatsPlayerWidget_Entry.EOM_StatsPlayerWidget_Entry_C");
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
