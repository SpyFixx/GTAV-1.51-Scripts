#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_64 = false;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	bool bLocal_77 = false;
	int iLocal_78 = 0;
	bool bLocal_79 = false;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = false;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<21> Local_169 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_190[15];
	bool bLocal_341 = false;
	float fLocal_342 = 0f;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<411> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	vector3 vLocal_840[1] = {{ 0f, 0f, 0f } };
	int iLocal_844 = 0;
	var uLocal_845 = 0;
	int iLocal_846 = 0;
	float fLocal_847 = 0f;
	int iLocal_848 = 0;
	vector3 vLocal_849 = { 0f, 0f, 0f };
	int iLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	int iLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	int iLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	bool bLocal_861 = false;
	struct<28> Local_862 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 5;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	int iLocal_933 = 0;
	struct<2> Local_934 = { 0, 0 } ;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 1097859072;
	var uLocal_939 = 1500;
	var uLocal_940 = 45;
	var uLocal_941 = 1103626240;
	var uLocal_942 = 5;
	int iLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	float fLocal_956[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_964[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_987[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_1010 = false;
	bool bLocal_1011 = false;
	bool bLocal_1012 = false;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	bool bLocal_1017 = false;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_77 = HUD::_GET_LEVEL_BLIP_SPRITE();
	iLocal_78 = HUD::_GET_WAYPOINT_BLIP_SPRITE();
	vLocal_83 = { 500f, 500f, 500f };
	iLocal_839 = joaat("G_M_M_CHIGOON_02");
	iLocal_844 = 1;
	vLocal_849 = { 344.7458f, 452.1832f, 145.9936f };
	iLocal_955 = 2;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_419(2);
		func_417();
	}
	MISC::SET_MISSION_FLAG(true);
	func_404();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_409.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_409);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;

	iVar1 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("SP2_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("SP1_DIST_DRIVING_CAR");
	}
	else
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_9()
{
	if (func_403(&Local_409))
	{
		func_402(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_401(&Local_409, 0))
			{
				func_399();
			}
		}
		else if (func_398(&Local_409, 31) > 5f)
		{
			func_419(2);
			func_417();
		}
	}
	else
	{
		func_397(&Local_409);
		func_376(&Local_409, &uLocal_936);
		func_371();
		func_370(&Local_409, &uLocal_845, 0);
		func_369(&Local_409);
		if (Local_409.f_410 == 9)
		{
			func_368(&Local_409);
			func_344(&Local_409, 0, 1);
		}
		if (Local_409.f_410 > 2)
		{
			if (!func_343(&Local_409))
			{
				func_308();
			}
			else
			{
				func_286(&Local_409, "Taxi Not Driveable", func_307(&Local_409));
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_283();
				func_282(&Local_409, 16, 4f, 0);
				func_279(&Local_409, func_281(iLocal_955), func_281(iLocal_954), "TaxiKwak", iLocal_839, 180.6f, 1114636288 /* Float: 60f */);
				func_277(&Local_409);
				func_276(&Local_409, 1);
				break;
			case 1:
				if (func_274())
				{
					func_273();
					func_272(&(vLocal_840[0 /*3*/]), "TAXI_SC_BN_03", 200);
					func_271(&Local_409, &vLocal_840);
					Local_409.f_14 = { func_281(iLocal_955) };
					func_251();
					func_250(&Local_409);
					func_276(&Local_409, 3);
				}
				break;
			case 3:
				if (func_243(&Local_409, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_409.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 8, 1, 1, 0);
					}
					func_242(&Local_409, 1, 0);
					func_276(&Local_409, 5);
				}
				break;
			case 5:
				if (func_214(&Local_409, 0, 1109393408 /* Float: 40f */))
				{
					func_276(&Local_409, 15);
				}
				break;
			case 15:
				if (func_213(&Local_409))
				{
					Local_409.f_17 = { vLocal_849 };
					iLocal_933 = func_199();
					Local_934 = { func_194(iLocal_933) };
					Local_409.f_136 = { Local_934 };
					fLocal_847 = 210f;
					func_193(&iLocal_852);
					func_189(&Local_409, 9, 1, 0, 0);
					func_188(&Local_409);
					func_187();
					func_276(&Local_409, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_409.f_2, Local_409.f_4, false))
					{
						func_185(&Local_409);
						func_276(&Local_409, 5);
					}
				}
				break;
			case 9:
				func_181();
				if (func_180(&iLocal_852) > (fLocal_847 + 10f))
				{
					if (!func_179())
					{
						func_286(&Local_409, "Player did not hit the deadline", 20);
					}
					else
					{
						func_177();
					}
				}
				if (func_136(&Local_409, func_176(), 7f, 30f))
				{
					if (!func_179())
					{
						func_135(&Local_862, 15, 1);
						HUD::REMOVE_BLIP(&(Local_409.f_9));
						if (func_398(&Local_409, 7) < fLocal_956[5] || Local_409.f_56 >= Local_409.f_59)
						{
							func_134(&Local_409, 0);
						}
						if (func_180(&iLocal_852) > 210f)
						{
							Local_409.f_56 = 0;
						}
						func_132(&Local_409);
						func_128(&Local_409);
						func_127(&Local_409);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 26, true);
						}
						func_276(&Local_409, 27);
					}
					else
					{
						func_177();
					}
				}
				break;
			case 27:
				if (func_116(&Local_409, 1))
				{
					func_114(0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_409.f_3, false))
					{
						if (func_112(func_113(), Local_409.f_29, 0))
						{
							ENTITY::SET_ENTITY_HEADING(Local_409.f_3, 84.9058f);
							PED::SET_PED_KEEP_TASK(Local_409.f_3, true);
						}
						else
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_409.f_29, 2f, 20000, 0.25f, false, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 322.1072f, 442.4288f, 140.6772f, 2f, 20000, 0.25f, false, 40000f);
							TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
							TASK::TASK_PERFORM_SEQUENCE(Local_409.f_3, iLocal_848);
							PED::SET_PED_KEEP_TASK(Local_409.f_3, true);
						}
					}
					func_276(&Local_409, 29);
				}
				break;
			case 29:
				if (func_74(&Local_409, &iLocal_943))
				{
					func_10(1, &Local_409, 1);
					func_276(&Local_409, 30);
				}
				break;
			case 30:
				func_417();
				break;
		}
	}
}

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_48(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_46(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)
{
	func_402(uParam0);
	if (func_179())
	{
		func_44();
	}
	func_42();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_37(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_34(uParam0->f_14, 1, 1114636288 /* Float: 60f */);
	func_33(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (func_30())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_20(0, 1, 1, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (func_19(Global_111638.f_19092, 4))
	{
		func_17(&(Global_111638.f_19092), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_16(), false);
	}
	if (bParam1)
	{
		func_15(uParam0);
	}
	func_14(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_12(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_180(&iLocal_90) * 1000f)), 12, 0);
}

void func_12(int iParam0)
{
	var uVar0;

	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_13(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_13(int iParam0)
{
	struct<8> Var0;

	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_14(var uParam0)
{
	VEHICLE::_REMOVE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_15(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, joaat("PLAYER"));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_16()
{
	return joaat("TAXI");
}

void func_17(var uParam0, int iParam1)
{
	func_18(uParam0, iParam1);
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_20(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_29(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_28())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_27(1, bParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_29(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_27(0, bParam3, bParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_25(PLAYER::PLAYER_ID())) && !func_22(PLAYER::PLAYER_ID(), 0)) && !func_21()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_25(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_76620 = 0;
	}
}

bool func_21()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

bool func_22(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_23(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312745;
}

bool func_25(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return true;
	}
	if (func_26())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return true;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_26()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_27(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_28()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

bool func_30()
{
	if (!func_32() && !func_31())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return true;
		}
	}
	return false;
}

bool func_31()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPCAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_32()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPINTERNET")) > 0)
	{
		return true;
	}
	return false;
}

void func_33(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_34(vector3 vParam0, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_35(vParam0, 1f, -fParam4, -fParam4, -fParam4) };
	vVar3 = { func_35(vParam0, 1f, fParam4, fParam4, fParam4) };
	vVar0.f_2 = (vVar0.z - 22f);
	vVar3.f_2 = (vVar3.z + 22f);
	if (!bParam3)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar0, vVar3, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar3, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

Vector3 func_35(vector3 vParam0, float fParam3, struct<2> Param4, var uParam6)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

void func_36(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_112(vParam0, func_113(), 0))
	{
		vVar0 = { func_35(vParam0, 1f, -30f, -30f, -10f) };
		vVar3 = { func_35(vParam0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar3, bParam3, true);
	}
}

void func_37(int iParam0)
{
	if (func_41())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_40())
		{
			func_38(1, 1);
		}
		else
		{
			func_38(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_28())
	{
		Global_19486.f_1 = 3;
	}
}

void func_38(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_39(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_40()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_41()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_42()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0 /*17*/] && !Global_95677[iVar0 /*17*/].f_1)
		{
			if (Global_95677[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95677[iVar0 /*17*/].f_5 != 88 && Global_95677[iVar0 /*17*/].f_5 != 89) && Global_95677[iVar0 /*17*/].f_5 != 92)
				{
					func_43(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_43(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

void func_44()
{
	Global_19671 = 0;
	func_45();
}

void func_45()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_19092.f_22[0]++;
			func_47("Fares Completed ++ = ", Global_111638.f_19092.f_22[0]);
			break;
		case 1:
			Global_111638.f_19092.f_22[1]++;
			func_47("Fares Failed ++ = ", Global_111638.f_19092.f_22[1]);
			break;
		case 2:
			Global_111638.f_19092.f_22[2]++;
			func_47("Fares Accepted ++ ", Global_111638.f_19092.f_22[2]);
			break;
		case 3:
			Global_111638.f_19092.f_22[3]++;
			func_47("Fares Expired ++ ", Global_111638.f_19092.f_22[3]);
			break;
		case 13:
			Global_111638.f_19092.f_22[13]++;
			func_47("Passengers run ++ = ", Global_111638.f_19092.f_22[13]);
			break;
		case 14:
			Global_111638.f_19092.f_22[14]++;
			func_47("Passenger Forced to Pay ++ = ", Global_111638.f_19092.f_22[14]);
			break;
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111638.f_19092.f_22[4])
				{
					Global_111638.f_19092.f_22[4] = iParam1;
					func_47("This distance ", iParam1);
					func_47(" is longer than current best", Global_111638.f_19092.f_22[4]);
				}
				else
				{
					func_47("Longest Distance Not Beat ", Global_111638.f_19092.f_22[4]);
				}
			}
			break;
		case 5:
			Global_111638.f_19092.f_22[5] = (Global_111638.f_19092.f_22[5] + iParam1);
			func_47("Total Distance w/ Passenger = ", Global_111638.f_19092.f_22[5]);
			break;
		case 6:
			if (iParam1 == 0)
			{
				Global_111638.f_19092.f_22[6]++;
			}
			else
			{
				Global_111638.f_19092.f_22[6] = (Global_111638.f_19092.f_22[6] + iParam1);
			}
			func_47("Wanted Levels ++ = ", Global_111638.f_19092.f_22[6]);
			break;
		case 7:
			if (iParam1 > 0)
			{
				Global_111638.f_19092.f_22[7] = (Global_111638.f_19092.f_22[7] + iParam1);
			}
			else
			{
				Global_111638.f_19092.f_22[7]++;
			}
			func_47("Wanted Levels Lost = ", Global_111638.f_19092.f_22[7]);
			break;
		case 8:
			Global_111638.f_19092.f_22[8]++;
			func_47("Taxis wrecked ++ = ", Global_111638.f_19092.f_22[8]);
			break;
		case 9:
			Global_111638.f_19092.f_22[9]++;
			func_47("Horn Honked ++ = ", Global_111638.f_19092.f_22[9]);
			break;
		case 10:
			Global_111638.f_19092.f_22[10] = (Global_111638.f_19092.f_22[10] + iParam1);
			func_47("Total Money Earned = ", Global_111638.f_19092.f_22[10]);
			break;
		case 11:
			Global_111638.f_19092.f_22[11] = (Global_111638.f_19092.f_22[11] + iParam1);
			func_47("Total Tips Earned = ", Global_111638.f_19092.f_22[11]);
			break;
		case 12:
			if (iParam1 > Global_111638.f_19092.f_22[12])
			{
				Global_111638.f_19092.f_22[12] = iParam1;
				func_47("New Highest Tip = ", Global_111638.f_19092.f_22[12]);
			}
			else
			{
				func_47("Highest Tip Not Reached = ", Global_111638.f_19092.f_22[12]);
			}
			break;
	}
}

void func_47(char* sParam0, int iParam1)
{
}

void func_48(var uParam0)
{
	func_46(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_419(1);
		func_60(15, 1);
	}
	func_58(&(Global_111638.f_19092), 1024);
	if (!func_19(Global_111638.f_19092, 64))
	{
		func_49(func_56(func_57(uParam0)), 0, 0);
	}
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_55((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_50();
	}
}

void func_50()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!MISC::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					MISC::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), true);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_111381, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_111383, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_54(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_53() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()
{
	if (func_52(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

int func_53()
{
	return Global_30768;
}

bool func_54(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 78)
	{
		return false;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return false;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return false;
}

bool func_55(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (iParam2 == -1)
	{
		iParam2 = func_24();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

int func_56(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 2:
			iVar0 = 201;
			break;
		case 3:
			iVar0 = 202;
			break;
		case 4:
			iVar0 = 203;
			break;
		case 5:
			iVar0 = 204;
			break;
		case 6:
			iVar0 = 205;
			break;
		case 7:
			iVar0 = 206;
			break;
		case 8:
			iVar0 = 207;
			break;
		case 9:
			break;
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_57(var uParam0)
{
	return uParam0->f_411;
}

void func_58(var uParam0, int iParam1)
{
	func_59(uParam0, iParam1);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_60(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_61(iParam0, iParam1);
}

int func_61(int iParam0, int iParam1)
{
	if (func_73(14) && !func_72(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_71(&Global_4270065))
	{
		if (func_69(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_62(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_62(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return false;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return false;
	}
	if (func_69(uParam0, iParam1))
	{
		return false;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	func_65(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_63(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_63(var uParam0, int iParam1)
{
	int iVar0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return 0;
	}
	if (func_69(uParam0, iParam1))
	{
		return 0;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_64(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_64(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_65(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_66(uParam0, iVar0);
		iVar0++;
	}
	func_67(uParam0, (Global_4270064 - 0.5f));
}

void func_66(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_67(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_68(var uParam0)
{
	return uParam0->f_80;
}

bool func_69(var uParam0, int iParam1)
{
	return func_70(uParam0, iParam1) != -1;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_71(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_72(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		default:
			break;
	}
	return false;
}

bool func_73(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_74(var uParam0, int iParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_179() && func_398(uParam0, 0) > 1f)
			{
				if (func_30())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				func_111(uParam0);
				func_17(&(Global_111638.f_19092), 4096);
				func_108(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_110(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_107(1);
				iLocal_168 = 6;
			}
			break;
		case 6:
			if (!func_98(iParam1, 0))
			{
				func_75(uParam0);
				func_282(uParam0, 0, 0, 0);
				func_107(0);
				iLocal_168 = 7;
				return true;
			}
			break;
	}
	return false;
}

void func_75(var uParam0)
{
	int iVar0;

	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_76(func_96(), 21, iVar0, 0, 0);
		func_46(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_95(iParam0) == 3)
	{
		return;
	}
	if (func_95(iParam0) == 4)
	{
		return;
	}
	func_77(func_95(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
			}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_94();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_93(99, 1);
					func_92(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_92(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_92(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_91(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_86(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_92(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_92(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_86(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_92(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_92(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_92(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_92(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_92(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_92(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_92(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_92(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_92(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_92(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_86(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_92(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_92(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_92(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_92(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_85(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_93(95, iParam3);
					break;
				case 1:
					func_93(97, iParam3);
					break;
				case 2:
					func_93(96, iParam3);
					break;
			}
			func_93(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_80(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_80(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_92(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_92(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_92(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_79(iParam0);
	if (Global_41431 == 15)
	{
		func_78(0);
	}
	return 1;
}

void func_78(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_79(int iParam0)
{
	int iVar0;

	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_80(int iParam0)
{
	bool bVar0;
	char cVar1[64];

	if (iParam0 == 8)
	{
		func_55(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_55(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_55(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_55(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_83(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_83(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_83(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_83(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_83(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_83(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_82() /*10930*/].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_82() /*10930*/].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_81(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		case 1:
			return "COUP_TATTOO";
		case 2:
			return "COUP_WARSTOCK";
		case 3:
			return "COUP_MOSPORT";
		case 4:
			return "COUP_ELITAS";
		case 5:
			return "COUP_MEDSPENS";
		case 6:
			return "COUP_SPRUNK";
		case 7:
			return "COUP_RESPRAY";
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS";
		case 13:
			return "COUP_CAS_DOCKTEASE";
		case 14:
			return "COUP_CAS_MOSPORT";
		case 15:
			return "COUP_CAS_SSASA";
		case 16:
			return "COUP_CAS_WARSTOCK";
		case 17:
			return "COUP_CAS_PANDM";
		default:
			break;
	}
	return "";
}

int func_82()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

void func_85(int iParam0)
{
	func_93(93, iParam0);
	func_93(29, iParam0);
	func_93(30, iParam0);
}

bool func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (iParam0 == 8)
	{
		return func_88(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_88(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_88(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_88(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_0xF12E6CD06C73D69E();
		iVar1 = func_87(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_0xF12E6CD06C73D69E();
		iVar3 = func_87(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_0xF12E6CD06C73D69E();
		iVar5 = func_87(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_0xF12E6CD06C73D69E();
		iVar7 = func_87(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_0xF12E6CD06C73D69E();
		iVar9 = func_87(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_0xF12E6CD06C73D69E();
		iVar11 = func_87(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_82() /*10930*/].f_6174.f_10, iParam0);
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_84(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_88(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_90(iParam0, iParam1);
	iVar2 = func_89(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_89(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_91(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_54(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_60(27, 1);
	return 1;
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;

	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_94()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_95(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_96()
{
	func_97();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_97()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_6(iVar0) && (!func_73(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_6(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_98(int iParam0, int iParam1)
{
	if (!func_106(&(iParam0->f_2)))
	{
		func_104(&(iParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iParam0->f_8)
		{
			if (!func_106(&(iParam0->f_5)))
			{
				func_104(&(iParam0->f_5));
				func_103(iParam0, 1051260355 /* Float: 0.33f */);
			}
		}
		if (func_106(&(iParam0->f_5)))
		{
			if (func_100(&(iParam0->f_5)) > 0.33f)
			{
				func_99(&(iParam0->f_5));
				return false;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return true;
	}
	if (func_100(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		if (!func_106(&(iParam0->f_5)))
		{
			func_104(&(iParam0->f_5));
			func_103(iParam0, 1051260355 /* Float: 0.33f */);
		}
		else if (func_100(&(iParam0->f_5)) > 0.33f)
		{
			func_99(&(iParam0->f_2));
			return false;
		}
	}
	return true;
}

void func_99(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_100(int iParam0)
{
	if (func_106(iParam0))
	{
		if (func_102(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_101(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_101(bool bParam0)
{
	float fVar0;
	float fVar1;
	void fVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar2 = NETWORK::_0xBA7F0B77D80A4EB7();
		fVar3 = SYSTEM::TO_FLOAT(fVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_102(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

void func_103(int iParam0, float fParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_104(int* iParam0)
{
	func_105(iParam0, 0f);
}

void func_105(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_101(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_106(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

void func_107(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, func_109());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_104(&(iParam0->f_2));
	iParam0->f_1 = iParam8;
	iParam0->f_9 = 1;
}

char* func_109()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_110(var uParam0)
{
	char* sVar0;

	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_111(var uParam0)
{
	int iVar0;

	Local_169.f_1 = SYSTEM::TO_FLOAT(uParam0->f_50);
	Local_169.f_2 = SYSTEM::TO_FLOAT(uParam0->f_56);
	func_46(11, uParam0->f_56);
	func_46(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (MISC::IS_BIT_SET(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

bool func_112(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_113()
{
	vector3 vVar0;

	return vVar0;
}

void func_114(bool bParam0)
{
	if (bParam0)
	{
		func_115();
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("PROP_CASINO_DOOR_01L"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("PROP_CASINO_DOOR_01R"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("PROP_CASINO_DOOR_01L"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("PROP_CASINO_DOOR_01R"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, false);
	}
	else
	{
		OBJECT::_DOOR_CONTROL(joaat("PROP_CASINO_DOOR_01L"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 50f, 0f);
		OBJECT::_DOOR_CONTROL(joaat("PROP_CASINO_DOOR_01R"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 50f, 0f);
		OBJECT::_DOOR_CONTROL(joaat("PROP_CASINO_DOOR_01L"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 50f, 0f);
		OBJECT::_DOOR_CONTROL(joaat("PROP_CASINO_DOOR_01R"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 50f, 0f);
	}
}

void func_115()
{
	OBJECT::_DOOR_CONTROL(joaat("PROP_CASINO_DOOR_01L"), 929.6144f, 46.3955f, 80.0993f, true, 1f, 50f, 0f);
	OBJECT::_DOOR_CONTROL(joaat("PROP_CASINO_DOOR_01R"), 928.6238f, 44.9848f, 80.0993f, true, 1f, 50f, 0f);
	OBJECT::_DOOR_CONTROL(joaat("PROP_CASINO_DOOR_01L"), 928.1625f, 43.7989f, 79.8993f, true, 1f, 50f, 0f);
	OBJECT::_DOOR_CONTROL(joaat("PROP_CASINO_DOOR_01R"), 927.4266f, 42.1881f, 80.0884f, true, 1f, 50f, 0f);
}

bool func_116(var uParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_126(uParam0) && func_122(uParam0, 1, 1084227584 /* Float: 5f */))
		{
			if (bParam1)
			{
				if (func_121(uParam0, 2097152))
				{
					func_117(uParam0);
				}
			}
			else
			{
				func_117(uParam0);
			}
		}
		else if (!func_126(uParam0))
		{
			if (bParam1)
			{
				if (func_121(uParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
					{
						return true;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
			{
				return true;
			}
		}
	}
	return false;
}

void func_117(var uParam0)
{
	vector3 vVar0;

	if (func_120(uParam0->f_29))
	{
		vVar0 = { uParam0->f_17 };
	}
	else
	{
		vVar0 = { uParam0->f_29 };
	}
	func_118(uParam0, vVar0);
}

void func_118(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_119(uParam0->f_3, uParam0->f_4) == 0)
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vParam1, false) && VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, true, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vParam1, false) && VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_119(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_120(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_121(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_19(uParam0->f_81, iParam1) && !func_179());
	}
	return func_179();
}

bool func_122(var uParam0, bool bParam1, float fParam2)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (func_39(1))
			{
				func_37(0);
			}
			if (func_30())
			{
				func_125();
				return true;
			}
			else if (func_123(uParam0->f_4, fParam2, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, true);
		}
	}
	return false;
}

bool func_123(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_124(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_124(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_125()
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

bool func_126(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return true;
			}
		}
	}
	return false;
}

void func_127(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_19(uParam0->f_55, 1))
	{
		func_58(&(uParam0->f_55), 1);
	}
}

void func_128(var uParam0)
{
	func_130();
	HUD::CLEAR_PRINTS();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_189(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_189(uParam0, 103, 1, 0, 0);
		}
		func_129(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_189(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_189(uParam0, 102, 1, 0, 0);
	}
	func_282(uParam0, 16, 4f, 0);
}

void func_129(int iParam0)
{
	Global_110348.f_221 = iParam0;
}

void func_130()
{
	Global_19671 = 0;
	func_131();
}

void func_131()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

void func_132(var uParam0)
{
	float fVar0;

	fVar0 = uParam0->f_41;
	fVar0 = func_133(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_46(4, SYSTEM::CEIL(fVar0));
	func_46(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_133(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_135(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_136(var uParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_158(uParam0))
		{
			func_157(uParam0, &(uParam0->f_43));
			func_152(uParam0);
			func_151(uParam0);
			func_148(uParam0);
			func_143(uParam0, fParam2, fParam3);
			func_140(uParam0);
			return func_137(uParam0, fParam1);
		}
	}
	return false;
}

int func_137(var uParam0, float fParam1)
{
	if (func_57(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_139(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_138(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_122(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_138(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_122(uParam0, 1, fParam1);
	}
	return 0;
}

bool func_138(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return false;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return false;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return false;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return false;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (bParam1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_139(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam4);
}

void func_140(var uParam0)
{
	float fVar0;

	if ((func_126(uParam0) && func_19(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_97) >= 10000)
		{
			fVar0 = func_141(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_96 >= 2 && !func_179())
		{
			func_189(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_126(uParam0))
			{
			}
			if (!func_19(uParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_141(vector3 vParam0, int iParam3)
{
	return func_142(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), vParam0, iParam3);
}

float func_142(int iParam0, vector3 vParam1, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), vParam1, bParam4);
}

void func_143(var uParam0, float fParam1, float fParam2)
{
	if (func_126(uParam0) && func_19(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_147(uParam0))
		{
			if (!func_146(uParam0, 2))
			{
				func_145(uParam0, 2);
			}
			else if (func_126(uParam0))
			{
				if (func_398(uParam0, 2) > fParam1 && !func_146(uParam0, 14))
				{
					if (func_32())
					{
						func_189(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_189(uParam0, 48, 1, 0, 0);
					}
					func_282(uParam0, 2, 0, 0);
					if (func_146(uParam0, 10))
					{
						func_282(uParam0, 10, 0, 0);
					}
				}
				if (!func_146(uParam0, 3))
				{
					func_282(uParam0, 3, 0, 0);
				}
				else if (func_398(uParam0, 3) >= fParam2)
				{
					func_144(uParam0, 3, 0);
					func_286(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_146(uParam0, 2))
			{
				func_144(uParam0, 2, 0);
			}
			if (func_146(uParam0, 3))
			{
				func_144(uParam0, 3, 0);
			}
		}
	}
}

void func_144(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_99(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_99(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_145(var uParam0, int iParam1)
{
	func_193(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_146(var uParam0, int iParam1)
{
	return func_106(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_147(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return true;
		}
	}
	return false;
}

void func_148(var uParam0)
{
	if (func_150(uParam0))
	{
		func_149(uParam0);
	}
}

void func_149(var uParam0)
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_144(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_398(uParam0, 20) > 3f)
				{
					func_189(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_19(uParam0->f_81, 262144) || !func_19(uParam0->f_81, 1048576))
				{
					if (func_398(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_189(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_19(uParam0->f_82, 67108864))
				{
					if (func_398(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_189(uParam0, 85, 1, 0, 0);
						func_144(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_398(uParam0, 20) > 8f)
				{
					func_189(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (func_19(uParam0->f_81, 262144) || func_19(uParam0->f_82, 67108864))
			{
				if (!func_146(uParam0, 22))
				{
					func_145(uParam0, 22);
				}
			}
			if (func_146(uParam0, 22) && func_398(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_19(uParam0->f_81, 1048576))
					{
						func_189(uParam0, 84, 1, 0, 0);
						func_144(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_19(uParam0->f_82, 134217728))
					{
						func_189(uParam0, 85, 1, 0, 0);
						func_144(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_150(var uParam0)
{
	return uParam0->f_120;
}

void func_151(var uParam0)
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_19(uParam0->f_44, 2))
	{
		func_58(&(uParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_19(uParam0->f_44, 2))
	{
		func_17(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_46(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_189(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_152(var uParam0)
{
	if (!func_19(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_398(uParam0, 9) > 1f)
					{
						func_156(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							func_189(uParam0, 50, 1, 1, 0);
						}
						func_282(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!func_179() && func_398(uParam0, 9) > 4f)
				{
					func_189(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			case 2:
				if (func_155("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_189(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_154(uParam0)))
				{
					func_156(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_46(6, 0);
				}
				if (!func_153(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_398(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_189(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_155("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!func_179())
				{
					if (uParam0->f_410 != 22)
					{
						func_189(uParam0, 53, 1, 0, 1);
					}
					func_46(7, func_154(uParam0));
					func_156(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!func_179())
				{
					func_144(uParam0, 9, 0);
					func_282(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
		}
	}
}

bool func_153(var uParam0)
{
	return uParam0->f_110;
}

int func_154(var uParam0)
{
	return uParam0->f_106;
}

bool func_155(char* sParam0, int iParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_156(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_157(var uParam0, float* fParam1)
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

bool func_158(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_286(uParam0, "Passenger left car.", 9);
			}
			else if (func_172(uParam0))
			{
				if (func_155("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return true;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_159(uParam0, 1);
			}
		}
	}
	return false;
}

void func_159(var uParam0, bool bParam1)
{
	func_171(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_146(uParam0, 14))
			{
				if (func_179())
				{
					func_170(1);
				}
				func_169(uParam0, 11, 1);
				func_162(uParam0, 1);
				func_282(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_126(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (func_398(uParam0, 15) > 5f)
						{
							func_282(uParam0, 15, 0f, 1);
						}
					}
					if (func_398(uParam0, 14) > 20f)
					{
						func_286(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_398(uParam0, 14) > 20f)
				{
					if (func_160(uParam0->f_4, 1) > 40f)
					{
						func_286(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_286(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_160(int iParam0, bool bParam1)
{
	return func_161(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_161(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

void func_162(var uParam0, bool bParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				func_168(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_126(uParam0))
				{
					func_189(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_168(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_163(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_163(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_402(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = func_166(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, true);
		func_164(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_189(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_164(var uParam0)
{
	func_282(uParam0, 14, 0, 0);
	func_165();
}

void func_165()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_167(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_167(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_167(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_167(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_168(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_19(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_189(uParam0, iParam3, 1, 0, 0);
		func_58(uParam1, iParam2);
	}
}

void func_169(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_170(int iParam0)
{
	Global_21816 = iParam0;
}

void func_171(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_286(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

bool func_172(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (func_146(uParam0, 14))
			{
				func_173(uParam0);
			}
			func_162(uParam0, 0);
			return true;
		}
	}
	return false;
}

void func_173(var uParam0)
{
	func_144(uParam0, 14, 0);
	func_144(uParam0, 15, 0);
	func_175();
	if (func_174())
	{
		func_170(0);
	}
}

bool func_174()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_175()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

float func_176()
{
	float fVar0;

	fVar0 = ENTITY::GET_ENTITY_SPEED(Local_409.f_4);
	if (fVar0 >= 10f)
	{
		return (fVar0 * 0.5f);
	}
	return 5f;
}

void func_177()
{
	Global_19671 = 0;
	func_178();
}

void func_178()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

bool func_179()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return true;
	}
	return false;
}

float func_180(int iParam0)
{
	if (func_106(iParam0))
	{
		if (func_102(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_101(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_181()
{
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = SYSTEM::ROUND(((fLocal_847 - func_180(&iLocal_852)) * 1000f));
	if (iVar0 < 0)
	{
		iVar0 = 0;
		bLocal_1010 = true;
		if (!bLocal_1012)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			bLocal_1012 = true;
		}
	}
	func_182(iVar0, "TIM_TIMER", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	if (!bLocal_1010)
	{
		if (!bLocal_1011)
		{
			fVar1 = func_100(&iLocal_852);
			if (((((((((((((((fLocal_847 - fVar1) < 1f || (fLocal_847 - fVar1) < 1.5f) || (fLocal_847 - fVar1) < 2f) || (fLocal_847 - fVar1) < 2.5f) || (fLocal_847 - fVar1) < 3f) || (fLocal_847 - fVar1) < 3.5f) || (fLocal_847 - fVar1) < 4f) || (fLocal_847 - fVar1) < 4.5f) || (fLocal_847 - fVar1) < 5f) || (fLocal_847 - fVar1) < 6f) || (fLocal_847 - fVar1) < 7f) || (fLocal_847 - fVar1) < 8f) || (fLocal_847 - fVar1) < 9f) || (fLocal_847 - fVar1) < 10f) || (fLocal_847 - fVar1) < 11f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				bLocal_1011 = true;
				iLocal_1013 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			fVar2 = func_100(&iLocal_852);
			if (((fLocal_847 - fVar2) < 5.5f && (MISC::GET_GAME_TIMER() - iLocal_1013) > 500) || ((fLocal_847 - fVar2) < 11f && (MISC::GET_GAME_TIMER() - iLocal_1013) > 1000))
			{
				bLocal_1011 = false;
			}
		}
	}
}

void func_182(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_184(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_183(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_183(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_184(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

void func_185(var uParam0)
{
	func_186(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_177();
	func_173(uParam0);
}

void func_186(var uParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_187()
{
	func_58(&(Local_409.f_55), 2);
	func_58(&(Local_409.f_55), 4);
	func_58(&(Local_409.f_55), 16);
	func_58(&(Local_409.f_55), 64);
	func_58(&(Local_409.f_55), 256);
	func_58(&(Local_409.f_55), 512);
	func_58(&(Local_409.f_55), 1024);
	func_58(&(Local_409.f_55), 2048);
	func_58(&(Local_409.f_55), 4096);
	func_58(&(Local_409.f_55), 1073741824 /* Float: 2f */);
	func_58(&(Local_409.f_100), 8);
	func_58(&(Local_409.f_100), 2048);
	func_58(&(Local_409.f_100), 256);
	func_58(&uLocal_936, 2);
	func_145(&Local_409, 7);
}

void func_188(var uParam0)
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_186(uParam0, 1000);
}

void func_189(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_282(uParam0, 16, 4f, 0);
		if (func_190(uParam0))
		{
			func_44();
		}
	}
	func_242(uParam0, iParam2, bParam3);
}

bool func_190(var uParam0)
{
	vector3 vVar0[24];
	struct<6> Var6;

	StringCopy(&cVar0, uParam0->f_143, 24);
	if (func_179())
	{
		Var6 = { func_192() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			StringConCat(&cVar0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &cVar0))
			{
				return true;
			}
			StringCopy(&cVar0, uParam0->f_143, 24);
			StringConCat(&cVar0, "_gret1", 24);
			func_191(&cVar0);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &cVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_191(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_192()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_193(int* iParam0)
{
	if (!func_106(iParam0))
	{
		func_104(iParam0);
	}
}

struct<2> func_194(int iParam0)
{
	struct<2> Var0;
	char cVar2[0];
	char cVar3[0];

	StringCopy(&cVar2, func_196(func_198(iParam0)), 4);
	StringConCat(&Var0, &cVar2, 8);
	StringConCat(&Var0, ":", 8);
	if (func_195(iParam0) < 10)
	{
		StringConCat(&Var0, "0", 8);
	}
	StringCopy(&cVar3, func_196(func_195(iParam0)), 4);
	StringConCat(&Var0, &cVar3, 8);
	return Var0;
}

int func_195(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

var func_196(int iParam0)
{
	char cVar0[16];

	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_197(&cVar0);
}

char[] func_197(char[4] cParam0)
{
	return cParam0;
}

int func_198(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_199()
{
	int iVar0;

	iVar0 = func_204();
	func_202(&iVar0, 3);
	func_200(&iVar0, 30);
	return iVar0;
}

void func_200(int iParam0, int iParam1)
{
	if ((func_195(*iParam0) + iParam1) > 59)
	{
		func_201(iParam0, ((func_195(*iParam0) + iParam1) - 60));
		func_202(iParam0, 1);
	}
	else
	{
		func_201(iParam0, (func_195(*iParam0) + iParam1));
	}
}

void func_201(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_202(int iParam0, int iParam1)
{
	if ((func_198(*iParam0) + iParam1) > 23)
	{
		func_203(iParam0, ((func_198(*iParam0) + iParam1) - 24));
	}
	else
	{
		func_203(iParam0, (func_198(*iParam0) + iParam1));
	}
}

void func_203(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_204()
{
	var uVar0;

	func_212(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_201(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_203(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_207(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_206(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_205(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_205(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_206(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15);
	*iParam0 = (*iParam0 || iParam1);
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_211(*iParam0);
	iVar1 = func_209(*iParam0);
	if (iParam1 < 1 || iParam1 > func_208(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 496);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_208(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
	}
	return 30;
}

int func_209(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_210(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_210(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_211(int iParam0)
{
	return iParam0 & 15;
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_213(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_89) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_214(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_159(uParam0, 1);
			if (func_30())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_240(uParam0);
			if (uParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_146(uParam0, 14))
			{
				func_173(uParam0);
				func_162(uParam0, 0);
			}
			if (func_146(uParam0, 9))
			{
				func_144(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_239(uParam0, uParam0->f_3) > 300f)
				{
					func_286(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((func_161(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && func_139(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_139(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_236(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					case 1:
						if (func_235(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_234(uParam0->f_4, uParam0->f_3);
								iVar0 = func_233(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, false, false, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(uParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_147(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && func_239(uParam0, uParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					case 2:
						if (bLocal_94)
						{
							if (func_161(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_232(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_286(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_231(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_286(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_229(uParam0);
						if (func_239(uParam0, uParam0->f_3) < fVar4 || func_30())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
							{
								if (func_216(uParam0))
								{
									func_215(uParam0);
									iLocal_89 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									func_144(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, false);
									return true;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
				}
			}
		}
	}
	return false;
}

void func_215(var uParam0)
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

bool func_216(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;

	func_228("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		func_227();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_225(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_122(uParam0, 0, 1084227584 /* Float: 5f */) && func_138(1, 1, 1))
			{
				if (func_232(uParam0, 1))
				{
					iLocal_88 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_86 = 1;
				}
				else
				{
					func_286(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_234(uParam0->f_4, uParam0->f_3);
				iVar9 = func_233(uParam0, &iVar10);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, iVar11);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, false, false, false))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		case 2:
			if (uParam0->f_7 == 0)
			{
				vVar6 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				vVar6 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar6 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_224(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar0), 1);
			if (iVar12 == 1)
			{
				vVar0.f_2 = (vVar0.z + 1.5f);
				if (uParam0->f_7 == 2)
				{
					vVar3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_223(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_130();
				func_242(uParam0, 0, 0);
				vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar6) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, vVar13, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, func_221(uParam0));
				func_220(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848 /* Float: 50f */);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, vVar3, true);
				CAM::SET_CAM_ACTIVE(*uParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::_0x2208438012482A1A(uParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		case 5:
			func_228("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		case 6:
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_219(uParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*uParam0, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_130();
				func_242(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_217(1, 1, 1);
				return true;
			}
			break;
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*uParam0, false);
			CAM::DESTROY_CAM(uParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_217(1, 1, 1);
			return true;
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, true))
				{
					return true;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return false;
}

void func_217(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_20(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_218(23, 0);
}

void func_218(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_31015, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_31015, iParam0);
	}
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 3;
		case 0:
			return 1;
		case -1:
			return 0;
		default:
			break;
	}
	return 2;
}

void func_220(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam1, vParam4, fParam7, false, 2);
	}
}

float func_221(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	vVar1 = { func_113() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_222(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_222(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_223(int iParam0, bool bParam1, bool bParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(bParam1);
	func_37(0);
	func_20(1, 1, bParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_218(23, 1);
}

int func_224(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;

	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

bool func_225(int iParam0)
{
	if (func_226() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_37(0);
		func_177();
		return true;
	}
	return false;
}

bool func_226()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return true;
	}
	return false;
}

void func_227()
{
	if (func_32())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_31())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_39(1))
	{
		func_37(0);
	}
}

void func_228(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_229(var uParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_160(uParam0->f_3, 1) > 30f || func_230(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
					func_286(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

bool func_230(var uParam0)
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_398(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return true;
	}
	return false;
}

bool func_231(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return false;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return false;
		}
	}
	return true;
}

bool func_232(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar4]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar4], false))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return false;
				}
			}
			iVar4++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return true;
}

int func_233(var uParam0, int iParam1)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*iParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*iParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*iParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("VACCA"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SENTINEL2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
		{
			iVar3 = 2;
		}
		else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, true, false, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, true, false, false))
	{
		iVar3 = 1;
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

bool func_235(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_160(uParam0->f_3, 1) < fParam2)
		{
			if (!func_146(uParam0, 5))
			{
				func_282(uParam0, 5, 0, 0);
			}
		}
		else if (func_146(uParam0, 5))
		{
			func_144(uParam0, 5, 0);
		}
		if (((func_398(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_160(uParam0->f_3, 1) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_236(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;

	iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		vVar6 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar18) };
		vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, vVar6) };
		vVar6.f_1 = (vVar6.y + 1f);
	}
	else
	{
		vVar6 = { 0f, 1f, 1f };
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar6) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(vVar0, vVar3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			iLocal_87 = 1;
			break;
		case 1:
			if ((func_161(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((vVar0.z - vVar3.z)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar3, 511, 0, 7);
				}
				else
				{
					iVar17 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!func_19(uParam0->f_44, 128))
				{
					func_189(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_237(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		case 3:
			iLocal_87 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return true;
	}
	return false;
}

void func_237(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_238(iParam3), false);
}

int func_238(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

float func_239(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_147(uParam0))
		{
			return func_161(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_240(var uParam0)
{
	func_171(uParam0, uParam0->f_3);
	if (func_147(uParam0))
	{
		if (func_146(uParam0, 14))
		{
			func_173(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_146(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		func_282(uParam0, 9, 0, 0);
		func_241("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_241(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_242(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_44();
		func_282(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

bool func_243(var uParam0, int iParam1)
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return false;
	}
	func_249(12);
	if (func_19(uParam0->f_44, 8))
	{
		if (!func_19(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_19(uParam0->f_44, 256))
			{
				func_58(&(uParam0->f_44), 256);
			}
			if (func_19(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_189(uParam0, 135, 1, 0, 1);
				func_58(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_247(uParam0, iParam1))
	{
		if (func_160(uParam0->f_3, 1) < 35f)
		{
			if (!func_19(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_189(uParam0, 133, 1, 0, 1);
				func_58(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_160(uParam0->f_3, 1) > 400f)
		{
			func_286(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_245(uParam0);
			func_46(2, 0);
			bLocal_94 = true;
			func_193(&iLocal_90);
			return true;
		}
		else
		{
			func_286(uParam0, "No Taxi", 21);
			func_244("TAXI_DBG_NTAXI", -1);
		}
	}
	return false;
}

void func_244(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_245(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (func_246())
		{
		}
	}
}

bool func_246()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return true;
	}
	return false;
}

bool func_247(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_231(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("RHINO") || iVar1 == joaat("RATLOADER")) || iVar1 == joaat("SURFER")) || iVar1 == joaat("SURFER2")) || iVar1 == joaat("ARMYTANKER")) || iVar1 == joaat("BARRACKS")) || iVar1 == joaat("BARRACKS2")) || iVar1 == joaat("CRUSADER")) || iVar1 == joaat("UTILLITRUCK")) || iVar1 == joaat("UTILLITRUCK2")) || iVar1 == joaat("UTILLITRUCK3")) || iVar1 == joaat("AIRTUG")) || iVar1 == joaat("CADDY")) || iVar1 == joaat("CADDY2")) || iVar1 == joaat("DLOADER")) || iVar1 == joaat("DOCKTUG")) || iVar1 == joaat("FLATBED")) || iVar1 == joaat("RIPLEY")) || iVar1 == joaat("ROMERO")) || iVar1 == joaat("TOWTRUCK")) || iVar1 == joaat("TOWTRUCK2")) || iVar1 == joaat("AIRBUS")) || iVar1 == joaat("BUS")) || iVar1 == joaat("COACH")) || iVar1 == joaat("RENTALBUS")) || iVar1 == joaat("TOURBUS")) || iVar1 == joaat("RIOT")) || iVar1 == joaat("TRASH")) || iVar1 == joaat("BENSON")) || iVar1 == joaat("BIFF")) || iVar1 == joaat("HAULER")) || iVar1 == joaat("PACKER")) || iVar1 == joaat("PHANTOM")) || iVar1 == joaat("POUNDER")) || iVar1 == joaat("BULLDOZER")) || iVar1 == joaat("HANDLER")) || iVar1 == joaat("TIPTRUCK2")) || iVar1 == joaat("CUTTER")) || iVar1 == joaat("DUMP")) || iVar1 == joaat("MIXER")) || iVar1 == joaat("MIXER2")) || iVar1 == joaat("RUBBLE")) || iVar1 == joaat("SCRAP")) || iVar1 == joaat("TIPTRUCK")) || iVar1 == joaat("CAMPER")) || iVar1 == joaat("TACO")) || iVar1 == joaat("BOXVILLE")) || iVar1 == joaat("BOXVILLE2")) || iVar1 == joaat("BOXVILLE3")) || iVar1 == joaat("BURRITO")) || iVar1 == joaat("BURRITO2")) || iVar1 == joaat("BURRITO3")) || iVar1 == joaat("BURRITO4")) || iVar1 == joaat("GBURRITO")) || iVar1 == joaat("JOURNEY")) || iVar1 == joaat("MULE")) || iVar1 == joaat("MULE2")) || iVar1 == joaat("PONY")) || iVar1 == joaat("RUMPO")) || iVar1 == joaat("RUMPO2")) || iVar1 == joaat("SPEEDO")) || iVar1 == joaat("SPEEDO2")) || iVar1 == joaat("YOUGA")) || iVar1 == joaat("MOWER")) || iVar1 == joaat("TRACTOR")) || iVar1 == joaat("TRACTOR2")) || iVar1 == joaat("FBI")) || iVar1 == joaat("FBI2")) || iVar1 == joaat("PRANGER")) || iVar1 == joaat("AMBULANCE")) || iVar1 == joaat("DILETTANTE2")) || iVar1 == joaat("FIRETRUK")) || iVar1 == joaat("LGUARD")) || iVar1 == joaat("DUNE")) || iVar1 == joaat("PBUS")) || iVar1 == joaat("POLICE")) || iVar1 == joaat("POLICE2")) || iVar1 == joaat("POLICE3")) || iVar1 == joaat("POLICE4")) || iVar1 == joaat("POLICEB")) || iVar1 == joaat("POLICET")) || iVar1 == joaat("SHERIFF")) || iVar1 == joaat("SHERIFF2")) || iVar1 == joaat("STOCKADE"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("BODHI2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_19(uParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_244("TX_VIP_DMGD", -1);
							if (func_248("TX_VIP_DMGD"))
							{
								func_58(&(uParam0->f_44), 64);
							}
						}
					}
					return false;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_19(uParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_244("TX_VIP_CAR", -1);
							if (func_248("TX_VIP_CAR"))
							{
								func_58(&(uParam0->f_44), 32);
							}
						}
					}
					return false;
				}
				else if (!bVar5)
				{
					if (!func_19(uParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_244("TX_VIP_SMALL", -1);
							if (func_248("TX_VIP_SMALL"))
							{
								func_58(&(uParam0->f_44), 16);
							}
						}
					}
					return false;
				}
				return true;
			}
		}
		else
		{
			func_17(&(uParam0->f_44), 16);
			func_17(&(uParam0->f_44), 64);
			func_17(&(uParam0->f_44), 32);
		}
	}
	return false;
}

bool func_248(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_249(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];

	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		iVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &iVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_250(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_18(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_251()
{
	Local_343 = 0;
	func_268(36603, 36578, 1);
	func_268(36339, 36316, 1);
	func_268(36254, 36229, 1);
	func_268(36157, 36133, 1);
	func_268(36023, 36002, 1);
	func_268(35949, 35924, 1);
	func_268(35782, 35759, 1);
}

int func_252(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_253(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_255(uParam0->f_4))
		{
			func_254(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_254(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

bool func_255(int iParam0)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return true;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return true;
	}
	return false;
}

int func_256(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_257(var uParam0)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_258(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_258(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_259(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_254(uParam0, 11);
	return 1;
}

int func_260(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_146(uParam0, 25))
			{
				func_282(uParam0, 25, 0, 0);
			}
			else if (func_398(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_146(uParam0, 25))
		{
			func_144(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_261(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_262(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_264(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_258(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_265(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_266(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_267(uParam0->f_4))
		{
			func_254(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

bool func_267(int iParam0)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return true;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
		}
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return true;
	}
	return false;
}

void func_268(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343 /*4*/] = 0;
	func_59(&(Local_343.f_1[Local_343 /*4*/]), 1);
	if (bParam2)
	{
		func_59(&(Local_343.f_1[Local_343 /*4*/]), 2);
	}
	Local_343.f_1[Local_343 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343 /*4*/].f_3 = iParam1;
	Local_343++;
}

int func_269(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_286(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_270(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_271(var uParam0, var uParam1)
{
	int iVar0;

	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_272(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_273()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

bool func_274()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_839))
	{
		func_228("TAXI_ASSETS_STREAMED - Loading G_M_M_ChiGoon_02", &iLocal_844, 1000);
		return false;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_943))
	{
		return false;
	}
	if (!func_275(&iLocal_844, 1))
	{
		func_228("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_844, 1000);
		return false;
	}
	return true;
}

bool func_275(int iParam0, bool bParam1)
{
	if (!STREAMING::HAS_MODEL_LOADED(func_16()))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return false;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_228("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return false;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return false;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_228("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return false;
	}
	return true;
}

void func_276(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_277(var uParam0)
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_278(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_278(int iParam0, bool bParam1, bool bParam2)
{
	return func_166(iParam0, !bParam1, bParam2);
}

int func_279(var uParam0, vector3 vParam1, vector3 vParam4, char* sParam7, int iParam8, float fParam9, int iParam10)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_280(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam4 };
		func_36(uParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		func_34(uParam0->f_14, 0, iParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_110348.f_225[0]))
		{
			uParam0->f_3 = Global_110348.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam8, uParam0->f_11, fParam9, true, true);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam7);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_280(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(vParam1, 20f, 5f, false);
}

Vector3 func_281(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_113() };
	switch (iParam0)
	{
		case 0:
			vVar0 = { 924.2684f, 50.078f, 79.7647f };
			break;
		case 1:
			vVar0 = { 916.0502f, 39.3504f, 79.7647f };
			break;
		case 2:
			vVar0 = { 1971.246f, 3741.517f, 31.3268f };
			break;
		case 3:
			vVar0 = { 2004.278f, 3752.319f, 31.4156f };
			break;
		case 4:
			vVar0 = { 1410.891f, 3596.068f, 33.8351f };
			break;
		case 5:
			vVar0 = { -1383.06f, -972.8339f, 8.014f };
			break;
		case 6:
			vVar0 = { -1399.197f, -944.1848f, 9.4306f };
			break;
		case 7:
			vVar0 = { -1379.262f, -972.9459f, 7.8097f };
			break;
		case 8:
			vVar0 = { -1390.765f, -584.3324f, 29.2306f };
			break;
		case 9:
			vVar0 = { -1410.223f, -590.6025f, 29.3669f };
			break;
		case 10:
			vVar0 = { -1379.262f, -972.9459f, 7.8097f };
			break;
	}
	return vVar0;
}

void func_282(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_105(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_104(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_105(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_104(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_283()
{
	STREAMING::REQUEST_MODEL(iLocal_839);
	iLocal_943 = func_285();
	func_284(1);
}

void func_284(bool bParam0)
{
	STREAMING::REQUEST_MODEL(func_16());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_19(Global_111638.f_19092, 128))
	{
		func_58(&(Global_111638.f_19092), 128);
	}
}

int func_285()
{
	return UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_286(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0[24];

	func_177();
	func_419(2);
	cVar0 = { func_306() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) && func_179()) && !MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&cVar0, uParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!func_126(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_282(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&cVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				func_304(uParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&cVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_aggro", 24);
			}
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&cVar0, "_lost1", 24);
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&cVar0, "_spotd1", 24);
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&cVar0, "_wntd1", 24);
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&cVar0, "_spook", 24);
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_126(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_302(uParam0, 4096, 0);
				}
				else
				{
					func_302(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&cVar0, "_hit2", 24);
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&cVar0, "_jak", 24);
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&cVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_shot1", 24);
				}
				func_304(uParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_237(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_304(uParam0, &cVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_304(uParam0, &cVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_304(uParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_237(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_302(uParam0, 0, 0);
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_304(uParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_304(uParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&cVar0, "OJTX_QUIT_", 24);
			func_301(&cVar0);
			func_287(&(uParam0->f_244), "OJTXAUD", &cVar0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&cVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_fail1", 24);
			}
			func_304(uParam0, &cVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&cVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_304(uParam0, &cVar0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_46(3, 0);
		}
		func_282(uParam0, 3, 0f, 1);
	}
}

int func_287(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_300(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_288(sParam2, iParam3, 0);
}

int func_288(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_178();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_299(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_298();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_297();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_296())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_295();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_294();
		func_289();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_178();
	}
	return 0;
}

void func_289()
{
	if (!func_290())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

bool func_290()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (PLAYER::PLAYER_ID() == func_293())
	{
		return false;
	}
	if (func_291(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return false;
	}
	return true;
}

bool func_291(int iParam0)
{
	return func_292(iParam0, 20);
}

bool func_292(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_293()
{
	return -1;
}

void func_294()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_295()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

bool func_296()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_297()
{
	if (func_73(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_96();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_298()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_299(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_300(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_301(char* sParam0)
{
	switch (func_3(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_302(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_142(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_120(uParam0->f_29)) && !bParam2)
		{
			func_303(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_303(var uParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_112(func_113(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 0.25f, false, 40000f);
			if (uParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, true))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_304(var uParam0, char* sParam1)
{
	if (func_305(uParam0))
	{
		func_287(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

bool func_305(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_161(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_306()
{
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_307(var uParam0)
{
	return uParam0->f_118;
}

void func_308()
{
	func_342(&Local_409);
	if (func_341(&Local_409, &Local_862))
	{
		switch (Local_862.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_340(&Local_409))
					{
						if (func_339("TX_OBJ_DL_DO") || HUD::DOES_BLIP_EXIST(Local_409.f_9))
						{
							Local_862.f_27++;
						}
						else if (func_338(&Local_409) != 10)
						{
							func_189(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if (func_338(&Local_409) > 10 && func_338(&Local_409) != 16)
				{
					func_58(&(Local_409.f_81), 67108864);
					func_189(&Local_409, 16, 1, 0, 0);
					if (bLocal_861)
					{
					}
				}
				break;
			case 2:
				if (func_398(&Local_409, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 14f))
				{
					if (!func_150(&Local_409))
					{
						func_337(&Local_409, 0);
						Local_862.f_27++;
						if (bLocal_861)
						{
						}
					}
				}
				break;
		}
	}
	func_309(&Local_409, &uLocal_892, &Local_862, bLocal_861);
}

int func_309(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_318(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_146(uParam0, 2))
	{
		if (func_317(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_316(uParam0))
				{
					uParam2->f_7 = { func_315(uParam1) };
					func_287(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			case 2:
				if (func_179())
				{
					uParam2->f_13 = { func_192() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_59(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_282(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (func_153(uParam0))
				{
					if (func_179())
					{
						func_282(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_311() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_179())
				{
					uParam2->f_19 = { func_306() };
				}
				else
				{
					func_59(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_282(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!func_146(uParam0, 14) && !func_179()) && !func_153(uParam0)) && func_398(uParam0, 18) > 1f)
				{
					func_282(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!func_179())
				{
					if (func_398(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_310(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			case 7:
				if (!func_179())
				{
					func_59(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_312(uParam1);
					func_282(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
		}
	}
	return 0;
}

int func_310(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_300(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_288(sParam2, iParam4, 0);
}

struct<6> func_311()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar8 /*6*/])))
					{
						return Global_19673[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_312(var uParam0)
{
	int iVar0;

	iVar0 = func_314(uParam0);
	if (iVar0 > -1)
	{
		func_17(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_17(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_58(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_313(), 24);
	}
}

char* func_313()
{
	var uVar0;

	return uVar0;
}

int func_314(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_19((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_315(var uParam0)
{
	int iVar0;
	struct<6> Var1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_19((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_58(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

bool func_316(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_155("TX_OBJ_NEX_DO", 0, 0))
			{
				return true;
			}
			break;
		case 1:
			if (func_155("TX_OBJ_TIE_DO", 0, 0))
			{
				return true;
			}
			break;
		case 2:
			if (func_155("TX_OBJ_DL_DO", 0, 0))
			{
				return true;
			}
			break;
		case 3:
			if ((func_155("TX_OBJ_GYB_DO", 0, 0) || func_155("TAXI_OBJ_GYB", 0, 0)) || func_155("TAXI_OBJ_GYB_2", 0, 0))
			{
				return true;
			}
			break;
		case 4:
			if (func_155("TX_OBJ_TTB_DO", 0, 0))
			{
				return true;
			}
			break;
		case 5:
			if ((func_155("TX_OBJ_CYI_DO", 0, 0) || func_155("TAXI_OBJ_CYI_01", 0, 0)) || func_155("TAXI_OBJ_CYI_02", 0, 0))
			{
				return true;
			}
			break;
		case 6:
			if (((func_155("TX_OBJ_GYN_DO", 0, 0) || func_155("TAXI_OBJ_GYN", 0, 0)) || func_155("TAXI_OBJ_GYN_TG", 0, 0)) || func_155("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return true;
			}
			break;
		case 7:
			if ((func_155("TAXI_OBJ_CC1", 0, 0) || func_155("TAXI_OBJ_CC2", 0, 0)) || func_155("TAXI_OBJ_CC3", 0, 0))
			{
				return true;
			}
			break;
		case 8:
			if ((func_155("TAXI_OBJ_FTC1", 0, 0) || func_155("TAXI_OBJ_FTC2", 0, 0)) || func_155("TAXI_OBJ_FTC3", 0, 0))
			{
				return true;
			}
			break;
		case 9:
			if (func_155("TX_OBJ_PRO_DO", 0, 0))
			{
				return true;
			}
			break;
	}
	return (((((func_155("TAXI_OBJ_GETRUN", 0, 0) || func_155("TAXI_OBJ_DRIVE", 0, 0)) || func_155("TAXI_OBJ_RETURN", 0, 0)) || func_155("TAXI_OBJ_POL", 0, 0)) || func_155("TAXI_OBJ_RUNOUT", 0, 0)) || func_155("TAXI_OBJ_POL", 0, 0));
}

bool func_317(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_19((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_318(var uParam0, var uParam1)
{
	vector3 vVar0[24];
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;

	if (func_316(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_146(uParam0, 14))
	{
		StringCopy(&cVar0, uParam0->f_143, 24);
		switch (func_338(uParam0))
		{
			case 55:
				StringConCat(&cVar0, "_lvMe1", 24);
				cVar6 = { cVar0 };
				func_336(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_334(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 2:
				if (!func_179())
				{
					if (uParam0->f_115)
					{
						StringConCat(&cVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_333(uParam0, &cVar0, 0, 0, 8);
					}
				}
				else
				{
					func_330(uParam0, cVar0, func_332(uParam0, 2));
				}
				if (func_19(uParam0->f_98, 4))
				{
					func_282(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				func_168(uParam0, &(uParam0->f_98), 4, 3);
				break;
			case 3:
				if (func_398(uParam0, 16) > 1f)
				{
					func_170(1);
					if (uParam0->f_411 == 9)
					{
						func_241("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_241("TAXI_VIP_RETURN", 7500, 1);
					}
					func_282(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&cVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_333(uParam0, &cVar0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_237(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_398(uParam0, 16) > func_167(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_179()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&cVar0, uParam0->f_143, 24);
		switch (func_338(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_333(uParam0, &cVar0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&cVar0, "_lvMe2", 24);
				cVar6 = { cVar0 };
				func_336(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_282(uParam0, 16, 0, 0);
				func_334(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_287(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_189(uParam0, 1, 1, 0, 0);
				break;
			case 1:
				func_282(uParam0, 16, 0, 0);
				func_189(uParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&cVar0, "_hail1", 24);
				cVar6 = { cVar0 };
				if (!func_19(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_336(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_333(uParam0, &cVar0, 0, 0, 8);
					}
				}
				func_282(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_241("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_241("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 8:
				StringConCat(&cVar0, "_obj1", 24);
				func_333(uParam0, &cVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_329(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_189(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&cVar0, "_gret1", 24);
							break;
						case 0:
							StringConCat(&cVar0, "_gret2", 24);
							break;
						case 2:
							StringConCat(&cVar0, "_gret3", 24);
							break;
						default:
							StringConCat(&cVar0, "_gret4", 24);
							break;
					}
				}
				func_191(&cVar0);
				if (uParam0->f_411 != 9)
				{
					func_333(uParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					func_237(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_329(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_189(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&cVar0, "_dest2", 24);
				func_328(uParam0, 33554432, cVar0, "", 1, 8);
				func_282(uParam0, 16, 0, 0);
				func_189(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 10:
				if (!func_179())
				{
					func_327(uParam0, 0);
					func_58(&(uParam0->f_44), 4);
					func_282(uParam0, 16, 0, 0);
					func_189(uParam0, 13, 0, 0, 0);
				}
				break;
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_bant2", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_bant1", 24);
						break;
					case 2:
						StringConCat(&cVar0, "_bant3", 24);
						break;
					default:
						StringConCat(&cVar0, "_bant1", 24);
						break;
				}
				func_191(&cVar0);
				func_325(cVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 15:
				if (func_398(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant1", 24);
						func_191(&cVar0);
					}
					func_325(cVar0, uParam1);
					func_58(&(uParam0->f_81), 67108864);
					func_282(uParam0, 16, 0, 0);
					func_282(uParam0, 11, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			case 16:
				if (func_398(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&cVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_191(&cVar0);
						}
					}
					func_325(cVar0, uParam1);
					func_282(uParam0, 11, 0, 0);
					func_282(uParam0, 16, 0, 0);
					func_242(uParam0, 0, 0);
				}
				break;
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant3", 24);
					func_191(&cVar0);
				}
				func_325(cVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant4", 24);
				}
				func_191(&cVar0);
				func_325(cVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant5", 24);
				}
				func_191(&cVar0);
				func_325(cVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 20:
				StringConCat(&cVar0, "_dest2b", 24);
				func_191(&cVar0);
				func_325(cVar0, uParam1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 11, 0, 0);
				func_242(uParam0, 0, 0);
				func_58(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&cVar0, "_seePt1", 24);
				func_333(uParam0, &cVar0, 0, 0, 8);
				func_189(uParam0, 24, 1, 0, 0);
				break;
			case 24:
				uParam0->f_417 = 24;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 90:
				StringConCat(&cVar0, "_talk", 24);
				StringIntConCat(&cVar0, 1, 24);
				func_191(&cVar0);
				func_333(uParam0, &cVar0, 1, 0, 8);
				break;
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_deal1", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_deal1", 24);
						break;
					default:
						StringConCat(&cVar0, "_deal1", 24);
						break;
				}
				func_333(uParam0, &cVar0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&cVar0, "_ig1c", 24);
				func_333(uParam0, &cVar0, 0, 0, 8);
				break;
			case 27:
				StringConCat(&cVar0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_324(&(uParam0->f_90), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_324(&(uParam0->f_90), 3, &cVar0, &iVar15, 1, 0);
				}
				func_325(cVar0, uParam1);
				func_334(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 6, 0f, 1);
				func_242(uParam0, 0, 0);
				break;
			case 26:
				StringConCat(&cVar0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_324(&(uParam0->f_89), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_324(&(uParam0->f_89), 3, &cVar0, &iVar15, 1, 0);
				}
				func_325(cVar0, uParam1);
				func_334(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 1);
				func_282(uParam0, 16, 0, 0);
				func_282(uParam0, 6, 0f, 1);
				func_242(uParam0, 0, 0);
				break;
			case 12:
				func_241("TAXI_OBJ_GYB", 3500, 1);
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_241("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_241("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_241("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_282(uParam0, 16, 0, 0);
				func_242(uParam0, 0, 0);
				break;
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_dest1B", 24);
						break;
					default:
						StringConCat(&cVar0, "_dest1A", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_189(uParam0, 29, 1, 0, 0);
						Jump @12990; //curOff = 3830
						if (!func_19(uParam0->f_98, 268435456))
						{
							func_241("TAXI_OBJ_CYI_01", 7500, 1);
							func_58(&(uParam0->f_98), 268435456);
						}
						uParam0->f_417 = 29;
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 3900
						StringConCat(&cVar0, "_rCar1", 24);
						func_191(&cVar0);
						func_325(cVar0, uParam1);
						uParam0->f_124 = { cVar0 };
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 3955
						StringConCat(&cVar0, "_rCar2", 24);
						func_191(&cVar0);
						func_325(cVar0, uParam1);
						uParam0->f_124 = { cVar0 };
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 4010
						StringConCat(&cVar0, "_rCar3", 24);
						func_191(&cVar0);
						func_325(cVar0, uParam1);
						uParam0->f_124 = { cVar0 };
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 4065
						func_241("TAXI_OBJ_CYI_02", 7500, 1);
						uParam0->f_417 = 33;
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 4105
						if (!func_19(uParam0->f_82, 8192))
						{
							if (func_398(uParam0, 11) > uParam0->f_36)
							{
								StringConCat(&cVar0, "_airBr1", 24);
								func_191(&cVar0);
								if (uParam0->f_411 == 5)
								{
									func_325(cVar0, uParam1);
								}
								else
								{
									func_333(uParam0, &cVar0, 0, 0, 8);
								}
								func_58(&(uParam0->f_82), 8192);
								func_282(uParam0, 16, 0, 0);
								func_282(uParam0, 11, 0, 0);
								func_242(uParam0, 0, 0);
							}
						}
						Jump @12990; //curOff = 4227
						if (!func_19(uParam0->f_82, 16384))
						{
							StringConCat(&cVar0, "_seeD1", 24);
							func_191(&cVar0);
							func_333(uParam0, &cVar0, 0, 0, 8);
							func_58(&(uParam0->f_82), 16384);
						}
						Jump @12990; //curOff = 4283
						if (!func_19(uParam0->f_82, 32768))
						{
							StringConCat(&cVar0, "_seeD2", 24);
							func_191(&cVar0);
							func_333(uParam0, &cVar0, 0, 0, 8);
							func_58(&(uParam0->f_82), 32768);
						}
						Jump @12990; //curOff = 4341
						StringConCat(&cVar0, "_done1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_189(uParam0, 46, 1, 0, 0);
						Jump @12990; //curOff = 4376
						if (uParam0->f_101 == 1)
						{
							StringConCat(&cVar0, "_ftc1", 24);
						}
						else
						{
							switch (uParam0->f_102)
							{
								case 1:
									StringConCat(&cVar0, "_ftc1", 24);
									break;
								case 0:
									StringConCat(&cVar0, "_ftc2", 24);
									break;
								case 2:
									StringConCat(&cVar0, "_ftc3", 24);
									break;
								default:
									StringConCat(&cVar0, "_ftc3", 24);
									break;
							}
						}
						func_191(&cVar0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_189(uParam0, 139, 1, 0, 0);
						uParam0->f_417 = 139;
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 4514
						func_241("TAXI_OBJ_FTC2", 7500, 1);
						uParam0->f_417 = 13;
						func_189(uParam0, 13, 0, 0, 0);
						Jump @12990; //curOff = 4547
						StringConCat(&cVar0, "_dOff1", 24);
						cVar6 = { cVar0 };
						iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
						if (!func_19(uParam0->f_82, 268435456))
						{
							if (iVar14 > 80)
							{
								StringConCat(&cVar6, "_1", 24);
							}
							else if (iVar14 > 40)
							{
								StringConCat(&cVar6, "_2", 24);
							}
							else
							{
								StringConCat(&cVar6, "_3", 24);
							}
							func_58(&(uParam0->f_82), 268435456);
						}
						else if (iVar14 > 80)
						{
							StringConCat(&cVar6, "_4", 24);
						}
						else if (iVar14 > 40)
						{
							StringConCat(&cVar6, "_5", 24);
						}
						else
						{
							StringConCat(&cVar6, "_6", 24);
						}
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 4735
						StringConCat(&cVar0, "_bdOff1", 24);
						cVar6 = { cVar0 };
						iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (!func_19(uParam0->f_82, 268435456))
						{
							if (iVar14 < 50)
							{
								StringConCat(&cVar6, "_1", 24);
							}
							else
							{
								StringConCat(&cVar6, "_2", 24);
							}
							func_58(&(uParam0->f_82), 268435456);
						}
						else if (iVar14 < 50)
						{
							StringConCat(&cVar6, "_3", 24);
						}
						else
						{
							StringConCat(&cVar6, "_4", 24);
						}
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 4887
						StringConCat(&cVar0, "_dr2P", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 4929
						StringConCat(&cVar0, "_dr2N", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 4971
						StringConCat(&cVar0, "_dOff2", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_189(uParam0, 44, 1, 0, 0);
						Jump @12990; //curOff = 5006
						func_241("TAXI_OBJ_CC2", 7500, 1);
						uParam0->f_417 = 44;
						func_242(uParam0, 0, 0);
						func_189(uParam0, 97, 1, 0, 0);
						Jump @12990; //curOff = 5047
						StringConCat(&cVar0, "_dOff3", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_189(uParam0, 45, 1, 0, 0);
						Jump @12990; //curOff = 5082
						if (!func_179())
						{
							func_241("TAXI_OBJ_CC3", 7500, 1);
							uParam0->f_417 = 45;
							func_242(uParam0, 0, 0);
							func_189(uParam0, 98, 1, 0, 0);
						}
						Jump @12990; //curOff = 5131
						func_241("TAXI_OBJ_FTC3", 7500, 1);
						uParam0->f_417 = 46;
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 5161
						if (!func_19(uParam0->f_81, 1))
						{
							func_323(uParam0, 1, cVar0, "_sick1", 8);
							func_17(&(uParam0->f_81), 2);
						}
						else if (!func_19(uParam0->f_81, 2))
						{
							func_323(uParam0, 2, cVar0, "_sick2", 8);
							func_17(&(uParam0->f_81), 1);
						}
						func_334(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 5276
						if (!func_19(uParam0->f_82, 2097152))
						{
							StringConCat(&cVar0, "_nopke1", 24);
						}
						else if (!func_19(uParam0->f_82, 4194304))
						{
							StringConCat(&cVar0, "_nopke2", 24);
						}
						func_58(&(uParam0->f_81), 2097152);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_282(uParam0, 16, 0, 0);
						func_334(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 1);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 5396
						StringConCat(&cVar0, "_Puke1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_334(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						Jump @12990; //curOff = 5443
						StringConCat(&cVar0, "_PkStp2", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_334(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 5508
						StringConCat(&cVar0, "_PkStp1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_334(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						Jump @12990; //curOff = 5555
						StringConCat(&cVar0, "_PukeR1", 24);
						func_191(&cVar0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 5585
						if (!func_19(uParam0->f_81, 4))
						{
							func_323(uParam0, 4, cVar0, "_turns1", 8);
						}
						else if (!func_19(uParam0->f_81, 8))
						{
							func_323(uParam0, 8, cVar0, "_turns2", 8);
						}
						else
						{
							func_323(uParam0, 8, cVar0, "_turns3", 8);
							func_17(&(uParam0->f_81), 4);
							func_17(&(uParam0->f_81), 8);
						}
						func_334(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 5724
						if (func_322(uParam0))
						{
							func_330(uParam0, cVar0, func_332(uParam0, 72));
						}
						else if (uParam0->f_411 == 9)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_3))
							{
								func_237(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
							}
						}
						else if (uParam0->f_411 == 1)
						{
							StringConCat(&cVar0, "_carHt", 24);
							cVar6 = { cVar0 };
							func_336(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
						}
						else
						{
							StringConCat(&cVar0, "_carHt1", 24);
							cVar6 = { cVar0 };
							if (uParam0->f_411 == 0)
							{
								func_336(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
							}
							else
							{
								func_336(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
							}
							func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						}
						func_334(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 5979
						StringConCat(&cVar0, "_genPnHi", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 6003
						if (!func_19(uParam0->f_83, 128))
						{
							StringConCat(&cVar0, "_nMiss1", 24);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 128);
							func_17(&(uParam0->f_83), 256);
							func_282(uParam0, 16, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 256))
						{
							StringConCat(&cVar0, "_nMiss2", 24);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 256);
							func_17(&(uParam0->f_83), 512);
							func_282(uParam0, 16, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 512))
						{
							StringConCat(&cVar0, "_nMiss3", 24);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 512);
							func_17(&(uParam0->f_83), 128);
							func_282(uParam0, 16, 0, 0);
						}
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 6242
						if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
						{
							bVar24 = true;
						}
						if (!func_19(uParam0->f_83, 1))
						{
							StringConCat(&cVar0, "_air1", 24);
							if (bVar24)
							{
								func_191(&cVar0);
							}
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 1);
							func_17(&(uParam0->f_83), 2);
							func_282(uParam0, 16, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 2))
						{
							StringConCat(&cVar0, "_air2", 24);
							if (bVar24)
							{
								func_191(&cVar0);
							}
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 2);
							if (uParam0->f_411 == 0)
							{
								func_17(&(uParam0->f_83), 4);
							}
							else
							{
								func_17(&(uParam0->f_83), 1);
							}
							func_282(uParam0, 16, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 4))
						{
							StringConCat(&cVar0, "_air3", 24);
							if (bVar24)
							{
								func_191(&cVar0);
							}
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 4);
							func_17(&(uParam0->f_83), 1);
							func_282(uParam0, 16, 0, 0);
						}
						func_334(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 6569
						if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
						{
							bVar24 = true;
						}
						if (!func_19(uParam0->f_81, 4096))
						{
							func_328(uParam0, 4096, cVar0, "_sideW1", bVar24, 8);
						}
						else if (!func_19(uParam0->f_81, 8192))
						{
							func_328(uParam0, 8192, cVar0, "_sideW2", bVar24, 8);
						}
						func_334(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 6704
						if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
						{
							bVar24 = true;
						}
						if (!func_19(uParam0->f_81, 16384))
						{
							func_328(uParam0, 16384, cVar0, "_opLne1", bVar24, 8);
						}
						else if (!func_19(uParam0->f_81, 32768))
						{
							func_328(uParam0, 32768, cVar0, "_opLne2", bVar24, 8);
						}
						func_334(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 6841
						if (uParam0->f_411 == 0)
						{
							if (!func_19(uParam0->f_82, 8))
							{
								func_321(uParam0, 8, cVar0, "_bored1", 8, 0);
							}
							else if (!func_19(uParam0->f_82, 16))
							{
								func_321(uParam0, 16, cVar0, "_bored2", 8, 0);
							}
							else if (!func_19(uParam0->f_82, 32))
							{
								func_321(uParam0, 32, cVar0, "_bored3", 8, 0);
							}
							func_334(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
							func_242(uParam0, 0, 0);
						}
						if (uParam0->f_411 == 1)
						{
							StringConCat(&cVar0, "_good1", 24);
							cVar6 = { cVar0 };
							func_336(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
							func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
							func_334(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
							func_282(uParam0, 16, 0, 0);
							func_242(uParam0, 0, 0);
						}
						Jump @12990; //curOff = 7090
						StringConCat(&cVar0, "_EtoB1", 24);
						cVar6 = { cVar0 };
						func_336(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_334(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 7185
						StringConCat(&cVar0, "_BtoE1", 24);
						cVar6 = { cVar0 };
						func_336(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_334(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 7280
						if (!func_19(uParam0->f_81, 65536))
						{
							func_328(uParam0, 65536, cVar0, "_runLit1", 1, 8);
						}
						else if (!func_19(uParam0->f_81, 131072))
						{
							func_328(uParam0, 131072, cVar0, "_runLit2", 1, 8);
						}
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 7368
						if (func_322(uParam0))
						{
							func_330(uParam0, cVar0, func_332(uParam0, 82));
						}
						else if (uParam0->f_411 == 9)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_3))
							{
								func_237(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
							}
						}
						else if (!func_19(uParam0->f_83, 8))
						{
							StringConCat(&cVar0, "_hitR1", 24);
							func_191(&cVar0);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 8);
							func_17(&(uParam0->f_83), 16);
							func_282(uParam0, 16, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 16))
						{
							StringConCat(&cVar0, "_hitR2", 24);
							func_191(&cVar0);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 16);
							func_17(&(uParam0->f_83), 32);
							func_282(uParam0, 16, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 32))
						{
							StringConCat(&cVar0, "_hitR3", 24);
							func_191(&cVar0);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 32);
							if (uParam0->f_411 == 0)
							{
								func_17(&(uParam0->f_83), 64);
							}
							else
							{
								func_17(&(uParam0->f_83), 8);
							}
							func_282(uParam0, 16, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 64))
						{
							StringConCat(&cVar0, "_hitR4", 24);
							func_191(&cVar0);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
							func_58(&(uParam0->f_83), 64);
							func_17(&(uParam0->f_83), 8);
							func_282(uParam0, 16, 0, 0);
						}
						func_334(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 7816
						if (!func_179())
						{
							if (uParam0->f_115)
							{
								StringConCat(&cVar0, "_aggro2", 24);
							}
							else
							{
								StringConCat(&cVar0, "_aggro", 24);
							}
							func_333(uParam0, &cVar0, 0, 1, 8);
						}
						else
						{
							func_330(uParam0, cVar0, func_332(uParam0, 65));
							func_242(uParam0, 0, 0);
						}
						uParam0->f_107++;
						Jump @12990; //curOff = 7905
						if (!func_179())
						{
							if (uParam0->f_411 == 4)
							{
								StringCopy(&cVar0, "tm6_shoot", 24);
							}
							else if (uParam0->f_115)
							{
								StringConCat(&cVar0, "_shootlz", 24);
							}
							else
							{
								StringConCat(&cVar0, "_shoot", 24);
							}
							func_333(uParam0, &cVar0, 0, 1, 8);
						}
						else
						{
							func_330(uParam0, cVar0, func_332(uParam0, 66));
							func_242(uParam0, 0, 0);
						}
						uParam0->f_107++;
						Jump @12990; //curOff = 8014
						if (uParam0->f_411 == 8)
						{
							if (!uParam0->f_109 && !func_179())
							{
								switch (uParam0->f_414)
								{
									case 3:
										StringConCat(&cVar0, "_warnC1", 24);
										func_333(uParam0, &cVar0, 0, 0, 8);
										break;
									case 6:
										StringConCat(&cVar0, "_warnF1", 24);
										func_333(uParam0, &cVar0, 0, 0, 8);
										break;
									case 1:
										StringConCat(&cVar0, "_far1", 24);
										func_333(uParam0, &cVar0, 0, 0, 8);
										func_334(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
										break;
									case 2:
										StringConCat(&cVar0, "_close1", 24);
										func_333(uParam0, &cVar0, 0, 0, 8);
										func_334(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
										break;
									case 10:
										StringConCat(&cVar0, "_hit1", 24);
										func_333(uParam0, &cVar0, 0, 0, 8);
										break;
									case 8:
										StringConCat(&cVar0, "_good1", 24);
										cVar6 = { cVar0 };
										func_336(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
										func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
										func_334(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
										func_282(uParam0, 16, 0, 0);
										func_242(uParam0, 0, 0);
										break;
									case 9:
										if (!bLocal_64)
										{
											StringConCat(&cVar0, "_sBant1", 24);
											cVar6 = { cVar0 };
											func_333(uParam0, &cVar0, 0, 0, 8);
											func_282(uParam0, 16, 0, 0);
											func_282(uParam0, 11, 0, 0);
											func_242(uParam0, 0, 0);
											if (!bLocal_66)
											{
												bLocal_64 = true;
											}
										}
										else
										{
											if (!bLocal_65)
											{
												StringConCat(&cVar0, "_bant3", 24);
												bLocal_65 = true;
											}
											else
											{
												StringConCat(&cVar0, "_bant2", 24);
												bLocal_66 = true;
											}
											func_191(&cVar0);
											func_333(uParam0, &cVar0, 0, 0, 8);
											func_282(uParam0, 16, 0, 0);
											func_282(uParam0, 11, 0, 0);
											func_242(uParam0, 0, 0);
											bLocal_64 = false;
										}
										break;
									case 7:
										StringConCat(&cVar0, "_done1", 24);
										func_333(uParam0, &cVar0, 0, 0, 8);
										break;
								}
								func_189(uParam0, 143, 0, 0, 0);
							}
						}
						Jump @12990; //curOff = 8558
						StringConCat(&cVar0, "_speed1", 24);
						cVar6 = { cVar0 };
						func_336(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_334(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 8653
						if (!func_19(uParam0->f_82, 1))
						{
							func_321(uParam0, 1, cVar0, "_close1", 8, 0);
						}
						else if (!func_19(uParam0->f_82, 2))
						{
							func_321(uParam0, 2, cVar0, "_close2", 8, 0);
						}
						else if (!func_19(uParam0->f_82, 4))
						{
							func_321(uParam0, 4, cVar0, "_close3", 8, 0);
						}
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 8763
						if (uParam0->f_115)
						{
							StringConCat(&cVar0, "_stop2", 24);
						}
						else
						{
							StringConCat(&cVar0, "_stop1", 24);
						}
						cVar6 = { cVar0 };
						func_336(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
						if (uParam0->f_411 != 9)
						{
							func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_237(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
						}
						func_282(uParam0, 16, 0, 0);
						func_334(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 8917
						if (func_322(uParam0))
						{
							func_330(uParam0, cVar0, func_332(uParam0, 74));
						}
						else if (uParam0->f_411 == 9)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_3))
							{
								func_237(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
							}
						}
						else
						{
							StringConCat(&cVar0, "_roll1", 24);
							func_320(uParam0, cVar0, 8);
						}
						func_334(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 9052
						if (!func_19(uParam0->f_83, 1024))
						{
							func_58(&(uParam0->f_83), 1024);
							func_282(uParam0, 16, 0, 0);
							StringConCat(&cVar0, "_swrv1", 24);
							func_191(&cVar0);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 2048))
						{
							func_58(&(uParam0->f_83), 2048);
							func_282(uParam0, 16, 0, 0);
							StringConCat(&cVar0, "_swrv2", 24);
							func_191(&cVar0);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						}
						else if (!func_19(uParam0->f_83, 4096))
						{
							func_58(&(uParam0->f_83), 4096);
							func_282(uParam0, 16, 0, 0);
							StringConCat(&cVar0, "_swrv3", 24);
							func_191(&cVar0);
							func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						}
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 9279
						if (!func_19(uParam0->f_82, 1024))
						{
							func_321(uParam0, 1024, cVar0, "_rvrs1", 8, 1);
							func_17(&(uParam0->f_82), 2048);
						}
						else if (!func_19(uParam0->f_82, 2048))
						{
							func_321(uParam0, 2048, cVar0, "_rvrs2", 8, 1);
						}
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 9374
						StringConCat(&cVar0, "_ofrd1", 24);
						cVar6 = { cVar0 };
						func_336(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_334(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 9469
						StringConCat(&cVar0, "_ofrdch1", 24);
						func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 9, 0, 0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 9518
						StringConCat(&cVar0, "_losPol1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_189(uParam0, 52, 1, 0, 0);
						Jump @12990; //curOff = 9553
						if (uParam0->f_115)
						{
							StringConCat(&cVar0, "_lsPo2", 24);
						}
						else
						{
							StringConCat(&cVar0, "_lsPo1", 24);
						}
						if (uParam0->f_411 != 9)
						{
							func_333(uParam0, &cVar0, 0, 0, 8);
						}
						else if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_237(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
						}
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 9655
						if (func_322(uParam0))
						{
							if (uParam0->f_411 == 2)
							{
								StringConCat(&cVar0, "_copBa1", 24);
								cVar6 = { cVar0 };
								cVar6 = { cVar0 };
								func_333(uParam0, &cVar0, 0, 0, 8);
								func_189(uParam0, 52, 1, 0, 0);
								func_282(uParam0, 16, 0, 0);
							}
							else
							{
								if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
								{
									StringConCat(&cVar0, "_copBa2", 24);
								}
								else
								{
									StringConCat(&cVar0, "_copBa1", 24);
								}
								cVar6 = { cVar0 };
								func_333(uParam0, &cVar0, 0, 0, 8);
								func_282(uParam0, 16, 0, 0);
							}
						}
						else
						{
							StringConCat(&cVar0, "_copBa1", 24);
							cVar6 = { cVar0 };
							func_336(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
							func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
							func_282(uParam0, 16, 0, 0);
							func_242(uParam0, 0, 0);
						}
						Jump @12990; //curOff = 9882
						StringConCat(&cVar0, "_evdeP1", 24);
						func_334(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_282(uParam0, 10, 0f, 1);
						Jump @12990; //curOff = 9939
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							func_241("TAXI_OBJ_POL", 7500, 1);
							uParam0->f_417 = 52;
						}
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 9981
						StringConCat(&cVar0, "_cpFz1", 24);
						func_191(&cVar0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 10011
						if (!func_19(uParam0->f_81, 262144))
						{
							func_328(uParam0, 262144, cVar0, "_rdCh1", 1, 8);
						}
						else if (!func_19(uParam0->f_81, 1048576))
						{
							if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
							{
								func_328(uParam0, 1048576, cVar0, "_rdCh2", 1, 8);
							}
							else
							{
								func_328(uParam0, 1048576, cVar0, "_rdCh2", 0, 8);
							}
						}
						func_334(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 10168
						if (!func_19(uParam0->f_82, 67108864))
						{
							if (uParam0->f_418.f_6)
							{
								func_319(uParam0, 67108864, cVar0, "_rdLk1", 1, 7);
							}
						}
						else if (!func_19(uParam0->f_82, 134217728))
						{
							func_319(uParam0, 134217728, cVar0, "_rdFv1", 0, 7);
						}
						func_334(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 10290
						StringConCat(&cVar0, "_rdneu1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 10314
						StringConCat(&cVar0, "_rdtip1", 24);
						cVar6 = { cVar0 };
						StringConCat(&cVar6, "_", 24);
						StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 10391
						func_241("TAXI_OBJ_GYB_2", 7500, 1);
						uParam0->f_417 = 100;
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 10421
						if (uParam0->f_411 == 1)
						{
							StringConCat(&cVar0, "_horn", 24);
							func_333(uParam0, &cVar0, 0, 0, 8);
						}
						Jump @12990; //curOff = 10454
						StringConCat(&cVar0, "_thank1", 24);
						if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
						{
							func_191(&cVar0);
						}
						func_58(&(uParam0->f_81), 2097152);
						if (uParam0->f_411 != 9)
						{
							func_333(uParam0, &cVar0, 0, 0, 8);
						}
						Jump @12990; //curOff = 10542
						StringConCat(&cVar0, "_thank2", 24);
						if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
						{
							func_191(&cVar0);
						}
						func_58(&(uParam0->f_81), 2097152);
						if (uParam0->f_411 != 9)
						{
							func_333(uParam0, &cVar0, 0, 0, 8);
						}
						Jump @12990; //curOff = 10630
						if (uParam0->f_411 == 4)
						{
							StringConCat(&cVar0, "_pissed1", 24);
						}
						else
						{
							StringConCat(&cVar0, "_thank3", 24);
						}
						if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
						{
							func_191(&cVar0);
						}
						func_58(&(uParam0->f_81), 2097152);
						if (uParam0->f_411 != 9)
						{
							func_333(uParam0, &cVar0, 0, 0, 8);
						}
						Jump @12990; //curOff = 10738
						if (!func_19(uParam0->f_82, 65536))
						{
							if (func_398(uParam0, 11) > uParam0->f_36)
							{
								switch (uParam0->f_102)
								{
									case 0:
										StringConCat(&cVar0, "_ccba2", 24);
										break;
									case 1:
										StringConCat(&cVar0, "_ccba1", 24);
										break;
									default:
										StringConCat(&cVar0, "_ccba1", 24);
										break;
								}
								func_191(&cVar0);
								func_325(cVar0, uParam1);
								func_58(&(uParam0->f_82), 65536);
								func_282(uParam0, 16, 0, 0);
								func_282(uParam0, 11, 0, 0);
								func_242(uParam0, 0, 0);
							}
						}
						Jump @12990; //curOff = 10883
						if (!func_19(uParam0->f_82, 131072))
						{
							if (func_398(uParam0, 11) > uParam0->f_36)
							{
								StringConCat(&cVar0, "_ccbb1", 24);
								func_191(&cVar0);
								func_325(cVar0, uParam1);
								func_58(&(uParam0->f_82), 131072);
								func_282(uParam0, 16, 0, 0);
								func_282(uParam0, 11, 0, 0);
								func_242(uParam0, 0, 0);
							}
						}
						Jump @12990; //curOff = 10982
						if (!func_19(uParam0->f_82, 8388608))
						{
							StringConCat(&cVar0, "_close1", 24);
							func_58(&(uParam0->f_82), 8388608);
						}
						else if (!func_19(uParam0->f_82, 16777216))
						{
							StringConCat(&cVar0, "_close2", 24);
							func_58(&(uParam0->f_82), 16777216);
						}
						else if (!func_19(uParam0->f_82, 33554432))
						{
							StringConCat(&cVar0, "_close3", 24);
							func_58(&(uParam0->f_82), 33554432);
						}
						func_325(cVar0, uParam1);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 11131
						if (uParam0->f_411 == 6)
						{
							StringConCat(&cVar0, "_kill1", 24);
							cVar6 = { cVar0 };
							func_336(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
							func_191(&cVar0);
							func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						}
						else if (uParam0->f_411 == 8)
						{
							StringConCat(&cVar0, "_cheat1", 24);
							func_333(uParam0, &cVar0, 0, 0, 8);
						}
						else
						{
							StringConCat(&cVar0, "_kill1", 24);
							func_333(uParam0, &cVar0, 0, 0, 8);
						}
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 11276
						StringConCat(&cVar0, "_wndw2", 24);
						func_325(cVar0, uParam1);
						func_282(uParam0, 16, 0, 0);
						func_282(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 11325
						StringConCat(&cVar0, "_wndw0", 24);
						func_325(cVar0, uParam1);
						func_282(uParam0, 16, 0, 0);
						func_282(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 11374
						StringConCat(&cVar0, "_wndw1", 24);
						func_325(cVar0, uParam1);
						func_282(uParam0, 16, 0, 0);
						func_282(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 11423
						StringConCat(&cVar0, "_csite1", 24);
						func_191(&cVar0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11453
						StringConCat(&cVar0, "_fair1", 24);
						func_191(&cVar0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11483
						StringConCat(&cVar0, "_AlCk1", 24);
						cVar6 = { cVar0 };
						func_336(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 11555
						StringConCat(&cVar0, "_eggG1", 24);
						cVar6 = { cVar0 };
						func_336(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
						func_335(&(uParam0->f_244), uParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 11627
						StringConCat(&cVar0, "_goons1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11651
						StringConCat(&cVar0, "_oRun1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11675
						StringConCat(&cVar0, "_gotG1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11699
						StringConCat(&cVar0, "_getA1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11723
						StringConCat(&cVar0, "_gnawy1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11747
						StringConCat(&cVar0, "_grl1", 24);
						func_191(&cVar0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11777
						StringConCat(&cVar0, "_figt1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11801
						StringConCat(&cVar0, "_gEgg1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11825
						StringConCat(&cVar0, "_gEgg3", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11849
						StringConCat(&cVar0, "_gEgg2", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11873
						StringConCat(&cVar0, "_gLeav1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11897
						StringConCat(&cVar0, "_aKill1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11921
						StringConCat(&cVar0, "_gHelp1", 24);
						func_191(&cVar0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 11951
						StringConCat(&cVar0, "_gDest1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_189(uParam0, 11, 1, 0, 0);
						Jump @12990; //curOff = 11986
						StringConCat(&cVar0, "_gKO1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 12010
						StringConCat(&cVar0, "_gThank1", 24);
						func_58(&(uParam0->f_81), 2097152);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 12046
						StringConCat(&cVar0, "_gDriv1", 24);
						func_191(&cVar0);
						func_325(cVar0, uParam1);
						func_58(&(uParam0->f_81), 67108864);
						func_282(uParam0, 16, 0, 0);
						func_282(uParam0, 11, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12114
						StringConCat(&cVar0, "_cash1", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 12138
						if (!func_19(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
						{
							func_328(uParam0, 33554432, cVar0, "_noPay1", 1, 8);
						}
						else if (uParam0->f_411 == 9)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_3))
							{
								func_237(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
							}
						}
						func_189(uParam0, 108, 1, 0, 0);
						Jump @12990; //curOff = 12246
						StringConCat(&cVar0, "_foot", 24);
						func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 9, 0, 0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12295
						if (!func_19(uParam0->f_81, 268435456))
						{
							func_328(uParam0, 268435456, cVar0, "_kPay1", 1, 8);
						}
						func_189(uParam0, 52, 1, 0, 0);
						Jump @12990; //curOff = 12348
						func_241("TAXI_OBJ_RUNOUT", 7500, 1);
						uParam0->f_417 = 108;
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12378
						if (!func_19(uParam0->f_81, 4194304))
						{
							if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
							{
								func_328(uParam0, 4194304, cVar0, "_mPay1", 0, 8);
							}
							else if (uParam0->f_411 == 9)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_3))
								{
									func_237(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
								}
							}
							else
							{
								func_328(uParam0, 4194304, cVar0, "_mPay1", 1, 8);
							}
						}
						func_189(uParam0, 111, 1, 0, 0);
						Jump @12990; //curOff = 12518
						func_241("TAXI_OBJ_GETRUN", 7500, 1);
						uParam0->f_417 = 111;
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12548
						StringConCat(&cVar0, "_runoff", 24);
						func_287(&(uParam0->f_244), uParam0->f_144, &cVar0, 9, 0, 0, 0);
						func_282(uParam0, 16, 0, 0);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12597
						if (!func_19(uParam0->f_81, 16777216))
						{
							func_328(uParam0, 16777216, cVar0, "_ret1", 1, 8);
						}
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12647
						func_241("TAXI_TIEFLEE", 7500, 1);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12670
						if (!func_19(uParam0->f_98, 536870912))
						{
							func_241("TAXI_OBJ_CYI_1B", 7500, 1);
							func_58(&(uParam0->f_98), 536870912);
						}
						uParam0->f_417 = 57;
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12730
						StringConCat(&cVar0, "_joke1", 24);
						func_191(&cVar0);
						func_333(uParam0, &cVar0, 0, 0, 8);
						Jump @12990; //curOff = 12760
						if (uParam0->f_115)
						{
							StringConCat(&cVar0, "_wronglz", 24);
						}
						else if (uParam0->f_116)
						{
							StringConCat(&cVar0, "_wrong2", 24);
						}
						else
						{
							StringConCat(&cVar0, "_wrong", 24);
						}
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12828
						StringConCat(&cVar0, "_shout", 24);
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12860
						if (uParam0->f_411 == 4)
						{
							StringCopy(&cVar0, "tm6_jack", 24);
						}
						else
						{
							StringConCat(&cVar0, "_jack", 24);
						}
						func_333(uParam0, &cVar0, 0, 0, 8);
						func_242(uParam0, 0, 0);
						Jump @12990; //curOff = 12912
						StringConCat(&cVar0, "_getCar", 24);
						func_333(uParam0, &cVar0, 1, 0, 8);
						func_189(uParam0, 134, 1, 0, 0);
						Jump @12990; //curOff = 12947
						func_241("TX_VIP", 7500, 0);
						uParam0->f_417 = 134;
						func_189(uParam0, 0, 0, 0, 0);
						func_242(uParam0, 0, 0);
					}
				}

void func_319(var uParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_58(&(uParam0->f_82), iParam1);
	func_282(uParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_191(&cParam2);
	}
	func_287(&(uParam0->f_244), uParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

void func_320(var uParam0, char[24] cParam1, int iParam7)
{
	vector3 vVar0[24];

	cVar0 = { cParam1 };
	if (!func_19(uParam0->f_82, 64))
	{
		func_58(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_19(uParam0->f_82, 128))
	{
		func_58(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_335(&(uParam0->f_244), uParam0->f_144, &cParam1, &cVar0, iParam7, 0, 0);
	func_282(uParam0, 16, 0, 0);
}

void func_321(var uParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_58(&(uParam0->f_82), iParam1);
	func_282(uParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_191(&cParam2);
		}
	}
	func_287(&(uParam0->f_244), uParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

bool func_322(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return true;
	}
	return false;
}

void func_323(var uParam0, int iParam1, char[12] cParam2, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9)
{
	func_58(&(uParam0->f_81), iParam1);
	func_282(uParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	func_287(&(uParam0->f_244), uParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

void func_324(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_258(*uParam0, iVar1))
		{
			func_59(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_191(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_325(char[24] cParam0, var uParam6)
{
	int iVar0;

	iVar0 = func_326(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_58(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_326(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_327(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_241("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_241("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		case 2:
			if (bParam1)
			{
				func_241("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_241("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_241("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_241("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		case 6:
			if (bParam1)
			{
				func_241("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		case 7:
			if (bParam1)
			{
				func_241("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_241("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				func_241("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_241("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				func_241("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_241("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_328(var uParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_58(&(uParam0->f_81), iParam1);
	func_282(uParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_191(&cParam2);
	}
	func_287(&(uParam0->f_244), uParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

int func_329(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_167(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_330(var uParam0, char[12] cParam1, var uParam4, var uParam5, var uParam6, char* sParam7)
{
	func_282(uParam0, 16, 0, 0);
	func_282(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_331(uParam0));
	}
}

char* func_331(var uParam0)
{
	char* sVar0;

	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		case 1:
			sVar0 = "TaxiOtis";
			break;
		case 2:
			sVar0 = "TaxiKwak";
			break;
		case 3:
			sVar0 = "TaxiWalter";
			break;
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		case 7:
			sVar0 = "TaxiDarren";
			break;
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_332(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				case 1:
					return "_ACRH";
				case 2:
					return "_ACAA";
				case 3:
					return "_ACRH";
				case 4:
					return "_AEAA";
				case 5:
					return "_DKAA";
				case 6:
					return "_ACAA";
				case 7:
					return "_ACAA";
				case 8:
					return "_ACRH";
				default:
					break;
			}
			return "_ACRH";
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				case 1:
					return "_AHIT";
				case 2:
					return "_AEAA";
				case 3:
					return "_ADAA";
				case 4:
					return "_AFAA";
				case 5:
					return "_AFAA";
				case 6:
					return "_AEAA";
				case 7:
					return "_AHAA";
				case 8:
					return "_AEAA";
				default:
					break;
			}
			return "_AHIT";
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				case 1:
					return "_AROL";
				case 2:
					return "_AHAA";
				case 3:
					return "_AROL";
				case 4:
					return "_AGAA";
				case 5:
					return "_AROL";
				case 6:
					return "_AROL";
				case 7:
					return "_AROL";
				case 8:
					return "_AROL";
				default:
					break;
			}
			return "_AROL";
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				case 1:
					return "_FUAA";
				case 2:
					return "_AFAA";
				case 3:
					return "_DBAA";
				case 4:
					return "_DLAA";
				case 5:
					return "_DKAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				case 7:
					return "_DBAA";
				case 8:
					return "_EFAA";
				default:
					return "_AROL";
			}
			break;
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				case 1:
					return "_ACAA";
				case 2:
					return "_AJAA";
				case 3:
					return "_AHAA";
				case 4:
					return "_AHAA";
				case 5:
					return "_AIAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				case 7:
					return "_AUAA";
				case 8:
					return "_AHAA";
				default:
					return "_AROL";
			}
			break;
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				case 1:
					return "_AAAA";
				case 2:
					return "_ADAA";
				case 3:
					return "_ABAA";
				case 4:
					return "_AAAA";
				case 5:
					return "_ABAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				case 7:
					return "_BUAA";
				case 8:
					return "_ADAA";
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_333(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_282(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_282(uParam0, 17, 0f, 1);
	}
	func_242(uParam0, iParam2, 0);
	return func_287(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_334(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_19(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_19(*uParam2, 1073741824 /* Float: 2f */))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_19(*uParam2, 4))
		{
			if (!func_19(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_17(uParam2, 4096);
			}
		}
		else if (func_19(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_19(*uParam2, 512))
		{
			if (!func_19(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_17(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_19(*uParam2, 16))
		{
			if (!func_19(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_17(uParam2, 4096);
			}
		}
		else if (func_19(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_19(*uParam2, 64))
		{
			if (!func_19(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_17(uParam2, 4096);
			}
		}
		else if (func_19(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_19(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_19(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_19(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_19(*uParam2, 8192))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_19(*uParam2, 16384))
		{
			if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_19(*uParam2, 32768))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_19(*uParam2, 65536))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_19(*uParam2, 131072))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_19(*uParam2, 262144))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_19(*uParam2, 524288))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_19(*uParam2, 1048576))
		{
			if (func_19(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_19(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_19(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_19(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_19(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_19(*uParam2, 67108864))
		{
			if (func_19(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_19(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_19(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_19(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_19(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_335(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_300(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_288(sParam2, iParam4, 0);
}

void func_336(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_258(*uParam0, iVar1))
		{
			func_59(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_191(sParam2);
				}
				else
				{
					func_191(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_337(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_338(var uParam0)
{
	return uParam0->f_416;
}

bool func_339(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_155(sParam0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_340(var uParam0)
{
	if (func_179())
	{
		return true;
	}
	if (func_146(uParam0, 17))
	{
		return true;
	}
	if (func_146(uParam0, 14))
	{
		return true;
	}
	if (func_153(uParam0))
	{
		return true;
	}
	return false;
}

bool func_341(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_146(uParam0, 9));
}

void func_342(var uParam0)
{
	if (func_146(uParam0, 17))
	{
		if (!func_146(uParam0, 14))
		{
			if (!func_153(uParam0))
			{
				if (!func_179())
				{
					func_144(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_343(var uParam0)
{
	return uParam0->f_117;
}

void func_344(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_398(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_189(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_189(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_282(uParam0, 10, 0f, 1);
				}
			}
			else if (func_398(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_189(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_189(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_282(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_398(uParam0, 10) > 30f)
		{
			if (!func_179())
			{
				if (uParam0->f_112)
				{
					func_189(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_189(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_282(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_19(uParam0->f_100, 64))
	{
		if (!func_106(&(Local_190[5 /*10*/].f_6)))
		{
			func_193(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_367(uParam0))
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_366(uParam0, 1);
				func_364(5, uParam0);
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 1))
	{
		if (!func_106(&(Local_190[0 /*10*/].f_6)))
		{
			func_193(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_362(uParam0))
			{
				func_366(uParam0, 1);
				func_364(0, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 2))
	{
		if (!func_106(&(Local_190[1 /*10*/].f_6)))
		{
			func_193(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_361(uParam0))
			{
				func_366(uParam0, 1);
				func_364(1, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 2048))
	{
		if (!func_106(&(Local_190[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_193(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_100(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_360(uParam0))
			{
				func_366(uParam0, 1);
				func_364(8, uParam0);
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 128))
	{
		if (!func_106(&(Local_190[6 /*10*/].f_6)))
		{
			func_193(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_359(uParam0))
			{
				func_366(uParam0, 1);
				func_364(6, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 32))
	{
		if (!func_106(&(Local_190[4 /*10*/].f_6)))
		{
			func_193(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_358(uParam0))
			{
				func_366(uParam0, 1);
				func_364(4, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 256))
	{
		if (!func_106(&(Local_190[7 /*10*/].f_6)))
		{
			func_193(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_357(uParam0))
			{
				func_364(7, uParam0);
				func_366(uParam0, 1);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 8))
	{
		if (!func_106(&(Local_190[9 /*10*/].f_6)))
		{
			func_193(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_100(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_356(uParam0))
			{
				func_366(uParam0, 1);
				func_364(9, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 16384))
	{
		if (!func_106(&(Local_190[13 /*10*/].f_6)))
		{
			func_193(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_350(uParam0))
			{
				func_366(uParam0, 1);
				func_364(13, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 32768))
	{
		if (!func_106(&(Local_190[14 /*10*/].f_6)))
		{
			func_193(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_349(uParam0))
			{
				func_366(uParam0, 1);
				func_364(14, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 4096))
	{
		if (!func_106(&(Local_190[11 /*10*/].f_6)))
		{
			func_193(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_348(uParam0))
			{
				func_366(uParam0, 1);
				func_364(11, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 8192))
	{
		if (!func_106(&(Local_190[12 /*10*/].f_6)))
		{
			func_193(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_347(uParam0))
			{
				func_366(uParam0, 1);
				func_364(12, uParam0);
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (func_19(uParam0->f_100, 4))
	{
		if (!func_106(&(Local_190[2 /*10*/].f_6)))
		{
			func_346(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_100(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_345(uParam0))
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_366(uParam0, 1);
				func_364(2, uParam0);
				func_363(uParam0);
			}
		}
	}
}

bool func_345(var uParam0)
{
	float fVar0;

	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_106(&(Local_190[0 /*10*/].f_3))) && !func_106(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_106(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_193(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_100(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_99(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return true;
				}
			}
		}
		else
		{
			func_99(&(Local_190[2 /*10*/].f_3));
		}
	}
	return false;
}

void func_346(int iParam0, float fParam1)
{
	if (!func_106(iParam0))
	{
		func_105(iParam0, fParam1);
	}
}

bool func_347(var uParam0)
{
	vector3 vVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (vVar0.y < -10f && !func_106(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_106(&(Local_190[12 /*10*/].f_3)))
			{
				func_193(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_190[12 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[12 /*10*/].f_3));
		}
	}
	return false;
}

bool func_348(var uParam0)
{
	vector3 vVar0;

	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_106(&(Local_190[0 /*10*/].f_3))) && !func_106(&(Local_190[1 /*10*/].f_3))) && !func_106(&(Local_190[5 /*10*/].f_3))) && !func_106(&(Local_190[9 /*10*/].f_3))) && !func_106(&(Local_190[7 /*10*/].f_3))) && !func_106(&(Local_190[8 /*10*/].f_3)))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(vVar0.x) > 2.5f && !func_106(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_106(&(Local_190[11 /*10*/].f_3)))
			{
				func_193(&(Local_190[11 /*10*/].f_3));
				fLocal_342 = vVar0.x;
			}
			else if (func_100(&(Local_190[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_342) - MISC::ABSF(vVar0.x)) < 0f)
			{
				func_99(&(Local_190[11 /*10*/].f_3));
				return true;
			}
			else if (func_100(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_99(&(Local_190[11 /*10*/].f_3));
				return false;
			}
		}
	}
	return false;
}

bool func_349(var uParam0)
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_106(&(Local_190[0 /*10*/].f_3))) && !func_106(&(Local_190[8 /*10*/].f_3))) && !func_106(&(Local_190[5 /*10*/].f_3))) && !func_106(&(Local_190[9 /*10*/].f_3))) && !func_106(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_106(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_161(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					func_193(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_100(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_161(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return true;
		}
		else if (func_100(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return false;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return false;
		}
	}
	return false;
}

bool func_350(var uParam0)
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_106(&(Local_190[9 /*10*/].f_3))) && !func_106(&(Local_190[7 /*10*/].f_3))) && !func_106(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_351(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_106(&(Local_190[13 /*10*/].f_3)))
			{
				func_193(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_190[13 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[13 /*10*/].f_3));
		}
	}
	return false;
}

int func_351(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	float fVar27;

	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &vVar3, 1, 3f, 0f);
	PATHFIND::_GET_POINT_ON_ROAD_SIDE(vVar0, -1, &vVar6);
	fVar27 = SYSTEM::VMAG(vVar6 - vVar0);
	vVar9 = { func_355((vVar3.x - vVar0.x), (vVar3.y - vVar0.y), 0f) };
	vVar12 = { func_354(vVar9, 0) * Vector(fVar27, fVar27, fVar27) };
	vVar9 = { vVar9 * Vector(2f, 2f, 2f) };
	vVar15 = { vVar0 - vVar9 + vVar12 };
	vVar18 = { vVar0 - vVar9 - vVar12 };
	vVar21 = { vVar3 + vVar9 + vVar12 };
	vVar24 = { vVar3 + vVar9 - vVar12 };
	vVar24 = { vVar24 };
	return func_352(ENTITY::GET_ENTITY_COORDS(iParam0, true), vVar15, vVar18, vVar21);
}

int func_352(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	vParam6.f_2 = 0f;
	vParam9.f_2 = 0f;
	vVar0 = { func_355(vParam6 - vParam3) };
	vVar3 = { func_355(vParam9 - vParam3) };
	fVar6 = func_353(vParam0, vVar0);
	fVar7 = func_353(vParam3, vVar0);
	fVar8 = func_353(vParam6, vVar0);
	fVar9 = func_353(vParam0, vVar3);
	fVar10 = func_353(vParam3, vVar3);
	fVar11 = func_353(vParam9, vVar3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_353(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_354(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

Vector3 func_355(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_356(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_357(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!bLocal_341)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						bLocal_341 = true;
					}
				}
			}
			else if (bLocal_341)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					bLocal_341 = false;
					return true;
				}
			}
		}
	}
	return false;
}

bool func_358(var uParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_106(&(Local_190[4 /*10*/].f_3)))
			{
				func_193(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_99(&(Local_190[4 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[4 /*10*/].f_3));
		}
	}
	return false;
}

bool func_359(var uParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_106(&(Local_190[6 /*10*/].f_3)))
			{
				func_193(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_190[6 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[6 /*10*/].f_3));
		}
	}
	return false;
}

bool func_360(var uParam0)
{
	int iVar0;
	int iVar1;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_189(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_189(uParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_190[2 /*10*/].f_6));
				return true;
			}
		}
	}
	return false;
}

bool func_361(var uParam0)
{
	vector3 vVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(vVar0.x) > 3f && !func_106(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_106(&(Local_190[1 /*10*/].f_3)))
			{
				func_193(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_99(&(Local_190[1 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[1 /*10*/].f_3));
		}
	}
	return false;
}

bool func_362(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_106(&(Local_190[0 /*10*/].f_3)))
			{
				func_193(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_99(&(Local_190[0 /*10*/].f_3));
				func_104(&(Local_190[1 /*10*/].f_6));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[0 /*10*/].f_3));
		}
	}
	return false;
}

void func_363(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_106(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_104(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_282(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_364(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_365(uParam1, iParam0);
	func_99(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_365(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_366(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

bool func_367(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_106(&(Local_190[5 /*10*/].f_3)))
			{
				func_193(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_190[5 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[5 /*10*/].f_3));
		}
	}
	return false;
}

void func_368(var uParam0)
{
	if (!func_147(uParam0))
	{
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_159(uParam0, 1);
	}
	else if (func_146(uParam0, 14))
	{
		func_173(uParam0);
		func_162(uParam0, 0);
	}
}

void func_369(var uParam0)
{
	int iVar0;

	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_343 > 0 && !func_258(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_258(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_258(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_59(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_18(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_258(Local_343.f_1[iVar0 /*4*/], 4) && !func_258(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_59(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_286(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_370(var uParam0, var uParam1, bool bParam2)
{
	if (!func_19(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_179())
				{
					*uParam1++;
				}
				break;
			case 1:
				if (!func_179())
				{
					StringCopy(&(uParam0->f_124), func_313(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
		}
	}
}

void func_371()
{
	if ((SYSTEM::ROUND((func_398(&Local_409, 7) * 1000f)) % 10000) < 50)
	{
	}
	if (!func_375(&Local_409, 27, fLocal_956[0]))
	{
		switch (iLocal_846)
		{
			case 0:
				func_373();
				Local_409.f_39 = fLocal_956[1];
				Local_409.f_40 = fLocal_956[2];
				iLocal_846++;
				break;
			case 1:
				func_372(26, 27, Local_409.f_39);
				break;
		}
	}
}

int func_372(int iParam0, int iParam1, float fParam2)
{
	if (func_146(&Local_409, 7))
	{
		if (iLocal_1014 < 22)
		{
			if (!func_179())
			{
				if (func_398(&Local_409, 7) <= (fLocal_964[iLocal_1014] + 6f) && func_398(&Local_409, 7) >= (fLocal_964[iLocal_1014] - 6f))
				{
					if (func_141(Local_409.f_17, 0) <= fLocal_987[iLocal_1014] && iLocal_1015 < 8)
					{
						if (!bLocal_1017)
						{
							iLocal_1014++;
							iLocal_1015++;
							func_189(&Local_409, iParam0, 1, 0, 0);
							func_104(&iLocal_855);
							bLocal_1017 = true;
						}
						if (func_106(&iLocal_855))
						{
							if (func_100(&iLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1015++;
								func_189(&Local_409, iParam0, 1, 0, 0);
								func_99(&iLocal_855);
								func_104(&iLocal_855);
							}
						}
						return 1;
					}
					else if (func_141(Local_409.f_17, 0) > fLocal_987[iLocal_1014] && iLocal_1016 < 8)
					{
						if (!bLocal_1017)
						{
							iLocal_1014++;
							iLocal_1016++;
							func_189(&Local_409, iParam1, 1, 0, 0);
							func_104(&iLocal_855);
							bLocal_1017 = true;
						}
						if (func_106(&iLocal_855))
						{
							if (func_100(&iLocal_855) > 20f)
							{
								iLocal_1014++;
								iLocal_1016++;
								func_189(&Local_409, iParam1, 1, 0, 0);
								func_99(&iLocal_855);
								func_104(&iLocal_855);
							}
						}
						return 1;
					}
				}
				else if (func_398(&Local_409, 7) > (fLocal_964[iLocal_1014] + 6f))
				{
					iLocal_1014++;
					return 1;
				}
			}
		}
		else if (func_398(&Local_409, 7) >= fParam2 && func_141(Local_409.f_17, 0) > 50f)
		{
			if (!func_179())
			{
				if (!func_106(&iLocal_858))
				{
					func_104(&iLocal_858);
				}
				else if (func_100(&iLocal_858) > 4f)
				{
					func_189(&Local_409, iParam1, 1, 0, 0);
				}
			}
			else if (func_106(&iLocal_858))
			{
				func_99(&iLocal_858);
			}
			return 1;
		}
	}
	return 0;
}

void func_373()
{
	if (iLocal_955 == 2)
	{
		iLocal_953 = 3;
		iLocal_954 = 4;
		fLocal_956[0] = 210f;
		fLocal_956[1] = 60f;
		fLocal_956[2] = 3150f;
		fLocal_956[3] = 105f;
		fLocal_956[4] = 1800f;
		fLocal_956[5] = 150f;
		fLocal_956[6] = 200f;
	}
	else
	{
		iLocal_953 = 9;
		iLocal_954 = 10;
		fLocal_956[0] = 140f;
		fLocal_956[1] = 60f;
		fLocal_956[2] = 1780f;
		fLocal_956[3] = 90f;
		fLocal_956[4] = 900f;
		fLocal_956[5] = 120f;
		fLocal_956[6] = 228f;
	}
	fLocal_964[0] = 70.05005f;
	fLocal_987[0] = 3090.417f;
	fLocal_964[1] = 76.25293f;
	fLocal_987[1] = 2929.083f;
	fLocal_964[2] = 82.69312f;
	fLocal_987[2] = 2759.83f;
	fLocal_964[3] = 88.34399f;
	fLocal_987[3] = 2576.061f;
	fLocal_964[4] = 94.97803f;
	fLocal_987[4] = 2350.886f;
	fLocal_964[5] = 100.7981f;
	fLocal_987[5] = 2177.442f;
	fLocal_964[6] = 106.467f;
	fLocal_987[6] = 2016.681f;
	fLocal_964[7] = 112.929f;
	fLocal_987[7] = 1839.417f;
	fLocal_964[8] = 118.4209f;
	fLocal_987[8] = 1689.62f;
	fLocal_964[9] = 124.4241f;
	fLocal_987[9] = 1526.638f;
	fLocal_964[10] = 130.76f;
	fLocal_987[10] = 1356.039f;
	fLocal_964[11] = 136.7f;
	fLocal_987[11] = 1184.013f;
	fLocal_964[12] = 142.573f;
	fLocal_987[12] = 1034.024f;
	fLocal_964[13] = 148.2161f;
	fLocal_987[13] = 894.6225f;
	fLocal_964[14] = 154.4321f;
	fLocal_987[14] = 756.5219f;
	fLocal_964[15] = 160.2749f;
	fLocal_987[15] = 669.364f;
	fLocal_964[16] = 166.25f;
	fLocal_987[16] = 570.2953f;
	fLocal_964[17] = 172.251f;
	fLocal_987[17] = 521.977f;
	fLocal_964[18] = 178.606f;
	fLocal_987[18] = 340.7466f;
	fLocal_964[19] = 184.6809f;
	fLocal_987[19] = 224.3091f;
	fLocal_964[20] = 190.708f;
	fLocal_987[20] = 126.9535f;
	fLocal_964[21] = 193.062f;
	fLocal_987[21] = 81.80421f;
	Local_409.f_23 = { func_281(iLocal_953) };
	Local_409.f_33 = func_374(iLocal_953);
	Local_409.f_26 = { func_281(1) };
	Local_409.f_34 = func_374(1);
	Local_409.f_29 = { 328.6758f, 443.9846f, 144.2298f };
}

float func_374(int iParam0)
{
	float fVar0;

	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 328.48f;
			break;
		case 1:
			fVar0 = 328.48f;
			break;
		case 2:
			fVar0 = 239.143f;
			break;
		case 3:
			fVar0 = 121.2021f;
			break;
		case 5:
			fVar0 = 268.6f;
			break;
		case 6:
			fVar0 = 218.5f;
			break;
		case 8:
			fVar0 = 268.6f;
			break;
		case 9:
			fVar0 = 301.6025f;
			break;
	}
	return fVar0;
}

bool func_375(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_410 < 29)
	{
		if (func_146(uParam0, 7))
		{
			func_145(uParam0, 23);
			if (func_398(uParam0, 7) > fParam2 && func_398(uParam0, 23) > 35f)
			{
				func_282(uParam0, 23, 0, 0);
				func_189(uParam0, iParam1, 1, 0, 0);
				return true;
			}
		}
	}
	return false;
}

int func_376(var uParam0, var uParam1)
{
	var uVar0;

	if (!func_146(uParam0, 27))
	{
		func_145(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_398(uParam0, 27) > 5f)
	{
		if (func_390(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_282(uParam0, 27, 0, 0);
			func_282(uParam0, 10, 0, 0);
			func_388(uParam0, &uVar0, uParam1);
		}
		func_385(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_377(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_179())
	{
		if (func_398(uParam0, 26) > 10f)
		{
			func_144(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_146(uParam0, 26))
	{
		func_144(uParam0, 26, 0);
	}
	return 0;
}

void func_377(var uParam0)
{
	if (!func_384(uParam0->f_429))
	{
		uParam0->f_429 = func_204();
		func_382(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_378(uParam0->f_429))
	{
		func_286(uParam0, "Player took too long to make pickup", 9);
	}
}

int func_378(int iParam0)
{
	return func_379(func_204(), iParam0);
}

int func_379(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_384(iParam1) || !func_384(iParam0))
	{
		return 1;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_381(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

void func_382(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_209(*uParam0);
	iVar1 = func_211(*uParam0);
	iVar2 = func_381(*uParam0);
	iVar3 = func_198(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_380(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_208(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_208(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_383(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_212(iParam0, iParam1);
	func_201(iParam0, iParam2);
	func_203(iParam0, iParam3);
	func_206(iParam0, iParam5);
	func_207(iParam0, iParam4);
	func_205(iParam0, iParam6);
}

bool func_384(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_380(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_198(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_209(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_211(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_381(iParam0);
	if (iVar5 < 1 || iVar5 > func_208(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_385(var uParam0)
{
	var uVar0;

	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_387()) && !func_147(uParam0)) || ((uParam0->f_411 != 9 && func_247(uParam0, 1)) && !func_147(uParam0)))
		{
			uVar0 = func_386(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			func_173(uParam0);
			func_162(uParam0, 0);
		}
	}
}

var func_386(var uParam0)
{
	return uParam0;
}

bool func_387()
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_16()))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_388(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_389(uParam0, 0, 1))
			{
				func_286(uParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (func_389(uParam0, 0, 4))
			{
				func_286(uParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (func_389(uParam0, 0, 8))
			{
				func_286(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (func_389(uParam0, 1, 1))
			{
				func_286(uParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (func_389(uParam0, 0, 1))
			{
				func_286(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!func_19(*uParam2, 2) && func_126(uParam0))
			{
				func_286(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

bool func_389(var uParam0, bool bParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (bParam1 && !uParam0->f_114))
	{
		return true;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_189(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_189(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return false;
}

bool func_390(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_19(*uParam2, 1))
		{
			if (func_396(iParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
		if (!func_19(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
		if (!func_19(*uParam2, 4))
		{
			if (func_394(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
		if (!func_19(*uParam2, 8))
		{
			if (func_393(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_19(*uParam2, 128);
		if (bParam4)
		{
			if (func_391(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_19(*uParam2, 16))
		{
			if (func_391(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_391(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return true;
				}
			}
		}
		if (bLocal_79)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return true;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return true;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return true;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return true;
		}
	}
	if (func_392(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return true;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_160(iParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return true;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return true;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_392(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_393(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_394(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, true))
	{
		return true;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
	{
		return true;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_395(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), false))
		{
			return true;
		}
	}
	return false;
}

bool func_395(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_161(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_396(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_160(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_397(var uParam0)
{
	if (!func_19(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (func_142(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, false, false, false, false, false, false);
				func_58(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_398(var uParam0, int iParam1)
{
	if (!func_106(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_193(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_100(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_399()
{
	func_400(&Local_409);
	func_417();
}

void func_400(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_419(2);
	}
}

bool func_401(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return true;
	}
	if ((((!func_179() && func_398(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (func_57(uParam0) == 0 || func_258(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_302(uParam0, 4160, 0);
						}
						else
						{
							func_302(uParam0, 0, 0);
						}
						return true;
					}
					else
					{
						func_302(uParam0, 0, 0);
						return true;
					}
				}
				else
				{
					func_302(uParam0, 0, 0);
					return true;
				}
			}
			else
			{
				func_302(uParam0, 0, 0);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return false;
}

void func_402(var uParam0)
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

bool func_403(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return true;
	}
	return false;
}

void func_404()
{
	func_406(&Local_409, 2);
	Local_409.f_410 = 0;
	func_405(&Local_409, 3, 6);
	Local_409.f_6 = 2f;
}

void func_405(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_406(var uParam0, int iParam1)
{
	func_416(1);
	func_175();
	func_7(&(uParam0->f_244));
	func_415(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_19(Global_111638.f_19092, 4))
	{
		func_58(&(Global_111638.f_19092), 4);
	}
	func_410(uParam0);
	func_408(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	uParam0->f_102 = (func_407(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_407(int iParam0)
{
	return Global_111638.f_19092.f_39[iParam0];
}

void func_408(var uParam0)
{
	switch (func_57(uParam0))
	{
		case 0:
			func_409(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		case 1:
			func_409(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		case 2:
			func_409(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		case 3:
			func_409(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		case 4:
			func_409(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		case 5:
			func_409(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		case 6:
			func_409(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		case 7:
			func_409(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		case 8:
			func_409(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		case 9:
			func_409(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_409(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_410(var uParam0)
{
	int iVar0;

	switch (uParam0->f_411)
	{
		case 0:
			func_414(uParam0, 3);
			func_413(uParam0, 14);
			break;
		case 1:
			func_414(uParam0, 14);
			func_413(uParam0, 8);
			break;
		case 2:
			func_414(uParam0, 8);
			func_413(uParam0, 7);
			break;
		case 3:
			func_414(uParam0, 15);
			func_413(uParam0, 6);
			break;
		case 4:
			func_414(uParam0, 0);
			func_413(uParam0, 3);
			break;
		case 5:
			func_414(uParam0, 6);
			func_413(uParam0, 7);
			break;
		case 6:
			func_414(uParam0, 8);
			func_413(uParam0, 15);
			break;
		case 7:
			func_414(uParam0, 8);
			func_413(uParam0, 14);
			break;
		case 8:
			func_414(uParam0, 7);
			func_413(uParam0, 15);
			break;
		case 9:
			func_414(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_412((uParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_413(uParam0, iVar0);
			func_411(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_411(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_412(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_413(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_414(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_415(var uParam0)
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_113() };
	uParam0->f_17 = { func_113() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_144(uParam0, 32, 0);
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_417()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 26, false);
	}
	func_418();
	func_115();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_418()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_839);
}

void func_419(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

