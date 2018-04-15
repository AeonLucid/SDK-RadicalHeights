#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ScoreDebugMsg_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass ScoreDebugMsg.ScoreDebugMsg_C
// 0x0008 (0x0250 - 0x0248)
class UScoreDebugMsg_C : public UShooterScoreDebugWidgetMessage
{
public:
	class UTextBlock*                                  TextField;                                                // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ScoreDebugMsg.ScoreDebugMsg_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
