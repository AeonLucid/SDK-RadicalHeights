#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Event_BikeRace_End_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Event_BikeRace_End.Event_BikeRace_End_C.UserConstructionScript
struct AEvent_BikeRace_End_C_UserConstructionScript_Params
{
};

// Function Event_BikeRace_End.Event_BikeRace_End_C.StartCountdownTimer
struct AEvent_BikeRace_End_C_StartCountdownTimer_Params
{
};

// Function Event_BikeRace_End.Event_BikeRace_End_C.SetMyStartLocation
struct AEvent_BikeRace_End_C_SetMyStartLocation_Params
{
	class AEvent_BikeRace_Start_C*                     bpp__Start__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_BikeRace_End.Event_BikeRace_End_C.SetMyBike
struct AEvent_BikeRace_End_C_SetMyBike_Params
{
	class ABMXTest_C*                                  bpp__Bike__pf;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_BikeRace_End.Event_BikeRace_End_C.ReceiveTick
struct AEvent_BikeRace_End_C_ReceiveTick_Params
{
	float                                              bpp__DeltaSeconds__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_BikeRace_End.Event_BikeRace_End_C.ReceiveBeginPlay
struct AEvent_BikeRace_End_C_ReceiveBeginPlay_Params
{
};

// Function Event_BikeRace_End.Event_BikeRace_End_C.OrientRamp
struct AEvent_BikeRace_End_C_OrientRamp_Params
{
};

// Function Event_BikeRace_End.Event_BikeRace_End_C.ExecuteUbergraph_Event_BikeRace_End_1
struct AEvent_BikeRace_End_C_ExecuteUbergraph_Event_BikeRace_End_1_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_BikeRace_End.Event_BikeRace_End_C.BndEvt__BikeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AEvent_BikeRace_End_C_BndEvt__BikeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         bpp__OverlappedComponent__pf;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      bpp__OtherActor__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         bpp__OtherComp__pf;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                bpp__OtherBodyIndex__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bFromSweep__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  bpp__SweepResult__pf;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
