#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ScoreDebugWIdget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass ScoreDebugWIdget.ScoreDebugWIdget_C
// 0x0020 (0x0298 - 0x0278)
class UScoreDebugWIdget_C : public UShooterScoreDebugWidget
{
public:
	class UImage*                                      Image_1;                                                  // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UVerticalBox*                                List;                                                     // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                MainPanel;                                                // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UScoreDebugMsg_C*                            ScoreDebugMsg;                                            // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ScoreDebugWIdget.ScoreDebugWIdget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
