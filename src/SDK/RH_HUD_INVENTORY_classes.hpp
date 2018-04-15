#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_INVENTORY_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_INVENTORY.HUD_INVENTORY_C
// 0x0090 (0x0378 - 0x02E8)
class UHUD_INVENTORY_C : public UShooterInventory
{
public:
	class UWidgetAnimation*                            NoAmmo;                                                   // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            UnDimScreen;                                              // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            DimScreen;                                                // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            UnDimMenu;                                                // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            DimMenu;                                                  // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            CloseBreakoutMenu;                                        // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            OpenBreakoutMenu;                                         // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPPED_ITEM_V2_C*                     EquippedItemInfo;                                         // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPMENT_SLOTS_V2_C*                   HUD_EQUIPMENT_SLOTS_V2;                                   // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_C*                        HUD_INV_AMMOSLOTS;                                        // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_BUTTONS_C*                          HUD_INV_BUTTONS;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_PRIZESLOTS_C*                       HUD_INV_PRIZESLOTS;                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class ULetterBoxWidget*                            LetterBoxWidget_1;                                        // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_INVCARD_C*                              MenuSelection_InvCard;                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  NoAmmoText;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ScreenTintBG;                                             // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_INVCARD_SwapWith_C*                     SwapWith_InvCard;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_INVCARD_C*                              WorldPickup_InvCard;                                      // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_INVENTORY.HUD_INVENTORY_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
