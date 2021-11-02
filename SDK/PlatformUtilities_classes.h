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

// Class PlatformUtilities.CrowdChoiceManager
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UCrowdChoiceManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_63EF[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class PlatformUtilities.CrowdChoiceManager"));
		return ptr;
	}



};

// Class PlatformUtilities.CrowdPlayManager
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UCrowdPlayManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_6ZVZ[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class PlatformUtilities.CrowdPlayManager"));
		return ptr;
	}



};

// Class PlatformUtilities.PlatformSupportSubsystem
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UPlatformSupportSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_E1IC[0x30];                                    // 0x0038(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class PlatformUtilities.PlatformSupportSubsystem"));
		return ptr;
	}



	void DBD_StadiaShowStreamDebug(bool bEnabled);
	void DBD_StadiaRoleSelectPoll();
	void DBD_StadiaCharacterSelectPoll();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
