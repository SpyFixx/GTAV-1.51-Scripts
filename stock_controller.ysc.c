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
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	vector3 vLocal_27 = { 0f, 0f, 0f };
	vector3 vLocal_30 = { 0f, 0f, 0f };
	bool bLocal_33 = false;
#endregion

void __EntryFunction__()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

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
	bLocal_20 = -15;
	bLocal_21 = -15;
	iLocal_22 = -1;
	iLocal_26 = -1;
	if (UNK_0x2EBF608FFE6CA406(2))
	{
		func_98();
	}
	if (UNK_0x8A22C4C08282BF26(joaat("STOCK_CONTROLLER")) > 1)
	{
		func_98();
	}
	Global_61496 = 1;
	iLocal_22 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) / 16f));
	func_97();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_57254[iVar0 /*7*/])
		{
			if (Global_57254[iVar0 /*7*/].f_2)
			{
				if (!Global_57254[iVar0 /*7*/].f_4)
				{
					UNK_0x6FB46C25CCB7E6D5(Global_57254[iVar0 /*7*/].f_3, &(Global_57254[iVar0 /*7*/].f_5), -1);
				}
				else
				{
					fVar1 = 0f;
					UNK_0x893A626C476B583D(Global_57254[iVar0 /*7*/].f_3, &fVar1, -1);
					Global_57254[iVar0 /*7*/].f_5 = SYSTEM::FLOOR(fVar1);
				}
			}
		}
		iVar0++;
	}
	func_95();
	func_94();
	func_91();
	Global_61496 = 0;
	func_90(1);
	func_87();
	func_84();
	while (true)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (!Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 < 11)
			{
				Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
			}
			iVar2++;
		}
		func_80();
		if (!UNK_0x8CD06866876216F2() && !func_79(14))
		{
			func_68();
			iVar3 = 16;
			while (func_67() && iVar3 >= 0)
			{
				iVar3 = (iVar3 - 1);
				func_47();
				Global_58690 = 1;
				func_41();
				Global_61498 = 1;
				func_39();
				func_38();
			}
			if (func_30())
			{
				func_28(0);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
			while (Global_58683 > 0)
			{
				func_11(&bLocal_20, 0, 480, 0, 0, 0, 0);
				func_11(&bLocal_21, 0, 480, 0, 0, 0, 0);
				Global_58683 = (Global_58683 - 1);
			}
		}
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4());
	if (UNK_0x437347B10A200C4B(bVar0, 0))
	{
		return;
	}
	bVar1 = func_3(bVar0);
	if (UNK_0x4E861BC5B1EDA7BD(bVar1))
	{
		func_2(89, 1);
		if (UNK_0x9C66D99E63E8E24C(bVar1) > 5f)
		{
			func_2(90, 1);
		}
	}
}

void func_2(int iParam0, int iParam1)
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

bool func_3(bool bParam0)
{
	return bParam0;
}

void func_4()
{
	int iVar0;

	if (!UNK_0x58424C49F8924842())
	{
		if (Global_58684)
		{
			Global_58684 = 0;
			Global_58685 = UNK_0x1C0640BA9A7327B3();
			Global_61497 = 1;
		}
		return;
	}
	if (Global_58684)
	{
		if (!UNK_0x8B696FEFCEC6AA26())
		{
			iVar0 = func_5();
			Global_58684 = 0;
			if (iVar0 < 5)
			{
				Global_61497 = 0;
			}
		}
	}
}

