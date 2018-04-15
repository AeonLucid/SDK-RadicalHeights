#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BKPAppSettings.AppSettingsStruct
// 0x000C
struct FAppSettingsStruct
{
	uint32_t                                           LOBBY_MAX_BOTS;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DEATH_TAX;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WINNER_CASH_MULTIPLIER;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
