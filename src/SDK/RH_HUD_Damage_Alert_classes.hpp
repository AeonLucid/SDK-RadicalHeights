#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Damage_Alert_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_Damage_Alert.HUD_Damage_Alert_C
// 0x0028 (0x0288 - 0x0260)
class UHUD_Damage_Alert_C : public UDamageAlertWidget
{
public:
	class UWidgetAnimation*                            Blink;                                                    // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                MainPanel;                                                // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      warning_glow_lower;                                       // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      warning_glow_upper;                                       // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WasPreviouslyVisible;                                     // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_Damage_Alert.HUD_Damage_Alert_C");
		return ptr;
	}


	void ExecuteUbergraph_HUD_Damage_Alert(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
