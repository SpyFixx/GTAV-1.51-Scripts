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
	int iLocal_20 = 0;
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
	UNK_0xB57F88F0123F4C38();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		SYSTEM::SETTIMERA(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && SYSTEM::TIMERA() > 1500)
					{
						func_6();
						SYSTEM::SETTIMERA(0);
					}
					break;
				case 8:
					if (func_5(2, Global_19454, 0))
					{
						func_4();
						Global_19464 = 1;
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
						}
					}
					break;
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_19488 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

bool func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_2()
{
	UNK_0x10FAF14A60A0DBE1();
}

bool func_3()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_4()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

bool func_5(int iParam0, int iParam1, int iParam2)
{
	if (UNK_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 1 && UNK_0xD245978525608929(iParam0, iParam1)))
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			if (UNK_0xDAC65F45B0B2D176() == 0 || (UNK_0x4FD68D5821EE3E19() && UNK_0x91E3F625EF57450D(2)))
			{
				return false;
			}
		}
		if (UNK_0x798A3F1296751F46() || UNK_0xE57E602827E07C9D())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_19467, "SET_DATA_SLOT_EMPTY", 24f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(24);
	UNK_0x3CAEA85DA607305E(false);
	if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 23))
	{
		UNK_0x1200CC973A2399C8(false);
		func_8("CELL_EXTBYOU");
		UNK_0x3CAEA85DA607305E(Global_4269766);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270046));
		UNK_0x3CAEA85DA607305E(Global_4269767);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270046.f_1));
		UNK_0x3CAEA85DA607305E(Global_4269768);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270046.f_2));
		func_8("CELL_BODYG");
		UNK_0x3CAEA85DA607305E(Global_4269769);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270049));
		UNK_0x3CAEA85DA607305E(Global_4269770);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270049.f_1));
		UNK_0x3CAEA85DA607305E(Global_4269771);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270049.f_2));
	}
	else
	{
		UNK_0x1200CC973A2399C8(false);
		func_8("CELL_EXTBYOU");
		UNK_0x3CAEA85DA607305E(Global_4269769);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270049));
		UNK_0x3CAEA85DA607305E(Global_4269770);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270049.f_1));
		UNK_0x3CAEA85DA607305E(Global_4269771);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270049.f_2));
		func_8("CELL_EXTBTARG");
		UNK_0x3CAEA85DA607305E(Global_4269766);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270046));
		UNK_0x3CAEA85DA607305E(Global_4269767);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270046.f_1));
		UNK_0x3CAEA85DA607305E(Global_4269768);
		UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4270046.f_2));
	}
	UNK_0x7E60D21B163E9D56();
	func_9(Global_19467, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

void func_8(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	UNK_0x7E60D21B163E9D56();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_19474)
	{
		func_12(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	UNK_0x0674E58A79778E99(&Global_7356, 17);
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		func_8(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_8(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_8(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_8(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_8(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

