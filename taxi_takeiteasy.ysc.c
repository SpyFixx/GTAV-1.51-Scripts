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
	int iLocal_77 = 0;
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
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = false;
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
	bool bLocal_342 = false;
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
	var uLocal_409 = 0;
	struct<411> Local_410 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = -1;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	int iLocal_847 = 0;
	vector3 vLocal_848[1] = {{ 0f, 0f, 0f } };
	bool bLocal_852 = false;
	int iLocal_853 = 0;
	vector3 vLocal_854 = { 0f, 0f, 0f };
	vector3 vLocal_857 = { 0f, 0f, 0f };
	vector3 vLocal_860 = { 0f, 0f, 0f };
	vector3 vLocal_863 = { 0f, 0f, 0f };
	vector3 vLocal_866 = { 0f, 0f, 0f };
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	var uLocal_871 = 0;
	int iLocal_872 = 0;
	float fLocal_873 = 0f;
	float fLocal_874 = 0f;
	float fLocal_875 = 0f;
	bool bLocal_876 = false;
	bool bLocal_877 = false;
	bool bLocal_878 = false;
	bool bLocal_879 = false;
	bool bLocal_880 = false;
	bool bLocal_881 = false;
	bool bLocal_882 = false;
	bool bLocal_883 = false;
	bool bLocal_884 = false;
	bool bLocal_885 = false;
	struct<28> Local_886 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 5;
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
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 1097859072;
	var uLocal_960 = 1500;
	var uLocal_961 = 45;
	var uLocal_962 = 1103626240;
	var uLocal_963 = 5;
	int iLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
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
	iLocal_77 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_78 = UNK_0x817B3657F78A517A();
	vLocal_83 = { 500f, 500f, 500f };
	bLocal_852 = joaat("A_M_Y_SOUCENT_04");
	vLocal_854 = { -1230.55f, -896.7814f, 11.11059f };
	vLocal_857 = { 58.8213f, 293.848f, 109.6124f };
	vLocal_860 = { 62.7742f, 307.4984f, 109.981f };
	vLocal_863 = { 0f, 0f, 0f };
	vLocal_866 = { 0f, 0f, 0f };
	iLocal_869 = 1;
	fLocal_873 = 0f;
	fLocal_874 = 12f;
	bLocal_884 = "random@drunk_driver_1";
	if (UNK_0x2EBF608FFE6CA406(67))
	{
		func_440(2);
		func_439();
	}
	UNK_0x7798376279BB5369(1);
	func_426();
	while (true)
	{
		if (UNK_0xC844350D5D58C99A(Local_410.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_410);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = UNK_0x16F2683693E537C9();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;

	iVar1 = func_3(UNK_0x16F2683693E537C9());
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

int func_3(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
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

	iVar0 = func_3(UNK_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				UNK_0xA245D14CC59CDD36(bParam2, 0);
			}
			else
			{
				UNK_0xA245D14CC59CDD36(bParam2, 1);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				UNK_0x971EF1DE410C56CF(bParam2, 0);
			}
			else
			{
				UNK_0x971EF1DE410C56CF(bParam2, 1);
			}
		}
	}
}

void func_9()
{
	if (func_425(&Local_410))
	{
		func_424(&Local_410);
		if (Local_410.f_410 > 0)
		{
			if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
			{
			}
			if (func_423(&Local_410, 0))
			{
				func_421();
			}
		}
		else if (func_420(&Local_410, 31) > 5f)
		{
			func_440(2);
			func_439();
		}
	}
	else
	{
		func_419(&Local_410);
		func_385(&Local_410, &uLocal_957);
		func_384(&Local_410, &uLocal_871, 0);
		func_383(&Local_410);
		if (Local_410.f_410 > 2 && iLocal_847 == 0)
		{
			if (!func_382(&Local_410))
			{
				func_349();
			}
			else
			{
				func_343(&Local_410, "Taxi Not Driveable", func_348(&Local_410));
			}
		}
		if (Local_410.f_410 == 9 && iLocal_847 == 0)
		{
			func_319(&Local_410, 0, 0);
			func_317();
			if (bLocal_879)
			{
				if (func_316())
				{
					func_343(&Local_410, "Rider is too damn uncomfortable.", 9);
				}
			}
		}
		switch (Local_410.f_410)
		{
			case 0:
				func_315(&(vLocal_848[0 /*3*/]), "TAXI_SC_BN_01", 100);
				func_314(&Local_410, &vLocal_848);
				func_311();
				func_310(&Local_410, 16, 4f, 0);
				func_308(&Local_410, vLocal_857, vLocal_860, "TaxiOtis", bLocal_852, 135.3f, 40f);
				func_306(&Local_410);
				func_305(&Local_410, 1);
				break;
			case 1:
				if (func_303())
				{
					func_302();
					func_282();
					func_281(&Local_410);
					Local_410.f_14 = { vLocal_857 };
					func_305(&Local_410, 3);
				}
				break;
			case 3:
				if (func_276(&Local_410, 1))
				{
					if (!UNK_0x437347B10A200C4B(Local_410.f_3, 0))
					{
						UNK_0x64F9F278AB9DCA2C(Local_410.f_3, 3, true, false, 0);
						UNK_0x64F9F278AB9DCA2C(Local_410.f_3, 4, true, false, 0);
						UNK_0x64F9F278AB9DCA2C(Local_410.f_3, false, true, false, 0);
						UNK_0xBAFED2F6486F771A(Local_410.f_3, 1024, true);
						UNK_0xBAFED2F6486F771A(Local_410.f_3, 131072, true);
					}
					func_275(&Local_410, 1, 0);
					func_305(&Local_410, 5);
				}
				break;
			case 5:
				if (func_245(&Local_410, 0, 1109393408 /* Float: 40f */))
				{
					func_305(&Local_410, 15);
				}
				break;
			case 15:
				if (func_244(&Local_410))
				{
					Local_410.f_17 = { vLocal_854 };
					func_241(&Local_410, 9, 1, 0, 0);
					func_240(&Local_410);
					Local_410.f_46 = UNK_0x7F6DC62EA9922664(Local_410.f_4);
					func_239();
					switch (func_238(&Local_410))
					{
						case 2:
							bLocal_883 = "vomit_van";
							break;
						case 0:
							bLocal_883 = "vomit_low";
							break;
						case 1:
							bLocal_883 = "vomit_outside";
							break;
					}
					func_305(&Local_410, 9);
				}
				if (UNK_0xDF1306B443CD3D15(Local_410.f_4, 0))
				{
					if (!UNK_0xC42A92762C58E1B9(Local_410.f_2, Local_410.f_4, 0))
					{
						func_236(&Local_410);
						func_305(&Local_410, 5);
					}
				}
				break;
			case 9:
				if (!bLocal_882)
				{
					if ((func_235(&Local_410, 0) || func_235(&Local_410, 2)) || func_234(&Local_410, 2))
					{
						bLocal_882 = true;
					}
				}
				if (func_231(&Local_410, 1086324736 /* Float: 6f */) && iLocal_847 == 1)
				{
					if (iLocal_853 != 0)
					{
						UNK_0xF7E25143642732EA(iLocal_853, 0);
						iLocal_853 = 0;
					}
					UNK_0xA3BF0AA5A2608191(Local_410.f_3);
					bLocal_879 = true;
				}
				switch (iLocal_847)
				{
					case 0:
						if (func_213(&Local_410, 1086324736 /* Float: 6f */, 1097859072 /* Float: 15f */))
						{
							func_211(&uLocal_916);
							func_210(&Local_886, 3, 0);
							UNK_0x142CC44DB769B57E(&(Local_410.f_9));
							func_208(&Local_410);
							func_195(&(Local_410.f_244), Local_410.f_144, "txm1_arrive", 9, 0, 0, 0);
							func_305(&Local_410, 22);
						}
						if ((((func_194(&Local_410) >= 2 && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 1) && !UNK_0x377BE9A1BF38C7CE(Local_410.f_4)) && !(UNK_0xCE563465D2227DD6(Local_410.f_4) <= -145f || UNK_0xCE563465D2227DD6(Local_410.f_4) >= 145f)) && !bLocal_879)
						{
							if (func_193())
							{
								func_191();
								func_241(&Local_410, 61, 1, 0, 0);
							}
							Local_410.f_76 = 0;
							iLocal_847 = 1;
						}
						if (UNK_0x9F4FE516EAACCFC5(Local_410))
						{
							UNK_0x9A8DDC7C522F5BF5(Local_410, 0);
							UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						}
						break;
					case 1:
						if (!bLocal_879)
						{
							func_189(&(Local_410.f_3));
						}
						if (func_186())
						{
							if (bLocal_880)
							{
								func_241(&Local_410, 62, 1, 0, 0);
								iLocal_847 = 0;
							}
							else
							{
								func_241(&Local_410, 63, 1, 0, 0);
								iLocal_847 = 0;
							}
							UNK_0xF3039DE1FDB4F6FD(1);
						}
						if (!func_181(&Local_410))
						{
							func_169(&Local_410, 1);
							if (!UNK_0x93B62D155C014521(UNK_0xA30EC016B12C03E4()))
							{
								UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
							}
						}
						else if (UNK_0x5A91F08DF773C39D(Local_410.f_4, Local_410.f_17, 2f, 2f, 20f, false, true, 0))
						{
							UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, false);
						}
						break;
				}
				break;
			case 22:
				if (!func_193())
				{
					if (bLocal_879)
					{
						func_168(0);
					}
					else
					{
						func_168(1);
						func_167(&Local_410, 0);
					}
					func_305(&Local_410, 27);
				}
				break;
			case 27:
				if (func_157(&Local_410, 1))
				{
					func_156(&Local_410);
					func_241(&Local_410, 104, 1, 1, 0);
					func_305(&Local_410, 29);
				}
				break;
			case 28:
				if (func_116(&uLocal_409, &Local_410, &(Local_410.f_3), &uLocal_840, 1))
				{
					func_241(&Local_410, 104, 1, 1, 0);
					func_305(&Local_410, 29);
				}
				break;
			case 29:
				if (func_81(&Local_410, &iLocal_964))
				{
					func_11(1, &Local_410, 1);
					func_305(&Local_410, 30);
				}
				if (!UNK_0xEB6A8945D1AC98A1(Local_410.f_3))
				{
					if (func_10(Local_410.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						UNK_0x9DD8618CA5BF832D(Local_410.f_3, 60, true);
					}
				}
				break;
			case 30:
				if (!UNK_0xEB6A8945D1AC98A1(Local_410.f_3))
				{
					if (func_10(Local_410.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						UNK_0x9DD8618CA5BF832D(Local_410.f_3, 60, true);
					}
					if (func_10(Local_410.f_3, Local_410.f_29, 1) < 1f)
					{
						func_439();
					}
				}
				else
				{
					func_439();
				}
				break;
		}
	}
}

float func_10(bool bParam0, vector3 vParam1, int iParam4)
{
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return -1f;
	}
	return UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1, iParam4);
}

void func_11(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		func_55(iParam1);
		if (!UNK_0xEB6A8945D1AC98A1(iParam1->f_3))
		{
			UNK_0x4E885A246A9D983A(iParam1->f_3, 317, true);
		}
	}
	else
	{
		func_53(1, 0);
	}
	func_12(iParam1, bParam2);
}

void func_12(int iParam0, bool bParam1)
{
	func_424(iParam0);
	if (func_193())
	{
		func_51();
	}
	func_49();
	UNK_0x790015DC92C918E2();
	UNK_0xA37A90C62806D848(1);
	func_44(0);
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		UNK_0x44A200C9B6E1CEA6(iParam0->f_4, false);
		UNK_0x78CCB85A0DC35709(iParam0->f_4);
		UNK_0x7AA3AFA47C4179D1(iParam0->f_4);
	}
	func_41(iParam0->f_14, 1);
	func_39(iParam0->f_14, 1, 1114636288 /* Float: 60f */);
	func_38(&(iParam0->f_244), 3);
	UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, true);
	if (func_35())
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	UNK_0x2D23BE319D971F4C(1);
	func_25(0, 1, 1, 0, 0, 0);
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	if (UNK_0x9F4FE516EAACCFC5(*iParam0))
	{
		UNK_0x9A8DDC7C522F5BF5(*iParam0, 0);
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0xF3039DE1FDB4F6FD(1);
	}
	if (func_24(Global_111638.f_19092, 4))
	{
		func_22(&(Global_111638.f_19092), 4);
		UNK_0xAB8E2DDC7AF955E0(func_21(), false);
	}
	if (bParam1)
	{
		func_20(iParam0);
	}
	func_19(iParam0);
	UNK_0x8D17794CE3273D70("gestures@m@standing@casual");
	UNK_0x8D17794CE3273D70("oddjobs@taxi@");
	UNK_0x8D17794CE3273D70("oddjobs@towingcome_here");
	if (UNK_0x58424C49F8924842())
	{
		func_17(iParam0->f_411);
	}
	if (!UNK_0x93B62D155C014521(UNK_0xA30EC016B12C03E4()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	}
	UNK_0x11E0F00830F70E15(SYSTEM::ROUND((func_13(&uLocal_90) * 1000f)), 12, 0);
}

