#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_RANK_WIDGET_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EOM_RANK_WIDGET.EOM_RANK_WIDGET_C
// 0x0018 (0x02B0 - 0x0298)
class UEOM_RANK_WIDGET_C : public UShooterEomRankWidget
{
public:
	class UWidgetAnimation*                            Anim_CountdownCompleted;                                  // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            Anim_SuperlativeChanged;                                  // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      EOM_RANK_BACKGROUND;                                      // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_RANK_WIDGET.EOM_RANK_WIDGET_C");
		return ptr;
	}


	void SuperlativeChanged();
	void RankCountdownComplete();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
