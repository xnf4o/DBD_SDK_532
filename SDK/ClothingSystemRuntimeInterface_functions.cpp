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
//		Offset -> 0x0512EEA0
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness"));

	UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params params {};
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x047EE2E0
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
//		Flags  -> (Native, Public, BlueprintCallable)
void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated"));

	UClothingSimulationInteractor_PhysicsAssetUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0512EE10
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride"));

	UClothingSimulationInteractor_EnableGravityOverride_Params params {};
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0512EDF0
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
//		Flags  -> (Native, Public, BlueprintCallable)
void UClothingSimulationInteractor::DisableGravityOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride"));

	UClothingSimulationInteractor_DisableGravityOverride_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036A0A10
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
//		Flags  -> (Native, Public, BlueprintCallable)
void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated"));

	UClothingSimulationInteractor_ClothConfigUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
