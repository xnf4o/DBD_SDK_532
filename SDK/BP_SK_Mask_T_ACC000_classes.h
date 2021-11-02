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

// BlueprintGeneratedClass BP_SK_Mask_T_ACC000.BP_SK_Mask_T_ACC000_C
// 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
class ABP_SK_Mask_T_ACC000_C : public AItemBlueprint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SK_Mask_T_ACC000.BP_SK_Mask_T_ACC000_C"));
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SK_Mask_T_ACC000(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
