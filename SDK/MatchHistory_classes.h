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

// Class MatchHistory.MatchHistorySubsystem
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UMatchHistorySubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_VEVC[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MatchHistory.MatchHistorySubsystem"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
