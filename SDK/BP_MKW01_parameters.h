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

// Function BP_MKW01.BP_MKW01_C.GetChainVelocity
struct ABP_MKW01_C_GetChainVelocity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MKW01.BP_MKW01_C.ConvertVelocityToRTPC
struct ABP_MKW01_C_ConvertVelocityToRTPC_Params
{
	float                                              Velocity;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MKW01.BP_MKW01_C.UserConstructionScript
struct ABP_MKW01_C_UserConstructionScript_Params
{
};

// Function BP_MKW01.BP_MKW01_C.ReceiveTick
struct ABP_MKW01_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MKW01.BP_MKW01_C.ReceiveBeginPlay
struct ABP_MKW01_C_ReceiveBeginPlay_Params
{
};

// Function BP_MKW01.BP_MKW01_C.ExecuteUbergraph_BP_MKW01
struct ABP_MKW01_C_ExecuteUbergraph_BP_MKW01_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
