#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_S_Level_Music_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function S_Level_Music.S_Level_Music_C.UserConstructionScript
struct AS_Level_Music_C_UserConstructionScript_Params
{
};

// Function S_Level_Music.S_Level_Music_C.reset_music_switch
struct AS_Level_Music_C_reset_music_switch_Params
{
};

// Function S_Level_Music.S_Level_Music_C.ReceiveTick
struct AS_Level_Music_C_ReceiveTick_Params
{
	float                                              bpp__DeltaSeconds__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S_Level_Music.S_Level_Music_C.ReceiveBeginPlay
struct AS_Level_Music_C_ReceiveBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
