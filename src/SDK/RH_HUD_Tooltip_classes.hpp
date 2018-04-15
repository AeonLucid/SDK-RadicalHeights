#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Tooltip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_Tooltip.HUD_Tooltip_C
// 0x0020 (0x0268 - 0x0248)
class UHUD_Tooltip_C : public UShooterTooltipWidget
{
public:
	class UTextBlock*                                  TextBlock_2;                                              // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       K2Node_Event_InText;                                      // 0x0250(0x0018) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_Tooltip.HUD_Tooltip_C");
		return ptr;
	}


	void SetText(const struct FText& bpp__InText__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
