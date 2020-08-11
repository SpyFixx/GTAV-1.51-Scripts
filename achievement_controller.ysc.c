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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = false;
	int iLocal_71 = 0;
	bool bLocal_72 = false;
#endregion

void __EntryFunction__()
{
	bool bVar0;

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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_61 = 1000;
	iLocal_62 = 3333;
	fLocal_63 = 0f;
	bLocal_70 = true;
	UNK_0xB57F88F0123F4C38();
	if (UNK_0x2EBF608FFE6CA406(32))
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	iLocal_56 = UNK_0x1C0640BA9A7327B3();
	iLocal_65 = 0;
	func_168(iLocal_66);
	func_167();
	func_165(&Global_4270065);
	func_164(&Global_4270065, 1);
	func_162(&uLocal_67);
	while (true)
	{
		if (Global_31017 != iLocal_65)
		{
			if (iLocal_65 == 0 && Global_31017 != 0)
			{
				if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
				{
					func_161("CHEAT_TROPHIE", -1);
				}
				else
				{
					func_161("CHEAT_ACHIEVE", -1);
				}
			}
			if (iLocal_65 != 0 && Global_31017 == 0)
			{
			}
		}
		iLocal_65 = Global_31017;
		if (!func_160(14))
		{
			if (!UNK_0x5E109EC687D2605A(24))
			{
				func_151();
			}
			if (!UNK_0x5E109EC687D2605A(25))
			{
				func_149();
			}
			if (Global_30777)
			{
				if (!UNK_0x5E109EC687D2605A(12))
				{
					bVar0 = func_134(1);
					if (bVar0 > 0)
					{
						func_133(12, bVar0);
						UNK_0xCDC520E5E48E63D9(joaat("NUM_GOLD_MEDALS_OBTAINED"), bVar0, 1);
					}
					if (bVar0 >= 70)
					{
						func_127(12, 1);
					}
				}
				Global_30777 = 0;
			}
			if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					iLocal_66++;
					if (UNK_0x1C0640BA9A7327B3() > iLocal_56)
					{
						func_116(0);
						iLocal_56 = (UNK_0x1C0640BA9A7327B3() + iLocal_61);
					}
					if (UNK_0x1C0640BA9A7327B3() > iLocal_57)
					{
						if (!UNK_0x5E109EC687D2605A(14) || iLocal_64 == 1)
						{
							if (func_115(53))
							{
								func_114();
							}
						}
						iLocal_57 = (UNK_0x1C0640BA9A7327B3() + iLocal_62);
					}
				}
			}
			func_106(&Global_4270065);
			func_1();
		}
		else
		{
			func_106(&Global_4270065);
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;

	if (!func_105(&Global_4270065))
	{
		return;
	}
	if (!Global_76622)
	{
		if (bLocal_72)
		{
			bLocal_72 = false;
		}
		return;
	}
	if (!func_102())
	{
		return;
	}
	if (bLocal_70)
	{
		if (!func_100(3, -1))
		{
			return;
		}
		if (!func_100(5, -1))
		{
			return;
		}
	}
	if (bLocal_72)
	{
		return;
	}
	bVar0 = UNK_0x1EC50DC4988494D6(&iVar1);
	if (iVar1 == -1 && iLocal_71 == 0)
	{
	}
	if (bVar0 && iVar1 == 0)
	{
		func_99();
		bLocal_72 = true;
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	int iVar0;

	if (!UNK_0x5E109EC687D2605A(33))
	{
		if (func_96())
		{
			func_127(33, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(29))
	{
		if (func_92(&uLocal_67) > 5f)
		{
			func_19(UNK_0x16F2683693E537C9());
			func_162(&uLocal_67);
		}
	}
	iVar0 = func_17(func_18(-1), 0);
	if (iVar0 >= 100)
	{
		if (!UNK_0x5E109EC687D2605A(36))
		{
			func_127(36, 1);
		}
	}
	if (iVar0 >= 50)
	{
		if (!UNK_0x5E109EC687D2605A(35))
		{
			func_127(35, 1);
		}
	}
	if (iVar0 >= 25)
	{
		if (!UNK_0x5E109EC687D2605A(34))
		{
			func_127(34, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(37))
	{
		func_15(0);
	}
	if (!UNK_0x5E109EC687D2605A(38))
	{
		if (func_14(joaat("MPPLY_TOTAL_CUSTOM_RACES_WON")) >= 5)
		{
			func_127(38, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(39))
	{
		if (func_13(48, -1) >= 10)
		{
			func_127(39, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(40))
	{
		if (func_13(52, -1) > 0)
		{
			func_127(40, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(41))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_2225.f_18, true))
		{
			func_127(41, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(43))
	{
		if (func_12(755, -1, 0) >= 30)
		{
			func_127(43, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(44))
	{
		if (func_13(14, -1) >= 20)
		{
			func_127(44, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(45))
	{
		func_10(0);
	}
	if (!UNK_0x5E109EC687D2605A(48))
	{
		if (func_7(11, -1, -1))
		{
			func_127(48, 1);
		}
	}
	if (!UNK_0x5E109EC687D2605A(49))
	{
		func_3(0);
	}
}

int func_3(bool bParam0)
{
	if (!func_102())
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(49))
	{
		return 0;
	}
	if (bParam0 == 1)
	{
	}
	if (!func_4(100, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(102, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(101, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	func_127(49, 1);
	return 1;
}

bool func_4(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_5(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1312745;
}

bool func_7(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_6();
	}
	iVar1 = func_9(iParam0, bParam1);
	iVar2 = func_8(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_8(int iParam0)
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

int func_9(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_6();
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

int func_10(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_102())
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(45))
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	bVar2 = func_12(756, -1, 0);
	bVar0 = false;
	while (bVar0 < 9)
	{
		if (func_11(bVar2, bVar0, bParam0))
		{
			iVar1++;
		}
		bVar0++;
	}
	if (iVar1 == 9)
	{
		func_127(45, 1);
		return 1;
	}
	return 0;
}

bool func_11(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = UNK_0xEAE0D21A50E6C7F4(bParam0, bParam1);
	if (!bParam2)
	{
		return bVar0;
	}
	switch (bParam1)
	{
		case 0:
			return bVar0;
		case 1:
			return bVar0;
		case 2:
			return bVar0;
		case 3:
			return bVar0;
		case 4:
			return bVar0;
		case 5:
			return bVar0;
		case 6:
			return bVar0;
		case 7:
			return bVar0;
		case 8:
			return bVar0;
		default:
			break;
	}
	return false;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_5(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2585280[iParam0 /*3*/][func_5(iParam1)];
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_14(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_15(bool bParam0)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(37))
	{
		return 0;
	}
	if (!func_102())
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (bParam0)
	{
		iVar0 = func_13(21, -1);
		iVar0 = (iVar0 - func_13(58, -1));
		iVar0 = (iVar0 - func_13(57, -1));
	}
	if (func_16(8, -1))
	{
		func_127(37, 1);
		return 1;
	}
	return 0;
}

bool func_16(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2585647[iParam0 /*3*/][func_5(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_18(int iParam0)
{
	return Global_1388060[func_5(iParam0)];
}

void func_19(bool bParam0)
{
	int iVar0;
	struct<222> Var1;

	Var1 = 44;
	Var1.f_221 = 51;
	if (UNK_0x5E109EC687D2605A(29))
	{
		return;
	}
	func_88(bParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1)
	{
		if (func_20(bParam0, Var1[iVar0 /*5*/]))
		{
			func_127(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_221)
	{
		if (func_20(bParam0, Var1.f_221[iVar0 /*5*/]))
		{
			func_127(29, 1);
			return;
		}
		iVar0++;
	}
}

bool func_20(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	struct<7> Var45;

	if (bParam1 == -61829581)
	{
		return false;
	}
	if (bParam1 == joaat("WEAPON_KNUCKLE"))
	{
		return false;
	}
	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return false;
	}
	if (!UNK_0x440C646F2F11A2A1(bParam0, bParam1, 0))
	{
		return false;
	}
	iVar39 = func_87(bParam1, &uVar0);
	if ((((((((((((((((((((((bParam1 != joaat("WEAPON_PISTOL") && bParam1 != joaat("WEAPON_APPISTOL")) && bParam1 != joaat("WEAPON_COMBATPISTOL")) && bParam1 != joaat("WEAPON_MICROSMG")) && bParam1 != joaat("WEAPON_SMG")) && bParam1 != joaat("WEAPON_PUMPSHOTGUN")) && bParam1 != joaat("WEAPON_ASSAULTSHOTGUN")) && bParam1 != joaat("WEAPON_SAWNOFFSHOTGUN")) && bParam1 != joaat("WEAPON_ASSAULTRIFLE")) && bParam1 != joaat("WEAPON_CARBINERIFLE")) && bParam1 != joaat("WEAPON_ADVANCEDRIFLE")) && bParam1 != joaat("WEAPON_SNIPERRIFLE")) && bParam1 != joaat("WEAPON_HEAVYSNIPER")) && bParam1 != joaat("WEAPON_MG")) && bParam1 != joaat("WEAPON_COMBATMG")) && bParam1 != joaat("WEAPON_GRENADELAUNCHER")) && bParam1 != joaat("WEAPON_ASSAULTMG")) && bParam1 != joaat("WEAPON_ASSAULTSMG")) && bParam1 != joaat("WEAPON_ASSAULTSNIPER")) && bParam1 != joaat("WEAPON_HEAVYRIFLE")) && bParam1 != joaat("WEAPON_BULLPUPSHOTGUN")) && bParam1 != joaat("WEAPON_PISTOL50")) && (iVar39 == -1 || UNK_0xA942498EEAA3EEAD(iVar39) < 3))
	{
		return false;
	}
	iVar40 = 0;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;
	iVar44 = 0;
	while (func_21(&Var45, bParam1, iVar44, 0))
	{
		if (Var45.f_4 == joaat("WAPCLIP"))
		{
			iVar41++;
		}
		if (Var45.f_4 == joaat("WAPSCOP"))
		{
			iVar40++;
		}
		if (UNK_0xAFB8387ED2D7213E(bParam0, bParam1, Var45))
		{
			if (Var45.f_4 == joaat("WAPCLIP"))
			{
				iVar43 = Var45.f_6;
			}
			else if (Var45.f_4 == joaat("WAPSCOP"))
			{
				iVar42 = Var45.f_6;
			}
		}
		else if ((((Var45.f_4 == joaat("WAPCLIP") || Var45.f_4 == joaat("WAPSCOP")) || Var45.f_4 == joaat("WAPRAIL")) || Var45.f_4 == joaat("GUN_ROOT")) || Var45.f_4 == joaat("GUN_GRIPR"))
		{
		}
		else
		{
			return false;
		}
		iVar44++;
	}
	if (iVar40 > iVar42)
	{
		return false;
	}
	if (iVar41 > iVar43)
	{
		return false;
	}
	if (UNK_0xFF4F1F8A37B1B330(bParam1) > 0 && UNK_0x7DD9FDEA5DFB355E(bParam0, bParam1) == 0)
	{
		return false;
	}
	return true;
}

bool func_21(var uParam0, bool bParam1, int iParam2, bool bParam3)
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
	bool bVar13;
	int iVar14;
	var uVar15;
	struct<4> Var54;

	func_86(uParam0, 0, 989182658, 0, 0);
	switch (bParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (func_85(iLocal_54))
			{
				if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_86(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 3:
						func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
					case 4:
						func_86(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			if (func_85(iLocal_54))
			{
				if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_86(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_86(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
					case 3:
						func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 4:
						func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
						break;
					case 5:
						func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
					case 6:
						func_86(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (func_85(iLocal_54))
			{
				if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 8:
							func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
					case 3:
						func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 4:
						func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 5:
						func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
						break;
					case 6:
						func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
					case 7:
						func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_85(iLocal_54))
			{
				if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 8:
							func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
					case 3:
						func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 4:
						func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 5:
						func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
					case 6:
						func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
					case 7:
						func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPSCOP"), 1, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (func_85(iLocal_54))
			{
				if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_86(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
					case 2:
						func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
					case 3:
						func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
					case 4:
						func_86(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (func_85(iLocal_54))
			{
				if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
					case 1:
						func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
						break;
					case 2:
						func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_86(uParam0, 0, joaat("WAPGRIP"), 1, 1);
					break;
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
					break;
				case 8:
					func_86(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
				case 10:
					func_86(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
					break;
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 4, 0);
					break;
				case 14:
					func_86(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP_2"), 2, 0);
					break;
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
					break;
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
					break;
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
					break;
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
					break;
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
					break;
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
					break;
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
					break;
				case 23:
					func_86(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 24:
					func_86(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 25:
					func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 26:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 27:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 28:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 29:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 30:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 31:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 32:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 33:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 34:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 35:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 36:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_86(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
					break;
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
					break;
				case 8:
					func_86(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
				case 10:
					func_86(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
				case 14:
					func_86(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP_2"), 2, 0);
					break;
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
					break;
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
					break;
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
					break;
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
					break;
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
					break;
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
					break;
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
					break;
				case 23:
					func_86(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 24:
					func_86(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 25:
					func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 26:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 27:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 28:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 29:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 30:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 31:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 32:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 33:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 34:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 35:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 36:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_86(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
					break;
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
					break;
				case 8:
					func_86(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
				case 10:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
				case 12:
					func_86(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 2, 0);
					break;
				case 14:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 3, 0);
					break;
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 4, 0);
					break;
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 5, 0);
					break;
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 6, 0);
					break;
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 7, 0);
					break;
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 8, 0);
					break;
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 22:
					func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 23:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 24:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 25:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 26:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 27:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 28:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 29:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 30:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 31:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 32:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 33:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPSCOP"), 1, 0);
					break;
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 1);
					break;
				case 8:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPSCOP"), 3, 0);
					break;
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPSCOP"), 4, 0);
					break;
				case 10:
					func_86(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSUPP"), 2, 0);
					break;
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSUPP"), 3, 0);
					break;
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSUPP"), 4, 0);
					break;
				case 14:
					func_86(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 16:
					func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 17:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 18:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 19:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 20:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 21:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 22:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 23:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 24:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 25:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 26:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 27:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_86(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPSCOP"), 2, 0);
					break;
				case 8:
					func_86(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFLSHLASR"), 2, 0);
					break;
				case 10:
					func_86(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 2, 0);
					break;
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSUPP"), 3, 0);
					break;
				case 13:
					func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 14:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 15:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 16:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 17:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 18:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 19:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 20:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 21:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 22:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 23:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 24:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
				case 1:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
				case 2:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
				case 3:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
				case 4:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
					break;
				case 5:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
				case 6:
					func_86(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
				case 8:
					func_86(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPSCOP"), 2, 0);
					break;
				case 10:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
				case 12:
					func_86(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP_2"), 1, 0);
					break;
				case 14:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 2, 0);
					break;
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 3, 0);
					break;
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 4, 0);
					break;
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 5, 0);
					break;
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 6, 0);
					break;
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 7, 0);
					break;
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 8, 0);
					break;
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
				case 23:
					func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
				case 24:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
				case 25:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
				case 26:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
				case 27:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
				case 28:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
				case 29:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
				case 30:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
				case 31:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
				case 32:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
				case 33:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
				case 34:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (func_85(iLocal_54))
			{
				if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
					case 1:
						func_86(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
					case 2:
						func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (func_85(iLocal_54))
			{
				if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 8:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
						case 8:
							func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
						}
					}
					else
					{
						switch (iParam2)
						{
							case 0:
								func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
								break;
							case 1:
								func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
								break;
							case 2:
								func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
								break;
							case 3:
								func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
								break;
							case 4:
								func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
								break;
							case 5:
								func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
								break;
							case 6:
								func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
								break;
							case 7:
								func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
								break;
						}
					}
					break;
				case joaat("WEAPON_SNSPISTOL"):
					if (func_85(iLocal_54))
					{
						if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
						{
							switch (iParam2)
							{
								case 0:
									func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
									break;
								case 1:
									func_86(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
									break;
								case 2:
									func_86(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
									break;
								case 3:
									func_86(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
									break;
							}
						}
						else
						{
							switch (iParam2)
							{
								case 0:
									func_86(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
									break;
								case 1:
									func_86(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
									break;
								case 2:
									func_86(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
									break;
								case 3:
									func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
									break;
							}
						}
					}
					else
					{
						switch (iParam2)
						{
							case 0:
								func_86(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
								break;
							case 1:
								func_86(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
								break;
							case 2:
								func_86(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
								break;
						}
					}
					break;
				case joaat("WEAPON_MARKSMANRIFLE"):
					if (func_85(iLocal_54))
					{
						if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
						{
							switch (iParam2)
							{
								case 0:
									func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
									break;
								case 1:
									func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
									break;
								case 2:
									func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
									break;
								case 3:
									func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
									break;
								case 4:
									func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
									break;
								case 5:
									func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
									break;
								case 6:
									func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
									break;
								case 7:
									func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
									break;
							}
						}
						else
						{
							switch (iParam2)
							{
								case 0:
									func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
									break;
								case 1:
									func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
									break;
								case 2:
									func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
									break;
								case 3:
									func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
									break;
								case 4:
									func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
									break;
								case 5:
									func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
									break;
								case 6:
									func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
									break;
								case 7:
									func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
									break;
							}
						}
					}
					else
					{
						switch (iParam2)
						{
							case 0:
								func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
								break;
							case 1:
								func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
								break;
							case 2:
								func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
								break;
							case 3:
								func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
								break;
							case 4:
								func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
								break;
							case 5:
								func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
								break;
							case 6:
								func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
								break;
						}
					}
					break;
				case joaat("WEAPON_REVOLVER"):
					if (func_85(iLocal_54))
					{
						if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
						{
							switch (iParam2)
							{
								case 0:
									func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
									break;
								case 1:
									func_86(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
									break;
								case 2:
									func_86(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
									break;
								case 3:
									func_86(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
									break;
							}
						}
						else
						{
							switch (iParam2)
							{
								case 0:
									func_86(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
									break;
								case 1:
									func_86(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
									break;
								case 2:
									func_86(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
									break;
								case 3:
									func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
									break;
							}
						}
					}
					else
					{
						switch (iParam2)
						{
							case 0:
								func_86(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
								break;
							case 1:
								func_86(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
								break;
							case 2:
								func_86(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
								break;
						}
					}
					break;
				case joaat("WEAPON_BULLPUPRIFLE"):
					if (func_85(iLocal_54))
					{
						if (!func_75(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
						{
							switch (iParam2)
							{
								case 0:
									func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
									break;
								case 1:
									func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
									break;
								case 2:
									func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
									break;
								case 3:
									func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
									break;
								case 4:
									func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
									break;
								case 5:
									func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
									break;
								case 6:
									func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
									break;
								case 7:
									func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
									break;
							}
						}
						else
						{
							switch (iParam2)
							{
								case 0:
									func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
									break;
								case 1:
									func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
									break;
								case 2:
									func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
									break;
								case 3:
									func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
									break;
								case 4:
									func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
									break;
								case 5:
									func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
									break;
								case 6:
									func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
									break;
								case 7:
									func_86(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
									break;
							}
						}
					}
					else
					{
						switch (iParam2)
						{
							case 0:
								func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
								break;
							case 1:
								func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
								break;
							case 2:
								func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
								break;
							case 3:
								func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
								break;
							case 4:
								func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
								break;
							case 5:
								func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
								break;
							case 6:
								func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
								break;
						}
					}
					break;
				case joaat("WEAPON_PUMPSHOTGUN_MK2"):
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 4, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPCLIP"), 5, 0);
							break;
						case 5:
							func_86(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
							break;
						case 7:
							func_86(uParam0, 0, joaat("WAPSCOP"), 1, 1);
							break;
						case 8:
							func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
							break;
						case 9:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
							break;
						case 10:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP"), 4, 0);
							break;
						case 11:
							func_86(uParam0, 0, joaat("WAPSUPP"), 1, 1);
							break;
						case 12:
							func_86(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSUPP"), 2, 0);
							break;
						case 13:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSUPP"), 3, 0);
							break;
						case 14:
							func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
							break;
						case 15:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
							break;
						case 16:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
							break;
						case 17:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
							break;
						case 18:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
							break;
						case 19:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
							break;
						case 20:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
							break;
						case 21:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
							break;
						case 22:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
							break;
						case 23:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
							break;
						case 24:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
							break;
						case 25:
							func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
							break;
					}
					break;
				case joaat("WEAPON_SPECIALCARBINE_MK2"):
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
							break;
						case 6:
							func_86(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
							break;
						case 8:
							func_86(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
							break;
						case 9:
							func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
							break;
						case 10:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP_2"), 3, 0);
							break;
						case 11:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 4, 0);
							break;
						case 12:
							func_86(uParam0, 0, joaat("WAPSUPP"), 1, 1);
							break;
						case 13:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 2, 0);
							break;
						case 14:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 3, 0);
							break;
						case 15:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 4, 0);
							break;
						case 16:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 5, 0);
							break;
						case 17:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 6, 0);
							break;
						case 18:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 7, 0);
							break;
						case 19:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 8, 0);
							break;
						case 20:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 9, 0);
							break;
						case 21:
							func_86(uParam0, 0, joaat("WAPGRIP"), 1, 1);
							break;
						case 22:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
							break;
						case 23:
							func_86(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBARREL"), 1, 1);
							break;
						case 24:
							func_86(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBARREL"), 2, 0);
							break;
						case 25:
							func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
							break;
						case 26:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
							break;
						case 27:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
							break;
						case 28:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
							break;
						case 29:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
							break;
						case 30:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
							break;
						case 31:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
							break;
						case 32:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
							break;
						case 33:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
							break;
						case 34:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
							break;
						case 35:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
							break;
						case 36:
							func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
							break;
					}
					break;
				case joaat("WEAPON_SNSPISTOL_MK2"):
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
							break;
						case 6:
							func_86(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFLSHLASR_2"), 2, 0);
							break;
						case 8:
							func_86(uParam0, 0, joaat("WAPSCOP"), 1, 1);
							break;
						case 9:
							func_86(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPSCOP"), 2, 0);
							break;
						case 10:
							func_86(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
							break;
						case 11:
							func_86(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP_2"), 2, 0);
							break;
						case 12:
							func_86(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSUPP_2"), 3, 0);
							break;
						case 13:
							func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
							break;
						case 14:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
							break;
						case 15:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
							break;
						case 16:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
							break;
						case 17:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
							break;
						case 18:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
							break;
						case 19:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
							break;
						case 20:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
							break;
						case 21:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
							break;
						case 22:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
							break;
						case 23:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
							break;
						case 24:
							func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
							break;
					}
					break;
				case joaat("WEAPON_MARKSMANRIFLE_MK2"):
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
							break;
						case 6:
							func_86(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
							break;
						case 8:
							func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
							break;
						case 9:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 3, 0);
							break;
						case 10:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPSCOP_2"), 4, 1);
							break;
						case 11:
							func_86(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
							break;
						case 12:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP_2"), 2, 0);
							break;
						case 13:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
							break;
						case 14:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
							break;
						case 15:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
							break;
						case 16:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
							break;
						case 17:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
							break;
						case 18:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
							break;
						case 19:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
							break;
						case 20:
							func_86(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
							break;
						case 21:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
							break;
						case 22:
							func_86(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBARREL"), 1, 1);
							break;
						case 23:
							func_86(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBARREL"), 2, 0);
							break;
						case 24:
							func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
							break;
						case 25:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
							break;
						case 26:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
							break;
						case 27:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
							break;
						case 28:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
							break;
						case 29:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
							break;
						case 30:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
							break;
						case 31:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
							break;
						case 32:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
							break;
						case 33:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
							break;
						case 34:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
							break;
						case 35:
							func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
							break;
					}
					break;
				case joaat("WEAPON_REVOLVER_MK2"):
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 4, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 5, 0);
							break;
						case 5:
							func_86(uParam0, 0, joaat("WAPSCOP"), 1, 1);
							break;
						case 6:
							func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
							break;
						case 8:
							func_86(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
							break;
						case 9:
							func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
							break;
						case 10:
							func_86(uParam0, 0, joaat("WAPSUPP"), 1, 1);
							break;
						case 11:
							func_86(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSUPP"), 2, 0);
							break;
						case 12:
							func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
							break;
						case 13:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
							break;
						case 14:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
							break;
						case 15:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
							break;
						case 16:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
							break;
						case 17:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
							break;
						case 18:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
							break;
						case 19:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
							break;
						case 20:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
							break;
						case 21:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
							break;
						case 22:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
							break;
						case 23:
							func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
							break;
					}
					break;
				case joaat("WEAPON_BULLPUPRIFLE_MK2"):
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
							break;
						case 3:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
							break;
						case 4:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
							break;
						case 5:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
							break;
						case 6:
							func_86(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
							break;
						case 7:
							func_86(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
							break;
						case 8:
							func_86(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
							break;
						case 9:
							func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
							break;
						case 10:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPSCOP_2"), 3, 0);
							break;
						case 11:
							func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP_2"), 4, 0);
							break;
						case 12:
							func_86(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBARREL"), 1, 1);
							break;
						case 13:
							func_86(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBARREL"), 2, 0);
							break;
						case 14:
							func_86(uParam0, 0, joaat("WAPSUPP"), 1, 1);
							break;
						case 15:
							func_86(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 2, 0);
							break;
						case 16:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 3, 0);
							break;
						case 17:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 4, 0);
							break;
						case 18:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 5, 0);
							break;
						case 19:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 6, 0);
							break;
						case 20:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 7, 0);
							break;
						case 21:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 8, 0);
							break;
						case 22:
							func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 9, 0);
							break;
						case 23:
							func_86(uParam0, 0, joaat("WAPGRIP"), 1, 1);
							break;
						case 24:
							func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
							break;
						case 25:
							func_86(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
							break;
						case 26:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
							break;
						case 27:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
							break;
						case 28:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
							break;
						case 29:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
							break;
						case 30:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
							break;
						case 31:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
							break;
						case 32:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
							break;
						case 33:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
							break;
						case 34:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
							break;
						case 35:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
							break;
						case 36:
							func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
							break;
					}
					break;
				case joaat("WEAPON_RAYPISTOL"):
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
					break;
				case joaat("WEAPON_CERAMICPISTOL"):
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
						case 1:
							func_86(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
						case 2:
							func_86(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					}
					break;
				default:
					iVar12 = func_87(bParam1, &uVar15);
					if (iVar12 != -1)
					{
						bVar13 = false;
						while (bVar13 < UNK_0xA942498EEAA3EEAD(iVar12))
						{
							if (UNK_0x8B27EE8DAA2A39B3(iVar12, bVar13, &Var54))
							{
								if (!func_74(Var54.f_3))
								{
									if (Var54 == joaat("WAPCLIP") || Var54 == joaat("WAPCLIP_2"))
									{
										iVar1++;
									}
									else if (Var54 == joaat("WAPFLSHLASR") || Var54 == joaat("WAPFLSHLASR_2"))
									{
										iVar2++;
									}
									else if (Var54 == joaat("WAPSCOP") || Var54 == joaat("WAPSCOP_2"))
									{
										iVar3++;
									}
									else if (Var54 == joaat("WAPRAIL") || Var54 == joaat("WAPRAIL_2"))
									{
										iVar4++;
									}
									else if (Var54 == joaat("WAPGRIP") || Var54 == joaat("WAPGRIP_2"))
									{
										iVar5++;
									}
									else if (Var54 == joaat("WAPSUPP") || Var54 == joaat("WAPSUPP_2"))
									{
										iVar6++;
									}
									else if (Var54 == 1731751835)
									{
										iVar7++;
									}
									else if (Var54 == joaat("GUN_ROOT"))
									{
										iVar8++;
									}
									else if (Var54 == joaat("GUN_GRIPR"))
									{
										iVar9++;
									}
									else if (Var54 == joaat("WAPBARREL"))
									{
										iVar10++;
									}
									else
									{
										iVar11++;
									}
									if (iVar14 == iParam2)
									{
										if (Var54 == joaat("WAPCLIP") || Var54 == joaat("WAPCLIP_2"))
										{
											iVar0 = iVar1;
										}
										else if (Var54 == joaat("WAPFLSHLASR") || Var54 == joaat("WAPFLSHLASR_2"))
										{
											iVar0 = iVar2;
										}
										else if (Var54 == joaat("WAPSCOP") || Var54 == joaat("WAPSCOP_2"))
										{
											iVar0 = iVar3;
										}
										else if (Var54 == joaat("WAPRAIL") || Var54 == joaat("WAPRAIL_2"))
										{
											iVar0 = iVar4;
										}
										else if (Var54 == joaat("WAPGRIP") || Var54 == joaat("WAPGRIP_2"))
										{
											iVar0 = iVar5;
										}
										else if (Var54 == joaat("WAPSUPP") || Var54 == joaat("WAPSUPP_2"))
										{
											iVar0 = iVar6;
										}
										else if (Var54 == 1731751835)
										{
											iVar0 = iVar7;
										}
										else if (Var54 == joaat("GUN_ROOT"))
										{
											iVar0 = iVar8;
										}
										else if (Var54 == joaat("GUN_GRIPR"))
										{
											iVar0 = iVar9;
										}
										else if (Var54 == joaat("WAPBARREL"))
										{
											iVar0 = iVar10;
										}
										else
										{
											iVar0 = iVar11;
										}
										func_86(uParam0, Var54.f_3, Var54, iVar0, Var54.f_1);
									}
									iVar14++;
								}
							}
							bVar13++;
						}
					}
					break;
			}
			if (bParam3)
			{
				uParam0->f_2 = func_22(bParam1, *uParam0);
			}
			return uParam0->f_4 != 989182658;
		}

int func_22(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	struct<6> Var43;
	int iVar65;
	bool bVar66;
	var uVar67;
	struct<6> Var106;
	var uVar128;
	struct<4> Var144;
	float fVar148;

	iVar0 = 0;
	fVar1 = 2.5f;
	if (!UNK_0x8CD06866876216F2())
	{
		fVar1 = 2.5f;
		switch (bParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 155;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 729;
						break;
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = 18600;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 735;
						break;
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 14500;
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 165;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 185;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 730;
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = 15800;
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 137;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 190;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 549;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 775;
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = 15100;
						break;
				}
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 134;
						break;
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 210;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 549;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 815;
						break;
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = 19300;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 565;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 810;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = 14400;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 105;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 132;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 150;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 815;
						break;
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = 17900;
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 124;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 812;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = 16500;
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = 15600;
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 126;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 559;
						break;
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = 14000;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 975;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = 16900;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 139;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 150;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 225;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 899;
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 559;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 975;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 920;
						break;
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = 13000;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 575;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 999;
						break;
				}
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 128;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 185;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 525;
						break;
				}
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						break;
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = 17600;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						break;
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = 20000;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = 13700;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = 3612;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1020;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 5000;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 1760;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = 17200;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 710;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4800;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = 12000;
						break;
				}
				break;
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = 4900;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = 5600;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = 5500;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = 5200;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = 4600;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = 4700;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = 4800;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = 4300;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = 4000;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 108;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = 9950;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2575;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 11350;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = 16600;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 29;
						break;
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = 9150;
						break;
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 13900;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 108;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = 9975;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2525;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 11550;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = 18000;
						break;
				}
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4840;
						break;
				}
				break;
			default:
				iVar2 = func_87(bParam0, &uVar4);
				if (iVar2 != -1)
				{
					bVar3 = false;
					while (bVar3 < UNK_0xA942498EEAA3EEAD(iVar2))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar2, bVar3, &Var43))
						{
							if (!func_74(Var43.f_3))
							{
								if (Var43.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_69(iParam1))
									{
										Var43.f_5 = -1;
									}
									if (Var43.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var43.f_5;
									}
									if (bParam0 == joaat("WEAPON_HAMMER"))
									{
										if (func_73() && (func_72() || func_71()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						bVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (bParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2885));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4337));
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4338));
						break;
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10572;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4415));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20718;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_20607;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2886));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4339));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_20608;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4340));
						break;
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11956;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4410));
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2888));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4341));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4342));
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10571;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404));
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2889));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4345));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10575;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414));
						break;
				}
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2890));
						break;
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = Global_262145.f_16127;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10574;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20719;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2892));
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16122;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356));
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10568;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4405));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20721;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2893));
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16121;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363));
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364));
						break;
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10570;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4408));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20722;
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4368));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4370));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4369));
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10569;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403));
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4371));
						break;
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11957;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413));
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897));
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393));
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394));
						break;
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11958;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4409));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20720;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375));
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4376));
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11953;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22429;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899));
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4382));
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4383));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10577;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4420));
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_20723;
						break;
				}
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392));
						break;
				}
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2891));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11954;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353));
						break;
				}
				break;
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						iVar0 = Global_262145.f_6601;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7180;
						break;
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11955;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22434;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = Global_262145.f_7185;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = Global_262145.f_16124;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7188;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_7184;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_7182;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7187;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_11959;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22430;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7186;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_7190;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7183;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_7210;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_7193;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7196;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_7191;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_7192;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7194;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = Global_262145.f_11960;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22433;
						break;
				}
				break;
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7668;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7669;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						iVar0 = Global_262145.f_8392;
						break;
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						iVar0 = Global_262145.f_16128;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8393;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_8394;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8395;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_8398;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8399;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_8401;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8402;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_8403;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22431;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14622));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378));
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2887));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4343));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4344));
						break;
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10573;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4416));
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = Global_262145.f_10576;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418));
						break;
				}
				break;
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = Global_262145.f_10893;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = Global_262145.f_10894;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = Global_262145.f_10895;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = Global_262145.f_10896;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = Global_262145.f_10897;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = Global_262145.f_10898;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = Global_262145.f_10899;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = Global_262145.f_10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4430));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = Global_262145.f_10901;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4431));
						break;
				}
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_10918;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433));
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = Global_262145.f_16126;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_10919;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434));
						break;
				}
				break;
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						iVar0 = Global_262145.f_12801;
						break;
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						iVar0 = Global_262145.f_12802;
						break;
				}
				break;
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						iVar0 = Global_262145.f_12859;
						break;
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						iVar0 = Global_262145.f_12800;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22432;
						break;
				}
				break;
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_14552;
						break;
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16123;
						break;
				}
				break;
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						iVar0 = Global_262145.f_18570;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						iVar0 = Global_262145.f_20603;
						break;
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						iVar0 = Global_262145.f_16125;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20604;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_20606;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_20605;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20724;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20725;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20726;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20727;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20728;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20729;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20730;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20731;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20732;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20733;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_20734;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20735;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20736;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20737;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20738;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20739;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20740;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20741;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20742;
						break;
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						iVar0 = Global_262145.f_20743;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20744;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20745;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20746;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20747;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20748;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20749;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20750;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20751;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20752;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20753;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_20754;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20755;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20756;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20757;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20758;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20759;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20760;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20761;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20762;
						break;
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						iVar0 = Global_262145.f_20763;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20764;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20765;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20766;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20767;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20768;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20769;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20770;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20771;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20772;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20773;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20774;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20775;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20776;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20777;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20778;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20779;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20780;
						break;
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						iVar0 = Global_262145.f_20781;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20782;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20783;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20785;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20786;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_20784;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						iVar0 = Global_262145.f_20787;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SCOPE_NV"):
						iVar0 = Global_262145.f_20788;
						break;
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						iVar0 = Global_262145.f_20789;
						break;
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_20790;
						break;
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_20791;
						break;
					case joaat("COMPONENT_AT_MUZZLE_09"):
						iVar0 = Global_262145.f_20792;
						break;
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						iVar0 = Global_262145.f_20793;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20794;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_20796;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20795;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20797;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20798;
						break;
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						iVar0 = Global_262145.f_20799;
						break;
					case joaat("COMPONENT_AT_PI_RAIL"):
						iVar0 = Global_262145.f_20800;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_20801;
						break;
					case joaat("COMPONENT_AT_PI_COMP"):
						iVar0 = Global_262145.f_20802;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20803;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_20805;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20804;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20806;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20807;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20808;
						break;
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						iVar0 = Global_262145.f_20809;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						iVar0 = Global_262145.f_20810;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						iVar0 = Global_262145.f_20811;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_20812;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20813;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20814;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20815;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20816;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20817;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20818;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20819;
						break;
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						iVar0 = Global_262145.f_20820;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22461;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_22462;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22460;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22459;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22488;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22489;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22490;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_22491;
						break;
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_22492;
						break;
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_22493;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22463;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22467;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22465;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22466;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22464;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22494;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22495;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22496;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_22497;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_22498;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22499;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22500;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22501;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22502;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22503;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22504;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22505;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22506;
						break;
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						iVar0 = Global_262145.f_22507;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23374;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22483;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22485;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22484;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22482;
						break;
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						iVar0 = Global_262145.f_22539;
						break;
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						iVar0 = Global_262145.f_22540;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_22541;
						break;
					case joaat("COMPONENT_AT_PI_COMP_02"):
						iVar0 = Global_262145.f_22542;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22468;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22472;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22470;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22471;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22469;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22508;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22509;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_22510;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_22511;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22512;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22513;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22514;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22515;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22516;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22517;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22518;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22519;
						break;
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						iVar0 = Global_262145.f_22520;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22473;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22474;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22476;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22475;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22521;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22522;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_22523;
						break;
					case joaat("COMPONENT_AT_PI_COMP_03"):
						iVar0 = Global_262145.f_22524;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22477;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22481;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22479;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22480;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22478;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22525;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22526;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						iVar0 = Global_262145.f_22527;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_22528;
						break;
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						iVar0 = Global_262145.f_22538;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_22529;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22530;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22531;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22532;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22533;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22534;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22535;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22536;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22537;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_27905;
						break;
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						iVar0 = Global_262145.f_27906;
						break;
				}
				break;
			default:
				iVar65 = func_87(bParam0, &uVar67);
				if (iVar65 != -1)
				{
					bVar66 = false;
					while (bVar66 < UNK_0xA942498EEAA3EEAD(iVar65))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar65, bVar66, &Var106))
						{
							if (!func_74(Var106.f_3))
							{
								if (Var106.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var106.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var106.f_5;
									}
								}
							}
						}
						bVar66++;
					}
				}
				break;
		}
	}
	if (UNK_0x8CD06866876216F2() && func_67())
	{
		StringCopy(&Var144, func_65(iParam1, bParam0), 16);
		func_61(&uVar128, Var144, UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()), 3, 1, func_63(bParam0), func_62(bParam0), -1, 0, 0);
		if (UNK_0x437ABF4F514F6471(&uVar128))
		{
			iVar0 = UNK_0xD7F319992681CCB6(UNK_0x12AB0310C2281427(&uVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_23(bParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(bool bParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = 0f;
	if (UNK_0x8CD06866876216F2() && func_67())
	{
		return 1f;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_76622)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_52(bParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_53 == 1)
	{
		if (UNK_0x8CD06866876216F2())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_122) / 100f));
		}
	}
	if (iLocal_53 == 0)
	{
		if (UNK_0x8CD06866876216F2())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			if (func_24())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_122) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

bool func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return false;
	}
	if (func_102())
	{
		if (func_27())
		{
			iVar0 = func_26();
			iVar1 = func_25();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
			{
				return true;
			}
		}
	}
	return false;
}

