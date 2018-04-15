#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ProjRocket_RocketLauncherLClient_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjRocket_RocketLauncherLClient.ProjRocket_RocketLauncherLClient_C.UserConstructionScript
struct AProjRocket_RocketLauncherLClient_C_UserConstructionScript_Params
{
};

// Function ProjRocket_RocketLauncherLClient.ProjRocket_RocketLauncherLClient_C.ReceiveBeginPlay
struct AProjRocket_RocketLauncherLClient_C_ReceiveBeginPlay_Params
{
};

// Function ProjRocket_RocketLauncherLClient.ProjRocket_RocketLauncherLClient_C.OnTakeAnyDamage_Event
struct AProjRocket_RocketLauncherLClient_C_OnTakeAnyDamage_Event_Params
{
	class AActor*                                      bpp__DamagedActor__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__Damage__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 bpp__DamageType__pf__const;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 bpp__InstigatedBy__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      bpp__DamageCauser__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
