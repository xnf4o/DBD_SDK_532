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
//		Offset -> 0x02ABF580
//		Name   -> Function UITween.UITween.Create
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     targetWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		UITween_EEasingType                                Easing                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITween::STATIC_Create(class UWidget* targetWidget, float Duration, float Delay, UITween_EEasingType Easing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITween.Create"));

	UUITween_Create_Params params {};
	params.targetWidget = targetWidget;
	params.Duration = Duration;
	params.Delay = Delay;
	params.Easing = Easing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABF510
//		Name   -> Function UITween.UITween.Clear
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     targetWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITween::STATIC_Clear(class UWidget* targetWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITween.Clear"));

	UUITween_Clear_Params params {};
	params.targetWidget = targetWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AC0190
//		Name   -> Function UITween.UITweenInstance.ToTranslation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::ToTranslation(const struct FVector2D& targetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.ToTranslation"));

	UUITweenInstance_ToTranslation_Params params {};
	params.targetValue = targetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AC00F0
//		Name   -> Function UITween.UITweenInstance.ToScale
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::ToScale(const struct FVector2D& targetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.ToScale"));

	UUITweenInstance_ToScale_Params params {};
	params.targetValue = targetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AC0080
//		Name   -> Function UITween.UITweenInstance.ToReset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::ToReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.ToReset"));

	UUITweenInstance_ToReset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFFE0
//		Name   -> Function UITween.UITweenInstance.ToOpacity
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::ToOpacity(float targetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.ToOpacity"));

	UUITweenInstance_ToOpacity_Params params {};
	params.targetValue = targetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFEA0
//		Name   -> Function UITween.UITweenInstance.ToMaterialVectorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceDynamic*                    targetMaterialInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       targetParameterName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::ToMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const struct FName& targetParameterName, const struct FLinearColor& targetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.ToMaterialVectorParameter"));

	UUITweenInstance_ToMaterialVectorParameter_Params params {};
	params.targetMaterialInstance = targetMaterialInstance;
	params.targetParameterName = targetParameterName;
	params.targetValue = targetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFD70
//		Name   -> Function UITween.UITweenInstance.ToMaterialScalarParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceDynamic*                    targetMaterialInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       targetParameterName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::ToMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const struct FName& targetParameterName, float targetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.ToMaterialScalarParameter"));

	UUITweenInstance_ToMaterialScalarParameter_Params params {};
	params.targetMaterialInstance = targetMaterialInstance;
	params.targetParameterName = targetParameterName;
	params.targetValue = targetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFCE0
//		Name   -> Function UITween.UITweenInstance.ToColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::ToColor(const struct FLinearColor& targetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.ToColor"));

	UUITweenInstance_ToColor_Params params {};
	params.targetValue = targetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFCB0
//		Name   -> Function UITween.UITweenInstance.GetTargetWidget
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UUITweenInstance::GetTargetWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.GetTargetWidget"));

	UUITweenInstance_GetTargetWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFC90
//		Name   -> Function UITween.UITweenInstance.GetProgress
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUITweenInstance::GetProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.GetProgress"));

	UUITweenInstance_GetProgress_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFC70
//		Name   -> Function UITween.UITweenInstance.GetEasing
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		UITween_EEasingType                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UITween_EEasingType UUITweenInstance::GetEasing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.GetEasing"));

	UUITweenInstance_GetEasing_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFC50
//		Name   -> Function UITween.UITweenInstance.GetDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUITweenInstance::GetDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.GetDuration"));

	UUITweenInstance_GetDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFC30
//		Name   -> Function UITween.UITweenInstance.GetDelay
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUITweenInstance::GetDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.GetDelay"));

	UUITweenInstance_GetDelay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFB90
//		Name   -> Function UITween.UITweenInstance.FromTranslation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::FromTranslation(const struct FVector2D& startValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.FromTranslation"));

	UUITweenInstance_FromTranslation_Params params {};
	params.startValue = startValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFAE0
//		Name   -> Function UITween.UITweenInstance.FromScale
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::FromScale(const struct FVector2D& startValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.FromScale"));

	UUITweenInstance_FromScale_Params params {};
	params.startValue = startValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABFA40
//		Name   -> Function UITween.UITweenInstance.FromOpacity
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::FromOpacity(float startValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.FromOpacity"));

	UUITweenInstance_FromOpacity_Params params {};
	params.startValue = startValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABF900
//		Name   -> Function UITween.UITweenInstance.FromMaterialVectorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceDynamic*                    targetMaterialInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       targetParameterName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::FromMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const struct FName& targetParameterName, const struct FLinearColor& targetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.FromMaterialVectorParameter"));

	UUITweenInstance_FromMaterialVectorParameter_Params params {};
	params.targetMaterialInstance = targetMaterialInstance;
	params.targetParameterName = targetParameterName;
	params.targetValue = targetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABF7D0
//		Name   -> Function UITween.UITweenInstance.FromMaterialScalarParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceDynamic*                    targetMaterialInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       targetParameterName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::FromMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const struct FName& targetParameterName, float targetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.FromMaterialScalarParameter"));

	UUITweenInstance_FromMaterialScalarParameter_Params params {};
	params.targetMaterialInstance = targetMaterialInstance;
	params.targetParameterName = targetParameterName;
	params.targetValue = targetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABF740
//		Name   -> Function UITween.UITweenInstance.FromColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::FromColor(const struct FLinearColor& startValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.FromColor"));

	UUITweenInstance_FromColor_Params params {};
	params.startValue = startValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABF6B0
//		Name   -> Function UITween.UITweenInstance.Easing
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		UITween_EEasingType                                InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUITweenInstance*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITweenInstance* UUITweenInstance::Easing(UITween_EEasingType InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.Easing"));

	UUITweenInstance_Easing_Params params {};
	params.InType = InType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ABF4F0
//		Name   -> Function UITween.UITweenInstance.Begin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUITweenInstance::Begin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UITween.UITweenInstance.Begin"));

	UUITweenInstance_Begin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