int func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;

	if (!UNK_0x58424C49F8924842() || !UNK_0x999A3BFD3E9B5D2C())
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_53811[iVar0 /*36*/].f_8)
		{
			if (Global_53811[iVar0 /*36*/].f_35 > -1)
			{
				iVar2 = Global_56692[Global_53811[iVar0 /*36*/].f_35 /*7*/];
				UNK_0x893A626C476B583D(iVar2, &(Global_53811[iVar0 /*36*/].f_9), -1);
				if (Global_53811[iVar0 /*36*/].f_9 > 0f)
				{
					fVar3 = 0f;
					UNK_0x43B7F203CA37F346(iVar2, 0, &(Global_53811[iVar0 /*36*/].f_33));
					Global_53811[iVar0 /*36*/].f_31 = Global_53811[iVar0 /*36*/].f_9;
					Global_53811[iVar0 /*36*/].f_32 = Global_53811[iVar0 /*36*/].f_9;
					fVar3 = (fVar3 + Global_53811[iVar0 /*36*/].f_33);
					iVar4 = 0;
					while (iVar4 < 4)
					{
						fVar5 = 0f;
						UNK_0x43B7F203CA37F346(iVar2, iVar4 + 1, &fVar5);
						if (fVar5 > Global_53811[iVar0 /*36*/].f_31)
						{
							Global_53811[iVar0 /*36*/].f_31 = fVar5;
						}
						if (fVar5 < Global_53811[iVar0 /*36*/].f_32)
						{
							Global_53811[iVar0 /*36*/].f_32 = fVar5;
						}
						fVar3 = (fVar3 + fVar5);
						iVar4++;
					}
					fVar3 = (fVar3 / 5f);
					fVar6 = func_6(iVar0);
					if (fVar6 > Global_53811[iVar0 /*36*/].f_31)
					{
						Global_53811[iVar0 /*36*/].f_31 = fVar6;
					}
					if (fVar6 < Global_53811[iVar0 /*36*/].f_32)
					{
						Global_53811[iVar0 /*36*/].f_32 = fVar6;
					}
					Global_53811[iVar0 /*36*/].f_33 = (fVar6 - fVar3);
					Global_53811[iVar0 /*36*/].f_34 = ((Global_53811[iVar0 /*36*/].f_33 / fVar3) * 100f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_6(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = iParam0;
	fVar1 = (Global_53811[iParam0 /*36*/].f_9 * func_7(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_7(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;

	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_111638.f_9080.f_99.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		case 73:
			if (func_10(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (func_10(74) || func_10(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (func_10(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		case 66:
			if (func_10(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (func_10(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		case 59:
			if (func_10(93))
			{
				if (!func_10(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(38))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(84))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		case 69:
			if (func_10(90))
			{
				if (!func_10(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		case 16:
			if (func_10(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		case 52:
			if (func_10(93))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		case 56:
			if (func_10(61))
			{
				if (!func_10(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_111638.f_20559.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_111638.f_20559.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_9(Global_111638.f_20559.f_452[iVar1], Global_111638.f_20559.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = func_8(0, iVar4);
		iVar6 = func_8(1, iVar4);
		iVar7 = func_8(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_58686[0] + Global_58686[1]) + Global_58686[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_111638.f_20559.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_111638.f_20559.f_11[iVar2]));
				}
				if (Global_111638.f_20559.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_111638.f_20559.f_44[iVar2]));
				}
				if (Global_111638.f_20559.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_111638.f_20559.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return Global_111638.f_20559.f_22[iParam1];
		case 1:
			return Global_111638.f_20559.f_55[iParam1];
		case 2:
			return Global_111638.f_20559.f_88[iParam1];
	}
	return 0;
}

float func_9(int iParam0, bool bParam1)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;

	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = UNK_0xEAE0D21A50E6C7F4(bParam1, false);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0;
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 3))
	{
		iVar3++;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 4))
	{
		iVar3 += 2;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 5))
	{
		iVar3 += 4;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((3 * iVar3));
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, true))
	{
		if (func_10(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam1, true))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam1, 6))
		{
			fVar6 = 0f;
			if (UNK_0xEAE0D21A50E6C7F4(bParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (UNK_0xEAE0D21A50E6C7F4(bParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (UNK_0xEAE0D21A50E6C7F4(bParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (UNK_0xEAE0D21A50E6C7F4(bParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(bParam1, 11))
		{
			fVar8 = 0f;
			if (UNK_0xEAE0D21A50E6C7F4(bParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (UNK_0xEAE0D21A50E6C7F4(bParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (UNK_0xEAE0D21A50E6C7F4(bParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (UNK_0xEAE0D21A50E6C7F4(bParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}

bool func_10(int iParam0)
{
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_11(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

	iVar0 = func_25(*bParam0);
	iVar1 = func_24(*bParam0);
	iVar2 = func_23(*bParam0);
	iVar3 = func_22(*bParam0);
	iVar4 = func_21(*bParam0);
	iVar5 = func_20(*bParam0);
	if (((iParam4 == 0 && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		iVar7 = iVar0;
		if (iVar6 < 0)
		{
			iVar6 = 11;
			iVar7 = (iVar7 - 1);
		}
		iVar8 = iVar6;
		iVar9 = func_19(iVar8, iVar7);
		iVar2 = (iVar2 + iVar9);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_12(bParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_12(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_18(bParam0, iParam1);
	func_17(bParam0, iParam2);
	func_16(bParam0, iParam3);
	func_15(bParam0, bParam5);
	func_14(bParam0, iParam4);
	func_13(bParam0, iParam6);
}

void func_13(bool bParam0, int iParam1)
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

void func_14(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_24(*bParam0);
	iVar1 = func_25(*bParam0);
	if (iParam1 < 1 || iParam1 > func_19(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_15(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_16(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_17(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_18(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_19(bool bParam0, int iParam1)
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

int func_20(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_21(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_22(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_23(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_24(bool bParam0)
{
	return (bParam0 && 15);
}

int func_25(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_26(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_26(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_27()
{
	int iVar0;

	if (Global_111638.f_20559.f_442 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_461[iVar0], true))
		{
			if (Global_111638.f_20559.f_452[iVar0] > 0)
			{
				Global_111638.f_20559.f_452[iVar0] = (Global_111638.f_20559.f_452[iVar0] - 1);
				if (Global_111638.f_20559.f_452[iVar0] < 1)
				{
					Global_111638.f_20559.f_452[iVar0] = 0;
					Global_111638.f_20559.f_442 = (Global_111638.f_20559.f_442 - 1);
				}
			}
		}
		iVar0++;
	}
}

void func_28(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		func_29(iVar0, bParam0);
		SYSTEM::WAIT(0);
		if (!bParam0)
		{
			func_68();
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (Global_53811[iParam0 /*36*/].f_8)
	{
		return;
	}
	fVar0 = Global_53811[iParam0 /*36*/].f_9;
	if (!bParam1)
	{
		fVar0 = func_6(iParam0);
	}
	if (fVar0 == 0f)
	{
		return;
	}
	Global_53811[iParam0 /*36*/].f_14[Global_53811[iParam0 /*36*/].f_13] = fVar0;
	if (fVar0 > Global_53811[iParam0 /*36*/].f_31)
	{
		Global_53811[iParam0 /*36*/].f_31 = fVar0;
	}
	if (fVar0 < Global_53811[iParam0 /*36*/].f_32)
	{
		Global_53811[iParam0 /*36*/].f_32 = fVar0;
	}
	Global_53811[iParam0 /*36*/].f_13++;
	if (Global_53811[iParam0 /*36*/].f_13 >= 16)
	{
		Global_53811[iParam0 /*36*/].f_13 = 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		fVar1 = (fVar1 + Global_53811[iParam0 /*36*/].f_14[iVar2]);
		iVar2++;
	}
	fVar1 = (fVar1 / SYSTEM::TO_FLOAT(16));
	Global_53811[iParam0 /*36*/].f_33 = (fVar0 - fVar1);
	Global_53811[iParam0 /*36*/].f_34 = ((Global_53811[iParam0 /*36*/].f_33 / fVar1) * 100f);
}

bool func_30()
{
	int iVar0;

	if (bLocal_20 == -15)
	{
		bLocal_20 = func_37();
		iVar0 = func_22(bLocal_20);
		if (iVar0 == 24)
		{
			iVar0 = 0;
		}
		if (func_36(iVar0, 0, 8))
		{
			func_16(&bLocal_20, 8);
		}
		else if (func_36(iVar0, 8, 16))
		{
			func_16(&bLocal_20, 16);
		}
		else if (func_36(iVar0, 16, 24))
		{
			func_16(&bLocal_20, 0);
			func_35(&bLocal_20, 0, 0, 0, 1, 0, 0);
		}
		func_17(&bLocal_20, 0);
		func_18(&bLocal_20, 0);
		bLocal_21 = bLocal_20;
		return false;
	}
	if (func_34(bLocal_20))
	{
		if (func_31(&bLocal_20, 1, 8))
		{
			return false;
		}
		func_35(&bLocal_20, 0, 480, 0, 0, 0, 0);
		return true;
	}
	return false;
}

bool func_31(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_33(Global_1312465))
	{
		if (bParam1)
		{
			bVar0 = func_37();
			iVar1 = func_22(Global_1312465);
			iVar2 = func_21(Global_1312465);
			func_16(&bVar0, iVar1);
			func_17(&bVar0, iVar2);
			func_18(&bVar0, 0);
			if (func_32(func_37(), bVar0))
			{
				func_35(&bVar0, 0, 0, 0, 1, 0, 0);
			}
			iVar3 = 0;
			while (func_32(bVar0, *bParam0) && iVar3 < 24)
			{
				func_35(bParam0, 0, 0, iParam2, 0, 0, 0);
				iVar3 = (iVar3 + iParam2);
			}
		}
		return true;
	}
	return false;
}

bool func_32(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_33(bParam1) || !func_33(bParam0))
	{
		return true;
	}
	bVar0 = func_25(bParam0);
	bVar1 = func_25(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_24(bParam0);
	bVar1 = func_24(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_23(bParam0);
	bVar1 = func_23(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_22(bParam0);
	bVar1 = func_22(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_21(bParam0);
	bVar1 = func_21(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_20(bParam0);
	bVar1 = func_20(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_33(bool bParam0)
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
	iVar0 = func_20(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_21(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_22(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_25(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_24(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_23(bParam0);
	if (iVar5 < 1 || iVar5 > func_19(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_34(bool bParam0)
{
	return func_32(func_37(), bParam0);
}

void func_35(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_25(*bParam0);
	bVar1 = func_24(*bParam0);
	iVar2 = func_23(*bParam0);
	iVar3 = func_22(*bParam0);
	iVar4 = func_21(*bParam0);
	iVar5 = func_20(*bParam0);
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
	iVar6 = func_19(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_19(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_12(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

bool func_36(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_37()
{
	var uVar0;

	func_18(&uVar0, UNK_0x4460E481B9E33ADA());
	func_17(&uVar0, UNK_0x8D199E381D262EEF());
	func_16(&uVar0, UNK_0xD8A54335F18763BA());
	func_14(&uVar0, UNK_0x972A296334C9D57B());
	func_15(&uVar0, UNK_0x118229AD063C3C1D());
	func_13(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_38()
{
	SYSTEM::WAIT(0);
	func_68();
}

void func_39()
{
	int iVar0;

	iVar0 = UNK_0xFC21F7E0F4D92523();
	if (iLocal_26 != iVar0)
	{
		if (iLocal_25 > 48)
		{
			switch (func_40(iLocal_26))
			{
				case 1:
					func_2(85, 1);
					break;
				case 2:
					func_2(84, 1);
					break;
				case 3:
					func_2(86, 1);
					break;
				case 4:
					func_2(87, 1);
					break;
			}
		}
		iLocal_25 = 0;
		iLocal_26 = iVar0;
	}
	switch (func_40(iVar0))
	{
		case 1:
			func_2(77, 1);
			break;
		case 2:
			func_2(76, 1);
			break;
		case 3:
			func_2(79, 1);
			break;
		case 4:
			func_2(80, 1);
			break;
		case 0:
			break;
	}
	func_2(78, 1);
	iLocal_25++;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
	}
	return 0;
}

void func_41()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;

	func_68();
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_57254[iVar0 /*7*/])
		{
			if (Global_57254[iVar0 /*7*/].f_2)
			{
				iVar1 = 0;
				if (!Global_57254[iVar0 /*7*/].f_4)
				{
					UNK_0x6FB46C25CCB7E6D5(Global_57254[iVar0 /*7*/].f_3, &iVar1, -1);
				}
				else
				{
					fVar2 = 0f;
					UNK_0x893A626C476B583D(Global_57254[iVar0 /*7*/].f_3, &fVar2, -1);
					iVar3 = SYSTEM::FLOOR(fVar2);
					if (Global_57254[iVar0 /*7*/].f_5 < iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = Global_57254[iVar0 /*7*/].f_5;
					}
				}
				Global_57254[iVar0 /*7*/].f_6 = (iVar1 - Global_57254[iVar0 /*7*/].f_5);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_53811[iVar0 /*36*/].f_8)
		{
			if (!Global_53811[iVar0 /*36*/].f_10 == 0f)
			{
				Global_53811[iVar0 /*36*/].f_11 = Global_53811[iVar0 /*36*/].f_10;
			}
		}
		if ((iVar0 % 40) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_53811[iVar0 /*36*/].f_8)
		{
			fVar5 = 0f;
			if (Global_53811[iVar0 /*36*/].f_10 != 0f)
			{
				fVar5 = (fVar5 + (((0.02f * Global_53811[iVar0 /*36*/].f_9) * Global_53811[iVar0 /*36*/].f_10) - Global_53811[iVar0 /*36*/].f_9));
			}
			fVar5 = (fVar5 + ((UNK_0x79833B02DBD2A244(-Global_56966[iVar4 /*7*/].f_6, Global_56966[iVar4 /*7*/].f_6) * 0.1f) * Global_53811[iVar0 /*36*/].f_9));
			Global_56966[iVar4 /*7*/] = (Global_56966[iVar4 /*7*/] * 0.995f);
			if (fVar5 < 0f)
			{
				fVar5 = (fVar5 * Global_56966[iVar4 /*7*/].f_2);
			}
			else if (fVar5 > 0f)
			{
				fVar5 = (fVar5 * Global_56966[iVar4 /*7*/].f_1);
			}
			fVar5 = func_46(fVar5, -Global_56966[iVar4 /*7*/].f_5, Global_56966[iVar4 /*7*/].f_5);
			iVar6 = 61;
			if (((iVar0 == iVar6 && func_45(44)) && !func_45(64)) && fVar5 > 0f)
			{
				Global_53811[iVar0 /*36*/].f_9 = (Global_53811[iVar0 /*36*/].f_9 - fVar5);
			}
			else
			{
				if (fVar5 > 0f)
				{
					fVar7 = func_43(iVar0);
					fVar5 = (fVar5 * fVar7);
				}
				Global_53811[iVar0 /*36*/].f_9 = (Global_53811[iVar0 /*36*/].f_9 + fVar5);
			}
			if (Global_53811[iVar0 /*36*/].f_9 > Global_56966[iVar4 /*7*/].f_3)
			{
				fVar8 = (Global_53811[iVar0 /*36*/].f_9 - Global_56966[iVar4 /*7*/].f_3);
				fVar8 = (fVar8 * 0.5f);
				Global_53811[iVar0 /*36*/].f_9 = (Global_53811[iVar0 /*36*/].f_9 - fVar8);
			}
			else if (Global_53811[iVar0 /*36*/].f_9 < Global_56966[iVar4 /*7*/].f_4)
			{
				fVar9 = (Global_56966[iVar4 /*7*/].f_4 - Global_53811[iVar0 /*36*/].f_9);
				fVar9 = (fVar9 * 0.5f);
				Global_53811[iVar0 /*36*/].f_9 = (Global_53811[iVar0 /*36*/].f_9 + fVar9);
			}
			Global_56966[iVar4 /*7*/] = (Global_56966[iVar4 /*7*/] - (((fVar5 * 0.66f) + (Global_56966[iVar4 /*7*/] * 0.33f)) * 0.02f));
			if (!Global_53811[iVar0 /*36*/].f_9 > 0f)
			{
				Global_53811[iVar0 /*36*/].f_9 = (-1f * Global_53811[iVar0 /*36*/].f_9);
				Global_53811[iVar0 /*36*/].f_9 = (Global_53811[iVar0 /*36*/].f_9 + 0.02f);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	func_42();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_57254[iVar0 /*7*/])
		{
			if (Global_57254[iVar0 /*7*/].f_2)
			{
				Global_57254[iVar0 /*7*/].f_5 = (Global_57254[iVar0 /*7*/].f_5 + Global_57254[iVar0 /*7*/].f_6);
			}
		}
		iVar0++;
	}
}

void func_42()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (!Global_53811[iVar1 /*36*/].f_8)
		{
			if (iVar0 < 42)
			{
				Global_111638.f_20559.f_103[iVar0] = Global_53811[iVar1 /*36*/].f_9;
				if (Global_53811[iVar1 /*36*/].f_31 > Global_111638.f_20559.f_146[iVar0])
				{
					Global_111638.f_20559.f_146[iVar0] = Global_53811[iVar1 /*36*/].f_31;
				}
				if (Global_111638.f_20559.f_189[iVar0] == 0f)
				{
					Global_111638.f_20559.f_189[iVar0] = Global_53811[iVar1 /*36*/].f_32;
				}
				else if (Global_53811[iVar1 /*36*/].f_32 < Global_111638.f_20559.f_189[iVar0])
				{
					Global_111638.f_20559.f_189[iVar0] = Global_53811[iVar1 /*36*/].f_32;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

float func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;

	if (Global_53811[iParam0 /*36*/].f_8)
	{
		return 1f;
	}
	iVar0 = func_8(0, iParam0);
	iVar1 = func_8(1, iParam0);
	iVar2 = func_8(2, iParam0);
	if (((iVar0 + iVar1) + iVar2) < 1)
	{
		return 1f;
	}
	iVar3 = 1000000000;
	iVar4 = ((Global_58686[0] + Global_58686[1]) + Global_58686[2]);
	if (Global_58686[0] > iVar3)
	{
		return 0f;
	}
	if (Global_58686[1] > iVar3)
	{
		return 0f;
	}
	if (Global_58686[2] > iVar3)
	{
		return 0f;
	}
	fVar5 = 0f;
	iVar6 = 0;
	while (iVar6 < 10)
	{
		iVar7 = func_8(0, iVar6);
		if (iVar7 > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(0, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(1, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(1, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(2, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(2, iVar6)) * IntToFloat(iVar7)));
		}
		iVar6++;
	}
	iVar8 = (SYSTEM::FLOOR(fVar5) + iVar4);
	iVar9 = 700000000;
	if (iVar8 > iVar3)
	{
		return 0f;
	}
	if (iVar8 < iVar9)
	{
		return 1f;
	}
	fVar10 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
	fVar11 = SYSTEM::TO_FLOAT((iVar3 - iVar9));
	if (!fVar11 > 0f)
	{
		return 1f;
	}
	return (1f - (fVar10 / fVar11));
}

int func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 31;
	}
	switch (iParam0)
	{
		case 0:
			return Global_111638.f_20559[iParam1];
		case 1:
			return Global_111638.f_20559.f_33[iParam1];
		case 2:
			return Global_111638.f_20559.f_66[iParam1];
		default:
			break;
	}
	return 31;
}

bool func_45(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

float func_46(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_47()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (!UNK_0x131F22FE6F47A65D(UNK_0xA30EC016B12C03E4()))
	{
		iVar0 = UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4());
		if (iVar0 == 0)
		{
			func_2(75, 1);
		}
		bVar1 = UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4());
		if (UNK_0x405E212DDE472467(bVar1, 0))
		{
			bVar2 = UNK_0x6937EA2286828455(bVar1, 0);
			if (bVar2 != 0)
			{
				if (func_58(bVar2))
				{
					iVar3 = UNK_0x134B62B726CEC8E6(bVar2);
					func_56(iVar3);
				}
			}
		}
		SYSTEM::WAIT(0);
		if (!UNK_0x437347B10A200C4B(bVar1, 0))
		{
			iVar4 = UNK_0x78CE7F4A02231950(bVar1);
			func_54(iVar4);
			switch (iVar4)
			{
				case joaat("WEAPON_MOLOTOV"):
				case joaat("WEAPON_PETROLCAN"):
					switch (func_48())
					{
						case 0:
							func_2(147, 1);
							break;
						case 1:
							func_2(148, 1);
							break;
						case 2:
							func_2(149, 1);
							break;
					}
					break;
			}
		}
	}
}

int func_48()
{
	func_49();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_49()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_52(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_51(UNK_0x16F2683693E537C9());
			if (func_50(iVar0) && (!func_79(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_50(Global_111638.f_2358.f_539.f_4321))
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

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_54(int iParam0)
{
	int iVar0;

	iVar0 = func_55(iParam0);
	switch (iVar0)
	{
		case 0:
			func_2(51, 1);
			break;
		case 1:
			func_2(52, 1);
			break;
		case 2:
			func_2(53, 1);
			break;
	}
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_APPISTOL"):
			return 0;
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_PISTOL"):
			return 1;
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
		default:
			return 3;
	}
	return 3;
}

void func_56(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(39, 1);
			break;
		case 1:
			func_2(35, 1);
			break;
		case 2:
			func_2(32, 1);
			break;
		case 3:
			func_2(38, 1);
			break;
		case 4:
			func_2(31, 1);
			break;
		case 5:
			func_2(33, 1);
			break;
		case 6:
			func_2(36, 1);
			break;
		case 7:
			func_2(37, 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("COACH"):
		case joaat("TAXI"):
		case joaat("BMX"):
		case joaat("SCORCHER"):
		case joaat("TRIBIKE2"):
		case joaat("FIXTER"):
		case joaat("TRIBIKE"):
		case joaat("CRUISER"):
			func_2(34, 1);
			break;
	}
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BENSON"):
		case joaat("BOBCATXL"):
		case joaat("BULLET"):
		case joaat("DOMINATOR"):
		case joaat("MINIVAN"):
		case joaat("PEYOTE"):
		case joaat("RADI"):
		case joaat("SADLER"):
		case joaat("SADLER2"):
		case joaat("SANDKING"):
		case joaat("SANDKING2"):
		case joaat("SPEEDO"):
		case joaat("SPEEDO2"):
		case joaat("STANIER"):
			return 3;
		case joaat("BOXVILLE"):
		case joaat("CAMPER"):
		case joaat("PONY"):
		case joaat("PONY2"):
		case joaat("STOCKADE"):
		case joaat("STOCKADE3"):
		case joaat("TIPTRUCK"):
			return 2;
		case joaat("FUSILADE"):
			return 6;
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("PENUMBRA"):
		case joaat("SANCHEZ"):
		case joaat("SANCHEZ2"):
			return 1;
		case joaat("BFINJECTION"):
		case joaat("DUNE"):
		case joaat("SURFER"):
		case joaat("SURFER2"):
			return 4;
		case joaat("BARRACKS2"):
		case joaat("BIFF"):
		case joaat("BULLDOZER"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("FORKLIFT"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
			return 0;
		case joaat("ORACLE"):
		case joaat("ORACLE2"):
		case joaat("SENTINEL"):
		case joaat("SENTINEL2"):
		case joaat("ZION"):
		case joaat("ZION2"):
			return 7;
	}
	return 8;
}

bool func_58(bool bParam0)
{
	var uVar0;

	if (Global_76622)
	{
		return UNK_0xF566283DA9533594(bParam0);
	}
	if (func_61(bParam0, &uVar0))
	{
		return false;
	}
	if (func_60(bParam0))
	{
		return false;
	}
	if (func_59(bParam0))
	{
		return false;
	}
	return true;
}

bool func_59(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == bParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_60(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == bParam0 && UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == UNK_0x134B62B726CEC8E6(bParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_61(bool bParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (Global_75441.f_484[iVar0] == bParam0)
		{
			if (func_62(&(Global_75441.f_555[0 /*21*/]), iVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10) && Global_75441.f_555[0 /*21*/].f_4 == UNK_0x134B62B726CEC8E6(bParam0))
				{
					*uParam1 = iVar0;
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_62(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_64())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_64())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_63(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_63(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_63(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_63(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_64()
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
				return true;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return true;
	}
	else if (Global_150472 == 3)
	{
		return false;
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return true;
		}
	}
	return false;
}

int func_65(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_66(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

bool func_67()
{
	if (bLocal_21 == -15)
	{
		return false;
	}
	if (func_34(bLocal_21))
	{
		if (func_31(&bLocal_21, 1, 8))
		{
			return false;
		}
		func_35(&bLocal_21, 0, iLocal_22, 0, 0, 0, 0);
		return true;
	}
	return false;
}

void func_68()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (Global_58691)
	{
		Global_58691 = 0;
		switch (func_57(Global_58692))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_2(29, 1);
				break;
			case 4:
			case 5:
			case 6:
			case 7:
				func_2(30, 1);
				break;
		}
	}
	iVar0 = 0;
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(0))
	{
		iVar2 = UNK_0xB98DB26FBF676FA1(0, iVar0);
		switch (iVar2)
		{
			case 142:
				UNK_0x218F818E64020C17(0, iVar0, &bVar1, 1);
				func_78(bVar1);
				bVar4 = true;
				if (UNK_0x8CD06866876216F2())
				{
					if (UNK_0xC844350D5D58C99A(bVar1))
					{
						if (!UNK_0xAFE0D3608EDA7039(bVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (UNK_0xC844350D5D58C99A(bVar1))
					{
						if (UNK_0xEC560E589DF8370E(bVar1))
						{
							func_74(bVar1);
						}
						else if (UNK_0xE2F1E99DD161A861(bVar1))
						{
							if (func_73(UNK_0x96A5FE5834B81CE7(bVar1)))
							{
								func_2(3, 1);
							}
							func_72(UNK_0x134B62B726CEC8E6(bVar1));
						}
						else if (UNK_0x6BC06B42AD71CD8B(bVar1))
						{
							switch (UNK_0x134B62B726CEC8E6(bVar1))
							{
								case joaat("PROP_NEWS_DISP_01A"):
								case joaat("PROP_NEWS_DISP_02A"):
								case joaat("PROP_NEWS_DISP_02A_S"):
								case joaat("PROP_NEWS_DISP_02B"):
								case joaat("PROP_NEWS_DISP_02C"):
								case joaat("PROP_NEWS_DISP_02D"):
								case joaat("PROP_NEWS_DISP_02E"):
								case joaat("PROP_NEWS_DISP_03A"):
								case joaat("PROP_NEWS_DISP_03C"):
								case joaat("PROP_NEWS_DISP_05A"):
								case -1389481633:
								case 1301918910:
								case joaat("PROP_NEWS_DISP_06A"):
								case -1406224059:
									func_2(68, 1);
									break;
								case -959573699:
								case joaat("PROP_POSTBOX_01A"):
								case 1147034058:
								case 1444740423:
								case joaat("PROP_POSTBOX_SS_01A"):
									func_2(128, 1);
									break;
							}
						}
					}
				}
				break;
			case 141:
				UNK_0x218F818E64020C17(0, iVar0, &bVar1, 1);
				func_78(bVar1);
				bVar4 = true;
				if (UNK_0x8CD06866876216F2())
				{
					if (UNK_0xC844350D5D58C99A(bVar1))
					{
						if (!UNK_0xAFE0D3608EDA7039(bVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (UNK_0xC844350D5D58C99A(bVar1))
					{
						if (UNK_0xEC560E589DF8370E(bVar1))
						{
							bVar3 = UNK_0x940C1429253D3B1B(bVar1);
							if (func_48() == 0 && bVar3 != UNK_0x16F2683693E537C9())
							{
								if (UNK_0x437347B10A200C4B(bVar1, 0) || IntToFloat(UNK_0x7F6DC62EA9922664(bVar1)) < (0.5f * IntToFloat(UNK_0x65BC0B7172CA52DD(bVar3))))
								{
									if (UNK_0xEC560E589DF8370E(bVar1) && UNK_0x232B70EDA3C8983B(UNK_0x940C1429253D3B1B(bVar1)))
									{
										if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
										{
											func_70(3);
										}
									}
								}
							}
							func_2(111, 1);
							func_2(124, 1);
							if (UNK_0x4E861BC5B1EDA7BD(bVar1))
							{
								func_2(130, 1);
							}
						}
						else if (UNK_0xE2F1E99DD161A861(bVar1))
						{
							func_69(UNK_0x134B62B726CEC8E6(bVar1));
							func_2(111, 1);
						}
						else if (UNK_0x6BC06B42AD71CD8B(bVar1))
						{
							func_2(111, 1);
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_69(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(47, 1);
			break;
		case 1:
			func_2(43, 1);
			break;
		case 2:
			func_2(41, 1);
			break;
		case 3:
			func_2(46, 1);
			break;
		case 4:
			func_2(40, 1);
			break;
		case 5:
			func_2(42, 1);
			break;
		case 6:
			func_2(44, 1);
			break;
		case 7:
			func_2(45, 1);
			break;
	}
}

void func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_71(&Global_95212, 1);
			break;
		case 1:
			func_71(&Global_95214, 3);
			break;
		case 2:
			func_71(&Global_95218, 1);
			break;
		case 3:
			func_71(&Global_95220, 1);
			break;
		case 4:
			func_71(&Global_95222, 1);
			break;
		case 5:
			func_71(&Global_95224, 1);
			break;
		case 6:
			func_71(&Global_95226, 1);
			break;
		case 7:
			func_71(&Global_95228, 2);
			break;
		case 8:
			func_71(&Global_95231, 1);
			break;
		case 9:
			func_71(&Global_95233, 1);
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = UNK_0x1C0640BA9A7327B3();
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(11, 1);
			break;
		case 1:
			func_2(6, 1);
			break;
		case 2:
			func_2(1, 1);
			break;
		case 3:
			func_2(10, 1);
			break;
		case 4:
			func_2(0, 1);
			break;
		case 5:
			func_2(2, 1);
			break;
		case 6:
			func_2(8, 1);
			break;
		case 7:
			func_2(9, 1);
			break;
	}
	if (iParam0 == joaat("TAXI"))
	{
		func_2(100, 1);
	}
	func_2(111, 1);
}

bool func_73(bool bParam0)
{
	if (UNK_0x67303E186EA6C9A0(bParam0) >= 0)
	{
		if (UNK_0x0ECB5CA5140957AD(bParam0, 0) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 3) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 4) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 5) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 6) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 7) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 10) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 11) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 12) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 13) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 14) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 15) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 16) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 23) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 24) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 1) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 2) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 8) != -1)
		{
			return true;
		}
		if (UNK_0x0ECB5CA5140957AD(bParam0, 9) != -1)
		{
			return true;
		}
		if (UNK_0xB97ED2A4B56844DE(bParam0, 18))
		{
			return true;
		}
		if (UNK_0xB97ED2A4B56844DE(bParam0, 22))
		{
			return true;
		}
		if (!UNK_0x616632A7E7824A9A(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_74(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = UNK_0x940C1429253D3B1B(bParam0);
	if (UNK_0xE147126C9AD09A60(bParam0))
	{
		bVar1 = UNK_0xA390E7DD86EDBEA0(bVar0);
		if (UNK_0xE2F1E99DD161A861(bVar1))
		{
			iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
			func_77(iVar2, UNK_0x0A5D59F37DC7E974(bVar0));
		}
		else
		{
			iVar3 = UNK_0xF71162D1C14C71E7(bVar0);
			iVar4 = UNK_0x134B62B726CEC8E6(bParam0);
			func_76(iVar3, UNK_0x0A5D59F37DC7E974(bVar0), iVar4);
		}
	}
	if (UNK_0x4E861BC5B1EDA7BD(bParam0))
	{
		func_2(129, 1);
	}
	if (!func_75(bParam0))
	{
		return;
	}
	func_2(111, 1);
	iVar5 = UNK_0x1C0640BA9A7327B3();
	iVar6 = (iVar5 - iLocal_23);
	iLocal_23 = iVar5;
	if (iVar6 > 2000)
	{
		iLocal_24 = 0;
	}
	else
	{
		iLocal_24++;
		if (iLocal_24 == 3)
		{
			func_2(127, 1);
		}
	}
}

bool func_75(bool bParam0)
{
	bool bVar0;

	if (!UNK_0xAFE0D3608EDA7039(bParam0))
	{
		return false;
	}
	bVar0 = UNK_0xA390E7DD86EDBEA0(UNK_0x940C1429253D3B1B(bParam0));
	if (func_3(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4())) == bVar0)
	{
		return true;
	}
	return false;
}

void func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_55(iParam0);
	if (iVar0 == 0)
	{
		func_2(108, 1);
	}
	switch (iParam1)
	{
		case 4:
		case 5:
			switch (iVar0)
			{
				case 0:
					func_2(63, 1);
					break;
				case 1:
					func_2(64, 1);
					break;
				case 2:
					func_2(65, 1);
					break;
			}
			break;
		case 22:
			switch (iVar0)
			{
				case 0:
					func_2(57, 1);
					break;
				case 1:
					func_2(58, 1);
					break;
				case 2:
					func_2(59, 1);
					break;
			}
			break;
		case 27:
		case 6:
			switch (iVar0)
			{
				case 0:
					func_2(54, 1);
					break;
				case 1:
					func_2(55, 1);
					break;
				case 2:
					func_2(56, 1);
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("S_F_Y_HOOKER_01"):
			func_2(121, 1);
			break;
		case joaat("A_F_M_BODYBUILD_01"):
		case joaat("A_M_M_BEACH_02"):
		case joaat("A_M_Y_MUSCLBEAC_02"):
		case joaat("A_M_Y_RUNNER_01"):
		case joaat("A_M_Y_ROADCYC_01"):
		case joaat("A_M_Y_SKATER_01"):
		case joaat("A_M_Y_SKATER_02"):
		case joaat("A_M_Y_SUNBATHE_01"):
		case joaat("A_M_Y_SURFER_01"):
		case joaat("A_M_Y_YOGA_01"):
		case joaat("S_M_Y_BAYWATCH_01"):
		case joaat("S_M_Y_MARINE_02"):
			func_2(69, 1);
			break;
		case joaat("S_M_Y_DEALER_01"):
			func_2(125, 1);
			break;
	}
}

void func_77(int iParam0, int iParam1)
{
	func_2(48, 1);
	switch (iParam0)
	{
		case joaat("COACH"):
		case joaat("TAXI"):
			func_2(4, 1);
			break;
		case joaat("TANKER"):
			func_2(5, 1);
			func_2(7, 1);
			func_2(91, 1);
			break;
		case joaat("PACKER"):
			func_2(7, 1);
			break;
		case joaat("PHANTOM"):
			func_2(5, 1);
			break;
	}
	switch (func_57(iParam0))
	{
		case 0:
			func_2(109, 1);
			break;
		case 1:
			func_2(104, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(60, 1);
					break;
			}
			break;
		case 2:
			func_2(102, 1);
			break;
		case 3:
			func_2(107, 1);
			break;
		case 4:
			func_2(101, 1);
			break;
		case 5:
			func_2(103, 1);
			break;
		case 6:
			func_2(105, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(61, 1);
					break;
			}
			break;
		case 7:
			func_2(106, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(62, 1);
					break;
			}
			break;
	}
}

void func_78(bool bParam0)
{
	UNK_0xC844350D5D58C99A(bParam0);
	UNK_0x437347B10A200C4B(bParam0, 0);
}

bool func_79(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_80()
{
	bool bVar0;
	int iVar1;

	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		bLocal_33 = false;
		return;
	}
	if (func_82(UNK_0xA30EC016B12C03E4(), -1))
	{
		bLocal_33 = false;
		return;
	}
	if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), 0);
		if (bLocal_33 != bVar0)
		{
			vLocal_27 = { vLocal_30 };
			bLocal_33 = bVar0;
		}
		if (bVar0 == 0)
		{
			return;
		}
		vLocal_27 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
		if (bLocal_33 == 0)
		{
			vLocal_30 = { vLocal_27 };
			bLocal_33 = bVar0;
			return;
		}
		iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
		if (func_81(iVar1, UNK_0x0EB28750412C3A5A(vLocal_27, vLocal_30, 0)))
		{
			vLocal_30 = { vLocal_27 };
		}
	}
}

bool func_81(int iParam0, float fParam1)
{
	if (fParam1 < 10f)
	{
		return false;
	}
	switch (func_57(iParam0))
	{
		case 0:
			func_2(28, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 1:
			func_2(24, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 2:
			func_2(21, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 3:
			func_2(27, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 4:
			func_2(20, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 5:
			func_2(22, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 6:
			func_2(25, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 7:
			func_2(26, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
	}
	switch (iParam0)
	{
		case joaat("COACH"):
		case joaat("TAXI"):
			func_2(23, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case joaat("BMX"):
		case joaat("SCORCHER"):
		case joaat("TRIBIKE2"):
		case joaat("FIXTER"):
		case joaat("TRIBIKE"):
		case joaat("CRUISER"):
			switch (func_48())
			{
				case 0:
					func_2(141, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				case 1:
					func_2(142, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				case 2:
					func_2(143, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
			}
			break;
	}
	return true;
}

bool func_82(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_83(bParam0, 1, 1))
	{
		if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bParam0), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bParam0), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0x16F2683693E537C9() == UNK_0xA30B8362589C124A(bVar0, bParam1, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_83(bool bParam0, bool bParam1, bool bParam2)
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

void func_84()
{
	func_85(0);
	func_85(1);
	func_85(2);
}

void func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_53811[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_53811[iVar0 /*36*/].f_35;
			if (iVar1 > -1)
			{
				bVar2 = func_86(iParam0, iVar0);
				if (Global_53811[iVar0 /*36*/].f_9 <= 0f)
				{
					bVar2 = false;
				}
				UNK_0xCDC520E5E48E63D9(Global_56692[iVar1 /*7*/].f_3[iParam0], bVar2, 1);
			}
		}
		iVar0++;
	}
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_111638.f_20559[iVar0] == iParam1)
				{
					if (Global_111638.f_20559.f_22[iVar0] > 0)
					{
						return Global_111638.f_20559.f_22[iVar0];
					}
				}
				break;
			case 1:
				if (Global_111638.f_20559.f_33[iVar0] == iParam1)
				{
					if (Global_111638.f_20559.f_55[iVar0] > 0)
					{
						return Global_111638.f_20559.f_55[iVar0];
					}
				}
				break;
			case 2:
				if (Global_111638.f_20559.f_66[iVar0] == iParam1)
				{
					if (Global_111638.f_20559.f_88[iVar0] > 0)
					{
						return Global_111638.f_20559.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_87()
{
	int iVar0;
	int iVar1;

	iVar1 = Global_58973;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_58976[iVar0 /*14*/].f_13 > 0)
		{
			Global_58976[iVar0 /*14*/].f_13 = (Global_58976[iVar0 /*14*/].f_13 - 1);
		}
		else if (func_89(iVar0))
		{
			func_88(&(Global_58976[iVar0 /*14*/]), -1);
			Global_58976[iVar0 /*14*/].f_13 = 60000;
		}
		SYSTEM::WAIT(0);
		func_68();
		iVar0++;
	}
}

bool func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = *uParam0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_61358[iVar0 /*34*/][iVar1 /*11*/].f_9 == uParam0->f_9)
		{
			uParam0->f_10 = (uParam0->f_10 + 0.05f);
			return false;
		}
		iVar1++;
	}
	iVar1 = 0;
	fVar2 = 0f;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_61358[iVar0 /*34*/][iVar1 /*11*/].f_10 > fVar2)
		{
			iVar3 = iVar1;
			fVar2 = Global_61358[iVar0 /*34*/][iVar1 /*11*/].f_10;
		}
		iVar1++;
	}
	if (iVar3 == -1)
	{
		return false;
	}
	if (uParam0->f_10 <= Global_61358[iVar0 /*34*/][iVar3 /*11*/].f_10)
	{
		uParam0->f_10 = (uParam0->f_10 + 1f);
		Global_61358[iVar0 /*34*/][iVar3 /*11*/].f_10 = uParam0->f_10;
		Global_61358[iVar0 /*34*/][iVar3 /*11*/].f_1 = { uParam0->f_1 };
		Global_61358[iVar0 /*34*/][iVar3 /*11*/].f_5 = { uParam0->f_5 };
		Global_61358[iVar0 /*34*/][iVar3 /*11*/].f_9 = uParam0->f_9;
		Global_61358[iVar0 /*34*/][iVar3 /*11*/] = *uParam0;
		return true;
	}
	return false;
}

bool func_89(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;

	iVar0 = Global_58976[iParam0 /*14*/].f_12;
	fVar1 = Global_53811[iVar0 /*36*/].f_9;
	iVar2 = Global_53811[iVar0 /*36*/].f_13;
	while (iVar2 > 15)
	{
		iVar2 = (iVar2 - 16);
	}
	iVar3 = (iVar2 - 10);
	while (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	fVar4 = Global_53811[iVar0 /*36*/].f_14[iVar3];
	Global_53811[iVar0 /*36*/].f_14[Global_53811[iVar0 /*36*/].f_13] = func_6(iVar0);
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = iVar3 + 1;
	if (iVar8 == 16)
	{
		iVar8 = 0;
	}
	iVar9 = 0;
	iVar10 = iVar8;
	iVar11 = 0;
	iVar12 = 0;
	iVar9 = 0;
	while (iVar9 < 8)
	{
		iVar11 = iVar10 + 1;
		if (iVar11 == 16)
		{
			iVar11 = 0;
		}
		iVar12 = iVar11 + 1;
		if (iVar12 == 16)
		{
			iVar12 = 0;
		}
		if (Global_53811[iVar0 /*36*/].f_14[iVar10] < Global_53811[iVar0 /*36*/].f_14[iVar11])
		{
			iVar6++;
			fVar13 = (fVar13 + (Global_53811[iVar0 /*36*/].f_14[iVar11] - Global_53811[iVar0 /*36*/].f_14[iVar10]));
		}
		else
		{
			iVar7++;
			fVar14 = (fVar14 + (Global_53811[iVar0 /*36*/].f_14[iVar10] - Global_53811[iVar0 /*36*/].f_14[iVar11]));
		}
		if (Global_53811[iVar0 /*36*/].f_14[iVar10] < Global_53811[iVar0 /*36*/].f_14[iVar11] && Global_53811[iVar0 /*36*/].f_14[iVar12] < Global_53811[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		if (Global_53811[iVar0 /*36*/].f_14[iVar10] > Global_53811[iVar0 /*36*/].f_14[iVar11] && Global_53811[iVar0 /*36*/].f_14[iVar12] > Global_53811[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		iVar10++;
		if (iVar10 == 16)
		{
			iVar10 = 0;
		}
		iVar9++;
	}
	if (iVar6 < 0)
	{
		fVar13 = (fVar13 / IntToFloat(iVar6));
	}
	if (iVar7 > 0)
	{
		fVar14 = (fVar14 / IntToFloat(iVar7));
	}
	fVar15 = (fVar1 - fVar4);
	if (fVar15 < 0f)
	{
		fVar15 = (fVar15 * -1f);
	}
	switch (Global_58976[iParam0 /*14*/].f_11)
	{
		case 0:
			if (iVar6 < 6)
			{
				return false;
			}
			if (fVar13 < (fVar4 * 0.04f))
			{
				return false;
			}
			return true;
		case 1:
			if (iVar7 < 6)
			{
				return false;
			}
			if (fVar14 < (fVar4 * 0.04f))
			{
				return false;
			}
			return true;
		case 2:
			if (iVar5 < 7)
			{
				return false;
			}
			if (fVar15 > (fVar4 * 0.01f))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_90(bool bParam0)
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

void func_91()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;

	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (iVar0 < 42)
		{
			if (!Global_53811[iVar1 /*36*/].f_8)
			{
				if (Global_111638.f_20559.f_103[iVar0] > 0f)
				{
					Global_53811[iVar1 /*36*/].f_9 = Global_111638.f_20559.f_103[iVar0];
				}
				if (Global_111638.f_20559.f_146[iVar0] > 0f)
				{
					Global_53811[iVar1 /*36*/].f_31 = Global_111638.f_20559.f_146[iVar0];
				}
				if (Global_111638.f_20559.f_189[iVar0] > 0f)
				{
					Global_53811[iVar1 /*36*/].f_32 = Global_111638.f_20559.f_189[iVar0];
				}
				iVar0++;
			}
			if ((Global_53811[iVar1 /*36*/].f_32 > 0f && Global_53811[iVar1 /*36*/].f_31 > 0f) && Global_53811[iVar1 /*36*/].f_9 > 0f)
			{
				fVar2 = Global_53811[iVar1 /*36*/].f_9;
				if (fVar2 > Global_53811[iVar1 /*36*/].f_31)
				{
					Global_53811[iVar1 /*36*/].f_31 = fVar2;
				}
				if (fVar2 < Global_53811[iVar1 /*36*/].f_32)
				{
					Global_53811[iVar1 /*36*/].f_32 = fVar2;
				}
				iVar3 = 0;
				fVar4 = (Global_53811[iVar1 /*36*/].f_31 - Global_53811[iVar1 /*36*/].f_32);
				fVar5 = 0f;
				fVar10 = 2.147484E+09f;
				fVar11 = -2.147484E+09f;
				iVar3 = 15;
				while (iVar3 >= 0)
				{
					fVar6 = ((fVar4 * UNK_0x79833B02DBD2A244(1f, 5f)) * 0.01f);
					fVar8 = 1f;
					fVar9 = 1f;
					if (iVar3 == 15)
					{
						fVar12 = ((Global_53811[iVar1 /*36*/].f_31 - Global_53811[iVar1 /*36*/].f_9) / fVar4);
						if (fVar12 < 0.2f)
						{
							fVar8 = (fVar12 / 0.2f);
						}
						fVar13 = ((Global_53811[iVar1 /*36*/].f_9 - Global_53811[iVar1 /*36*/].f_32) / fVar4);
						if (fVar13 < 0.2f)
						{
							fVar9 = (fVar13 / 0.2f);
						}
						fVar7 = UNK_0x79833B02DBD2A244((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_53811[iVar1 /*36*/].f_14[iVar3] = Global_53811[iVar1 /*36*/].f_9;
					}
					else
					{
						fVar14 = ((Global_53811[iVar1 /*36*/].f_31 - Global_53811[iVar1 /*36*/].f_14[iVar3 + 1]) / fVar4);
						if (fVar14 < 0.2f)
						{
							fVar8 = (fVar14 / 0.2f);
						}
						fVar15 = ((Global_53811[iVar1 /*36*/].f_14[iVar3 + 1] - Global_53811[iVar1 /*36*/].f_32) / fVar4);
						if (fVar15 < 0.2f)
						{
							fVar9 = (fVar15 / 0.2f);
						}
						fVar7 = UNK_0x79833B02DBD2A244((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_53811[iVar1 /*36*/].f_14[iVar3] = (Global_53811[iVar1 /*36*/].f_14[iVar3 + 1] + fVar7);
					}
					fVar10 = func_93(fVar10, Global_53811[iVar1 /*36*/].f_14[iVar3]);
					fVar11 = func_92(fVar11, Global_53811[iVar1 /*36*/].f_14[iVar3]);
					fVar5 = (fVar5 + Global_53811[iVar1 /*36*/].f_14[iVar3]);
					iVar3 = (iVar3 + -1);
				}
				Global_53811[iVar1 /*36*/].f_32 = fVar10;
				Global_53811[iVar1 /*36*/].f_31 = fVar11;
				fVar5 = (fVar5 / 16f);
				Global_53811[iVar1 /*36*/].f_33 = (Global_53811[iVar1 /*36*/].f_9 - fVar5);
				Global_53811[iVar1 /*36*/].f_34 = ((Global_53811[iVar1 /*36*/].f_33 / fVar5) * 100f);
				fVar16 = func_7(iVar1);
				if (fVar16 != 1f)
				{
					fVar5 = 0f;
					fVar17 = (fVar16 - 1f);
					iVar3 = 0;
					while (iVar3 <= 15)
					{
						fVar18 = (SYSTEM::TO_FLOAT(iVar3) / 16f);
						Global_53811[iVar1 /*36*/].f_14[iVar3] = (Global_53811[iVar1 /*36*/].f_14[iVar3] * (UNK_0x79833B02DBD2A244(0.95f, 1.05f) + (fVar18 * fVar17)));
						if (iVar3 == 15)
						{
							Global_53811[iVar1 /*36*/].f_14[iVar3] = (Global_53811[iVar1 /*36*/].f_9 * fVar16);
						}
						fVar5 = (fVar5 + Global_53811[iVar1 /*36*/].f_14[iVar3]);
						Global_53811[iVar1 /*36*/].f_32 = func_93(Global_53811[iVar1 /*36*/].f_32, Global_53811[iVar1 /*36*/].f_14[iVar3]);
						Global_53811[iVar1 /*36*/].f_31 = func_92(Global_53811[iVar1 /*36*/].f_31, Global_53811[iVar1 /*36*/].f_14[iVar3]);
						iVar3++;
					}
					fVar5 = (fVar5 / 16f);
					Global_53811[iVar1 /*36*/].f_33 = (Global_53811[iVar1 /*36*/].f_9 - fVar5);
					Global_53811[iVar1 /*36*/].f_34 = ((Global_53811[iVar1 /*36*/].f_33 / fVar5) * 100f);
				}
			}
		}
		iVar1++;
	}
}

float func_92(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_93(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_94()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (!Global_111638.f_20559.f_101)
	{
		iVar0 = 0;
		while (iVar0 < 80)
		{
			if (!Global_53811[iVar0 /*36*/].f_8)
			{
				Global_53811[iVar0 /*36*/].f_9 = UNK_0x79833B02DBD2A244(15f, 290f);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			func_28(1);
			iVar0 = 0;
			while (iVar0 < 80)
			{
				fVar2 = 0.85f;
				fVar3 = 1.15f;
				if (Global_53811[iVar0 /*36*/].f_9 < 5f)
				{
					fVar2 = 1.1f;
				}
				else if (Global_53811[iVar0 /*36*/].f_9 < 10f)
				{
					fVar2 = 0.95f;
				}
				else if (Global_53811[iVar0 /*36*/].f_9 > 285f)
				{
					fVar3 = 0.97f;
				}
				else if (Global_53811[iVar0 /*36*/].f_9 > 270f)
				{
					fVar3 = 1.05f;
				}
				Global_53811[iVar0 /*36*/].f_9 = (Global_53811[iVar0 /*36*/].f_9 * UNK_0x79833B02DBD2A244(fVar2, fVar3));
				Global_53811[iVar0 /*36*/].f_9 = func_93(func_92(UNK_0x755FF954DAE327E1(Global_53811[iVar0 /*36*/].f_9), 3.5f), 290f);
				iVar0++;
			}
			iVar1++;
		}
		func_42();
		Global_111638.f_20559.f_101 = 1;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_58973 = 0;
	Global_58975 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			StringCopy(&(Global_61358[iVar0 /*34*/][iVar1 /*11*/].f_1), "BSNEWS_DEFAULT", 16);
			StringCopy(&(Global_61358[iVar0 /*34*/][iVar1 /*11*/].f_5), "BSNEWS_DEFAULT", 16);
			iVar1++;
		}
		iVar0++;
	}
	func_96(55, "ECL_P_SR_H", "ECL_P_SR_C", 0, 0);
	func_96(55, "ECL_P_SF_H", "ECL_P_SF_C", 1, 0);
	func_96(55, "ECL_P_RF_H", "ECL_P_RF_C", 2, 0);
	func_96(51, "BGR_P_SR_H", "BGR_P_SR_C", 0, 0);
	func_96(51, "BGR_P_SF_H", "BGR_P_SF_C", 1, 0);
	func_96(52, "CLK_P_SR_H", "CLK_P_SR_C", 0, 0);
	func_96(52, "CLK_P_SF_H", "CLK_P_SF_C", 1, 0);
	func_96(52, "CLK_P_RF_H", "CLK_P_RF_C", 2, 0);
	func_96(48, "BEN_P_SR_H", "BEN_P_SR_C", 0, 0);
	func_96(48, "BEN_P_SF_H", "BEN_P_SF_C", 1, 0);
	func_96(48, "BEN_P_RF_H", "BEN_P_RF_C", 2, 0);
	func_96(13, "FLC_P_SR_H", "FLC_P_SR_C", 0, 0);
	func_96(13, "FLC_P_SF_H", "FLC_P_SF_C", 1, 0);
	func_96(13, "FLC_P_RF_H", "FLC_P_RF_C", 2, 0);
	func_96(64, "PRO_P_SR_H", "PRO_P_SR_C", 0, 0);
	func_96(64, "PRO_P_SF_H", "PRO_P_SF_C", 1, 0);
	func_96(64, "PRO_P_RF_H", "PRO_P_RF_C", 2, 0);
	func_96(70, "UNI_P_SR_H", "UNI_P_SR_C", 0, 0);
	func_96(70, "UNI_P_SF_H", "UNI_P_SF_C", 1, 0);
	func_96(70, "UNI_P_RF_H", "UNI_P_RF_C", 2, 0);
	func_96(60, "KRP_P_SR_H", "KRP_P_SR_C", 0, 0);
	func_96(60, "KRP_P_SF_H", "KRP_P_SF_C", 1, 0);
	func_96(60, "KRP_P_RF_H", "KRP_P_RF_C", 2, 0);
	func_96(56, "FUS_P_SR_H", "FUS_P_SR_C", 0, 0);
	func_96(56, "FUS_P_SF_H", "FUS_P_SF_C", 1, 0);
	func_96(56, "FUS_P_RF_H", "FUS_P_RF_C", 2, 0);
	func_96(58, "GOP_P_SR_H", "GOP_P_SR_C", 0, 0);
	func_96(58, "GOP_P_SF_H", "GOP_P_SF_C", 1, 0);
	func_96(58, "GOP_P_RF_H", "GOP_P_RF_C", 2, 0);
	func_96(53, "BAN_P_SR_H", "BAN_P_SR_C", 0, 0);
	func_96(53, "BAN_P_SF_H", "BAN_P_SF_C", 1, 0);
	func_96(53, "BAN_P_RF_H", "BAN_P_RF_C", 2, 0);
	func_96(62, "MAX_P_SR_H", "MAX_P_SR_C", 0, 0);
	func_96(62, "MAX_P_SF_H", "MAX_P_SF_C", 1, 0);
	func_96(62, "MAX_P_RF_H", "MAX_P_RF_C", 2, 0);
	func_96(57, "GAS_P_SR_H", "GAS_P_SR_C", 0, 0);
	func_96(57, "GAS_P_SF_H", "GAS_P_SF_C", 1, 0);
	func_96(57, "GAS_P_RF_H", "GAS_P_RF_C", 2, 0);
	func_96(59, "GRU_P_SR_H", "GRU_P_SR_C", 0, 0);
	func_96(59, "GRU_P_SF_H", "GRU_P_SF_C", 1, 0);
	func_96(59, "GRU_P_RF_H", "GRU_P_RF_C", 2, 0);
	func_96(44, "PMP_P_SR_H", "PMP_P_SR_C", 0, 0);
	func_96(44, "PMP_P_SF_H", "PMP_P_SF_C", 1, 0);
	func_96(44, "PMP_P_RF_H", "PMP_P_RF_C", 2, 0);
	iVar2 = UNK_0x09AC81E49EA267F7(false, (Global_58973 - 1));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Global_61358[iVar0 /*34*/][iVar1 /*11*/].f_10 = 5000f;
			while (!func_88(&(Global_58976[iVar2 /*14*/]), iVar0))
			{
				iVar2 = UNK_0x09AC81E49EA267F7(false, (Global_58973 - 1));
				SYSTEM::WAIT(2000);
			}
			Global_58976[iVar2 /*14*/].f_10 = 0f;
			iVar2 = UNK_0x09AC81E49EA267F7(false, (Global_58973 - 1));
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	if (Global_58973 == 150)
	{
		return;
	}
	Global_58976[Global_58973 /*14*/].f_11 = iParam3;
	Global_58976[Global_58973 /*14*/] = iParam4;
	StringCopy(&(Global_58976[Global_58973 /*14*/].f_1), sParam1, 16);
	StringCopy(&(Global_58976[Global_58973 /*14*/].f_5), sParam2, 16);
	Global_58976[Global_58973 /*14*/].f_9 = Global_58975;
	Global_58976[Global_58973 /*14*/].f_12 = iParam0;
	Global_58973++;
	Global_58975++;
}

void func_97()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		Global_53811[iVar0 /*36*/].f_33 = 0f;
		Global_53811[iVar0 /*36*/].f_13 = 0;
		Global_53811[iVar0 /*36*/].f_12 = 0;
		Global_53811[iVar0 /*36*/].f_31 = 0f;
		Global_53811[iVar0 /*36*/].f_32 = 3.402823E+38f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_53811[iVar0 /*36*/].f_14[iVar1] = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		Global_57254[iVar0 /*7*/].f_2 = 0;
		iVar0++;
	}
	StringCopy(&(Global_53811[0 /*36*/]), "BSS_BSTR_0", 16);
	StringCopy(&(Global_53811[0 /*36*/].f_4), "BSS_BSTR_1", 16);
	Global_53811[0 /*36*/].f_8 = 1;
	Global_53811[0 /*36*/].f_35 = 0;
	StringCopy(&(Global_53811[1 /*36*/]), "BSS_BSTR_2", 16);
	StringCopy(&(Global_53811[1 /*36*/].f_4), "BSS_BSTR_3", 16);
	Global_53811[1 /*36*/].f_8 = 1;
	Global_53811[1 /*36*/].f_35 = 1;
	StringCopy(&(Global_53811[2 /*36*/]), "BSS_BSTR_4", 16);
	StringCopy(&(Global_53811[2 /*36*/].f_4), "BSS_BSTR_5", 16);
	Global_53811[2 /*36*/].f_8 = 0;
	Global_53811[2 /*36*/].f_35 = 0;
	StringCopy(&(Global_53811[3 /*36*/]), "BSS_BSTR_6", 16);
	StringCopy(&(Global_53811[3 /*36*/].f_4), "BSS_BSTR_7", 16);
	Global_53811[3 /*36*/].f_8 = 1;
	Global_53811[3 /*36*/].f_35 = 2;
	StringCopy(&(Global_53811[4 /*36*/]), "BSS_BSTR_8", 16);
	StringCopy(&(Global_53811[4 /*36*/].f_4), "BSS_BSTR_9", 16);
	Global_53811[4 /*36*/].f_8 = 1;
	Global_53811[4 /*36*/].f_35 = 3;
	StringCopy(&(Global_53811[5 /*36*/]), "BSS_BSTR_10", 16);
	StringCopy(&(Global_53811[5 /*36*/].f_4), "BSS_BSTR_11", 16);
	Global_53811[5 /*36*/].f_8 = 1;
	Global_53811[5 /*36*/].f_35 = 4;
	StringCopy(&(Global_53811[6 /*36*/]), "BSS_BSTR_12", 16);
	StringCopy(&(Global_53811[6 /*36*/].f_4), "BSS_BSTR_13", 16);
	Global_53811[6 /*36*/].f_8 = 1;
	Global_53811[6 /*36*/].f_35 = 5;
	StringCopy(&(Global_53811[7 /*36*/]), "BSS_BSTR_14", 16);
	StringCopy(&(Global_53811[7 /*36*/].f_4), "BSS_BSTR_15", 16);
	Global_53811[7 /*36*/].f_8 = 1;
	Global_53811[7 /*36*/].f_35 = 6;
	StringCopy(&(Global_53811[8 /*36*/]), "BSS_BSTR_16", 16);
	StringCopy(&(Global_53811[8 /*36*/].f_4), "BSS_BSTR_16", 16);
	Global_53811[8 /*36*/].f_8 = 1;
	Global_53811[8 /*36*/].f_35 = 7;
	StringCopy(&(Global_53811[9 /*36*/]), "BSS_BSTR_17", 16);
	StringCopy(&(Global_53811[9 /*36*/].f_4), "BSS_BSTR_18", 16);
	Global_53811[9 /*36*/].f_8 = 1;
	Global_53811[9 /*36*/].f_35 = 8;
	StringCopy(&(Global_53811[10 /*36*/]), "BSS_BSTR_19", 16);
	StringCopy(&(Global_53811[10 /*36*/].f_4), "BSS_BSTR_20", 16);
	Global_53811[10 /*36*/].f_8 = 1;
	Global_53811[10 /*36*/].f_35 = 9;
	StringCopy(&(Global_53811[11 /*36*/]), "BSS_BSTR_21", 16);
	StringCopy(&(Global_53811[11 /*36*/].f_4), "BSS_BSTR_22", 16);
	Global_53811[11 /*36*/].f_8 = 1;
	Global_53811[11 /*36*/].f_35 = 10;
	StringCopy(&(Global_53811[12 /*36*/]), "BSS_BSTR_23", 16);
	StringCopy(&(Global_53811[12 /*36*/].f_4), "BSS_BSTR_24", 16);
	Global_53811[12 /*36*/].f_8 = 1;
	Global_53811[12 /*36*/].f_35 = 11;
	StringCopy(&(Global_53811[13 /*36*/]), "BSS_BSTR_25", 16);
	StringCopy(&(Global_53811[13 /*36*/].f_4), "BSS_BSTR_26", 16);
	Global_53811[13 /*36*/].f_8 = 0;
	Global_53811[13 /*36*/].f_35 = 1;
	StringCopy(&(Global_53811[14 /*36*/]), "BSS_BSTR_27", 16);
	StringCopy(&(Global_53811[14 /*36*/].f_4), "BSS_BSTR_28", 16);
	Global_53811[14 /*36*/].f_8 = 0;
	Global_53811[14 /*36*/].f_35 = 2;
	StringCopy(&(Global_53811[15 /*36*/]), "BSS_BSTR_29", 16);
	StringCopy(&(Global_53811[15 /*36*/].f_4), "BSS_BSTR_30", 16);
	Global_53811[15 /*36*/].f_8 = 1;
	Global_53811[15 /*36*/].f_35 = 12;
	StringCopy(&(Global_53811[16 /*36*/]), "BSS_BSTR_31", 16);
	StringCopy(&(Global_53811[16 /*36*/].f_4), "BSS_BSTR_32", 16);
	Global_53811[16 /*36*/].f_8 = 0;
	Global_53811[16 /*36*/].f_35 = 3;
	StringCopy(&(Global_53811[17 /*36*/]), "BSS_BSTR_33", 16);
	StringCopy(&(Global_53811[17 /*36*/].f_4), "BSS_BSTR_34", 16);
	Global_53811[17 /*36*/].f_8 = 0;
	Global_53811[17 /*36*/].f_35 = 4;
	StringCopy(&(Global_53811[18 /*36*/]), "BSS_BSTR_35", 16);
	StringCopy(&(Global_53811[18 /*36*/].f_4), "BSS_BSTR_36", 16);
	Global_53811[18 /*36*/].f_8 = 0;
	Global_53811[18 /*36*/].f_35 = 5;
	StringCopy(&(Global_53811[19 /*36*/]), "BSS_BSTR_37", 16);
	StringCopy(&(Global_53811[19 /*36*/].f_4), "BSS_BSTR_38", 16);
	Global_53811[19 /*36*/].f_8 = 0;
	Global_53811[19 /*36*/].f_35 = 6;
	StringCopy(&(Global_53811[20 /*36*/]), "BSS_BSTR_39", 16);
	StringCopy(&(Global_53811[20 /*36*/].f_4), "BSS_BSTR_40", 16);
	Global_53811[20 /*36*/].f_8 = 1;
	Global_53811[20 /*36*/].f_35 = 13;
	StringCopy(&(Global_53811[21 /*36*/]), "BSS_BSTR_41", 16);
	StringCopy(&(Global_53811[21 /*36*/].f_4), "BSS_BSTR_42", 16);
	Global_53811[21 /*36*/].f_8 = 1;
	Global_53811[21 /*36*/].f_35 = 14;
	StringCopy(&(Global_53811[22 /*36*/]), "BSS_BSTR_43", 16);
	StringCopy(&(Global_53811[22 /*36*/].f_4), "BSS_BSTR_44", 16);
	Global_53811[22 /*36*/].f_8 = 1;
	Global_53811[22 /*36*/].f_35 = 15;
	StringCopy(&(Global_53811[23 /*36*/]), "BSS_BSTR_45", 16);
	StringCopy(&(Global_53811[23 /*36*/].f_4), "BSS_BSTR_46", 16);
	Global_53811[23 /*36*/].f_8 = 1;
	Global_53811[23 /*36*/].f_35 = 16;
	StringCopy(&(Global_53811[24 /*36*/]), "BSS_BSTR_47", 16);
	StringCopy(&(Global_53811[24 /*36*/].f_4), "BSS_BSTR_48", 16);
	Global_53811[24 /*36*/].f_8 = 0;
	Global_53811[24 /*36*/].f_35 = 7;
	StringCopy(&(Global_53811[25 /*36*/]), "BSS_BSTR_49", 16);
	StringCopy(&(Global_53811[25 /*36*/].f_4), "BSS_BSTR_50", 16);
	Global_53811[25 /*36*/].f_8 = 1;
	Global_53811[25 /*36*/].f_35 = 17;
	StringCopy(&(Global_53811[26 /*36*/]), "BSS_BSTR_51", 16);
	StringCopy(&(Global_53811[26 /*36*/].f_4), "BSS_BSTR_52", 16);
	Global_53811[26 /*36*/].f_8 = 0;
	Global_53811[26 /*36*/].f_35 = 8;
	StringCopy(&(Global_53811[27 /*36*/]), "BSS_BSTR_53", 16);
	StringCopy(&(Global_53811[27 /*36*/].f_4), "BSS_BSTR_54", 16);
	Global_53811[27 /*36*/].f_8 = 1;
	Global_53811[27 /*36*/].f_35 = 18;
	StringCopy(&(Global_53811[28 /*36*/]), "BSS_BSTR_55", 16);
	StringCopy(&(Global_53811[28 /*36*/].f_4), "BSS_BSTR_56", 16);
	Global_53811[28 /*36*/].f_8 = 1;
	Global_53811[28 /*36*/].f_35 = 19;
	StringCopy(&(Global_53811[29 /*36*/]), "BSS_BSTR_57", 16);
	StringCopy(&(Global_53811[29 /*36*/].f_4), "BSS_BSTR_58", 16);
	Global_53811[29 /*36*/].f_8 = 0;
	Global_53811[29 /*36*/].f_35 = 9;
	StringCopy(&(Global_53811[30 /*36*/]), "BSS_BSTR_59", 16);
	StringCopy(&(Global_53811[30 /*36*/].f_4), "BSS_BSTR_60", 16);
	Global_53811[30 /*36*/].f_8 = 1;
	Global_53811[30 /*36*/].f_35 = 20;
	StringCopy(&(Global_53811[31 /*36*/]), "BSS_BSTR_61", 16);
	StringCopy(&(Global_53811[31 /*36*/].f_4), "BSS_BSTR_62", 16);
	Global_53811[31 /*36*/].f_8 = 1;
	Global_53811[31 /*36*/].f_35 = 21;
	StringCopy(&(Global_53811[32 /*36*/]), "BSS_BSTR_63", 16);
	StringCopy(&(Global_53811[32 /*36*/].f_4), "BSS_BSTR_64", 16);
	Global_53811[32 /*36*/].f_8 = 1;
	Global_53811[32 /*36*/].f_35 = 22;
	StringCopy(&(Global_53811[33 /*36*/]), "BSS_BSTR_65", 16);
	StringCopy(&(Global_53811[33 /*36*/].f_4), "BSS_BSTR_66", 16);
	Global_53811[33 /*36*/].f_8 = 1;
	Global_53811[33 /*36*/].f_35 = 23;
	StringCopy(&(Global_53811[34 /*36*/]), "BSS_BSTR_67", 16);
	StringCopy(&(Global_53811[34 /*36*/].f_4), "BSS_BSTR_68", 16);
	Global_53811[34 /*36*/].f_8 = 1;
	Global_53811[34 /*36*/].f_35 = 24;
	StringCopy(&(Global_53811[35 /*36*/]), "BSS_BSTR_69", 16);
	StringCopy(&(Global_53811[35 /*36*/].f_4), "BSS_BSTR_70", 16);
	Global_53811[35 /*36*/].f_8 = 1;
	Global_53811[35 /*36*/].f_35 = 25;
	StringCopy(&(Global_53811[36 /*36*/]), "BSS_BSTR_71", 16);
	StringCopy(&(Global_53811[36 /*36*/].f_4), "BSS_BSTR_72", 16);
	Global_53811[36 /*36*/].f_8 = 1;
	Global_53811[36 /*36*/].f_35 = 26;
	StringCopy(&(Global_53811[37 /*36*/]), "BSS_BSTR_73", 16);
	StringCopy(&(Global_53811[37 /*36*/].f_4), "BSS_BSTR_74", 16);
	Global_53811[37 /*36*/].f_8 = 1;
	Global_53811[37 /*36*/].f_35 = 27;
	StringCopy(&(Global_53811[38 /*36*/]), "BSS_BSTR_75", 16);
	StringCopy(&(Global_53811[38 /*36*/].f_4), "BSS_BSTR_76", 16);
	Global_53811[38 /*36*/].f_8 = 1;
	Global_53811[38 /*36*/].f_35 = 28;
	StringCopy(&(Global_53811[39 /*36*/]), "BSS_BSTR_77", 16);
	StringCopy(&(Global_53811[39 /*36*/].f_4), "BSS_BSTR_78", 16);
	Global_53811[39 /*36*/].f_8 = 1;
	Global_53811[39 /*36*/].f_35 = 29;
	StringCopy(&(Global_53811[40 /*36*/]), "BSS_BSTR_79", 16);
	StringCopy(&(Global_53811[40 /*36*/].f_4), "BSS_BSTR_80", 16);
	Global_53811[40 /*36*/].f_8 = 0;
	Global_53811[40 /*36*/].f_35 = 10;
	StringCopy(&(Global_53811[41 /*36*/]), "BSS_BSTR_81", 16);
	StringCopy(&(Global_53811[41 /*36*/].f_4), "BSS_BSTR_82", 16);
	Global_53811[41 /*36*/].f_8 = 1;
	Global_53811[41 /*36*/].f_35 = 30;
	StringCopy(&(Global_53811[42 /*36*/]), "BSS_BSTR_83", 16);
	StringCopy(&(Global_53811[42 /*36*/].f_4), "BSS_BSTR_84", 16);
	Global_53811[42 /*36*/].f_8 = 1;
	Global_53811[42 /*36*/].f_35 = 31;
	StringCopy(&(Global_53811[43 /*36*/]), "BSS_BSTR_85", 16);
	StringCopy(&(Global_53811[43 /*36*/].f_4), "BSS_BSTR_86", 16);
	Global_53811[43 /*36*/].f_8 = 1;
	Global_53811[43 /*36*/].f_35 = 32;
	StringCopy(&(Global_53811[44 /*36*/]), "BSS_BSTR_87", 16);
	StringCopy(&(Global_53811[44 /*36*/].f_4), "BSS_BSTR_88", 16);
	Global_53811[44 /*36*/].f_8 = 1;
	Global_53811[44 /*36*/].f_35 = 33;
	StringCopy(&(Global_53811[45 /*36*/]), "BSS_BSTR_89", 16);
	StringCopy(&(Global_53811[45 /*36*/].f_4), "BSS_BSTR_90", 16);
	Global_53811[45 /*36*/].f_8 = 1;
	Global_53811[45 /*36*/].f_35 = 34;
	StringCopy(&(Global_53811[46 /*36*/]), "BSS_BSTR_91", 16);
	StringCopy(&(Global_53811[46 /*36*/].f_4), "BSS_BSTR_92", 16);
	Global_53811[46 /*36*/].f_8 = 1;
	Global_53811[46 /*36*/].f_35 = 35;
	StringCopy(&(Global_53811[47 /*36*/]), "BSS_BSTR_93", 16);
	StringCopy(&(Global_53811[47 /*36*/].f_4), "BSS_BSTR_94", 16);
	Global_53811[47 /*36*/].f_8 = 0;
	Global_53811[47 /*36*/].f_35 = 11;
	StringCopy(&(Global_53811[48 /*36*/]), "BSS_BSTR_95", 16);
	StringCopy(&(Global_53811[48 /*36*/].f_4), "BSS_BSTR_96", 16);
	Global_53811[48 /*36*/].f_8 = 0;
	Global_53811[48 /*36*/].f_35 = 12;
	StringCopy(&(Global_53811[49 /*36*/]), "BSS_BSTR_97", 16);
	StringCopy(&(Global_53811[49 /*36*/].f_4), "BSS_BSTR_98", 16);
	Global_53811[49 /*36*/].f_8 = 0;
	Global_53811[49 /*36*/].f_35 = 13;
	StringCopy(&(Global_53811[50 /*36*/]), "BSS_BSTR_99", 16);
	StringCopy(&(Global_53811[50 /*36*/].f_4), "BSS_BSTR_100", 16);
	Global_53811[50 /*36*/].f_8 = 0;
	Global_53811[50 /*36*/].f_35 = 14;
	StringCopy(&(Global_53811[51 /*36*/]), "BSS_BSTR_101", 16);
	StringCopy(&(Global_53811[51 /*36*/].f_4), "BSS_BSTR_102", 16);
	Global_53811[51 /*36*/].f_8 = 0;
	Global_53811[51 /*36*/].f_35 = 15;
	StringCopy(&(Global_53811[52 /*36*/]), "BSS_BSTR_103", 16);
	StringCopy(&(Global_53811[52 /*36*/].f_4), "BSS_BSTR_104", 16);
	Global_53811[52 /*36*/].f_8 = 0;
	Global_53811[52 /*36*/].f_35 = 16;
	StringCopy(&(Global_53811[53 /*36*/]), "BSS_BSTR_105", 16);
	StringCopy(&(Global_53811[53 /*36*/].f_4), "BSS_BSTR_106", 16);
	Global_53811[53 /*36*/].f_8 = 0;
	Global_53811[53 /*36*/].f_35 = 17;
	StringCopy(&(Global_53811[54 /*36*/]), "BSS_BSTR_107", 16);
	StringCopy(&(Global_53811[54 /*36*/].f_4), "BSS_BSTR_108", 16);
	Global_53811[54 /*36*/].f_8 = 0;
	Global_53811[54 /*36*/].f_35 = 18;
	StringCopy(&(Global_53811[55 /*36*/]), "BSS_BSTR_109", 16);
	StringCopy(&(Global_53811[55 /*36*/].f_4), "BSS_BSTR_110", 16);
	Global_53811[55 /*36*/].f_8 = 0;
	Global_53811[55 /*36*/].f_35 = 19;
	StringCopy(&(Global_53811[56 /*36*/]), "BSS_BSTR_111", 16);
	StringCopy(&(Global_53811[56 /*36*/].f_4), "BSS_BSTR_112", 16);
	Global_53811[56 /*36*/].f_8 = 0;
	Global_53811[56 /*36*/].f_35 = 20;
	StringCopy(&(Global_53811[57 /*36*/]), "BSS_BSTR_113", 16);
	StringCopy(&(Global_53811[57 /*36*/].f_4), "BSS_BSTR_114", 16);
	Global_53811[57 /*36*/].f_8 = 0;
	Global_53811[57 /*36*/].f_35 = 21;
	StringCopy(&(Global_53811[58 /*36*/]), "BSS_BSTR_115", 16);
	StringCopy(&(Global_53811[58 /*36*/].f_4), "BSS_BSTR_116", 16);
	Global_53811[58 /*36*/].f_8 = 0;
	Global_53811[58 /*36*/].f_35 = 22;
	StringCopy(&(Global_53811[59 /*36*/]), "BSS_BSTR_117", 16);
	StringCopy(&(Global_53811[59 /*36*/].f_4), "BSS_BSTR_118", 16);
	Global_53811[59 /*36*/].f_8 = 0;
	Global_53811[59 /*36*/].f_35 = 23;
	StringCopy(&(Global_53811[60 /*36*/]), "BSS_BSTR_119", 16);
	StringCopy(&(Global_53811[60 /*36*/].f_4), "BSS_BSTR_120", 16);
	Global_53811[60 /*36*/].f_8 = 0;
	Global_53811[60 /*36*/].f_35 = 24;
	StringCopy(&(Global_53811[61 /*36*/]), "BSS_BSTR_121", 16);
	StringCopy(&(Global_53811[61 /*36*/].f_4), "BSS_BSTR_122", 16);
	Global_53811[61 /*36*/].f_8 = 0;
	Global_53811[61 /*36*/].f_35 = 25;
	StringCopy(&(Global_53811[62 /*36*/]), "BSS_BSTR_123", 16);
	StringCopy(&(Global_53811[62 /*36*/].f_4), "BSS_BSTR_124", 16);
	Global_53811[62 /*36*/].f_8 = 0;
	Global_53811[62 /*36*/].f_35 = 26;
	StringCopy(&(Global_53811[63 /*36*/]), "BSS_BSTR_125", 16);
	StringCopy(&(Global_53811[63 /*36*/].f_4), "BSS_BSTR_126", 16);
	Global_53811[63 /*36*/].f_8 = 0;
	Global_53811[63 /*36*/].f_35 = 27;
	StringCopy(&(Global_53811[64 /*36*/]), "BSS_BSTR_127", 16);
	StringCopy(&(Global_53811[64 /*36*/].f_4), "BSS_BSTR_128", 16);
	Global_53811[64 /*36*/].f_8 = 0;
	Global_53811[64 /*36*/].f_35 = 28;
	StringCopy(&(Global_53811[65 /*36*/]), "BSS_BSTR_129", 16);
	StringCopy(&(Global_53811[65 /*36*/].f_4), "BSS_BSTR_130", 16);
	Global_53811[65 /*36*/].f_8 = 0;
	Global_53811[65 /*36*/].f_35 = 29;
	StringCopy(&(Global_53811[66 /*36*/]), "BSS_BSTR_131", 16);
	StringCopy(&(Global_53811[66 /*36*/].f_4), "BSS_BSTR_132", 16);
	Global_53811[66 /*36*/].f_8 = 0;
	Global_53811[66 /*36*/].f_35 = 30;
	StringCopy(&(Global_53811[67 /*36*/]), "BSS_BSTR_133", 16);
	StringCopy(&(Global_53811[67 /*36*/].f_4), "BSS_BSTR_134", 16);
	Global_53811[67 /*36*/].f_8 = 0;
	Global_53811[67 /*36*/].f_35 = 31;
	StringCopy(&(Global_53811[68 /*36*/]), "BSS_BSTR_135", 16);
	StringCopy(&(Global_53811[68 /*36*/].f_4), "BSS_BSTR_136", 16);
	Global_53811[68 /*36*/].f_8 = 0;
	Global_53811[68 /*36*/].f_35 = 32;
	StringCopy(&(Global_53811[69 /*36*/]), "BSS_BSTR_137", 16);
	StringCopy(&(Global_53811[69 /*36*/].f_4), "BSS_BSTR_138", 16);
	Global_53811[69 /*36*/].f_8 = 0;
	Global_53811[69 /*36*/].f_35 = 33;
	StringCopy(&(Global_53811[70 /*36*/]), "BSS_BSTR_139", 16);
	StringCopy(&(Global_53811[70 /*36*/].f_4), "BSS_BSTR_140", 16);
	Global_53811[70 /*36*/].f_8 = 0;
	Global_53811[70 /*36*/].f_35 = 34;
	StringCopy(&(Global_53811[71 /*36*/]), "BSS_BSTR_141", 16);
	StringCopy(&(Global_53811[71 /*36*/].f_4), "BSS_BSTR_142", 16);
	Global_53811[71 /*36*/].f_8 = 1;
	Global_53811[71 /*36*/].f_35 = 36;
	StringCopy(&(Global_53811[72 /*36*/]), "BSS_BSTR_143", 16);
	StringCopy(&(Global_53811[72 /*36*/].f_4), "BSS_BSTR_144", 16);
	Global_53811[72 /*36*/].f_8 = 0;
	Global_53811[72 /*36*/].f_35 = 35;
	StringCopy(&(Global_53811[73 /*36*/]), "BSS_BSTR_145", 16);
	StringCopy(&(Global_53811[73 /*36*/].f_4), "BSS_BSTR_146", 16);
	Global_53811[73 /*36*/].f_8 = 0;
	Global_53811[73 /*36*/].f_35 = 36;
	StringCopy(&(Global_53811[74 /*36*/]), "BSS_BSTR_147", 16);
	StringCopy(&(Global_53811[74 /*36*/].f_4), "BSS_BSTR_148", 16);
	Global_53811[74 /*36*/].f_8 = 0;
	Global_53811[74 /*36*/].f_35 = 37;
	StringCopy(&(Global_53811[75 /*36*/]), "BSS_BSTR_149", 16);
	StringCopy(&(Global_53811[75 /*36*/].f_4), "BSS_BSTR_150", 16);
	Global_53811[75 /*36*/].f_8 = 0;
	Global_53811[75 /*36*/].f_35 = 38;
	StringCopy(&(Global_53811[76 /*36*/]), "BSS_BSTR_151", 16);
	StringCopy(&(Global_53811[76 /*36*/].f_4), "BSS_BSTR_152", 16);
	Global_53811[76 /*36*/].f_8 = 1;
	Global_53811[76 /*36*/].f_35 = 37;
	StringCopy(&(Global_53811[77 /*36*/]), "BSS_BSTR_153", 16);
	StringCopy(&(Global_53811[77 /*36*/].f_4), "BSS_BSTR_154", 16);
	Global_53811[77 /*36*/].f_8 = 1;
	Global_53811[77 /*36*/].f_35 = 38;
	StringCopy(&(Global_53811[78 /*36*/]), "BSS_BSTR_155", 16);
	StringCopy(&(Global_53811[78 /*36*/].f_4), "BSS_BSTR_156", 16);
	Global_53811[78 /*36*/].f_8 = 0;
	Global_53811[78 /*36*/].f_35 = 39;
	StringCopy(&(Global_53811[79 /*36*/]), "BSS_BSTR_157", 16);
	StringCopy(&(Global_53811[79 /*36*/].f_4), "BSS_BSTR_158", 16);
	Global_53811[79 /*36*/].f_8 = 0;
	Global_53811[79 /*36*/].f_35 = 40;
	Global_56966[0 /*7*/].f_2 = 1f;
	Global_56966[0 /*7*/].f_1 = 1f;
	Global_56966[0 /*7*/].f_3 = 1000f;
	Global_56966[0 /*7*/].f_4 = 3.5f;
	Global_56966[0 /*7*/].f_5 = 3.5f;
	Global_56966[0 /*7*/].f_6 = 0.1f;
	Global_56966[1 /*7*/].f_2 = 1f;
	Global_56966[1 /*7*/].f_1 = 1f;
	Global_56966[1 /*7*/].f_3 = 1000f;
	Global_56966[1 /*7*/].f_4 = 3.5f;
	Global_56966[1 /*7*/].f_5 = 3.5f;
	Global_56966[1 /*7*/].f_6 = 0.1f;
	Global_56966[2 /*7*/].f_2 = 1f;
	Global_56966[2 /*7*/].f_1 = 1f;
	Global_56966[2 /*7*/].f_3 = 1000f;
	Global_56966[2 /*7*/].f_4 = 3.5f;
	Global_56966[2 /*7*/].f_5 = 3.5f;
	Global_56966[2 /*7*/].f_6 = 0.1f;
	Global_56966[3 /*7*/].f_2 = 1f;
	Global_56966[3 /*7*/].f_1 = 1f;
	Global_56966[3 /*7*/].f_3 = 1000f;
	Global_56966[3 /*7*/].f_4 = 3.5f;
	Global_56966[3 /*7*/].f_5 = 3.5f;
	Global_56966[3 /*7*/].f_6 = 0.1f;
	Global_56966[4 /*7*/].f_2 = 1f;
	Global_56966[4 /*7*/].f_1 = 1f;
	Global_56966[4 /*7*/].f_3 = 1000f;
	Global_56966[4 /*7*/].f_4 = 3.5f;
	Global_56966[4 /*7*/].f_5 = 3.5f;
	Global_56966[4 /*7*/].f_6 = 0.1f;
	Global_56966[5 /*7*/].f_2 = 1f;
	Global_56966[5 /*7*/].f_1 = 1f;
	Global_56966[5 /*7*/].f_3 = 1000f;
	Global_56966[5 /*7*/].f_4 = 3.5f;
	Global_56966[5 /*7*/].f_5 = 3.5f;
	Global_56966[5 /*7*/].f_6 = 0.1f;
	Global_56966[6 /*7*/].f_2 = 1f;
	Global_56966[6 /*7*/].f_1 = 1f;
	Global_56966[6 /*7*/].f_3 = 1000f;
	Global_56966[6 /*7*/].f_4 = 3.5f;
	Global_56966[6 /*7*/].f_5 = 3.5f;
	Global_56966[6 /*7*/].f_6 = 0.1f;
	Global_56966[7 /*7*/].f_2 = 1f;
	Global_56966[7 /*7*/].f_1 = 1f;
	Global_56966[7 /*7*/].f_3 = 1000f;
	Global_56966[7 /*7*/].f_4 = 3.5f;
	Global_56966[7 /*7*/].f_5 = 3.5f;
	Global_56966[7 /*7*/].f_6 = 0.1f;
	Global_56966[8 /*7*/].f_2 = 1f;
	Global_56966[8 /*7*/].f_1 = 1f;
	Global_56966[8 /*7*/].f_3 = 1000f;
	Global_56966[8 /*7*/].f_4 = 3.5f;
	Global_56966[8 /*7*/].f_5 = 3.5f;
	Global_56966[8 /*7*/].f_6 = 0.1f;
	Global_56966[9 /*7*/].f_2 = 1f;
	Global_56966[9 /*7*/].f_1 = 1f;
	Global_56966[9 /*7*/].f_3 = 1000f;
	Global_56966[9 /*7*/].f_4 = 3.5f;
	Global_56966[9 /*7*/].f_5 = 3.5f;
	Global_56966[9 /*7*/].f_6 = 0.1f;
	Global_56966[10 /*7*/].f_2 = 1f;
	Global_56966[10 /*7*/].f_1 = 1f;
	Global_56966[10 /*7*/].f_3 = 1000f;
	Global_56966[10 /*7*/].f_4 = 3.5f;
	Global_56966[10 /*7*/].f_5 = 3.5f;
	Global_56966[10 /*7*/].f_6 = 0.1f;
	Global_56966[11 /*7*/].f_2 = 1f;
	Global_56966[11 /*7*/].f_1 = 1f;
	Global_56966[11 /*7*/].f_3 = 1000f;
	Global_56966[11 /*7*/].f_4 = 3.5f;
	Global_56966[11 /*7*/].f_5 = 3.5f;
	Global_56966[11 /*7*/].f_6 = 0.1f;
	Global_56966[12 /*7*/].f_2 = 1f;
	Global_56966[12 /*7*/].f_1 = 1f;
	Global_56966[12 /*7*/].f_3 = 1000f;
	Global_56966[12 /*7*/].f_4 = 3.5f;
	Global_56966[12 /*7*/].f_5 = 3.5f;
	Global_56966[12 /*7*/].f_6 = 0.1f;
	Global_56966[13 /*7*/].f_2 = 1f;
	Global_56966[13 /*7*/].f_1 = 1f;
	Global_56966[13 /*7*/].f_3 = 1000f;
	Global_56966[13 /*7*/].f_4 = 3.5f;
	Global_56966[13 /*7*/].f_5 = 3.5f;
	Global_56966[13 /*7*/].f_6 = 0.1f;
	Global_56966[14 /*7*/].f_2 = 1f;
	Global_56966[14 /*7*/].f_1 = 1f;
	Global_56966[14 /*7*/].f_3 = 1000f;
	Global_56966[14 /*7*/].f_4 = 3.5f;
	Global_56966[14 /*7*/].f_5 = 3.5f;
	Global_56966[14 /*7*/].f_6 = 0.1f;
	Global_56966[15 /*7*/].f_2 = 1f;
	Global_56966[15 /*7*/].f_1 = 1f;
	Global_56966[15 /*7*/].f_3 = 1000f;
	Global_56966[15 /*7*/].f_4 = 3.5f;
	Global_56966[15 /*7*/].f_5 = 3.5f;
	Global_56966[15 /*7*/].f_6 = 0.1f;
	Global_56966[16 /*7*/].f_2 = 1f;
	Global_56966[16 /*7*/].f_1 = 1f;
	Global_56966[16 /*7*/].f_3 = 1000f;
	Global_56966[16 /*7*/].f_4 = 3.5f;
	Global_56966[16 /*7*/].f_5 = 3.5f;
	Global_56966[16 /*7*/].f_6 = 0.1f;
	Global_56966[17 /*7*/].f_2 = 1f;
	Global_56966[17 /*7*/].f_1 = 1f;
	Global_56966[17 /*7*/].f_3 = 1000f;
	Global_56966[17 /*7*/].f_4 = 3.5f;
	Global_56966[17 /*7*/].f_5 = 3.5f;
	Global_56966[17 /*7*/].f_6 = 0.1f;
	Global_56966[18 /*7*/].f_2 = 1f;
	Global_56966[18 /*7*/].f_1 = 1f;
	Global_56966[18 /*7*/].f_3 = 1000f;
	Global_56966[18 /*7*/].f_4 = 3.5f;
	Global_56966[18 /*7*/].f_5 = 3.5f;
	Global_56966[18 /*7*/].f_6 = 0.1f;
	Global_56966[19 /*7*/].f_2 = 1f;
	Global_56966[19 /*7*/].f_1 = 1f;
	Global_56966[19 /*7*/].f_3 = 1000f;
	Global_56966[19 /*7*/].f_4 = 3.5f;
	Global_56966[19 /*7*/].f_5 = 3.5f;
	Global_56966[19 /*7*/].f_6 = 0.1f;
	Global_56966[20 /*7*/].f_2 = 1f;
	Global_56966[20 /*7*/].f_1 = 1f;
	Global_56966[20 /*7*/].f_3 = 1000f;
	Global_56966[20 /*7*/].f_4 = 3.5f;
	Global_56966[20 /*7*/].f_5 = 3.5f;
	Global_56966[20 /*7*/].f_6 = 0.1f;
	Global_56966[21 /*7*/].f_2 = 1f;
	Global_56966[21 /*7*/].f_1 = 1f;
	Global_56966[21 /*7*/].f_3 = 1000f;
	Global_56966[21 /*7*/].f_4 = 3.5f;
	Global_56966[21 /*7*/].f_5 = 3.5f;
	Global_56966[21 /*7*/].f_6 = 0.1f;
	Global_56966[22 /*7*/].f_2 = 1f;
	Global_56966[22 /*7*/].f_1 = 1f;
	Global_56966[22 /*7*/].f_3 = 1000f;
	Global_56966[22 /*7*/].f_4 = 3.5f;
	Global_56966[22 /*7*/].f_5 = 3.5f;
	Global_56966[22 /*7*/].f_6 = 0.1f;
	Global_56966[23 /*7*/].f_2 = 1f;
	Global_56966[23 /*7*/].f_1 = 1f;
	Global_56966[23 /*7*/].f_3 = 1000f;
	Global_56966[23 /*7*/].f_4 = 3.5f;
	Global_56966[23 /*7*/].f_5 = 3.5f;
	Global_56966[23 /*7*/].f_6 = 0.1f;
	Global_56966[24 /*7*/].f_2 = 1f;
	Global_56966[24 /*7*/].f_1 = 1f;
	Global_56966[24 /*7*/].f_3 = 1000f;
	Global_56966[24 /*7*/].f_4 = 3.5f;
	Global_56966[24 /*7*/].f_5 = 3.5f;
	Global_56966[24 /*7*/].f_6 = 0.1f;
	Global_56966[25 /*7*/].f_2 = 1f;
	Global_56966[25 /*7*/].f_1 = 1f;
	Global_56966[25 /*7*/].f_3 = 1000f;
	Global_56966[25 /*7*/].f_4 = 3.5f;
	Global_56966[25 /*7*/].f_5 = 3.5f;
	Global_56966[25 /*7*/].f_6 = 0.1f;
	Global_56966[26 /*7*/].f_2 = 1f;
	Global_56966[26 /*7*/].f_1 = 1f;
	Global_56966[26 /*7*/].f_3 = 1000f;
	Global_56966[26 /*7*/].f_4 = 3.5f;
	Global_56966[26 /*7*/].f_5 = 3.5f;
	Global_56966[26 /*7*/].f_6 = 0.1f;
	Global_56966[27 /*7*/].f_2 = 1f;
	Global_56966[27 /*7*/].f_1 = 1f;
	Global_56966[27 /*7*/].f_3 = 1000f;
	Global_56966[27 /*7*/].f_4 = 3.5f;
	Global_56966[27 /*7*/].f_5 = 3.5f;
	Global_56966[27 /*7*/].f_6 = 0.1f;
	Global_56966[28 /*7*/].f_2 = 1f;
	Global_56966[28 /*7*/].f_1 = 1f;
	Global_56966[28 /*7*/].f_3 = 1000f;
	Global_56966[28 /*7*/].f_4 = 3.5f;
	Global_56966[28 /*7*/].f_5 = 3.5f;
	Global_56966[28 /*7*/].f_6 = 0.1f;
	Global_56966[29 /*7*/].f_2 = 1f;
	Global_56966[29 /*7*/].f_1 = 1f;
	Global_56966[29 /*7*/].f_3 = 1000f;
	Global_56966[29 /*7*/].f_4 = 3.5f;
	Global_56966[29 /*7*/].f_5 = 3.5f;
	Global_56966[29 /*7*/].f_6 = 0.1f;
	Global_56966[30 /*7*/].f_2 = 1f;
	Global_56966[30 /*7*/].f_1 = 1f;
	Global_56966[30 /*7*/].f_3 = 1000f;
	Global_56966[30 /*7*/].f_4 = 3.5f;
	Global_56966[30 /*7*/].f_5 = 3.5f;
	Global_56966[30 /*7*/].f_6 = 0.1f;
	Global_56966[31 /*7*/].f_2 = 1f;
	Global_56966[31 /*7*/].f_1 = 1f;
	Global_56966[31 /*7*/].f_3 = 1000f;
	Global_56966[31 /*7*/].f_4 = 3.5f;
	Global_56966[31 /*7*/].f_5 = 3.5f;
	Global_56966[31 /*7*/].f_6 = 0.1f;
	Global_56966[32 /*7*/].f_2 = 1f;
	Global_56966[32 /*7*/].f_1 = 1f;
	Global_56966[32 /*7*/].f_3 = 1000f;
	Global_56966[32 /*7*/].f_4 = 3.5f;
	Global_56966[32 /*7*/].f_5 = 3.5f;
	Global_56966[32 /*7*/].f_6 = 0.1f;
	Global_56966[33 /*7*/].f_2 = 1f;
	Global_56966[33 /*7*/].f_1 = 1f;
	Global_56966[33 /*7*/].f_3 = 1000f;
	Global_56966[33 /*7*/].f_4 = 3.5f;
	Global_56966[33 /*7*/].f_5 = 3.5f;
	Global_56966[33 /*7*/].f_6 = 0.1f;
	Global_56966[34 /*7*/].f_2 = 1f;
	Global_56966[34 /*7*/].f_1 = 1f;
	Global_56966[34 /*7*/].f_3 = 1000f;
	Global_56966[34 /*7*/].f_4 = 3.5f;
	Global_56966[34 /*7*/].f_5 = 3.5f;
	Global_56966[34 /*7*/].f_6 = 0.1f;
	Global_56966[35 /*7*/].f_2 = 1f;
	Global_56966[35 /*7*/].f_1 = 1f;
	Global_56966[35 /*7*/].f_3 = 1000f;
	Global_56966[35 /*7*/].f_4 = 3.5f;
	Global_56966[35 /*7*/].f_5 = 3.5f;
	Global_56966[35 /*7*/].f_6 = 0.1f;
	Global_56966[36 /*7*/].f_2 = 1f;
	Global_56966[36 /*7*/].f_1 = 1f;
	Global_56966[36 /*7*/].f_3 = 1000f;
	Global_56966[36 /*7*/].f_4 = 3.5f;
	Global_56966[36 /*7*/].f_5 = 3.5f;
	Global_56966[36 /*7*/].f_6 = 0.1f;
	Global_56966[37 /*7*/].f_2 = 1f;
	Global_56966[37 /*7*/].f_1 = 1f;
	Global_56966[37 /*7*/].f_3 = 1000f;
	Global_56966[37 /*7*/].f_4 = 3.5f;
	Global_56966[37 /*7*/].f_5 = 3.5f;
	Global_56966[37 /*7*/].f_6 = 0.1f;
	Global_56966[38 /*7*/].f_2 = 1f;
	Global_56966[38 /*7*/].f_1 = 1f;
	Global_56966[38 /*7*/].f_3 = 1000f;
	Global_56966[38 /*7*/].f_4 = 3.5f;
	Global_56966[38 /*7*/].f_5 = 3.5f;
	Global_56966[38 /*7*/].f_6 = 0.1f;
	Global_56966[39 /*7*/].f_2 = 1f;
	Global_56966[39 /*7*/].f_1 = 1f;
	Global_56966[39 /*7*/].f_3 = 1000f;
	Global_56966[39 /*7*/].f_4 = 3.5f;
	Global_56966[39 /*7*/].f_5 = 3.5f;
	Global_56966[39 /*7*/].f_6 = 0.1f;
	Global_56966[40 /*7*/].f_2 = 1f;
	Global_56966[40 /*7*/].f_1 = 1f;
	Global_56966[40 /*7*/].f_3 = 1000f;
	Global_56966[40 /*7*/].f_4 = 3.5f;
	Global_56966[40 /*7*/].f_5 = 3.5f;
	Global_56966[40 /*7*/].f_6 = 0.1f;
	Global_57254[0 /*7*/].f_1 = joaat("SM_BRVECDESBFA");
	Global_57254[0 /*7*/] = 1;
	Global_57254[1 /*7*/].f_1 = joaat("SM_BRVECDESBRU");
	Global_57254[1 /*7*/] = 1;
	Global_57254[3 /*7*/].f_1 = joaat("SM_BRVECDESLSC");
	Global_57254[3 /*7*/] = 1;
	Global_57254[4 /*7*/].f_1 = joaat("SM_BRVECDESLST");
	Global_57254[4 /*7*/] = 1;
	Global_57254[5 /*7*/].f_1 = joaat("SM_BRVECDESLTD");
	Global_57254[5 /*7*/] = 1;
	Global_57254[6 /*7*/].f_1 = joaat("SM_BRVECDESMAI");
	Global_57254[6 /*7*/] = 1;
	Global_57254[7 /*7*/].f_1 = joaat("SM_BRVECDESRON");
	Global_57254[7 /*7*/] = 1;
	Global_57254[8 /*7*/].f_1 = joaat("SM_BRVECDESSHT");
	Global_57254[8 /*7*/] = 1;
	Global_57254[9 /*7*/].f_1 = joaat("SM_BRVECDESUMA");
	Global_57254[9 /*7*/] = 1;
	Global_57254[10 /*7*/].f_1 = joaat("SM_BRVECDESVAP");
	Global_57254[10 /*7*/] = 1;
	Global_57254[11 /*7*/].f_1 = joaat("SM_BRVECDESHVY");
	Global_57254[11 /*7*/] = 1;
	Global_57254[12 /*7*/].f_1 = joaat("SM_VECBUYBFA");
	Global_57254[12 /*7*/] = 1;
	Global_57254[13 /*7*/].f_1 = joaat("SM_VECBUYBRU");
	Global_57254[13 /*7*/] = 1;
	Global_57254[15 /*7*/].f_1 = joaat("SM_VECBUYMAI");
	Global_57254[15 /*7*/] = 1;
	Global_57254[16 /*7*/].f_1 = joaat("SM_VECBUYSHT");
	Global_57254[16 /*7*/] = 1;
	Global_57254[17 /*7*/].f_1 = joaat("SM_VECBUYUMA");
	Global_57254[17 /*7*/] = 1;
	Global_57254[18 /*7*/].f_1 = joaat("SM_VECBUYVAP");
	Global_57254[18 /*7*/] = 1;
	Global_57254[19 /*7*/].f_1 = joaat("SM_VECBUYHVY");
	Global_57254[19 /*7*/] = 1;
	Global_57254[20 /*7*/].f_1 = joaat("SM_DISDRIVBFA");
	Global_57254[20 /*7*/] = 1;
	Global_57254[21 /*7*/].f_1 = joaat("SM_DISDRIVBRU");
	Global_57254[21 /*7*/] = 1;
	Global_57254[23 /*7*/].f_1 = joaat("SM_DISDRIVLST");
	Global_57254[23 /*7*/] = 1;
	Global_57254[24 /*7*/].f_1 = joaat("SM_DISDRIVMAI");
	Global_57254[24 /*7*/] = 1;
	Global_57254[25 /*7*/].f_1 = joaat("SM_DISDRIVSHT");
	Global_57254[25 /*7*/] = 1;
	Global_57254[26 /*7*/].f_1 = joaat("SM_DISDRIVUMA");
	Global_57254[26 /*7*/] = 1;
	Global_57254[27 /*7*/].f_1 = joaat("SM_DISDRIVVAP");
	Global_57254[27 /*7*/] = 1;
	Global_57254[28 /*7*/].f_1 = joaat("SM_DISDRIVHVY");
	Global_57254[28 /*7*/] = 1;
	Global_57254[30 /*7*/].f_1 = joaat("SM_VECMODLSC");
	Global_57254[30 /*7*/] = 1;
	Global_57254[31 /*7*/].f_1 = joaat("SM_VECSTOLBFA");
	Global_57254[31 /*7*/] = 1;
	Global_57254[32 /*7*/].f_1 = joaat("SM_VECSTOLBRU");
	Global_57254[32 /*7*/] = 1;
	Global_57254[34 /*7*/].f_1 = joaat("SM_VECSTOLLST");
	Global_57254[34 /*7*/] = 1;
	Global_57254[35 /*7*/].f_1 = joaat("SM_VECSTOLMAI");
	Global_57254[35 /*7*/] = 1;
	Global_57254[36 /*7*/].f_1 = joaat("SM_VECSTOLSHT");
	Global_57254[36 /*7*/] = 1;
	Global_57254[37 /*7*/].f_1 = joaat("SM_VECSTOLUMA");
	Global_57254[37 /*7*/] = 1;
	Global_57254[38 /*7*/].f_1 = joaat("SM_VECSTOLVAP");
	Global_57254[38 /*7*/] = 1;
	Global_57254[39 /*7*/].f_1 = joaat("SM_VECSTOLHVY");
	Global_57254[39 /*7*/] = 1;
	Global_57254[40 /*7*/].f_1 = joaat("SM_VECDMGBFA");
	Global_57254[40 /*7*/] = 1;
	Global_57254[41 /*7*/].f_1 = joaat("SM_VECDMGBRU");
	Global_57254[41 /*7*/] = 1;
	Global_57254[43 /*7*/].f_1 = joaat("SM_VECDMGMAI");
	Global_57254[43 /*7*/] = 1;
	Global_57254[44 /*7*/].f_1 = joaat("SM_VECDMGSHT");
	Global_57254[44 /*7*/] = 1;
	Global_57254[45 /*7*/].f_1 = joaat("SM_VECDMGUMA");
	Global_57254[45 /*7*/] = 1;
	Global_57254[46 /*7*/].f_1 = joaat("SM_VECDMGVAP");
	Global_57254[46 /*7*/] = 1;
	Global_57254[47 /*7*/].f_1 = joaat("SM_VECDMGHVY");
	Global_57254[47 /*7*/] = 1;
	Global_57254[48 /*7*/].f_1 = joaat("SM_VECPEDKIL");
	Global_57254[48 /*7*/] = 1;
	Global_57254[49 /*7*/].f_1 = joaat("SM_WEPBUYSHR");
	Global_57254[49 /*7*/] = 1;
	Global_57254[50 /*7*/].f_1 = joaat("SM_WEPBUYHAL");
	Global_57254[50 /*7*/] = 1;
	Global_57254[51 /*7*/].f_1 = joaat("SM_WEPTAKEVOM");
	Global_57254[51 /*7*/] = 1;
	Global_57254[52 /*7*/].f_1 = joaat("SM_WEPTAKESHR");
	Global_57254[52 /*7*/] = 1;
	Global_57254[53 /*7*/].f_1 = joaat("SM_WEPTAKEHAL");
	Global_57254[53 /*7*/] = 1;
	Global_57254[54 /*7*/].f_1 = joaat("SM_KILCOPVOM");
	Global_57254[54 /*7*/] = 1;
	Global_57254[55 /*7*/].f_1 = joaat("SM_KILCOPSHR");
	Global_57254[55 /*7*/] = 1;
	Global_57254[56 /*7*/].f_1 = joaat("SM_KILCOPHAL");
	Global_57254[56 /*7*/] = 1;
	Global_57254[57 /*7*/].f_1 = joaat("SM_KILCRIMVOM");
	Global_57254[57 /*7*/] = 1;
	Global_57254[58 /*7*/].f_1 = joaat("SM_KILCRIMSHR");
	Global_57254[58 /*7*/] = 1;
	Global_57254[59 /*7*/].f_1 = joaat("SM_KILCRIMHAL");
	Global_57254[59 /*7*/] = 1;
	Global_57254[60 /*7*/].f_1 = joaat("SM_KILCIVMAI");
	Global_57254[60 /*7*/] = 1;
	Global_57254[61 /*7*/].f_1 = joaat("SM_KILCIVSHT");
	Global_57254[61 /*7*/] = 1;
	Global_57254[62 /*7*/].f_1 = joaat("SM_KILCIVUMA");
	Global_57254[62 /*7*/] = 1;
	Global_57254[63 /*7*/].f_1 = joaat("SM_KILCIVVOM");
	Global_57254[63 /*7*/] = 1;
	Global_57254[64 /*7*/].f_1 = joaat("SM_KILCIVSHR");
	Global_57254[64 /*7*/] = 1;
	Global_57254[65 /*7*/].f_1 = joaat("SM_KILCIVHAL");
	Global_57254[65 /*7*/] = 1;
	Global_57254[67 /*7*/].f_1 = joaat("SM_VENUSESPU");
	Global_57254[67 /*7*/] = 1;
	Global_57254[68 /*7*/].f_1 = joaat("SM_NEWDAM");
	Global_57254[68 /*7*/] = 1;
	Global_57254[69 /*7*/].f_1 = joaat("SM_HPKIL");
	Global_57254[69 /*7*/] = 1;
	Global_57254[70 /*7*/].f_1 = joaat("SM_PUBCLUB");
	Global_57254[70 /*7*/] = 1;
	Global_57254[71 /*7*/].f_1 = joaat("SM_TDRNK");
	Global_57254[71 /*7*/] = 1;
	Global_57254[72 /*7*/].f_1 = joaat("SM_FRNPUB");
	Global_57254[72 /*7*/] = 1;
	Global_57254[73 /*7*/].f_1 = joaat("SM_DRNKCRM");
	Global_57254[73 /*7*/] = 1;
	Global_57254[74 /*7*/].f_1 = joaat("SM_RAMCOM");
	Global_57254[74 /*7*/] = 1;
	Global_57254[76 /*7*/].f_1 = joaat("SM_RADCNT");
	Global_57254[76 /*7*/] = 1;
	Global_57254[77 /*7*/].f_1 = joaat("SM_RADWZL");
	Global_57254[77 /*7*/] = 1;
	Global_57254[78 /*7*/].f_1 = joaat("SM_RADZIT");
	Global_57254[78 /*7*/] = 1;
	Global_57254[81 /*7*/].f_1 = joaat("SM_ZITITCNT");
	Global_57254[81 /*7*/] = 1;
	Global_57254[82 /*7*/].f_1 = joaat("SM_ZITITWZL");
	Global_57254[82 /*7*/] = 1;
	Global_57254[83 /*7*/].f_1 = joaat("SM_ZITITZIT");
	Global_57254[83 /*7*/] = 1;
	Global_57254[84 /*7*/].f_1 = joaat("SM_RADCHACNT");
	Global_57254[84 /*7*/] = 1;
	Global_57254[85 /*7*/].f_1 = joaat("SM_RADCHAWZL");
	Global_57254[85 /*7*/] = 1;
	Global_57254[88 /*7*/].f_1 = joaat("SM_PARA");
	Global_57254[88 /*7*/] = 1;
	Global_57254[89 /*7*/].f_1 = joaat("SM_TKFIRE");
	Global_57254[89 /*7*/] = 1;
	Global_57254[90 /*7*/].f_1 = joaat("SM_FIBAI");
	Global_57254[90 /*7*/] = 1;
	Global_57254[91 /*7*/].f_1 = joaat("SM_TANDES");
	Global_57254[91 /*7*/] = 1;
	Global_57254[92 /*7*/].f_1 = joaat("SM_GAREP");
	Global_57254[92 /*7*/] = 1;
	Global_57254[93 /*7*/].f_1 = joaat("SM_GAMONSP");
	Global_57254[93 /*7*/] = 1;
	Global_57254[94 /*7*/].f_1 = joaat("SM_MONB");
	Global_57254[94 /*7*/] = 1;
	Global_57254[98 /*7*/].f_1 = joaat("SM_MONUPSHK");
	Global_57254[98 /*7*/] = 1;
	Global_57254[100 /*7*/].f_1 = joaat("SM_TAXDEST");
	Global_57254[100 /*7*/] = 1;
	Global_57254[101 /*7*/].f_1 = joaat("SM_KILWBFA");
	Global_57254[101 /*7*/] = 1;
	Global_57254[102 /*7*/].f_1 = joaat("SM_KILWBRU");
	Global_57254[102 /*7*/] = 1;
	Global_57254[104 /*7*/].f_1 = joaat("SM_KILWMAI");
	Global_57254[104 /*7*/] = 1;
	Global_57254[105 /*7*/].f_1 = joaat("SM_KILWSHT");
	Global_57254[105 /*7*/] = 1;
	Global_57254[106 /*7*/].f_1 = joaat("SM_KILWUMA");
	Global_57254[106 /*7*/] = 1;
	Global_57254[107 /*7*/].f_1 = joaat("SM_KILWVAP");
	Global_57254[107 /*7*/] = 1;
	Global_57254[108 /*7*/].f_1 = joaat("SM_KILWVOM");
	Global_57254[108 /*7*/] = 1;
	Global_57254[109 /*7*/].f_1 = joaat("SM_KILWHVY");
	Global_57254[109 /*7*/] = 1;
	Global_57254[112 /*7*/].f_1 = joaat("SM_CLOBOFBIN");
	Global_57254[112 /*7*/] = 1;
	Global_57254[113 /*7*/].f_1 = joaat("SM_CLOBOFPKW");
	Global_57254[113 /*7*/] = 1;
	Global_57254[114 /*7*/].f_1 = joaat("SM_CLOBOFPON");
	Global_57254[114 /*7*/] = 1;
	Global_57254[117 /*7*/].f_1 = joaat("SM_YOGA");
	Global_57254[117 /*7*/] = 1;
	Global_57254[118 /*7*/].f_1 = joaat("SM_TRI");
	Global_57254[118 /*7*/] = 1;
	Global_57254[119 /*7*/].f_1 = joaat("SM_GYM");
	Global_57254[119 /*7*/] = 1;
	Global_57254[120 /*7*/].f_1 = joaat("SM_STRIP");
	Global_57254[120 /*7*/] = 1;
	Global_57254[121 /*7*/].f_1 = joaat("SM_UGHOK");
	Global_57254[121 /*7*/] = 1;
	Global_57254[122 /*7*/].f_1 = joaat("SM_STRTRO");
	Global_57254[122 /*7*/] = 1;
	Global_57254[123 /*7*/].f_1 = joaat("SM_PISCO");
	Global_57254[123 /*7*/] = 1;
	Global_57254[124 /*7*/].f_1 = joaat("SM_TOTINJ");
	Global_57254[124 /*7*/] = 1;
	Global_57254[125 /*7*/].f_1 = joaat("SM_DRUGKIL");
	Global_57254[125 /*7*/] = 1;
	Global_57254[126 /*7*/].f_1 = joaat("SM_HANGOVR");
	Global_57254[126 /*7*/] = 1;
	Global_57254[127 /*7*/].f_1 = joaat("SM_KILLSPR");
	Global_57254[127 /*7*/] = 1;
	Global_57254[129 /*7*/].f_1 = joaat("SM_PEDFIREKILL");
	Global_57254[129 /*7*/] = 1;
	Global_57254[130 /*7*/].f_1 = joaat("SM_PEDFIRETICK");
	Global_57254[130 /*7*/] = 1;
	Global_57254[131 /*7*/].f_1 = joaat("SM_TVTICKWAP");
	Global_57254[131 /*7*/] = 1;
	Global_57254[132 /*7*/].f_1 = joaat("SM_TVTICKWIW");
	Global_57254[132 /*7*/] = 1;
	Global_57254[134 /*7*/].f_1 = joaat("SM_ZITPOPZIT");
	Global_57254[134 /*7*/] = 1;
	Global_57254[135 /*7*/].f_1 = joaat("SM_CARAPP");
	Global_57254[135 /*7*/] = 1;
	Global_57254[137 /*7*/].f_1 = joaat("SM_STOROB");
	Global_57254[137 /*7*/] = 1;
	Global_57254[162 /*7*/].f_1 = joaat("SM_PHONCALBDG");
	Global_57254[162 /*7*/] = 1;
	Global_57254[163 /*7*/].f_1 = joaat("SM_PHONCALTNK");
	Global_57254[163 /*7*/] = 1;
	Global_57254[164 /*7*/].f_1 = joaat("SM_PHONCALWIZ");
	Global_57254[164 /*7*/] = 1;
	Global_57254[165 /*7*/].f_1 = joaat("SM_PHONTXTBDG");
	Global_57254[165 /*7*/] = 1;
	Global_57254[166 /*7*/].f_1 = joaat("SM_PHONTXTTNK");
	Global_57254[166 /*7*/] = 1;
	Global_57254[167 /*7*/].f_1 = joaat("SM_PHONTXTWIZ");
	Global_57254[167 /*7*/] = 1;
	Global_57254[168 /*7*/].f_1 = joaat("SM_CHTICKBDG");
	Global_57254[168 /*7*/] = 1;
	Global_57254[169 /*7*/].f_1 = joaat("SM_CHTICKTNK");
	Global_57254[169 /*7*/] = 1;
	Global_57254[170 /*7*/].f_1 = joaat("SM_CHTICKWIZ");
	Global_57254[170 /*7*/] = 1;
	Global_57254[171 /*7*/].f_1 = joaat("SM_CALCANBDG");
	Global_57254[171 /*7*/] = 1;
	Global_57254[172 /*7*/].f_1 = joaat("SM_CALCANTNK");
	Global_57254[172 /*7*/] = 1;
	Global_57254[173 /*7*/].f_1 = joaat("SM_CALCANWIZ");
	Global_57254[173 /*7*/] = 1;
	Global_57254[138 /*7*/].f_2 = 1;
	Global_57254[138 /*7*/].f_3 = joaat("SP0_DIST_WALKING");
	Global_57254[138 /*7*/].f_4 = 1;
	Global_57254[139 /*7*/].f_2 = 1;
	Global_57254[139 /*7*/].f_3 = joaat("SP1_DIST_WALKING");
	Global_57254[139 /*7*/].f_4 = 1;
	Global_57254[140 /*7*/].f_2 = 1;
	Global_57254[140 /*7*/].f_3 = joaat("SP2_DIST_WALKING");
	Global_57254[140 /*7*/].f_4 = 1;
	Global_57254[141 /*7*/].f_2 = 1;
	Global_57254[141 /*7*/].f_3 = joaat("SP0_DIST_DRIVING_BICYCLE");
	Global_57254[141 /*7*/].f_4 = 1;
	Global_57254[142 /*7*/].f_2 = 1;
	Global_57254[142 /*7*/].f_3 = joaat("SP1_DIST_DRIVING_BICYCLE");
	Global_57254[142 /*7*/].f_4 = 1;
	Global_57254[143 /*7*/].f_2 = 1;
	Global_57254[143 /*7*/].f_3 = joaat("SP2_DIST_DRIVING_BICYCLE");
	Global_57254[143 /*7*/].f_4 = 1;
	Global_57254[144 /*7*/].f_2 = 1;
	Global_57254[144 /*7*/].f_3 = joaat("SP0_BAILED_FROM_VEHICLE");
	Global_57254[144 /*7*/].f_4 = 0;
	Global_57254[145 /*7*/].f_2 = 1;
	Global_57254[145 /*7*/].f_3 = joaat("SP1_BAILED_FROM_VEHICLE");
	Global_57254[145 /*7*/].f_4 = 0;
	Global_57254[146 /*7*/].f_2 = 1;
	Global_57254[146 /*7*/].f_3 = joaat("SP2_BAILED_FROM_VEHICLE");
	Global_57254[146 /*7*/].f_4 = 0;
	Global_57254[150 /*7*/].f_2 = 1;
	Global_57254[150 /*7*/].f_3 = joaat("SP0_LARGE_ACCIDENTS");
	Global_57254[150 /*7*/].f_4 = 0;
	Global_57254[151 /*7*/].f_2 = 1;
	Global_57254[151 /*7*/].f_3 = joaat("SP1_LARGE_ACCIDENTS");
	Global_57254[151 /*7*/].f_4 = 0;
	Global_57254[152 /*7*/].f_2 = 1;
	Global_57254[152 /*7*/].f_3 = joaat("SP2_LARGE_ACCIDENTS");
	Global_57254[152 /*7*/].f_4 = 0;
	Global_57254[153 /*7*/].f_2 = 1;
	Global_57254[153 /*7*/].f_3 = joaat("SP0_TOTAL_LEGITIMATE_KILLS");
	Global_57254[153 /*7*/].f_4 = 0;
	Global_57254[154 /*7*/].f_2 = 1;
	Global_57254[154 /*7*/].f_3 = joaat("SP1_TOTAL_LEGITIMATE_KILLS");
	Global_57254[154 /*7*/].f_4 = 0;
	Global_57254[155 /*7*/].f_2 = 1;
	Global_57254[155 /*7*/].f_3 = joaat("SP2_TOTAL_LEGITIMATE_KILLS");
	Global_57254[155 /*7*/].f_4 = 0;
	Global_57254[156 /*7*/].f_2 = 1;
	Global_57254[156 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_TAXIS");
	Global_57254[156 /*7*/].f_4 = 0;
	Global_57254[157 /*7*/].f_2 = 1;
	Global_57254[157 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_TAXIS");
	Global_57254[157 /*7*/].f_4 = 0;
	Global_57254[158 /*7*/].f_2 = 1;
	Global_57254[158 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_TAXIS");
	Global_57254[158 /*7*/].f_4 = 0;
	Global_57254[159 /*7*/].f_2 = 1;
	Global_57254[159 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_HEALTHCARE");
	Global_57254[159 /*7*/].f_4 = 0;
	Global_57254[160 /*7*/].f_2 = 1;
	Global_57254[160 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_HEALTHCARE");
	Global_57254[160 /*7*/].f_4 = 0;
	Global_57254[161 /*7*/].f_2 = 1;
	Global_57254[161 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_HEALTHCARE");
	Global_57254[161 /*7*/].f_4 = 0;
	Global_57254[174 /*7*/].f_2 = 1;
	Global_57254[174 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_IN_COP_BRIBES");
	Global_57254[174 /*7*/].f_4 = 0;
	Global_57254[175 /*7*/].f_2 = 1;
	Global_57254[175 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_IN_COP_BRIBES");
	Global_57254[175 /*7*/].f_4 = 0;
	Global_57254[176 /*7*/].f_2 = 1;
	Global_57254[176 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_IN_COP_BRIBES");
	Global_57254[176 /*7*/].f_4 = 0;
	Global_57254[177 /*7*/].f_2 = 1;
	Global_57254[177 /*7*/].f_3 = joaat("SP0_BUSTED");
	Global_57254[177 /*7*/].f_4 = 0;
	Global_57254[178 /*7*/].f_2 = 1;
	Global_57254[178 /*7*/].f_3 = joaat("SP1_BUSTED");
	Global_57254[178 /*7*/].f_4 = 0;
	Global_57254[179 /*7*/].f_2 = 1;
	Global_57254[179 /*7*/].f_3 = joaat("SP2_BUSTED");
	Global_57254[179 /*7*/].f_4 = 0;
	Global_57254[180 /*7*/].f_2 = 1;
	Global_57254[180 /*7*/].f_3 = joaat("SP0_DIED_IN_FALL");
	Global_57254[180 /*7*/].f_4 = 0;
	Global_57254[181 /*7*/].f_2 = 1;
	Global_57254[181 /*7*/].f_3 = joaat("SP1_DIED_IN_FALL");
	Global_57254[181 /*7*/].f_4 = 0;
	Global_57254[182 /*7*/].f_2 = 1;
	Global_57254[182 /*7*/].f_3 = joaat("SP2_DIED_IN_FALL");
	Global_57254[182 /*7*/].f_4 = 0;
	Global_57254[183 /*7*/].f_2 = 1;
	Global_57254[183 /*7*/].f_3 = joaat("SP0_STARS_ATTAINED");
	Global_57254[183 /*7*/].f_4 = 0;
	Global_57254[184 /*7*/].f_2 = 1;
	Global_57254[184 /*7*/].f_3 = joaat("SP1_STARS_ATTAINED");
	Global_57254[184 /*7*/].f_4 = 0;
	Global_57254[185 /*7*/].f_2 = 1;
	Global_57254[185 /*7*/].f_3 = joaat("SP2_STARS_ATTAINED");
	Global_57254[185 /*7*/].f_4 = 0;
	Global_57254[186 /*7*/].f_2 = 1;
	Global_57254[186 /*7*/].f_3 = joaat("SP0_STARS_EVADED");
	Global_57254[186 /*7*/].f_4 = 0;
	Global_57254[187 /*7*/].f_2 = 1;
	Global_57254[187 /*7*/].f_3 = joaat("SP1_STARS_EVADED");
	Global_57254[187 /*7*/].f_4 = 0;
	Global_57254[188 /*7*/].f_2 = 1;
	Global_57254[188 /*7*/].f_3 = joaat("SP2_STARS_EVADED");
	Global_57254[188 /*7*/].f_4 = 0;
	Global_57254[189 /*7*/].f_2 = 1;
	Global_57254[189 /*7*/].f_3 = joaat("SP0_MANUAL_SAVED");
	Global_57254[189 /*7*/].f_4 = 0;
	Global_57254[190 /*7*/].f_2 = 1;
	Global_57254[190 /*7*/].f_3 = joaat("SP1_MANUAL_SAVED");
	Global_57254[190 /*7*/].f_4 = 0;
	Global_57254[191 /*7*/].f_2 = 1;
	Global_57254[191 /*7*/].f_3 = joaat("SP2_MANUAL_SAVED");
	Global_57254[191 /*7*/].f_4 = 0;
	Global_57254[192 /*7*/].f_2 = 1;
	Global_57254[192 /*7*/].f_3 = joaat("SP0_KILLS_COP");
	Global_57254[192 /*7*/].f_4 = 0;
	Global_57254[193 /*7*/].f_2 = 1;
	Global_57254[193 /*7*/].f_3 = joaat("SP1_KILLS_COP");
	Global_57254[193 /*7*/].f_4 = 0;
	Global_57254[194 /*7*/].f_2 = 1;
	Global_57254[194 /*7*/].f_3 = joaat("SP2_KILLS_COP");
	Global_57254[194 /*7*/].f_4 = 0;
	Global_57254[195 /*7*/].f_2 = 1;
	Global_57254[195 /*7*/].f_3 = joaat("SP0_KILLS_SWAT");
	Global_57254[195 /*7*/].f_4 = 0;
	Global_57254[196 /*7*/].f_2 = 1;
	Global_57254[196 /*7*/].f_3 = joaat("SP1_KILLS_SWAT");
	Global_57254[196 /*7*/].f_4 = 0;
	Global_57254[197 /*7*/].f_2 = 1;
	Global_57254[197 /*7*/].f_3 = joaat("SP2_KILLS_SWAT");
	Global_57254[197 /*7*/].f_4 = 0;
	Global_57254[198 /*7*/].f_2 = 1;
	Global_57254[198 /*7*/].f_3 = joaat("SP0_TIME_IN_COVER");
	Global_57254[198 /*7*/].f_4 = 0;
	Global_57254[199 /*7*/].f_2 = 1;
	Global_57254[199 /*7*/].f_3 = joaat("SP1_TIME_IN_COVER");
	Global_57254[199 /*7*/].f_4 = 0;
	Global_57254[200 /*7*/].f_2 = 1;
	Global_57254[200 /*7*/].f_3 = joaat("SP2_TIME_IN_COVER");
	Global_57254[200 /*7*/].f_4 = 0;
	Global_56692[0 /*7*/] = joaat("SM_PRICE_AMU");
	Global_56692[0 /*7*/].f_3[0] = joaat("AMU_OW0");
	Global_56692[0 /*7*/].f_3[1] = joaat("AMU_OW1");
	Global_56692[0 /*7*/].f_3[2] = joaat("AMU_OW2");
	Global_56692[1 /*7*/] = joaat("SM_PRICE_BDG");
	Global_56692[1 /*7*/].f_3[0] = joaat("BDG_OW0");
	Global_56692[1 /*7*/].f_3[1] = joaat("BDG_OW1");
	Global_56692[1 /*7*/].f_3[2] = joaat("BDG_OW2");
	Global_56692[2 /*7*/] = joaat("SM_PRICE_BFA");
	Global_56692[2 /*7*/].f_3[0] = joaat("BFA_OW0");
	Global_56692[2 /*7*/].f_3[1] = joaat("BFA_OW1");
	Global_56692[2 /*7*/].f_3[2] = joaat("BFA_OW2");
	Global_56692[3 /*7*/] = joaat("SM_PRICE_BIN");
	Global_56692[3 /*7*/].f_3[0] = joaat("BIN_OW0");
	Global_56692[3 /*7*/].f_3[1] = joaat("BIN_OW1");
	Global_56692[3 /*7*/].f_3[2] = joaat("BIN_OW2");
	Global_56692[4 /*7*/] = joaat("SM_PRICE_BTR");
	Global_56692[4 /*7*/].f_3[0] = joaat("BTR_OW0");
	Global_56692[4 /*7*/].f_3[1] = joaat("BTR_OW1");
	Global_56692[4 /*7*/].f_3[2] = joaat("BTR_OW2");
	Global_56692[5 /*7*/] = joaat("SM_PRICE_BLE");
	Global_56692[5 /*7*/].f_3[0] = joaat("BLE_OW0");
	Global_56692[5 /*7*/].f_3[1] = joaat("BLE_OW1");
	Global_56692[5 /*7*/].f_3[2] = joaat("BLE_OW2");
	Global_56692[6 /*7*/] = joaat("SM_PRICE_BRU");
	Global_56692[6 /*7*/].f_3[0] = joaat("BRU_OW0");
	Global_56692[6 /*7*/].f_3[1] = joaat("BRU_OW1");
	Global_56692[6 /*7*/].f_3[2] = joaat("BRU_OW2");
	Global_56692[7 /*7*/] = joaat("SM_PRICE_CNT");
	Global_56692[7 /*7*/].f_3[0] = joaat("CNT_OW0");
	Global_56692[7 /*7*/].f_3[1] = joaat("CNT_OW1");
	Global_56692[7 /*7*/].f_3[2] = joaat("CNT_OW2");
	Global_56692[8 /*7*/] = joaat("SM_PRICE_CRE");
	Global_56692[8 /*7*/].f_3[0] = joaat("CRE_OW0");
	Global_56692[8 /*7*/].f_3[1] = joaat("CRE_OW1");
	Global_56692[8 /*7*/].f_3[2] = joaat("CRE_OW2");
	Global_56692[9 /*7*/] = joaat("SM_PRICE_DGP");
	Global_56692[9 /*7*/].f_3[0] = joaat("DGP_OW0");
	Global_56692[9 /*7*/].f_3[1] = joaat("DGP_OW1");
	Global_56692[9 /*7*/].f_3[2] = joaat("DGP_OW2");
	Global_56692[10 /*7*/] = joaat("SM_PRICE_WAP");
	Global_56692[10 /*7*/].f_3[0] = joaat("WAP_OW0");
	Global_56692[10 /*7*/].f_3[1] = joaat("WAP_OW1");
	Global_56692[10 /*7*/].f_3[2] = joaat("WAP_OW2");
	Global_56692[11 /*7*/] = joaat("SM_PRICE_FAC");
	Global_56692[11 /*7*/].f_3[0] = joaat("FAC_OW0");
	Global_56692[11 /*7*/].f_3[1] = joaat("FAC_OW1");
	Global_56692[11 /*7*/].f_3[2] = joaat("FAC_OW2");
	Global_56692[12 /*7*/] = joaat("SM_PRICE_FRT");
	Global_56692[12 /*7*/].f_3[0] = joaat("FRT_OW0");
	Global_56692[12 /*7*/].f_3[1] = joaat("FRT_OW1");
	Global_56692[12 /*7*/].f_3[2] = joaat("FRT_OW2");
	Global_56692[13 /*7*/] = joaat("SM_PRICE_LSC");
	Global_56692[13 /*7*/].f_3[0] = joaat("LSC_OW0");
	Global_56692[13 /*7*/].f_3[1] = joaat("LSC_OW1");
	Global_56692[13 /*7*/].f_3[2] = joaat("LSC_OW2");
	Global_56692[14 /*7*/] = joaat("SM_PRICE_LST");
	Global_56692[14 /*7*/].f_3[0] = joaat("LST_OW0");
	Global_56692[14 /*7*/].f_3[1] = joaat("LST_OW1");
	Global_56692[14 /*7*/].f_3[2] = joaat("LST_OW2");
	Global_56692[15 /*7*/] = joaat("SM_PRICE_LTD");
	Global_56692[15 /*7*/].f_3[0] = joaat("LTD_OW0");
	Global_56692[15 /*7*/].f_3[1] = joaat("LTD_OW1");
	Global_56692[15 /*7*/].f_3[2] = joaat("LTD_OW2");
	Global_56692[16 /*7*/] = joaat("SM_PRICE_MAI");
	Global_56692[16 /*7*/].f_3[0] = joaat("MAI_OW0");
	Global_56692[16 /*7*/].f_3[1] = joaat("MAI_OW1");
	Global_56692[16 /*7*/].f_3[2] = joaat("MAI_OW2");
	Global_56692[17 /*7*/] = joaat("SM_PRICE_PKW");
	Global_56692[17 /*7*/].f_3[0] = joaat("PKW_OW0");
	Global_56692[17 /*7*/].f_3[1] = joaat("PKW_OW1");
	Global_56692[17 /*7*/].f_3[2] = joaat("PKW_OW2");
	Global_56692[18 /*7*/] = joaat("SM_PRICE_PIS");
	Global_56692[18 /*7*/].f_3[0] = joaat("PIS_OW0");
	Global_56692[18 /*7*/].f_3[1] = joaat("PIS_OW1");
	Global_56692[18 /*7*/].f_3[2] = joaat("PIS_OW2");
	Global_56692[19 /*7*/] = joaat("SM_PRICE_PON");
	Global_56692[19 /*7*/].f_3[0] = joaat("PON_OW0");
	Global_56692[19 /*7*/].f_3[1] = joaat("PON_OW1");
	Global_56692[19 /*7*/].f_3[2] = joaat("PON_OW2");
	Global_56692[20 /*7*/] = joaat("SM_PRICE_RON");
	Global_56692[20 /*7*/].f_3[0] = joaat("RON_OW0");
	Global_56692[20 /*7*/].f_3[1] = joaat("RON_OW1");
	Global_56692[20 /*7*/].f_3[2] = joaat("RON_OW2");
	Global_56692[21 /*7*/] = joaat("SM_PRICE_SHT");
	Global_56692[21 /*7*/].f_3[0] = joaat("SHT_OW0");
	Global_56692[21 /*7*/].f_3[1] = joaat("SHT_OW1");
	Global_56692[21 /*7*/].f_3[2] = joaat("SHT_OW2");
	Global_56692[22 /*7*/] = joaat("SM_PRICE_SPU");
	Global_56692[22 /*7*/].f_3[0] = joaat("SPU_OW0");
	Global_56692[22 /*7*/].f_3[1] = joaat("SPU_OW1");
	Global_56692[22 /*7*/].f_3[2] = joaat("SPU_OW2");
	Global_56692[23 /*7*/] = joaat("SM_PRICE_TNK");
	Global_56692[23 /*7*/].f_3[0] = joaat("TNK_OW0");
	Global_56692[23 /*7*/].f_3[1] = joaat("TNK_OW1");
	Global_56692[23 /*7*/].f_3[2] = joaat("TNK_OW2");
	Global_56692[24 /*7*/] = joaat("SM_PRICE_WIW");
	Global_56692[24 /*7*/].f_3[0] = joaat("WIW_OW0");
	Global_56692[24 /*7*/].f_3[1] = joaat("WIW_OW1");
	Global_56692[24 /*7*/].f_3[2] = joaat("WIW_OW2");
	Global_56692[25 /*7*/] = joaat("SM_PRICE_UMA");
	Global_56692[25 /*7*/].f_3[0] = joaat("UMA_OW0");
	Global_56692[25 /*7*/].f_3[1] = joaat("UMA_OW1");
	Global_56692[25 /*7*/].f_3[2] = joaat("UMA_OW2");
	Global_56692[26 /*7*/] = joaat("SM_PRICE_VAP");
	Global_56692[26 /*7*/].f_3[0] = joaat("VAP_OW0");
	Global_56692[26 /*7*/].f_3[1] = joaat("VAP_OW1");
	Global_56692[26 /*7*/].f_3[2] = joaat("VAP_OW2");
	Global_56692[27 /*7*/] = joaat("SM_PRICE_VOM");
	Global_56692[27 /*7*/].f_3[0] = joaat("VOM_OW0");
	Global_56692[27 /*7*/].f_3[1] = joaat("VOM_OW1");
	Global_56692[27 /*7*/].f_3[2] = joaat("VOM_OW2");
	Global_56692[28 /*7*/] = joaat("SM_PRICE_WZL");
	Global_56692[28 /*7*/].f_3[0] = joaat("WZL_OW0");
	Global_56692[28 /*7*/].f_3[1] = joaat("WZL_OW1");
	Global_56692[28 /*7*/].f_3[2] = joaat("WZL_OW2");
	Global_56692[29 /*7*/] = joaat("SM_PRICE_WIZ");
	Global_56692[29 /*7*/].f_3[0] = joaat("WIZ_OW0");
	Global_56692[29 /*7*/].f_3[1] = joaat("WIZ_OW1");
	Global_56692[29 /*7*/].f_3[2] = joaat("WIZ_OW2");
	Global_56692[30 /*7*/] = joaat("SM_PRICE_ZIT");
	Global_56692[30 /*7*/].f_3[0] = joaat("ZIT_OW0");
	Global_56692[30 /*7*/].f_3[1] = joaat("ZIT_OW1");
	Global_56692[30 /*7*/].f_3[2] = joaat("ZIT_OW2");
	Global_56692[31 /*7*/] = joaat("SM_PRICE_SHK");
	Global_56692[31 /*7*/].f_3[0] = joaat("SHK_OW0");
	Global_56692[31 /*7*/].f_3[1] = joaat("SHK_OW1");
	Global_56692[31 /*7*/].f_3[2] = joaat("SHK_OW2");
	Global_56692[32 /*7*/] = joaat("SM_PRICE_MOL");
	Global_56692[32 /*7*/].f_3[0] = joaat("MOL_OW0");
	Global_56692[32 /*7*/].f_3[1] = joaat("MOL_OW1");
	Global_56692[32 /*7*/].f_3[2] = joaat("MOL_OW2");
	Global_56692[33 /*7*/] = joaat("SM_PRICE_PMP");
	Global_56692[33 /*7*/].f_3[0] = joaat("PMP_OW0");
	Global_56692[33 /*7*/].f_3[1] = joaat("PMP_OW1");
	Global_56692[33 /*7*/].f_3[2] = joaat("PMP_OW2");
	Global_56692[34 /*7*/] = joaat("SM_PRICE_GOT");
	Global_56692[34 /*7*/].f_3[0] = joaat("GOT_OW0");
	Global_56692[34 /*7*/].f_3[1] = joaat("GOT_OW1");
	Global_56692[34 /*7*/].f_3[2] = joaat("GOT_OW2");
	Global_56692[35 /*7*/] = joaat("SM_PRICE_EYE");
	Global_56692[35 /*7*/].f_3[0] = joaat("EYE_OW0");
	Global_56692[35 /*7*/].f_3[1] = joaat("EYE_OW1");
	Global_56692[35 /*7*/].f_3[2] = joaat("EYE_OW2");
	Global_56692[36 /*7*/] = joaat("SM_PRICE_HVY");
	Global_56692[36 /*7*/].f_3[0] = joaat("HVY_OW0");
	Global_56692[36 /*7*/].f_3[1] = joaat("HVY_OW1");
	Global_56692[36 /*7*/].f_3[2] = joaat("HVY_OW2");
	Global_56692[37 /*7*/] = joaat("SM_PRICE_SHR");
	Global_56692[37 /*7*/].f_3[0] = joaat("SHR_OW0");
	Global_56692[37 /*7*/].f_3[1] = joaat("SHR_OW1");
	Global_56692[37 /*7*/].f_3[2] = joaat("SHR_OW2");
	Global_56692[38 /*7*/] = joaat("SM_PRICE_HAL");
	Global_56692[38 /*7*/].f_3[0] = joaat("HAL_OW0");
	Global_56692[38 /*7*/].f_3[1] = joaat("HAL_OW1");
	Global_56692[38 /*7*/].f_3[2] = joaat("HAL_OW2");
}

void func_98()
{
	UNK_0x10FAF14A60A0DBE1();
}

