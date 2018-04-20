#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Proj_Grenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Grenade.Proj_Grenade_C.UserConstructionScript
struct AProj_Grenade_C_UserConstructionScript_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.NetMulticastPlayBounceSoundAtLocation
struct AProj_Grenade_C_NetMulticastPlayBounceSoundAtLocation_Params
{
	struct FVector                                     bpp__Location__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Grenade.Proj_Grenade_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
struct AProj_Grenade_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  bpp__ImpactResult__pf;                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     bpp__ImpactVelocity__pf;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
