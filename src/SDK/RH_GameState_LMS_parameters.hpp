#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_GameState_LMS_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameState_LMS.GameState_LMS_C.UserConstructionScript
struct AGameState_LMS_C_UserConstructionScript_Params
{
};

// Function GameState_LMS.GameState_LMS_C.OnVictory
struct AGameState_LMS_C_OnVictory_Params
{
	class AShooterCharacter*                           bpp__Victor__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameState_LMS.GameState_LMS_C.OnShowdownClosureBegan
struct AGameState_LMS_C_OnShowdownClosureBegan_Params
{
};

// Function GameState_LMS.GameState_LMS_C.CashOff
struct AGameState_LMS_C_CashOff_Params
{
	class ACashDropZone_C*                             bpp__CashDropZone__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameState_LMS.GameState_LMS_C.CashAnnouncementOn
struct AGameState_LMS_C_CashAnnouncementOn_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
