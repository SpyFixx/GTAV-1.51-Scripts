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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_52[25];
	bool bLocal_203 = false;
	vector3 vLocal_204 = { 0f, 0f, 0f };
	vector3 vLocal_207 = { 0f, 0f, 0f };
	bool bLocal_210 = false;
	bool bLocal_211 = false;
	bool bLocal_212 = false;
	bool bLocal_213 = false;
	bool bLocal_214 = false;
	bool bLocal_215 = false;
	bool bLocal_216 = false;
	bool bLocal_217 = false;
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
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_24 == 0)
		{
			if (Global_19486.f_1 != 9)
			{
				switch (Global_19486.f_1)
				{
					case 7:
						if ((bLocal_210 == 0 && bLocal_211 == 0) && Global_21840 == 0)
						{
							func_22();
							func_16();
						}
						break;
					case 8:
						if ((func_15(2, Global_19454, 0) && bLocal_210 == 0) && bLocal_211 == 0)
						{
							func_14();
							Global_19464 = 1;
							if (Global_19486.f_1 > 3)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 15))
								{
								}
								func_13();
							}
						}
						break;
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (bLocal_210)
				{
					func_9();
				}
				if (bLocal_211)
				{
					func_8();
				}
			}
			else
			{
				Global_19488 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
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
	iLocal_25 = UNK_0x57AA1C471AF0568D(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		case 1:
			break;
		case 2:
			Global_19486.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;

	func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	iLocal_21 = UNK_0xFD843F9CCC74B536();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (UNK_0x41CBD5EC291293E0(iLocal_22))
		{
			func_6(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_52[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_19467, "DISPLAY_VIEW", 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_4(Global_19467, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_19474)
	{
		func_6(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	UNK_0x0674E58A79778E99(&Global_7356, 17);
}

void func_4(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_5(bParam2);
	if (!UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		func_5(bParam3);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_5(bParam4);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam5))
	{
		func_5(bParam5);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam6))
	{
		func_5(bParam6);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_5(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_5(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_5(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_5(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_5(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_5(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_8()
{
	if (bLocal_210 == 0 && bLocal_211 == 1)
	{
		if (bLocal_215)
		{
			vLocal_207.x = (vLocal_207.x + 1f);
		}
		if (vLocal_207.x > vLocal_204.x || vLocal_207.x == vLocal_204.x)
		{
			vLocal_207.x = vLocal_204.x;
			bLocal_215 = false;
		}
		if (bLocal_216)
		{
			vLocal_207.f_1 = (vLocal_207.y - 2f);
		}
		if (vLocal_207.y < vLocal_204.y || vLocal_207.y == vLocal_204.y)
		{
			vLocal_207.f_1 = vLocal_204.y;
			bLocal_216 = false;
		}
		if (bLocal_217)
		{
			vLocal_207.f_2 = (vLocal_207.z - 7f);
		}
		if (vLocal_207.z < vLocal_204.z || vLocal_207.z == vLocal_204.z)
		{
			vLocal_207.f_2 = vLocal_204.z;
			bLocal_217 = false;
		}
		if ((bLocal_215 == 0 && bLocal_216 == 0) && bLocal_217 == 0)
		{
			bLocal_211 = false;
			if (Global_19486.f_1 > 3)
			{
				Global_19486.f_1 = 7;
				UNK_0xA37A90C62806D848(1);
				Global_21842 = 1;
				func_26();
			}
		}
		UNK_0x44FE29702110D5C6(vLocal_207, 0);
	}
}

void func_9()
{
	if ((bLocal_210 == 1 && bLocal_211 == 0) && Global_21840 == 6)
	{
		if (bLocal_212)
		{
			vLocal_207.x = (vLocal_207.x - 1f);
		}
		if (vLocal_207.x < vLocal_204.x || vLocal_207.x == vLocal_204.x)
		{
			vLocal_207.x = vLocal_204.x;
			bLocal_212 = false;
		}
		if (bLocal_213)
		{
			vLocal_207.f_1 = (vLocal_207.y - 0.5f);
		}
		if (vLocal_207.y < vLocal_204.y || vLocal_207.y == vLocal_204.y)
		{
			vLocal_207.f_1 = vLocal_204.y;
			bLocal_213 = false;
		}
		if (bLocal_214)
		{
			vLocal_207.f_2 = (vLocal_207.z + 7f);
		}
		if (vLocal_207.z > vLocal_204.z || vLocal_207.z == vLocal_204.z)
		{
			vLocal_207.f_2 = vLocal_204.z;
			bLocal_214 = false;
		}
		if ((bLocal_212 == 0 && bLocal_213 == 0) && bLocal_214 == 0)
		{
			bLocal_210 = false;
			func_10("CELL_MSHELP_2");
		}
		UNK_0x44FE29702110D5C6(vLocal_207, 0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 15))
	{
		bLocal_210 = false;
		bLocal_211 = false;
		func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_6(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_19474)
		{
			func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x0674E58A79778E99(&Global_7356, 17);
		func_7(Global_19467, "DISPLAY_VIEW", 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_4(Global_19467, "SET_HEADER", &(Local_52[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_11()
{
	Global_21842 = 1;
	UNK_0xA37A90C62806D848(1);
	UNK_0x10FAF14A60A0DBE1();
}

bool func_12()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_13()
{
	if (bLocal_210 == 0)
	{
		UNK_0xED76A908847D23B4(&vLocal_207, 0);
		vLocal_204 = { Global_19446 };
		bLocal_211 = true;
		bLocal_215 = true;
		bLocal_216 = true;
		bLocal_217 = true;
	}
}

void func_14()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

bool func_15(int iParam0, int iParam1, int iParam2)
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

void func_16()
{
	if (bLocal_203)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_203 = false;
		}
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (bLocal_203 == 0)
	{
		if (func_15(2, Global_19462, 0))
		{
			func_20();
			bLocal_203 = true;
			SYSTEM::SETTIMERA(0);
		}
		if (func_15(2, Global_19463, 0))
		{
			func_17();
			bLocal_203 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()
{
	func_7(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_19669 == 0)
		{
			UNK_0x5A963FB0365294C8(2);
		}
		else
		{
			UNK_0x5A963FB0365294C8(1);
		}
	}
}

bool func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = UNK_0x5A0033B025D45F1B();
	iVar1 = UNK_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return true;
	}
	return true;
}

void func_20()
{
	func_7(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_19669 == 0)
		{
			UNK_0x5A963FB0365294C8(1);
		}
		else
		{
			UNK_0x5A963FB0365294C8(2);
		}
	}
}

void func_22()
{
	int iVar0;

	if (Global_19464 == 0)
	{
		if (func_15(2, Global_19455, 0))
		{
			UNK_0x0674E58A79778E99(&Global_7357, 15);
			func_24();
			Global_19464 = 1;
			UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
			iLocal_20 = UNK_0x7A8BB56B212464AC();
			while (!UNK_0xC95D7AEEDEF4946B(iLocal_20))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = UNK_0xA52833FE33F41C53(iLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_19486.f_1 > 3)
				{
					if (Global_21840 == 0)
					{
						func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_6(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_19467, "DISPLAY_VIEW", 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_4(Global_19467, "SET_HEADER", &(Local_52[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_19474)
						{
							func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						UNK_0x0674E58A79778E99(&Global_7356, 17);
						Global_21844 = iLocal_23;
						Global_21840 = 12;
						Global_19486.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (bLocal_211 == 0)
	{
		UNK_0xED76A908847D23B4(&vLocal_207, 0);
		vLocal_204 = { -90.3f, -0.8f, 90f };
		bLocal_210 = true;
		bLocal_212 = true;
		bLocal_213 = true;
		bLocal_214 = true;
	}
}

void func_24()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		UNK_0x5A963FB0365294C8(5);
	}
}

void func_26()
{
	if ((UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E()) || UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x9F830D3499A5773E();
		if (UNK_0x1ED2F074FDAB6B19(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_21842 = 1;
			Global_19486.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()
{
	StringCopy(&(Local_52[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_52[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_52[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_52[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_52[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_52[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_52[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_52[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_52[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_52[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_52[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_52[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_52[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_52[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_52[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_52[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_52[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_52[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_52[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_52[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

