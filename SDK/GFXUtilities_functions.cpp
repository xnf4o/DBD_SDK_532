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
//		Offset -> 0x05CF6290
//		Name   -> Function GFXUtilities.BatchMeshCommands.UpdateMaterials
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UBatchMeshCommands::UpdateMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.UpdateMaterials"));

	UBatchMeshCommands_UpdateMaterials_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF61A0
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetVectorParameter
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetVectorParameter(const struct FName& ParameterName, const struct FVector& NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetVectorParameter"));

	UBatchMeshCommands_SetVectorParameter_Params params {};
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF60C0
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetTextureParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    newTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetTextureParameter(const struct FName& ParameterName, class UTexture* newTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetTextureParameter"));

	UBatchMeshCommands_SetTextureParameter_Params params {};
	params.ParameterName = ParameterName;
	params.newTexture = newTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5FD0
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetStencilIntegerScalarParameter(const struct FName& ParameterName, int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter"));

	UBatchMeshCommands_SetStencilIntegerScalarParameter_Params params {};
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5EF0
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetScalarParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              NewValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetScalarParameter(const struct FName& ParameterName, float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetScalarParameter"));

	UBatchMeshCommands_SetScalarParameter_Params params {};
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5E60
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               inRenderInMainPass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetRenderInMainPass(bool inRenderInMainPass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass"));

	UBatchMeshCommands_SetRenderInMainPass_Params params {};
	params.inRenderInMainPass = inRenderInMainPass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5DD0
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               renderInCustomDepth                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetRenderInCustomDepth(bool renderInCustomDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth"));

	UBatchMeshCommands_SetRenderInCustomDepth_Params params {};
	params.renderInCustomDepth = renderInCustomDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5D40
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               renderInCustomColour                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetRenderInCustomColourNoDepth(bool renderInCustomColour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth"));

	UBatchMeshCommands_SetRenderInCustomColourNoDepth_Params params {};
	params.renderInCustomColour = renderInCustomColour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5CB0
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               receivesDecals                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetReceivesDecals(bool receivesDecals)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetReceivesDecals"));

	UBatchMeshCommands_SetReceivesDecals_Params params {};
	params.receivesDecals = receivesDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5C10
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     GroupName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetMaterial(const struct FString& GroupName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetMaterial"));

	UBatchMeshCommands_SetMaterial_Params params {};
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5B90
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FLightingChannels                           LightingChannels                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetLightingChannelForAllMeshes(const struct FLightingChannels& LightingChannels)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes"));

	UBatchMeshCommands_SetLightingChannelForAllMeshes_Params params {};
	params.LightingChannels = LightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5B10
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                stencilValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetCustomDepthStencilValue(int stencilValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue"));

	UBatchMeshCommands_SetCustomDepthStencilValue_Params params {};
	params.stencilValue = stencilValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5A30
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetColourParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                NewValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetColourParameter(const struct FName& ParameterName, const struct FLinearColor& NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetColourParameter"));

	UBatchMeshCommands_SetColourParameter_Params params {};
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF59A0
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               castCinematicShadows                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetCastCinematicShadows(bool castCinematicShadows)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows"));

	UBatchMeshCommands_SetCastCinematicShadows_Params params {};
	params.castCinematicShadows = castCinematicShadows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5920
//		Name   -> Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          MaterialInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetAllToSameMaterial(class UMaterialInterface* MaterialInterface)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial"));

	UBatchMeshCommands_SetAllToSameMaterial_Params params {};
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5900
//		Name   -> Function GFXUtilities.BatchMeshCommands.ResetMaterials
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UBatchMeshCommands::ResetMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.ResetMaterials"));

	UBatchMeshCommands_ResetMaterials_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5800
//		Name   -> Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              outValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBatchMeshCommands::CopyFirstScalarParameter(const struct FName& ParameterName, float* outValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter"));

	UBatchMeshCommands_CopyFirstScalarParameter_Params params {};
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outValue != nullptr)
		*outValue = params.outValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05CF5730
//		Name   -> Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPropagateToChildren                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetVisibility"));

	UBatchMeshCommands_BatchSetVisibility_Params params {};
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF56A0
//		Name   -> Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Skip                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::BatchSetSkipComponentAndChildrenTransformUpdate(bool Skip)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate"));

	UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Params params {};
	params.Skip = Skip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF5610
//		Name   -> Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::BatchSetComponentTickEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled"));

	UBatchMeshCommands_BatchSetComponentTickEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF6420
//		Name   -> Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UPrimitiveComponent*>                 ignoredPrimitives                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClippableProviderComponent::SetIgnoredPrimitives(TArray<class UPrimitiveComponent*> ignoredPrimitives)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives"));

	UClippableProviderComponent_SetIgnoredPrimitives_Params params {};
	params.ignoredPrimitives = ignoredPrimitives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF7230
//		Name   -> Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetIBLMultiplicator
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              IBLMultiplicator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDReflectionCaptureSpawnerComponent::SetIBLMultiplicator(float IBLMultiplicator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetIBLMultiplicator"));

	UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Params params {};
	params.IBLMultiplicator = IBLMultiplicator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF71B0
//		Name   -> Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ContributionFactor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDReflectionCaptureSpawnerComponent::SetContributionFactor(float ContributionFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor"));

	UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Params params {};
	params.ContributionFactor = ContributionFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF7130
//		Name   -> Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Brightness                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDReflectionCaptureSpawnerComponent::SetBrightness(float Brightness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness"));

	UDBDReflectionCaptureSpawnerComponent_SetBrightness_Params params {};
	params.Brightness = Brightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF7530
//		Name   -> Function GFXUtilities.GFXUtilities.ActivateVFX
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFXUtilities::STATIC_ActivateVFX(class USkeletalMeshComponent* SkeletalMeshComponent, bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.GFXUtilities.ActivateVFX"));

	UGFXUtilities_ActivateVFX_Params params {};
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF81A0
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isRandom                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::SetRandomizeLength(bool isRandom)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength"));

	ULightIntensityTimelineComponent_SetRandomizeLength_Params params {};
	params.isRandom = isRandom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF8120
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              newMinValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::SetMinLength(float newMinValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength"));

	ULightIntensityTimelineComponent_SetMinLength_Params params {};
	params.newMinValue = newMinValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF80A0
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              newMaxValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::SetMaxLength(float newMaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength"));

	ULightIntensityTimelineComponent_SetMaxLength_Params params {};
	params.newMaxValue = newMaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF8080
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULightIntensityTimelineComponent::SetLightToMaxValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue"));

	ULightIntensityTimelineComponent_SetLightToMaxValue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF8000
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCurveFloat*                                 lightcurve                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::SetLightCurve(class UCurveFloat* lightcurve)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve"));

	ULightIntensityTimelineComponent_SetLightCurve_Params params {};
	params.lightcurve = lightcurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF7FE0
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.Reset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULightIntensityTimelineComponent::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.Reset"));

	ULightIntensityTimelineComponent_Reset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF7FC0
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULightIntensityTimelineComponent::RegisterForTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick"));

	ULightIntensityTimelineComponent_RegisterForTick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF7FA0
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULightIntensityTimelineComponent::DeactivateTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick"));

	ULightIntensityTimelineComponent_DeactivateTick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF7E80
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialHelper*                             matHelper                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       propName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::AddMaterialHelper(class UMaterialHelper* matHelper, const struct FName& propName, float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper"));

	ULightIntensityTimelineComponent_AddMaterialHelper_Params params {};
	params.matHelper = matHelper;
	params.propName = propName;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF7DB0
//		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.AddLight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULightComponent*                             Light                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::AddLight(class ULightComponent* Light, float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.AddLight"));

	ULightIntensityTimelineComponent_AddLight_Params params {};
	params.Light = Light;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF8460
//		Name   -> Function GFXUtilities.MaterialHelper.RefreshMeshes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMaterialHelper::RefreshMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.MaterialHelper.RefreshMeshes"));

	UMaterialHelper_RefreshMeshes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF83E0
//		Name   -> Function GFXUtilities.MaterialHelper.RefreshMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMeshComponent*                              mc                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaterialHelper::RefreshMesh(class UMeshComponent* mc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.MaterialHelper.RefreshMesh"));

	UMaterialHelper_RefreshMesh_Params params {};
	params.mc = mc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CF8890
//		Name   -> Function GFXUtilities.OuterlineComponent.SetIntensity
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOuterlineComponent::SetIntensity(float Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.OuterlineComponent.SetIntensity"));

	UOuterlineComponent_SetIntensity_Params params {};
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
