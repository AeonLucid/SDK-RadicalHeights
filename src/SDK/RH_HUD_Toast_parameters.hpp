#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Toast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Toast.HUD_Toast_C.ExecuteUbergraph_HUD_Toast_1
struct UHUD_Toast_C_ExecuteUbergraph_HUD_Toast_1_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Toast.HUD_Toast_C.Construct
struct UHUD_Toast_C_Construct_Params
{
};

// Function HUD_Toast.HUD_Toast_C.BPToastMessage
struct UHUD_Toast_C_BPToastMessage_Params
{
	struct FText                                       bpp__ToastDescription__pf;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       bpp__ToastLabel__pf;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       bpp__FlairText1__pf;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       bpp__FlairText2__pf;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  bpp__AchievementImage__pf__const;                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Toast.HUD_Toast_C.BPHideToast
struct UHUD_Toast_C_BPHideToast_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
