﻿#pragma once

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

// Class SubscriptionSubsystem.SubscriptionSubsystem
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class USubscriptionSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_0MAZ[0x38];                                    // 0x0038(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SubscriptionSubsystem.SubscriptionSubsystem"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
