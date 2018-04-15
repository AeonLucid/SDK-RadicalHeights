// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_TASC_Enforcer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TASC_Enforcer.TASC_Enforcer_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ATASC_Enforcer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TASC_Enforcer.TASC_Enforcer_C.UserConstructionScript");

	ATASC_Enforcer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TASC_Enforcer.TASC_Enforcer_C.ReceiveTick
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void ATASC_Enforcer_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function TASC_Enforcer.TASC_Enforcer_C.ReceiveTick");

	ATASC_Enforcer_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TASC_Enforcer.TASC_Enforcer_C.OnSwitchMeshPerspectives
// (Final, Native, Event, Public)
// Parameters:
// bool                           bpp__bThirdPerson__pf          (Parm, ZeroConstructor, IsPlainOldData)

void ATASC_Enforcer_C::OnSwitchMeshPerspectives(bool bpp__bThirdPerson__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function TASC_Enforcer.TASC_Enforcer_C.OnSwitchMeshPerspectives");

	ATASC_Enforcer_C_OnSwitchMeshPerspectives_Params params;
	params.bpp__bThirdPerson__pf = bpp__bThirdPerson__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TASC_Enforcer.TASC_Enforcer_C.IK_FootTrace
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   bpp__SocketName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__TraceDistance__pf         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__HitDetection__pf          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          bpp__HipOffset__pf             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__EffectorLocation__pf      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATASC_Enforcer_C::IK_FootTrace(const struct FName& bpp__SocketName__pf, float bpp__TraceDistance__pf, bool* bpp__HitDetection__pf, float* bpp__HipOffset__pf, struct FVector* bpp__EffectorLocation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function TASC_Enforcer.TASC_Enforcer_C.IK_FootTrace");

	ATASC_Enforcer_C_IK_FootTrace_Params params;
	params.bpp__SocketName__pf = bpp__SocketName__pf;
	params.bpp__TraceDistance__pf = bpp__TraceDistance__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__HitDetection__pf != nullptr)
		*bpp__HitDetection__pf = params.bpp__HitDetection__pf;
	if (bpp__HipOffset__pf != nullptr)
		*bpp__HipOffset__pf = params.bpp__HipOffset__pf;
	if (bpp__EffectorLocation__pf != nullptr)
		*bpp__EffectorLocation__pf = params.bpp__EffectorLocation__pf;
}


// Function TASC_Enforcer.TASC_Enforcer_C.GroundNormalTrace
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   bpp__SocketName__pf            (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__TraceDistance__pf         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__HitDetection__pf          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__EffectorRotation__pf      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATASC_Enforcer_C::GroundNormalTrace(const struct FName& bpp__SocketName__pf, float bpp__TraceDistance__pf, bool* bpp__HitDetection__pf, struct FVector* bpp__EffectorRotation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function TASC_Enforcer.TASC_Enforcer_C.GroundNormalTrace");

	ATASC_Enforcer_C_GroundNormalTrace_Params params;
	params.bpp__SocketName__pf = bpp__SocketName__pf;
	params.bpp__TraceDistance__pf = bpp__TraceDistance__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__HitDetection__pf != nullptr)
		*bpp__HitDetection__pf = params.bpp__HitDetection__pf;
	if (bpp__EffectorRotation__pf != nullptr)
		*bpp__EffectorRotation__pf = params.bpp__EffectorRotation__pf;
}


// Function TASC_Enforcer.TASC_Enforcer_C.GetUltimateCount
// (Native, Public, BlueprintCallable)

void ATASC_Enforcer_C::GetUltimateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TASC_Enforcer.TASC_Enforcer_C.GetUltimateCount");

	ATASC_Enforcer_C_GetUltimateCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