int func_25()
{
	int iVar0;

	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	return iVar0;
}

int func_26()
{
	int iVar0;

	iVar0 = (iVar0 + Global_1387922);
	iVar0 = (iVar0 + Global_1387923);
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	iVar0 = (iVar0 + Global_1387926);
	iVar0 = (iVar0 + Global_1387925);
	iVar0 = (iVar0 + func_14(joaat("MPPLY_EXPLOITS")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_VC_ANNOYINGME")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_VC_HATE")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_BAD_CREW_NAME")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_BAD_CREW_MOTTO")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_BAD_CREW_STATUS")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_BAD_CREW_EMBLEM")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_PLAYERMADE_TITLE")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_PLAYERMADE_DESC")));
	return iVar0;
}

bool func_27()
{
	struct<7> Var0;
	struct<7> Var7;

	UNK_0xA9A9632F6E019049(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_51(joaat("MPPLY_STARTED_MP")) };
	if (func_28(Var7, Var0, 7))
	{
		return true;
	}
	return false;
}

bool func_28(struct<7> Param0, struct<7> Param7, int iParam14)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_49(Param7);
	bVar1 = func_39(Param0, iParam14);
	if (bVar1 == -15)
	{
		return false;
	}
	if (func_29(bVar0, bVar1) == 1)
	{
		return true;
	}
	return false;
}

