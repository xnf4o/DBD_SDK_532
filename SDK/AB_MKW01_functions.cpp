// Name: DBD, Version: 5.3.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_MKW01_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimGraph"));

	UAB_MKW01_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.IsOwnerInRollSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAB_MKW01_C::IsOwnerInRollSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerInRollSelection"));

	UAB_MKW01_C_IsOwnerInRollSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.IsNeedEdgeCase
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAB_MKW01_C::IsNeedEdgeCase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsNeedEdgeCase"));

	UAB_MKW01_C_IsNeedEdgeCase_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.IsOwnerAttackCarry
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAB_MKW01_C::IsOwnerAttackCarry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerAttackCarry"));

	UAB_MKW01_C_IsOwnerAttackCarry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.IsOwnerInMenu
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class ADBDMenuPlayer*                              AsDBDMenu_Player                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_MKW01_C::IsOwnerInMenu(class ADBDMenuPlayer** AsDBDMenu_Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerInMenu"));

	UAB_MKW01_C_IsOwnerInMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsDBDMenu_Player != nullptr)
		*AsDBDMenu_Player = params.AsDBDMenu_Player;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.IsOwnerMori
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAB_MKW01_C::IsOwnerMori(bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerMori"));

	UAB_MKW01_C_IsOwnerMori_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.StartTimer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAB_MKW01_C::StartTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.StartTimer"));

	UAB_MKW01_C_StartTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.IsOwnerTurnOffDynamic
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAB_MKW01_C::IsOwnerTurnOffDynamic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerTurnOffDynamic"));

	UAB_MKW01_C_IsOwnerTurnOffDynamic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.Check_VariablesAtStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAB_MKW01_C::Check_VariablesAtStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.Check_VariablesAtStart"));

	UAB_MKW01_C_Check_VariablesAtStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.IsOwnerAttackSwing
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAB_MKW01_C::IsOwnerAttackSwing(bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerAttackSwing"));

	UAB_MKW01_C_IsOwnerAttackSwing_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.Updating_Variables
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAB_MKW01_C::Updating_Variables()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.Updating_Variables"));

	UAB_MKW01_C_Updating_Variables_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.IsOwnerFirstPerson
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               FPV                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAB_MKW01_C::IsOwnerFirstPerson(bool* FPV)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerFirstPerson"));

	UAB_MKW01_C_IsOwnerFirstPerson_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FPV != nullptr)
		*FPV = params.FPV;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB
//		Flags  -> (BlueprintEvent)
void UAB_MKW01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB"));

	UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20
//		Flags  -> (BlueprintEvent)
void UAB_MKW01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20"));

	UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_MKW01_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.BlueprintUpdateAnimation"));

	UAB_MKW01_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.BlueprintBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UAB_MKW01_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.BlueprintBeginPlay"));

	UAB_MKW01_C_BlueprintBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.AnimNotify_End
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_MKW01_C::AnimNotify_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimNotify_End"));

	UAB_MKW01_C_AnimNotify_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.AnimNotify_Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_MKW01_C::AnimNotify_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimNotify_Start"));

	UAB_MKW01_C_AnimNotify_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_MKW01_C::AnimNotify_FX_MK_Chain_Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Show"));

	UAB_MKW01_C_AnimNotify_FX_MK_Chain_Show_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Hide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_MKW01_C::AnimNotify_FX_MK_Chain_Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Hide"));

	UAB_MKW01_C_AnimNotify_FX_MK_Chain_Hide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851
//		Flags  -> (BlueprintEvent)
void UAB_MKW01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851"));

	UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_MKW01.AB_MKW01_C.ExecuteUbergraph_AB_MKW01
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_MKW01_C::ExecuteUbergraph_AB_MKW01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.ExecuteUbergraph_AB_MKW01"));

	UAB_MKW01_C_ExecuteUbergraph_AB_MKW01_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
