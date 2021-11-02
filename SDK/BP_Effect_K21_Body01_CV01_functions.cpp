﻿// Name: DBD, Version: 5.3.2

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
//		Name   -> Function BP_Effect_K21_Body01_CV01.BP_Effect_K21_Body01_CV01_C.AttachToSkeletalMesh
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      SkeletonPart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Effect_K21_Body01_CV01_C::AttachToSkeletalMesh(class USkeletalMeshComponent* SkeletonPart)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Effect_K21_Body01_CV01.BP_Effect_K21_Body01_CV01_C.AttachToSkeletalMesh"));

	ABP_Effect_K21_Body01_CV01_C_AttachToSkeletalMesh_Params params {};
	params.SkeletonPart = SkeletonPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function BP_Effect_K21_Body01_CV01.BP_Effect_K21_Body01_CV01_C.ExecuteUbergraph_BP_Effect_K21_Body01_CV01
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Effect_K21_Body01_CV01_C::ExecuteUbergraph_BP_Effect_K21_Body01_CV01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Effect_K21_Body01_CV01.BP_Effect_K21_Body01_CV01_C.ExecuteUbergraph_BP_Effect_K21_Body01_CV01"));

	ABP_Effect_K21_Body01_CV01_C_ExecuteUbergraph_BP_Effect_K21_Body01_CV01_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
