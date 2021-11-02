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

// Class QueryService.ActorPairQueryEvaluatorComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UActorPairQueryEvaluatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_KU2P[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class QueryService.ActorPairQueryEvaluatorComponent"));
		return ptr;
	}



};

// Class QueryService.ActorPairQueryEvaluatorSubscriberTest
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class AActorPairQueryEvaluatorSubscriberTest : public AActor
{
public:
	unsigned char                                      UnknownData_OVJ5[0x28];                                    // 0x0230(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class QueryService.ActorPairQueryEvaluatorSubscriberTest"));
		return ptr;
	}



	void OnRangeChanged(bool InRange);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