float func_13(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		iVar2 = UNK_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_15(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

bool func_16(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

void func_17(int iParam0)
{
	var uVar0;

	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!UNK_0x2EBF5002C6B6A06C(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)
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

void func_19(int iParam0)
{
	UNK_0x5A5CC21130AD387A(iParam0->f_51[0]);
}

void func_20(int iParam0)
{
	if (UNK_0xC844350D5D58C99A(iParam0->f_3))
	{
		if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
		{
			if (!UNK_0x405E212DDE472467(iParam0->f_3, 0))
			{
				UNK_0x61F0DE0226FF7252(iParam0->f_3);
			}
			UNK_0x11AD11297DC58CC7(iParam0->f_3, false);
			UNK_0x0E2400AB9174FA81(255, iParam0->f_413, joaat("PLAYER"));
			if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				UNK_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				UNK_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				UNK_0xFB131B855F2FD560(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				UNK_0xFB131B855F2FD560(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			UNK_0x6DAD7906B73F064D(&(iParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("TAXI");
}

void func_22(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_25(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_34(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_33())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_32(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_34(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_32(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_30(UNK_0xD803B885F5E47A62())) && !func_27(UNK_0xD803B885F5E47A62(), 0)) && !func_26()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_30(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_26()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_27(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[bParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			bVar0 = UNK_0x08067D4957B73C02(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312745;
}

bool func_30(bool bParam0)
{
	if (func_27(bParam0, 0))
	{
		return true;
	}
	if (func_31())
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return true;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_31()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_32(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xFA2492ED90D43443() != bParam0 && bParam2)
		{
			UNK_0xF3B6BD1C0DC44D29(bParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_33()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_34(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 13);
	}
}

bool func_35()
{
	if (!func_37() && !func_36())
	{
		if (!UNK_0x04B2EAD6D5301B36(UNK_0xA30EC016B12C03E4()))
		{
			return true;
		}
	}
	return false;
}

bool func_36()
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPCAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_37()
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPINTERNET")) > 0)
	{
		return true;
	}
	return false;
}

void func_38(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_39(vector3 vParam0, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_40(vParam0, 1f, -fParam4, -fParam4, -fParam4) };
	vVar3 = { func_40(vParam0, 1f, fParam4, fParam4, fParam4) };
	vVar0.f_2 = (vVar0.z - 22f);
	vVar3.f_2 = (vVar3.z + 22f);
	if (!bParam3)
	{
		UNK_0xF858EFDE1871B5F2(vVar0, vVar3, false, 1);
	}
	else
	{
		UNK_0xF5894FEB702E7E76(vVar0, vVar3, 1);
		UNK_0xEFED0CD6E25037B9();
	}
}

Vector3 func_40(vector3 vParam0, float fParam3, struct<2> Param4, var uParam6)
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

void func_41(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_42(vParam0, func_43(), 0))
	{
		vVar0 = { func_40(vParam0, 1f, -30f, -30f, -10f) };
		vVar3 = { func_40(vParam0, 1f, 30f, 30f, 10f) };
		UNK_0xE342F209E49C5314(vVar0, vVar3, bParam3, 1);
	}
}

bool func_42(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_43()
{
	vector3 vVar0;

	return vVar0;
}

void func_44(int iParam0)
{
	if (func_48())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_47())
		{
			func_45(1, 1);
		}
		else
		{
			func_45(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (UNK_0x1EE04CEA36EF313B())
	{
		UNK_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_33())
	{
		Global_19486.f_1 = 3;
	}
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_46(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				UNK_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			UNK_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14))
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
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_47()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_48()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_49()
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
					func_50(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_50(int iParam0, bool bParam1)
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

void func_51()
{
	Global_19671 = 0;
	func_52();
}

void func_52()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_19092.f_22[0]++;
			func_54("Fares Completed ++ = ", Global_111638.f_19092.f_22[0]);
			break;
		case 1:
			Global_111638.f_19092.f_22[1]++;
			func_54("Fares Failed ++ = ", Global_111638.f_19092.f_22[1]);
			break;
		case 2:
			Global_111638.f_19092.f_22[2]++;
			func_54("Fares Accepted ++ ", Global_111638.f_19092.f_22[2]);
			break;
		case 3:
			Global_111638.f_19092.f_22[3]++;
			func_54("Fares Expired ++ ", Global_111638.f_19092.f_22[3]);
			break;
		case 13:
			Global_111638.f_19092.f_22[13]++;
			func_54("Passengers run ++ = ", Global_111638.f_19092.f_22[13]);
			break;
		case 14:
			Global_111638.f_19092.f_22[14]++;
			func_54("Passenger Forced to Pay ++ = ", Global_111638.f_19092.f_22[14]);
			break;
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111638.f_19092.f_22[4])
				{
					Global_111638.f_19092.f_22[4] = iParam1;
					func_54("This distance ", iParam1);
					func_54(" is longer than current best", Global_111638.f_19092.f_22[4]);
				}
				else
				{
					func_54("Longest Distance Not Beat ", Global_111638.f_19092.f_22[4]);
				}
			}
			break;
		case 5:
			Global_111638.f_19092.f_22[5] = (Global_111638.f_19092.f_22[5] + iParam1);
			func_54("Total Distance w/ Passenger = ", Global_111638.f_19092.f_22[5]);
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
			func_54("Wanted Levels ++ = ", Global_111638.f_19092.f_22[6]);
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
			func_54("Wanted Levels Lost = ", Global_111638.f_19092.f_22[7]);
			break;
		case 8:
			Global_111638.f_19092.f_22[8]++;
			func_54("Taxis wrecked ++ = ", Global_111638.f_19092.f_22[8]);
			break;
		case 9:
			Global_111638.f_19092.f_22[9]++;
			func_54("Horn Honked ++ = ", Global_111638.f_19092.f_22[9]);
			break;
		case 10:
			Global_111638.f_19092.f_22[10] = (Global_111638.f_19092.f_22[10] + iParam1);
			func_54("Total Money Earned = ", Global_111638.f_19092.f_22[10]);
			break;
		case 11:
			Global_111638.f_19092.f_22[11] = (Global_111638.f_19092.f_22[11] + iParam1);
			func_54("Total Tips Earned = ", Global_111638.f_19092.f_22[11]);
			break;
		case 12:
			if (iParam1 > Global_111638.f_19092.f_22[12])
			{
				Global_111638.f_19092.f_22[12] = iParam1;
				func_54("New Highest Tip = ", Global_111638.f_19092.f_22[12]);
			}
			else
			{
				func_54("Highest Tip Not Reached = ", Global_111638.f_19092.f_22[12]);
			}
			break;
	}
}

void func_54(char* sParam0, int iParam1)
{
}

void func_55(int iParam0)
{
	func_53(0, 0);
	if (iParam0->f_411 != 9)
	{
		func_440(1);
		func_67(15, 1);
	}
	func_65(&(Global_111638.f_19092), 1024);
	if (!func_24(Global_111638.f_19092, 64))
	{
		func_56(func_63(func_64(iParam0)), 0, 0);
	}
}

void func_56(int iParam0, int iParam1, int iParam2)
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
		func_62((891 + iParam0), 1, -1, 1);
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
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_57();
	}
}

void func_57()
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
	bool bVar9;

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
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					UNK_0xE7B2B6A56C007908(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
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
		bVar9 = Global_111364;
	}
	else
	{
		bVar9 = Global_111378;
	}
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_COMPLETED"), bVar9, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + bVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	UNK_0x11F69E56D7B5F3C7(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_STORY_MISSIONS"), Global_111381, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_ODDJOBS"), Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_61(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_60() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_58();
				}
			}
		}
	}
}

int func_58()
{
	if (func_59(0))
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

bool func_59(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_60()
{
	return Global_30768;
}

int func_61(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = UNK_0xBD47F720AB99D749(iParam0);
	if (bParam1 > iVar0)
	{
		return UNK_0x12ABC45272B87562(iParam0, bParam1);
	}
	return 0;
}

int func_62(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

	if (bParam2 == -1)
	{
		bParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam2);
		iVar1 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam2);
		iVar1 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
		iVar1 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
		iVar1 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam2);
		iVar1 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
		iVar1 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_63(int iParam0)
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

int func_64(int iParam0)
{
	return iParam0->f_411;
}

void func_65(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)
{
	if (func_80(14) && !func_79(iParam0))
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_78(&Global_4270065))
	{
		if (func_76(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_69(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!UNK_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (UNK_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_69(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return false;
	}
	if (func_76(uParam0, iParam1))
	{
		return false;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	func_72(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_71(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_72(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_4270064 - 0.5f));
}

void func_73(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_74(var uParam0, float fParam1)
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

float func_75(var uParam0)
{
	return uParam0->f_80;
}

bool func_76(var uParam0, int iParam1)
{
	return func_77(uParam0, iParam1) != -1;
}

int func_77(var uParam0, int iParam1)
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

bool func_78(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_79(int iParam0)
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

bool func_80(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_81(int iParam0, int iParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_193() && func_420(iParam0, 0) > 1f)
			{
				if (func_35())
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				}
				func_115(iParam0);
				func_22(&(Global_111638.f_19092), 4096);
				func_112(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_114(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				UNK_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_111(1);
				iLocal_168 = 6;
			}
			break;
		case 6:
			if (!func_105(iParam1, 0))
			{
				func_82(iParam0);
				func_310(iParam0, 0, 0, 0);
				func_111(0);
				iLocal_168 = 7;
				return true;
			}
			break;
	}
	return false;
}

void func_82(int iParam0)
{
	int iVar0;

	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_83(func_103(), 21, iVar0, 0, 0);
		func_53(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_102(iParam0) == 3)
	{
		return;
	}
	if (func_102(iParam0) == 4)
	{
		return;
	}
	func_84(func_102(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
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
		UNK_0x6FB46C25CCB7E6D5(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + iParam2);
		UNK_0xCDC520E5E48E63D9(iVar1, bVar0, 1);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_101();
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
					func_100(99, 1);
					func_99(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_99(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_99(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_98(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_93(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
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
							func_99(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_99(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_99(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_93(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_99(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_99(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_99(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_99(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_99(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_99(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_99(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (UNK_0x7CF4675EC2B8ED0B())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_99(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_99(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_99(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_99(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_93(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_99(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_99(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_99(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_99(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_92(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_100(95, iParam3);
					break;
				case 1:
					func_100(97, iParam3);
					break;
				case 2:
					func_100(96, iParam3);
					break;
			}
			func_100(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_87(bVar1);
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
					func_99(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_99(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_99(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_86(iParam0);
	if (Global_41431 == 15)
	{
		func_85(0);
	}
	return 1;
}

void func_85(bool bParam0)
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

void func_86(int iParam0)
{
	bool bVar0;

	bVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			UNK_0xCDC520E5E48E63D9(joaat("SP0_TOTAL_CASH"), bVar0, 1);
			break;
		case 1:
			UNK_0xCDC520E5E48E63D9(joaat("SP1_TOTAL_CASH"), bVar0, 1);
			break;
		case 2:
			UNK_0xCDC520E5E48E63D9(joaat("SP2_TOTAL_CASH"), bVar0, 1);
			break;
	}
}

void func_87(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_62(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_62(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_62(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_62(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_90(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_90(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_90(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_90(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_90(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_90(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0))
		{
			bVar0 = true;
			UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_89() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_89() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_88(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_88(bool bParam0)
{
	switch (bParam0)
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

int func_89()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

void func_92(int iParam0)
{
	func_100(93, iParam0);
	func_100(29, iParam0);
	func_100(30, iParam0);
}

bool func_93(bool bParam0)
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

	if (bParam0 == 8)
	{
		return func_95(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_95(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_95(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_95(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_94(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_94(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_94(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_94(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_94(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_94(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0);
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_89() /*10930*/].f_6174.f_10, bParam0);
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_91(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_29();
	}
	iVar1 = func_97(iParam0, bParam1);
	iVar2 = func_96(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_97(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_98(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	if (UNK_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_CASH_SPENT"), bVar1, 1);
		func_61(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_67(27, 1);
	return 1;
}

void func_99(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_100(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		UNK_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		UNK_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, bVar0, 1);
	}
}

void func_101()
{
	int iVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_102(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_103()
{
	func_104();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_104()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_4(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_3(UNK_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_80(14) || Global_110589))
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

bool func_105(int iParam0, int iParam1)
{
	if (!func_16(&(iParam0->f_2)))
	{
		func_109(&(iParam0->f_2));
	}
	UNK_0x3584F71E5CA29322(14);
	UNK_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (UNK_0xBFC0798A6E3417F9(2, 201) || iParam0->f_8)
		{
			if (!func_16(&(iParam0->f_5)))
			{
				func_109(&(iParam0->f_5));
				func_108(iParam0, 1051260355 /* Float: 0.33f */);
			}
		}
		if (func_16(&(iParam0->f_5)))
		{
			if (func_107(&(iParam0->f_5)) > 0.33f)
			{
				func_106(&(iParam0->f_5));
				return false;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return true;
	}
	if (func_107(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		if (!func_16(&(iParam0->f_5)))
		{
			func_109(&(iParam0->f_5));
			func_108(iParam0, 1051260355 /* Float: 0.33f */);
		}
		else if (func_107(&(iParam0->f_5)) > 0.33f)
		{
			func_106(&(iParam0->f_2));
			return false;
		}
	}
	return true;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_107(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_108(int iParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(*iParam0, "SHARD_ANIM_OUT");
	UNK_0x3CAEA85DA607305E(iParam0->f_9);
	UNK_0x7C19E5E4784BD7CF(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_109(bool bParam0)
{
	func_110(bParam0, 0f);
}

void func_110(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_14(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_111(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_112(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	UNK_0x7E60C62A7CE58FC8(*iParam0, func_113());
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0x3A820E495A7BA3E5(bParam9);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x779B34565F4D71B1();
	UNK_0x7ACC3006A87F8B39(bParam7);
	UNK_0x6D99DF8263D35CE5(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6B012227B3921E18(bParam6);
	UNK_0x6D99DF8263D35CE5(bParam5);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0x779B34565F4D71B1();
	UNK_0x7E60D21B163E9D56();
	func_109(&(iParam0->f_2));
	iParam0->f_1 = iParam8;
	iParam0->f_9 = 1;
}

char* func_113()
{
	if (UNK_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

bool func_114(int iParam0)
{
	char* sVar0;

	switch (iParam0->f_411)
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

void func_115(int iParam0)
{
	int iVar0;

	Local_169.f_1 = SYSTEM::TO_FLOAT(iParam0->f_50);
	Local_169.f_2 = SYSTEM::TO_FLOAT(iParam0->f_56);
	func_53(11, iParam0->f_56);
	func_53(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (UNK_0xEAE0D21A50E6C7F4(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169 = iParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

bool func_116(var uParam0, int iParam1, bool bParam2, var uParam3, bool bParam4)
{
	int iVar0;

	switch (*uParam0)
	{
		case 0:
			if (!UNK_0x437347B10A200C4B(*bParam2, 0))
			{
				func_154(iParam1, 320, bParam4);
				UNK_0x6D80F1AEBA734886(*bParam2, UNK_0x09AC81E49EA267F7(100, 300));
				func_152(iParam1, bParam2, "TAXI_BLIP_PASS", 1);
				func_53(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		case 1:
			if (!UNK_0x437347B10A200C4B(*bParam2, 0))
			{
				if (!UNK_0x405E212DDE472467(*bParam2, 0))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 2:
			if (!UNK_0x437347B10A200C4B(*bParam2, 0))
			{
				func_123(&uLocal_45, *bParam2, 0, 0, 1, 1, 1);
				if (!func_122(iParam1->f_2, *bParam2))
				{
					if (UNK_0xDF1306B443CD3D15(iParam1->f_4, 0))
					{
						if (UNK_0xB87D13D0C064E9D1(*bParam2, iParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (UNK_0xB87D13D0C064E9D1(*bParam2, iParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!UNK_0x405E212DDE472467(iParam1->f_2, 0))
						{
							if (UNK_0x12DE711B1C681E9E(iParam1->f_2, *bParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (UNK_0x168558745A6AC21E(iParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (UNK_0x12DE711B1C681E9E(iParam1->f_2, *bParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (UNK_0x03A10A5707B2BB1F(iParam1->f_2, 6))
									{
										if (UNK_0x5ED715849883FAFF())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (UNK_0x12DE711B1C681E9E(iParam1->f_2, *bParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (UNK_0x168558745A6AC21E(iParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (UNK_0x12DE711B1C681E9E(iParam1->f_2, *bParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (UNK_0x168558745A6AC21E(iParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_120(&uLocal_45, 0, 0);
					iParam1->f_109 = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_120(&uLocal_45, 0, 0);
				*uParam0 = 5;
			}
			break;
		case 3:
			func_120(&uLocal_45, 0, 0);
			if (!UNK_0x437347B10A200C4B(*bParam2, 0))
			{
				if (UNK_0xE4EDC4B0E92C078B(iParam1->f_8))
				{
					UNK_0x142CC44DB769B57E(&(iParam1->f_8));
				}
				UNK_0x11AD11297DC58CC7(*bParam2, true);
				UNK_0xDD353D0E9C789D0E(&iVar0);
				UNK_0x8BE3D040D15AEA1D(false, 5000);
				UNK_0xF3268524E9BE6D6E(false, iParam1->f_2, 1000f, -1, 0, 0);
				UNK_0xD93EE6549113F9E1(false, 0);
				UNK_0x75ABDC5F81978924(iVar0);
				UNK_0x78ADC381772E3D54(*bParam2, iVar0);
				UNK_0xF82EA857DA10E0CD(&iVar0);
				UNK_0xFADC0A217229F6B5(*bParam2, true);
				func_241(iParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				UNK_0x790015DC92C918E2();
			}
			else
			{
				*uParam0 = 4;
				UNK_0x790015DC92C918E2();
			}
			if (UNK_0xE4EDC4B0E92C078B(iParam1->f_8))
			{
				UNK_0x142CC44DB769B57E(&(iParam1->f_8));
			}
			func_117(*bParam2, uParam3, 1, -1);
			break;
		case 4:
			if (UNK_0xEB751B41BC4080D4(uParam3->f_6))
			{
				if (UNK_0xE4EDC4B0E92C078B(uParam3->f_5))
				{
					UNK_0x142CC44DB769B57E(&(uParam3->f_5));
				}
				func_208(iParam1);
				func_53(14, 0);
				iParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		case 5:
			if (!UNK_0x437347B10A200C4B(*bParam2, 0))
			{
				UNK_0x6DAD7906B73F064D(bParam2);
				if (UNK_0xE4EDC4B0E92C078B(iParam1->f_8))
				{
					UNK_0x142CC44DB769B57E(&(iParam1->f_8));
				}
			}
			else
			{
				UNK_0xCB9603FE12CFDEF4(UNK_0xA30EC016B12C03E4(), 2, 0);
				UNK_0x56EA5D248F36A081(UNK_0xA30EC016B12C03E4(), 0);
			}
			return true;
	}
	return false;
}

void func_117(bool bParam0, var uParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	uParam1->f_1 = 0;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		uParam1->f_2 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
		UNK_0x6D80F1AEBA734886(bParam0, false);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = UNK_0x09AC81E49EA267F7(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { UNK_0xC6151A4F2BB0AC79(bParam0, 1067030938 /* Float: 1.2f */, 1069547520 /* Float: 1.5f */) };
	}
	UNK_0x5D96D8530B3D0904(&(uParam1->f_1), 3);
	UNK_0x5D96D8530B3D0904(&(uParam1->f_1), 4);
	vVar0 = { UNK_0x550B1459B4642A86(uParam1->f_2, 1.2f, 1.5f) };
	uParam1->f_6 = UNK_0xA6FF0828D17CF374(joaat("PICKUP_MONEY_VARIABLE"), vVar0, uParam1->f_1, *uParam1, 1, false);
	if (bParam2)
	{
		if (!UNK_0xE4EDC4B0E92C078B(uParam1->f_5))
		{
			uParam1->f_5 = func_118(uParam1->f_6);
			UNK_0xDC5B2F9D0CCE3A10(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			UNK_0xDC5B2F9D0CCE3A10(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_118(int iParam0)
{
	int iVar0;

	if (!UNK_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = UNK_0xA0556E31F2661AF4(iParam0);
	UNK_0x516E63E474722206(iVar0, func_119(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

float func_119(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_120(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0x29D5132FBDCF2B1E(iParam2);
		UNK_0x9A1335ECD7BD117F("FocusIn");
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	UNK_0xF3039DE1FDB4F6FD(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	bVar0 = bParam1;
	if (UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_121(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_121(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_121(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_122(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam1))
	{
		if (!UNK_0x12DE711B1C681E9E(bParam0, bParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(bParam1, true), 15f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_123(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_124(uParam0, bParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_124(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_125(uParam0, bParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_125(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_120(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_126(uParam0, bParam1, vParam2, iParam5, iParam6, bParam7, iParam8, bParam9);
}

void func_126(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	bool bVar1;

	if (uParam0->f_1 && UNK_0x8C74DE122769E1BF())
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = bParam5;
	if (UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_121(bVar0))
	{
		func_151();
	}
	if (func_150(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
	{
		bVar1 = false;
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			UNK_0x4862370C9F046219(UNK_0x940C1429253D3B1B(bParam1));
			UNK_0xB9099320B5179E0A(UNK_0x940C1429253D3B1B(bParam1), 1);
			if (UNK_0x71313E3D03CEEB37(UNK_0x940C1429253D3B1B(bParam1)))
			{
				bVar1 = true;
			}
		}
		else if (UNK_0xE2F1E99DD161A861(bParam1))
		{
			UNK_0x00D1596840E78F77(UNK_0x96A5FE5834B81CE7(bParam1));
			if (UNK_0xC03F94FBD72F6D02(UNK_0x96A5FE5834B81CE7(bParam1)))
			{
				bVar1 = true;
			}
		}
		else if (UNK_0x6BC06B42AD71CD8B(bParam1))
		{
			UNK_0xFF7829816FC6D977(UNK_0x486F67509A82DB2D(bParam1));
			if (UNK_0x660643587812C91B(UNK_0x486F67509A82DB2D(bParam1)))
			{
				bVar1 = true;
			}
		}
		if (!UNK_0x8C74DE122769E1BF())
		{
			if (func_145(uParam0, bParam7, bParam9, 0))
			{
				func_142(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_121(bVar0))
							{
								func_130(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_129(1);
								}
							}
						}
					}
				}
			}
			else if (func_131(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_121(bVar0))
						{
							func_130(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_129(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!UNK_0x2EBF5002C6B6A06C(bParam5))
			{
				if (func_121(bParam5))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				if (UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(3) == 3 || UNK_0xA4FD7964FEE91ED8(3) == 4)
					{
						func_120(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_120(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_120(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_120(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_120(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_120(uParam0, bVar0, 1);
				}
			}
			if (!func_145(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_128(uParam0))
				{
					func_127(uParam0);
				}
			}
		}
	}
	else
	{
		func_120(uParam0, bVar0, 0);
	}
}

void func_127(var uParam0)
{
	if (func_150(UNK_0x16F2683693E537C9()))
	{
		UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0xF3039DE1FDB4F6FD(1);
		UNK_0x29D5132FBDCF2B1E(0);
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		UNK_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

bool func_128(var uParam0)
{
	int iVar0;

	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > UNK_0x1C0640BA9A7327B3()
		{
			return true;
		}
	}
	return false;
}

int func_129(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
		default:
			break;
	}
	return 3;
}

void func_130(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_131(bool bParam0)
{
	if (!func_132(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_121(bParam0)) || func_121("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_129(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_129(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_129(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_132(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (bParam0)
	{
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (bParam2)
	{
		return true;
	}
	if (UNK_0x991B1F0980C62628())
	{
		return false;
	}
	if (func_46(0))
	{
		return false;
	}
	if (func_141())
	{
		return false;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("APPINTERNET")) > 0)
	{
		return false;
	}
	if (Global_58693)
	{
		return false;
	}
	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
		{
			if (UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(3) == 3 || UNK_0xA4FD7964FEE91ED8(3) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
				{
					return false;
				}
			}
			else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
			{
				return false;
			}
			if (UNK_0xC4E6FF7CA2A185EA())
			{
				return false;
			}
		}
	}
	if ((func_140() || func_139(Global_4456448.f_232883)) || func_138())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_137(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_136(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_133(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_133(bool bParam0)
{
	if (bParam0 != func_135())
	{
		if (func_134(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_134(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_134(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			if (bParam1)
			{
				if (!UNK_0xE1DBBD6CE209517C(bParam0))
				{
					return false;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[bVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

int func_135()
{
	return -1;
}

bool func_136(bool bParam0, int iParam1)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x40B3F576B41FA183(bParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
				default:
					if (UNK_0x461CAC843A21E4B6(bParam0, iParam1) > 0)
					{
						return true;
					}
					break;
			}
		}
	}
	return false;
}

bool func_137(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x405E212DDE472467(bParam0, iParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, iParam1);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				iVar1 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar0));
				if (iVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!UNK_0xBBA8A868118C90ED(bVar0, bVar3, 0))
					{
						if (UNK_0xA30B8362589C124A(bVar0, bVar3, 0) == bParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

bool func_138()
{
	return Global_2450632.f_17;
}

bool func_139(int iParam0)
{
	return iParam0 == 51;
}

bool func_140()
{
	return Global_2450632.f_16;
}

bool func_141()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_142(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1319117 == 1)
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(bParam1, 0))
	{
		func_120(uParam0, 0, 0);
	}
	if (func_42(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_143())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (UNK_0xCED082ADD3739B9F(bVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	UNK_0xF3039DE1FDB4F6FD(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (bParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	UNK_0xC0B0B9E466C0ED17(bParam1, vParam2, 1, -1, iVar1, iVar2, bParam5);
	iVar3 = 2048;
	iVar4 = 3;
	UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bParam1, -1, iVar3, iVar4);
	UNK_0x82A772610883F395("FocusIn", 0, 0);
	UNK_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	UNK_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_143()
{
	return func_144(UNK_0xD803B885F5E47A62());
}

int func_144(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_145(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_148(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_148(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_128(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (!func_149(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_148(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_148(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (func_147(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_128(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_132(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_151();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_146(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			if (UNK_0x9A01369A10646AFE(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		if (UNK_0x0F01D47446BE1FEB())
		{
			if (UNK_0x9A01369A10646AFE(0, 80))
			{
				UNK_0xF3039DE1FDB4F6FD(0);
				return true;
			}
		}
	}
	return false;
}

bool func_148(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			if (UNK_0x7FEE810EE9E768EB(0, 80) && UNK_0x1C0640BA9A7327B3() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_149(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		if (UNK_0x0F01D47446BE1FEB())
		{
			if (UNK_0x7FEE810EE9E768EB(0, 80) && UNK_0x1C0640BA9A7327B3() > Global_116)
			{
				UNK_0xF3039DE1FDB4F6FD(0);
				return true;
			}
		}
	}
	return false;
}

bool func_150(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xE2F1E99DD161A861(bParam0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam0), 0))
			{
				return true;
			}
		}
		else if (UNK_0xEC560E589DF8370E(bParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam0)))
			{
				return true;
			}
		}
		else if (UNK_0x6BC06B42AD71CD8B(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_151()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_152(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		func_424(iParam0);
	}
	if (!UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
	{
		iParam0->f_8 = func_153(*bParam1, 0, 0);
	}
	if (!UNK_0x2EBF5002C6B6A06C(bParam2))
	{
		UNK_0xDC5B2F9D0CCE3A10(iParam0->f_8, bParam2);
	}
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_119(UNK_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			UNK_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			UNK_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (UNK_0xEC560E589DF8370E(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_119(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_119(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_154(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		UNK_0x11AD11297DC58CC7(iParam0->f_3, false);
		UNK_0xE910A68AA670B4AA(iParam0->f_3);
		UNK_0xBAFED2F6486F771A(iParam0->f_3, 3, false);
		UNK_0xAFF39FB306F8E232(iParam0->f_3, 17, true);
		UNK_0xA3BF0AA5A2608191(iParam0->f_3);
		if ((func_10(iParam0->f_3, iParam0->f_29, 1) <= 200f && !func_155(iParam0->f_29)) && !bParam2)
		{
			func_156(iParam0);
		}
		else
		{
			UNK_0xBAFED2F6486F771A(iParam0->f_3, 1024, true);
			UNK_0xBAFED2F6486F771A(iParam0->f_3, 131072, true);
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x75CDA8644CD3B5F5(false, 0, iParam1);
			if (iParam0->f_415 == 8)
			{
				UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			}
			else
			{
				UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
			}
			UNK_0xD93EE6549113F9E1(false, 0);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(iParam0->f_3, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
		UNK_0xFADC0A217229F6B5(iParam0->f_3, true);
	}
}

bool func_155(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_156(int iParam0)
{
	int iVar0;

	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (func_42(func_43(), iParam0->f_29, 0))
		{
			if (iParam0->f_411 == 2)
			{
				UNK_0xD8F6A53F4799FAFE(iParam0->f_3, 84.9058f);
				UNK_0xFADC0A217229F6B5(iParam0->f_3, true);
			}
			else if (iParam0->f_411 == 4)
			{
				UNK_0xD8F6A53F4799FAFE(iParam0->f_3, 68.3138f);
				UNK_0xFADC0A217229F6B5(iParam0->f_3, true);
			}
			else
			{
				UNK_0x01E4BB5190DF7317(iParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			UNK_0xA3BF0AA5A2608191(iParam0->f_3);
			UNK_0xF82EA857DA10E0CD(&iVar0);
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x75CDA8644CD3B5F5(false, 0, 0);
			UNK_0xD93EE6549113F9E1(false, 0);
			UNK_0x96167B03C5A77156(false, iParam0->f_29, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			if (iParam0->f_411 == 2)
			{
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (iParam0->f_411 == 0)
			{
				UNK_0x91CF687749AD9691(false, 1);
				UNK_0x96167B03C5A77156(false, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0xE655C47E46F9A7E4(false, 151.7794f, 0);
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (iParam0->f_411 == 4)
			{
				UNK_0x4A35AD9FC803369E(false, iParam0->f_29, 15f, 0);
			}
			else if (iParam0->f_411 == 1)
			{
				UNK_0x4A35AD9FC803369E(false, iParam0->f_29, 15f, 20000);
				UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			}
			else
			{
				UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
			}
			if (UNK_0x4742C50E93110B10(iParam0->f_29, 15f, 1))
			{
				UNK_0x4A35AD9FC803369E(false, iParam0->f_29, 15f, 0);
			}
			else
			{
				UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			}
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(iParam0->f_3, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
		UNK_0xFADC0A217229F6B5(iParam0->f_3, true);
	}
}

bool func_157(int iParam0, bool bParam1)
{
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (func_166(iParam0) && func_162(iParam0, 1, 1084227584 /* Float: 5f */))
		{
			if (bParam1)
			{
				if (func_161(iParam0, 2097152))
				{
					func_158(iParam0);
				}
			}
			else
			{
				func_158(iParam0);
			}
		}
		else if (!func_166(iParam0))
		{
			if (bParam1)
			{
				if (func_161(iParam0, 2097152))
				{
					if (UNK_0xD1960163A3042274(iParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
					{
						return true;
					}
				}
			}
			else if (UNK_0xD1960163A3042274(iParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
			{
				return true;
			}
		}
	}
	return false;
}

void func_158(int iParam0)
{
	vector3 vVar0;

	if (func_155(iParam0->f_29))
	{
		vVar0 = { iParam0->f_17 };
	}
	else
	{
		vVar0 = { iParam0->f_29 };
	}
	func_159(iParam0, vVar0);
}

void func_159(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && UNK_0x82CCEAB29E9451DD(iParam0->f_3, iParam0->f_4))
		{
			vVar0 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar3 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_160(iParam0->f_3, iParam0->f_4) == 0)
			{
				UNK_0x45F014B3D0466974(iParam0->f_3, iParam0->f_4, 512);
			}
			else if (UNK_0x0EB28750412C3A5A(vVar0, vParam1, 0) < UNK_0x0EB28750412C3A5A(vVar3, vParam1, 0) && UNK_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 1, 0, false))
			{
				UNK_0x45F014B3D0466974(iParam0->f_3, iParam0->f_4, 131072);
			}
			else if (UNK_0x0EB28750412C3A5A(vVar0, vParam1, 0) >= UNK_0x0EB28750412C3A5A(vVar3, vParam1, 0) && UNK_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 2, 0, false))
			{
				UNK_0x45F014B3D0466974(iParam0->f_3, iParam0->f_4, 262144);
			}
			else
			{
				UNK_0x45F014B3D0466974(iParam0->f_3, iParam0->f_4, 0);
			}
		}
	}
}

int func_160(bool bParam0, bool bParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0) && !UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
		{
			if (UNK_0xA30B8362589C124A(bParam1, -1, 0) == bParam0)
			{
				return -1;
			}
			if (UNK_0xA30B8362589C124A(bParam1, false, 0) == bParam0)
			{
				return 0;
			}
			if (UNK_0xA30B8362589C124A(bParam1, true, 0) == bParam0)
			{
				return 1;
			}
			if (UNK_0xA30B8362589C124A(bParam1, 2, 0) == bParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_161(int iParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_24(iParam0->f_81, iParam1) && !func_193());
	}
	return func_193();
}

bool func_162(int iParam0, bool bParam1, float fParam2)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
		{
			if (func_46(1))
			{
				func_44(0);
			}
			if (func_35())
			{
				func_165();
				return true;
			}
			else if (func_163(iParam0->f_4, fParam2, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				if (bParam1)
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, 256);
				}
				else
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, false);
				}
			}
			UNK_0xACCB31D58716FE8F(iParam0->f_4, 1);
		}
	}
	return false;
}

bool func_163(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	UNK_0x38C3A68D7861DCFD(0, 71, 1);
	UNK_0x38C3A68D7861DCFD(0, 72, 1);
	UNK_0x38C3A68D7861DCFD(0, 76, 1);
	UNK_0x38C3A68D7861DCFD(0, 73, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 74, 1);
	UNK_0x38C3A68D7861DCFD(0, 86, 1);
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
	UNK_0x38C3A68D7861DCFD(0, 138, 1);
	UNK_0x38C3A68D7861DCFD(0, 136, 1);
	UNK_0x38C3A68D7861DCFD(0, 114, 1);
	UNK_0x38C3A68D7861DCFD(0, 107, 1);
	UNK_0x38C3A68D7861DCFD(0, 110, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 87, 1);
	UNK_0x38C3A68D7861DCFD(0, 88, 1);
	UNK_0x38C3A68D7861DCFD(0, 113, 1);
	UNK_0x38C3A68D7861DCFD(0, 115, 1);
	UNK_0x38C3A68D7861DCFD(0, 116, 1);
	UNK_0x38C3A68D7861DCFD(0, 117, 1);
	UNK_0x38C3A68D7861DCFD(0, 118, 1);
	UNK_0x38C3A68D7861DCFD(0, 119, 1);
	UNK_0x38C3A68D7861DCFD(0, 352, 1);
	UNK_0x38C3A68D7861DCFD(0, 131, 1);
	UNK_0x38C3A68D7861DCFD(0, 132, 1);
	UNK_0x38C3A68D7861DCFD(0, 123, 1);
	UNK_0x38C3A68D7861DCFD(0, 126, 1);
	UNK_0x38C3A68D7861DCFD(0, 129, 1);
	UNK_0x38C3A68D7861DCFD(0, 130, 1);
	UNK_0x38C3A68D7861DCFD(0, 133, 1);
	UNK_0x38C3A68D7861DCFD(0, 134, 1);
	UNK_0xCFAE3195DD6AE715();
	func_164(bParam0);
	if ((UNK_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		UNK_0xE0C0351D5B931E37(bParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = UNK_0x1C0640BA9A7327B3();
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x755FF954DAE327E1(UNK_0x9C66D99E63E8E24C(bParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_164(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x2668265160B1C0E5(bParam0))
		{
			if (UNK_0x08D499BC1F863857(bParam0))
			{
				UNK_0xF356D74F6AE75D16(bParam0, 0);
			}
		}
	}
}

void func_165()
{
	if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
	{
		UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	}
}

bool func_166(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if (UNK_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_167(int iParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		UNK_0x5D96D8530B3D0904(&(iParam0->f_60[iParam1 /*3*/]), 2);
		iParam0->f_105 = (iParam0->f_105 + iParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_168(bool bParam0)
{
	if (Local_410.f_56 < Local_410.f_58)
	{
		func_241(&Local_410, 103, 1, 0, 0);
	}
	else if (Local_410.f_56 >= Local_410.f_59)
	{
		if (!bParam0)
		{
			func_241(&Local_410, 101, 1, 0, 0);
		}
		else
		{
			func_65(&(Local_410.f_82), 4194304);
			func_241(&Local_410, 22, 1, 0, 0);
		}
	}
	else if (!bParam0)
	{
		func_241(&Local_410, 102, 1, 0, 0);
	}
	else
	{
		func_65(&(Local_410.f_82), 2097152);
		func_241(&Local_410, 22, 1, 0, 0);
	}
}

void func_169(int iParam0, bool bParam1)
{
	func_180(iParam0, iParam0->f_3);
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
		{
			if (!func_179(iParam0, 14))
			{
				if (func_193())
				{
					func_178(1);
				}
				func_177(iParam0, 11, 1);
				func_172(iParam0, 1);
				func_310(iParam0, 14, 0f, 1);
				if (iParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_166(iParam0))
				{
					if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
					{
					}
					if (UNK_0x405E212DDE472467(iParam0->f_2, 0))
					{
						if (func_420(iParam0, 15) > 5f)
						{
							func_310(iParam0, 15, 0f, 1);
						}
					}
					if (func_420(iParam0, 14) > 20f)
					{
						func_343(iParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_420(iParam0, 14) > 20f)
				{
					if (func_170(iParam0->f_4, 1) > 40f)
					{
						func_343(iParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_343(iParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_170(bool bParam0, int iParam1)
{
	return func_171(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), bParam0, iParam1);
}

float func_171(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	else
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

void func_172(int iParam0, bool bParam1)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
			{
				UNK_0x7F010F50CE03A8AF(iParam0->f_8, false);
				UNK_0x661342B9651D16E2(iParam0->f_8, false);
				func_176(iParam0, &(iParam0->f_98), 4, 3);
			}
			else if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
			{
				UNK_0x7F010F50CE03A8AF(iParam0->f_9, false);
				UNK_0x661342B9651D16E2(iParam0->f_9, false);
				UNK_0x790015DC92C918E2();
				if (func_166(iParam0))
				{
					func_241(iParam0, 2, 1, 0, 0);
				}
				else
				{
					func_176(iParam0, &(iParam0->f_98), 4, 3);
				}
			}
			func_173(iParam0, 0, 0);
		}
		else if (UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
		{
			UNK_0x142CC44DB769B57E(&(iParam0->f_10));
			if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
			{
				UNK_0x7F010F50CE03A8AF(iParam0->f_8, 255);
				UNK_0x661342B9651D16E2(iParam0->f_8, true);
			}
			else if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
			{
				if (iParam0->f_411 == 5 && iParam0->f_410 == 17)
				{
					UNK_0x7F010F50CE03A8AF(iParam0->f_9, false);
					UNK_0x661342B9651D16E2(iParam0->f_9, false);
				}
				else if (iParam0->f_411 != 4)
				{
					UNK_0x7F010F50CE03A8AF(iParam0->f_9, 255);
					UNK_0x661342B9651D16E2(iParam0->f_9, true);
				}
			}
			UNK_0x790015DC92C918E2();
		}
	}
}

void func_173(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_424(iParam0);
	}
	if (!UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
	{
		iParam0->f_10 = func_153(iParam0->f_4, 1, 0);
		UNK_0xDC5B2F9D0CCE3A10(iParam0->f_10, "TAXI_BLIP_CAR");
		UNK_0x661342B9651D16E2(iParam0->f_10, true);
		func_174(iParam0);
		if (bParam2)
		{
			UNK_0x790015DC92C918E2();
			func_241(iParam0, 3, 1, 0, 0);
		}
	}
}

void func_174(int iParam0)
{
	func_310(iParam0, 14, 0, 0);
	func_175();
}

void func_175()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		UNK_0xCEAA091B490F8407(-1, "Radio_Off", bVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_176(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_24(*uParam1, iParam2))
	{
		UNK_0x790015DC92C918E2();
		func_241(iParam0, iParam3, 1, 0, 0);
		func_65(uParam1, iParam2);
	}
}

void func_177(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_178(int iParam0)
{
	Global_21816 = iParam0;
}

bool func_179(int iParam0, int iParam1)
{
	return func_16(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_180(int iParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam1))
		{
			if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
			{
				if ((UNK_0x0361981EE62202D8(bParam1, joaat("WEAPON_STUNGUN"), 0) || UNK_0x0361981EE62202D8(bParam1, false, 2)) || UNK_0x0361981EE62202D8(bParam1, false, 1))
				{
					func_343(iParam0, "Passenger injured by player with weapon.", 14);
				}
				UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
			}
		}
	}
}

bool func_181(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == iParam0->f_2)
		{
			if (func_179(iParam0, 14))
			{
				func_182(iParam0);
			}
			func_172(iParam0, 0);
			return true;
		}
	}
	return false;
}

void func_182(int iParam0)
{
	func_185(iParam0, 14, 0);
	func_185(iParam0, 15, 0);
	func_184();
	if (func_183())
	{
		func_178(0);
	}
}

bool func_183()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_184()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		UNK_0xCEAA091B490F8407(-1, "Radio_On", bVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_185(int iParam0, int iParam1, bool bParam2)
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
			func_106(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_106(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

bool func_186()
{
	if (UNK_0xDF1306B443CD3D15(Local_410.f_4, 0))
	{
		if (bLocal_876 && UNK_0x9C66D99E63E8E24C(Local_410.f_4) < 5f)
		{
			if (!func_179(&Local_410, 21))
			{
				func_310(&Local_410, 21, 0, 0);
			}
		}
		if (UNK_0x9C66D99E63E8E24C(Local_410.f_4) >= 5f && func_179(&Local_410, 21))
		{
			func_185(&Local_410, 21, 0);
		}
	}
	if (bLocal_879)
	{
		func_187(&Local_410, 21);
		fLocal_875 = func_420(&Local_410, 21);
		if (fLocal_875 >= fLocal_874)
		{
			bLocal_880 = true;
			return true;
		}
		else
		{
			bLocal_880 = false;
			return true;
		}
	}
	return false;
}

void func_187(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(iParam0->f_146[iVar0 /*3*/])))
			{
				func_188(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(iParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(iParam0->f_146[iParam1 /*3*/])))
		{
			func_188(&(iParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_188(bool bParam0)
{
	if (func_16(bParam0))
	{
		if (!func_15(bParam0))
		{
			bParam0->f_2 = (func_14(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
			UNK_0x5D96D8530B3D0904(bParam0, 2);
		}
	}
}

int func_189(var uParam0)
{
	float fVar0;
	vector3 vVar1[24];

	if (!UNK_0xEB6A8945D1AC98A1(*uParam0))
	{
		switch (iLocal_870)
		{
			case 0:
				if (!func_193())
				{
					if (func_195(&(Local_410.f_244), "txm1aud", "txm1_Puke1", 8, 0, 0, 0))
					{
						UNK_0xC6EB89C59F2AF6B8(*uParam0, bLocal_884, bLocal_883, 8f, -4f, -1, 0, false, 0, 0, 0);
						if (!UNK_0x437347B10A200C4B(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
						{
							switch (func_137(*uParam0, 0))
							{
								case 0:
									UNK_0x920D29D81E211607(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), true);
									break;
								case 2:
									UNK_0x920D29D81E211607(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 3);
									break;
								default:
									UNK_0x920D29D81E211607(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 3);
									break;
							}
						}
						if (func_179(&Local_410, 10))
						{
							func_185(&Local_410, 10, 0);
						}
						iLocal_870++;
					}
				}
				else if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				break;
			case 1:
				if (UNK_0xB4ECF989E2C1DAC8(*uParam0, bLocal_884, bLocal_883, 3))
				{
					fVar0 = UNK_0x8CA9406E01C7EE58(*uParam0, bLocal_884, bLocal_883);
					if (bLocal_885)
					{
					}
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!bLocal_876)
						{
							UNK_0x97A0DB46CA749F31("scr_puke_in_car", *uParam0, vLocal_863, vLocal_866, 31086, 1065353216 /* Float: 1f */, 0, 0, 0);
							bLocal_876 = true;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!bLocal_877)
						{
							UNK_0x97A0DB46CA749F31("scr_puke_in_car", *uParam0, vLocal_863, vLocal_866, 31086, 1065353216 /* Float: 1f */, 0, 0, 0);
							bLocal_877 = true;
						}
					}
					else if (fVar0 > 0.487857f && fVar0 < 0.55f)
					{
						if (!bLocal_878)
						{
							UNK_0x97A0DB46CA749F31("scr_puke_in_car", *uParam0, vLocal_863, vLocal_866, 31086, 1065353216 /* Float: 1f */, 0, 0, 0);
							bLocal_878 = true;
							if (!bLocal_881)
							{
								StringCopy(&cVar1, "txm1_pukeR1", 24);
								func_190(&cVar1);
								func_195(&(Local_410.f_244), "txm1aud", &cVar1, 8, 0, 0, 0);
								bLocal_881 = true;
							}
						}
					}
					if (UNK_0x8CA9406E01C7EE58(*uParam0, bLocal_884, bLocal_883) > 0.9f)
					{
						iLocal_870++;
					}
				}
				break;
			case 2:
				if (!UNK_0xB4ECF989E2C1DAC8(*uParam0, bLocal_884, bLocal_883, 3))
				{
				}
				UNK_0xC6EB89C59F2AF6B8(*uParam0, bLocal_884, "drunk_idle", 8f, -8f, -1, 1, false, 0, 0, 0);
				bLocal_876 = false;
				iLocal_870++;
				break;
			case 3:
				bLocal_879 = true;
				if (!func_179(&Local_410, 10))
				{
					func_310(&Local_410, 10, 0, 0);
				}
				return 1;
		}
	}
	return 0;
}

void func_190(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

void func_191()
{
	Global_19671 = 0;
	func_192();
}

void func_192()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((UNK_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

bool func_193()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

int func_194(int iParam0)
{
	return iParam0->f_104;
}

int func_195(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_207(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_196(sParam2, iParam3, 0);
}

int func_196(char* sParam0, int iParam1, bool bParam2)
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
					UNK_0x5CEB4DB888A62073(false);
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
					func_192();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_206(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_205();
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
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam2)
			{
				func_204();
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
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_203())
				{
					return 0;
				}
				if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_33())
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
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_202();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_201();
		func_197();
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
		func_192();
	}
	return 0;
}

void func_197()
{
	if (!func_198())
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

bool func_198()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_135())
	{
		return false;
	}
	if (func_199(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	return true;
}

bool func_199(int iParam0)
{
	return func_200(iParam0, 20);
}

bool func_200(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_201()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	UNK_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_202()
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
	UNK_0x0674E58A79778E99(&Global_7357, 16);
}

bool func_203()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar1, 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (UNK_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1))
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

void func_204()
{
	if (func_80(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
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
		Global_19486 = func_103();
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

void func_205()
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

bool func_206(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, bParam0);
}

void func_207(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_208(int iParam0)
{
	float fVar0;

	fVar0 = iParam0->f_41;
	fVar0 = func_209(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_53(4, SYSTEM::CEIL(fVar0));
	func_53(5, SYSTEM::CEIL(fVar0));
	iParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_209(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_210(var uParam0, int iParam1, bool bParam2)
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

void func_211(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_212(), 24);
		iVar0++;
	}
	UNK_0x790015DC92C918E2();
	func_51();
}

char* func_212()
{
	var uVar0;

	return uVar0;
}

bool func_213(int iParam0, float fParam1, float fParam2)
{
	if ((((UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749()) && !UNK_0xD0BB2359EC70FC37()) && !UNK_0x757EF87A33649210()) && !iParam0->f_142)
	{
		if (func_230(iParam0))
		{
			func_229(iParam0, &(iParam0->f_43));
			func_226(iParam0);
			func_221(iParam0);
			func_217(iParam0, fParam2, 1117782016 /* Float: 80f */);
			func_216(iParam0);
			func_214(iParam0);
			if ((SYSTEM::ROUND(func_420(iParam0, 7)) % 5) == 0 && !bLocal_93)
			{
				bLocal_93 = true;
			}
			if ((SYSTEM::ROUND(func_420(iParam0, 7)) % 5) == 2 && bLocal_93)
			{
				bLocal_93 = false;
			}
			return func_231(iParam0, fParam1);
		}
	}
	return false;
}

void func_214(int iParam0)
{
	float fVar0;

	if ((func_166(iParam0) && func_24(iParam0->f_81, 67108864)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
	{
		if ((UNK_0x1C0640BA9A7327B3() - iLocal_97) >= 10000)
		{
			fVar0 = func_215(iParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = UNK_0x1C0640BA9A7327B3();
		}
		if (iLocal_96 >= 2 && !func_193())
		{
			func_241(iParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((UNK_0x1C0640BA9A7327B3() % 4000) < 50)
		{
			if (!func_166(iParam0))
			{
			}
			if (!func_24(iParam0->f_81, 67108864))
			{
			}
		}
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_215(vector3 vParam0, int iParam3)
{
	return func_10(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), vParam0, iParam3);
}

void func_216(int iParam0)
{
	if (UNK_0x1BF376CEB706080F(UNK_0xA30EC016B12C03E4()) && !func_24(iParam0->f_44, 2))
	{
		func_65(&(iParam0->f_44), 2);
	}
	else if (!UNK_0x1BF376CEB706080F(UNK_0xA30EC016B12C03E4()) && func_24(iParam0->f_44, 2))
	{
		func_22(&(iParam0->f_44), 2);
		iParam0->f_47++;
		func_53(9, 0);
	}
	if (iParam0->f_47 > 30)
	{
		func_241(iParam0, 47, 1, 0, 0);
		iParam0->f_47 = 0;
		iParam0->f_76 = (iParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_217(int iParam0, float fParam1, float fParam2)
{
	if (func_166(iParam0) && func_24(iParam0->f_44, 4))
	{
		if ((UNK_0x8B38C0DAEEDB5F9C(iParam0->f_4) || UNK_0x9C66D99E63E8E24C(iParam0->f_4) < 3f) && func_220(iParam0))
		{
			if (!func_179(iParam0, 2))
			{
				func_218(iParam0, 2);
			}
			else if (func_166(iParam0))
			{
				if (func_420(iParam0, 2) > fParam1 && !func_179(iParam0, 14))
				{
					if (func_37())
					{
						func_241(iParam0, 48, 1, 0, 0);
					}
					else
					{
						func_241(iParam0, 48, 1, 0, 0);
					}
					func_310(iParam0, 2, 0, 0);
					if (func_179(iParam0, 10))
					{
						func_310(iParam0, 10, 0, 0);
					}
				}
				if (!func_179(iParam0, 3))
				{
					func_310(iParam0, 3, 0, 0);
				}
				else if (func_420(iParam0, 3) >= fParam2)
				{
					func_185(iParam0, 3, 0);
					func_343(iParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_179(iParam0, 2))
			{
				func_185(iParam0, 2, 0);
			}
			if (func_179(iParam0, 3))
			{
				func_185(iParam0, 3, 0);
			}
		}
	}
}

void func_218(int iParam0, int iParam1)
{
	func_219(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_219(bool bParam0)
{
	if (!func_16(bParam0))
	{
		func_109(bParam0);
	}
}

bool func_220(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == UNK_0x16F2683693E537C9())
		{
			return true;
		}
	}
	return false;
}

void func_221(int iParam0)
{
	if (!func_24(iParam0->f_44, 1))
	{
		switch (iParam0->f_412)
		{
			case 0:
				if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) >= 1)
				{
					if (func_420(iParam0, 9) > 1f)
					{
						func_225(iParam0, UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()));
						if (iParam0->f_410 != 22)
						{
							func_241(iParam0, 50, 1, 1, 0);
						}
						func_310(iParam0, 9, 0, 0);
						if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
						{
							UNK_0x7F010F50CE03A8AF(iParam0->f_9, false);
							UNK_0x661342B9651D16E2(iParam0->f_9, false);
						}
						iParam0->f_140 = 1;
						iParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!func_193() && func_420(iParam0, 9) > 4f)
				{
					func_241(iParam0, 52, 1, 0, 0);
					iParam0->f_412 = 2;
				}
				break;
			case 2:
				if (func_224("TAXI_OBJ_POL", 0, 0))
				{
					if (iParam0->f_410 != 22)
					{
						func_241(iParam0, 51, 0, 0, 0);
					}
					iParam0->f_412 = 3;
				}
				else if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1)
				{
					iParam0->f_412 = 3;
				}
				break;
			case 3:
				if (UNK_0xF06268E966D7C1A2(UNK_0xA30EC016B12C03E4(), func_223(iParam0)))
				{
					func_225(iParam0, UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()));
					func_53(6, 0);
				}
				if (!func_222(iParam0))
				{
					if (!UNK_0x25037C66EB32B076())
					{
						if (func_420(iParam0, 16) > 10f)
						{
							if (iParam0->f_410 != 22)
							{
								func_241(iParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1)
				{
					if (func_224("TAXI_OBJ_POL", 0, 0))
					{
						UNK_0x790015DC92C918E2();
					}
					if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
					{
						UNK_0x7F010F50CE03A8AF(iParam0->f_9, 255);
						UNK_0x661342B9651D16E2(iParam0->f_9, true);
					}
					iParam0->f_140 = 0;
					iParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!func_193())
				{
					if (iParam0->f_410 != 22)
					{
						func_241(iParam0, 53, 1, 0, 1);
					}
					func_53(7, func_223(iParam0));
					func_225(iParam0, 0);
					iParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!func_193())
				{
					func_185(iParam0, 9, 0);
					func_310(iParam0, 11, 0, 0);
					iParam0->f_412 = 0;
				}
				break;
		}
	}
}

bool func_222(int iParam0)
{
	return iParam0->f_110;
}

int func_223(int iParam0)
{
	return iParam0->f_106;
}

bool func_224(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

void func_225(int iParam0, int iParam1)
{
	if (iParam0->f_106 != iParam1)
	{
		iParam0->f_106 = iParam1;
	}
}

void func_226(var uParam0)
{
	if (func_228(uParam0))
	{
		func_227(uParam0);
	}
}

void func_227(int iParam0)
{
	if (UNK_0xEFFB47DC2D8F23F9() && iParam0->f_418.f_4 != 0)
	{
		iParam0->f_418.f_4 = 0;
	}
	switch (iParam0->f_418.f_4)
	{
		case 0:
			iParam0->f_418 = UNK_0xFC21F7E0F4D92523();
			func_185(iParam0, 20, 0);
			iParam0->f_418.f_4++;
			break;
		case 1:
			if (iParam0->f_418.f_8 && !iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (func_420(iParam0, 20) > 3f)
				{
					func_241(iParam0, 87, 1, 0, 0);
					iParam0->f_418.f_8 = 0;
					iParam0->f_418.f_4++;
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_1)
			{
				if (!func_24(iParam0->f_81, 262144) || !func_24(iParam0->f_81, 1048576))
				{
					if (func_420(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_5 = 1;
						func_241(iParam0, 84, 1, 0, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (!func_24(iParam0->f_82, 67108864))
				{
					if (func_420(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_6 = 1;
						iParam0->f_418.f_8 = 0;
						func_241(iParam0, 85, 1, 0, 0);
						func_185(iParam0, 22, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418.f_7)
			{
				if (func_420(iParam0, 20) > 8f)
				{
					func_241(iParam0, 86, 1, 0, 0);
					iParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (func_24(iParam0->f_81, 262144) || func_24(iParam0->f_82, 67108864))
			{
				if (!func_179(iParam0, 22))
				{
					func_218(iParam0, 22);
				}
			}
			if (func_179(iParam0, 22) && func_420(iParam0, 22) > 15f)
			{
				if (iParam0->f_418 == iParam0->f_418.f_1)
				{
					if (!func_24(iParam0->f_81, 1048576))
					{
						func_241(iParam0, 84, 1, 0, 0);
						func_185(iParam0, 22, 0);
					}
				}
				else if (iParam0->f_418 == iParam0->f_418.f_2)
				{
					if (!func_24(iParam0->f_82, 134217728))
					{
						func_241(iParam0, 85, 1, 0, 0);
						func_185(iParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_228(var uParam0)
{
	return uParam0->f_120;
}

void func_229(var uParam0, var uParam1)
{
	UNK_0x893A626C476B583D(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

bool func_230(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if (!UNK_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 1) && !UNK_0x81A5359F25512A04(iParam0->f_3))
			{
				func_343(iParam0, "Passenger left car.", 9);
			}
			else if (func_181(iParam0))
			{
				if (func_224("TAXI_OBJ_PICKUP", 0, 0))
				{
					UNK_0x2F23E8033F1ADDD9("TAXI_OBJ_PICKUP");
				}
				if (UNK_0x0F1CCD77290EE12F())
				{
					return true;
				}
			}
			else
			{
				if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				func_169(iParam0, 1);
			}
		}
	}
	return false;
}

bool func_231(int iParam0, float fParam1)
{
	if (func_64(iParam0) == 2)
	{
		if (UNK_0x5A91F08DF773C39D(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0))
		{
		}
		if (((func_233(iParam0->f_4, iParam0->f_17, 1) <= (fParam1 + 1f) && UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1) && func_232(1, 1, 1)) && UNK_0xF79A7BCA9E38BBBC(iParam0->f_4))
		{
			return func_162(iParam0, 1, fParam1);
		}
	}
	else if (((UNK_0x5A91F08DF773C39D(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0) && UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1) && func_232(1, 1, 1)) && UNK_0xF79A7BCA9E38BBBC(iParam0->f_4))
	{
		return func_162(iParam0, 1, fParam1);
	}
	return false;
}

bool func_232(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xC8BC75555A67090D())
	{
		return false;
	}
	if (bParam0)
	{
		if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
	}
	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			return false;
		}
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (UNK_0x437347B10A200C4B(bVar0, 0))
			{
				return false;
			}
		}
		if (bParam2)
		{
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xA30B8362589C124A(bVar0, -1, 0) != UNK_0x16F2683693E537C9())
				{
					return false;
				}
			}
		}
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x30C0A7C378403357(bVar0) < 0.95f || UNK_0x30C0A7C378403357(bVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (bParam1)
	{
		return false;
	}
	if (!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

float func_233(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

int func_234(var uParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		if (UNK_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0))
		{
			if (UNK_0xBBA8A868118C90ED(uParam0->f_4, bParam1, 0))
			{
				if (UNK_0xD1960163A3042274(uParam0->f_3, 355471868) != 1)
				{
					UNK_0x16A6C233289238AA(uParam0->f_3, uParam0->f_4, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_235(var uParam0, bool bParam1)
{
	if (UNK_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (UNK_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!UNK_0xBBA8A868118C90ED(uParam0->f_4, bParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_236(int iParam0)
{
	func_237(iParam0, 1000);
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x327AAEE25F323797(iParam0->f_3);
		UNK_0xF96A174EE26D7588(iParam0->f_3, UNK_0x16F2683693E537C9(), 0);
	}
	func_191();
	func_182(iParam0);
}

void func_237(var uParam0, int iParam1)
{
	if (UNK_0x9F4FE516EAACCFC5(*uParam0))
	{
		UNK_0x9A8DDC7C522F5BF5(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		UNK_0xB3A1B75CB59FEB56(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	}
}

int func_238(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_4) && UNK_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("GRANGER") || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("REBEL")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("REBEL2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SANDKING")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SANDKING2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("PATRIOT")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SURFER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SURFER2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("MESA")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("RANCHERXL")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("TIPTRUCK2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("MIXER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("MIXER2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("RUBBLE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SCRAP")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("TIPTRUCK")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("ARMYTANKER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BARRACKS")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BARRACKS2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("PRANGER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("AMBULANCE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("FIRETRUK")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("POLICET")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("RIOT")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SHERIFF2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("STOCKADE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("STOCKADE3")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BIFF")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("HAULER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("PACKER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("TRASH")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BENSON")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("PHANTOM")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("POUNDER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("UTILLITRUCK")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("UTILLITRUCK2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("UTILLITRUCK3")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("DLOADER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("FLATBED")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("TOURBUS")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("TOWTRUCK")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("TOWTRUCK2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("CAMPER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("TACO")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BOXVILLE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BOXVILLE2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BURRITO")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BURRITO2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BURRITO3")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BURRITO4")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("GBURRITO")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("JOURNEY")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("MULE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("MULE2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("PONY")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("RUMPO")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SPEEDO")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SPEEDO2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("YOUGA"))
		{
			return 2;
		}
		else if ((((((((((((((((((((((UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("PHOENIX") || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("COQUETTE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("DUNE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("CHEETAH")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("COGCABRIO")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("JB700")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("MONROE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("NINEF")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("NINEF2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("RAPIDGT")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("RAPIDGT2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("STINGER")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("STINGERGT")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("ZTYPE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BANSHEE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("BULLET")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("CARBONIZZARE")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("COMET2")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("ENTITYXF")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("F620")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("INFERNUS")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("SURANO")) || UNK_0x134B62B726CEC8E6(uParam0->f_4) == joaat("VOLTIC"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 3;
}

void func_239()
{
	func_65(&(Local_410.f_55), 2);
	func_65(&(Local_410.f_55), 4);
	func_65(&(Local_410.f_55), 16);
	func_65(&(Local_410.f_55), 64);
	func_65(&(Local_410.f_55), 256);
	func_65(&(Local_410.f_55), 512);
	func_65(&(Local_410.f_55), 1024);
	func_65(&(Local_410.f_55), 2048);
	func_65(&(Local_410.f_55), 67108864);
	func_65(&(Local_410.f_55), 134217728);
	func_65(&(Local_410.f_55), 536870912);
	func_65(&(Local_410.f_55), 268435456);
	func_65(&(Local_410.f_55), 8192);
	func_65(&(Local_410.f_55), 16384);
	func_65(&(Local_410.f_55), 32768);
	func_65(&(Local_410.f_55), 65536);
	func_65(&(Local_410.f_55), 131072);
	func_65(&(Local_410.f_55), 262144);
	func_65(&(Local_410.f_55), 524288);
	func_65(&(Local_410.f_55), 1048576);
	func_65(&(Local_410.f_55), 2097152);
	func_65(&(Local_410.f_100), 64);
	func_65(&(Local_410.f_100), 2048);
	func_65(&(Local_410.f_100), 128);
	func_65(&(Local_410.f_100), 32);
	func_65(&(Local_410.f_100), 256);
	func_65(&(Local_410.f_100), 8);
	func_65(&(Local_410.f_100), 1);
	func_65(&(Local_410.f_100), 4096);
	func_65(&(Local_410.f_100), 8192);
	UNK_0x0674E58A79778E99(&uLocal_957, 2);
	func_218(&Local_410, 7);
}

void func_240(var uParam0)
{
	UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
	UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	func_237(uParam0, 1000);
}

void func_241(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_310(iParam0, 16, 4f, 0);
		if (func_242(iParam0))
		{
			func_51();
		}
	}
	func_275(iParam0, iParam2, bParam3);
}

bool func_242(int iParam0)
{
	vector3 vVar0[24];
	struct<6> Var6;

	StringCopy(&cVar0, iParam0->f_143, 24);
	if (func_193())
	{
		Var6 = { func_243() };
		if (!UNK_0xEA6BC48857E0AC4C(&Var6))
		{
			StringConCat(&cVar0, "_obj1", 24);
			if (UNK_0x7F8A39872A07D2CE(&Var6, &cVar0))
			{
				return true;
			}
			StringCopy(&cVar0, iParam0->f_143, 24);
			StringConCat(&cVar0, "_gret1", 24);
			func_190(&cVar0);
			if (UNK_0x7F8A39872A07D2CE(&Var6, &cVar0))
			{
				return true;
			}
		}
	}
	return false;
}

struct<6> func_243()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_244(var uParam0)
{
	if (UNK_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if ((UNK_0x81A5359F25512A04(uParam0->f_3) && (UNK_0x1C0640BA9A7327B3() - iLocal_89) > 500) || UNK_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_245(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
		{
			if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
			{
			}
			func_169(iParam0, 1);
			if (func_35())
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
			}
			if (UNK_0xD1960163A3042274(iParam0->f_3, 2106541073) == 1 || UNK_0xD1960163A3042274(iParam0->f_3, 2106541073) == 0)
			{
				UNK_0x327AAEE25F323797(iParam0->f_3);
				iParam0->f_48 = 0;
				iLocal_87 = 0;
				UNK_0xF96A174EE26D7588(iParam0->f_3, UNK_0x16F2683693E537C9(), 0);
			}
		}
		else if (UNK_0xF06268E966D7C1A2(UNK_0xA30EC016B12C03E4(), 0))
		{
			func_273(iParam0);
			if (iParam0->f_48 > 1)
			{
				UNK_0xF82EA857DA10E0CD(&iVar3);
				UNK_0xDD353D0E9C789D0E(&iVar3);
				UNK_0x96167B03C5A77156(false, iParam0->f_11, iParam0->f_6, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0xF96A174EE26D7588(false, iParam0->f_4, 0);
				UNK_0x75ABDC5F81978924(iVar3);
				UNK_0x78ADC381772E3D54(iParam0->f_3, iVar3);
				iParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_179(iParam0, 14))
			{
				func_182(iParam0);
				func_172(iParam0, 0);
			}
			if (func_179(iParam0, 9))
			{
				func_185(iParam0, 9, 0);
				UNK_0x790015DC92C918E2();
				if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
				{
					UNK_0x7F010F50CE03A8AF(iParam0->f_8, 255);
					UNK_0x661342B9651D16E2(iParam0->f_8, true);
				}
			}
			if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
			{
				fVar4 = ((UNK_0x9C66D99E63E8E24C(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_141 && func_272(iParam0, iParam0->f_3) > 300f)
				{
					func_343(iParam0, "Left Passenger", 8);
				}
				switch (iParam0->f_48)
				{
					case 0:
						if (UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 1 || ((func_171(UNK_0x16F2683693E537C9(), iParam0->f_3, 1) < 20f && func_233(iParam0->f_3, iParam0->f_11, 1) <= 28f) && func_233(iParam0->f_4, iParam0->f_11, 1) <= 28f))
						{
							if (func_269(iParam0, fParam2))
							{
								iParam0->f_48++;
							}
						}
						break;
					case 1:
						if (func_268(iParam0, 0, 28f, fVar4, 4f))
						{
							iParam0->f_138 = 1;
							if (bLocal_94)
							{
								iParam0->f_7 = func_267(iParam0->f_4, iParam0->f_3);
								bVar0 = func_266(iParam0, &iVar1);
								if (!UNK_0x437347B10A200C4B(bVar0, 0))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (iParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										UNK_0x75CDA8644CD3B5F5(bVar0, 0, iVar2);
									}
									else
									{
										UNK_0x75CDA8644CD3B5F5(bVar0, 0, 0);
									}
								}
								if (iParam0->f_411 == 0)
								{
									if (UNK_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 0, 0, false))
									{
										if (iParam0->f_7 == 2)
										{
											iParam0->f_7 = 0;
											if (!UNK_0x437347B10A200C4B(bVar0, 0))
											{
												UNK_0x75CDA8644CD3B5F5(bVar0, 0, 4096);
											}
										}
									}
								}
							}
							UNK_0xA3BF0AA5A2608191(iParam0->f_3);
							UNK_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
							iParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								UNK_0x5F3EEC968FEB7235(UNK_0x68F4C0EC296D3901(iParam0->f_3, true), fVar4, false, false, 255, 150);
							}
							if (!func_220(iParam0))
							{
								UNK_0xA3BF0AA5A2608191(iParam0->f_3);
							}
							else if (((UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 1 && UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 0) && UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 7) && func_272(iParam0, iParam0->f_3) > 8f)
							{
								UNK_0xF82EA857DA10E0CD(&(iParam0->f_243));
								UNK_0xDD353D0E9C789D0E(&(iParam0->f_243));
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
								if (iParam0->f_411 != 9)
								{
									UNK_0xC6EB89C59F2AF6B8(false, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, false, 0, 0, 0);
								}
								else
								{
									UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, false, 0, 0, 0);
								}
								UNK_0x75ABDC5F81978924(iParam0->f_243);
								UNK_0x78ADC381772E3D54(iParam0->f_3, iParam0->f_243);
							}
							if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								UNK_0x8352CA08CF578D18(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					case 2:
						if (bLocal_94)
						{
							if (func_171(iParam0->f_4, iParam0->f_3, 1) < 3f)
							{
								if (!func_265(iParam0, 1))
								{
									UNK_0x327AAEE25F323797(iParam0->f_3);
									func_343(iParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_264(iParam0->f_4))
								{
									UNK_0x327AAEE25F323797(iParam0->f_3);
									func_343(iParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_262(iParam0);
						if (func_272(iParam0, iParam0->f_3) < fVar4 || func_35())
						{
							if (UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
							{
								if (func_247(iParam0))
								{
									func_246(iParam0);
									iLocal_89 = UNK_0x1C0640BA9A7327B3();
									UNK_0x4E885A246A9D983A(iParam0->f_3, 26, true);
									func_185(iParam0, 5, 0);
									UNK_0x0DC19E268D45C03F();
									UNK_0x893A626C476B583D(iParam0->f_428, &(iParam0->f_42), -1);
									UNK_0x7D732AB707BE9152(iParam0->f_3, 0);
									return true;
								}
							}
						}
						else if (bParam1)
						{
							UNK_0x5F3EEC968FEB7235(UNK_0x68F4C0EC296D3901(iParam0->f_3, true), fVar4, false, false, 255, 150);
						}
						break;
				}
			}
		}
	}
	return false;
}

void func_246(int iParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
	{
		UNK_0x661342B9651D16E2(iParam0->f_8, false);
		UNK_0x142CC44DB769B57E(&(iParam0->f_8));
	}
}

bool func_247(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;

	func_261("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_78), 1000);
	iVar12 = -1;
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && !UNK_0x437347B10A200C4B(iParam0->f_4, 0))
	{
		func_260();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_258(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_162(iParam0, 0, 1084227584 /* Float: 5f */) && func_232(1, 1, 1))
			{
				if (func_265(iParam0, 1))
				{
					iLocal_88 = UNK_0x1C0640BA9A7327B3();
					SYSTEM::SETTIMERA(0);
					iLocal_86 = 1;
				}
				else
				{
					func_343(iParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				iParam0->f_7 = func_267(iParam0->f_4, iParam0->f_3);
				bVar9 = func_266(iParam0, &iVar10);
				if (!UNK_0x437347B10A200C4B(bVar9, 0))
				{
					if (iVar10 == iParam0->f_7)
					{
						if (iParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						UNK_0x75CDA8644CD3B5F5(bVar9, 0, iVar11);
					}
					else
					{
						UNK_0x75CDA8644CD3B5F5(bVar9, 0, 0);
					}
				}
				if (iParam0->f_411 == 0)
				{
					if (UNK_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 0, 0, false))
					{
						iParam0->f_7 = 0;
						if (!UNK_0x437347B10A200C4B(bVar9, 0))
						{
							UNK_0x75CDA8644CD3B5F5(bVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		case 2:
			if (iParam0->f_7 == 0)
			{
				vVar6 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 2)
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
			iVar12 = func_257(&(iParam0->f_409), UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, 0f, 2.2f, 0.275f), UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar0), 1);
			if (iVar12 == 1)
			{
				vVar0.f_2 = (vVar0.z + 1.5f);
				if (iParam0->f_7 == 2)
				{
					vVar3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_256(0, 0, 1);
				UNK_0x745CE398A4B0A3C6(UNK_0x68F4C0EC296D3901(iParam0->f_4, true), 3f, 0);
				UNK_0x75CFD6AD66ADFDD1(UNK_0x68F4C0EC296D3901(iParam0->f_4, true), 25f, 0);
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				func_254();
				func_275(iParam0, 0, 0);
				vVar13 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar6) };
				UNK_0xA47B46945FF6DE74(iParam0->f_3, vVar13, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(iParam0->f_3, func_252(iParam0));
				func_251(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848 /* Float: 50f */);
				UNK_0x608A456FDD8A83D8(*iParam0, UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar0));
				UNK_0x1305278186D1C53E(*iParam0, iParam0->f_4, vVar3, 1);
				UNK_0xE3BB8E05FCEB3FBE(*iParam0, true);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				UNK_0xF895E10BF4C72645(iParam0->f_3, 0, 0);
				UNK_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		case 5:
			func_261("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		case 6:
			break;
		case 7:
			if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && !UNK_0x437347B10A200C4B(iParam0->f_4, 0))
			{
				if (!UNK_0x405E212DDE472467(iParam0->f_3, 0))
				{
					UNK_0xF821F915BC24D246(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					UNK_0x152BCACCF710B36E(iParam0->f_4, func_250(iParam0->f_7), 1);
				}
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				UNK_0x9A8DDC7C522F5BF5(*iParam0, 0);
				UNK_0x9A8DDC7C522F5BF5(iParam0->f_1, 0);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x82E51BCA72537B6C(800);
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				func_254();
				func_275(iParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		case 8:
			if (UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749())
			{
				func_248(1, 1, 1);
				return true;
			}
			break;
		case 9:
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0x9A8DDC7C522F5BF5(*iParam0, 0);
			UNK_0x9A8DDC7C522F5BF5(iParam0->f_1, 0);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			func_248(1, 1, 1);
			return true;
		case 10:
			if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && !UNK_0x437347B10A200C4B(iParam0->f_4, 0))
			{
				if (UNK_0x81A5359F25512A04(iParam0->f_3) || UNK_0x405E212DDE472467(iParam0->f_3, 1))
				{
					return true;
				}
				else if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -1794415470) != 1 && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -1794415470) != 0)
				{
					UNK_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return false;
}

void func_248(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	}
	UNK_0x2D23BE319D971F4C(1);
	func_25(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
	}
	func_249(23, 0);
}

void func_249(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&Global_31015, bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_31015, bParam0);
	}
}

int func_250(int iParam0)
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

void func_251(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (!UNK_0x9F4FE516EAACCFC5(*iParam0))
	{
		*iParam0 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam1, vParam4, fParam7, 0, 2);
	}
}

float func_252(int iParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	vVar1 = { func_43() };
	if (iParam0->f_7 == 2)
	{
		vVar1 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_253(UNK_0x68F4C0EC296D3901(iParam0->f_3, true), vVar1);
	return fVar0;
}

int func_253(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_254()
{
	Global_19671 = 0;
	func_255();
}

void func_255()
{
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_256(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, bParam0);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 15f);
	}
	UNK_0x2D23BE319D971F4C(iParam1);
	func_44(0);
	func_25(1, 1, bParam2, 0, 0, 0);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	func_249(23, 1);
}

int func_257(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;

	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0xCD02F8660C47B801(vParam1, vParam4, 511, false, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = UNK_0x1EC301670B54C6DE(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
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

bool func_258(int iParam0)
{
	if (func_259() && UNK_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		UNK_0x53491B90E4FD0E56(500);
		while (!UNK_0x757EF87A33649210())
		{
			SYSTEM::WAIT(0);
		}
		func_44(0);
		func_191();
		return true;
	}
	return false;
}

bool func_259()
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0xBFC0798A6E3417F9(0, 18) || UNK_0xBFC0798A6E3417F9(2, 18))
	{
		return true;
	}
	return false;
}

void func_260()
{
	if (func_37())
	{
		UNK_0xCB0CD9B929EB37B9("appInternet");
	}
	if (func_36())
	{
		UNK_0xCB0CD9B929EB37B9("appCamera");
	}
	if (func_46(1))
	{
		func_44(0);
	}
}

void func_261(char* sParam0, int iParam1, int iParam2)
{
	if (UNK_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = UNK_0x1C0640BA9A7327B3();
}

void func_262(int iParam0)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if (func_170(iParam0->f_3, 1) > 30f || func_263(iParam0))
			{
				if (UNK_0xD1960163A3042274(iParam0->f_3, -1794415470) == 1 || UNK_0xD1960163A3042274(iParam0->f_3, 242628503) == 1)
				{
					UNK_0xF82EA857DA10E0CD(&iVar0);
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0xF96A174EE26D7588(false, iParam0->f_4, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0x96167B03C5A77156(false, iParam0->f_11, iParam0->f_6, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(iParam0->f_3, iVar0);
					func_343(iParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

bool func_263(int iParam0)
{
	if ((UNK_0x9C66D99E63E8E24C(iParam0->f_4) > 3f && func_420(iParam0, 5) > 15f) || UNK_0x377BE9A1BF38C7CE(iParam0->f_4))
	{
		return true;
	}
	return false;
}

bool func_264(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!UNK_0x464B3D84B739AE72(bParam0, false, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, true, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, 4, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return false;
	}
	if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		iVar1 = 0;
		if (!UNK_0x1150BCE24B1630AC(bParam0, false))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, true))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, 2))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, 3))
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

bool func_265(int iParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		iVar0[0] = UNK_0xA30B8362589C124A(iParam0->f_4, true, 0);
		iVar0[1] = UNK_0xA30B8362589C124A(iParam0->f_4, 2, 0);
		iVar0[2] = UNK_0xA30B8362589C124A(iParam0->f_4, false, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (UNK_0xC844350D5D58C99A(iVar0[iVar4]))
			{
				if (UNK_0x437347B10A200C4B(iVar0[iVar4], 0))
				{
					if (iVar4 == 0)
					{
						iParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						iParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						iParam0->f_7 = 0;
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
		if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
	}
	return true;
}

bool func_266(int iParam0, int iParam1)
{
	bool bVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		bVar0 = UNK_0xA30B8362589C124A(iParam0->f_4, true, 0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			*iParam1 = 1;
			return bVar0;
		}
		else
		{
			bVar0 = UNK_0xA30B8362589C124A(iParam0->f_4, 2, 0);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				*iParam1 = 2;
				return bVar0;
			}
			else
			{
				bVar0 = UNK_0xA30B8362589C124A(iParam0->f_4, false, 0);
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					*iParam1 = 0;
					return bVar0;
				}
			}
		}
	}
	return false;
}

int func_267(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar4 = UNK_0xD6DF381716822EFE(bParam0);
	vVar0 = { UNK_0x5293C88BD2F4DE13(bParam0, UNK_0x68F4C0EC296D3901(bParam1, true)) };
	if (UNK_0x134B62B726CEC8E6(bParam0) != joaat("VACCA"))
	{
	}
	if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("SENTINEL2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (UNK_0x3CAA763EEC01ADF7(bParam1, bParam0, 2, 0, false))
		{
			iVar3 = 2;
		}
		else if (UNK_0x3CAA763EEC01ADF7(bParam1, bParam0, 1, 0, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (UNK_0x3CAA763EEC01ADF7(bParam1, bParam0, 1, 0, false))
	{
		iVar3 = 1;
	}
	else if (UNK_0x3CAA763EEC01ADF7(bParam1, bParam0, 2, 0, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

bool func_268(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (!UNK_0x03068588A1FCED1A(iParam0->f_3) && func_170(iParam0->f_3, 1) < fParam2)
		{
			if (!func_179(iParam0, 5))
			{
				func_310(iParam0, 5, 0, 0);
			}
		}
		else if (func_179(iParam0, 5))
		{
			func_185(iParam0, 5, 0);
		}
		if (((func_420(iParam0, 5) > IntToFloat(iParam1) && UNK_0x9C66D99E63E8E24C(iParam0->f_4) < fParam4) && !UNK_0x03068588A1FCED1A(iParam0->f_3)) || func_170(iParam0->f_3, 1) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_269(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	bool bVar18;

	bVar18 = UNK_0xF653B9B22DA806A9(iParam0->f_4, "windscreen");
	if (bVar18 == -1)
	{
		bVar18 = UNK_0xF653B9B22DA806A9(iParam0->f_4, "windscreen_f");
	}
	if (bVar18 != -1)
	{
		vVar6 = { UNK_0xBF584557291FDD31(iParam0->f_4, bVar18) };
		vVar6 = { UNK_0x5293C88BD2F4DE13(iParam0->f_4, vVar6) };
		vVar6.f_1 = (vVar6.y + 1f);
	}
	else
	{
		vVar6 = { 0f, 1f, 1f };
	}
	vVar0 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar6) };
	vVar3 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_3, 0f, 0.25f, 0.9f) };
	UNK_0x4ADCCF23C40DC113(vVar0, vVar3, false, false, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			UNK_0x11AD11297DC58CC7(iParam0->f_3, true);
			iLocal_87 = 1;
			break;
		case 1:
			if ((func_171(iParam0->f_4, iParam0->f_3, 0) <= fParam1 && !iParam0->f_142) && UNK_0x755FF954DAE327E1((vVar0.z - vVar3.z)) < 5f)
			{
				if (iParam0->f_409 == 0)
				{
					iParam0->f_409 = UNK_0xCD02F8660C47B801(vVar0, vVar3, 511, false, 7);
				}
				else
				{
					iVar17 = UNK_0x1EC301670B54C6DE(iParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						iParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						iParam0->f_409 = 0;
					}
				}
			}
			else if (UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 1 && UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 0)
			{
				UNK_0xF82EA857DA10E0CD(&(iParam0->f_243));
				UNK_0xDD353D0E9C789D0E(&(iParam0->f_243));
				UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0x25644C31B4B6E9F3(iParam0->f_243, 1);
				UNK_0x75ABDC5F81978924(iParam0->f_243);
				UNK_0x78ADC381772E3D54(iParam0->f_3, iParam0->f_243);
			}
			break;
		case 2:
			UNK_0x790015DC92C918E2();
			if (iParam0->f_411 != 9)
			{
				if (!func_24(iParam0->f_44, 128))
				{
					func_241(iParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_270(iParam0->f_3, "TAXI_HAIL", iParam0->f_145, 4);
			}
			UNK_0xA3BF0AA5A2608191(iParam0->f_3);
			UNK_0x0C8C0C840C2D1AD2(iParam0->f_3, iParam0->f_4, -1, 2048, 4);
			UNK_0xF82EA857DA10E0CD(&(iParam0->f_243));
			UNK_0xDD353D0E9C789D0E(&(iParam0->f_243));
			if (iParam0->f_411 != 9)
			{
				UNK_0xC6EB89C59F2AF6B8(false, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, false, 0, 0, 0);
			}
			else
			{
				UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, false, 0, 0, 0);
			}
			UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
			UNK_0x75ABDC5F81978924(iParam0->f_243);
			UNK_0x78ADC381772E3D54(iParam0->f_3, iParam0->f_243);
			UNK_0xF82EA857DA10E0CD(&(iParam0->f_243));
			iLocal_87 = 3;
			break;
		case 3:
			iLocal_87 = 0;
			if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				UNK_0x8352CA08CF578D18(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return true;
	}
	return false;
}

void func_270(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_271(iParam3), 0);
}

int func_271(int iParam0)
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

float func_272(int iParam0, bool bParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (func_220(iParam0))
		{
			return func_171(iParam0->f_4, bParam1, 1);
		}
	}
	return 0f;
}

void func_273(int iParam0)
{
	func_180(iParam0, iParam0->f_3);
	if (func_220(iParam0))
	{
		if (func_179(iParam0, 14))
		{
			func_182(iParam0);
			if (UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
			{
				UNK_0x142CC44DB769B57E(&(iParam0->f_10));
			}
		}
	}
	if (!func_179(iParam0, 9))
	{
		if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
		{
			UNK_0x7F010F50CE03A8AF(iParam0->f_8, false);
			UNK_0x661342B9651D16E2(iParam0->f_8, false);
		}
		func_310(iParam0, 9, 0, 0);
		func_274("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_274(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_275(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_51();
		func_310(iParam0, 16, 4f, 0);
		UNK_0x790015DC92C918E2();
	}
}

bool func_276(int iParam0, int iParam1)
{
	if (!UNK_0x67C1D9E5B91B2E37(2))
	{
		return false;
	}
	func_280(12);
	if (func_24(iParam0->f_44, 8))
	{
		if (!func_24(iParam0->f_44, 128))
		{
			if (UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()) && !func_24(iParam0->f_44, 256))
			{
				func_65(&(iParam0->f_44), 256);
			}
			if (func_24(iParam0->f_44, 256) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				func_241(iParam0, 135, 1, 0, 1);
				func_65(&(iParam0->f_44), 128);
			}
		}
	}
	if (!func_279(iParam0, iParam1))
	{
		if (func_170(iParam0->f_3, 1) < 35f)
		{
			if (!func_24(iParam0->f_44, 8))
			{
				UNK_0xF96A174EE26D7588(iParam0->f_3, UNK_0x16F2683693E537C9(), 0);
				func_241(iParam0, 133, 1, 0, 1);
				func_65(&(iParam0->f_44), 8);
			}
		}
		if ((UNK_0xEB6A8945D1AC98A1(iParam0->f_3) || UNK_0xE9FDA1035CFEA94F(iParam0->f_3)) || func_170(iParam0->f_3, 1) > 400f)
		{
			func_343(iParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		iParam0->f_4 = UNK_0x6937EA2286828455(iParam0->f_2, 0);
		UNK_0x44A200C9B6E1CEA6(iParam0->f_4, true);
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == iParam0->f_2)
		{
			UNK_0x2F625BED8BF7F26A(iParam0->f_4);
			func_277(iParam0);
			func_53(2, 0);
			bLocal_94 = true;
			func_219(&uLocal_90);
			return true;
		}
		else
		{
			func_343(iParam0, "No Taxi", 21);
			func_130("TAXI_DBG_NTAXI", -1);
		}
	}
	return false;
}

void func_277(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(iParam0->f_4, 0))
	{
		if (func_278())
		{
		}
	}
}

bool func_278()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_279(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				bVar1 = UNK_0x134B62B726CEC8E6(bVar0);
				bVar2 = func_264(bVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((bVar1 == joaat("RHINO") || bVar1 == joaat("RATLOADER")) || bVar1 == joaat("SURFER")) || bVar1 == joaat("SURFER2")) || bVar1 == joaat("ARMYTANKER")) || bVar1 == joaat("BARRACKS")) || bVar1 == joaat("BARRACKS2")) || bVar1 == joaat("CRUSADER")) || bVar1 == joaat("UTILLITRUCK")) || bVar1 == joaat("UTILLITRUCK2")) || bVar1 == joaat("UTILLITRUCK3")) || bVar1 == joaat("AIRTUG")) || bVar1 == joaat("CADDY")) || bVar1 == joaat("CADDY2")) || bVar1 == joaat("DLOADER")) || bVar1 == joaat("DOCKTUG")) || bVar1 == joaat("FLATBED")) || bVar1 == joaat("RIPLEY")) || bVar1 == joaat("ROMERO")) || bVar1 == joaat("TOWTRUCK")) || bVar1 == joaat("TOWTRUCK2")) || bVar1 == joaat("AIRBUS")) || bVar1 == joaat("BUS")) || bVar1 == joaat("COACH")) || bVar1 == joaat("RENTALBUS")) || bVar1 == joaat("TOURBUS")) || bVar1 == joaat("RIOT")) || bVar1 == joaat("TRASH")) || bVar1 == joaat("BENSON")) || bVar1 == joaat("BIFF")) || bVar1 == joaat("HAULER")) || bVar1 == joaat("PACKER")) || bVar1 == joaat("PHANTOM")) || bVar1 == joaat("POUNDER")) || bVar1 == joaat("BULLDOZER")) || bVar1 == joaat("HANDLER")) || bVar1 == joaat("TIPTRUCK2")) || bVar1 == joaat("CUTTER")) || bVar1 == joaat("DUMP")) || bVar1 == joaat("MIXER")) || bVar1 == joaat("MIXER2")) || bVar1 == joaat("RUBBLE")) || bVar1 == joaat("SCRAP")) || bVar1 == joaat("TIPTRUCK")) || bVar1 == joaat("CAMPER")) || bVar1 == joaat("TACO")) || bVar1 == joaat("BOXVILLE")) || bVar1 == joaat("BOXVILLE2")) || bVar1 == joaat("BOXVILLE3")) || bVar1 == joaat("BURRITO")) || bVar1 == joaat("BURRITO2")) || bVar1 == joaat("BURRITO3")) || bVar1 == joaat("BURRITO4")) || bVar1 == joaat("GBURRITO")) || bVar1 == joaat("JOURNEY")) || bVar1 == joaat("MULE")) || bVar1 == joaat("MULE2")) || bVar1 == joaat("PONY")) || bVar1 == joaat("RUMPO")) || bVar1 == joaat("RUMPO2")) || bVar1 == joaat("SPEEDO")) || bVar1 == joaat("SPEEDO2")) || bVar1 == joaat("YOUGA")) || bVar1 == joaat("MOWER")) || bVar1 == joaat("TRACTOR")) || bVar1 == joaat("TRACTOR2")) || bVar1 == joaat("FBI")) || bVar1 == joaat("FBI2")) || bVar1 == joaat("PRANGER")) || bVar1 == joaat("AMBULANCE")) || bVar1 == joaat("DILETTANTE2")) || bVar1 == joaat("FIRETRUK")) || bVar1 == joaat("LGUARD")) || bVar1 == joaat("DUNE")) || bVar1 == joaat("PBUS")) || bVar1 == joaat("POLICE")) || bVar1 == joaat("POLICE2")) || bVar1 == joaat("POLICE3")) || bVar1 == joaat("POLICE4")) || bVar1 == joaat("POLICEB")) || bVar1 == joaat("POLICET")) || bVar1 == joaat("SHERIFF")) || bVar1 == joaat("SHERIFF2")) || bVar1 == joaat("STOCKADE"))
				{
					bVar3 = false;
				}
				if (iParam0->f_411 == 7)
				{
					if (bVar1 == joaat("BODHI2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (UNK_0x8E39AC3C76C8AA58(bVar1))
				{
					if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (UNK_0xD6DF381716822EFE(bVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_24(iParam0->f_44, 64))
					{
						if (UNK_0x67C1D9E5B91B2E37(2))
						{
							func_130("TX_VIP_DMGD", -1);
							if (func_121("TX_VIP_DMGD"))
							{
								func_65(&(iParam0->f_44), 64);
							}
						}
					}
					return false;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(iParam0->f_44, 32))
					{
						if (UNK_0x67C1D9E5B91B2E37(2))
						{
							func_130("TX_VIP_CAR", -1);
							if (func_121("TX_VIP_CAR"))
							{
								func_65(&(iParam0->f_44), 32);
							}
						}
					}
					return false;
				}
				else if (!bVar5)
				{
					if (!func_24(iParam0->f_44, 16))
					{
						if (UNK_0x67C1D9E5B91B2E37(2))
						{
							func_130("TX_VIP_SMALL", -1);
							if (func_121("TX_VIP_SMALL"))
							{
								func_65(&(iParam0->f_44), 16);
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
			func_22(&(iParam0->f_44), 16);
			func_22(&(iParam0->f_44), 64);
			func_22(&(iParam0->f_44), 32);
		}
	}
	return false;
}

void func_280(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		iVar0 = iParam0;
		UNK_0x3CFFF3C8EACD8DC1(8, &iVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_281(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_23(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_282()
{
	Local_343 = 0;
	func_299(45909, 45884, 1);
	func_299(45645, 45622, 1);
	func_299(45560, 45535, 1);
	func_299(45463, 45439, 1);
	func_299(45329, 45308, 1);
	func_299(45255, 45230, 1);
	func_299(45088, 45065, 1);
}

int func_283(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_284(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_286(uParam0->f_4))
		{
			func_285(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_285(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

bool func_286(bool bParam0)
{
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x6EE94F60DA2A2273(bParam0) < -100f)
	{
		return true;
	}
	else if (UNK_0x7B5606C651AB51B5(bParam0, 0, 40000) || UNK_0x7B5606C651AB51B5(bParam0, 1, 40000))
	{
		return true;
	}
	return false;
}

int func_287(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_288(var uParam0)
{
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
	{
		if (func_289(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_290(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_285(uParam0, 11);
	return 1;
}

int func_291(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (UNK_0x70EED0761B82965E(uParam0->f_4) && !UNK_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			if (!func_179(uParam0, 25))
			{
				func_310(uParam0, 25, 0, 0);
			}
			else if (func_420(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_179(uParam0, 25))
		{
			func_185(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_292(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_293(var uParam0)
{
	if (!UNK_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (UNK_0x4DA54CAC0D81A673(uParam0->f_4))
		{
			if (UNK_0x7B5606C651AB51B5(uParam0->f_4, 0, 40000) || UNK_0x7B5606C651AB51B5(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_294(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_295(var uParam0)
{
	if (!UNK_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (UNK_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (UNK_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_289(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_296(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_297(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_298(uParam0->f_4))
		{
			func_285(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

bool func_298(bool bParam0)
{
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x6EE94F60DA2A2273(bParam0) == 0f)
	{
		if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
		}
		return true;
	}
	else if (UNK_0x7B5606C651AB51B5(bParam0, 0, 40000) || UNK_0x7B5606C651AB51B5(bParam0, 1, 40000))
	{
		return true;
	}
	return false;
}

void func_299(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343 /*4*/] = 0;
	func_66(&(Local_343.f_1[Local_343 /*4*/]), 1);
	if (bParam2)
	{
		func_66(&(Local_343.f_1[Local_343 /*4*/]), 2);
	}
	Local_343.f_1[Local_343 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343 /*4*/].f_3 = iParam1;
	Local_343++;
}

int func_300(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_301(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_3))
	{
		if ((UNK_0xEB6A8945D1AC98A1(uParam0->f_3) || UNK_0x437347B10A200C4B(uParam0->f_3, 0)) || UNK_0x4E861BC5B1EDA7BD(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_302()
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

bool func_303()
{
	if (!UNK_0xB87F6CF6E5628C67(bLocal_852))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading A_M_Y_SouCent_01", &iLocal_869, 1000);
		return false;
	}
	if (!UNK_0x83D8570832F172A7(iLocal_964))
	{
		return false;
	}
	if (!func_304(&iLocal_869, 1))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_869, 1000);
		return false;
	}
	return true;
}

bool func_304(int iParam0, bool bParam1)
{
	if (!UNK_0xB87F6CF6E5628C67(func_21()))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return false;
	}
	if (bParam1)
	{
		if (!UNK_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return false;
		}
	}
	if (!UNK_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return false;
	}
	if (!UNK_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return false;
	}
	if (!UNK_0xB4AE0788C1587752("misscommon@response"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return false;
	}
	if (!UNK_0x67C1D9E5B91B2E37(2))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return false;
	}
	return true;
}

void func_305(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

int func_306(var uParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_307(uParam0->f_3, 0, 0);
		UNK_0x138116A08F9AC5F4(1, 0f);
		UNK_0x661342B9651D16E2(uParam0->f_8, true);
		UNK_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		UNK_0x0C8C0C840C2D1AD2(uParam0->f_3, UNK_0x16F2683693E537C9(), -1, 2048, 4);
	}
	return 1;
}

int func_307(bool bParam0, bool bParam1, bool bParam2)
{
	return func_153(bParam0, !bParam1, bParam2);
}

int func_308(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!UNK_0xC844350D5D58C99A(uParam0->f_3))
	{
		func_309(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam4 };
		func_41(uParam0->f_14, 0);
		UNK_0x745CE398A4B0A3C6(uParam0->f_14, 2f, 0);
		func_39(uParam0->f_14, 0, iParam10);
		if (bParam8 == 0)
		{
			uParam0->f_3 = UNK_0x852B8A2DB29D2288(uParam0->f_11);
		}
		else if (UNK_0xC844350D5D58C99A(Global_110348.f_225[0]))
		{
			uParam0->f_3 = Global_110348.f_225[0];
			UNK_0x73270B3C9CC833FD(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = UNK_0x36F2404464202779(26, bParam8, uParam0->f_11, bParam9, 1, true);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, bParam7, 0, 1);
		UNK_0x4F39CC3882DD074E(uParam0->f_3, bParam7);
		UNK_0x9DD8618CA5BF832D(uParam0->f_3, 112, true);
		if (!UNK_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			UNK_0x25BD67336EA4AECE(uParam0->f_3, 250);
			UNK_0x4E885A246A9D983A(uParam0->f_3, 32, false);
			UNK_0x4E885A246A9D983A(uParam0->f_3, 104, true);
			UNK_0x4E885A246A9D983A(uParam0->f_3, 177, true);
			UNK_0x4E885A246A9D983A(uParam0->f_3, 116, false);
			UNK_0xF63400DBE3303D26("TAXI_Passenger", &(uParam0->f_413));
			UNK_0x0E2400AB9174FA81(1, uParam0->f_413, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(2, uParam0->f_413, joaat("COP"));
			UNK_0x6DF7BF67E86AAE86(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_309(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = UNK_0xA4B9EE930B45BDFA(vParam1, 20f, 5f, 0);
}

void func_310(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_110(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_109(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_110(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_109(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_311()
{
	UNK_0x523BCC9DC80CD82F(bLocal_852);
	UNK_0x3F423BF5B8125A50(bLocal_884);
	UNK_0xAE317D00A5A55DF6("Taxi_Vomit", 0, -1);
	iLocal_964 = func_313();
	UNK_0x9E5E60D8C63FD9D1();
	func_312(1);
}

void func_312(bool bParam0)
{
	UNK_0x523BCC9DC80CD82F(func_21());
	if (bParam0)
	{
		UNK_0x3F423BF5B8125A50("gestures@m@standing@casual");
	}
	UNK_0x3F423BF5B8125A50("oddjobs@taxi@");
	UNK_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	UNK_0x3F423BF5B8125A50("misscommon@response");
	UNK_0xD7992BEF7A9D109E("TAXI", 2);
	if (!func_24(Global_111638.f_19092, 128))
	{
		func_65(&(Global_111638.f_19092), 128);
	}
}

int func_313()
{
	return UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_314(var uParam0, var uParam1)
{
	int iVar0;

	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_60[iVar0 /*3*/]), true);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_60[iVar0 /*3*/]), true);
			UNK_0x0674E58A79778E99(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_315(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

bool func_316()
{
	float fVar0;
	int iVar1;

	fVar0 = SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3());
	iVar1 = func_194(&Local_410);
	if ((fVar0 - fLocal_873) > 5f)
	{
		fLocal_873 = fVar0;
		if (iLocal_872 == 0)
		{
			if (func_10(Local_410.f_4, Local_410.f_17, 1) < 200f)
			{
				iLocal_872++;
			}
			if (iVar1 >= 5)
			{
				if (!func_193())
				{
					return true;
				}
				else
				{
					func_191();
					fLocal_873 = 0f;
				}
			}
		}
		else if (iVar1 >= 7)
		{
			if (!func_193())
			{
				return true;
			}
			else
			{
				func_191();
				fLocal_873 = 0f;
			}
		}
	}
	return false;
}

void func_317()
{
	if (func_318(&Local_410, 27, 155f))
	{
	}
}

bool func_318(int iParam0, int iParam1, float fParam2)
{
	if (iParam0->f_410 < 29)
	{
		if (func_179(iParam0, 7))
		{
			func_218(iParam0, 23);
			if (func_420(iParam0, 7) > fParam2 && func_420(iParam0, 23) > 35f)
			{
				func_310(iParam0, 23, 0, 0);
				func_241(iParam0, iParam1, 1, 0, 0);
				return true;
			}
		}
	}
	return false;
}

void func_319(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0->f_411 == 0)
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
		{
			if (bParam2)
			{
				if (func_420(iParam0, 10) > (20f + 10f))
				{
					if (iParam0->f_112)
					{
						func_241(iParam0, 92, 1, 0, 0);
						iParam0->f_112 = 0;
					}
					else
					{
						func_241(iParam0, 83, 1, 0, 0);
					}
					iParam0->f_113 = 1;
					func_310(iParam0, 10, 0f, 1);
				}
			}
			else if (func_420(iParam0, 10) > 20f)
			{
				if (iParam0->f_112)
				{
					func_241(iParam0, 92, 1, 0, 0);
					iParam0->f_112 = 0;
				}
				else
				{
					func_241(iParam0, 83, 1, 0, 0);
				}
				iParam0->f_113 = 1;
				func_310(iParam0, 10, 0f, 1);
			}
		}
	}
	if (iParam0->f_411 == 1)
	{
		if (func_420(iParam0, 10) > 30f)
		{
			if (!func_193())
			{
				if (iParam0->f_112)
				{
					func_241(iParam0, 92, 1, 0, 0);
					iParam0->f_112 = 0;
				}
				else
				{
					func_241(iParam0, 83, 1, 0, 0);
				}
				iParam0->f_113 = 1;
				func_310(iParam0, 10, 0f, 1);
			}
		}
	}
	if (func_24(iParam0->f_100, 64))
	{
		if (!func_16(&(Local_190[5 /*10*/].f_6)))
		{
			func_219(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_342(iParam0))
			{
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_341(iParam0, 1);
				func_339(5, iParam0);
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 1))
	{
		if (!func_16(&(Local_190[0 /*10*/].f_6)))
		{
			func_219(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_337(iParam0))
			{
				func_341(iParam0, 1);
				func_339(0, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 2))
	{
		if (!func_16(&(Local_190[1 /*10*/].f_6)))
		{
			func_219(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_336(iParam0))
			{
				func_341(iParam0, 1);
				func_339(1, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 2048))
	{
		if (!func_16(&(Local_190[8 /*10*/].f_6)))
		{
			if (UNK_0xC844350D5D58C99A(iParam0->f_4))
			{
				iParam0->f_46 = UNK_0x7F6DC62EA9922664(iParam0->f_4);
				func_219(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_107(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_335(iParam0))
			{
				func_341(iParam0, 1);
				func_339(8, iParam0);
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 128))
	{
		if (!func_16(&(Local_190[6 /*10*/].f_6)))
		{
			func_219(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_334(iParam0))
			{
				func_341(iParam0, 1);
				func_339(6, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 32))
	{
		if (!func_16(&(Local_190[4 /*10*/].f_6)))
		{
			func_219(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_333(iParam0))
			{
				func_341(iParam0, 1);
				func_339(4, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 256))
	{
		if (!func_16(&(Local_190[7 /*10*/].f_6)))
		{
			func_219(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_332(iParam0))
			{
				func_339(7, iParam0);
				func_341(iParam0, 1);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 8))
	{
		if (!func_16(&(Local_190[9 /*10*/].f_6)))
		{
			func_219(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
		}
		else if (func_107(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_331(iParam0))
			{
				func_341(iParam0, 1);
				func_339(9, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 16384))
	{
		if (!func_16(&(Local_190[13 /*10*/].f_6)))
		{
			func_219(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_325(iParam0))
			{
				func_341(iParam0, 1);
				func_339(13, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 32768))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_6)))
		{
			func_219(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_324(iParam0))
			{
				func_341(iParam0, 1);
				func_339(14, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 4096))
	{
		if (!func_16(&(Local_190[11 /*10*/].f_6)))
		{
			func_219(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_323(iParam0))
			{
				func_341(iParam0, 1);
				func_339(11, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 8192))
	{
		if (!func_16(&(Local_190[12 /*10*/].f_6)))
		{
			func_219(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_107(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_322(iParam0))
			{
				func_341(iParam0, 1);
				func_339(12, iParam0);
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_338(iParam0);
			}
		}
	}
	if (func_24(iParam0->f_100, 4))
	{
		if (!func_16(&(Local_190[2 /*10*/].f_6)))
		{
			func_321(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_107(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_320(iParam0))
			{
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_341(iParam0, 1);
				func_339(2, iParam0);
				func_338(iParam0);
			}
		}
	}
}

bool func_320(int iParam0)
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_2))
	{
		if ((!UNK_0x4024663A44BC1535(iParam0->f_2) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[2 /*10*/].f_3)))
			{
				iParam0->f_37 = UNK_0x9C66D99E63E8E24C(iParam0->f_2);
				if (iParam0->f_37 > 10f)
				{
					func_219(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_107(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				iParam0->f_38 = iParam0->f_37;
				iParam0->f_37 = UNK_0x9C66D99E63E8E24C(iParam0->f_2);
				fVar0 = (iParam0->f_38 - iParam0->f_37);
				func_106(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && iParam0->f_37 < 12f)
				{
					return true;
				}
			}
		}
		else
		{
			func_106(&(Local_190[2 /*10*/].f_3));
		}
	}
	return false;
}

void func_321(bool bParam0, float fParam1)
{
	if (!func_16(bParam0))
	{
		func_110(bParam0, fParam1);
	}
}

bool func_322(int iParam0)
{
	vector3 vVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		vVar0 = { UNK_0x698705F356FA8F72(iParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[12 /*10*/].f_3)))
			{
				func_219(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_190[12 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_106(&(Local_190[12 /*10*/].f_3));
		}
	}
	return false;
}

bool func_323(int iParam0)
{
	vector3 vVar0;

	if ((((((UNK_0xDF1306B443CD3D15(iParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3)))
	{
		vVar0 = { UNK_0x698705F356FA8F72(iParam0->f_4, 1) };
		if (UNK_0x755FF954DAE327E1(vVar0.x) > 2.5f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[11 /*10*/].f_3)))
			{
				func_219(&(Local_190[11 /*10*/].f_3));
				bLocal_342 = vVar0.x;
			}
			else if (func_107(&(Local_190[11 /*10*/].f_3)) < 1.5f && (UNK_0x755FF954DAE327E1(bLocal_342) - UNK_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_106(&(Local_190[11 /*10*/].f_3));
				return true;
			}
			else if (func_107(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_106(&(Local_190[11 /*10*/].f_3));
				return false;
			}
		}
	}
	return false;
}

bool func_324(int iParam0)
{
	if (((((UNK_0xDF1306B443CD3D15(iParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_3)))
		{
			iParam0->f_5 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(iParam0->f_4, true), 10f, false, 260);
			if (UNK_0xC844350D5D58C99A(iParam0->f_5))
			{
				if ((UNK_0x9C66D99E63E8E24C(iParam0->f_4) > 15f && func_171(iParam0->f_5, iParam0->f_4, 1) < 3f) && (!UNK_0x437347B10A200C4B(iParam0->f_5, 0) && !UNK_0xBBA8A868118C90ED(iParam0->f_5, -1, 0)))
				{
					func_219(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_107(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_171(iParam0->f_5, iParam0->f_4, 1) > 4.5f) && !UNK_0xE147126C9AD09A60(iParam0->f_5))
		{
			func_106(&(Local_190[14 /*10*/].f_3));
			return true;
		}
		else if (func_107(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_106(&(Local_190[14 /*10*/].f_3));
			return false;
		}
		else if (UNK_0xE147126C9AD09A60(iParam0->f_5))
		{
			func_106(&(Local_190[14 /*10*/].f_3));
			return false;
		}
	}
	return false;
}

bool func_325(int iParam0)
{
	if (((UNK_0xDF1306B443CD3D15(iParam0->f_4, 0) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_326(iParam0->f_4) && UNK_0x9C66D99E63E8E24C(iParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_190[13 /*10*/].f_3)))
			{
				func_219(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_190[13 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_106(&(Local_190[13 /*10*/].f_3));
		}
	}
	return false;
}

int func_326(bool bParam0)
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

	UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(bParam0, true), 1, &vVar0, 1, 3f, 0f);
	UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(bParam0, true), 2, &vVar3, 1, 3f, 0f);
	UNK_0x48C17E97DDC41CBC(vVar0, -1, &vVar6);
	fVar27 = SYSTEM::VMAG(vVar6 - vVar0);
	vVar9 = { func_330((vVar3.x - vVar0.x), (vVar3.y - vVar0.y), 0f) };
	vVar12 = { func_329(vVar9, 0) * Vector(fVar27, fVar27, fVar27) };
	vVar9 = { vVar9 * Vector(2f, 2f, 2f) };
	vVar15 = { vVar0 - vVar9 + vVar12 };
	vVar18 = { vVar0 - vVar9 - vVar12 };
	vVar21 = { vVar3 + vVar9 + vVar12 };
	vVar24 = { vVar3 + vVar9 - vVar12 };
	vVar24 = { vVar24 };
	return func_327(UNK_0x68F4C0EC296D3901(bParam0, true), vVar15, vVar18, vVar21);
}

int func_327(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
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
	vVar0 = { func_330(vParam6 - vParam3) };
	vVar3 = { func_330(vParam9 - vParam3) };
	fVar6 = func_328(vParam0, vVar0);
	fVar7 = func_328(vParam3, vVar0);
	fVar8 = func_328(vParam6, vVar0);
	fVar9 = func_328(vParam0, vVar3);
	fVar10 = func_328(vParam3, vVar3);
	fVar11 = func_328(vParam9, vVar3);
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

float func_328(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_329(vector3 vParam0, int iParam3)
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

Vector3 func_330(vector3 vParam0)
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

bool func_331(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == UNK_0x16F2683693E537C9())
		{
			if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_332(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == UNK_0x16F2683693E537C9())
		{
			if (UNK_0x377BE9A1BF38C7CE(iParam0->f_4))
			{
				if (!bLocal_341)
				{
					if (UNK_0xCE563465D2227DD6(iParam0->f_4) <= -145f || UNK_0xCE563465D2227DD6(iParam0->f_4) >= 145f)
					{
						bLocal_341 = true;
					}
				}
			}
			else if (bLocal_341)
			{
				if (UNK_0xCE563465D2227DD6(iParam0->f_4) <= 35f && UNK_0xCE563465D2227DD6(iParam0->f_4) >= -35f)
				{
					bLocal_341 = false;
					return true;
				}
			}
		}
	}
	return false;
}

bool func_333(int iParam0)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		iVar0 = UNK_0xB32FE193F79AD48C(UNK_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[4 /*10*/].f_3)))
			{
				func_219(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_106(&(Local_190[4 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_106(&(Local_190[4 /*10*/].f_3));
		}
	}
	return false;
}

bool func_334(int iParam0)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		iVar0 = UNK_0x00AC2C41F7B083B2(UNK_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[6 /*10*/].f_3)))
			{
				func_219(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_190[6 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_106(&(Local_190[6 /*10*/].f_3));
		}
	}
	return false;
}

bool func_335(int iParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xE608C809F9416F00(iParam0->f_4))
		{
			iVar0 = UNK_0x7F6DC62EA9922664(iParam0->f_4);
			iVar1 = (iParam0->f_46 - iVar0);
			iParam0->f_46 = iVar0;
			UNK_0xE910A68AA670B4AA(iParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (iParam0->f_113)
				{
					func_241(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_241(iParam0, 72, 1, 0, 1);
				}
				func_106(&(Local_190[2 /*10*/].f_6));
				return true;
			}
		}
	}
	return false;
}

bool func_336(int iParam0)
{
	vector3 vVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		vVar0 = { UNK_0x698705F356FA8F72(iParam0->f_4, 1) };
		if (UNK_0x755FF954DAE327E1(vVar0.x) > 3f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[1 /*10*/].f_3)))
			{
				func_219(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_106(&(Local_190[1 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_106(&(Local_190[1 /*10*/].f_3));
		}
	}
	return false;
}

bool func_337(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xF79A7BCA9E38BBBC(iParam0->f_4) && UNK_0xE934758D273C899A(iParam0->f_4))
		{
			if (!func_16(&(Local_190[0 /*10*/].f_3)))
			{
				func_219(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_106(&(Local_190[0 /*10*/].f_3));
				func_109(&(Local_190[1 /*10*/].f_6));
				return true;
			}
		}
		else
		{
			func_106(&(Local_190[0 /*10*/].f_3));
		}
	}
	return false;
}

void func_338(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_109(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_310(iParam0, 10, 0f, 1);
	UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
}

void func_339(int iParam0, int iParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_340(iParam1, iParam0);
	func_106(&(Local_190[iParam0 /*10*/].f_6));
	iParam1->f_112 = 1;
}

void func_340(int iParam0, int iParam1)
{
	iParam0->f_76 = (iParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_341(int iParam0, int iParam1)
{
	iParam0->f_104 = (iParam0->f_104 + iParam1);
}

bool func_342(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0x9C66D99E63E8E24C(iParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_190[5 /*10*/].f_3)))
			{
				func_219(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_107(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_190[5 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_106(&(Local_190[5 /*10*/].f_3));
		}
	}
	return false;
}

void func_343(int iParam0, char* sParam1, int iParam2)
{
	vector3 vVar0[24];

	func_191();
	func_440(2);
	cVar0 = { func_347() };
	if ((!UNK_0xEA6BC48857E0AC4C(&cVar0) && func_193()) && !UNK_0x7F8A39872A07D2CE(&cVar0, "NULL"))
	{
	}
	else
	{
		UNK_0x790015DC92C918E2();
		UNK_0xA37A90C62806D848(1);
		StringCopy(&cVar0, iParam0->f_143, 24);
		if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
		{
			if (!func_166(iParam0))
			{
				if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					UNK_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					UNK_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					UNK_0xFB131B855F2FD560(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_310(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_270(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&cVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_aggro", 24);
			}
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&cVar0, "_lost1", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&cVar0, "_spotd1", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&cVar0, "_wntd1", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&cVar0, "_spook", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_166(iParam0))
			{
				if (UNK_0x8B38C0DAEEDB5F9C(iParam0->f_4))
				{
					func_154(iParam0, 4096, 0);
				}
				else
				{
					func_154(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&cVar0, "_hit2", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&cVar0, "_jak", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_shot1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_270(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_345(iParam0, &cVar0);
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_345(iParam0, &cVar0);
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_270(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_154(iParam0, 0, 0);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_270(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_270(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&cVar0, "OJTX_QUIT_", 24);
			func_344(&cVar0);
			func_195(&(iParam0->f_244), "OJTXAUD", &cVar0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&cVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_fail1", 24);
			}
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&cVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_345(iParam0, &cVar0);
				}
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_270(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_53(3, 0);
		}
		func_310(iParam0, 3, 0f, 1);
	}
}

void func_344(char* sParam0)
{
	switch (func_3(UNK_0x16F2683693E537C9()))
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

void func_345(int iParam0, char* sParam1)
{
	if (func_346(iParam0))
	{
		func_195(&(iParam0->f_244), iParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

bool func_346(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (func_171(UNK_0x16F2683693E537C9(), iParam0->f_3, 1) < 40f && !UNK_0x03068588A1FCED1A(iParam0->f_3))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_347()
{
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = UNK_0x40EFDB96B3112BA7();
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

int func_348(var uParam0)
{
	return uParam0->f_118;
}

void func_349()
{
	if (func_381(&Local_410, &Local_886))
	{
		switch (Local_886.f_27)
		{
			case 0:
				if (Local_410.f_410 == 9)
				{
					if (!func_380(&Local_410) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 1)
					{
						if (func_379("TX_OBJ_TIE_DO") || UNK_0xE4EDC4B0E92C078B(Local_410.f_9))
						{
							Local_886.f_27++;
						}
						else if (func_378(&Local_410) != 10)
						{
							func_241(&Local_410, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if (!bLocal_879)
				{
					if (func_378(&Local_410) > 10 && func_378(&Local_410) != 15)
					{
						func_241(&Local_410, 15, 1, 0, 0);
						func_310(&Local_410, 10, 0, 0);
						if (bLocal_885)
						{
						}
					}
				}
				else
				{
					Local_886.f_27++;
				}
				break;
			case 2:
				if ((bLocal_879 && iLocal_847 == 0) && !func_193())
				{
					if (func_378(&Local_410) > 10 && func_378(&Local_410) != 16)
					{
						func_241(&Local_410, 16, 1, 0, 0);
						func_310(&Local_410, 10, 0, 0);
						if (bLocal_885)
						{
						}
					}
				}
				break;
			case 3:
				break;
		}
	}
	func_350(&Local_410, &uLocal_916, &Local_886, 4, bLocal_885);
}

int func_350(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[48];
	struct<6> Var6;

	func_361(iParam0, uParam1);
	if ((*uParam2 == -1 && iParam0->f_410 < 29) && !iParam0->f_109)
	{
		if (func_360(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!iParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_359(iParam0))
				{
					uParam2->f_7 = { func_358(uParam1) };
					func_195(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			case 2:
				if (func_193())
				{
					uParam2->f_13 = { func_243() };
					if (UNK_0x7F8A39872A07D2CE(&(uParam2->f_13), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			case 3:
				if (func_222(iParam0))
				{
					if (func_193())
					{
						if (UNK_0x7DECE00E09F41C95(UNK_0x16F2683693E537C9()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						func_310(iParam0, 17, 0f, 1);
						if (iParam0->f_411 == 1)
						{
							uParam2->f_1 = { func_347() };
							func_51();
						}
						else
						{
							uParam2->f_1 = { func_357() };
							func_191();
						}
						if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (iParam0->f_411 == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (func_193())
				{
					uParam2->f_19 = { func_357() };
				}
				else
				{
					func_66(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_355(uParam1);
					func_310(iParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!func_179(iParam0, 14) && !func_193()) && !func_222(iParam0)) && func_420(iParam0, 18) > 1f)
				{
					func_310(iParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			case 5:
				if ((func_420(iParam0, 18) > 1.5f && !func_193()) && !func_222(iParam0))
				{
					StringCopy(&cVar0, iParam0->f_143, 24);
					if (func_354(uParam2, &cVar0))
					{
						func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
						func_310(iParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_29)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var6 = { cVar0 };
						func_353(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						func_352(&(iParam0->f_244), iParam0->f_144, &Var6, &cVar0, 8, 0, 0);
						func_310(iParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			case 6:
				if (!func_193() && func_420(iParam0, 17) > 1f)
				{
					if (func_420(iParam0, 18) > 0.5f || iParam0->f_411 == 0)
					{
						if (UNK_0x7F8A39872A07D2CE(&(uParam2->f_19), &(uParam2->f_1)) && iParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), iParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_190(&(uParam2->f_1));
							func_195(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							func_185(iParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!UNK_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_351(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			case 7:
				if (!func_193())
				{
					func_66(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_355(uParam1);
					func_310(iParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
		}
	}
	return 0;
}

int func_351(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_207(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_196(sParam2, iParam4, 0);
}

int func_352(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_207(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_196(sParam2, iParam4, 0);
}

void func_353(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_289(*uParam0, iVar1))
		{
			func_66(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_190(sParam2);
				}
				else
				{
					func_190(sParam2);
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

bool func_354(var uParam0, char* sParam1)
{
	if (UNK_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm3_bant1") || UNK_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return true;
	}
	if ((UNK_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm6_bant3M") || UNK_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm6_bant3T")) || UNK_0x7F8A39872A07D2CE(&(uParam0->f_13), "txm6_bant3F"))
	{
		func_65(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return true;
	}
	return false;
}

void func_355(var uParam0)
{
	int iVar0;

	iVar0 = func_356(uParam0);
	if (iVar0 > -1)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_65(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_212(), 24);
	}
}

int func_356(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_357()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = UNK_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (UNK_0xEF07223F00EBE9C9(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (UNK_0xEF07223F00EBE9C9(&(Global_19673[iVar8 /*6*/])))
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

struct<6> func_358(var uParam0)
{
	int iVar0;
	struct<6> Var1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_65(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

bool func_359(int iParam0)
{
	switch (iParam0->f_411)
	{
		case 0:
			if (func_224("TX_OBJ_NEX_DO", 0, 0))
			{
				return true;
			}
			break;
		case 1:
			if (func_224("TX_OBJ_TIE_DO", 0, 0))
			{
				return true;
			}
			break;
		case 2:
			if (func_224("TX_OBJ_DL_DO", 0, 0))
			{
				return true;
			}
			break;
		case 3:
			if ((func_224("TX_OBJ_GYB_DO", 0, 0) || func_224("TAXI_OBJ_GYB", 0, 0)) || func_224("TAXI_OBJ_GYB_2", 0, 0))
			{
				return true;
			}
			break;
		case 4:
			if (func_224("TX_OBJ_TTB_DO", 0, 0))
			{
				return true;
			}
			break;
		case 5:
			if ((func_224("TX_OBJ_CYI_DO", 0, 0) || func_224("TAXI_OBJ_CYI_01", 0, 0)) || func_224("TAXI_OBJ_CYI_02", 0, 0))
			{
				return true;
			}
			break;
		case 6:
			if (((func_224("TX_OBJ_GYN_DO", 0, 0) || func_224("TAXI_OBJ_GYN", 0, 0)) || func_224("TAXI_OBJ_GYN_TG", 0, 0)) || func_224("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return true;
			}
			break;
		case 7:
			if ((func_224("TAXI_OBJ_CC1", 0, 0) || func_224("TAXI_OBJ_CC2", 0, 0)) || func_224("TAXI_OBJ_CC3", 0, 0))
			{
				return true;
			}
			break;
		case 8:
			if ((func_224("TAXI_OBJ_FTC1", 0, 0) || func_224("TAXI_OBJ_FTC2", 0, 0)) || func_224("TAXI_OBJ_FTC3", 0, 0))
			{
				return true;
			}
			break;
		case 9:
			if (func_224("TX_OBJ_PRO_DO", 0, 0))
			{
				return true;
			}
			break;
	}
	return (((((func_224("TAXI_OBJ_GETRUN", 0, 0) || func_224("TAXI_OBJ_DRIVE", 0, 0)) || func_224("TAXI_OBJ_RETURN", 0, 0)) || func_224("TAXI_OBJ_POL", 0, 0)) || func_224("TAXI_OBJ_RUNOUT", 0, 0)) || func_224("TAXI_OBJ_POL", 0, 0));
}

bool func_360(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_361(int iParam0, var uParam1)
{
	vector3 vVar0[24];
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;

	if (func_359(iParam0))
	{
	}
	else if (!iParam0->f_110)
	{
	}
	else if (func_179(iParam0, 14))
	{
		StringCopy(&cVar0, iParam0->f_143, 24);
		switch (func_378(iParam0))
		{
			case 55:
				StringConCat(&cVar0, "_lvMe1", 24);
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_377(4, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 2:
				if (!func_193())
				{
					if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_retrn1", 24);
					}
					if (iParam0->f_411 != 9)
					{
						func_376(iParam0, &cVar0, 0, 0, 8);
					}
				}
				else
				{
					func_373(iParam0, cVar0, func_375(iParam0, 2));
				}
				if (func_24(iParam0->f_98, 4))
				{
					func_310(iParam0, 16, 0, 0);
					func_275(iParam0, 0, 0);
				}
				func_176(iParam0, &(iParam0->f_98), 4, 3);
				break;
			case 3:
				if (func_420(iParam0, 16) > 1f)
				{
					func_178(1);
					if (iParam0->f_411 == 9)
					{
						func_274("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_274("TAXI_VIP_RETURN", 7500, 1);
					}
					func_310(iParam0, 16, 0, 0);
					func_275(iParam0, 0, 0);
				}
				break;
			case 65:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aggro", 24);
				}
				iParam0->f_107++;
				if (iParam0->f_411 != 9)
				{
					func_376(iParam0, &cVar0, 0, 1, 8);
				}
				else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
				{
					func_270(iParam0->f_3, "TAXI_WHAT_THE_HELL", iParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_420(iParam0, 16) > func_119(iParam0->f_411 == 0, 1f, 4f) && !iParam0->f_142) && (((iParam0->f_411 == 0 || iParam0->f_411 == 1) && !func_193()) || (iParam0->f_411 != 0 && iParam0->f_411 != 1)))
	{
		StringCopy(&cVar0, iParam0->f_143, 24);
		switch (func_378(iParam0))
		{
			case 142:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_376(iParam0, &cVar0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&cVar0, "_lvMe2", 24);
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_377(4, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 0:
				if (iParam0->f_411 == 9)
				{
					func_195(&(iParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_241(iParam0, 1, 1, 0, 0);
				break;
			case 1:
				func_310(iParam0, 16, 0, 0);
				func_241(iParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&cVar0, "_hail1", 24);
				cVar6 = { cVar0 };
				if (!func_24(iParam0->f_44, 128))
				{
					if ((iParam0->f_411 == 0 || iParam0->f_411 == 1) || iParam0->f_411 == 4)
					{
						func_353(&(iParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_376(iParam0, &cVar0, 0, 0, 8);
					}
				}
				func_310(iParam0, 16, 4f, 0);
				iParam0->f_141 = 1;
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 5:
				if (iParam0->f_411 == 7)
				{
					func_274("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_274("TAXI_OBJ_PICKUP", 7500, 1);
				}
				iParam0->f_141 = 1;
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 8:
				StringConCat(&cVar0, "_obj1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				if (iParam0->f_411 != 7 && iParam0->f_411 != 4)
				{
					if (!UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
					{
						iParam0->f_9 = func_372(iParam0->f_17, 1);
					}
					else if (UNK_0x4FA921CB56EDB0F8(iParam0->f_9) == 0)
					{
						UNK_0x7F010F50CE03A8AF(iParam0->f_9, 255);
						UNK_0x2F9282246F89FFD1(iParam0->f_9, iParam0->f_17);
						UNK_0x661342B9651D16E2(iParam0->f_9, true);
					}
				}
				func_241(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 9:
				if ((iParam0->f_101 == 1 || iParam0->f_411 == 2) || iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_gret1", 24);
				}
				else
				{
					switch (iParam0->f_102)
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
				func_190(&cVar0);
				if (iParam0->f_411 != 9)
				{
					func_376(iParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					func_270(iParam0->f_3, "TAXI_START", iParam0->f_145, 4);
				}
				if (iParam0->f_411 != 7 && iParam0->f_411 != 4)
				{
					if (!UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
					{
						iParam0->f_9 = func_372(iParam0->f_17, 1);
					}
					else if (UNK_0x4FA921CB56EDB0F8(iParam0->f_9) == 0)
					{
						UNK_0x7F010F50CE03A8AF(iParam0->f_9, 255);
						UNK_0x2F9282246F89FFD1(iParam0->f_9, iParam0->f_17);
						UNK_0x661342B9651D16E2(iParam0->f_9, true);
					}
				}
				func_241(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&cVar0, "_dest2", 24);
				func_371(iParam0, 33554432, cVar0, "", 1, 8);
				func_310(iParam0, 16, 0, 0);
				func_241(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 10:
				if (!func_193())
				{
					func_370(iParam0, 0);
					func_65(&(iParam0->f_44), 4);
					func_310(iParam0, 16, 0, 0);
					func_241(iParam0, 13, 0, 0, 0);
				}
				break;
			case 14:
				switch (iParam0->f_102)
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
				func_190(&cVar0);
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 15:
				if (func_420(iParam0, 11) > iParam0->f_36)
				{
					if (iParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant1", 24);
						func_190(&cVar0);
					}
					func_368(cVar0, uParam1);
					func_65(&(iParam0->f_81), 67108864);
					func_310(iParam0, 16, 0, 0);
					func_310(iParam0, 11, 0, 0);
					func_275(iParam0, 0, 0);
				}
				break;
			case 16:
				if (func_420(iParam0, 11) > iParam0->f_36)
				{
					if (iParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban2", 24);
					}
					else if (iParam0->f_411 == 1)
					{
						StringConCat(&cVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant2", 24);
						if (iParam0->f_411 != 6)
						{
							func_190(&cVar0);
						}
					}
					func_368(cVar0, uParam1);
					func_310(iParam0, 11, 0, 0);
					func_310(iParam0, 16, 0, 0);
					func_275(iParam0, 0, 0);
				}
				break;
			case 17:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant3", 24);
					func_190(&cVar0);
				}
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 18:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant4", 24);
				}
				func_190(&cVar0);
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 19:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant5", 24);
				}
				func_190(&cVar0);
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 20:
				StringConCat(&cVar0, "_dest2b", 24);
				func_190(&cVar0);
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_275(iParam0, 0, 0);
				func_65(&(iParam0->f_82), 262144);
				iParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&cVar0, "_seePt1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_241(iParam0, 24, 1, 0, 0);
				break;
			case 24:
				iParam0->f_417 = 24;
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 90:
				StringConCat(&cVar0, "_talk", 24);
				StringIntConCat(&cVar0, 1, 24);
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 1, 0, 8);
				break;
			case 89:
				switch (iParam0->f_102)
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
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&cVar0, "_ig1c", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 27:
				StringConCat(&cVar0, "_bTime", 24);
				if (iParam0->f_411 == 2)
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
					switch (iParam0->f_411)
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
				if (iParam0->f_411 == 2)
				{
					func_367(&(iParam0->f_90), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_367(&(iParam0->f_90), 3, &cVar0, &iVar15, 1, 0);
				}
				func_368(cVar0, uParam1);
				func_377(0, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 6, 0f, 1);
				func_275(iParam0, 0, 0);
				break;
			case 26:
				StringConCat(&cVar0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (iParam0->f_411)
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
				if (iParam0->f_411 == 2)
				{
					func_367(&(iParam0->f_89), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_367(&(iParam0->f_89), 3, &cVar0, &iVar15, 1, 0);
				}
				func_368(cVar0, uParam1);
				func_377(0, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 6, 0f, 1);
				func_275(iParam0, 0, 0);
				break;
			case 12:
				func_274("TAXI_OBJ_GYB", 3500, 1);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 11:
				if (iParam0->f_410 == 12 || iParam0->f_410 == 18)
				{
					func_274("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (iParam0->f_410 < 21)
				{
					func_274("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_274("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				iParam0->f_417 = 11;
				iParam0->f_141 = 1;
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 28:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_dest1B", 24);
						break;
					default:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
				}
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_241(iParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!func_24(iParam0->f_98, 268435456))
				{
					func_274("TAXI_OBJ_CYI_01", 7500, 1);
					func_65(&(iParam0->f_98), 268435456);
				}
				iParam0->f_417 = 29;
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 30:
				StringConCat(&cVar0, "_rCar1", 24);
				func_190(&cVar0);
				func_368(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 31:
				StringConCat(&cVar0, "_rCar2", 24);
				func_190(&cVar0);
				func_368(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 32:
				StringConCat(&cVar0, "_rCar3", 24);
				func_190(&cVar0);
				func_368(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 33:
				func_274("TAXI_OBJ_CYI_02", 7500, 1);
				iParam0->f_417 = 33;
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 34:
				if (!func_24(iParam0->f_82, 8192))
				{
					if (func_420(iParam0, 11) > iParam0->f_36)
					{
						StringConCat(&cVar0, "_airBr1", 24);
						func_190(&cVar0);
						if (iParam0->f_411 == 5)
						{
							func_368(cVar0, uParam1);
						}
						else
						{
							func_376(iParam0, &cVar0, 0, 0, 8);
						}
						func_65(&(iParam0->f_82), 8192);
						func_310(iParam0, 16, 0, 0);
						func_310(iParam0, 11, 0, 0);
						func_275(iParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!func_24(iParam0->f_82, 16384))
				{
					StringConCat(&cVar0, "_seeD1", 24);
					func_190(&cVar0);
					func_376(iParam0, &cVar0, 0, 0, 8);
					func_65(&(iParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!func_24(iParam0->f_82, 32768))
				{
					StringConCat(&cVar0, "_seeD2", 24);
					func_190(&cVar0);
					func_376(iParam0, &cVar0, 0, 0, 8);
					func_65(&(iParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&cVar0, "_done1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_241(iParam0, 46, 1, 0, 0);
				break;
			case 138:
				if (iParam0->f_101 == 1)
				{
					StringConCat(&cVar0, "_ftc1", 24);
				}
				else
				{
					switch (iParam0->f_102)
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
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_241(iParam0, 139, 1, 0, 0);
				iParam0->f_417 = 139;
				func_275(iParam0, 0, 0);
				break;
			case 139:
				func_274("TAXI_OBJ_FTC2", 7500, 1);
				iParam0->f_417 = 13;
				func_241(iParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&cVar0, "_dOff1", 24);
				cVar6 = { cVar0 };
				iVar14 = UNK_0x09AC81E49EA267F7(false, 120);
				if (!func_24(iParam0->f_82, 268435456))
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
					func_65(&(iParam0->f_82), 268435456);
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
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 39:
				StringConCat(&cVar0, "_bdOff1", 24);
				cVar6 = { cVar0 };
				iVar14 = UNK_0x09AC81E49EA267F7(false, 100);
				if (!func_24(iParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_65(&(iParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 41:
				StringConCat(&cVar0, "_dr2P", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 42:
				StringConCat(&cVar0, "_dr2N", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 40:
				StringConCat(&cVar0, "_dOff2", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_241(iParam0, 44, 1, 0, 0);
				break;
			case 44:
				func_274("TAXI_OBJ_CC2", 7500, 1);
				iParam0->f_417 = 44;
				func_275(iParam0, 0, 0);
				func_241(iParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&cVar0, "_dOff3", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_241(iParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!func_193())
				{
					func_274("TAXI_OBJ_CC3", 7500, 1);
					iParam0->f_417 = 45;
					func_275(iParam0, 0, 0);
					func_241(iParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				func_274("TAXI_OBJ_FTC3", 7500, 1);
				iParam0->f_417 = 46;
				func_275(iParam0, 0, 0);
				break;
			case 21:
				if (!func_24(iParam0->f_81, 1))
				{
					func_366(iParam0, 1, cVar0, "_sick1", 8);
					func_22(&(iParam0->f_81), 2);
				}
				else if (!func_24(iParam0->f_81, 2))
				{
					func_366(iParam0, 2, cVar0, "_sick2", 8);
					func_22(&(iParam0->f_81), 1);
				}
				func_377(12, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 22:
				if (!func_24(iParam0->f_82, 2097152))
				{
					StringConCat(&cVar0, "_nopke1", 24);
				}
				else if (!func_24(iParam0->f_82, 4194304))
				{
					StringConCat(&cVar0, "_nopke2", 24);
				}
				func_65(&(iParam0->f_81), 2097152);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_310(iParam0, 16, 0, 0);
				func_377(17, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 1);
				func_275(iParam0, 0, 0);
				break;
			case 61:
				StringConCat(&cVar0, "_Puke1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_377(18, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				break;
			case 63:
				StringConCat(&cVar0, "_PkStp2", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_377(20, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 62:
				StringConCat(&cVar0, "_PkStp1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_377(19, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				break;
			case 64:
				StringConCat(&cVar0, "_PukeR1", 24);
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 71:
				if (!func_24(iParam0->f_81, 4))
				{
					func_366(iParam0, 4, cVar0, "_turns1", 8);
				}
				else if (!func_24(iParam0->f_81, 8))
				{
					func_366(iParam0, 8, cVar0, "_turns2", 8);
				}
				else
				{
					func_366(iParam0, 8, cVar0, "_turns3", 8);
					func_22(&(iParam0->f_81), 4);
					func_22(&(iParam0->f_81), 8);
				}
				func_377(13, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 72:
				if (func_365(iParam0))
				{
					func_373(iParam0, cVar0, func_375(iParam0, 72));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
					{
						func_270(iParam0->f_3, "CRASH_GENERIC", iParam0->f_145, 4);
					}
				}
				else if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_carHt", 24);
					cVar6 = { cVar0 };
					func_353(&(iParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&cVar0, "_carHt1", 24);
					cVar6 = { cVar0 };
					if (iParam0->f_411 == 0)
					{
						func_353(&(iParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_353(&(iParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				func_377(2, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 73:
				StringConCat(&cVar0, "_genPnHi", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 75:
				if (!func_24(iParam0->f_83, 128))
				{
					StringConCat(&cVar0, "_nMiss1", 24);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 128);
					func_22(&(iParam0->f_83), 256);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 256))
				{
					StringConCat(&cVar0, "_nMiss2", 24);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 256);
					func_22(&(iParam0->f_83), 512);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 512))
				{
					StringConCat(&cVar0, "_nMiss3", 24);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 512);
					func_22(&(iParam0->f_83), 128);
					func_310(iParam0, 16, 0, 0);
				}
				func_275(iParam0, 0, 0);
				break;
			case 76:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(iParam0->f_83, 1))
				{
					StringConCat(&cVar0, "_air1", 24);
					if (bVar24)
					{
						func_190(&cVar0);
					}
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 1);
					func_22(&(iParam0->f_83), 2);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 2))
				{
					StringConCat(&cVar0, "_air2", 24);
					if (bVar24)
					{
						func_190(&cVar0);
					}
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 2);
					if (iParam0->f_411 == 0)
					{
						func_22(&(iParam0->f_83), 4);
					}
					else
					{
						func_22(&(iParam0->f_83), 1);
					}
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 4))
				{
					StringConCat(&cVar0, "_air3", 24);
					if (bVar24)
					{
						func_190(&cVar0);
					}
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 4);
					func_22(&(iParam0->f_83), 1);
					func_310(iParam0, 16, 0, 0);
				}
				func_377(11, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 79:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(iParam0->f_81, 4096))
				{
					func_371(iParam0, 4096, cVar0, "_sideW1", bVar24, 8);
				}
				else if (!func_24(iParam0->f_81, 8192))
				{
					func_371(iParam0, 8192, cVar0, "_sideW2", bVar24, 8);
				}
				func_377(15, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 80:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_24(iParam0->f_81, 16384))
				{
					func_371(iParam0, 16384, cVar0, "_opLne1", bVar24, 8);
				}
				else if (!func_24(iParam0->f_81, 32768))
				{
					func_371(iParam0, 32768, cVar0, "_opLne2", bVar24, 8);
				}
				func_377(14, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 83:
				if (iParam0->f_411 == 0)
				{
					if (!func_24(iParam0->f_82, 8))
					{
						func_364(iParam0, 8, cVar0, "_bored1", 8, 0);
					}
					else if (!func_24(iParam0->f_82, 16))
					{
						func_364(iParam0, 16, cVar0, "_bored2", 8, 0);
					}
					else if (!func_24(iParam0->f_82, 32))
					{
						func_364(iParam0, 32, cVar0, "_bored3", 8, 0);
					}
					func_377(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
					func_275(iParam0, 0, 0);
				}
				if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_good1", 24);
					cVar6 = { cVar0 };
					func_353(&(iParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					func_377(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
					func_310(iParam0, 16, 0, 0);
					func_275(iParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&cVar0, "_EtoB1", 24);
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_377(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 93:
				StringConCat(&cVar0, "_BtoE1", 24);
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_377(12, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 81:
				if (!func_24(iParam0->f_81, 65536))
				{
					func_371(iParam0, 65536, cVar0, "_runLit1", 1, 8);
				}
				else if (!func_24(iParam0->f_81, 131072))
				{
					func_371(iParam0, 131072, cVar0, "_runLit2", 1, 8);
				}
				func_275(iParam0, 0, 0);
				break;
			case 82:
				if (func_365(iParam0))
				{
					func_373(iParam0, cVar0, func_375(iParam0, 82));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
					{
						func_270(iParam0->f_3, "CAR_HIT_PED_DRIVEN", iParam0->f_145, 4);
					}
				}
				else if (!func_24(iParam0->f_83, 8))
				{
					StringConCat(&cVar0, "_hitR1", 24);
					func_190(&cVar0);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 8);
					func_22(&(iParam0->f_83), 16);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 16))
				{
					StringConCat(&cVar0, "_hitR2", 24);
					func_190(&cVar0);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 16);
					func_22(&(iParam0->f_83), 32);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 32))
				{
					StringConCat(&cVar0, "_hitR3", 24);
					func_190(&cVar0);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 32);
					if (iParam0->f_411 == 0)
					{
						func_22(&(iParam0->f_83), 64);
					}
					else
					{
						func_22(&(iParam0->f_83), 8);
					}
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 64))
				{
					StringConCat(&cVar0, "_hitR4", 24);
					func_190(&cVar0);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_65(&(iParam0->f_83), 64);
					func_22(&(iParam0->f_83), 8);
					func_310(iParam0, 16, 0, 0);
				}
				func_377(1, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 65:
				if (!func_193())
				{
					if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_aggro", 24);
					}
					func_376(iParam0, &cVar0, 0, 1, 8);
				}
				else
				{
					func_373(iParam0, cVar0, func_375(iParam0, 65));
					func_275(iParam0, 0, 0);
				}
				iParam0->f_107++;
				break;
			case 66:
				if (!func_193())
				{
					if (iParam0->f_411 == 4)
					{
						StringCopy(&cVar0, "tm6_shoot", 24);
					}
					else if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&cVar0, "_shoot", 24);
					}
					func_376(iParam0, &cVar0, 0, 1, 8);
				}
				else
				{
					func_373(iParam0, cVar0, func_375(iParam0, 66));
					func_275(iParam0, 0, 0);
				}
				iParam0->f_107++;
				break;
			case 13:
				if (iParam0->f_411 == 8)
				{
					if (!iParam0->f_109 && !func_193())
					{
						switch (iParam0->f_414)
						{
							case 3:
								StringConCat(&cVar0, "_warnC1", 24);
								func_376(iParam0, &cVar0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&cVar0, "_warnF1", 24);
								func_376(iParam0, &cVar0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&cVar0, "_far1", 24);
								func_376(iParam0, &cVar0, 0, 0, 8);
								func_377(21, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
								break;
							case 2:
								StringConCat(&cVar0, "_close1", 24);
								func_376(iParam0, &cVar0, 0, 0, 8);
								func_377(22, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
								break;
							case 10:
								StringConCat(&cVar0, "_hit1", 24);
								func_376(iParam0, &cVar0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&cVar0, "_good1", 24);
								cVar6 = { cVar0 };
								func_353(&(iParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
								func_377(23, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
								func_310(iParam0, 16, 0, 0);
								func_275(iParam0, 0, 0);
								break;
							case 9:
								if (!bLocal_64)
								{
									StringConCat(&cVar0, "_sBant1", 24);
									cVar6 = { cVar0 };
									func_376(iParam0, &cVar0, 0, 0, 8);
									func_310(iParam0, 16, 0, 0);
									func_310(iParam0, 11, 0, 0);
									func_275(iParam0, 0, 0);
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
									func_190(&cVar0);
									func_376(iParam0, &cVar0, 0, 0, 8);
									func_310(iParam0, 16, 0, 0);
									func_310(iParam0, 11, 0, 0);
									func_275(iParam0, 0, 0);
									bLocal_64 = false;
								}
								break;
							case 7:
								StringConCat(&cVar0, "_done1", 24);
								func_376(iParam0, &cVar0, 0, 0, 8);
								break;
						}
						func_241(iParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&cVar0, "_speed1", 24);
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_377(10, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 25:
				if (!func_24(iParam0->f_82, 1))
				{
					func_364(iParam0, 1, cVar0, "_close1", 8, 0);
				}
				else if (!func_24(iParam0->f_82, 2))
				{
					func_364(iParam0, 2, cVar0, "_close2", 8, 0);
				}
				else if (!func_24(iParam0->f_82, 4))
				{
					func_364(iParam0, 4, cVar0, "_close3", 8, 0);
				}
				func_275(iParam0, 0, 0);
				break;
			case 48:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_stop1", 24);
				}
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (iParam0->f_411 != 9)
				{
					func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
				{
					func_270(iParam0->f_3, "TAXI_STOPPED", iParam0->f_145, 4);
				}
				func_310(iParam0, 16, 0, 0);
				func_377(5, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 74:
				if (func_365(iParam0))
				{
					func_373(iParam0, cVar0, func_375(iParam0, 74));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
					{
						func_270(iParam0->f_3, "VEHICLE_FLIPPED", iParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&cVar0, "_roll1", 24);
					func_363(iParam0, cVar0, 8);
				}
				func_377(3, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 70:
				if (!func_24(iParam0->f_83, 1024))
				{
					func_65(&(iParam0->f_83), 1024);
					func_310(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv1", 24);
					func_190(&cVar0);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 2048))
				{
					func_65(&(iParam0->f_83), 2048);
					func_310(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv2", 24);
					func_190(&cVar0);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				else if (!func_24(iParam0->f_83, 4096))
				{
					func_65(&(iParam0->f_83), 4096);
					func_310(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv3", 24);
					func_190(&cVar0);
					func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				func_275(iParam0, 0, 0);
				break;
			case 69:
				if (!func_24(iParam0->f_82, 1024))
				{
					func_364(iParam0, 1024, cVar0, "_rvrs1", 8, 1);
					func_22(&(iParam0->f_82), 2048);
				}
				else if (!func_24(iParam0->f_82, 2048))
				{
					func_364(iParam0, 2048, cVar0, "_rvrs2", 8, 1);
				}
				func_275(iParam0, 0, 0);
				break;
			case 67:
				StringConCat(&cVar0, "_ofrd1", 24);
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_377(16, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 68:
				StringConCat(&cVar0, "_ofrdch1", 24);
				func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 49:
				StringConCat(&cVar0, "_losPol1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_241(iParam0, 52, 1, 0, 0);
				break;
			case 50:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_lsPo1", 24);
				}
				if (iParam0->f_411 != 9)
				{
					func_376(iParam0, &cVar0, 0, 0, 8);
				}
				else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
				{
					func_270(iParam0->f_3, "POLICE_PURSUIT_DRIVEN", iParam0->f_145, 4);
				}
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 51:
				if (func_365(iParam0))
				{
					if (iParam0->f_411 == 2)
					{
						StringConCat(&cVar0, "_copBa1", 24);
						cVar6 = { cVar0 };
						cVar6 = { cVar0 };
						func_376(iParam0, &cVar0, 0, 0, 8);
						func_241(iParam0, 52, 1, 0, 0);
						func_310(iParam0, 16, 0, 0);
					}
					else
					{
						if (iParam0->f_411 == 5 && iParam0->f_410 > 9)
						{
							StringConCat(&cVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&cVar0, "_copBa1", 24);
						}
						cVar6 = { cVar0 };
						func_376(iParam0, &cVar0, 0, 0, 8);
						func_310(iParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&cVar0, "_copBa1", 24);
					cVar6 = { cVar0 };
					func_353(&(iParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					func_310(iParam0, 16, 0, 0);
					func_275(iParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&cVar0, "_evdeP1", 24);
				func_377(8, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_310(iParam0, 10, 0f, 1);
				break;
			case 52:
				if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) >= 1)
				{
					func_274("TAXI_OBJ_POL", 7500, 1);
					iParam0->f_417 = 52;
				}
				func_275(iParam0, 0, 0);
				break;
			case 54:
				StringConCat(&cVar0, "_cpFz1", 24);
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 84:
				if (!func_24(iParam0->f_81, 262144))
				{
					func_371(iParam0, 262144, cVar0, "_rdCh1", 1, 8);
				}
				else if (!func_24(iParam0->f_81, 1048576))
				{
					if (iParam0->f_411 == 0 || iParam0->f_411 == 1)
					{
						func_371(iParam0, 1048576, cVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_371(iParam0, 1048576, cVar0, "_rdCh2", 0, 8);
					}
				}
				func_377(7, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 85:
				if (!func_24(iParam0->f_82, 67108864))
				{
					if (iParam0->f_418.f_6)
					{
						func_362(iParam0, 67108864, cVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_24(iParam0->f_82, 134217728))
				{
					func_362(iParam0, 134217728, cVar0, "_rdFv1", 0, 7);
				}
				func_377(6, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 86:
				StringConCat(&cVar0, "_rdneu1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&cVar0, "_rdtip1", 24);
				cVar6 = { cVar0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, iParam0->f_418.f_3, 24);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 100:
				func_274("TAXI_OBJ_GYB_2", 7500, 1);
				iParam0->f_417 = 100;
				func_275(iParam0, 0, 0);
				break;
			case 47:
				if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_horn", 24);
					func_376(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&cVar0, "_thank1", 24);
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_190(&cVar0);
				}
				func_65(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_376(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&cVar0, "_thank2", 24);
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_190(&cVar0);
				}
				func_65(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_376(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 103:
				if (iParam0->f_411 == 4)
				{
					StringConCat(&cVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_thank3", 24);
				}
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_190(&cVar0);
				}
				func_65(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_376(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 97:
				if (!func_24(iParam0->f_82, 65536))
				{
					if (func_420(iParam0, 11) > iParam0->f_36)
					{
						switch (iParam0->f_102)
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
						func_190(&cVar0);
						func_368(cVar0, uParam1);
						func_65(&(iParam0->f_82), 65536);
						func_310(iParam0, 16, 0, 0);
						func_310(iParam0, 11, 0, 0);
						func_275(iParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!func_24(iParam0->f_82, 131072))
				{
					if (func_420(iParam0, 11) > iParam0->f_36)
					{
						StringConCat(&cVar0, "_ccbb1", 24);
						func_190(&cVar0);
						func_368(cVar0, uParam1);
						func_65(&(iParam0->f_82), 131072);
						func_310(iParam0, 16, 0, 0);
						func_310(iParam0, 11, 0, 0);
						func_275(iParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!func_24(iParam0->f_82, 8388608))
				{
					StringConCat(&cVar0, "_close1", 24);
					func_65(&(iParam0->f_82), 8388608);
				}
				else if (!func_24(iParam0->f_82, 16777216))
				{
					StringConCat(&cVar0, "_close2", 24);
					func_65(&(iParam0->f_82), 16777216);
				}
				else if (!func_24(iParam0->f_82, 33554432))
				{
					StringConCat(&cVar0, "_close3", 24);
					func_65(&(iParam0->f_82), 33554432);
				}
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 58:
				if (iParam0->f_411 == 6)
				{
					StringConCat(&cVar0, "_kill1", 24);
					cVar6 = { cVar0 };
					func_353(&(iParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_190(&cVar0);
					func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				else if (iParam0->f_411 == 8)
				{
					StringConCat(&cVar0, "_cheat1", 24);
					func_376(iParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&cVar0, "_kill1", 24);
					func_376(iParam0, &cVar0, 0, 0, 8);
				}
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 95:
				StringConCat(&cVar0, "_wndw2", 24);
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 94:
				StringConCat(&cVar0, "_wndw0", 24);
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 96:
				StringConCat(&cVar0, "_wndw1", 24);
				func_368(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 113:
				StringConCat(&cVar0, "_csite1", 24);
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&cVar0, "_fair1", 24);
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&cVar0, "_AlCk1", 24);
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 116:
				StringConCat(&cVar0, "_eggG1", 24);
				cVar6 = { cVar0 };
				func_353(&(iParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_352(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 114:
				StringConCat(&cVar0, "_goons1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&cVar0, "_oRun1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&cVar0, "_gotG1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&cVar0, "_getA1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&cVar0, "_gnawy1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&cVar0, "_grl1", 24);
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&cVar0, "_figt1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&cVar0, "_gEgg1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&cVar0, "_gEgg3", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&cVar0, "_gEgg2", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&cVar0, "_gLeav1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&cVar0, "_aKill1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&cVar0, "_gHelp1", 24);
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&cVar0, "_gDest1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_241(iParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&cVar0, "_gKO1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&cVar0, "_gThank1", 24);
				func_65(&(iParam0->f_81), 2097152);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&cVar0, "_gDriv1", 24);
				func_190(&cVar0);
				func_368(cVar0, uParam1);
				func_65(&(iParam0->f_81), 67108864);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 60:
				StringConCat(&cVar0, "_cash1", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 105:
				if (!func_24(iParam0->f_81, 33554432) && iParam0->f_411 != 9)
				{
					func_371(iParam0, 33554432, cVar0, "_noPay1", 1, 8);
				}
				else if (iParam0->f_411 == 9)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
					{
						func_270(iParam0->f_3, "TAXI_NO_PAY", iParam0->f_145, 4);
					}
				}
				func_241(iParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&cVar0, "_foot", 24);
				func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 107:
				if (!func_24(iParam0->f_81, 268435456))
				{
					func_371(iParam0, 268435456, cVar0, "_kPay1", 1, 8);
				}
				func_241(iParam0, 52, 1, 0, 0);
				break;
			case 108:
				func_274("TAXI_OBJ_RUNOUT", 7500, 1);
				iParam0->f_417 = 108;
				func_275(iParam0, 0, 0);
				break;
			case 109:
				if (!func_24(iParam0->f_81, 4194304))
				{
					if (iParam0->f_411 == 2 || iParam0->f_411 == 6)
					{
						func_371(iParam0, 4194304, cVar0, "_mPay1", 0, 8);
					}
					else if (iParam0->f_411 == 9)
					{
						if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
						{
							func_270(iParam0->f_3, "APOLOGY_NO_TROUBLE", iParam0->f_145, 4);
						}
					}
					else
					{
						func_371(iParam0, 4194304, cVar0, "_mPay1", 1, 8);
					}
				}
				func_241(iParam0, 111, 1, 0, 0);
				break;
			case 111:
				func_274("TAXI_OBJ_GETRUN", 7500, 1);
				iParam0->f_417 = 111;
				func_275(iParam0, 0, 0);
				break;
			case 110:
				StringConCat(&cVar0, "_runoff", 24);
				func_195(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_275(iParam0, 0, 0);
				break;
			case 141:
				if (!func_24(iParam0->f_81, 16777216))
				{
					func_371(iParam0, 16777216, cVar0, "_ret1", 1, 8);
				}
				func_275(iParam0, 0, 0);
				break;
			case 88:
				func_274("TAXI_TIEFLEE", 7500, 1);
				func_275(iParam0, 0, 0);
				break;
			case 57:
				if (!func_24(iParam0->f_98, 536870912))
				{
					func_274("TAXI_OBJ_CYI_1B", 7500, 1);
					func_65(&(iParam0->f_98), 536870912);
				}
				iParam0->f_417 = 57;
				func_275(iParam0, 0, 0);
				break;
			case 104:
				StringConCat(&cVar0, "_joke1", 24);
				func_190(&cVar0);
				func_376(iParam0, &cVar0, 0, 0, 8);
				break;
			case 136:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_wronglz", 24);
				}
				else if (iParam0->f_116)
				{
					StringConCat(&cVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_wrong", 24);
				}
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_275(iParam0, 0, 0);
				break;
			case 140:
				StringConCat(&cVar0, "_shout", 24);
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_275(iParam0, 0, 0);
				break;
			case 135:
				if (iParam0->f_411 == 4)
				{
					StringCopy(&cVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&cVar0, "_jack", 24);
				}
				func_376(iParam0, &cVar0, 0, 0, 8);
				func_275(iParam0, 0, 0);
				break;
			case 133:
				StringConCat(&cVar0, "_getCar", 24);
				func_376(iParam0, &cVar0, 1, 0, 8);
				func_241(iParam0, 134, 1, 0, 0);
				break;
			case 134:
				func_274("TX_VIP", 7500, 0);
				iParam0->f_417 = 134;
				func_241(iParam0, 0, 0, 0, 0);
				func_275(iParam0, 0, 0);
				break;
		}
	}
}

void func_362(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_65(&(iParam0->f_82), iParam1);
	func_310(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_190(&cParam2);
	}
	func_195(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

void func_363(int iParam0, char[24] cParam1, int iParam7)
{
	vector3 vVar0[24];

	cVar0 = { cParam1 };
	if (!func_24(iParam0->f_82, 64))
	{
		func_65(&(iParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(iParam0->f_82, 128))
	{
		func_65(&(iParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, UNK_0x09AC81E49EA267F7(true, 3), 24);
	}
	func_352(&(iParam0->f_244), iParam0->f_144, &cParam1, &cVar0, iParam7, 0, 0);
	func_310(iParam0, 16, 0, 0);
}

void func_364(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_65(&(iParam0->f_82), iParam1);
	func_310(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if ((((iParam0->f_411 == 1 || iParam0->f_411 == 0) || iParam0->f_411 == 5) || iParam0->f_411 == 8) || iParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_190(&cParam2);
		}
	}
	func_195(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

bool func_365(int iParam0)
{
	if ((((((iParam0->f_411 == 2 || iParam0->f_411 == 3) || iParam0->f_411 == 4) || iParam0->f_411 == 5) || iParam0->f_411 == 6) || iParam0->f_411 == 7) || iParam0->f_411 == 8)
	{
		return true;
	}
	return false;
}

void func_366(int iParam0, int iParam1, char[12] cParam2, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9)
{
	func_65(&(iParam0->f_81), iParam1);
	func_310(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	func_195(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

void func_367(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_289(*uParam0, iVar1))
		{
			func_66(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_190(sParam2);
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

void func_368(char[24] cParam0, var uParam6)
{
	int iVar0;

	iVar0 = func_369(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_65(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_369(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (UNK_0xEA6BC48857E0AC4C(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_370(int iParam0, bool bParam1)
{
	switch (iParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_274("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_274("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		case 2:
			if (bParam1)
			{
				func_274("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_274("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_274("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_274("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		case 6:
			if (bParam1)
			{
				func_274("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		case 7:
			if (bParam1)
			{
				func_274("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_274("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				func_274("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_274("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				func_274("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		iParam0->f_139 = 1;
	}
}

void func_371(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_65(&(iParam0->f_81), iParam1);
	func_310(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_190(&cParam2);
	}
	func_195(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

int func_372(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_119(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_373(int iParam0, char[12] cParam1, var uParam4, var uParam5, var uParam6, char* sParam7)
{
	func_310(iParam0, 16, 0, 0);
	func_310(iParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
	{
		UNK_0x9A8EDAF1C0D299FF(iParam0->f_3, &cParam1, func_374(iParam0));
	}
}

char* func_374(int iParam0)
{
	char* sVar0;

	switch (iParam0->f_411)
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

char* func_375(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (iParam0->f_411)
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
			switch (iParam0->f_411)
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
			switch (iParam0->f_411)
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
			switch (iParam0->f_411)
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
					if (iParam0->f_115)
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
			switch (iParam0->f_411)
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
					if (iParam0->f_115)
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
			switch (iParam0->f_411)
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
					if (iParam0->f_115)
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

int func_376(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_310(iParam0, 16, 0, 0);
	if (bParam3)
	{
		func_310(iParam0, 17, 0f, 1);
	}
	func_275(iParam0, iParam2, 0);
	return func_195(&(iParam0->f_244), iParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_377(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_24(*uParam2, 2))
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
		if (func_24(*uParam2, 1073741824 /* Float: 2f */))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_24(*uParam2, 4))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_24(*uParam2, 512))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_24(*uParam2, 16))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_24(*uParam2, 64))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_24(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_24(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_24(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_24(*uParam2, 8192))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_24(*uParam2, 16384))
		{
			if (func_24(*uParam2, 4194304))
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
		if (func_24(*uParam2, 32768))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_24(*uParam2, 65536))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_24(*uParam2, 131072))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_24(*uParam2, 262144))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_24(*uParam2, 524288))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_24(*uParam2, 1048576))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_24(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_24(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_24(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_24(*uParam2, 67108864))
		{
			if (func_24(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_24(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_24(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_24(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_24(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_378(int iParam0)
{
	return iParam0->f_416;
}

bool func_379(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (func_224(bParam0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_380(int iParam0)
{
	if (func_193())
	{
		return true;
	}
	if (func_179(iParam0, 17))
	{
		return true;
	}
	if (func_179(iParam0, 14))
	{
		return true;
	}
	if (func_222(iParam0))
	{
		return true;
	}
	return false;
}

bool func_381(int iParam0, var uParam1)
{
	return ((*uParam1 == -1 && iParam0->f_412 == 0) && !func_179(iParam0, 9));
}

bool func_382(var uParam0)
{
	return uParam0->f_117;
}

void func_383(int iParam0)
{
	int iVar0;

	if (iParam0->f_410 >= 5)
	{
		if (UNK_0xC844350D5D58C99A(iParam0->f_4))
		{
			if (Local_343 > 0 && !func_289(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_289(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(iParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_289(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_66(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = UNK_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_23(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_289(Local_343.f_1[iVar0 /*4*/], 4) && !func_289(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(iParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_66(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_343(iParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_384(var uParam0, var uParam1, bool bParam2)
{
	if (!func_24(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!UNK_0xEA6BC48857E0AC4C(&(uParam0->f_124)) && func_193())
				{
					*uParam1++;
				}
				break;
			case 1:
				if (!func_193())
				{
					StringCopy(&(uParam0->f_124), func_212(), 24);
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

int func_385(int iParam0, var uParam1)
{
	var uVar0;

	if (!func_179(iParam0, 27))
	{
		func_218(iParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_109 && func_420(iParam0, 27) > 5f)
	{
		if (func_412(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_310(iParam0, 27, 0, 0);
			func_310(iParam0, 10, 0, 0);
			func_410(iParam0, &uVar0, uParam1);
		}
		func_407(iParam0);
	}
	if (iParam0->f_410 >= 3 && iParam0->f_410 <= 5)
	{
		func_386(iParam0);
	}
	if ((((!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()) && (UNK_0x9F4FE516EAACCFC5(*iParam0) && !UNK_0xFBB4F23D534EB790(*iParam0))) && (UNK_0x9F4FE516EAACCFC5(iParam0->f_1) && !UNK_0xFBB4F23D534EB790(iParam0->f_1))) && !UNK_0xD17F06053799A7CA()) && !func_193())
	{
		if (func_420(iParam0, 26) > 10f)
		{
			func_185(iParam0, 26, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
		}
	}
	else if (func_179(iParam0, 26))
	{
		func_185(iParam0, 26, 0);
	}
	return 0;
}

void func_386(int iParam0)
{
	if (!func_406(iParam0->f_429))
	{
		iParam0->f_429 = func_405();
		func_396(&(iParam0->f_429), 0, 0, UNK_0x09AC81E49EA267F7(4, 7), 0, 0, 0);
	}
	else if (func_387(iParam0->f_429))
	{
		func_343(iParam0, "Player took too long to make pickup", 9);
	}
}

int func_387(bool bParam0)
{
	return func_388(func_405(), bParam0);
}

int func_388(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_406(bParam1) || !func_406(bParam0))
	{
		return 1;
	}
	iVar0 = func_394(bParam0);
	iVar1 = func_394(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_393(bParam0);
	iVar1 = func_393(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_392(bParam0);
	iVar1 = func_392(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_391(bParam0);
	iVar1 = func_391(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_390(bParam0);
	iVar1 = func_390(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_389(bParam0);
	iVar1 = func_389(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_389(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_390(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_391(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_392(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_393(bool bParam0)
{
	return (bParam0 && 15);
}

int func_394(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_395(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_395(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_394(*uParam0);
	bVar1 = func_393(*uParam0);
	iVar2 = func_392(*uParam0);
	iVar3 = func_391(*uParam0);
	iVar4 = func_390(*uParam0);
	iVar5 = func_389(*uParam0);
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
	iVar6 = func_404(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_404(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_397(uParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_397(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_403(uParam0, iParam1);
	func_402(uParam0, iParam2);
	func_401(uParam0, iParam3);
	func_400(uParam0, bParam5);
	func_399(uParam0, iParam4);
	func_398(uParam0, iParam6);
}

void func_398(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_399(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_393(*uParam0);
	iVar1 = func_394(*uParam0);
	if (iParam1 < 1 || iParam1 > func_404(bVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_400(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || bParam1);
}

void func_401(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_402(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_403(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_404(bool bParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (bParam0)
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

bool func_405()
{
	var uVar0;

	func_403(&uVar0, UNK_0x4460E481B9E33ADA());
	func_402(&uVar0, UNK_0x8D199E381D262EEF());
	func_401(&uVar0, UNK_0xD8A54335F18763BA());
	func_399(&uVar0, UNK_0x972A296334C9D57B());
	func_400(&uVar0, UNK_0x118229AD063C3C1D());
	func_398(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

bool func_406(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (bParam0 == -15)
	{
		return false;
	}
	iVar0 = func_389(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_390(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_391(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_394(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_393(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_392(bParam0);
	if (iVar5 < 1 || iVar5 > func_404(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_407(int iParam0)
{
	var uVar0;

	if (iParam0->f_410 < 7 && !iParam0->f_138)
	{
		if (((iParam0->f_411 == 9 && func_409()) && !func_220(iParam0)) || ((iParam0->f_411 != 9 && func_279(iParam0, 1)) && !func_220(iParam0)))
		{
			uVar0 = func_408(iParam0->f_4);
			UNK_0x82692E8F6A0D7A22(&uVar0);
			iParam0->f_4 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			UNK_0x73270B3C9CC833FD(iParam0->f_4, true, 0);
			func_182(iParam0);
			func_172(iParam0, 0);
		}
	}
}

var func_408(var uParam0)
{
	return uParam0;
}

bool func_409()
{
	bool bVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
				{
					if (UNK_0x4906F8A34E9F4814(bVar0, func_21()))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_410(int iParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_411(iParam0, 0, 1))
			{
				func_343(iParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (func_411(iParam0, 0, 4))
			{
				func_343(iParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (func_411(iParam0, 0, 8))
			{
				func_343(iParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (func_411(iParam0, 1, 1))
			{
				func_343(iParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (func_411(iParam0, 0, 1))
			{
				func_343(iParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!func_24(*uParam2, 2) && func_166(iParam0))
			{
				func_343(iParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

bool func_411(int iParam0, bool bParam1, int iParam2)
{
	if (((iParam0->f_107 >= 2 && iParam0->f_410 < 29) || iParam0->f_410 <= 5) || (bParam1 && !iParam0->f_114))
	{
		return true;
	}
	else if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (!UNK_0x03068588A1FCED1A(iParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_241(iParam0, 66, 1, 0, 1);
			}
			else
			{
				func_241(iParam0, 65, 1, 0, 1);
			}
		}
	}
	return false;
}

bool func_412(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x16F2683693E537C9();
	if (!UNK_0x437347B10A200C4B(bVar0, 0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (!func_24(*uParam2, 1))
		{
			if (func_418(bParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
		if (!func_24(*uParam2, 2))
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
		if (!func_24(*uParam2, 4))
		{
			if (func_416(bVar0, bParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
		if (!func_24(*uParam2, 8))
		{
			if (func_415(bVar0, bParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_24(*uParam2, 128);
		if (bParam4)
		{
			if (func_413(bParam0, bParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_24(*uParam2, 16))
		{
			if (func_413(bParam0, bParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (bParam7 && UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
		{
			*uParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_413(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;

	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = UNK_0x7F6DC62EA9922664(bParam0);
			bLocal_79 = true;
		}
		iLocal_81 = UNK_0x7F6DC62EA9922664(bParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		bVar0 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return true;
				}
			}
		}
		if (bLocal_79)
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		return true;
	}
	if (!bParam3)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar1, 1))
			{
				return true;
			}
		}
	}
	if (bParam4)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0x36646919F20EAFFC(bParam0))
			{
				if (UNK_0x710D117BA581D7D2(bParam0) == UNK_0x16F2683693E537C9())
				{
					return true;
				}
			}
		}
	}
	if (bParam5)
	{
		if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x5A91F08DF773C39D(bParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
			}
		}
	}
	if (UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xC021B60D52071374(bParam0))
		{
			return true;
		}
	}
	if (func_414(UNK_0x16F2683693E537C9(), bParam0))
	{
		return true;
	}
	if (bParam2)
	{
		if (UNK_0x869EFD0BC0868856(bParam0) && func_170(bParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(bParam0, 0)))
			{
				return true;
			}
		}
		else if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bParam0))
		{
			return true;
		}
		if (!UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam1, UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_414(bool bParam0, bool bParam1)
{
	int iVar0;

	UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (UNK_0x168558745A6AC21E(bParam0))
		{
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(bParam1, true)) < 2.5f)
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, bParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_415(bool bParam0, bool bParam1, var uParam2)
{
	if (UNK_0x03A10A5707B2BB1F(bParam0, 4))
	{
		if (UNK_0x168558745A6AC21E(bParam0) && !UNK_0x52AE17073D025311(bParam0))
		{
			if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_416(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	bool bVar3;

	bVar3 = false;
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	if (UNK_0xD3DCEC81D13AAFB1(vVar0, 4f, true))
	{
		return true;
	}
	if (UNK_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return true;
	}
	if (UNK_0x03A10A5707B2BB1F(bParam0, 2))
	{
		if (UNK_0x168558745A6AC21E(bParam0))
		{
			if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(UNK_0x940C1429253D3B1B(bParam1), bParam0, 120f) && UNK_0xF649DD3BF44195C7(bParam1, bParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (UNK_0x405E212DDE472467(UNK_0x940C1429253D3B1B(bParam1), 0))
			{
				bVar3 = UNK_0x6937EA2286828455(UNK_0x940C1429253D3B1B(bParam1), 0);
			}
			if (UNK_0xFB275CE013F3A38C(bParam0) || func_417(bVar3))
			{
				if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (UNK_0x7069CC4DE1EA3FAA(UNK_0x940C1429253D3B1B(bParam1), bParam0, 120f) && UNK_0xF649DD3BF44195C7(bParam1, bParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (UNK_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_417(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0xA30B8362589C124A(bParam0, -1, 0) != 0)
			{
				if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_171(UNK_0x16F2683693E537C9(), bParam0, 1) < 40f)
						{
							if (UNK_0x38AF5DD0BDDE9545(UNK_0xD803B885F5E47A62(), &bVar1))
							{
								if ((UNK_0xE2F1E99DD161A861(bVar1) && UNK_0x96A5FE5834B81CE7(bVar1) == bParam0) || (UNK_0xEC560E589DF8370E(bVar1) && UNK_0x940C1429253D3B1B(bVar1) == UNK_0xA30B8362589C124A(bParam0, -1, 0)))
								{
									if ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && UNK_0x06F8112AA79C53D9(0, 24)) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x06F8112AA79C53D9(0, 69)))
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

bool func_418(bool bParam0, var uParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 90f))
				{
					if (func_170(bParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = UNK_0x1C0640BA9A7327B3();
						}
						else if ((UNK_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

void func_419(var uParam0)
{
	if (!func_24(uParam0->f_98, 2))
	{
		if (UNK_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (func_10(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				UNK_0x28F5E4DA506AC0CA(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_65(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_420(int iParam0, int iParam1)
{
	if (!func_16(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_219(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_107(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_421()
{
	func_422(&Local_410);
	func_439();
}

void func_422(int iParam0)
{
	func_11(0, iParam0, 1);
	if (iParam0->f_411 != 9)
	{
		func_440(2);
	}
}

bool func_423(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return true;
	}
	if ((((!func_193() && func_420(iParam0, 3) > 1f) || iParam0->f_415 == 18) || iParam0->f_415 == 14) || iParam0->f_415 == 15)
	{
		if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
		{
			if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
			{
				if (UNK_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 0))
				{
					if (func_64(iParam0) == 0 || func_289(iParam0->f_85, 32))
					{
						if (!UNK_0x8B38C0DAEEDB5F9C(iParam0->f_4))
						{
							func_154(iParam0, 4160, 0);
						}
						else
						{
							func_154(iParam0, 0, 0);
						}
						return true;
					}
					else
					{
						func_154(iParam0, 0, 0);
						return true;
					}
				}
				else
				{
					func_154(iParam0, 0, 0);
					return true;
				}
			}
			else
			{
				func_154(iParam0, 0, 0);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
	{
	}
	return false;
}

void func_424(int iParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
	{
		UNK_0x142CC44DB769B57E(&(iParam0->f_8));
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
	{
		UNK_0x142CC44DB769B57E(&(iParam0->f_9));
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
	{
		UNK_0x142CC44DB769B57E(&(iParam0->f_10));
	}
}

bool func_425(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return true;
	}
	return false;
}

void func_426()
{
	func_428(&Local_410, 1);
	Local_410.f_410 = 0;
	func_427(&Local_410, 2, 4);
	Local_410.f_23 = { 31.3927f, 229.9863f, 108.45f };
	Local_410.f_33 = 340.5f;
	Local_410.f_26 = { -1239.992f, -902.0005f, 10.8342f };
	Local_410.f_34 = 305.2155f;
	Local_410.f_29 = { -1224.093f, -907.3411f, 11.3263f };
}

void func_427(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_58 = iParam1;
	iParam0->f_59 = iParam2;
}

void func_428(int iParam0, int iParam1)
{
	func_438(1);
	func_184();
	func_7(&(iParam0->f_244));
	func_437(iParam0);
	iParam0->f_411 = iParam1;
	if (!func_24(Global_111638.f_19092, 4))
	{
		func_65(&(Global_111638.f_19092), 4);
	}
	func_432(iParam0);
	func_430(iParam0);
	UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
	iParam0->f_102 = (func_429(iParam0->f_411) % iParam0->f_101);
	iParam0->f_80 = 0;
	iParam0->f_428 = func_2();
	UNK_0xD7992BEF7A9D109E("TAXI", 2);
}

int func_429(int iParam0)
{
	return Global_111638.f_19092.f_39[iParam0];
}

void func_430(int iParam0)
{
	switch (func_64(iParam0))
	{
		case 0:
			func_431(iParam0, "EXC", "Txm2", "Txm2aud");
			iParam0->f_101 = 2;
			break;
		case 1:
			func_431(iParam0, "TIE", "Txm1", "txm1aud");
			iParam0->f_101 = 1;
			break;
		case 2:
			func_431(iParam0, "DED", "Txm3", "Txm3aud");
			iParam0->f_101 = 1;
			break;
		case 3:
			func_431(iParam0, "GYB", "Txm12", "Txm12au");
			iParam0->f_101 = 2;
			break;
		case 4:
			func_431(iParam0, "TTB", "Txm6", "Txm6aud");
			iParam0->f_101 = 2;
			break;
		case 5:
			func_431(iParam0, "CUI", "Txm8", "Txm8aud");
			iParam0->f_101 = 1;
			break;
		case 6:
			func_431(iParam0, "GYN", "Txm9", "Txm9aud");
			iParam0->f_101 = 1;
			break;
		case 7:
			func_431(iParam0, "TCC", "Txm10", "Txm10au");
			iParam0->f_101 = 2;
			break;
		case 8:
			func_431(iParam0, "TFC", "Txm4", "Txm4aud");
			iParam0->f_101 = 1;
			break;
		case 9:
			func_431(iParam0, "PRO", "txmP", "TxmPaud");
			iParam0->f_101 = 1;
			break;
	}
}

void func_431(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	iParam0->f_122 = sParam1;
	iParam0->f_143 = sParam2;
	iParam0->f_144 = sParam3;
}

void func_432(int iParam0)
{
	int iVar0;

	switch (iParam0->f_411)
	{
		case 0:
			func_436(iParam0, 3);
			func_435(iParam0, 14);
			break;
		case 1:
			func_436(iParam0, 14);
			func_435(iParam0, 8);
			break;
		case 2:
			func_436(iParam0, 8);
			func_435(iParam0, 7);
			break;
		case 3:
			func_436(iParam0, 15);
			func_435(iParam0, 6);
			break;
		case 4:
			func_436(iParam0, 0);
			func_435(iParam0, 3);
			break;
		case 5:
			func_436(iParam0, 6);
			func_435(iParam0, 7);
			break;
		case 6:
			func_436(iParam0, 8);
			func_435(iParam0, 15);
			break;
		case 7:
			func_436(iParam0, 8);
			func_435(iParam0, 14);
			break;
		case 8:
			func_436(iParam0, 7);
			func_435(iParam0, 15);
			break;
		case 9:
			func_436(iParam0, UNK_0x09AC81E49EA267F7(false, 17));
			iVar0 = func_434((iParam0->f_418.f_2 + UNK_0x09AC81E49EA267F7(true, 17)), 0, 16);
			func_435(iParam0, iVar0);
			func_433(iParam0);
			iParam0->f_418.f_7 = 1;
			iParam0->f_418.f_8 = 1;
			break;
	}
}

void func_433(int iParam0)
{
	switch (iParam0->f_418.f_2)
	{
		case 2:
		case 8:
			iParam0->f_418.f_3 = 1;
			break;
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			iParam0->f_418.f_3 = 2;
			break;
		case 4:
		case 10:
			iParam0->f_418.f_3 = 3;
			break;
		case 1:
		case 6:
		case 13:
			iParam0->f_418.f_3 = 4;
			break;
		case 11:
			iParam0->f_418.f_3 = 5;
			break;
		case 12:
		case 14:
			iParam0->f_418.f_3 = 6;
			break;
		case 7:
			iParam0->f_418.f_3 = 7;
			break;
	}
}

int func_434(int iParam0, int iParam1, int iParam2)
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

void func_435(int iParam0, int iParam1)
{
	iParam0->f_418.f_1 = iParam1;
}

void func_436(int iParam0, int iParam1)
{
	iParam0->f_418.f_2 = iParam1;
}

void func_437(int iParam0)
{
	iParam0->f_2 = UNK_0x16F2683693E537C9();
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_14 = { func_43() };
	iParam0->f_17 = { func_43() };
	iParam0->f_35 = 0f;
	iParam0->f_76 = 0;
	iParam0->f_49 = 0;
	iParam0->f_109 = 0;
	iParam0->f_36 = 0f;
	iParam0->f_410 = 2;
	iParam0->f_123 = "TRS_FINDING_LOCATION";
	func_185(iParam0, 32, 0);
}

void func_438(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, UNK_0xBB0808A181D4745C(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_439()
{
	if (UNK_0xB4AE0788C1587752(bLocal_884))
	{
		UNK_0x8D17794CE3273D70(bLocal_884);
	}
	if (iLocal_853 != 0)
	{
		UNK_0xF7E25143642732EA(iLocal_853, 0);
		iLocal_853 = 0;
	}
	UNK_0x8C26F31DFF77D124();
	UNK_0x10FAF14A60A0DBE1();
}

void func_440(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

