#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_SQUAD_MARKER_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_SQUAD_MARKER.HUD_SQUAD_MARKER_C
// 0x0008 (0x0250 - 0x0248)
class UHUD_SQUAD_MARKER_C : public UShooterUserWidget
{
public:
	class UImage*                                      HUD_SQUAD_MARKER_ICON;                                    // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_SQUAD_MARKER.HUD_SQUAD_MARKER_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
