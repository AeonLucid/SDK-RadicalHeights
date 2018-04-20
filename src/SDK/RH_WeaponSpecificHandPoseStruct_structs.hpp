#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WeaponSpecificHandPoseStruct.WeaponSpecificHandPoseStruct
// 0x00F8
struct FWeaponSpecificHandPoseStruct
{
	class UAnimMontage*                                Pistol_1911_63_B9A76C1B45EA72A9857197A3BDFFC3CE;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Pistol_HiPower_64_48EB7D2F41247DF85F4EA3967A3B7A58;       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Pistol_Python_65_46FC44794831AF68586772BA81684867;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Pistol_Magnum_66_7FECA6F04D9149BCC13BAEB4F2E72C8D;        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Pistol_PPK_67_F1EE75FD418F69DF98F9ED91E169C278;           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Rifle_M16_68_928D459D4197BA97B7207EB3E04A899F;            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Rifle_AK74U_69_61A58A064C7E5173351D68AAF3A361AA;          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Rifle_AUG_70_DFBBADE245F862A71846558B7C84654C;            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Rifle_FAMAS_71_24AA545A44D7213D655D71BCB76F6992;          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Rifle_M14_72_7C72C5A64AEECE7CBBB8CAB8953A5283;            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Rifle_FAL_73_D0298E6D4DF466460C848D8AEA196B15;            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Rifle_Dragunov_74_405137604F1646AB9D1AFDBB34DE97F7;       // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Rifle_M60_75_E31CC5F749C849A8712CD98F45714F6F;            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Shotgun_SPAS_76_AB0A5B78467953990AA28995FCA3D08C;         // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Shotgun_1887_77_E94199764F9B9F51B38A3D9E567FB9AD;         // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Shotgun_SawedOff_78_CD46338B4643EB1A92D6CFA43D373B97;     // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Shotgun_Ithaca37_79_461F53694FC091D09572B49879AF750B;     // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SMG_UZI_80_B69A0BC847FE07822FD8319A1759CD38;              // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SMG_HiTec_81_A2C788014CF14A33065347AB6E34B8F8;            // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SMG_M12_82_42840E244C2064AE5F5D3E826AB00233;              // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SMG_TEC9_83_9E8E2863438A91C9C38B03958B3B6AFF;             // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_RocketLauncher_84_AA008DA242464D3B3E23FD9EFB91E744;// 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Fists_86_A49960894E6DAFF101C9CEBEB06E4A5A;                // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_MkIIGrenade_89_7867259140D200EDF2AF1C86A7A6D403;  // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_SmokeBomb_92_0C899D1047D06C9F8FA719ABB92F8147;    // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_SupplyLine_95_6A53D8844B179F3CE449D992CD96FF48;   // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_Burger_104_CFF2C86D4FEFBEF8E5BB75ACE963EDF8;      // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_DeployableCover_105_270428A64DD561892B4FE595E7BDC5F1;// 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_Bandages_106_BB18B52344039C59E4E0E98714742586;    // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_MedKit_107_EB52F39F4A39B12CF59EF8B0053CFC8A;      // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Special_InflatableDummy_110_F259B61D44B6418A38757681A0A28410;// 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
