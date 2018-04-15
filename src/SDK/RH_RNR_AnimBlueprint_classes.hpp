#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_RNR_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass RNR_AnimBlueprint.RnR_AnimBlueprint_C
// 0xDB80 (0xE010 - 0x0490)
class URnR_AnimBlueprint_C : public UShooterCharacterAnimInstance
{
public:
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B5F5CA944ECF5F2321921FB295C83B05;    // 0x0490(0x0150)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_C48111B0499F571C956C25A1907D8C0B;    // 0x05E0(0x00F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_67C60E2948AC22D7F9917B8C9BEDD72A;// 0x06D0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7BDDBC6B4048DD696879098CCA1A224A;// 0x0718(0x00A8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_CB0937954863F7959354AE8CA7CEB898;    // 0x07C0(0x0150)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8F68BB904649C2C799F3AEB4E9D45170;// 0x0910(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B5441B8F487D1C3C4939338D6F803592;// 0x0990(0x0080)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_01E6E572401B2AA8A8E32F9F2355F60D;// 0x0A10(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EC800D4A47636FA21BE38B9D83C21258;// 0x0A70(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6FA766AA45764F869401A99D9B292045;// 0x0B20(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AF148EE24EBCE51471E424A60A2E5DD4;// 0x0B68(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_47DBEB414F374AB8A43DB49107BC8000;// 0x0BB0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_607613144AED3CB410492FBD379BA112;// 0x0C60(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10590D5D4C4FD8D0B474C6933637767A;// 0x0D10(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92BD78144BB1B73387B7439EBEDB72CD;// 0x0D80(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88156EBD49579761E6E510AD90F8647D;// 0x0DF0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7083CF84D9FF7D40825EDB32D813EDD;// 0x0E60(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5ED7938B491850AEF7B7CF9160C652D6;// 0x0ED0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F122658D470C359D1ACF038D59D872B3;// 0x0F40(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E9966960449C1F344E73C68C135AE98D2;// 0x0FB0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE33E15C42333DA4C1DD93B405DEB3252;// 0x1080(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_154D6BB44FE9E7B2306DD4AE80BBF92E2;// 0x10F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_984EC9114320F7FDC7D0489BE2BBA2A02;// 0x1160(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C6B2EF824DD1153224B006850887086B2;// 0x11D0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E85997B8451E0132B2DC6CB3411C0D572;// 0x12A0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F4FAD284B6ADBDC8DEB64AEEA1D6E032;// 0x1370(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_837957804C6E6078D8DA12B05EE3134A2;// 0x13E0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46411DC14343BF591646A1BE4E3B4FA32;// 0x14B0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17022D16438B8A381436898B180D96152;// 0x1580(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C98640C49A582D8D90364B15E6B54F82;// 0x15F0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_360C6ECD42782427693A6DBAD63947FA2;// 0x1660(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30DF6D28425E25D794474294126E8C1F2;// 0x1730(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5808426D4BEEFD24218A58AB0A3BF15F2;// 0x17A0(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B3C38D34576F66BBFAE0EA365D84F6B3;// 0x1880(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D1A9D094AFDB59FE67D719DE18AA4C7;// 0x18C8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C379A484C6C5F89FBA3948B4453BA15;// 0x1938(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_41BB274A42A692CBEFF0F2B2C0473DC2;// 0x19A8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7198CC46451AC61F70E88EB13A207633;// 0x1A78(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25333FF448FBF7A710683DB8659793EF;// 0x1AE8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0ED84D2E41B4C6E9279E37B012534B75;// 0x1B58(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_02B78D734C3D154F3181C18B34A9472B;// 0x1C28(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B3C38D34576F66BBFAE0EA365D84F6B2;// 0x1CF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FDF8B5A8460DFC9090DC9891CD64FBE3;// 0x1D40(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E9966960449C1F344E73C68C135AE98D;// 0x1DB0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE33E15C42333DA4C1DD93B405DEB325;// 0x1E80(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_154D6BB44FE9E7B2306DD4AE80BBF92E;// 0x1EF0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_984EC9114320F7FDC7D0489BE2BBA2A0;// 0x1F60(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1CAC533840E15F0068F42C8718A942C3;// 0x1FD0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C6B2EF824DD1153224B006850887086B;// 0x2040(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D70B4D3429122413C27A9BB843055B0;// 0x2110(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E85997B8451E0132B2DC6CB3411C0D57;// 0x2180(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F4FAD284B6ADBDC8DEB64AEEA1D6E03;// 0x2250(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8989F9E54B63BF93DB7ED0B25D450902;// 0x22C0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_837957804C6E6078D8DA12B05EE3134A;// 0x2330(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76112A26411AFEBEE547B7A3FC5A0C56;// 0x2400(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46411DC14343BF591646A1BE4E3B4FA3;// 0x2470(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17022D16438B8A381436898B180D9615;// 0x2540(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C98640C49A582D8D90364B15E6B54F8;// 0x25B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B4823534AE2C4380E002EB6A327DBB0;// 0x2620(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_360C6ECD42782427693A6DBAD63947FA;// 0x2690(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30DF6D28425E25D794474294126E8C1F;// 0x2760(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5808426D4BEEFD24218A58AB0A3BF15F;// 0x27D0(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B3C38D34576F66BBFAE0EA365D84F6B;// 0x28B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1EAF988244B3024487A8738AD52A16A5;// 0x28F8(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9333EC734C3A3C43E2D3E78D1C4EC6F5;// 0x29D0(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3E2B218E4B4F825848B881BE5D52D55F;// 0x2A70(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_441CBD784BFF61C576187CAD268313F9;// 0x2B18(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2FF8320F42442959AF1EB18AF71E505E;// 0x2B68(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EAB85495409718A44627F9BB9C33867C;// 0x2BB0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4B2BEF4F4870469C9183A1A468B10DD7;// 0x2C58(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1DDFCD2449AD29B0598CDF85921ACC16;// 0x2CA8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0280C37A4D906BA9564774BBB89F246A;// 0x2CF8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DFD544A1442D3773F98DBCB1545968E3;// 0x2D48(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_03954423497090FC05E3998C3A591329;// 0x2DF8(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EE08EE2C438A3B1A4E7597890BBE874E;// 0x2E98(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_64C7A69249B5DC309A25559551F56771;      // 0x2F40(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_301BEA0241E70A5B6658F085ADFAD9E5;// 0x2FA0(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_43FA1D6648450BCEB8FDFBAE00700C9A;  // 0x2FE8(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CBEE6B594790A2B9E07FA28EEB4E97B3;// 0x3080(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EC6951A3422C7521F0786EAF1AE531D6;// 0x30C8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_714F78C7406E9BCFC30E5AAE7578C495;// 0x3178(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D2F483C497A3D54A6761C9FA0824886;// 0x3220(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C6F2BA124B0FD08415C9BD9CF6758364;// 0x3270(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1C4C36AA4CFD0859CC1379B14CEA2A9A;// 0x3310(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A043190B4A57884BD1D039A6D7096894;// 0x3360(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_688EC98D4F2E404497137EA7EDEB41C5;// 0x33D0(0x0078)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3448(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B7DC67E45A31EA3895D7EAD0C6745443;// 0x3450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E13F6AC44234413A35154092B3ED3ED33;// 0x34D0(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3DC23B63430BA76E0156DC90E9EA8576;// 0x3550(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ECE418C435D004E0A6875A1935426FD8;// 0x3670(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC694A644EE5EB076B6A7E8E4A24E882;// 0x36B8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ECE418C435D004E0A6875A1935426FD7;// 0x3728(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B0A68E564F15B15273E90990B0C18E9A;// 0x3770(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FB5BA1B44D5E9206F100BE9E179C6A89;      // 0x3848(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1F46BEE64842ECE3C2F5F9BA1F325B31;      // 0x38A8(0x0060)
	unsigned char                                      UnknownData01[0x8];                                       // 0x3908(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_1CBECA80454BE430A2464FA923E6699E;    // 0x3910(0x00F0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_952CC546406F4B2E04510D8E13A23907;    // 0x3A00(0x00F0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_07EEAA464434338827A348A0CD1B55D7;    // 0x3AF0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D23865B2452721A7706F4B9A0B535F91;  // 0x3BE0(0x0098)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BA80DF7044B288EC1AA661BEA719D6A6;// 0x3C78(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_247075714A01F9C04EFE0C8DABBA2039;// 0x3D20(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94C091C94AB32DED0DE134BA91E4FE52;// 0x3D70(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AFD7D32A492EA7028BB08B9991D34F4A;      // 0x3DE0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_52F5D1254507D2FCDB31799D28A6A40B;// 0x3E40(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9BC18D764711764D5A0E6B9BDCD268A2;// 0x3EE8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4C8EEE854E85D90B71F587826CF29252;// 0x3F38(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_98E4E7D0429F648384BA95AF8F948933;// 0x3FD8(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2CEC834845F3CC2DFC9AA389A5BFA6C7;// 0x4028(0x00E0)
	unsigned char                                      UnknownData02[0x8];                                       // 0x4108(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ADAAC197417A2121C75FB6968FC1F5B8;// 0x4110(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA24786A43A6CAAFE117A383FCF014FE;// 0x4190(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44957CBB4E1C0D7D1E6B01BBDE7CAC53;// 0x4210(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B7DC67E45A31EA3895D7EAD0C6745442;// 0x4290(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6709447543ED8546080D37BA6EC72FEE;// 0x4310(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D28CCDB6444B575C3AA8248CAE7FAA87;// 0x4390(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBC8E82D4140CB08E0742DAD6308AC91;// 0x4410(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_289120A64BC6421F29D5F5AFAD394723;// 0x4490(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E13F6AC44234413A35154092B3ED3ED32;// 0x4510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F7F270045C31F781B58B39F2FD98281;// 0x4590(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E441E3A44DCC95052B3AD4B9B647B01C;// 0x4610(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B15D220D46ED2417D42E16962C6EA9D2;// 0x4690(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_279D68B34451A9D3F009A2ABADFC200C;// 0x4700(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5903B9D749E04CDAE0C32DA966CE5FB1;// 0x4748(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B72BD1A744E01F9A1E75C4817E609062;// 0x4868(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AF4517BF46405E90C3F9D792295BD4D5;// 0x4988(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1185DE5648DFC1ACBFB135926F2793B0;// 0x4A58(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0946F56D4B2DBFC7FEA42591C7552902;// 0x4B78(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2E7614F14A9B0F295B8801AF7CC28D91;// 0x4C48(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0174D41246F89A6DC7F3DD8F9C5A60EC;// 0x4D68(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_99247A3A41FB16BC555464B912CF6F27;// 0x4E88(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D1FBC64F4E83B6443E41E0BA3264BA57;// 0x4F68(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32BD1FD04AA80439EF67398ED13CFB80;// 0x5088(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ECE418C435D004E0A6875A1935426FD6;// 0x5158(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D1D6DD094B2FF31DF36955AB4FEDD444;// 0x51A0(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CC41F4304DC3E97CDB1AD392B1139646;// 0x52C0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_15D62AAA4F2B7B14140926B5B0093F8D;// 0x5390(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ECE418C435D004E0A6875A1935426FD5;// 0x54B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68C14905464BE9DFD5338595B33E5DE8;// 0x54F8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3BBD04884883CE713C6E92BD45188373;// 0x5568(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3BA9CFC24EF126475E9DA4BE9E311B0E;// 0x5648(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_355F4155422DA62FB5205986ACA4248E;// 0x56B8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ECE418C435D004E0A6875A1935426FD4;// 0x5728(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7DEBE1BC48C99ACD550955928B0F6BA8;// 0x5770(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A229C13D4E0AE797A0CE35B7AC50A74D;      // 0x5848(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9525C5BA4867599DA81032B6E7DCC959;      // 0x58A8(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FBED063A47C7DD8BD1EF1BA2709F0332;// 0x5908(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_10F43F7E4F90278E13E980BDA76CD777;// 0x59A8(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B957972043C8D91B21FB2E9D1399D2A2;// 0x5A20(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F1D4FFBC47BE8C3A3ACD43BCAC8ACB96;// 0x5AF0(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0B8F1980499477FA571DA892DA4E3BAC;// 0x5B98(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10F139D0462A6436A48B6BBE48BB8E74;// 0x5C40(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89F9678E437002FADAB16289303E611E;// 0x5C90(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B426496840F477617362BF90D48782F5;      // 0x5CE0(0x0060)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D555F3DF496168187AF5D3827ED776C6;// 0x5D40(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7FE038744F9BCAF8D1ED5FA3F899A965;// 0x5E20(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF36CFF44A7937272106CF87ABE9CA2D;// 0x5E90(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2BD92321484A027C617866A17AC88B2E;// 0x5F00(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD0E0706454FA8AA96BD48AD543BBB6B;// 0x5F70(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_B14A2CD54E0E3DFD3EDFDBA0B01CF517;// 0x5FE0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_516DCC424C88E2204AB7A58BA15DE157;// 0x60C0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2D0F300C41A2B2B8DCCC53B9DAEF1987;// 0x6130(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6577CBE84C32D1848A72C1BE3EEB3EB8;// 0x6180(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4C40C458441E3480DCADD2BC7909A25B;      // 0x61D0(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C93FFC6E411E229B9E0374B6138943B3;// 0x6230(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CEB0CBCD4A435254EF941E93653C67DD;// 0x62D0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2E1E9CAA42EA789F6713459250D08BC4;// 0x6320(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_446175364829E8EF63D3F9AA171634AD;// 0x6370(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CE1B056D4B4B8390002FFF9CCAC2D535;// 0x6418(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_08D6150745ACD5B2C7ED439D76EA8054;      // 0x6468(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4EFE0387409A2305906BF39A0EBA0113;// 0x64C8(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_901ECEE6475A8E01451C3490363B09F8;// 0x6568(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7321220644A6C579F1C2EE884145F059;// 0x6610(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85A2D4004A1690747DA042B178D81A59;// 0x6660(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2B02196B42DC9655A9CD8CA87C07FBD0;// 0x66B0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8F51B8FC4540568AEBB352B7516AFA8E;// 0x6760(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F5CC4FFC44FABBC673F37EB67A137E43;// 0x67A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1E4466D04355C9B19FA167A68A0BBA2D;      // 0x67F0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5543A57B46E0E2B3D47858B511A6E5D6;// 0x6850(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_516302314122341484A437B14233A70B;// 0x68F8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_776FAF1B43412194CABD3EB4257267FD;// 0x6948(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4CF1FA7549DCFCFBD8179CA8BC7EF3DA;// 0x6990(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_43CD53374BACAF7C996737A9716F2AE4;// 0x69D8(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E6FA69484123C5F8BB96C782034A905C;// 0x6AF8(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BAFDA95F4EE78CCF54B286BBEA87EE11;// 0x6B68(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4CBEE7514C791E83682837B2758A1B88;// 0x6C88(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A09DCAEF4DEA288D324AC3B689D41A36;// 0x6CF8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2C89DF0C46800C0B23647D8215CB8672;// 0x6D68(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11EF8AC54D8CF1B67EA0F0AD6B3D0FD4;// 0x6E38(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_431785354A7E7021B7F412AF6F9DAB98;// 0x6F08(0x00D0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2CDA2AAF4DFEE294C55BED97B57CF57E;// 0x6FD8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E89DA390450C6A884D550497E6E5D869;      // 0x7050(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C381878349B805EE54EEE8A557FAEA07;// 0x70B0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_09648AB84A8A61BAD394F1A762F84788;// 0x7160(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D807BE61498DF7A80548D0A6F789A6F5;      // 0x7208(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C46AB7EC41BEB986E3E22790B72A1D7D;// 0x7268(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4FD76A7F4F46C9E39B89D583B8596BF5;// 0x72B8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1BCD71D842DFFC1950394B9127D45F7B;// 0x7308(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B0CB6202457431D5C083C6BAC722CE01;// 0x73D8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_920534F2491373BFDEAC8EA8B1401C09;// 0x7478(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B1F147744240D6A036CC5EAE07CD4766;// 0x74C8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6B92E35E4E0E72B54E6E119CF2097D56;// 0x7570(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D549D8B049DD29216318DA8F638BAF24;// 0x75C0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CDAF73C24A4265D74637049D2AD8D67D;// 0x7630(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75C82F15423FCBD3694775B1CBCF88D3;// 0x7680(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8980D6EB47C50797E6B5F8985C233D24;// 0x7700(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA78156B4DFCF82E830C96B995EA39F6;// 0x7780(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B7DC67E45A31EA3895D7EAD0C674544;// 0x7800(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_083AC561450AD66B8A69F99DE402156F;// 0x7880(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F30AA2A48D2E7527E809BA7E9AB6E94;// 0x7900(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF96EBBD4AF4DDD9481D70952DEA3E99;// 0x7980(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6454DF244E7950049F28A78BC86DE036;// 0x7A00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E13F6AC44234413A35154092B3ED3ED3;// 0x7A80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2BD8DE2849AE3D2A1B20DB9B3A4F9AD5;// 0x7B00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B6860F224BD8D43994735F85AB1AF1FF;// 0x7B80(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BDB3CCDF43A40D7AB1AD46A58BA0ABB3;// 0x7C00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_470EEFC24F1955512186F3A7CDA8DBED;// 0x7C70(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B1055A904C77578270D004B27BCF8121;// 0x7CB8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C2C0A15E4AC2104E87A5B8A00F3DB134;// 0x7DD8(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_132359754CF4EDA87E0A0F96CA77B242;// 0x7EF8(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C115F2984655044716FAF3AFEED80248;// 0x7FD8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_85285F35499E23FA207D5780199CE2EB;// 0x80B8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1493C246497202D7018901A4D7D6D538;// 0x81D8(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_32C61C974D6056173192FE8365D39B47;// 0x82F8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9FC0D9784FE61906EC830CB04A78D8E4;// 0x83D8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EF9068634AEBD791C4E5F19838C6A18F;// 0x84F8(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ECE418C435D004E0A6875A1935426FD3;// 0x8618(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A2245C847FB79B81E8C9BAF9D96792F;// 0x8660(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D94BE2954731EDB79F47808DBA651598;// 0x86D0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0346DE904475ECBFE5983189872A4FDB;// 0x87B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_648FEEBE45263B126D4F6290900D4876;// 0x8820(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ECE418C435D004E0A6875A1935426FD2;// 0x8890(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4B1DAC614B1F83B009C56CB105ED9F64;// 0x88D8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ECE418C435D004E0A6875A1935426FD;// 0x8928(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_088E15F5490A6B67B61AFDBC5C16B1F5;// 0x8970(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13C973C1492600609DEAD09ED6ACFE88;// 0x8A48(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1D6ED9F14A3DBE2F7E280BAADC521409;// 0x8AB8(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_37F09CB346979BCA57DDB28B06293C68;// 0x8B30(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BE839CD24E5320856746BBA488A59335;// 0x8BD8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_782F76654E45A29F720A489F2EF5D9FB;// 0x8C28(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2F70237045B080E6266D958D49EB7F72;// 0x8CC8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_422B060B48382C80DA851BA4447DD6A3;// 0x8D70(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9EF691374374E942EDBF65A9A2C0C9B9;// 0x8DC0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B8186A0347D3FBDF33509DA5C407F13E;      // 0x8E10(0x0060)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_D6F4A00A4447266D81ED7FABBD0B5D98;// 0x8E70(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E4B69F0A4882038A594DF39BA1DA49AB;// 0x8EE0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3D1455B6416C5A9B02B93CA3FAC010BA;// 0x8F30(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78E0443248B10D65B3C6E6AE1557C7EA;// 0x8F80(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1B32BD5D4E3C78C223A5A59F32AD6315;// 0x8FD0(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AD8E2DF14B5C38CDFADB8D8F7D263DE3;// 0x9070(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5D3532DD4F6ACEA979F7E9ADF82136FA;// 0x9118(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_31DFF3B84CC24E6AFBAC319CC493B7DA;// 0x91B8(0x00A8)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_AB6756B746463382F65361A86FE7A50F;// 0x9260(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D0772B93439E701A5EEB63AAB5666D74;      // 0x92C0(0x0060)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D73002674291EF8FE78C269C37469CEB;  // 0x9320(0x0098)
	unsigned char                                      UnknownData03[0x8];                                       // 0x93B8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2FC0081F49D2145B54A863A1CA9B4404;    // 0x93C0(0x00F0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_69A9038D4C7E66D723EE93821D5C6789;    // 0x94B0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_BFBD861445FD18099C9C64830FE7165D;  // 0x95A0(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4E8021544E6BD283D0023A97D67878A3;      // 0x9638(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_819085BE40796B493A6EAB8273996E74;// 0x9698(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7860C0524B381DBA85CF369E62E7CF8D;// 0x9708(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E0EB06BB4927C9B194BF8283BDA5B14D;// 0x9778(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EAE64DB74C28B20ED3DE759E3C7072A3;// 0x9848(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3EA5E5B04BA2315896A79EB01953FB50;// 0x9918(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_63E2B3CD4492803C558F9294EDBC0A7A;// 0x99F8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A0F5D2BF4BD341A841EA6A9709544CF4;// 0x9B18(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BF8368834E28DD69E9087FA5E4AB8877;// 0x9C38(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EC247E864C9566BBAD025C9E2E7A2B97;// 0x9D58(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9ED2B46D4456A60B4F6FE19C65A9D3DA;// 0x9E78(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8FBCC3514CFD82C063EA7BA575A03964;// 0x9F98(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BBF092A4484C14A5E42848A69EB62E4A;// 0xA0B8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_30F140A44856280DE0BE279EB9F07AB8;// 0xA128(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58F8E61A4A0CFFACD7BA589F791E1269;// 0xA1F8(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D19DFEC645B7B9DA0FD016AC1B3318E1;// 0xA268(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_01D139BD4D3D562F101B34A284AA6308;// 0xA388(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_23A46B4A45A72B51EA759F8F3805BF25;// 0xA4A8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3918E43741273983A283FE8A48BB3706;// 0xA588(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F8A4E2444E4172FB61D886ACA6E4AD9D;// 0xA658(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1C7C15F44F45E397DD5500BA2739140A;// 0xA728(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_74A8FEEE49025559D179C1B6A71DE662;// 0xA848(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5B1C2F3643DFE0EC25890C94C58756F1;// 0xA968(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B716156C4CD8279F6840B9A9C3B8E830;// 0xAA88(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AFFA7277413943F9FE0FB39D2DE0EA58;// 0xABA8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E9362B514D12CB4BB7A20F809CA290A7;// 0xACC8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0FCFFE2C4123DAF847FB468FF942338F;// 0xADE8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EA03DD104C7AA914280DC0A906879441;// 0xAF08(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_586DDF324229ACC3E435D5A8EB1FCD0B;// 0xB028(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_74B6037248FFF9BD8FB91DAB9FD614CA;// 0xB148(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2A0B6F7F4DDC6EB49A2F27BE60868097;// 0xB268(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BD3589FA4213A0FE5A995DBDC211323C;// 0xB388(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC67A42A436773875C7EF6B65AD42191;// 0xB458(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_70B4A0234344841E6FB253996CCBCD84;// 0xB4C8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A1205B54C960BB32659D79B173DBADD;// 0xB5A8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E3227A8749BA08C9E9FC1BBF26B7573B;// 0xB618(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37D8305C40AAAC0C9963BA9C077F0C8D;// 0xB6E8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90600CB34ABD7ABDB1926C804615E38B;// 0xB7B8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A95857164A454E9C02DE7C8A674AF069;// 0xB828(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DE02AE443237A65F1CD0B96D97E3884;// 0xB908(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90F88C8845D739B63C6D808C0F3483E2;// 0xB978(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D96199C7404CD0130021D783C2488551;// 0xB9E8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AE0701474B28694F749CD08D28487C3A;// 0xBAB8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_326F871640B0820DD4DA4481663F852C;// 0xBB88(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0AD63B15475248D0B74A28813D8DA627;// 0xBBF8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F73F46B14E750F429624DEB4933F484E;// 0xBCC8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D1715DD6493DB3B5231D1696771E536C;// 0xBD38(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_848681154E8284474035D0AE5BF48AC4;// 0xBE18(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_476F8FD044262EBA0F82D1893FCAC666;// 0xBEE8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_E667517A45693E9F99EE038087AC88B5;// 0xBF58(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0F6552554FA3A690C14530A50700975B;// 0xC038(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B1483E64442F8B8B028F958592DFDE0C;// 0xC108(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C98AABF142EA6957747CDAB01B64B34C;// 0xC228(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_19D473FD4704021F1F88E78868923C1D;// 0xC348(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_AE0E182144EDC13C34DBC19755547FB1;// 0xC428(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8624BDC1466BC0B6E31C2B87179F39B7;// 0xC508(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1184179F4D71E451A7AC258EF2FC94AA;// 0xC578(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0FAE52E54414C44D8BE529977CA3F8FD;// 0xC648(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3031B51645216C85B6E4769CE20B1ABC;// 0xC690(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FDDEA971486541492581359DA9A0653B;      // 0xC768(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D9A6C8BB453822597A29968D3E70313A;// 0xC7C8(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3011F4B3454E93B4D596559434D0CDEE;// 0xC870(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BADB661C414DB62B806B8A98E6283569;// 0xC8B8(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BE7C805B40E69671A35E6A9308C57B9C;// 0xC968(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6A9FCD7F45D4DAE97E988F9F9A847F48;// 0xC9B0(0x0050)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_D0C216974F2C3EE60935CFB3355D7475;// 0xCA00(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_158F389F41DBD36DEBE49AA514035E1D;// 0xCA60(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F4373BF4AB17FA9C5B87ABD9434A052;// 0xCAD0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D81A852C468B2AF0906FD6830B2BB895;// 0xCB40(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DB2E9B97490069EDBC30A6A41088DB5D;// 0xCC10(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_Root_F3C46D0746949744B8FCAF8E58009B56;      // 0xCCE0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_866D3A664F8A6937EF1EDE92E59D03C6;      // 0xCD28(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_02F140EE4AEEFBE7C7DAED9F3EFF3D4F;// 0xCD88(0x0120)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1D26955E4D1ED68D8AB44F86D607CC7B;// 0xCEA8(0x00B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_101BFD624E6EE5A46FF10880DBD2C1E4;  // 0xCF58(0x0098)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C38A5EF7493610800583F0A9DD571AFC;  // 0xCFF0(0x0098)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C7021D684C28DBEC1A027A8A6240F8DE;// 0xD088(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FE50688F4FFD62648F701FBB626C821B;// 0xD158(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CAD63E5A4835BCE966A3F4A11B62A6CE;// 0xD1A0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A9CF4F2B4A1BA9886A8219A20626DA6C;// 0xD1E8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_52EC2ECA457D2C57CAD6C28E34AC5352;// 0xD230(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D087DB74306365D2635699338F3F646;// 0xD2D8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7BF2488D45CE9D2E12598DAEAC8A404E;// 0xD328(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0C577D184DE9C000E4323E91178713EA;// 0xD378(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A63C309F455D7ACD5DF2538EDF1A5713;// 0xD3C0(0x00B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_51A633AC4078322CC469F68A1838B5DD;  // 0xD470(0x0098)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BDB39E0C4FE592B18884AF98639BBB31;// 0xD508(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_792C27AF4666AE30EAE184B9BE226840;// 0xD5D8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_679F5BF84A77CAD50727ADB95F2A134D;      // 0xD628(0x0060)
	class AShooterWeapon*                              ShooterWeapon;                                            // 0xD688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           ShooterCharacter;                                         // 0xD690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       PawnOwner;                                                // 0xD698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFalling;                                                // 0xD6A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0xD6A1(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    PlayerController;                                         // 0xD6A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pitch;                                                    // 0xD6B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimDeltaSeconds;                                         // 0xD6B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0xD6B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0xD6BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UShooterCharacterMovement*                   MovementComponent;                                        // 0xD6C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     CharacterVelocity;                                        // 0xD6C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallVelocity;                                             // 0xD6D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CoreSetupComplete;                                        // 0xD6D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0xD6D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FiredRecently;                                            // 0xD6DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableLocomotion;                                         // 0xD6DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponClass>                          WeaponClass;                                              // 0xD6DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0xD6DD(0x0003) MISSED OFFSET
	float                                              Yaw;                                                      // 0xD6E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintYawAngle;                                           // 0xD6E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintLeanAngle;                                          // 0xD6E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSprinting;                                              // 0xD6EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0xD6ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsProne;                                                  // 0xD6EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableLocomotionAdditive;                                 // 0xD6EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAimState>                             PerspectiveState;                                         // 0xD6F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0xD6F1(0x0003) MISSED OFFSET
	float                                              IKLeftHandAlpha;                                          // 0xD6F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKRightHandAlpha;                                         // 0xD6F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKFootAlpha;                                              // 0xD6FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSprintingAnim;                                          // 0xD700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0xD701(0x0003) MISSED OFFSET
	float                                              MovementSpeed;                                            // 0xD704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RealWorldLastFireTime;                                    // 0xD708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceLastFire;                                        // 0xD70C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldTimer;                                               // 0xD710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterMovementStance>              Stance;                                                   // 0xD714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0xD715(0x0003) MISSED OFFSET
	struct FVector                                     CapsuleHeightAdjustment;                                  // 0xD718(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CapsuleHeightAdjustment_Prone;                            // 0xD724(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CapsuleHeightAdjustment_Crouch;                           // 0xD730(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWeaponSwapInProgress;                                    // 0xD73C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0xD73D(0x0003) MISSED OFFSET
	float                                              TurnOnPointCursor;                                        // 0xD740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightEffector;                                            // 0xD744(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftEffector;                                             // 0xD750(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftKnee;                                                 // 0xD75C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightKnee;                                                // 0xD768(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IK_Alpha_R;                                               // 0xD774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IK_Alpha_L;                                               // 0xD778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HipOffset;                                                // 0xD77C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HipOffset_Old;                                            // 0xD780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HipTargetOffset;                                          // 0xD784(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IKRootOffset;                                             // 0xD790(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WeaponYAxisOffset;                                        // 0xD79C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             WeaponYAxisOffsetArray;                                   // 0xD7A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HipOffset_Old_1;                                          // 0xD7B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SprintLegOutSwitch;                                       // 0xD7BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InSprintOutState;                                         // 0xD7BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0xD7BE(0x0002) MISSED OFFSET
	float                                              StanceLargeBlendTime;                                     // 0xD7C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StanceSmallBlendTime;                                     // 0xD7C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterMovementStance>              StanceLast;                                               // 0xD7C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0xD7C9(0x0003) MISSED OFFSET
	float                                              StanceBlendTime;                                          // 0xD7CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterMovementStance>              Stance_Standing;                                          // 0xD7D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterMovementStance>              Stance_Crouch;                                            // 0xD7D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterMovementStance>              Stance_Prone;                                             // 0xD7D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstPerson;                                              // 0xD7D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaX;                                                   // 0xD7D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaY;                                                   // 0xD7D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AimAnimReset;                                             // 0xD7DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AimAnimTimerSwitch;                                       // 0xD7DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0xD7DE(0x0002) MISSED OFFSET
	float                                              AimAnimTimer;                                             // 0xD7E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0xD7E4(0x0004) MISSED OFFSET
	struct FName                                       AimAnimXSlotName;                                         // 0xD7E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               lefttrue;                                                 // 0xD7F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               righttrue;                                                // 0xD7F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0xD7F2(0x0002) MISSED OFFSET
	float                                              DeltaX_Max;                                               // 0xD7F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AimAnimYSlotName;                                         // 0xD7F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AimAnimTimerSwitchY;                                      // 0xD800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AimAnimResetY;                                            // 0xD801(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0xD802(0x0002) MISSED OFFSET
	float                                              AimAnimTimerY;                                            // 0xD804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               uptrue;                                                   // 0xD808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               downtrue;                                                 // 0xD809(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0xD80A(0x0002) MISSED OFFSET
	float                                              AimMotionX;                                               // 0xD80C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaY_Max;                                               // 0xD810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimMotionY;                                               // 0xD814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimAnimScaler;                                            // 0xD818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimMotionAlphaY;                                          // 0xD81C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimMotionAlphaX;                                          // 0xD820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0xD824(0x0004) MISSED OFFSET
	struct FName                                       FP_idle;                                                  // 0xD828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimMotionAlphaY2;                                         // 0xD830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimMotionAlphaX2;                                         // 0xD834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVehicleSeatState>                     VehicleSeatState_1;                                       // 0xD838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0xD839(0x0003) MISSED OFFSET
	float                                              LocomotionAdditiveAlpha;                                  // 0xD83C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponTypePlaybackRate;                                   // 0xD840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipSprintStart;                                          // 0xD844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFallingLastFrame;                                       // 0xD845(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0xD846(0x0002) MISSED OFFSET
	struct FName                                       TP_UpperBody;                                             // 0xD848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintDirection;                                          // 0xD850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedCore;                                                // 0xD854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Locomotion_PlayRate;                                      // 0xD858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0xD85C(0x0004) MISSED OFFSET
	class UAnimMontage*                                FP_WeaponIdle;                                            // 0xD860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      EquipedWeaponName;                                        // 0xD868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       WeaponName;                                               // 0xD878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalVelocity;                                         // 0xD880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpTriggered;                                            // 0xD884(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0xD885(0x0003) MISSED OFFSET
	struct FName                                       TP_Land;                                                  // 0xD888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandWeight;                                               // 0xD890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _3SecondSpawnDelay;                                       // 0xD894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0xD895(0x0003) MISSED OFFSET
	float                                              SpawnTimer;                                               // 0xD898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponSpecificHandsAlpha;                                 // 0xD89C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponSpecificHandsAsset;                                 // 0xD8A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponOffsetIK;                                           // 0xD8A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Pitch_Prone;                                              // 0xD8B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0xD8B4(0x0004) MISSED OFFSET
	struct FName                                       FP_WeaponSlot;                                            // 0xD8B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BMX_CoastPedal;                                           // 0xD8C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BMX_Stopped;                                              // 0xD8C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BMX_Sprinting;                                            // 0xD8C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0xD8C3(0x0001) MISSED OFFSET
	float                                              BMX_SprintIntensity;                                      // 0xD8C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BMX_TurnDirection;                                        // 0xD8C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BMX_PeddlePlayback;                                       // 0xD8CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEMPTEMP;                                                 // 0xD8D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementPlaybackScaler;                                   // 0xD8D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleSprinting;                                         // 0xD8D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleStopped;                                           // 0xD8D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleMovingForward;                                     // 0xD8DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleCoasting;                                          // 0xD8DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleJumpCharging;                                      // 0xD8DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleJumped;                                            // 0xD8DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleInAir;                                             // 0xD8DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0xD8DF(0x0001) MISSED OFFSET
	float                                              VehicleTurnFraction_1;                                    // 0xD8E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleForwardSpeed_1;                                    // 0xD8E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleTurnLean;                                          // 0xD8E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    VehicleTurnLeanDamped;                                    // 0xD8EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InAirTimer;                                               // 0xD8F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponClass>                          WeaponClass_Fists;                                        // 0xD8FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponClass>                          WeaponClass_Special;                                      // 0xD8FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponIKSwitch;                                           // 0xD8FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x1];                                       // 0xD8FF(0x0001) MISSED OFFSET
	float                                              IKLookAtAlpha;                                            // 0xD900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Locomotion_PlayRate_Crouched;                             // 0xD904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAimState>                             AimState;                                                 // 0xD908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HighElbowTrue;                                            // 0xD909(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x6];                                       // 0xD90A(0x0006) MISSED OFFSET
	struct FName                                       MeshRotationUpperBody;                                    // 0xD910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                NewVar_1;                                                 // 0xD918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FP_LocomotionAlpha;                                       // 0xD920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FP_LocomotionPlaybackRate;                                // 0xD924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchCurveValue;                                          // 0xD928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FP_FullAuto_Shake_Alpha;                                  // 0xD92C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      NewVar_2;                                                 // 0xD930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpecialWeaponIKON;                                        // 0xD931(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0xD932(0x0002) MISSED OFFSET
	float                                              SprintFallBlendTime;                                      // 0xD934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InFallingState;                                           // 0xD938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0xD939(0x0003) MISSED OFFSET
	float                                              LeftHandBlendTime;                                        // 0xD93C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftHandBlendTime_1;                                      // 0xD940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnOnPointRotator;                                       // 0xD944(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnOnPointRotatorAlpha;                                  // 0xD950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0xD954(0x0004) MISSED OFFSET
	struct FName                                       TurnOnPointSlot;                                          // 0xD958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FullBodySlot;                                             // 0xD960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponOffsetStruct                         WeaponOffsetStruct;                                       // 0xD968(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWeaponSpecificHandPoseStruct               WeaponSpecificHandMontaages;                              // 0xDA70(0x00F8) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UpperBodySlot;                                            // 0xDB68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BMX_ResetPedal;                                           // 0xDB70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0xDB71(0x0003) MISSED OFFSET
	struct FRotator                                    WeaponRotationOffset;                                     // 0xDB74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponSpecificRotationStruct               WeaponOffsetRotationStruct;                               // 0xDB80(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SpecialStateCopyBone;                                     // 0xDBF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponClass>                          WeaponClassAim;                                           // 0xDBF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x2];                                       // 0xDBFA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;        // 0xDBFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0xDC00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0xDC01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0xDC02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0xDC03(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0xDC04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0xDC05(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0xDC06(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0xDC07(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0xDC08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0xDC09(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0xDC0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_BoolToFloat_ReturnValue;                    // 0xDC10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable4;                       // 0xDC14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable4;                             // 0xDC15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable5;                       // 0xDC16(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable5;                             // 0xDC17(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetInstanceStateWeight_ReturnValue;              // 0xDC18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable6;                       // 0xDC1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0xDC1D(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0xDC20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0xDC24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable6;                             // 0xDC28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0xDC29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0xDC2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable7;                       // 0xDC2B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable7;                             // 0xDC2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0xDC2D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0xDC2E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable8;                       // 0xDC2F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0xDC30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0xDC31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable8;                             // 0xDC32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable9;                       // 0xDC33(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable9;                             // 0xDC34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0xDC35(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0xDC38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0xDC3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0xDC3D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0xDC3E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable10;                      // 0xDC3F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable10;                            // 0xDC40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable11;                      // 0xDC41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable11;                            // 0xDC42(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0xDC43(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0xDC44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable12;                      // 0xDC45(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable12;                            // 0xDC46(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue3;               // 0xDC47(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable13;                      // 0xDC48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue4;               // 0xDC49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable13;                            // 0xDC4A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0xDC4B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0xDC4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable14;                      // 0xDC4D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0xDC4E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable14;                            // 0xDC4F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable15;                      // 0xDC50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0xDC51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0xDC52(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable15;                            // 0xDC53(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;// 0xDC54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0xDC58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable16;                      // 0xDC59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable16;                            // 0xDC5A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable17;                      // 0xDC5B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable17;                            // 0xDC5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0xDC5D(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0xDC60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable18;                      // 0xDC64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable18;                            // 0xDC65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0xDC66(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x1];                                       // 0xDC67(0x0001) MISSED OFFSET
	float                                              CallFunc_GetCurveValue_ReturnValue;                       // 0xDC68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurveActive_ReturnValue;                       // 0xDC6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0xDC6D(0x0003) MISSED OFFSET
	float                                              CallFunc_MapRangeClamped_ReturnValue;                     // 0xDC70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable19;                      // 0xDC74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurveActive_ReturnValue2;                      // 0xDC75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0xDC76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAimState>                             CallFunc_GetAimState_ReturnValue;                         // 0xDC77(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0xDC78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Montage_IsPlaying_ReturnValue;                   // 0xDC79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Montage_IsPlaying_ReturnValue2;                  // 0xDC7A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0xDC7B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0xDC7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetCurveValue_ReturnValue2;                      // 0xDC80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFiring_ReturnValue;                            // 0xDC84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable19;                            // 0xDC85(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAimState>                             CallFunc_GetAimState_ReturnValue2;                        // 0xDC86(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0xDC87(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0xDC88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0xDC89(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0xDC8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0xDC90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0xDC94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterCharacterMovement*                   K2Node_DynamicCast_AsShooter_Character_Movement;          // 0xDC98(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0xDCA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0xDCA1(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0xDCA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0xDCA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0xDCB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotator_ReturnValue;                         // 0xDCB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0xDCC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0xDCC1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0xDCC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotator_ReturnValue2;                        // 0xDCC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable20;                      // 0xDCD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0xDCD5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x2];                                       // 0xDCD6(0x0002) MISSED OFFSET
	float                                              CallFunc_MapRangeClamped_ReturnValue2;                    // 0xDCD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue3;                    // 0xDCDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue4;                    // 0xDCE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue5;                    // 0xDCE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue6;                    // 0xDCE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue7;                    // 0xDCEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0xDCF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0xDCF1(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0xDCF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0xDCF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0xDCFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0xDD00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue8;                    // 0xDD04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0xDD08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0xDD14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0xDD18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0xDD19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x2];                                       // 0xDD1A(0x0002) MISSED OFFSET
	float                                              CallFunc_MapRangeClamped_ReturnValue9;                    // 0xDD1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0xDD20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0xDD21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x2];                                       // 0xDD22(0x0002) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0xDD24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DampFloat_ReturnValue;                           // 0xDD28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DampFloat_ReturnValue2;                          // 0xDD2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable20;                            // 0xDD30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0xDD31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x2];                                       // 0xDD32(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetPhysicsLinearVelocity_ReturnValue;            // 0xDD34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsSprinting_ReturnValue;                         // 0xDD40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0xDD41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0xDD42(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0xDD43(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue10;                   // 0xDD44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0xDD48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0xDD4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0xDD4D(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0xDD50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlayingInSlot_ReturnValue;              // 0xDD54(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0xDD55(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x2];                                       // 0xDD56(0x0002) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0xDD58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0xDD5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0xDD5D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0xDD5E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x1];                                       // 0xDD5F(0x0001) MISSED OFFSET
	class FString                                      CallFunc_GetWeaponName_ReturnValue;                       // 0xDD60(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      CallFunc_GetWeaponPackage_ReturnValue;                    // 0xDD70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue4;               // 0xDD78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0xDD7C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetFPBaseIdle_BaseIdleMontage;                   // 0xDD80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DampFloat_ReturnValue3;                          // 0xDD88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue2;                       // 0xDD8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue3;                       // 0xDD90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable21;                      // 0xDD94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0xDD95(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x2];                                       // 0xDD96(0x0002) MISSED OFFSET
	float                                              CallFunc_GetInputRotation_X;                              // 0xDD98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetInputRotation_Y;                              // 0xDD9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0xDDA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0xDDA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0xDDA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0xDDA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0xDDAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0xDDAB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0xDDAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAimState>                             CallFunc_GetAimState_ReturnValue3;                        // 0xDDAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0xDDAE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EVehicleSeatState>                     CallFunc_GetVehicleSeatState_ReturnValue;                 // 0xDDAF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              CallFunc_GetCurrentWeapon_ReturnValue;                    // 0xDDB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EWeaponClass>                          CallFunc_GetWeaponClass_ReturnValue;                      // 0xDDB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ECharacterMovementStance>              CallFunc_GetStance_ReturnValue;                           // 0xDDB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x2];                                       // 0xDDBA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue5;               // 0xDDBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFalling_ReturnValue;                           // 0xDDC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0xDDC1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetActorLocalMoveYaw_ReturnValue;                // 0xDDC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0xDDC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0xDDD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0xDDD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0xDDDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0xDDE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Roll;                               // 0xDDEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0xDDF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0xDDF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0xDDF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue3;                              // 0xDE04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0xDE08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0xDE0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0xDE10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0xDE14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0xDE15(0x0003) MISSED OFFSET
	float                                              CallFunc_GetCurveValue_ReturnValue3;                      // 0xDE18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurveActive_ReturnValue3;                      // 0xDE1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable21;                            // 0xDE1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0xDE1E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0xDE1F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0xDE20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0xDE21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurveActive_ReturnValue4;                      // 0xDE22(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0xDE23(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue14;                        // 0xDE24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue6;                // 0xDE25(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurveActive_ReturnValue5;                      // 0xDE26(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0xDE27(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetCurveValue_ReturnValue4;                      // 0xDE28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetCurveValue_ReturnValue5;                      // 0xDE2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue2;                    // 0xDE30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ATASC_Enforcer_C*                            K2Node_DynamicCast_AsTASC_Enforcer;                       // 0xDE38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess2;                             // 0xDE40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0xDE41(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue6;               // 0xDE44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0xDE48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0xDE54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0xDE58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0xDE64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurveActive_ReturnValue6;                      // 0xDE70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0xDE71(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X3;                                  // 0xDE74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0xDE78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0xDE7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetCurveValue_ReturnValue6;                      // 0xDE80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0xDE84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0xDE88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue9;                // 0xDE8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue4;                         // 0xDE90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlayingInSlot_ReturnValue2;             // 0xDE9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue7;                // 0xDE9D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x2];                                       // 0xDE9E(0x0002) MISSED OFFSET
	float                                              CallFunc_MapRangeClamped_ReturnValue11;                   // 0xDEA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0xDEA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue15;                        // 0xDEA5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0xDEA6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue8;                // 0xDEA7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue9;                // 0xDEA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue16;                        // 0xDEA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0xDEAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurveActive_ReturnValue7;                      // 0xDEAB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetCurveValue_ReturnValue7;                      // 0xDEAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0xDEB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0xDEB1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue7;               // 0xDEB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DampFloat_ReturnValue4;                          // 0xDEB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DampFloat_ReturnValue5;                          // 0xDEBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0xDEC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue17;                        // 0xDEC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0xDEC5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable22;                      // 0xDEC6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0xDEC7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetMontagePlayingInSlot_ReturnValue;             // 0xDEC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0xDED0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0xDED1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable22;                            // 0xDED2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x1];                                       // 0xDED3(0x0001) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue4;                       // 0xDED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0xDED8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x7];                                       // 0xDED9(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetMontagePlayingInSlot_ReturnValue2;            // 0xDEE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0xDEE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue8;                 // 0xDEE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue18;                        // 0xDEEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName2_CmpSuccess;                            // 0xDEEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName3_CmpSuccess;                            // 0xDEEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName4_CmpSuccess;                            // 0xDEED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName5_CmpSuccess;                            // 0xDEEE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName6_CmpSuccess;                            // 0xDEEF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum8_CmpSuccess;                            // 0xDEF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x7];                                       // 0xDEF1(0x0007) MISSED OFFSET
	struct FName                                       CallFunc_GetWeaponNameForAnim_ReturnValue;                // 0xDEF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue9;                 // 0xDF00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x7];                                       // 0xDF01(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetMontagePlayingInSlot_ReturnValue3;            // 0xDF08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlayingInSlot_ReturnValue3;             // 0xDF10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue19;                        // 0xDF11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x2];                                       // 0xDF12(0x0002) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue5;                       // 0xDF14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0xDF18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue6;                       // 0xDF1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue7;                       // 0xDF20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue8;                       // 0xDF24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue9;                       // 0xDF28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue10;                      // 0xDF2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue4;                    // 0xDF30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue5;                    // 0xDF31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue6;                    // 0xDF32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue7;                    // 0xDF33(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue8;                    // 0xDF34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue9;                    // 0xDF35(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x2];                                       // 0xDF36(0x0002) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue11;                      // 0xDF38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue12;                      // 0xDF3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue13;                      // 0xDF40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue10;               // 0xDF44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable23;                      // 0xDF45(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x2];                                       // 0xDF46(0x0002) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue14;                      // 0xDF48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue15;                      // 0xDF4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue16;                      // 0xDF50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue14;                       // 0xDF54(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue20;                        // 0xDF55(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable23;                            // 0xDF56(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue11;               // 0xDF57(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue12;               // 0xDF58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue13;               // 0xDF59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue14;               // 0xDF5A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue15;               // 0xDF5B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue8;               // 0xDF5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue16;               // 0xDF60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x3];                                       // 0xDF61(0x0003) MISSED OFFSET
	float                                              CallFunc_DampFloat_ReturnValue6;                          // 0xDF64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue10;               // 0xDF68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue11;               // 0xDF6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue12;               // 0xDF70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAttachmentScope>                      CallFunc_GetScopeType_ReturnValue;                        // 0xDF74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EWeaponAction>                         CallFunc_GetCurrentAction_ReturnValue;                    // 0xDF75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum9_CmpSuccess;                            // 0xDF76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum10_CmpSuccess;                           // 0xDF77(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlayingInSlot_ReturnValue4;             // 0xDF78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCurveActive_ReturnValue8;                      // 0xDF79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x2];                                       // 0xDF7A(0x0002) MISSED OFFSET
	float                                              CallFunc_GetCurveValue_ReturnValue8;                      // 0xDF7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue13;               // 0xDF80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAttachmentScope>                      CallFunc_GetScopeType_ReturnValue2;                       // 0xDF84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum11_CmpSuccess;                           // 0xDF85(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum12_CmpSuccess;                           // 0xDF86(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue5;               // 0xDF87(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue15;                       // 0xDF88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue21;                        // 0xDF89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x2];                                       // 0xDF8A(0x0002) MISSED OFFSET
	float                                              CallFunc_Montage_Play_ReturnValue17;                      // 0xDF8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue18;                      // 0xDF90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue19;                      // 0xDF94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_SeatIndex;                                   // 0xDF98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum13_CmpSuccess;                           // 0xDF9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum14_CmpSuccess;                           // 0xDF9D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum15_CmpSuccess;                           // 0xDF9E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x1];                                       // 0xDF9F(0x0001) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue9;               // 0xDFA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue16;                       // 0xDFA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum16_CmpSuccess;                           // 0xDFA5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum17_CmpSuccess;                           // 0xDFA6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum18_CmpSuccess;                           // 0xDFA7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum19_CmpSuccess;                           // 0xDFA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue22;                        // 0xDFA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x2];                                       // 0xDFAA(0x0002) MISSED OFFSET
	float                                              CallFunc_DampFloat_ReturnValue7;                          // 0xDFAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRangeClamped_ReturnValue12;                   // 0xDFB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue20;                      // 0xDFB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue21;                      // 0xDFB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue22;                      // 0xDFBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable24;                      // 0xDFC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable24;                            // 0xDFC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue6;               // 0xDFC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue10;                // 0xDFC3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue17;                       // 0xDFC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue23;                        // 0xDFC5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable25;                      // 0xDFC6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable25;                            // 0xDFC7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue7;               // 0xDFC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue18;                       // 0xDFC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue24;                        // 0xDFCA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x1];                                       // 0xDFCB(0x0001) MISSED OFFSET
	float                                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue2;// 0xDFCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue10;                   // 0xDFD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable26;                      // 0xDFD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable26;                            // 0xDFD2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable27;                      // 0xDFD3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable27;                            // 0xDFD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue11;                // 0xDFD5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x2];                                       // 0xDFD6(0x0002) MISSED OFFSET
	float                                              CallFunc_MapRangeClamped_ReturnValue13;                   // 0xDFD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotator_ReturnValue3;                        // 0xDFDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue8;               // 0xDFE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x7];                                       // 0xDFE9(0x0007) MISSED OFFSET
	class AShooterWeapon*                              CallFunc_GetCurrentWeapon_ReturnValue2;                   // 0xDFF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooter_Character;                   // 0xDFF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess3;                             // 0xE000(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0xE001(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0xE002(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0xD];                                       // 0xE003(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass RNR_AnimBlueprint.RnR_AnimBlueprint_C");
		return ptr;
	}


	void Weapon_Type_Offset();
	void UpdateHandWeaponOverride();
	void TurnOnPoint_Right();
	void TurnOnPoint_Left();
	void TurnOnPoint();
	void Stance_Transition_Times();
	void Sprinting();
	void Speed_Variables_Setup();
	void Relaxed_Stance_Settings();
	void OnVehicleLanded();
	void OnVehicleJumped();
	void OnVehicleJumpCharging();
	void OnVehicleEntered(int bpp__SeatIndex__pf);
	void OnVehicleAnimValuesUpdated();
	void OnVehicleAccelerationStopped();
	void OnVehicleAcceleration();
	void IK_Settings();
	void GroundTraceIK();
	void GetFPBaseIdle(class UClass* bpp__WeaponAnimClass__pf, class UAnimMontage** bpp__BaseIdleMontage__pf);
	void FP_Graph();
	void ExecuteUbergraph_RnR_AnimBlueprint_33(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_RnR_AnimBlueprint_27(int bpp__EntryPoint__pf);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TwoWayBlend_D6F4A00A4447266D81ED7FABBD0B5D98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_FF96EBBD4AF4DDD9481D70952DEA3E99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_FBC8E82D4140CB08E0742DAD6308AC91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_EA78156B4DFCF82E830C96B995EA39F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_EA24786A43A6CAAFE117A383FCF014FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_E441E3A44DCC95052B3AD4B9B647B01C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_E13F6AC44234413A35154092B3ED3ED3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_E13F6AC44234413A35154092B3ED3ED3_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_E13F6AC44234413A35154092B3ED3ED3_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_D28CCDB6444B575C3AA8248CAE7FAA87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_B6860F224BD8D43994735F85AB1AF1FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_B5441B8F487D1C3C4939338D6F803592();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_ADAAC197417A2121C75FB6968FC1F5B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_8F68BB904649C2C799F3AEB4E9D45170();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_8B7DC67E45A31EA3895D7EAD0C674544();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_8B7DC67E45A31EA3895D7EAD0C674544_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_8B7DC67E45A31EA3895D7EAD0C674544_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_8980D6EB47C50797E6B5F8985C233D24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_7F30AA2A48D2E7527E809BA7E9AB6E94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_75C82F15423FCBD3694775B1CBCF88D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_6709447543ED8546080D37BA6EC72FEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_6454DF244E7950049F28A78BC86DE036();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_5F7F270045C31F781B58B39F2FD98281();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_44957CBB4E1C0D7D1E6B01BBDE7CAC53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_2BD8DE2849AE3D2A1B20DB9B3A4F9AD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_289120A64BC6421F29D5F5AFAD394723();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_TransitionResult_083AC561450AD66B8A69F99DE402156F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_SequencePlayer_E6FA69484123C5F8BB96C782034A905C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_RotateRootBone_D0C216974F2C3EE60935CFB3355D7475();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_RotateRootBone_AB6756B746463382F65361A86FE7A50F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_RotateRootBone_01E6E572401B2AA8A8E32F9F2355F60D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_EC800D4A47636FA21BE38B9D83C21258();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_EC6951A3422C7521F0786EAF1AE531D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_DFD544A1442D3773F98DBCB1545968E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_C381878349B805EE54EEE8A557FAEA07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_BADB661C414DB62B806B8A98E6283569();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_A63C309F455D7ACD5DF2538EDF1A5713();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_607613144AED3CB410492FBD379BA112();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_47DBEB414F374AB8A43DB49107BC8000();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_2B02196B42DC9655A9CD8CA87C07FBD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ModifyBone_1D26955E4D1ED68D8AB44F86D607CC7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LookAt_CB0937954863F7959354AE8CA7CEB898();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LookAt_B5F5CA944ECF5F2321921FB295C83B05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_FBED063A47C7DD8BD1EF1BA2709F0332();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_C93FFC6E411E229B9E0374B6138943B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_B0CB6202457431D5C083C6BAC722CE01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_9333EC734C3A3C43E2D3E78D1C4EC6F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_782F76654E45A29F720A489F2EF5D9FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_5D3532DD4F6ACEA979F7E9ADF82136FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_4EFE0387409A2305906BF39A0EBA0113();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_Fabrik_C48111B0499F571C956C25A1907D8C0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_Fabrik_952CC546406F4B2E04510D8E13A23907();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_Fabrik_1CBECA80454BE430A2464FA923E6699E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_Fabrik_07EEAA464434338827A348A0CD1B55D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_EF9068634AEBD791C4E5F19838C6A18F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_EC247E864C9566BBAD025C9E2E7A2B97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_EA03DD104C7AA914280DC0A906879441();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_E9362B514D12CB4BB7A20F809CA290A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D1FBC64F4E83B6443E41E0BA3264BA57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D1D6DD094B2FF31DF36955AB4FEDD444();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D19DFEC645B7B9DA0FD016AC1B3318E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_C98AABF142EA6957747CDAB01B64B34C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_C2C0A15E4AC2104E87A5B8A00F3DB134();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_BF8368834E28DD69E9087FA5E4AB8877();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_BAFDA95F4EE78CCF54B286BBEA87EE11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_B72BD1A744E01F9A1E75C4817E609062();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_B716156C4CD8279F6840B9A9C3B8E830();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_B1483E64442F8B8B028F958592DFDE0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_B1055A904C77578270D004B27BCF8121();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_AFFA7277413943F9FE0FB39D2DE0EA58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_A0F5D2BF4BD341A841EA6A9709544CF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_9FC0D9784FE61906EC830CB04A78D8E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_9ED2B46D4456A60B4F6FE19C65A9D3DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_8FBCC3514CFD82C063EA7BA575A03964();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_85285F35499E23FA207D5780199CE2EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_74B6037248FFF9BD8FB91DAB9FD614CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_74A8FEEE49025559D179C1B6A71DE662();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_63E2B3CD4492803C558F9294EDBC0A7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_5B1C2F3643DFE0EC25890C94C58756F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_5903B9D749E04CDAE0C32DA966CE5FB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_586DDF324229ACC3E435D5A8EB1FCD0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_43CD53374BACAF7C996737A9716F2AE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_3DC23B63430BA76E0156DC90E9EA8576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2E7614F14A9B0F295B8801AF7CC28D91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2A0B6F7F4DDC6EB49A2F27BE60868097();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_1C7C15F44F45E397DD5500BA2739140A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_15D62AAA4F2B7B14140926B5B0093F8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_1493C246497202D7018901A4D7D6D538();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_1185DE5648DFC1ACBFB135926F2793B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_0FCFFE2C4123DAF847FB468FF942338F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_02F140EE4AEEFBE7C7DAED9F3EFF3D4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_01D139BD4D3D562F101B34A284AA6308();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_0174D41246F89A6DC7F3DD8F9C5A60EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_E667517A45693E9F99EE038087AC88B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_D94BE2954731EDB79F47808DBA651598();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_D555F3DF496168187AF5D3827ED776C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_D1715DD6493DB3B5231D1696771E536C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_C115F2984655044716FAF3AFEED80248();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_B14A2CD54E0E3DFD3EDFDBA0B01CF517();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_AE0E182144EDC13C34DBC19755547FB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_A95857164A454E9C02DE7C8A674AF069();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_99247A3A41FB16BC555464B912CF6F27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_70B4A0234344841E6FB253996CCBCD84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_5808426D4BEEFD24218A58AB0A3BF15F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_5808426D4BEEFD24218A58AB0A3BF15F_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_3EA5E5B04BA2315896A79EB01953FB50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_3BBD04884883CE713C6E92BD45188373();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_32C61C974D6056173192FE8365D39B47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_2CEC834845F3CC2DFC9AA389A5BFA6C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_23A46B4A45A72B51EA759F8F3805BF25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_19D473FD4704021F1F88E78868923C1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByEnum_132359754CF4EDA87E0A0F96CA77B242();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_F8A4E2444E4172FB61D886ACA6E4AD9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_E9966960449C1F344E73C68C135AE98D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_E9966960449C1F344E73C68C135AE98D_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_E85997B8451E0132B2DC6CB3411C0D57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_E85997B8451E0132B2DC6CB3411C0D57_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_E0EB06BB4927C9B194BF8283BDA5B14D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_DB2E9B97490069EDBC30A6A41088DB5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_D96199C7404CD0130021D783C2488551();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_D81A852C468B2AF0906FD6830B2BB895();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_C7021D684C28DBEC1A027A8A6240F8DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_C6B2EF824DD1153224B006850887086B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_C6B2EF824DD1153224B006850887086B_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_BDB39E0C4FE592B18884AF98639BBB31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_BD3589FA4213A0FE5A995DBDC211323C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_B957972043C8D91B21FB2E9D1399D2A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_AF4517BF46405E90C3F9D792295BD4D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_AE0701474B28694F749CD08D28487C3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_837957804C6E6078D8DA12B05EE3134A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_837957804C6E6078D8DA12B05EE3134A_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_46411DC14343BF591646A1BE4E3B4FA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_46411DC14343BF591646A1BE4E3B4FA3_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_431785354A7E7021B7F412AF6F9DAB98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_41BB274A42A692CBEFF0F2B2C0473DC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_37D8305C40AAAC0C9963BA9C077F0C8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_360C6ECD42782427693A6DBAD63947FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_360C6ECD42782427693A6DBAD63947FA_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_32BD1FD04AA80439EF67398ED13CFB80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_30F140A44856280DE0BE279EB9F07AB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_2C89DF0C46800C0B23647D8215CB8672();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_1BCD71D842DFFC1950394B9127D45F7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_11EF8AC54D8CF1B67EA0F0AD6B3D0FD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_0ED84D2E41B4C6E9279E37B012534B75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_0946F56D4B2DBFC7FEA42591C7552902();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_BlendListByBool_02B78D734C3D154F3181C18B34A9472B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ApplyAdditive_688EC98D4F2E404497137EA7EDEB41C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RnR_AnimBlueprint_AnimGraphNode_ApplyAdditive_1D6ED9F14A3DBE2F7E280BAADC521409();
	void Core_Variables();
	void Core_Cast_Setup();
	void BMX();
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
	void AnimNotify_Throw();
	void AnimNotify_SprintOutBlendStart();
	void AnimNotify_SprintLegSwitchR();
	void AnimNotify_SprintLegSwitchL();
	void AnimNotify_LeftSprintExitState();
	void AnimNotify_ExitedFallingState();
	void AnimNotify_EnteredSprintExitState();
	void AnimNotify_EnteredFallingState();
	void Aim_Anim();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
