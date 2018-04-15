#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Proj_SmokeBomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_SmokeBomb.Proj_SmokeBomb_C.UserConstructionScript
struct AProj_SmokeBomb_C_UserConstructionScript_Params
{
};

// Function Proj_SmokeBomb.Proj_SmokeBomb_C.NetMulticastPlayBounceSoundAtLocation
struct AProj_SmokeBomb_C_NetMulticastPlayBounceSoundAtLocation_Params
{
	struct FVector                                     bpp__Location__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_SmokeBomb.Proj_SmokeBomb_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
struct AProj_SmokeBomb_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  bpp__ImpactResult__pf;                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     bpp__ImpactVelocity__pf;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
