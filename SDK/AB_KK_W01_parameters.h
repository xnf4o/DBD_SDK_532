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

// Function AB_KK_W01.AB_KK_W01_C.AnimGraph
struct UAB_KK_W01_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function AB_KK_W01.AB_KK_W01_C.GetLegionAttack
struct UAB_KK_W01_C_GetLegionAttack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AB_KK_W01.AB_KK_W01_C.BlueprintUpdateAnimation
struct UAB_KK_W01_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AB_KK_W01.AB_KK_W01_C.ExecuteUbergraph_AB_KK_W01
struct UAB_KK_W01_C_ExecuteUbergraph_AB_KK_W01_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
