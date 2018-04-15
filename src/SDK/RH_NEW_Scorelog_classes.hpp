#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_NEW_Scorelog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass NEW_Scorelog.NEW_Scorelog_C
// 0x0030 (0x0360 - 0x0330)
class UNEW_Scorelog_C : public UShooterScoreLogWidget
{
public:
	class UNEW_Score_Template_C*                       _0;                                                       // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UNEW_Score_Template_C*                       _1;                                                       // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UNEW_Score_Template_C*                       _2;                                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UNEW_Score_Template_C*                       _3;                                                       // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UNEW_Score_Template_C*                       _4;                                                       // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UNEW_Score_Template_C*                       Default;                                                  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass NEW_Scorelog.NEW_Scorelog_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
