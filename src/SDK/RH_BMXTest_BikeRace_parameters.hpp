#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BMXTest_BikeRace_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BMXTest_BikeRace.BMXTest_BikeRace_C.UserConstructionScript
struct ABMXTest_BikeRace_C_UserConstructionScript_Params
{
};

// Function BMXTest_BikeRace.BMXTest_BikeRace_C.ReceiveBeginPlay
struct ABMXTest_BikeRace_C_ReceiveBeginPlay_Params
{
};

// Function BMXTest_BikeRace.BMXTest_BikeRace_C.ForceStopMusic
struct ABMXTest_BikeRace_C_ForceStopMusic_Params
{
};

// Function BMXTest_BikeRace.BMXTest_BikeRace_C.BikeInteraction
struct ABMXTest_BikeRace_C_BikeInteraction_Params
{
	class AShooterCharacter*                           bpp__Interactor__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction BMXTest_BikeRace.BMXTest_BikeRace_C.OnInteractDelegate__DelegateSignature
struct ABMXTest_BikeRace_C_OnInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
