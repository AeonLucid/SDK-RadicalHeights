// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Proj_SmokeBomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_SmokeBomb.Proj_SmokeBomb_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AProj_SmokeBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SmokeBomb.Proj_SmokeBomb_C.UserConstructionScript");

	AProj_SmokeBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SmokeBomb.Proj_SmokeBomb_C.NetMulticastPlayBounceSoundAtLocation
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 bpp__Location__pf              (Parm, ZeroConstructor, IsPlainOldData)

void AProj_SmokeBomb_C::NetMulticastPlayBounceSoundAtLocation(const struct FVector& bpp__Location__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SmokeBomb.Proj_SmokeBomb_C.NetMulticastPlayBounceSoundAtLocation");

	AProj_SmokeBomb_C_NetMulticastPlayBounceSoundAtLocation_Params params;
	params.bpp__Location__pf = bpp__Location__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SmokeBomb.Proj_SmokeBomb_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              bpp__ImpactResult__pf          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 bpp__ImpactVelocity__pf        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AProj_SmokeBomb_C::BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& bpp__ImpactResult__pf, const struct FVector& bpp__ImpactVelocity__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SmokeBomb.Proj_SmokeBomb_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	AProj_SmokeBomb_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.bpp__ImpactResult__pf = bpp__ImpactResult__pf;
	params.bpp__ImpactVelocity__pf = bpp__ImpactVelocity__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
