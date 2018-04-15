#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Event_BikeRace_Start_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.UserConstructionScript
struct AEvent_BikeRace_Start_C_UserConstructionScript_Params
{
};

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.StartRace
struct AEvent_BikeRace_Start_C_StartRace_Params
{
	class AShooterCharacter*                           bpp__Interactor__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.ReceiveBeginPlay
struct AEvent_BikeRace_Start_C_ReceiveBeginPlay_Params
{
};

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.OrientBikeRack
struct AEvent_BikeRace_Start_C_OrientBikeRack_Params
{
};

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.OnRep_RaceStarted
struct AEvent_BikeRace_Start_C_OnRep_RaceStarted_Params
{
};

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.CleanupRaceObjects
struct AEvent_BikeRace_Start_C_CleanupRaceObjects_Params
{
};

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.ChooseRaceDestination
struct AEvent_BikeRace_Start_C_ChooseRaceDestination_Params
{
};

// Function Event_BikeRace_Start.Event_BikeRace_Start_C.CheckDespawn
struct AEvent_BikeRace_Start_C_CheckDespawn_Params
{
};

// DelegateFunction Event_BikeRace_Start.Event_BikeRace_Start_C.OnInteractDelegate__DelegateSignature
struct AEvent_BikeRace_Start_C_OnInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
