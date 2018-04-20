#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ConfettiBuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConfettiBuff.ConfettiBuff_C.UserConstructionScript
struct AConfettiBuff_C_UserConstructionScript_Params
{
};

// Function ConfettiBuff.ConfettiBuff_C.ReceiveEndPlay
struct AConfettiBuff_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        bpp__EndPlayReason__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfettiBuff.ConfettiBuff_C.ReceiveBeginPlay
struct AConfettiBuff_C_ReceiveBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
