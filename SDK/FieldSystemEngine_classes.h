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
// Classes
//---------------------------------------------------------------------------

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                      // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldSystemActor"));
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFieldSystem : public UObject
{
public:
	unsigned char                                      UnknownData_UHSL[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldSystem"));
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystemComponent
// 0x0048 (FullSize[0x0470] - InheritedSize[0x0428])
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                                FieldSystem;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E2DV[0x10];                                    // 0x0430(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SupportedSolvers[0x10];                                    // 0x0430(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      UnknownData_D6LQ[0x20];                                    // 0x0450(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldSystemComponent"));
		return ptr;
	}



	void ResetFieldSystem();
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyPhysicsField(bool Enabled, TEnumAsByte<FieldSystemCore_EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
	void AddFieldCommand(bool Enabled, TEnumAsByte<FieldSystemCore_EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
};

// Class FieldSystemEngine.FieldSystemMetaData
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UFieldSystemMetaData : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldSystemMetaData"));
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	int                                                Iterations;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ELDM[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldSystemMetaDataIteration"));
		return ptr;
	}



	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int Iterations);
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	TEnumAsByte<FieldSystemCore_EFieldResolutionType>  ResolutionType;                                            // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4H68[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution"));
		return ptr;
	}



	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<FieldSystemCore_EFieldResolutionType> ResolutionType);
};

// Class FieldSystemEngine.FieldNodeBase
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UFieldNodeBase : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldNodeBase"));
		return ptr;
	}



};

// Class FieldSystemEngine.FieldNodeInt
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UFieldNodeInt : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldNodeInt"));
		return ptr;
	}



};

// Class FieldSystemEngine.FieldNodeFloat
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UFieldNodeFloat : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldNodeFloat"));
		return ptr;
	}



};

// Class FieldSystemEngine.FieldNodeVector
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UFieldNodeVector : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldNodeVector"));
		return ptr;
	}



};

// Class FieldSystemEngine.UniformInteger
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UUniformInteger : public UFieldNodeInt
{
public:
	int                                                Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RPWO[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.UniformInteger"));
		return ptr;
	}



	class UUniformInteger* SetUniformInteger(int Magnitude);
};

// Class FieldSystemEngine.RadialIntMask
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                              Radius;                                                    // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x00BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InteriorValue;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExteriorValue;                                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_ESetMaskConditionType> SetMaskCondition;                                          // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5EQ[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.RadialIntMask"));
		return ptr;
	}



	class URadialIntMask* SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, TEnumAsByte<FieldSystemCore_ESetMaskConditionType> SetMaskConditionIn);
};

// Class FieldSystemEngine.UniformScalar
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OISY[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.UniformScalar"));
		return ptr;
	}



	class UUniformScalar* SetUniformScalar(float Magnitude);
};

// Class FieldSystemEngine.RadialFalloff
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRange;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Default;                                                   // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldFalloffType>     Falloff;                                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NH2[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.RadialFalloff"));
		return ptr;
	}



	class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.PlaneFalloff
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRange;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Default;                                                   // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldFalloffType>     Falloff;                                                   // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AM8B[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.PlaneFalloff"));
		return ptr;
	}



	class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.BoxFalloff
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRange;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Default;                                                   // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HXRI[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x00D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldFalloffType>     Falloff;                                                   // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6M2B[0xF];                                     // 0x0101(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.BoxFalloff"));
		return ptr;
	}



	class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.NoiseField
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                              MinRange;                                                  // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.NoiseField"));
		return ptr;
	}



	class UNoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform);
};

// Class FieldSystemEngine.UniformVector
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UUniformVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x00BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.UniformVector"));
		return ptr;
	}



	class UUniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction);
};

// Class FieldSystemEngine.RadialVector
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class URadialVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x00BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.RadialVector"));
		return ptr;
	}



	class URadialVector* SetRadialVector(float Magnitude, const struct FVector& Position);
};

// Class FieldSystemEngine.RandomVector
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class URandomVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJA0[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.RandomVector"));
		return ptr;
	}



	class URandomVector* SetRandomVector(float Magnitude);
};

// Class FieldSystemEngine.OperatorField
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UOperatorField : public UFieldNodeBase
{
public:
	float                                              Magnitude;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQYN[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFieldNodeBase*                              RightField;                                                // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                              LeftField;                                                 // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldOperationType>   Operation;                                                 // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SC2U[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.OperatorField"));
		return ptr;
	}



	class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<FieldSystemCore_EFieldOperationType> Operation);
};

// Class FieldSystemEngine.ToIntegerField
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                             FloatField;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.ToIntegerField"));
		return ptr;
	}



	class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);
};

// Class FieldSystemEngine.ToFloatField
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                               IntField;                                                  // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.ToFloatField"));
		return ptr;
	}



	class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);
};

// Class FieldSystemEngine.CullingField
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                              Culling;                                                   // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                              Field;                                                     // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldCullingOperationType> Operation;                                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I49W[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.CullingField"));
		return ptr;
	}



	class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<FieldSystemCore_EFieldCullingOperationType> Operation);
};

// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UReturnResultsTerminal : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.ReturnResultsTerminal"));
		return ptr;
	}



	class UReturnResultsTerminal* SetReturnResultsTerminal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
