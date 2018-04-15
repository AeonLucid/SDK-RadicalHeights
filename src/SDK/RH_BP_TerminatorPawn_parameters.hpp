#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BP_TerminatorPawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TerminatorPawn.BP_TerminatorPawn_C.UserConstructionScript
struct ABP_TerminatorPawn_C_UserConstructionScript_Params
{
};

// Function BP_TerminatorPawn.BP_TerminatorPawn_C.ReceiveTick
struct ABP_TerminatorPawn_C_ReceiveTick_Params
{
	float                                              bpp__DeltaSeconds__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TerminatorPawn.BP_TerminatorPawn_C.IK_FootTrace
struct ABP_TerminatorPawn_C_IK_FootTrace_Params
{
	struct FName                                       bpp__SocketName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__TraceDistance__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__HitDetection__pf;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__HipOffset__pf;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__EffectorLocation__pf;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TerminatorPawn.BP_TerminatorPawn_C.GroundNormalTrace
struct ABP_TerminatorPawn_C_GroundNormalTrace_Params
{
	struct FName                                       bpp__SocketName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__TraceDistance__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__HitDetection__pf;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__EffectorRotation__pf;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TerminatorPawn.BP_TerminatorPawn_C.GetUltimateCount
struct ABP_TerminatorPawn_C_GetUltimateCount_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
