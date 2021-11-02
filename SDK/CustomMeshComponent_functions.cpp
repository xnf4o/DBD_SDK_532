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
//		Offset -> 0x02EB1330
//		Name   -> Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FCustomMeshTriangle>                 Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles"));

	UCustomMeshComponent_SetCustomMeshTriangles_Params params {};
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB1310
//		Name   -> Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCustomMeshComponent::ClearCustomMeshTriangles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles"));

	UCustomMeshComponent_ClearCustomMeshTriangles_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02EB1260
//		Name   -> Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FCustomMeshTriangle>                 Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles"));

	UCustomMeshComponent_AddCustomMeshTriangles_Params params {};
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
