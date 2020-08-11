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
	int iLocal_18[4] = { 0, 0, 0, 0 };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	bool bLocal_31 = false;
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
	fLocal_27 = 0.72f;
	fLocal_28 = 0.42f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	UNK_0xB57F88F0123F4C38();
	Global_21871 = 0;
	Global_19663 = 0;
	func_18();
	Global_19486.f_1 = 7;
	func_17(Global_19467, "DISPLAY_VIEW", 14f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_16(Global_19467, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				case 8:
					if (Global_21871 == 1)
					{
						func_5();
					}
					break;
				case 3:
					UNK_0x10FAF14A60A0DBE1();
					break;
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_19454, 0))
			{
				Global_19464 = 1;
				Global_21871 = 0;
				Global_19486.f_1 = 7;
				func_18();
				func_17(Global_19467, "DISPLAY_VIEW", 14f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_16(Global_19467, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
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

bool func_2(int iParam0, int iParam1, int iParam2)
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

void func_3()
{
	UNK_0x10FAF14A60A0DBE1();
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
	UNK_0xC1032CAC14DE468A(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()
{
	int iVar0;

	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_29, fLocal_30, &(Global_1798[Global_22093[iLocal_25 /*9*/] /*29*/].f_3), 0);
	fLocal_29 = (fLocal_29 + 0.07f);
	func_10(255, 255, 255, 205);
	if (Global_22093[iLocal_25 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_29, fLocal_30, "CELL_506", Global_22093[iLocal_25 /*9*/].f_2.f_2, Global_22093[iLocal_25 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_29, fLocal_30, "CELL_503", Global_22093[iLocal_25 /*9*/].f_2.f_2, Global_22093[iLocal_25 /*9*/].f_2.f_1);
	}
	fLocal_29 = (fLocal_29 + 0.07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_29, fLocal_30, "CELL_505", Global_22093[iLocal_25 /*9*/].f_2.f_3, Global_22093[iLocal_25 /*9*/].f_2.f_4);
	fLocal_29 = fLocal_27;
	func_10(255, 255, 255, 205);
	fLocal_30 = (fLocal_30 + 0.02f);
	if (Global_21924[Global_22093[iLocal_25 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	UNK_0xF1F881BAAAFB43B1(0f, 0.93f);
	func_8(fLocal_29, fLocal_30, &(Global_21924[Global_22093[iLocal_25 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_30 = (fLocal_30 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_21924[Global_22093[iLocal_25 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_30 = (fLocal_30 + 0.04f);
		if (Global_21924[Global_22093[iLocal_25 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_29, fLocal_30, &(Global_21924[Global_22093[iLocal_25 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_29, fLocal_30, &(Global_21924[Global_22093[iLocal_25 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_21924[Global_22093[iLocal_25 /*9*/].f_1 /*42*/].f_27[iVar0], Global_21924[Global_22093[iLocal_25 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, bool bParam2, int iParam3)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_9()
{
	UNK_0xD3539A877EC25E86(0.4f, 0.4f);
	UNK_0x7178F32F6742C936(255, 128, 0, 255);
	UNK_0x7635737DA2E9BC79(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	UNK_0xD3539A877EC25E86(0.3f, 0.3f);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(1, 0, 0, 0, 205);
	UNK_0x57614350887C2EAD(1);
	UNK_0x7BBAC160090910C3(0);
	UNK_0x7178F32F6742C936(iParam0, iParam1, iParam2, bParam3);
}

void func_11()
{
	if (func_2(2, Global_19455, 0))
	{
		iLocal_25 = iLocal_18[iLocal_24];
		Global_21871 = 1;
		func_12(Global_19467, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_19467, "DISPLAY_VIEW", 15f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_16(Global_19467, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_19486.f_1 = 8;
		Global_21871 = 1;
	}
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
		func_13(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_13(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_13(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_13(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_13(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_13(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_14()
{
	if (bLocal_31)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_31 = false;
		}
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_24 > 0)
			{
				iLocal_24 = (iLocal_24 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_24++;
			if (iLocal_24 == iLocal_23)
			{
				iLocal_24 = 0;
			}
		}
	}
	if (bLocal_31 == 0)
	{
		if (func_2(2, Global_19462, 0))
		{
			if (iLocal_24 > 0)
			{
				iLocal_24 = (iLocal_24 - 1);
			}
			bLocal_31 = true;
			SYSTEM::SETTIMERA(0);
		}
		if (func_2(2, Global_19463, 0))
		{
			iLocal_24++;
			if (iLocal_24 == iLocal_23)
			{
				iLocal_24 = 0;
			}
			bLocal_31 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()
{
	int iVar0;

	iVar0 = 0;
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	iLocal_26 = iLocal_23;
	while (iVar0 < iLocal_26)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24)
		{
			func_9();
		}
		func_8(fLocal_29, fLocal_30, &(Global_1798[Global_22093[iLocal_18[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_29 = (fLocal_29 + 0.07f);
		func_10(255, 255, 255, 205);
		if (Global_22093[iLocal_18[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_29, fLocal_30, "CELL_506", Global_22093[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_22093[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_29, fLocal_30, "CELL_503", Global_22093[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_22093[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_29 = (fLocal_29 + 0.07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_29, fLocal_30, "CELL_505", Global_22093[iLocal_18[iVar0] /*9*/].f_2.f_3, Global_22093[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_29 = fLocal_27;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24)
		{
			func_9();
		}
		fLocal_30 = (fLocal_30 + 0.02f);
		UNK_0xF1F881BAAAFB43B1(0f, 0.93f);
		func_8(fLocal_29, fLocal_30, &(Global_21924[Global_22093[iLocal_18[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_30 = (fLocal_30 + 0.05f);
		iVar0++;
	}
}

void func_16(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_13(bParam2);
	if (!UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		func_13(bParam3);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_13(bParam4);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam5))
	{
		func_13(bParam5);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam6))
	{
		func_13(bParam6);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_17(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_18()
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;

	iLocal_23 = 0;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = 0;
		iVar7 = 3;
		Global_22093[iVar7 /*9*/].f_2 = -1;
		Global_22093[iVar7 /*9*/].f_2.f_1 = 0;
		Global_22093[iVar7 /*9*/].f_2.f_2 = 0;
		Global_22093[iVar7 /*9*/].f_2.f_3 = 0;
		Global_22093[iVar7 /*9*/].f_2.f_5 = 0;
		while (iVar6 < 4)
		{
			if (iVar0[iVar6] == 0)
			{
				if (Global_22093[iVar6 /*9*/].f_8 != 0)
				{
					if (func_19(Global_22093[iVar6 /*9*/].f_2, Global_22093[iVar7 /*9*/].f_2))
					{
						iVar7 = iVar6;
					}
				}
			}
			iVar6++;
		}
		iLocal_18[iVar5] = iVar7;
		iVar0[iVar7] = 1;
		if (Global_22093[iVar5 /*9*/].f_8 != 0)
		{
			iLocal_23++;
		}
		iVar5++;
	}
	func_12(Global_19467, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

bool func_19(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

