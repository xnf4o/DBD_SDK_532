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

// Class RetentionRewardsUtilities.RetentionRewardsSubsystem
// 0x0148 (FullSize[0x0180] - InheritedSize[0x0038])
class URetentionRewardsSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_IFZF[0x148];                                   // 0x0038(0x0148) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class RetentionRewardsUtilities.RetentionRewardsSubsystem"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
