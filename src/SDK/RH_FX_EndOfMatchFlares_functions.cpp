// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_FX_EndOfMatchFlares_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AFX_EndOfMatchFlares_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.UserConstructionScript");

	AFX_EndOfMatchFlares_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.ReceiveHit
// (Final, Native, Event, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     bpp__MyComp__pf                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  bpp__Other__pf                 (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     bpp__OtherComp__pf             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bpp__bSelfMoved__pf            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__HitLocation__pf           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__HitNormal__pf             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__NormalImpulse__pf         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              bpp__Hit__pf                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFX_EndOfMatchFlares_C::ReceiveHit(class UPrimitiveComponent* bpp__MyComp__pf, class AActor* bpp__Other__pf, class UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, const struct FVector& bpp__HitLocation__pf, const struct FVector& bpp__HitNormal__pf, const struct FVector& bpp__NormalImpulse__pf, const struct FHitResult& bpp__Hit__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.ReceiveHit");

	AFX_EndOfMatchFlares_C_ReceiveHit_Params params;
	params.bpp__MyComp__pf = bpp__MyComp__pf;
	params.bpp__Other__pf = bpp__Other__pf;
	params.bpp__OtherComp__pf = bpp__OtherComp__pf;
	params.bpp__bSelfMoved__pf = bpp__bSelfMoved__pf;
	params.bpp__HitLocation__pf = bpp__HitLocation__pf;
	params.bpp__HitNormal__pf = bpp__HitNormal__pf;
	params.bpp__NormalImpulse__pf = bpp__NormalImpulse__pf;
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void AFX_EndOfMatchFlares_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FX_EndOfMatchFlares.FX_EndOfMatchFlares_C.ReceiveBeginPlay");

	AFX_EndOfMatchFlares_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
