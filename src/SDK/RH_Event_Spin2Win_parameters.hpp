#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Event_Spin2Win_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Event_Spin2Win.Event_Spin2Win_C.UserConstructionScript
struct AEvent_Spin2Win_C_UserConstructionScript_Params
{
};

// Function Event_Spin2Win.Event_Spin2Win_C.Update Rotation
struct AEvent_Spin2Win_C_Update_Rotation_Params
{
	float                                              bpp__Time__pf;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_Spin2Win.Event_Spin2Win_C.SpawnPrizes
struct AEvent_Spin2Win_C_SpawnPrizes_Params
{
};

// Function Event_Spin2Win.Event_Spin2Win_C.ReceiveTick
struct AEvent_Spin2Win_C_ReceiveTick_Params
{
	float                                              bpp__DeltaSeconds__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_Spin2Win.Event_Spin2Win_C.ReceiveBeginPlay
struct AEvent_Spin2Win_C_ReceiveBeginPlay_Params
{
};

// Function Event_Spin2Win.Event_Spin2Win_C.OnRep_Wheel Spinning
struct AEvent_Spin2Win_C_OnRep_Wheel_Spinning_Params
{
};

// Function Event_Spin2Win.Event_Spin2Win_C.NetMulticastPlayPrizeFX
struct AEvent_Spin2Win_C_NetMulticastPlayPrizeFX_Params
{
	int                                                bpp__PrizeIndex__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_Spin2Win.Event_Spin2Win_C.InitializePrizeGroups
struct AEvent_Spin2Win_C_InitializePrizeGroups_Params
{
};

// Function Event_Spin2Win.Event_Spin2Win_C.ForceWheelPosition
struct AEvent_Spin2Win_C_ForceWheelPosition_Params
{
	float                                              bpp__RelativeRotation__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_Spin2Win.Event_Spin2Win_C.FlashWinner
struct AEvent_Spin2Win_C_FlashWinner_Params
{
};

// Function Event_Spin2Win.Event_Spin2Win_C.ExecuteUbergraph_Event_Spin2Win_2
struct AEvent_Spin2Win_C_ExecuteUbergraph_Event_Spin2Win_2_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Event_Spin2Win.Event_Spin2Win_C.ButtonPressed
struct AEvent_Spin2Win_C_ButtonPressed_Params
{
	class AShooterCharacter*                           bpp__Interactor__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Event_Spin2Win.Event_Spin2Win_C.OnInteractDelegate__DelegateSignature
struct AEvent_Spin2Win_C_OnInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
