#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_TASC_Enforcer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TASC_Enforcer.TASC_Enforcer_C.UserConstructionScript
struct ATASC_Enforcer_C_UserConstructionScript_Params
{
};

// Function TASC_Enforcer.TASC_Enforcer_C.ReceiveTick
struct ATASC_Enforcer_C_ReceiveTick_Params
{
	float                                              bpp__DeltaSeconds__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TASC_Enforcer.TASC_Enforcer_C.OnSwitchMeshPerspectives
struct ATASC_Enforcer_C_OnSwitchMeshPerspectives_Params
{
	bool                                               bpp__bThirdPerson__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TASC_Enforcer.TASC_Enforcer_C.IK_FootTrace
struct ATASC_Enforcer_C_IK_FootTrace_Params
{
	struct FName                                       bpp__SocketName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__TraceDistance__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__HitDetection__pf;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__HipOffset__pf;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__EffectorLocation__pf;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TASC_Enforcer.TASC_Enforcer_C.GroundNormalTrace
struct ATASC_Enforcer_C_GroundNormalTrace_Params
{
	struct FName                                       bpp__SocketName__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__TraceDistance__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__HitDetection__pf;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__EffectorRotation__pf;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TASC_Enforcer.TASC_Enforcer_C.GetUltimateCount
struct ATASC_Enforcer_C_GetUltimateCount_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
