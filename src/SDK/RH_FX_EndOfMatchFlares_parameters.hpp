#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_FX_EndOfMatchFlares_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.UserConstructionScript
struct AFX_EndOfMatchFlares_C_UserConstructionScript_Params
{
};

// Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.ReceiveHit
struct AFX_EndOfMatchFlares_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         bpp__MyComp__pf;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      bpp__Other__pf;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         bpp__OtherComp__pf;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bpp__bSelfMoved__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__HitLocation__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__HitNormal__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__NormalImpulse__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  bpp__Hit__pf;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.ReceiveBeginPlay
struct AFX_EndOfMatchFlares_C_ReceiveBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
