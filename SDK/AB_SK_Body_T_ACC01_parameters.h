#pragma once

// Name: DBD, Version: 5.3.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.AnimGraph
struct UAB_SK_Body_T_ACC01_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.GetOwnerActor
struct UAB_SK_Body_T_ACC01_C_GetOwnerActor_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.BlueprintUpdateAnimation
struct UAB_SK_Body_T_ACC01_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.ExecuteUbergraph_AB_SK_Body_T_ACC01
struct UAB_SK_Body_T_ACC01_C_ExecuteUbergraph_AB_SK_Body_T_ACC01_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
