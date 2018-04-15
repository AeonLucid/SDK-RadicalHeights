#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_KILLCARD_WIDGET_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EOM_KILLCARD_WIDGET.EOM_KILLCARD_WIDGET_C
// 0x0020 (0x02B0 - 0x0290)
class UEOM_KILLCARD_WIDGET_C : public UShooterEomKillCardWidget
{
public:
	class UImage*                                      KILLCARD_PLAYERBACKGROUND;                                // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KILLCARD_PLAYERFRAME;                                     // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KILLCARD_PLAYERICON;                                      // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KILLCARD_WEAPONICON;                                      // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_KILLCARD_WIDGET.EOM_KILLCARD_WIDGET_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