int func_29(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_37(bParam1) || !func_37(bParam0))
	{
		return 1;
	}
	iVar0 = func_35(bParam0);
	iVar1 = func_35(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(bParam0);
	iVar1 = func_34(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(bParam0);
	iVar1 = func_33(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_32(bParam0);
	iVar1 = func_32(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_31(bParam0);
	iVar1 = func_31(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_30(bParam0);
	iVar1 = func_30(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_30(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_31(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_32(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_33(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_34(bool bParam0)
{
	return (bParam0 && 15);
}

int func_35(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_36(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_36(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_37(bool bParam0)
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
	iVar0 = func_30(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_31(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_32(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_35(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_34(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_33(bParam0);
	if (iVar5 < 1 || iVar5 > func_38(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_38(bool bParam0, int iParam1)
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

bool func_39(struct<7> Param0, int iParam7)
{
	bool bVar0;
	bool bVar1;
	var uVar2;

	if (func_48(Param0) == 0)
	{
		bVar0 = func_49(Param0);
		bVar1 = bVar0;
		func_40(&bVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			bVar1 = bVar0;
		}
		return bVar1;
	}
	return uVar2;
}

void func_40(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_35(*bParam0);
	bVar1 = func_34(*bParam0);
	iVar2 = func_33(*bParam0);
	iVar3 = func_32(*bParam0);
	iVar4 = func_31(*bParam0);
	iVar5 = func_30(*bParam0);
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
	iVar6 = func_38(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_38(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_41(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_41(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_47(bParam0, iParam1);
	func_46(bParam0, iParam2);
	func_45(bParam0, iParam3);
	func_44(bParam0, bParam5);
	func_43(bParam0, iParam4);
	func_42(bParam0, iParam6);
}

void func_42(bool bParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*bParam0 |= -2147483648;
	}
	else
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*bParam0 = (*bParam0 - *bParam0 & -2147483648);
	}
}

void func_43(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_34(*bParam0);
	iVar1 = func_35(*bParam0);
	if (iParam1 < 1 || iParam1 > func_38(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_44(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_45(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_46(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_47(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_48(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_49(struct<6> Param0, var uParam6)
{
	var uVar0;

	if (Param0 > 0)
	{
		func_42(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_44(&uVar0, func_50(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_43(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_45(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_46(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_47(&uVar0, Param0.f_5);
	}
	return uVar0;
}

bool func_50(int iParam0)
{
	if (iParam0 < 1)
	{
		return false;
	}
	if (iParam0 > 12)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			return false;
		case 2:
			return true;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
	}
	return false;
}

struct<7> func_51(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	struct<7> Var8;

	iVar0 = iParam0;
	if (UNK_0x52555DE2F29B7339(iVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_52(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;

	iVar0 = func_56();
	if (bParam0 == 0 || !func_55(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (bParam0)
	{
		case joaat("WEAPON_UNARMED"):
			break;
		case joaat("GADGET_PARACHUTE"):
			break;
		case joaat("WEAPON_MICROSMG"):
			iVar1 = 1;
			break;
		case joaat("WEAPON_SMG"):
			iVar1 = 1;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar1 = 3;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar1 = 2;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
		case joaat("WEAPON_MG"):
			iVar1 = 4;
			break;
		case joaat("WEAPON_COMBATMG"):
			iVar1 = 4;
			break;
		case joaat("WEAPON_RPG"):
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
		case joaat("WEAPON_MINIGUN"):
			iVar1 = 5;
			break;
		case joaat("WEAPON_KNIFE"):
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			break;
		case joaat("WEAPON_PETROLCAN"):
			break;
		case joaat("WEAPON_STUNGUN"):
			break;
		case joaat("WEAPON_APPISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_PISTOL"):
			iVar1 = 0;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
		case joaat("WEAPON_GRENADE"):
			break;
		case joaat("WEAPON_STICKYBOMB"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_53(iVar1, iVar0))
		{
			case 1:
				return 3;
			case 2:
				return 2;
			case 3:
				return 1;
		}
	}
	else
	{
		iVar3[0] = func_53(1, iVar0);
		iVar3[1] = func_53(3, iVar0);
		iVar3[2] = func_53(2, iVar0);
		iVar3[3] = func_53(4, iVar0);
		iVar3[4] = func_53(5, iVar0);
		iVar3[5] = func_53(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_54(iVar0, iParam1);
	if (func_54(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar1, iParam1);
	}
	if (func_54(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_54(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_54(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_54(int iParam0, int iParam1)
{
	return Global_111638.f_19142[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56()
{
	func_57();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_57()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_59(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_58(UNK_0x16F2683693E537C9());
			if (func_55(iVar0) && (!func_160(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_55(Global_111638.f_2358.f_539.f_4321))
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

int func_58(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_60(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_60(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_61(char* sParam0, char[8] cParam1, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (UNK_0x12AB0310C2281427(&cParam1))
	{
		case 64715401: /* GXTEntry: "Round" */
		case -2016195117: /* GXTEntry: "Rounds" */
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		case -414529079: /* GXTEntry: "Cartridge" */
		case -1253005183: /* GXTEntry: "Cartridges" */
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		case 336264847: /* GXTEntry: "Rocket" */
		case -1119195824: /* GXTEntry: "Rockets" */
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		case 531395379: /* GXTEntry: "Charge" */
		case -672224483: /* GXTEntry: "Charges" */
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		case 1034118160: /* GXTEntry: "Grenade" */
		case 600999375: /* GXTEntry: "Grenades" */
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		case -218834291: /* GXTEntry: "Bomb" */
		case -859056265: /* GXTEntry: "Bombs" */
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		case 1779531303: /* GXTEntry: "Firework" */
		case 82051787: /* GXTEntry: "Fireworks" */
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (bParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		case 1:
			if (bParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		case 2:
			if (bParam5 == joaat("MP_M_FREEMODE_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (bParam5 == joaat("MP_F_FREEMODE_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		case 4:
			if (bParam5 == Global_73804)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (bParam5 == Global_73805)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (bParam5 == Global_73806)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (bParam5 == Global_73807)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (bParam5 == Global_73808)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (bParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, UNK_0x1739BA50603D849C(bParam5), 16);
				if (UNK_0xEA6BC48857E0AC4C(&cParam1) || UNK_0x12AB0310C2281427(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (bParam5)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						case joaat("TORNADO4"):
							StringConCat(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (bParam5)
				{
					case joaat("FCR2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					case joaat("DIABLOUS2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					case joaat("COMET3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					default:
						StringCopy(&cParam1, UNK_0x1739BA50603D849C(bParam5), 16);
						if (UNK_0xEA6BC48857E0AC4C(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (bParam5)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						case joaat("TORNADO4"):
							StringConCat(sParam0, "4", 64);
							break;
					}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_62(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 2;
	}
	return -1;
}

int func_63(bool bParam0)
{
	return func_64(bParam0);
}

int func_64(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
		case joaat("WEAPON_PISTOL"):
			return 1;
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
		case joaat("WEAPON_APPISTOL"):
			return 3;
		case joaat("WEAPON_PISTOL50"):
			return 4;
		case joaat("WEAPON_SMG"):
			return 5;
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
		case joaat("WEAPON_MICROSMG"):
			return 7;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
		case joaat("WEAPON_MG"):
			return 12;
		case joaat("WEAPON_COMBATMG"):
			return 13;
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
		case joaat("WEAPON_GRENADE"):
			return 16;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
		case joaat("WEAPON_RPG"):
			return 27;
		case joaat("WEAPON_MINIGUN"):
			return 28;
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
		case joaat("WEAPON_STUNGUN"):
			return 31;
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
		case joaat("GADGET_PARACHUTE"):
			return 33;
		case joaat("WEAPON_KNIFE"):
			return 34;
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
		case joaat("WEAPON_HAMMER"):
			return 36;
		case joaat("WEAPON_BAT"):
			return 37;
		case joaat("WEAPON_CROWBAR"):
			return 38;
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
		case joaat("WEAPON_MOLOTOV"):
			return 41;
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
		case joaat("WEAPON_PETROLCAN"):
			return 43;
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
		case joaat("WEAPON_BOTTLE"):
			return 45;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		case joaat("WEAPON_DAGGER"):
			return 51;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
		case joaat("WEAPON_FLAREGUN"):
			return 57;
		case joaat("WEAPON_MUSKET"):
			return 53;
		case joaat("WEAPON_FIREWORK"):
			return 54;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
		case joaat("WEAPON_PROXMINE"):
			return 60;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
		case joaat("WEAPON_HATCHET"):
			return 58;
		case joaat("WEAPON_RAILGUN"):
			return 59;
		case joaat("WEAPON_COMBATPDW"):
			return 64;
		case joaat("WEAPON_KNUCKLE"):
			return 62;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
		case joaat("WEAPON_MACHETE"):
			return 65;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
		case joaat("WEAPON_REVOLVER"):
			return 70;
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
		case joaat("WEAPON_MINISMG"):
			return 73;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
		case joaat("WEAPON_POOLCUE"):
			return 77;
		case joaat("WEAPON_WRENCH"):
			return 78;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
		case joaat("WEAPON_SMG_MK2"):
			return 5;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	}
	return 0;
}

char* func_65(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<7> Var41;

	if (bParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE";
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
		}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP";
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH";
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH";
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC";
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML";
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML";
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED";
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG";
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX";
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP";
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP";
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2";
		case 195735895:
			return "WCT_CLIP1";
		case 1525977990:
			return "WCT_CLIP1";
		case 1824470811:
			return "WCT_CLIP2";
		case -890514874:
			return "WCT_CLIP1";
		case -507117574:
			return "WCT_CLIP2";
		case -124428919:
			return "WCT_CLIP1";
		case 1048471894:
			return "WCT_CLIP2";
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG";
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP";
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN";
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1";
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2";
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP";
		default:
			if (bParam1 != 0)
			{
				iVar0 = func_87(bParam1, &uVar2);
				if (iVar0 != -1)
				{
					bVar1 = false;
					while (bVar1 < UNK_0xA942498EEAA3EEAD(iVar0))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar0, bVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_66(&(Var41.f_6));
							}
						}
						bVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_66(var uParam0)
{
	return uParam0;
}

bool func_67()
{
	if (UNK_0x8CD06866876216F2() && func_68())
	{
		return true;
	}
	return false;
}

bool func_68()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_69(int iParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			case joaat("COMPONENT_SMG_CLIP_03"):
			case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
				return false;
			default:
				break;
		}
	}
	else if (func_70(iParam0))
	{
		return Global_262145.f_20713;
	}
	return true;
}

bool func_70(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return true;
	}
	return false;
}

int func_71()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (UNK_0xEAE0D21A50E6C7F4(Global_25, 6))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_25, 2) || UNK_0xEAE0D21A50E6C7F4(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, 6))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2) || UNK_0xEAE0D21A50E6C7F4(bVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (UNK_0x0556D13739839AFD(false))
	{
		if (Global_150473.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (UNK_0x6FB46C25CCB7E6D5(iVar2, &bVar1, -1))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		bVar3 = UNK_0x0A4C9A3D51EAE31F(866);
		if (UNK_0xEAE0D21A50E6C7F4(bVar3, 2) || UNK_0xEAE0D21A50E6C7F4(bVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_72()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (UNK_0xEAE0D21A50E6C7F4(Global_25, 5))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_25, true) || UNK_0xEAE0D21A50E6C7F4(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, true) || UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (UNK_0x0556D13739839AFD(false))
	{
		if (Global_150473.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (UNK_0x6FB46C25CCB7E6D5(iVar2, &bVar1, -1))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		bVar3 = UNK_0x0A4C9A3D51EAE31F(866);
		if (UNK_0xEAE0D21A50E6C7F4(bVar3, true) || UNK_0xEAE0D21A50E6C7F4(bVar3, 3))
		{
			return 1;
		}
	}
	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0xDA1BF71E2E8A1C89())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar4, -1);
				UNK_0x5D96D8530B3D0904(&bVar4, true);
				UNK_0x5D96D8530B3D0904(&bVar4, 3);
				UNK_0x5D96D8530B3D0904(&bVar4, 5);
				UNK_0x5D96D8530B3D0904(&Global_25, true);
				UNK_0x5D96D8530B3D0904(&Global_25, 3);
				UNK_0x5D96D8530B3D0904(&Global_25, 5);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar4, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar4 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar4, true);
					UNK_0x5D96D8530B3D0904(&bVar4, 3);
					UNK_0x9F2BE984EBF8A0F4(bVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_73()
{
	bool bVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0x5CD8D2FE4603C900())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				UNK_0x5D96D8530B3D0904(&bVar0, 2);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 6);
				UNK_0x5D96D8530B3D0904(&Global_25, 2);
				UNK_0x5D96D8530B3D0904(&Global_25, 4);
				UNK_0x5D96D8530B3D0904(&Global_25, 6);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar0 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar0, false);
					UNK_0x9F2BE984EBF8A0F4(bVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return 1;
		}
	}
	return 0;
}

bool func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return true;
	}
	return false;
}

bool func_75(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (func_84())
	{
		return false;
	}
	bVar0 = func_79(iParam0, iParam1, iParam2);
	iVar1 = func_77(iParam0, iParam1);
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_76(iVar1));
}

int func_76(int iParam0)
{
	return (iParam0 % 32);
}

int func_77(int iParam0, int iParam1)
{
	return func_78(iParam0, iParam1);
}

int func_78(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
			}
			break;
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case 195735895:
					return 95;
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
			}
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case 1525977990:
					return 99;
				case 1824470811:
					return 100;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
			}
			break;
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case -890514874:
					return 105;
				case -507117574:
					return 106;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
			}
			break;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case -124428919:
					return 109;
				case 1048471894:
					return 110;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
			}
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
			}
			break;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_12(func_80(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_77(iParam0, iParam1);
	iVar1 = func_83(iVar0);
	if ((func_82() == 0 || func_81() == 0) || (func_82() == 999 && func_81() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
			case 1:
				return 688;
			case 2:
				return 689;
			case 3:
				return 690;
			case 4:
				return 1753;
			case 5:
				return 2435;
			case 6:
				return 2827;
			case 7:
				return 5501;
			case 8:
				return 5505;
			case 9:
				return 5509;
			case 10:
				return 5622;
			case 11:
				return 5626;
			case 12:
				return 5630;
			case 13:
				return 5634;
			case 14:
				return 6373;
			case 15:
				return 6496;
			case 16:
				return 6516;
			case 17:
				return 6522;
		}
	}
	return 1753;
}

int func_81()
{
	return Global_30769;
}

int func_82()
{
	return Global_30768;
}

int func_83(int iParam0)
{
	return (iParam0 / 32);
}

bool func_84()
{
	return Global_1312856;
}

bool func_85(int iParam0)
{
	if (iParam0 != -1)
	{
		if ((((iParam0 == 46 || iParam0 == 47) || iParam0 == 48) || iParam0 == 49) || iParam0 == 52)
		{
			return true;
		}
	}
	return false;
}

void func_86(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_87(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == bParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_88(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_91(iVar0);
			if (iVar3 != 0)
			{
				Var4 = UNK_0x3F0B5EEC37A0EDD3(bParam0, func_91(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (Var4 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
					Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_90(Var4, bVar1);
					while (iVar2 != 0)
					{
						if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, iVar2))
						{
							UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_90(Var4, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = UNK_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((UNK_0x310836EE7129BA33(iVar9, &Var11) && !func_89(Var11.f_1)) && iVar72 < 51)
			{
				if (!UNK_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
						Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < UNK_0xAD2A7A6DFF55841B(iVar9))
					{
						if (UNK_0x31D5E073B6F93CDC(iVar9, bVar1, &Var50))
						{
							if (!func_74(Var50.f_3))
							{
								if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, Var50.f_3))
								{
									UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

bool func_89(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case -1523701417:
			case -2112826155:
			case -664359727:
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
				return true;
		}
	}
	return false;
}

int func_90(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (bParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (bParam0 != 0)
			{
				iVar1 = func_87(bParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_74(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_91(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

float func_92(var uParam0)
{
	if (func_95(uParam0))
	{
		if (func_94(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_93(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_93(bool bParam0)
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

bool func_94(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_95(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, true);
}

bool func_96()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_98())
	{
		return true;
	}
	if (func_97())
	{
		return true;
	}
	return func_4(124, -1);
}

bool func_97()
{
	return Global_1312865;
}

bool func_98()
{
	return Global_1312867;
}

void func_99()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 49)
	{
		if (!UNK_0x5E109EC687D2605A(iVar0))
		{
			if (UNK_0x69886048DD96B246(iVar0))
			{
				func_127(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59)
	{
		if (!UNK_0x5E109EC687D2605A(iVar0))
		{
			if (UNK_0x69886048DD96B246(iVar0))
			{
				func_127(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 70;
	while (iVar0 <= 77)
	{
		if (!UNK_0x5E109EC687D2605A(iVar0))
		{
			if (UNK_0x69886048DD96B246(iVar0))
			{
				func_127(iVar0, 1);
			}
		}
		iVar0++;
	}
}

bool func_100(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_101(iParam1);
	bVar1 = UNK_0x0A4C9A3D51EAE31F(iVar0);
	return UNK_0xEAE0D21A50E6C7F4(bVar1, bParam0);
}

int func_101(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		case 1:
			iVar0 = 915;
			break;
		case 2:
			iVar0 = 916;
			break;
		case 3:
			iVar0 = 917;
			break;
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_102()
{
	if (func_104() && func_103(0))
	{
		return true;
	}
	return false;
}

var func_103(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_104()
{
	return func_103(func_6() + 1);
}

bool func_105(var uParam0)
{
	return uParam0->f_79 == 1;
}

void func_106(var uParam0)
{
	float fVar0;

	fVar0 = Global_4270064;
	uParam0->f_80 = (uParam0->f_80 + UNK_0x6117725E0134737F());
	if (!func_105(uParam0))
	{
		return;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
		return;
	}
	if (func_160(14))
	{
		fVar0 = 10f;
	}
	if (func_113(uParam0) < fVar0)
	{
		return;
	}
	if (func_111(uParam0, 0))
	{
		return;
	}
	if (func_109((*uParam0)[0]))
	{
		func_108(uParam0);
		func_107(uParam0);
		func_112(uParam0, 0);
	}
}

void func_107(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_108(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (func_111(uParam0, 0))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		(*uParam0)[(iVar0 - 1)] = (*uParam0)[iVar0];
		iVar0++;
	}
}

bool func_109(int iParam0)
{
	if (UNK_0x5E109EC687D2605A(iParam0))
	{
		return false;
	}
	if (func_160(14) && !func_110(iParam0))
	{
		return false;
	}
	if (!UNK_0x5A66449FC9BDF808(iParam0))
	{
		return false;
	}
	if (UNK_0x5E109EC687D2605A(iParam0))
	{
		return true;
	}
	return false;
}

bool func_110(int iParam0)
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

bool func_111(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_112(var uParam0, float fParam1)
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

float func_113(var uParam0)
{
	return uParam0->f_80;
}

int func_114()
{
	float fVar0;

	if (UNK_0x8CD06866876216F2() || Global_76622)
	{
		return 0;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			fVar0 = UNK_0x5B096932B3053142();
			if (fVar0 > 0.01f && UNK_0x0EFF6B4415DAF4A1())
			{
				func_133(14, SYSTEM::FLOOR((fVar0 * 100f)));
			}
			if (fVar0 >= 0.975f)
			{
				func_127(14, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool func_115(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_116(bool bParam0)
{
	if (Global_76622)
	{
		if (bParam0)
		{
			func_10(bParam0);
		}
		func_3(bParam0);
		func_15(bParam0);
		if (bParam0)
		{
		}
	}
	func_126(bParam0);
	func_119(bParam0);
	func_118();
	func_117();
	if (bParam0)
	{
		if (func_95(&uLocal_58))
		{
		}
	}
}

int func_117()
{
	int iVar0;
	int iVar1;

	if (UNK_0x5E109EC687D2605A(50))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iVar0 + UNK_0x959C6922055154B5(joaat("FIRST_PERSON_CAM_TIME")) * 24);
	iVar0 = (iVar0 + UNK_0xBD23F6A10B02FA04(joaat("FIRST_PERSON_CAM_TIME")));
	iVar1 = (iVar1 + UNK_0x959C6922055154B5(joaat("MP_FIRST_PERSON_CAM_TIME")) * 24);
	iVar1 = (iVar1 + UNK_0xBD23F6A10B02FA04(joaat("MP_FIRST_PERSON_CAM_TIME")));
	if ((iVar0 + iVar1) >= 15)
	{
		func_127(50, 1);
		return 1;
	}
	return 0;
}

int func_118()
{
	bool bVar0;

	if (UNK_0x5E109EC687D2605A(22))
	{
		return 0;
	}
	bVar0 = UNK_0x76B4C2FC8A367FEA();
	if (bVar0 > 0)
	{
		if (Global_31032 < bVar0)
		{
			if (Global_31032 >= 0)
			{
				func_133(22, bVar0);
			}
			Global_31032 = bVar0;
		}
	}
	if (UNK_0x76B4C2FC8A367FEA() >= 50)
	{
		func_127(22, 1);
		return 1;
	}
	return 0;
}

int func_119(bool bParam0)
{
	int iVar0[6];
	bool bVar7;
	int iVar8;
	int iVar9;

	if (UNK_0x5E109EC687D2605A(17))
	{
		return 0;
	}
	iVar0[0] = func_125();
	iVar0[1] = func_124();
	iVar0[2] = func_123();
	iVar0[3] = func_122();
	iVar0[4] = func_121();
	iVar0[5] = func_120();
	bVar7 = false;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (iVar0[iVar8])
		{
			bVar7++;
		}
		iVar8++;
	}
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_DISCIPLINE_GOLD_EARNED"), &iVar9, -1);
	if (bVar7 > iVar9 && bVar7 > 0)
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_DISCIPLINE_GOLD_EARNED"), bVar7, 1);
		func_133(17, bVar7);
	}
	if (bParam0)
	{
	}
	if (!iVar0[0])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!iVar0[1])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!iVar0[2])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!iVar0[3])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!iVar0[4])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!iVar0[5])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	func_127(17, 1);
	return 1;
}

int func_120()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_111638.f_1983[0 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_1983[1 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_1983[2 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_121()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_111638.f_19142[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_19142[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_19142[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_122()
{
	bool bVar0;

	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_1, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_123()
{
	bool bVar0;

	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_124()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_111638.f_19011.f_19[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_125()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_111638.f_20006[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_126(bool bParam0)
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
		func_133(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_127(27, 1);
	return 1;
}

int func_127(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_128(iParam0, iParam1);
}

int func_128(int iParam0, int iParam1)
{
	if (func_160(14) && !func_110(iParam0))
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
	if (func_105(&Global_4270065))
	{
		if (func_131(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_129(&Global_4270065, iParam0))
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

bool func_129(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_160(14) && !func_110(iParam1))
	{
		return false;
	}
	if (func_131(uParam0, iParam1))
	{
		return false;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
	}
	func_165(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_130(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_130(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_160(14) && !func_110(iParam1))
	{
		return 0;
	}
	if (func_131(uParam0, iParam1))
	{
		return 0;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_131(var uParam0, int iParam1)
{
	return func_132(uParam0, iParam1) != -1;
}

int func_132(var uParam0, int iParam1)
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

int func_133(int iParam0, bool bParam1)
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

int func_134(bool bParam0)
{
	int iVar0;

	iVar0 = (func_147(bParam0) + func_135(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_135(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_18569)
	{
		if (Global_111638.f_18569[iVar0 /*6*/].f_3 != -1 && func_145(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_143(iVar0, 7))
			{
				iVar7 = func_141(iVar0, 7, iVar5);
				if (!Global_61737[iVar7 /*13*/].f_7)
				{
					if (func_138(iVar7) == 1)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_137(iVar4, iVar3, 0);
			iVar2 = func_136(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				if (bParam0)
				{
				}
				iVar2 = Global_111638.f_2347[(iVar0 - 52) /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_136(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_137(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;

	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_138(int iParam0)
{
	if (func_139(iParam0, func_140(Global_61737[iParam0 /*13*/].f_4)))
	{
		return 1;
	}
	return 0;
}

bool func_139(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (Global_61737[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return false;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return false;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_111638.f_24899[4 /*4*/] == func_56())
	{
		Global_61737[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_61737[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_61737[iParam0 /*13*/].f_2)
		{
			return true;
		}
	}
	else if (iParam1 >= Global_61737[iParam0 /*13*/].f_2)
	{
		return true;
	}
	return false;
}

int func_140(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (UNK_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			return Global_89532[iParam0 /*34*/].f_17[iParam2];
		case 7:
			return func_142(iParam0, iParam2);
		default:
			break;
	}
	return 914;
}

int func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				case 1:
					return 742;
				default:
					break;
			}
			return -1;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				case 1:
					return 744;
				default:
					break;
			}
			return -1;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				case 1:
					return 746;
				default:
					break;
			}
			return -1;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				case 1:
					return 748;
				default:
					break;
			}
			return -1;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				default:
					break;
			}
			return -1;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				default:
					break;
			}
			return -1;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				case 1:
					return 752;
				default:
					break;
			}
			return -1;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				case 1:
					return 754;
				default:
					break;
			}
			return -1;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				case 1:
					return 756;
				case 2:
					return 757;
				default:
					break;
			}
			return -1;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				case 1:
					return 759;
				default:
					break;
			}
			return -1;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				case 1:
					return 761;
				default:
					break;
			}
			return -1;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				default:
					break;
			}
			return -1;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				default:
					break;
			}
			return -1;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				case 1:
					return 765;
				default:
					break;
			}
			return -1;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				default:
					break;
			}
			return -1;
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				case 1:
					return 768;
				case 2:
					return 769;
				default:
					break;
			}
			return -1;
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				case 1:
					return 771;
				default:
					break;
			}
			return -1;
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				case 1:
					return 773;
				default:
					break;
			}
			return -1;
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				case 1:
					return 775;
				default:
					break;
			}
			return -1;
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				case 1:
					return 777;
				default:
					break;
			}
			return -1;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				case 1:
					return 779;
				default:
					break;
			}
			return -1;
		default:
			break;
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				case 1:
					return 781;
				case 2:
					return 782;
				default:
					break;
			}
			return -1;
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				case 1:
					return 784;
				default:
					break;
			}
			return -1;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				case 1:
					return 786;
				default:
					break;
			}
			return -1;
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				case 1:
					return 788;
				default:
					break;
			}
			return -1;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				default:
					break;
			}
			return -1;
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				case 1:
					return 791;
				case 2:
					return 792;
				default:
					break;
			}
			return -1;
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				case 1:
					return 794;
				case 2:
					return 795;
				default:
					break;
			}
			return -1;
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				case 1:
					return 797;
				default:
					break;
			}
			return -1;
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				case 1:
					return 799;
				default:
					break;
			}
			return -1;
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				case 1:
					return 801;
				default:
					break;
			}
			return -1;
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				case 1:
					return 803;
				default:
					break;
			}
			return -1;
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				case 1:
					return 805;
				default:
					break;
			}
			return -1;
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				default:
					break;
			}
			return -1;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				case 1:
					return 808;
				case 2:
					return 809;
				default:
					break;
			}
			return -1;
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				case 1:
					return 829;
				case 2:
					return 830;
				default:
					break;
			}
			return -1;
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				case 1:
					return 832;
				case 2:
					return 833;
				default:
					break;
			}
			return -1;
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				case 1:
					return 835;
				case 2:
					return 836;
				default:
					break;
			}
			return -1;
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				case 1:
					return 838;
				case 2:
					return 839;
				default:
					break;
			}
			return -1;
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				case 1:
					return 841;
				case 2:
					return 842;
				default:
					break;
			}
			return -1;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				case 1:
					return 844;
				case 2:
					return 845;
				default:
					break;
			}
			return -1;
		default:
			break;
	}
	return -1;
}

int func_143(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return Global_89532[iParam0 /*34*/].f_16;
		case 7:
			return func_144(iParam0);
		default:
			break;
	}
	return 0;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		case 8:
			return 1;
		case 12:
			return 1;
		case 14:
			return 2;
		case 16:
			return 2;
		case 17:
			return 3;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 2;
		case 23:
			return 1;
		case 25:
			return 3;
		case 26:
			return 2;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 2;
		case 32:
			return 2;
		default:
			break;
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		case 34:
			return 2;
		case 38:
			return 2;
		case 39:
			return 2;
		case 40:
			return 1;
		case 41:
			return 3;
		case 42:
			return 3;
		case 43:
			return 2;
		case 46:
			return 2;
		case 47:
			return 2;
		case 49:
			return 2;
		case 50:
			return 2;
		case 51:
			return 1;
		case 57:
			return 3;
		case 58:
			return 3;
		case 59:
			return 3;
		case 60:
			return 3;
		case 61:
			return 3;
		case 62:
			return 3;
		case 24:
			return 3;
		default:
			break;
	}
	return 0;
}

bool func_145(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return !UNK_0xEAE0D21A50E6C7F4(Global_89532[iParam0 /*34*/].f_15, 5);
		case 7:
			return func_146(iParam0);
		default:
			break;
	}
	return false;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 0;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 1;
		case 13:
			return 0;
		case 14:
			return 1;
		case 15:
			return 0;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 26:
			return 1;
		case 27:
			return 0;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 0;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 0;
		case 49:
			return 1;
		case 50:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 54:
			return 1;
		case 55:
			return 1;
		case 56:
			return 1;
		case 53:
			return 1;
		case 57:
			return 1;
		case 58:
			return 1;
		case 59:
			return 1;
		case 60:
			return 1;
		case 61:
			return 1;
		case 62:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_147(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;

	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_9080.f_330)
	{
		if (Global_111638.f_9080.f_330[iVar0 /*6*/].f_3 != -1 && func_145(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_143(iVar0, 1))
			{
				iVar7 = func_141(iVar0, 1, iVar5);
				if (!Global_61737[iVar7 /*13*/].f_7)
				{
					if (func_138(iVar7) == 1)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_148(iVar7);
							if (iVar8 >= 2147483647)
							{
								iVar8 = 1;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_137(iVar4, iVar3, 0);
			iVar2 = func_136(fVar6);
			if (iVar8 > -1)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_148(int iParam0)
{
	int iVar0;

	iVar0 = func_140(Global_61737[iParam0 /*13*/].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

void func_149()
{
	bool bVar0;
	bool bVar1;

	UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0);
	if (!UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "creatures@shark@move", "attack_player", 3))
	{
		func_127(25, 1);
		return;
	}
	if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0xA390E7DD86EDBEA0(UNK_0x16F2683693E537C9());
		if (UNK_0xEC560E589DF8370E(bVar0))
		{
			bVar1 = UNK_0x940C1429253D3B1B(bVar0);
			if (func_150(bVar1))
			{
				if (UNK_0x134B62B726CEC8E6(bVar1) == joaat("A_C_SHARKTIGER"))
				{
					func_127(25, 1);
					return;
				}
			}
		}
	}
}

bool func_150(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

void func_151()
{
	switch (iLocal_55)
	{
		case 0:
			fLocal_63 = 0f;
			if (!UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
			{
				return;
			}
			if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				return;
			}
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) >= 3 && UNK_0x2C1AA3A291786CDC() == 0)
			{
				if (func_156() == 2)
				{
					func_162(&uLocal_58);
					iLocal_55++;
				}
			}
			break;
		case 1:
			if (func_155() || UNK_0x991B1F0980C62628())
			{
				return;
			}
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 3)
			{
				func_154(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (UNK_0x2C1AA3A291786CDC() == 1)
			{
				func_154(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (func_156() < 2)
			{
				func_154(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				func_154(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			fLocal_63 = func_153(&uLocal_58);
			if (fLocal_63 >= 180f)
			{
				func_127(24, 1);
				func_152(&uLocal_58);
				iLocal_55++;
			}
			break;
		case 2:
			iLocal_55++;
			break;
	}
}

void func_152(bool bParam0)
{
	if (func_95(bParam0))
	{
		if (!func_94(bParam0))
		{
			bParam0->f_2 = (func_93(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
			UNK_0x5D96D8530B3D0904(bParam0, 2);
		}
	}
}

float func_153(var uParam0)
{
	if (func_95(uParam0))
	{
		if (func_94(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_93(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_154(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_155()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

int func_156()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = func_158(2);
	if (func_157(bVar1, 0) || UNK_0xEAE0D21A50E6C7F4(Global_94595, 2))
	{
		iVar0++;
	}
	bVar1 = func_158(1);
	if (func_157(bVar1, 0) || UNK_0xEAE0D21A50E6C7F4(Global_94595, true))
	{
		iVar0++;
	}
	bVar1 = func_158(0);
	if (func_157(bVar1, 0) || UNK_0xEAE0D21A50E6C7F4(Global_94595, false))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_157(bool bParam0, int iParam1)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_58(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_158(bVar0) != bParam0)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				return false;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94597, bVar0))
		{
			return true;
		}
	}
	return false;
}

int func_158(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_56())
	{
		return UNK_0x16F2683693E537C9();
	}
	return Global_96222[func_159(iParam0)];
}

int func_159(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_160(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_161(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_162(bool bParam0)
{
	func_163(bParam0, 0f);
}

void func_163(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_93(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_164(var uParam0, int iParam1)
{
	uParam0->f_79 = iParam1;
	if (uParam0->f_79)
	{
		func_112(uParam0, 0);
	}
}

void func_165(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_166(uParam0, iVar0);
		iVar0++;
	}
	func_112(uParam0, (Global_4270064 - 0.5f));
}

void func_166(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_167()
{
	int iVar0;
	int iVar1;

	iVar1 = 78;
	iVar0 = 1;
	while (iVar0 <= (iVar1 - 1))
	{
		if (UNK_0x5E109EC687D2605A(iVar0))
		{
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

