#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_TEAM_WIDGET_ENTRY_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EOM_TEAM_WIDGET_ENTRY.EOM_TEAM_WIDGET_ENTRY_C
// 0x0020 (0x0288 - 0x0268)
class UEOM_TEAM_WIDGET_ENTRY_C : public UShooterEomTeamEntryWidget
{
public:
	class UTextBlock*                                  EOM_TEAMMATE_CASH;                                        // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  EOM_TEAMMATE_KILL;                                        // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  EOM_TEAMMATE_NAME;                                        // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  EOM_TEAMMATE_REV;                                         // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_TEAM_WIDGET_ENTRY.EOM_TEAM_WIDGET_ENTRY_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
