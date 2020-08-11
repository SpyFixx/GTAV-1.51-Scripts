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
	bool bLocal_12 = false;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_26 = 0f;
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
	fLocal_16 = -99f;
	fLocal_26 = -1f;
	UNK_0xB57F88F0123F4C38();
	if (UNK_0x2EBF608FFE6CA406(32))
	{
		func_31();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_30(0);
		func_29();
		func_22();
		func_19();
		func_14();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_31();
		}
	}
}

bool func_1()
{
	if (Global_42562)
	{
		return true;
	}
	if (UNK_0x9F4FE516EAACCFC5(Global_42563))
	{
		return true;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("DRUNK")) > 0)
	{
		return true;
	}
	if (Global_42355 > 0)
	{
		return true;
	}
	return false;
}

void func_2()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;

	if (!Global_42562)
	{
		return;
	}
	iVar1 = UNK_0x1C0640BA9A7327B3();
	if (Global_42564 > iVar1 || Global_42564 == -1)
	{
		if (UNK_0x991B1F0980C62628())
		{
			return;
		}
		fVar2 = func_13();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = fVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_8();
		if (Global_42567 != Global_42568)
		{
			fVar6 = (Global_42568 - Global_42567);
			Global_42567 = (Global_42567 + (fVar6 * 0.1f));
			if (UNK_0x755FF954DAE327E1((Global_42567 - Global_42568)) < 0.01f)
			{
				Global_42567 = Global_42568;
			}
		}
		if (!UNK_0x174D27C2C2F899E5())
		{
			UNK_0x0525F87A0751EA62("DRUNK_SHAKE", ((Global_42567 * fVar3) * fVar5));
		}
		if ((UNK_0x1C0640BA9A7327B3() % 100) == 0)
		{
			if (Global_42564 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
				{
					fLocal_26 = fVar3;
				}
				UNK_0xA480BA3CD1C5E797(((Global_42567 * fVar3) * fVar5));
				UNK_0x36629DB72EBCB78C(((Global_42566 * fVar3) * fVar5));
				fLocal_26 = fVar3;
			}
		}
		if (((Global_42566 * fVar3) * fVar5) < 1f)
		{
			UNK_0x58478905E1A5347E(((Global_42566 * fVar3) * fVar5));
		}
		else
		{
			UNK_0x58478905E1A5347E(1f);
		}
		if (!UNK_0xD5B49A7E47E6726F())
		{
			UNK_0xF5AC1996BA944009("DRUNK_SHAKE", (((Global_42567 * Global_42561) * fVar3) * fVar5));
		}
		UNK_0xE788E9364E3EB9B1((((Global_42567 * Global_42561) * fVar3) * fVar5));
		if (UNK_0x9F4FE516EAACCFC5(Global_42563))
		{
			if (UNK_0xB3FFA20AEA3A2D9C(Global_42563))
			{
				UNK_0x97271F6489B78F2D(Global_42563, ((Global_42567 * fVar3) * fVar5));
			}
		}
		if (!UNK_0xEA6BC48857E0AC4C(&Global_42590) && !UNK_0xEA6BC48857E0AC4C(&Global_42574))
		{
			UNK_0x8BC9595FD2792B5D(&Global_42574);
			StringCopy(&Global_42590, "", 16);
		}
		UNK_0x2103752056F874E1();
		if (Global_42569 > 0f)
		{
			if (fLocal_16 != Global_42569)
			{
				if (UNK_0x21AA848387F2A52A() != -1)
				{
				}
				else if (!UNK_0x015FBC1F0B5E9554())
				{
					UNK_0x59051C6E0FADB591(&Global_42570, 15f);
					fLocal_16 = Global_42569;
				}
			}
			else
			{
				if (UNK_0x21AA848387F2A52A() != -1 && UNK_0xE0FCC099E413CCBA() != -1)
				{
					fLocal_16 = -99f;
				}
				UNK_0x435B8A00821D00E7(2);
				iVar7 = (Global_42564 - iVar1);
				if (iVar7 <= (Global_42565 / 2) && Global_42564 != -1)
				{
					bVar8 = false;
					if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						if (UNK_0x7DECE00E09F41C95(UNK_0x16F2683693E537C9()))
						{
							bVar8 = true;
						}
					}
					if (func_6(UNK_0x16F2683693E537C9()))
					{
						Global_42564 += 1000;
					}
					else if (bVar8)
					{
						Global_42564 += 1000;
					}
					else if (UNK_0x21AA848387F2A52A() != -1)
					{
						Global_42564 += 1000;
					}
					else if (func_5())
					{
						Global_42564 += 1000;
					}
					else
					{
						if (UNK_0xE0FCC099E413CCBA() != -1)
						{
							UNK_0xBDB4B720F799CDDB((SYSTEM::TO_FLOAT((Global_42565 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_42569 = 0f;
						StringCopy(&Global_42570, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_26 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	bLocal_12 = true;
}

void func_3(bool bParam0)
{
	UNK_0x36629DB72EBCB78C(0f);
	UNK_0x58478905E1A5347E(0f);
	UNK_0xA480BA3CD1C5E797(0f);
	UNK_0x051C254DA616D646(true);
	UNK_0xE788E9364E3EB9B1(0f);
	UNK_0x7E7993893F7C203D(1);
	UNK_0x435B8A00821D00E7(0);
	if (UNK_0x562F77A7F33D2E46("SAFEHOUSE_STONED_MICHAEL"))
	{
		UNK_0x8910D3D58E0132B8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!UNK_0xEA6BC48857E0AC4C(&Global_42574))
	{
		if (UNK_0x562F77A7F33D2E46(&Global_42574))
		{
			UNK_0x8910D3D58E0132B8(&Global_42574);
		}
	}
	if (UNK_0x9F4FE516EAACCFC5(Global_42563))
	{
		if (UNK_0xB3FFA20AEA3A2D9C(Global_42563))
		{
			UNK_0x97271F6489B78F2D(Global_42563, 0f);
			UNK_0x10486C0590CF176C(Global_42563, 1);
		}
	}
	if (UNK_0xF45FDB21A0F137CB())
	{
		UNK_0xC1B8EFD8630D086B(0);
	}
	if (bParam0)
	{
		if (UNK_0xE0FCC099E413CCBA() != -1 || UNK_0x21AA848387F2A52A() != -1)
		{
			UNK_0x225CFE81EA219E44();
		}
		else if (UNK_0x991B1F0980C62628())
		{
			UNK_0x225CFE81EA219E44();
		}
	}
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
	StringCopy(&Global_42574, "", 64);
	StringCopy(&Global_42590, "", 16);
	func_4();
}

void func_4()
{
	Global_42562 = 0;
	Global_42563 = 0;
	Global_42564 = 0;
	Global_42565 = 30000;
	Global_42566 = 0f;
	Global_42568 = 0f;
	Global_42567 = 0f;
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
}

bool func_5()
{
	return Global_2514785;
}

bool func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_7(iParam0) == -1)
	{
		return false;
	}
	return true;
}

int func_7(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_8()
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = 0.1f;
	iVar1 = func_12(UNK_0x16F2683693E537C9());
	iVar2 = func_9(UNK_0x16F2683693E537C9());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_9(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = func_11(bParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_4;
}

int func_10(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_11(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_12(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = func_11(bParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

float func_13()
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = UNK_0x1C0640BA9A7327B3();
	fVar1 = 1f;
	iVar2 = (Global_42564 - iVar0);
	if (iVar2 <= Global_42565)
	{
		if (Global_42564 != -1)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(Global_42565));
		}
	}
	return fVar1;
}

void func_14()
{
	if (Global_42357[iLocal_15 /*5*/] == 0)
	{
		func_15(iLocal_15);
	}
}

void func_15(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(Global_42357[iParam0 /*5*/].f_1, 0))
	{
		func_18(iParam0);
		return;
	}
	if (func_6(Global_42357[iParam0 /*5*/].f_1))
	{
		func_18(iParam0);
		return;
	}
	if (!UNK_0x1FBF08B001C4788A("drunk"))
	{
		UNK_0x92DCE5C81176D2B4("drunk");
		return;
	}
	iVar0 = func_17();
	if (iVar0 == -1)
	{
		func_18(iParam0);
		return;
	}
	Global_42383[iVar0 /*5*/] = func_16();
	Global_42383[iVar0 /*5*/].f_1 = Global_42357[iParam0 /*5*/].f_1;
	Global_42383[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_42357[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 5, 1424);
	UNK_0x5E8C29AE121DF1C7("drunk");
	func_18(iParam0);
}

var func_16()
{
	var uVar0;

	uVar0 = Global_42354;
	Global_42354++;
	return uVar0;
}

int func_17()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_18(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == UNK_0x16F2683693E537C9())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0 /*5*/] = 13;
	Global_42357[iParam0 /*5*/].f_1 = 0;
	Global_42357[iParam0 /*5*/].f_2 = 0;
	Global_42357[iParam0 /*5*/].f_3 = 0;
	Global_42357[iParam0 /*5*/].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

void func_19()
{
	if (!Global_42464[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_42464[iLocal_13 /*6*/].f_1 == 0)
		{
			func_21(iLocal_13);
			func_20(iLocal_13);
		}
	}
}

void func_20(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42464[iParam0 /*6*/] = -1;
	Global_42464[iParam0 /*6*/].f_1 = -1;
	Global_42464[iParam0 /*6*/].f_2 = 6;
	Global_42464[iParam0 /*6*/].f_3 = 0;
	Global_42464[iParam0 /*6*/].f_4 = 0;
}

void func_21(int iParam0)
{
	int iVar0;

	iVar0 = Global_42464[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		default:
			break;
	}
}

void func_22()
{
	int iVar0;

	iVar0 = -1;
	if (!Global_42383[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_28(Global_42383[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_23(Global_42383[iLocal_14 /*5*/]);
		}
		else
		{
			func_20(iVar0);
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;

	func_26(iParam0);
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_24(iVar0);
}

void func_24(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42383[iParam0 /*5*/] = -1;
	Global_42383[iParam0 /*5*/].f_1 = 0;
	Global_42383[iParam0 /*5*/].f_2 = -1;
	Global_42383[iParam0 /*5*/].f_3 = 0;
	Global_42383[iParam0 /*5*/].f_4 = 0;
}

int func_25(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0)
{
	func_30(iParam0);
	func_27(iParam0);
}

void func_27(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42464[iVar0 /*6*/].f_1)
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_29()
{
	if (Global_42464[iLocal_13 /*6*/] == 1)
	{
		Global_42464[iLocal_13 /*6*/] = 0;
	}
}

void func_30(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42464[iVar0 /*6*/])
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

void func_31()
{
	func_32();
	if (!bLocal_12)
	{
		func_3(1);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_32()
{
	func_35();
	func_34();
	func_33();
	func_4();
	Global_42595 = 0;
	Global_42594 = 0;
	Global_42355 = 0;
	UNK_0xCB0CD9B929EB37B9("drunk");
}

void func_33()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_20(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(iVar0);
		iVar0++;
	}
}

