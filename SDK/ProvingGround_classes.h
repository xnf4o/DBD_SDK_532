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

// Class ProvingGround.ProvingGroundManager
// 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
class UProvingGroundManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_VZFK[0x80];                                    // 0x0038(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ProvingGround.ProvingGroundManager"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
