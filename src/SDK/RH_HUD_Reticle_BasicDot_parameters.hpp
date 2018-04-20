#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Reticle_BasicDot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C.WeaponReloadStart
struct UHUD_Reticle_BasicDot_C_WeaponReloadStart_Params
{
};

// Function HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C.WeaponReloadFinished
struct UHUD_Reticle_BasicDot_C_WeaponReloadFinished_Params
{
};

// Function HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C.WeaponFired
struct UHUD_Reticle_BasicDot_C_WeaponFired_Params
{
};

// Function HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C.WeaponEquipStarted
struct UHUD_Reticle_BasicDot_C_WeaponEquipStarted_Params
{
};

// Function HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C.WeaponEquipFinished
struct UHUD_Reticle_BasicDot_C_WeaponEquipFinished_Params
{
};

// Function HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C.CrosshairColorChanged
struct UHUD_Reticle_BasicDot_C_CrosshairColorChanged_Params
{
	struct FLinearColor                                bpp__NewColor__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Reticle_BasicDot.HUD_Reticle_BasicDot_C.Construct
struct UHUD_Reticle_BasicDot_C_Construct_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
