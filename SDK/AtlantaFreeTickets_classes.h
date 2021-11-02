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

// Class AtlantaFreeTickets.AtlantaFreeTicketsManager
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UAtlantaFreeTicketsManager : public UObject
{
public:
	unsigned char                                      UnknownData_Z4OX[0xC0];                                    // 0x0030(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AtlantaFreeTickets.AtlantaFreeTicketsManager"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
