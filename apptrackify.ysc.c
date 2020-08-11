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
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
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
	fLocal_27 = 9.99f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	bLocal_30 = 0f;
	UNK_0xB57F88F0123F4C38();
	func_10();
	func_7();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (SYSTEM::TIMERA() > 125)
					{
						func_10();
						SYSTEM::SETTIMERA(0);
					}
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_29) * 30 && SYSTEM::TIMERB() > 150)
					{
						UNK_0x7E60C62A7CE58FC8(Global_19467, "APP_FUNCTION");
						UNK_0x3CAEA85DA607305E(true);
						UNK_0x7E60D21B163E9D56();
						SYSTEM::SETTIMERB(0);
					}
					if (SYSTEM::TIMERB() > 2000)
					{
						UNK_0x7E60C62A7CE58FC8(Global_19467, "APP_FUNCTION");
						UNK_0x3CAEA85DA607305E(true);
						UNK_0x7E60D21B163E9D56();
						SYSTEM::SETTIMERB(0);
					}
					break;
				case 8:
					if (func_6(2, Global_19454, 0))
					{
						func_5();
						Global_19464 = 1;
						func_10();
						func_7();
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
						}
					}
					break;
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	UNK_0x0674E58A79778E99(&Global_7357, 22);
	UNK_0x10FAF14A60A0DBE1();
}

void func_3(int iParam0, int iParam1)
{
	Global_4270018[iParam0] = iParam1;
}

bool func_4()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_5()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

bool func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_19474)
	{
		func_8(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	UNK_0x0674E58A79778E99(&Global_7356, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_9(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_9(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_9(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_9(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_9(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_9(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_10()
{
	bool bVar0;
	bool bVar1;

	if (func_18() == 0)
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			vLocal_20 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			fLocal_23 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
			func_17();
			func_16();
			func_15();
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(23);
				UNK_0x3CAEA85DA607305E(false);
				if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 30))
				{
					UNK_0x3CAEA85DA607305E(-99);
					UNK_0x3CAEA85DA607305E(false);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(fLocal_27));
					UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(fLocal_28));
				}
				UNK_0x3CAEA85DA607305E(100);
				if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 22))
				{
					UNK_0x3CAEA85DA607305E(true);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(false);
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 29))
				{
					UNK_0x1200CC973A2399C8(false);
				}
				else
				{
					UNK_0x1200CC973A2399C8(true);
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_7358, true))
				{
					UNK_0x7C19E5E4784BD7CF(bLocal_30);
				}
				UNK_0x7E60D21B163E9D56();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_19467, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	else if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		vLocal_20 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		fLocal_23 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
		if (Global_4270040 > 21)
		{
		}
		bVar0 = false;
		while (bVar0 < Global_4270040)
		{
			func_13(bVar0);
			func_12(bVar0);
			func_11(bVar0);
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(23);
				UNK_0x3CAEA85DA607305E(bVar0);
				bVar1 = false;
				switch (bVar0)
				{
					case 0:
						if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 5))
						{
							bVar1 = true;
						}
						break;
					case 1:
						if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 6))
						{
							bVar1 = true;
						}
						break;
					case 2:
						if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 7))
						{
							bVar1 = true;
						}
						break;
					case 3:
						if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					UNK_0x3CAEA85DA607305E(-99);
					UNK_0x3CAEA85DA607305E(false);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(fLocal_27));
					UNK_0x3CAEA85DA607305E(SYSTEM::FLOOR(fLocal_28));
				}
				UNK_0x3CAEA85DA607305E(100);
				if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 22))
				{
					UNK_0x1200CC973A2399C8(true);
				}
				else
				{
					UNK_0x1200CC973A2399C8(true);
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 29))
				{
					UNK_0x1200CC973A2399C8(false);
				}
				else
				{
					UNK_0x1200CC973A2399C8(true);
				}
				UNK_0x7C19E5E4784BD7CF(bLocal_30);
				UNK_0x3CAEA85DA607305E(Global_4270018[bVar0]);
				UNK_0x7E60D21B163E9D56();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_19467, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			bVar0++;
		}
	}
}

float func_11(bool bParam0)
{
	fLocal_25 = (Global_4269954[bParam0 /*3*/] - vLocal_20.x);
	fLocal_26 = (SYSTEM::COS(((3.14159f / 180f) * vLocal_20.x)) * (Global_4269954[bParam0 /*3*/].f_1 - vLocal_20.y));
	fLocal_27 = UNK_0x5D8ABF6396A76564(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_12(bool bParam0)
{
	fLocal_29 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_4269954[bParam0 /*3*/], vLocal_20));
	bLocal_30 = (Global_4269954[bParam0 /*3*/].f_2 - vLocal_20.z);
	return fLocal_29;
}

float func_13(bool bParam0)
{
	fLocal_28 = SYSTEM::SQRT((((Global_4269954[bParam0 /*3*/] - vLocal_20.x) * (Global_4269954[bParam0 /*3*/] - vLocal_20.x)) + ((Global_4269954[bParam0 /*3*/].f_1 - vLocal_20.y) * (Global_4269954[bParam0 /*3*/].f_1 - vLocal_20.y))));
	return fLocal_28;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_25 = (Global_21911 - vLocal_20.x);
	fLocal_26 = (SYSTEM::COS(((3.14159f / 180f) * vLocal_20.x)) * (Global_21911.f_1 - vLocal_20.y));
	fLocal_27 = UNK_0x5D8ABF6396A76564(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_16()
{
	fLocal_29 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_21911, vLocal_20));
	bLocal_30 = (Global_21911.f_2 - vLocal_20.z);
	return fLocal_29;
}

float func_17()
{
	fLocal_28 = SYSTEM::SQRT((((Global_21911 - vLocal_20.x) * (Global_21911 - vLocal_20.x)) + ((Global_21911.f_1 - vLocal_20.y) * (Global_21911.f_1 - vLocal_20.y))));
	return fLocal_28;
}

int func_18()
{
	if (Global_76622 == 1)
	{
		return 1;
	}
	return 0;
}

