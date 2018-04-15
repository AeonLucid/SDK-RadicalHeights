#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_MainMapWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MainMapWidget.MainMapWidget_C
// 0x0030 (0x03E8 - 0x03B8)
class UMainMapWidget_C : public UShooterMapWidget
{
public:
	class UImage*                                      Arrow;                                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class ULetterBoxWidget*                            LetterBoxWidget_1;                                        // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Map;                                                      // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UBorder*                                     MapBorder;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                MapCanvas;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      MapReticle;                                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainMapWidget.MainMapWidget_C");
		return ptr;
	}


	void Construct();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
