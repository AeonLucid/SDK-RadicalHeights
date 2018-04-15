#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_MiniMapWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MiniMapWidget.MiniMapWidget_C
// 0x0030 (0x03E8 - 0x03B8)
class UMiniMapWidget_C : public UShooterMapWidget
{
public:
	class UImage*                                      Arrow;                                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Map;                                                      // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                MapCanvas;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   MarkerLocation;                                           // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconOffset;                                               // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VisibleMapCenter;                                         // 0x03DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MiniMapWidget.MiniMapWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
