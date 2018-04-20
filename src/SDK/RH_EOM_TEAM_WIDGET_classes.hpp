#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_TEAM_WIDGET_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EOM_TEAM_WIDGET.EOM_TEAM_WIDGET_C
// 0x0000 (0x0258 - 0x0258)
class UEOM_TEAM_WIDGET_C : public UShooterEomTeamWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_TEAM_WIDGET.EOM_TEAM_WIDGET_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
