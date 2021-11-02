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

// Class DBDUIManagers.DBDTextManager
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UDBDTextManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_1Q7V[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIManagers.DBDTextManager"));
		return ptr;
	}



	bool GetLargeTextEnabled();
};

// Class DBDUIManagers.UIDataManager
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UUIDataManager : public UGameInstanceSubsystem
{
public:
	TMap<DBDSharedTypes_EItemRarity, class UMaterialInterface*> RarityMaterialMap;                                         // 0x0038(0x0050) (Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIManagers.UIDataManager"));
		return ptr;
	}



};

// Class DBDUIManagers.UIScaleManager
// 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
class UUIScaleManager : public UGameInstanceSubsystem
{
public:
	class UDataTable*                                  _dpiScaleCurveDB;                                          // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _dpiScaleCurve;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K3SQ[0x98];                                    // 0x0048(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIManagers.UIScaleManager"));
		return ptr;
	}



	float GetSkillCheckScaleFactor();
	float GetScaleFactor(DBDUIManagers_EScaleType Type);
	float GetMenuScaleFactor();
	float GetHudScaleFactor();
	DBDUIManagers_EDPIScaleCurveRatio GetDPIScaleCurveRatio();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
