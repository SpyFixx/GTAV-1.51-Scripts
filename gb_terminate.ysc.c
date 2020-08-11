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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	bool bLocal_80 = false;
	var uLocal_81 = 0;
	struct<11> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_93[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (UNK_0x8CD06866876216F2())
	{
		if (!func_693(ScriptParam_0))
		{
			func_636();
		}
	}
	while (true)
	{
		func_635();
		if (func_627())
		{
			func_636();
		}
		switch (func_626(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_625() == 1)
				{
					if (func_624())
					{
						func_623(UNK_0x57270EE11514DC67(), 1);
					}
				}
				break;
			case 1:
				if (func_625() == 1)
				{
					if (!func_621())
					{
						func_96();
					}
					if (func_53(1))
					{
						func_623(UNK_0x57270EE11514DC67(), 3);
					}
				}
				else if (func_625() == 3)
				{
					func_623(UNK_0x57270EE11514DC67(), 3);
				}
				break;
			case 3:
				func_636();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			if (func_52())
			{
				func_51(3);
			}
			switch (func_625())
			{
				case 0:
					if (func_43())
					{
						func_51(1);
					}
					break;
				case 1:
					if (func_42() == 3)
					{
						func_51(3);
					}
					else
					{
						func_1();
					}
					break;
				case 3:
					func_636();
					break;
			}
		}
	}
}

void func_1()
{
	switch (Local_82.f_8)
	{
		case 0:
			if (func_41())
			{
				func_40(1);
			}
			func_38();
			break;
		case 1:
			func_38();
			func_2();
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 5))
			{
				func_40(3);
			}
			func_38();
			break;
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_13(func_37()))
	{
		func_12(1);
		func_40(2);
		UNK_0x5D96D8530B3D0904(&(Local_82.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_40(2);
		UNK_0x5D96D8530B3D0904(&(Local_82.f_1), 3);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, false))
	{
		if (func_3(&(Local_82.f_4), func_5(), 0))
		{
			UNK_0x5D96D8530B3D0904(&(Local_82.f_1), 4);
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 4))
	{
		func_12(2);
		func_40(2);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, true) || UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 7))
	{
		func_12(0);
		func_40(2);
	}
}

bool func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_4(uParam0, bParam2, 0);
	if (UNK_0x8CD06866876216F2() && !bParam2)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (UNK_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = UNK_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = UNK_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

int func_5()
{
	if (func_6(UNK_0xD803B885F5E47A62(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(bool bParam0, bool bParam1)
{
	return func_7(bParam0, bParam1, 1);
}

int func_7(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (bParam0 == func_10())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(bParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (bVar0 != func_10() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_8(bool bParam0, int iParam1)
{
	if (bParam0 != func_10())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_10())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_9(bool bParam0, bool bParam1, bool bParam2)
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

bool func_10()
{
	return -1;
}

bool func_11()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

void func_12(int iParam0)
{
	Local_82.f_9 = iParam0;
}

bool func_13(bool bParam0)
{
	if (func_34(bParam0) && ((func_32(bParam0) == 142 || func_32(bParam0) == 164) || func_32(bParam0) == 148))
	{
		return false;
	}
	if (bParam0 == func_10())
	{
		return false;
	}
	if (!func_9(bParam0, 0, 1))
	{
		return false;
	}
	if (func_31(bParam0, 1, 0))
	{
		return false;
	}
	if (func_30(bParam0))
	{
		return false;
	}
	if (func_28(bParam0, 1) && func_27(bParam0) == func_11())
	{
		return false;
	}
	if (func_23(bParam0))
	{
		return false;
	}
	if (func_22(bParam0, 7))
	{
		return false;
	}
	if (func_17(bParam0))
	{
		return false;
	}
	if (func_14(bParam0, 6))
	{
		return false;
	}
	return true;
}

bool func_14(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_16() != 0)
	{
		return false;
	}
	if (!func_15(bParam0))
	{
		return false;
	}
	bVar0 = bParam0;
	if (Global_1590535[bVar0 /*876*/] == iParam1)
	{
		return true;
	}
	return false;
}

bool func_15(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2439138.f_1, bParam0);
	}
	return true;
}

int func_16()
{
	return Global_30768;
}

bool func_17(bool bParam0)
{
	if (func_19(bParam0, 0))
	{
		return true;
	}
	if (func_18())
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

bool func_18()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_19(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_20(-1, 0) == 8;
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

int func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_21()
{
	return Global_1312745;
}

bool func_22(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_208, bParam1);
}

bool func_23(bool bParam0)
{
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return func_26();
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_241.f_136[func_25(10) /*33*/][bParam0], func_24(10));
}

int func_24(int iParam0)
{
	return (iParam0 % 32);
}

int func_25(int iParam0)
{
	return (iParam0 / 32);
}

bool func_26()
{
	return Global_1312418;
}

bool func_27(bool bParam0)
{
	if (bParam0 != func_10())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_10();
}

bool func_28(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_29(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_10();
}

bool func_29(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_10())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_30(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_10())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
	{
		return true;
	}
	if (bParam1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, true))
		{
			return true;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_32(bool bParam0)
{
	if (func_33(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_33(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

bool func_34(bool bParam0)
{
	if (func_29(bParam0))
	{
		if (func_35(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_35(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_36(bParam0, 9);
	}
	return false;
}

bool func_36(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_4, bParam1);
}

bool func_37()
{
	return Local_82.f_2;
}

void func_38()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = UNK_0x54EABC0DD106045B();
	bVar2 = false;
	while (bVar2 < iVar1)
	{
		if (func_42() < 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_93[bVar2 /*4*/].f_1, true))
			{
				func_39(UNK_0x117658E336116132(bVar2));
				UNK_0x5D96D8530B3D0904(&(Local_82.f_1), true);
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_93[bVar2 /*4*/].f_1, 4))
			{
				func_39(func_11());
				UNK_0x5D96D8530B3D0904(&(Local_82.f_1), 7);
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_93[bVar2 /*4*/].f_1, false))
			{
				UNK_0x5D96D8530B3D0904(&(Local_82.f_1), false);
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_93[bVar2 /*4*/].f_1, 2))
			{
				UNK_0x5D96D8530B3D0904(&(Local_82.f_1), 4);
			}
		}
		else if (func_42() == 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_93[bVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		bVar2++;
	}
	if (func_42() == 2)
	{
		if (iVar0 == UNK_0x0DC0B2DBBD52B0C0())
		{
			UNK_0x5D96D8530B3D0904(&(Local_82.f_1), 5);
		}
		else if (func_3(&(Local_82.f_6), 10000, 0))
		{
			UNK_0x5D96D8530B3D0904(&(Local_82.f_1), 5);
		}
	}
}

void func_39(bool bParam0)
{
	Local_82.f_3 = bParam0;
}

void func_40(int iParam0)
{
	Local_82.f_8 = iParam0;
}

bool func_41()
{
	return true;
}

int func_42()
{
	return Local_82.f_8;
}

bool func_43()
{
	if (func_44())
	{
		return true;
	}
	return false;
}

bool func_44()
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 6))
	{
		return true;
	}
	func_50(func_10());
	if (Global_2537071.f_5124.f_4 != func_10())
	{
	}
	else
	{
		func_51(3);
	}
	if (func_9(Global_2537071.f_5124.f_4, 0, 1))
	{
		if (!func_48(Global_2537071.f_5124.f_4, UNK_0xD803B885F5E47A62(), 1))
		{
			func_50(Global_2537071.f_5124.f_4);
		}
	}
	if (func_37() != func_10())
	{
		if (func_6(UNK_0xD803B885F5E47A62(), 1))
		{
			if (func_47(func_37(), 13))
			{
				Local_82.f_10 = 1;
			}
		}
		func_45(func_46(func_37()), 1);
		Global_2537071.f_5124.f_4 = func_10();
		UNK_0x5D96D8530B3D0904(&(Local_82.f_1), 6);
		return true;
	}
	else if (func_37() == func_10())
	{
	}
	return false;
}

void func_45(bool bParam0, int iParam1)
{
	vector3 vVar0;

	vVar0.x = 1421531240;
	vVar0.f_1 = UNK_0xD803B885F5E47A62();
	vVar0.f_2 = iParam1;
	if (!bParam0 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &vVar0, 3, bParam0);
	}
}

bool func_46(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_47(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_5, bParam1);
}

bool func_48(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_49(bParam0, bParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_10())
		{
			return bParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_49(bool bParam0, bool bParam1)
{
	if (bParam1 != func_10())
	{
		if (bParam0 != func_10())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_10())
			{
				if (Global_1628237[bParam0 /*615*/].f_11 == bParam0)
				{
					return bParam1 == bParam0;
				}
			}
		}
	}
	return false;
}

void func_50(bool bParam0)
{
	Local_82.f_2 = bParam0;
	if (bParam0 == func_10())
	{
	}
}

void func_51(int iParam0)
{
	Local_82 = iParam0;
}

bool func_52()
{
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return true;
	}
	return false;
}

bool func_53(bool bParam0)
{
	if (func_61(1))
	{
		return true;
	}
	if (Global_2537071.f_5124.f_41)
	{
		Global_2537071.f_5124.f_41 = 0;
		return true;
	}
	if (bParam0)
	{
		if (func_60() == func_10() || !func_9(func_60(), 0, 1))
		{
			return true;
		}
	}
	if (!func_58(UNK_0xD803B885F5E47A62()))
	{
		if (func_57(UNK_0xD803B885F5E47A62()) && func_54())
		{
			return true;
		}
	}
	return false;
}

bool func_54()
{
	switch (func_55(func_56(UNK_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
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
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
	}
	return -1;
}

int func_56(bool bParam0)
{
	if (bParam0 != func_10() && func_9(bParam0, 1, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

bool func_57(bool bParam0)
{
	if (bParam0 != func_10() && func_9(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 4);
	}
	return false;
}

bool func_58(bool bParam0)
{
	if (func_59(bParam0) != func_10())
	{
		return func_59(bParam0) == func_27(bParam0);
	}
	return false;
}

bool func_59(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

bool func_60()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_35;
}

bool func_61(bool bParam0)
{
	bool bVar0;

	if (!func_95(1))
	{
		bVar0 = false;
		if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 != func_10())
		{
			if (func_9(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 4 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 8) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_94(func_32(UNK_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_93(31);
				if (func_92(func_32(UNK_0xD803B885F5E47A62())))
				{
					func_93(81);
				}
				if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 != func_10() && UNK_0x40B8C182D63932FC(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57))
				{
					Global_1626725 = func_63(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_62(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57))
					{
						func_93(88);
					}
				}
				else
				{
					Global_1626725 = 1;
				}
				Global_1626709 = { Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_104 };
			}
			return true;
		}
	}
	return false;
}

bool func_62(bool bParam0)
{
	return func_8(bParam0, 1);
}

int func_63(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (func_17(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_17(UNK_0xD803B885F5E47A62()) || (func_91() && func_90())) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		bVar1 = func_89();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bVar1))
			{
				if (UNK_0x83FACCC48B68F9D1(bVar1) != -1)
				{
					if (func_9(UNK_0x83FACCC48B68F9D1(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_87(iParam1, bParam0, 0);
							}
							else
							{
								return func_76(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_76(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_87(iParam1, bParam0, 0);
				}
				else
				{
					return func_64(0, -1, 0);
				}
			}
			else
			{
				return func_64(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_87(iParam1, bParam0, 0);
		}
		else
		{
			return func_76(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_76(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_64(bool bParam0, int iParam1, bool bParam2)
{
	return func_65(UNK_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_65(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!UNK_0x40B8C182D63932FC(bParam0))
	{
		return 3;
	}
	iVar0 = UNK_0x08067D4957B73C02(bParam0);
	if ((func_75() || (func_74() && func_72())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_71(iParam2, iVar0);
		}
		else
		{
			return func_71(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_70(iVar0, iParam2, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_69(1);
				}
				else
				{
					return func_69(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_66(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_66(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_69(1);
	}
	return func_69(0);
}

int func_66(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_68(iParam0, iParam1, iParam3);
	if (func_67(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			case 3:
				return 31;
			case 4:
				return 32;
			case 5:
				return 33;
			case 6:
				return 34;
			case 7:
				return 35;
			case 8:
				return 36;
			case 9:
				return 37;
			case 10:
				return 38;
			case 11:
				return 39;
			case 12:
				return 40;
			case 13:
				return 41;
			case 14:
				return 42;
			case 15:
				return 43;
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			default:
				break;
		}
	}
	return 28;
}

bool func_67(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return true;
		}
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_70(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_69(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

bool func_70(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, false);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, true);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				default:
					break;
			}
			break;
	}
	return false;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_68(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		default:
			break;
	}
	return 28;
}

bool func_72()
{
	if (func_73())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_73()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_74()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_75()
{
	if (func_73() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

int func_76(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (iParam2 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1590535[bVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_82())
			{
				iVar3 = func_81(bParam0);
				if (!iVar3 == -1)
				{
					return func_79(iVar3);
				}
			}
			if ((func_78(bParam1, bParam0, iVar0, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_70(UNK_0x08067D4957B73C02(bParam1), UNK_0x08067D4957B73C02(bParam0), 0) && UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_69(1);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_77(1);
			}
			else
			{
				return func_65(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_69(1);
			}
			else
			{
				return func_65(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_81(bParam0);
	if (!iVar4 == -1)
	{
		return func_79(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_77(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_78(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(bParam1) == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == iParam2;
	}
	return UNK_0x08067D4957B73C02(bParam0) == iParam2;
}

int func_79(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_80(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			case 1:
				return 193;
			case 2:
				return 194;
			case 3:
				return 195;
			case 4:
				return 196;
			case 5:
				return 197;
			case 6:
				return 198;
			case 7:
				return 199;
			case 8:
				return 200;
			case 9:
				return 201;
			case 10:
				return 202;
			case 11:
				return 203;
			case 12:
				return 204;
			case 13:
				return 205;
			case 14:
				return 206;
			default:
				break;
		}
	}
	return 1;
}

int func_80(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_81(bool bParam0)
{
	if (!bParam0 == func_10())
	{
		if (func_28(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_27(bParam0)];
		}
	}
	return -1;
}

bool func_82()
{
	if (((func_86() || func_85()) || func_84()) || func_83())
	{
		return true;
	}
	return false;
}

bool func_83()
{
	return Global_2450632.f_19;
}

bool func_84()
{
	return Global_2450632.f_17;
}

var func_85()
{
	return Global_2450632.f_16;
}

var func_86()
{
	return Global_2450632.f_15;
}

int func_87(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_82())
	{
		iVar2 = func_81(bParam1);
		if (!iVar2 == -1)
		{
			return func_79(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_10())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_65(bParam1, !bParam2, iParam0, 0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_88(iParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_70(iParam0, UNK_0x08067D4957B73C02(bParam1), 0))
		{
			iVar0 = func_77(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_88(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
			break;
	}
	return 2;
}

bool func_89()
{
	return Global_2359302.f_2;
}

bool func_90()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_91()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_92(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148 && func_8(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_35, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return true;
	}
	return false;
}

void func_93(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		case 148:
		case 179:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_95(bool bParam0)
{
	return func_28(UNK_0xD803B885F5E47A62(), bParam0);
}

void func_96()
{
	switch (func_620())
	{
		case 0:
			func_605(151, 1, -1, 0);
			func_604(1);
			if (func_42() > 0)
			{
				func_603(1);
			}
			break;
		case 1:
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_80, 2))
			{
				func_600();
			}
			if (Global_1681924 == func_10())
			{
				if (UNK_0x40B8C182D63932FC(func_37()))
				{
					Global_1681924 = func_37();
				}
			}
			func_594();
			func_584();
			func_565();
			func_563();
			func_519();
			func_396(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
			if (func_42() > 1)
			{
				func_603(2);
			}
			break;
		case 2:
			if (!UNK_0xEAE0D21A50E6C7F4(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1, 3))
			{
				func_394(0, func_10());
				func_302();
				func_97();
			}
			if (func_42() > 2)
			{
				func_603(3);
			}
			break;
		case 3:
			break;
	}
}

void func_97()
{
	struct<20> Var0;

	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!UNK_0xEAE0D21A50E6C7F4(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1, 3))
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 2) || UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 4)) || UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 4))
		{
			UNK_0x5D96D8530B3D0904(&(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1), 3);
			return;
		}
		if (func_301())
		{
			UNK_0x5D96D8530B3D0904(&(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1), 3);
			return;
		}
		if (func_295())
		{
			UNK_0x5D96D8530B3D0904(&(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1), 3);
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 7))
		{
			func_98(151, 1, &Var0, 0);
		}
		else
		{
			func_98(151, UNK_0xEAE0D21A50E6C7F4(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1, true), &Var0, 0);
		}
		UNK_0x5D96D8530B3D0904(&(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1), 3);
	}
}

void func_98(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;

	func_293(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		bVar0 = (bVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_292(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = (bVar0 + func_291(iParam0, bParam3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		bVar0 = (bVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_289(iParam0))
	{
		if (bParam1)
		{
			if (func_288(UNK_0xD803B885F5E47A62()) > 0)
			{
				func_287();
			}
			else
			{
				func_286();
			}
		}
		else
		{
			func_285();
		}
	}
	func_269(iParam0, bParam1, uParam2, &bVar0, &iVar4);
	func_267(iParam0, uParam2, &bVar0, &iVar5);
	func_241(iParam0, uParam2, &bVar0, &iVar5);
	func_238(iParam0, uParam2, &bVar0, &iVar5, &iVar7);
	func_221(iParam0, uParam2, &bVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2537071.f_5124.f_382 = iVar4;
	}
	else
	{
		Global_2537071.f_5124.f_382 = iVar5;
	}
	bVar8 = func_60();
	if (bVar8 != func_10() && iParam0 != 148)
	{
		if (func_28(UNK_0xD803B885F5E47A62(), 0))
		{
			if (!func_48(UNK_0xD803B885F5E47A62(), bVar8, 1))
			{
				func_207(&bVar0, 1);
			}
		}
	}
	func_201(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	bVar0 = (bVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674356.f_10 = iVar1;
		func_200();
		func_153(0, UNK_0x16F2683693E537C9(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (bVar0 > 0)
	{
		Global_1674356.f_9 = bVar0;
		func_130(iParam0, bVar0, iVar7, iVar4, iVar5, uParam2);
		func_129(iParam0, bVar0);
		if (func_128(iParam0))
		{
			if (func_127(iParam0) > -1)
			{
				func_126(func_127(iParam0), bVar0);
			}
		}
		Global_2462880 = bVar0;
		func_125(&Global_2461144, 0, 0);
	}
	if (func_35(UNK_0xD803B885F5E47A62()) || func_124(UNK_0xD803B885F5E47A62()))
	{
		func_111(iParam0);
	}
	if (func_92(iParam0))
	{
		Global_1674374.f_13 = bVar0;
		Global_1674374.f_14 = iVar1;
	}
	if (func_110(iParam0))
	{
		Global_1674428.f_13 = bVar0;
		Global_1674428.f_14 = iVar1;
	}
	if (func_109(iParam0))
	{
		Global_1674491.f_12 = bVar0;
		Global_1674491.f_13 = iVar1;
	}
	if (func_108(iParam0))
	{
		Global_1674535.f_12 = bVar0;
		Global_1674535.f_13 = iVar1;
	}
	if (func_107(iParam0))
	{
		Global_1674589.f_12 = bVar0;
		Global_1674589.f_13 = iVar1;
	}
	if (func_106(iParam0))
	{
		if (func_105(iParam0))
		{
			Global_1674671.f_12 = bVar0;
			Global_1674671.f_13 = iVar1;
		}
		else if (func_101(iParam0))
		{
			Global_1674725.f_12 = bVar0;
			Global_1674725.f_13 = iVar1;
		}
	}
	if (func_100(iParam0))
	{
		Global_1674809.f_12 = bVar0;
		Global_1674809.f_13 = iVar1;
	}
	if (func_99(iParam0))
	{
		Global_1674884.f_16 = bVar0;
		Global_1674884.f_17 = iVar1;
	}
}

bool func_99(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return true;
		default:
			break;
	}
	return false;
}

bool func_100(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return true;
		default:
			break;
	}
	return false;
}

bool func_101(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_102(func_103(UNK_0xD803B885F5E47A62()))))
	{
		return true;
	}
	return false;
}

bool func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

int func_103(bool bParam0)
{
	if (func_32(bParam0) == 237 || func_32(bParam0) == 250)
	{
		return func_104(bParam0);
	}
	return -1;
}

int func_104(bool bParam0)
{
	if (func_33(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_105(int iParam0)
{
	if (iParam0 == 237)
	{
		return true;
	}
	return false;
}

bool func_106(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_107(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return true;
		default:
			break;
	}
	return false;
}

bool func_108(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return true;
		default:
			break;
	}
	return false;
}

bool func_109(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return true;
		default:
			break;
	}
	return false;
}

bool func_110(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return true;
		default:
			break;
	}
	return false;
}

void func_111(int iParam0)
{
	if (func_123(UNK_0xD803B885F5E47A62()) && func_122())
	{
		if (func_121(iParam0))
		{
			func_115(10146, -1);
		}
		else if (func_114(iParam0))
		{
			func_115(10148, -1);
		}
		else if (func_113(iParam0, 1))
		{
			func_115(10149, -1);
		}
		else if (func_112(iParam0))
		{
			func_115(10150, -1);
		}
	}
}

bool func_112(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return true;
		default:
			break;
	}
	return false;
}

bool func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return true;
		default:
			break;
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return true;
			default:
				break;
		}
	}
	return false;
}

bool func_114(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return true;
		default:
			break;
	}
	return false;
}

void func_115(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_119(iParam0, func_120(iParam1), 0);
	bVar0++;
	if (!func_118(iParam0))
	{
		func_117(iParam0, bVar0, iParam1, 1, 0);
	}
	else
	{
		func_116(iParam0, bVar0, iParam1, 1);
	}
}

void func_116(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_120(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_120(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_120(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_120(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_120(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_120(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_120(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_120(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_120(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_120(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_120(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_120(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_120(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_120(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_120(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_120(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_120(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_120(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_120(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_120(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_120(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_120(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_120(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_120(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_120(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_120(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_120(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_120(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_120(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_120(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_120(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_120(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_120(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_120(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_120(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_120(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_120(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_120(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_120(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_120(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_120(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_120(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_120(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_120(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_120(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_120(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_120(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_120(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_120(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_120(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_120(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_120(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_120(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_120(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

void func_117(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_120(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

bool func_118(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return true;
		}
	}
	return false;
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_120(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_21();
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

bool func_121(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return true;
		default:
			break;
	}
	return false;
}

bool func_122()
{
	return func_62(UNK_0xD803B885F5E47A62());
}

bool func_123(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_123, 14);
}

bool func_124(bool bParam0)
{
	return func_36(bParam0, 20);
}

void func_125(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = UNK_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = UNK_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = UNK_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

void func_126(int iParam0, bool bParam1)
{
	if (bParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!UNK_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (bParam1 > Global_262145.f_6584)
				{
					bParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = bParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		case 157:
			return 22;
		case 159:
			return 21;
		case 151:
			return 33;
		case 148:
			return 23;
		case 164:
			return 24;
		case 152:
			return 26;
		case 153:
			return 30;
		case 154:
			return 32;
		case 155:
			return 28;
		case 160:
			return 29;
		case 162:
			return 31;
		case 163:
			return 27;
		case 166:
			return 38;
		case 170:
			return 34;
		case 171:
			return 35;
		case 172:
			return 36;
		case 173:
			return 37;
		case 179:
			return 23;
		default:
			break;
	}
	return 0;
}

bool func_128(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		case 169:
			iVar0 = 0;
			break;
		case 168:
			iVar0 = 0;
			break;
		case 166:
			iVar0 = 0;
			break;
		case 190:
			iVar0 = 0;
			break;
		case 191:
			iVar0 = 0;
			break;
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_129(int iParam0, bool bParam1)
{
	if (func_123(UNK_0xD803B885F5E47A62()) && func_122())
	{
		if (func_121(iParam0) && bParam1 > 0)
		{
			func_117(10147, (func_119(10147, -1, 0) + bParam1), -1, 1, 0);
		}
	}
}

void func_130(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<2> Var7;

	bVar5 = func_11();
	if (bVar5 != func_10())
	{
		func_152(bVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_95(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_151())
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam3);
			}
			break;
		case 190:
			if (func_122())
			{
				if (!func_151())
				{
					Var7 = { func_150() };
					UNK_0x52E03D7A828118C8(bParam1, UNK_0x12AB0310C2281427(func_149(Var7)), func_148(Var7), iParam4);
				}
			}
			else if (func_151())
			{
				func_137(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 226:
			if (func_136())
			{
				if (!func_151())
				{
					UNK_0x52E03D7A828118C8(bParam1, UNK_0x12AB0310C2281427(func_149(func_135(UNK_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_151())
			{
				func_137(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 230:
			if (func_136())
			{
				if (!func_151())
				{
					iVar2 = func_131(uParam5->f_16, iParam4);
					bVar3 = bParam1;
					if (iVar2 > 0)
					{
						bVar3 = (bVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						bVar3 = (bVar3 - iParam2);
					}
					UNK_0x13A30CD1AD15553C(bVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_151())
			{
				func_137(463142405, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x3CF6953686BFBF61(uVar0, uVar1, bParam1, bVar6);
			}
			break;
		case 233:
			if (func_151())
			{
				func_137(1407278493, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x53D560AAF6BF3D4E(bParam1);
			}
			break;
		case 237:
			if (func_136())
			{
				if (!func_151())
				{
					UNK_0x5D421B9474B610E6(bParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_151())
			{
				func_137(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 250:
			if (func_151())
			{
				func_137(-961034881, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0xA106C1682C790290(bParam1);
			}
			break;
		case 249:
			if (func_151())
			{
				func_137(1135468152, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x546613D1293DBF87(bParam1);
			}
			break;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_151())
			{
				func_137(-634726636, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x163F1C05711ACF77(bParam1);
			}
			break;
		case 243:
			if (func_151())
			{
				func_137(1698417709, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0xA8C1B24657FB32B3(bParam1);
			}
			break;
		case 158:
			if (uParam5->f_22)
			{
				if (func_151())
				{
					func_137(1668610896, bParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					UNK_0xB0E03FD240577D6C(bParam1, 0, false, 1, bParam1, 0, false);
				}
			}
			else if (func_151())
			{
				func_137(-2032529561, bParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				UNK_0xB0E03FD240577D6C(bParam1, 1, bParam1, 0, false, 0, false);
			}
			break;
		default:
			if (func_151())
			{
				func_137(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x0C06D61FE6218C43(uVar0, uVar1, bParam1, bVar6);
			}
			break;
	}
}

int func_131(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_134(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_132(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_132(int iParam0, int iParam1)
{
	return (func_133(iParam0) * iParam1);
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		case 0:
			return Global_262145.f_22307;
		case 1:
			return Global_262145.f_22308;
		case 2:
			return Global_262145.f_22309;
		case 3:
			return Global_262145.f_22310;
		case 4:
			return Global_262145.f_22311;
		case 5:
			return Global_262145.f_22312;
		case 6:
			return Global_262145.f_22313;
		case 7:
			return Global_262145.f_22314;
		default:
			break;
	}
	return 0;
}

float func_134(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_135(bool bParam0)
{
	if (bParam0 == func_10())
	{
		return 0;
	}
	return Global_1590535[bParam0 /*876*/].f_274.f_183[5 /*12*/];
}

bool func_136()
{
	return func_29(UNK_0xD803B885F5E47A62());
}

void func_137(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_151())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_138(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
			}
			break;
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_138(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_138(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
			}
			break;
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_138(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_151())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_21()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*iParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || UNK_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar4))
		{
			*iParam0 = func_145(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_4263954[*iParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*iParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_144(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_139(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_139(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_140(iParam0);
	}
}

void func_140(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_151())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_143(iParam0))
		{
			if (!bVar0)
			{
				UNK_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			UNK_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_141(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_141(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_142(&(uParam0->f_14));
	func_142(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_142(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_143(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_144(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_151())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = bParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = iParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_146(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_146(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	bool bVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.f_1 = UNK_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	bVar36 = func_46(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_147();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_147()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 4;
		case 9:
			return 2;
		case 10:
			return 0;
		case 11:
			return 3;
		case 12:
			return 1;
		case 13:
			return 4;
		case 14:
			return 2;
		case 15:
			return 0;
		case 16:
			return 3;
		case 17:
			return 1;
		case 18:
			return 4;
		case 19:
			return 2;
		case 20:
			return 0;
		case 21:
			return 5;
		case 22:
			return 5;
		case 23:
			return 5;
		case 24:
			return 5;
		case 25:
			return 5;
		case 26:
			return 5;
		case 27:
			return 5;
		case 28:
			return 5;
		case 29:
			return 5;
		case 30:
			return 5;
		case 31:
			return 5;
		default:
			break;
	}
	return -1;
}

char* func_149(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_150()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_193;
}

bool func_151()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

void func_152(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628237[bParam0 /*615*/].f_11.f_8[0];
	*uParam2 = Global_1628237[bParam0 /*615*/].f_11.f_8[1];
}

bool func_153(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_154(iParam0, bParam1, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

bool func_154(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_164(iParam0, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xEC560E589DF8370E(bParam1))
			{
				bVar1 = UNK_0x940C1429253D3B1B(bParam1);
				func_160(UNK_0x64430C979F516F7A(bVar1, 31086, 0f, 0f, 0f), bVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_155(bParam1, bVar0, iParam8, iParam10);
	}
	return bVar0;
}

void func_155(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_158(bParam0, 1) };
	if (bParam0 == func_157(UNK_0x16F2683693E537C9()))
	{
		func_156(1);
	}
	func_160(vVar0, bParam1, 0, bParam2, iParam3);
}

void func_156(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_157(int iParam0)
{
	return iParam0;
}

Vector3 func_158(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (UNK_0x19C7D1907D1DDDAB())
	{
		vVar3 = { UNK_0x3B276DB863622D2E(2) };
	}
	if (bParam0 == func_159(UNK_0x16F2683693E537C9()) && UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { UNK_0x68E4ADDDDCD7BDDE(bParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	bVar6 = 0f;
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		bVar6 = UNK_0xD9522BA9E27E1349(bParam0);
		if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
		{
			bVar6 = vVar3.z;
		}
	}
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { UNK_0x8A5E176FF719A014(vVar0, bVar6, 0f, 0f, fVar13) };
	return vVar0;
}

bool func_159(int iParam0)
{
	return iParam0;
}

void func_160(vector3 vParam0, bool bParam3, int iParam4, char* sParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (bParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1 /*30*/] = { vParam0 };
			Global_2439138.f_1290[iVar1 /*30*/].f_6 = 1;
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_163(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = UNK_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = bParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_162();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_161();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam6);
		}
	}
}

int func_161()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_162()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_163(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x07DAF5424BC6779A(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

bool func_164(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;

	bVar0 = func_165(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, bParam2, iParam3, bParam7);
	return bVar0;
}

bool func_165(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_199(UNK_0xD803B885F5E47A62()) || func_198(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_196() || func_195(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_194(bParam2))
	{
	}
	if (func_193())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_191(bVar1);
		fVar3 = (SYSTEM::TO_FLOAT(bVar1) * Global_262145.f_1);
		bVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			bVar1 = func_190(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_187(0, &bVar1);
					break;
				case 3:
					func_187(1, &bVar1);
					break;
				case 1:
					func_184(&bVar1);
					break;
			}
		}
		if (bVar1 > Global_1686714)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					bVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					bVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_183(1164, bVar1, -1);
			if (iParam1 == 0)
			{
				func_176((func_182(UNK_0xD803B885F5E47A62()) + bVar1), iParam9, 0);
				if (bParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				UNK_0x189A6F4108CDFDD6(bVar1, bParam8, iParam9);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_183(1165, bVar1, -1);
				}
				func_170(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_166((func_168(UNK_0xD803B885F5E47A62()) + bVar1));
			}
			else
			{
				func_166((func_168(UNK_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_166(bool bParam0)
{
	if (func_193())
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_5 = bParam0;
		func_167(joaat("MPPLY_GLOBALXP"), bParam0);
	}
}

void func_167(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

int func_168(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_9(bParam0, 0, 1))
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return func_169(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_169(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_169(int iParam0)
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

void func_170(bool bParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_175(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_173(func_174(&Var0));
			if (iVar13 == 0)
			{
				func_172(&Global_1387915, bParam0);
				func_171(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_172(&Global_1387916, bParam0);
				func_171(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_172(&Global_1387917, bParam0);
				func_171(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_172(&Global_1387918, bParam0);
				func_171(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_172(&Global_1387919, bParam0);
				func_171(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_171(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1387910 = bParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1387913 = bParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1387914 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1387915 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1387916 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1387917 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1387918 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1387919 = bParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1387920 = bParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1387921 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1387922 = bParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1387923 = bParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1387924 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1387925 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1387926 = bParam1;
			break;
		default:
			break;
	}
}

void func_172(var uParam0, bool bParam1)
{
	*uParam0 = (*uParam0 + bParam1);
}

int func_173(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_174(var uParam0)
{
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_175(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

void func_176(bool bParam0, int iParam1, int iParam2)
{
	if (func_193())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1388060[func_120(-1)])
				{
					UNK_0x189A6F4108CDFDD6(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1388060[func_120(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 == 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 < 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_15(UNK_0xD803B885F5E47A62()))
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_1 = bParam0;
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_180(bParam0, 1);
		}
		func_116(639, bParam0, -1, 1);
		func_117(640, func_180(bParam0, 1), -1, 1, 0);
		Global_1388060[func_120(-1)] = bParam0;
		func_177(-1109644434, 7, 0);
	}
}

void func_177(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_179(iParam1, bParam2))
	{
		iVar0 = func_178();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_178()
{
	int iVar0;
	int iVar1;

	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_179(int iParam0, bool bParam1)
{
	if (Global_1312865)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((bParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

int func_180(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_181(bParam0, 0);
}

int func_181(bool bParam0, int iParam1)
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
		if (Global_291133[iVar3] == bParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < bParam0)
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

int func_182(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_120(-1)];
			}
			else if (func_15(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_120(-1)];
	}
	return 0;
}

void func_183(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_119(iParam0, func_120(iParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_118(iParam0))
	{
		func_117(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_116(iParam0, bVar0, iParam2, 1);
	}
}

void func_184(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		bVar4 = UNK_0xF4FB3A22FC4991C8(bVar0);
		if (UNK_0x81A93C8315C28F58(bVar4))
		{
			bVar5 = UNK_0x4B2BFE4A3BC248ED(bVar4);
			if (UNK_0x08067D4957B73C02(bVar5) != -1)
			{
				if (UNK_0x08067D4957B73C02(bVar5) == iVar1 || func_70(UNK_0x08067D4957B73C02(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != UNK_0xD803B885F5E47A62())
					{
						if (func_186(UNK_0xD803B885F5E47A62(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_185(*bParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_185(*bParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_185(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

bool func_186(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_175(bParam0) };
		Global_2513231 = { func_175(bParam1) };
		if (UNK_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (UNK_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				UNK_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_187(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x54EABC0DD106045B())
		{
			bVar3 = iVar0;
			if (UNK_0x81A93C8315C28F58(bVar3))
			{
				bVar4 = UNK_0x4B2BFE4A3BC248ED(bVar3);
				if (func_9(bVar4, 0, 1))
				{
					if (bVar4 != UNK_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_186(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_9(bVar4, 1, 1))
			{
				if (bVar4 != UNK_0xD803B885F5E47A62())
				{
					if (func_188(UNK_0xD803B885F5E47A62(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_186(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_185(*bParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_185(*bParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_188(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_189(bParam0), func_189(bParam1));
	return 0f;
}

Vector3 func_189(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_190(bool bParam0)
{
	int iVar0;

	if (UNK_0xA0501A3E65437842() != 3)
	{
		return *bParam0;
	}
	iVar0 = SYSTEM::ROUND((func_185(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

bool func_191(bool bParam0)
{
	if (bParam0 < 0)
	{
		if (UNK_0x51D1D19912234EA0(bParam0) > func_182(UNK_0xD803B885F5E47A62()))
		{
			bParam0 = -func_182(UNK_0xD803B885F5E47A62());
		}
	}
	if (func_192(8000, 0, 0) > 0)
	{
		if (func_192(8000, 0, 0) < (bParam0 + func_182(UNK_0xD803B885F5E47A62())))
		{
			bParam0 = (func_192(8000, 0, 0) - func_182(UNK_0xD803B885F5E47A62()));
		}
	}
	return bParam0;
}

int func_192(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

bool func_193()
{
	return true;
}

bool func_194(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

bool func_195(bool bParam0)
{
	return func_107(func_32(bParam0));
}

bool func_196()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_84();
	}
	return func_197(Global_4456448.f_194990);
}

int func_197(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_198(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_199(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_200()
{
	Global_2462221 = 1;
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*iParam1 = 0;
	*iParam2 = 0;
	if (!func_206(7))
	{
		return;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_203(iParam0);
	iVar2 = UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(Global_2537071.f_5124.f_265, UNK_0x2B6E0A53779D29EA()));
	if (func_202(iParam0) != -1)
	{
		if (iVar2 > func_202(iParam0))
		{
			iVar2 = func_202(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*iParam1 = (iVar3 * iVar1);
	*iParam2 = (iVar3 * iVar0);
}

int func_202(int iParam0)
{
	if (func_113(iParam0, 0) || func_114(iParam0))
	{
		return Global_262145.f_18487;
	}
	if (func_121(iParam0))
	{
		return Global_262145.f_18486;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18483;
		case 191:
			return Global_262145.f_18485;
		case 190:
			return Global_262145.f_18484;
		case 227:
			return Global_262145.f_21043;
		case 226:
			return Global_262145.f_21031;
		case 225:
			return Global_262145.f_21051;
		case 230:
			return Global_262145.f_22303;
		case 229:
			return Global_262145.f_22207;
		case 233:
			return Global_262145.f_22779;
		case 237:
			return Global_262145.f_23942;
		case 238:
			return Global_262145.f_24053;
		case 249:
			return Global_262145.f_24069;
		case 243:
			return Global_262145.f_26301;
		default:
			break;
	}
	return -1;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		case 152:
			return Global_262145.f_12521;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12509;
		case 157:
			return Global_262145.f_12476;
		case 159:
			return Global_262145.f_12459;
		case 164:
			return Global_262145.f_12499;
		case 160:
			return Global_262145.f_12549;
		case 162:
			return Global_262145.f_12569;
		case 163:
			return Global_262145.f_12534;
		case 154:
			return Global_262145.f_12604;
		case 155:
			return Global_262145.f_12594;
		case 153:
			return Global_262145.f_12558;
		case 170:
			return Global_262145.f_14995;
		case 171:
			return Global_262145.f_15054;
		case 172:
			return Global_262145.f_15072;
		case 173:
			return Global_262145.f_15013;
		case 166:
			return Global_262145.f_15028;
		case 167:
			return Global_262145.f_15119;
		case 169:
			return Global_262145.f_15091;
		case 168:
			return Global_262145.f_15084;
		case 179:
			return Global_262145.f_18366;
		case 180:
			return Global_262145.f_18144;
		case 182:
			return Global_262145.f_18144;
		case 183:
			return Global_262145.f_18144;
		case 185:
			return Global_262145.f_18144;
		case 186:
			return Global_262145.f_18144;
		case 189:
			return Global_262145.f_18366;
		case 190:
			return Global_262145.f_18020;
		case 191:
			return Global_262145.f_18111;
		case 192:
			return Global_262145.f_17905;
		case 193:
			return Global_262145.f_18366;
		case 194:
			return Global_262145.f_18366;
		case 195:
			return Global_262145.f_18144;
		case 197:
			return Global_262145.f_18144;
		case 198:
			return Global_262145.f_18144;
		case 199:
			return Global_262145.f_18366;
		case 200:
			return Global_262145.f_18366;
		case 201:
			return Global_262145.f_18366;
		case 205:
			return Global_262145.f_18366;
		case 207:
			return Global_262145.f_18144;
		case 208:
			return Global_262145.f_18144;
		case 209:
			return Global_262145.f_18144;
		case 210:
			return Global_262145.f_18366;
		case 211:
			return Global_262145.f_18366;
		case 214:
			return Global_262145.f_19216;
		case 215:
			return Global_262145.f_19218;
		case 216:
			return Global_262145.f_19220;
		case 217:
			return Global_262145.f_19222;
		case 218:
			return Global_262145.f_19224;
		case 219:
			return Global_262145.f_19226;
		case 220:
			return Global_262145.f_19228;
		case 221:
			return Global_262145.f_19230;
		case 225:
			if (!func_136())
			{
				return Global_262145.f_21053;
			}
			break;
		case 226:
			if (!func_136())
			{
				return Global_262145.f_21033;
			}
			break;
		case 227:
			if (!func_136())
			{
				return Global_262145.f_21045;
			}
			break;
		case 229:
			if (!func_136())
			{
				return Global_262145.f_22209;
			}
			break;
		case 230:
			if (!func_136())
			{
				return Global_262145.f_22305;
			}
			break;
		case 233:
			if (!func_136())
			{
				return Global_262145.f_22778;
			}
			break;
		case 241:
			return 100;
		case 242:
			return 100;
		case 244:
			return 100;
		case 248:
			return 100;
		case 239:
			return 100;
		case 240:
			return 100;
		case 250:
			return 100;
		case 237:
			if (!func_136())
			{
				return Global_262145.f_23944;
			}
			break;
		case 238:
			if (!func_136())
			{
				return Global_262145.f_24055;
			}
			break;
		case 249:
			if (!func_136())
			{
				return Global_262145.f_24071;
			}
			break;
		case 243:
			if (!func_136())
			{
				return Global_262145.f_26304;
			}
			break;
		case 158:
			if (!func_136())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		case 152:
			return Global_262145.f_12520;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12508;
		case 157:
			return Global_262145.f_12475;
		case 159:
			return Global_262145.f_12458;
		case 164:
			return Global_262145.f_12498;
		case 160:
			return Global_262145.f_12548;
		case 162:
			return Global_262145.f_12568;
		case 163:
			return Global_262145.f_12533;
		case 154:
			return Global_262145.f_12603;
		case 155:
			return Global_262145.f_12593;
		case 153:
			return Global_262145.f_12557;
		case 170:
			return Global_262145.f_14994;
		case 171:
			return Global_262145.f_15053;
		case 172:
			return Global_262145.f_15071;
		case 173:
			return Global_262145.f_15012;
		case 166:
			return Global_262145.f_15027;
		case 179:
			return Global_262145.f_18365;
		case 180:
			return Global_262145.f_18143;
		case 182:
			return Global_262145.f_18143;
		case 183:
			return Global_262145.f_18143;
		case 185:
			return Global_262145.f_18143;
		case 186:
			return Global_262145.f_18143;
		case 189:
			return Global_262145.f_18365;
		case 193:
			return Global_262145.f_18365;
		case 194:
			return Global_262145.f_18365;
		case 195:
			return Global_262145.f_18143;
		case 197:
			return Global_262145.f_18143;
		case 198:
			return Global_262145.f_18143;
		case 199:
			return Global_262145.f_18365;
		case 200:
			return Global_262145.f_18365;
		case 201:
			return Global_262145.f_18365;
		case 205:
			return Global_262145.f_18365;
		case 207:
			return Global_262145.f_18143;
		case 208:
			return Global_262145.f_18143;
		case 209:
			return Global_262145.f_18143;
		case 210:
			return Global_262145.f_18365;
		case 211:
			return Global_262145.f_18365;
		case 190:
			if (func_205(0))
			{
				return Global_262145.f_18019;
			}
			else
			{
				return 0;
			}
			break;
		case 191:
			if (func_205(0))
			{
				return Global_262145.f_18110;
			}
			else
			{
				return 0;
			}
			break;
		case 192:
			if (func_205(0))
			{
				return Global_262145.f_17904;
			}
			else
			{
				return 0;
			}
			break;
		case 214:
			return Global_262145.f_19215;
		case 215:
			return Global_262145.f_19217;
		case 216:
			return Global_262145.f_19219;
		case 217:
			return Global_262145.f_19221;
		case 218:
			return Global_262145.f_19223;
		case 219:
			return Global_262145.f_19225;
		case 220:
			return Global_262145.f_19227;
		case 221:
			return Global_262145.f_19229;
		case 225:
			if (func_205(0))
			{
				return Global_262145.f_21052;
			}
			break;
		case 226:
			if (func_205(0))
			{
				return Global_262145.f_21032;
			}
			break;
		case 227:
			if (func_205(0))
			{
				return Global_262145.f_21044;
			}
			break;
		case 229:
			if (func_205(0))
			{
				return Global_262145.f_22208;
			}
			break;
		case 230:
			if (func_205(0))
			{
				return Global_262145.f_22304;
			}
			break;
		case 233:
			if (func_205(0))
			{
				return Global_262145.f_22780;
			}
			break;
		case 241:
			return 500;
		case 242:
			return 500;
		case 244:
			return 500;
		case 248:
			return 500;
		case 239:
			return 500;
		case 240:
			return 500;
		case 250:
			return 500;
		case 237:
			if (func_205(0))
			{
				return Global_262145.f_23943;
			}
			break;
		case 238:
			if (func_205(0))
			{
				return Global_262145.f_24054;
			}
			break;
		case 249:
			if (func_205(0))
			{
				return Global_262145.f_24070;
			}
			break;
		case 243:
			return Global_262145.f_26300;
		case 158:
			if (func_205(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_205(bool bParam0)
{
	return func_6(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_206(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_45, bParam0);
}

void func_207(bool bParam0, int iParam1)
{
	bool bVar0;

	if (*bParam0 > 0)
	{
		if (!func_136())
		{
			if (func_95(0))
			{
				if (!func_205(0))
				{
					if (UNK_0x40B8C182D63932FC(func_11()))
					{
						if (func_220() == 100)
						{
							bVar0 = *bParam0;
							*bParam0 = 0;
						}
						else
						{
							bVar0 = ((*bParam0 / 100) * func_220());
							*bParam0 = (*bParam0 - bVar0);
						}
						func_218(&bVar0, 0);
						if (iParam1 == 1)
						{
							func_211("GB_BCUT_TICK1", func_11(), bVar0, 0, 0, 1);
						}
						func_93(20);
						func_208(func_11(), bVar0, 1);
					}
				}
			}
		}
	}
}

void func_208(bool bParam0, bool bParam1, int iParam2)
{
	struct<8> Var0;

	if (func_9(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = UNK_0xD803B885F5E47A62();
		Var0.f_2 = bParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_210(bParam0);
		func_209(&(Var0.f_6), &(Var0.f_7));
		UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_46(bParam0));
	}
}

void func_209(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_210(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

int func_211(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	char cVar1[64];

	iVar0 = -1;
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam5)
	{
		if (!bParam4)
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&cVar1))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		UNK_0x3A820E495A7BA3E5(func_63(bParam1, -2, 1, 0, 0));
		UNK_0xD06AC7C87A34A6AD(func_216(&cVar1));
		if (!bParam3 == 0)
		{
			UNK_0x3A820E495A7BA3E5(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam2);
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		func_212(27, bParam0, 1, &cVar1, bParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_212(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_215() || !UNK_0xA14BB9332558B949()) || !func_19(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_213(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = bParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_213(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_214(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_214(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_215()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

var func_216(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_217(&cVar0);
}

char[] func_217(char[4] cParam0)
{
	return cParam0;
}

void func_218(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_219(1);
	}
	else
	{
		iVar1 = func_219(0);
	}
	iVar0 = ((*bParam0 / 100) * iVar1);
	*bParam0 = (*bParam0 - iVar0);
}

int func_219(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_220()
{
	return Global_262145.f_12389;
}

void func_221(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;

	bVar18 = func_205(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_136())
		{
			bVar17 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar17 = func_11();
		}
		bVar11 = bVar17;
		if (bVar11 != -1)
		{
			iVar0 = Global_1590535[bVar11 /*876*/].f_854.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*iParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590535[bVar11 /*876*/].f_854.f_2;
			}
			else
			{
				iVar2 = func_237(Global_1590535[bVar11 /*876*/].f_854, *iParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*bParam2 = (*bParam2 + iVar2);
			bVar10 = func_236(*bParam2);
			if (bVar10 > 0)
			{
				if (bVar17 == UNK_0xD803B885F5E47A62())
				{
					func_235("TICK_TCUT", bVar10);
				}
				*bParam2 = (*bParam2 - bVar10);
			}
			Global_1674671.f_49 = *iParam3;
			if (bVar17 == UNK_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_234(iVar2);
				}
				if (*iParam3 > 0)
				{
					func_232(*iParam3);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = Global_262145.f_23973;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23972));
				iVar8 = ((*bParam2 / 100) * iVar9);
				*bParam2 = (*bParam2 + iVar8);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_93(140);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < UNK_0x54EABC0DD106045B())
						{
							bVar22 = iVar21;
							if (UNK_0x81A93C8315C28F58(bVar22))
							{
								bVar23 = UNK_0x4B2BFE4A3BC248ED(bVar22);
								if (func_230(bVar23))
								{
									func_222(bVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23945;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar16));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_23946;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_93(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_222(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_224(bParam0);
	func_223(bParam0, iVar0, iParam1, iParam2);
}

void func_223(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<8> Var0;

	Var0 = -601653676;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_3 = iParam3;
	Var0.f_5 = func_210(bParam0);
	func_209(&(Var0.f_6), &(Var0.f_7));
	if (bParam0 != func_10())
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_46(bParam0));
		}
	}
}

int func_224(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_229();
	iVar0 = func_227(bParam0, iVar0);
	iVar1 = Global_1628237[func_11() /*615*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14955));
	if (iVar0 < func_226())
	{
		iVar0 = func_226();
	}
	if (iVar0 > func_225())
	{
		iVar0 = func_225();
	}
	return iVar0;
}

int func_225()
{
	return Global_262145.f_14956;
}

int func_226()
{
	return Global_262145.f_16131;
}

int func_227(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = (func_288(bParam0) * func_228());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_228()
{
	return Global_262145.f_16130;
}

int func_229()
{
	return Global_262145.f_12381;
}

bool func_230(bool bParam0)
{
	if (UNK_0x40B8C182D63932FC(bParam0))
	{
		if (bParam0 != UNK_0xD803B885F5E47A62())
		{
			if (func_48(bParam0, UNK_0xD803B885F5E47A62(), 0))
			{
				if (!func_36(bParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_231(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(bVar0)))
		{
			bVar2 = UNK_0x117658E336116132(bVar0);
			if (!func_19(bVar2, 0) && !func_48(bVar2, UNK_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_19(bVar2, 0))
			{
				*uParam0++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void func_232(int iParam0)
{
	func_233(iParam0, 7236);
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_119(iParam1, -1, 0);
	func_117(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_234(int iParam0)
{
	func_233(iParam0, 7231);
}

int func_235(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_212(3, bParam0, 1, "", bParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_236(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23974);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_237(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_238(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;

	*iParam4 = 0;
	bVar16 = func_205(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_136())
		{
			bVar15 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar15 = func_11();
		}
		if (bVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_132(uParam1->f_16, *iParam3);
			*bParam2 = (*bParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_131(uParam1->f_16, *iParam3);
				if (iVar9 > 0)
				{
					*bParam2 = (*bParam2 + iVar9);
				}
			}
			if (func_240(*bParam2) > 0)
			{
				if (bVar15 == UNK_0xD803B885F5E47A62())
				{
					func_235("SMTICK_RONCUT", func_240(*bParam2));
				}
				*bParam2 = (*bParam2 - func_240(*bParam2));
			}
			if (bVar15 == UNK_0xD803B885F5E47A62())
			{
				func_239(iVar2, iVar9);
				iVar6 = func_231(&uVar5);
				iVar7 = Global_262145.f_22322;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22321));
				*iParam4 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + *iParam4);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_93(44);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < UNK_0x54EABC0DD106045B())
						{
							bVar19 = iVar18;
							if (UNK_0x81A93C8315C28F58(bVar19))
							{
								bVar20 = UNK_0x4B2BFE4A3BC248ED(bVar19);
								if (func_230(bVar20))
								{
									func_222(bVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22255;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_22256;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_93(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_239(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_233(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_233(iParam1, 6117);
	}
}

bool func_240(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22289);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22290))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22290);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_241(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;

	bVar17 = func_205(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_136())
		{
			bVar15 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar15 = func_11();
		}
		if (bVar15 != -1)
		{
			iVar16 = func_135(bVar15);
			iVar0 = (func_266(bVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_262(bVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21035));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21034));
			}
			*bParam2 = (*bParam2 + iVar2);
			if (bVar15 == UNK_0xD803B885F5E47A62())
			{
				func_256(iVar16, iVar2);
				if (func_252(iVar16) >= Global_262145.f_20583 || iVar2 >= Global_262145.f_20583)
				{
					func_242(5);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21037);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21036));
				iVar9 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + iVar9);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_93(108);
					}
					else
					{
						func_93(110);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < UNK_0x54EABC0DD106045B())
						{
							bVar19 = iVar18;
							if (UNK_0x81A93C8315C28F58(bVar19))
							{
								bVar20 = UNK_0x4B2BFE4A3BC248ED(bVar19);
								if (func_230(bVar20))
								{
									func_222(bVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21038;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_21039;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_93(112);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20571)
			{
				if (func_244(Global_262145.f_20572))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		case 1:
			if (Global_262145.f_20573)
			{
				if (func_244(Global_262145.f_20574))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		case 2:
			if (Global_262145.f_20575)
			{
				if (func_244(Global_262145.f_20576))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		case 3:
			if (Global_262145.f_20577)
			{
				if (func_244(Global_262145.f_20578))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		case 4:
			if (Global_262145.f_20579)
			{
				if (func_244(Global_262145.f_20580))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		case 5:
			if (Global_262145.f_20581)
			{
				if (func_244(Global_262145.f_20582))
				{
					func_235("CLOTHAWDSTRAP3", Global_262145.f_20583);
				}
			}
			break;
		case 6:
			if (Global_262145.f_20584)
			{
				if (func_244(Global_262145.f_20585))
				{
					func_235("CLOTHAWDSTRAP5", Global_262145.f_20717);
				}
			}
			break;
		case 7:
			if (Global_262145.f_20587)
			{
				if (func_244(Global_262145.f_20588))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		case 8:
			if (Global_262145.f_20589)
			{
				if (func_244(Global_262145.f_20590))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		case 9:
			if (Global_262145.f_20591)
			{
				if (func_244(Global_262145.f_20592))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		case 10:
			if (Global_262145.f_20593)
			{
				if (func_244(Global_262145.f_20594))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		case 11:
			if (Global_262145.f_20595)
			{
				if (func_244(Global_262145.f_20596))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		case 12:
			if (Global_262145.f_20597)
			{
				if (func_244(Global_262145.f_20598))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		case 13:
			if (Global_262145.f_20599)
			{
				if (func_244(Global_262145.f_20600))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		case 14:
			if (Global_262145.f_20601)
			{
				if (func_244(Global_262145.f_20602))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_243(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	if (!bParam2 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam2);
	}
	if (!bParam3 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam3);
	}
	UNK_0x6B012227B3921E18(bParam1);
	if (!bParam4)
	{
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	}
	else
	{
		Global_2513218 = { func_175(UNK_0xD803B885F5E47A62()) };
		if (UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
		{
			iVar1 = 0;
			if (UNK_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2513148.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = UNK_0x0D020422A92A2236(iVar2, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar1, 0, Global_2513148, UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), Global_1314034, Global_1314035, Global_1314036);
		}
		else
		{
			iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		}
	}
	func_212(8, bParam0, 1, bParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_244(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case joaat("CLO_GRM_U_19_0"):
		case joaat("CLO_GRF_U_25_0"):
			if (!func_249(15417, -1, -1))
			{
				func_248(15417, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case joaat("CLO_GRM_U_19_1"):
		case joaat("CLO_GRF_U_25_1"):
			if (!func_249(15418, -1, -1))
			{
				func_248(15418, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case joaat("CLO_GRF_U_26_0"):
			if (!func_249(15425, -1, -1))
			{
				func_248(15425, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case joaat("CLO_GRM_DECL_19"):
		case joaat("CLO_GRF_DECL_19"):
			if (!func_249(15405, -1, -1))
			{
				func_248(15405, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case joaat("CLO_GRF_DECL_20"):
			if (!func_249(15393, -1, -1))
			{
				func_248(15393, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case joaat("CLO_GRF_DECL_21"):
			if (!func_249(15409, -1, -1))
			{
				func_248(15409, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case joaat("CLO_GRM_DECL_22"):
		case joaat("CLO_GRF_DECL_22"):
			if (!func_249(15396, -1, -1))
			{
				func_248(15396, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case joaat("CLO_GRF_DECL_23"):
			if (!func_249(15412, -1, -1))
			{
				func_248(15412, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case joaat("CLO_GRM_DECL_24"):
		case joaat("CLO_GRF_DECL_24"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case joaat("CLO_GRF_DECL_25"):
			if (!func_249(15403, -1, -1))
			{
				func_248(15403, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case joaat("CLO_GRM_DECL_26"):
		case joaat("CLO_GRF_DECL_26"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case joaat("CLO_GRF_DECL_27"):
			if (!func_249(15389, -1, -1))
			{
				func_248(15389, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case joaat("CLO_GRM_DECL_28"):
		case joaat("CLO_GRF_DECL_28"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case joaat("CLO_GRF_DECL_29"):
			if (!func_249(15398, -1, -1))
			{
				func_248(15398, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case joaat("CLO_GRM_PH_6_0"):
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_249(15400, -1, -1))
			{
				func_248(15400, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case joaat("CLO_GRM_PH_6_1"):
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case joaat("CLO_GRM_PH_6_2"):
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_249(15408, -1, -1))
			{
				func_248(15408, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case joaat("CLO_GRM_PH_6_3"):
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case joaat("CLO_GRM_PH_6_4"):
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_249(15411, -1, -1))
			{
				func_248(15411, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case joaat("CLO_GRM_PH_6_5"):
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_249(15397, -1, -1))
			{
				func_248(15397, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case joaat("CLO_GRM_PH_6_6"):
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_249(15413, -1, -1))
			{
				func_248(15413, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case joaat("CLO_GRM_PH_6_7"):
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_249(15391, -1, -1))
			{
				func_248(15391, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case joaat("CLO_GRF_PH_6_8"):
			if (!func_249(15388, -1, -1))
			{
				func_248(15388, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case joaat("CLO_GRM_PH_6_9"):
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case joaat("CLO_GRF_PH_6_10"):
			if (!func_249(15401, -1, -1))
			{
				func_248(15401, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_000_M"):
		case joaat("MP_GUNRUNNING_AWARD_000_F"):
		case joaat("CLO_GRM_DECL_0"):
		case joaat("CLO_GRF_DECL_0"):
			if (!func_249(15394, -1, -1))
			{
				func_248(15394, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_001_M"):
		case joaat("MP_GUNRUNNING_AWARD_001_F"):
		case joaat("CLO_GRM_DECL_1"):
		case joaat("CLO_GRF_DECL_1"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_002_M"):
		case joaat("MP_GUNRUNNING_AWARD_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case joaat("CLO_GRF_DECL_2"):
			if (!func_249(15406, -1, -1))
			{
				func_248(15406, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_003_M"):
		case joaat("MP_GUNRUNNING_AWARD_003_F"):
		case joaat("CLO_GRM_DECL_3"):
		case joaat("CLO_GRF_DECL_3"):
			if (!func_249(15395, -1, -1))
			{
				func_248(15395, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_004_M"):
		case joaat("MP_GUNRUNNING_AWARD_004_F"):
		case joaat("CLO_GRM_DECL_4"):
		case joaat("CLO_GRF_DECL_4"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_005_M"):
		case joaat("MP_GUNRUNNING_AWARD_005_F"):
		case joaat("CLO_GRM_DECL_5"):
		case joaat("CLO_GRF_DECL_5"):
			if (!func_249(15410, -1, -1))
			{
				func_248(15410, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_006_M"):
		case joaat("MP_GUNRUNNING_AWARD_006_F"):
		case joaat("CLO_GRM_DECL_6"):
		case joaat("CLO_GRF_DECL_6"):
			if (!func_249(15407, -1, -1))
			{
				func_248(15407, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_007_M"):
		case joaat("MP_GUNRUNNING_AWARD_007_F"):
		case joaat("CLO_GRM_DECL_7"):
		case joaat("CLO_GRF_DECL_7"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_008_M"):
		case joaat("MP_GUNRUNNING_AWARD_008_F"):
		case joaat("CLO_GRM_DECL_8"):
		case joaat("CLO_GRF_DECL_8"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_009_M"):
		case joaat("MP_GUNRUNNING_AWARD_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case joaat("CLO_GRF_DECL_9"):
			if (!func_249(15414, -1, -1))
			{
				func_248(15414, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_010_M"):
		case joaat("MP_GUNRUNNING_AWARD_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case joaat("CLO_GRF_DECL_10"):
			if (!func_249(15415, -1, -1))
			{
				func_248(15415, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_011_M"):
		case joaat("MP_GUNRUNNING_AWARD_011_F"):
		case joaat("CLO_GRM_DECL_11"):
		case joaat("CLO_GRF_DECL_11"):
			if (!func_249(15399, -1, -1))
			{
				func_248(15399, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_012_M"):
		case joaat("MP_GUNRUNNING_AWARD_012_F"):
		case joaat("CLO_GRM_DECL_12"):
		case joaat("CLO_GRF_DECL_12"):
			if (!func_249(15404, -1, -1))
			{
				func_248(15404, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_013_M"):
		case joaat("MP_GUNRUNNING_AWARD_013_F"):
		case joaat("CLO_GRM_DECL_13"):
		case joaat("CLO_GRF_DECL_13"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_014_M"):
		case joaat("MP_GUNRUNNING_AWARD_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case joaat("CLO_GRF_DECL_14"):
			if (!func_249(15392, -1, -1))
			{
				func_248(15392, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_015_M"):
		case joaat("MP_GUNRUNNING_AWARD_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case joaat("CLO_GRF_DECL_15"):
			if (!func_249(15390, -1, -1))
			{
				func_248(15390, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_016_M"):
		case joaat("MP_GUNRUNNING_AWARD_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case joaat("CLO_GRF_DECL_16"):
			if (!func_249(15402, -1, -1))
			{
				func_248(15402, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_017_M"):
		case joaat("MP_GUNRUNNING_AWARD_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case joaat("CLO_GRF_DECL_17"):
			if (!func_249(15416, -1, -1))
			{
				func_248(15416, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_018_M"):
		case joaat("MP_GUNRUNNING_AWARD_018_F"):
		case joaat("CLO_GRM_DECL_18"):
		case joaat("CLO_GRF_DECL_18"):
			if (!func_247(209, -1))
			{
				func_245(209, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_019_M"):
		case joaat("MP_GUNRUNNING_AWARD_025_F"):
		case joaat("CLO_GRM_DECL_30"):
		case joaat("CLO_GRF_DECL_30"):
			if (!func_249(15426, -1, -1))
			{
				func_248(15426, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M"):
		case joaat("MP_GUNRUNNING_AWARD_020_F"):
		case joaat("CLO_GRM_DECL_31"):
		case joaat("CLO_GRF_DECL_31"):
			if (!func_249(15422, -1, -1))
			{
				func_248(15422, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M_ALT"):
		case joaat("MP_GUNRUNNING_AWARD_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_249(15423, -1, -1))
			{
				func_248(15423, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_021_M"):
		case joaat("MP_GUNRUNNING_AWARD_021_F"):
		case joaat("CLO_GRM_DECL_33"):
		case joaat("CLO_GRF_DECL_33"):
			if (!func_249(15421, -1, -1))
			{
				func_248(15421, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_022_M"):
		case joaat("MP_GUNRUNNING_AWARD_026_F"):
		case joaat("CLO_GRM_DECL_34"):
		case joaat("CLO_GRF_DECL_34"):
			if (!func_249(15427, -1, -1))
			{
				func_248(15427, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_023_M"):
		case joaat("MP_GUNRUNNING_AWARD_023_F"):
		case joaat("CLO_GRM_DECL_35"):
		case joaat("CLO_GRF_DECL_35"):
			if (!func_249(15419, -1, -1))
			{
				func_248(15419, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_024_M"):
		case joaat("MP_GUNRUNNING_AWARD_024_F"):
		case joaat("CLO_GRM_DECL_36"):
		case joaat("CLO_GRF_DECL_36"):
			if (!func_249(15420, -1, -1))
			{
				func_248(15420, 1, -1, 1);
				return true;
			}
			break;
	}
	return false;
}

void func_245(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_246())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_120(iParam2)];
		if (iVar0 != 0)
		{
			UNK_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

bool func_246()
{
	return true;
	return false;
}

bool func_247(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_120(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

int func_248(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_21();
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

bool func_249(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_21();
	}
	iVar1 = func_251(iParam0, bParam1);
	iVar2 = func_250(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_250(int iParam0)
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

int func_251(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_21();
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

int func_252(int iParam0)
{
	int iVar0;

	iVar0 = func_254(iParam0);
	return func_119(func_253(iVar0), -1, 0);
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		case 1:
			return 3952;
		case 2:
			return 3953;
		case 3:
			return 3954;
		case 4:
			return 3955;
		case 5:
			return 5456;
		default:
			break;
	}
	return 3951;
}

int func_254(int iParam0)
{
	int iVar0;

	if (func_255(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_255(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_256(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = func_254(iParam0);
	iVar1 = func_253(iVar0);
	bVar2 = (func_119(iVar1, -1, 0) + iParam1);
	func_117(iVar1, bVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_259(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_253(iVar0);
				iVar3 = (iVar3 + func_119(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_258(iVar4))
			{
				bVar5 = iVar4;
			}
			iVar4++;
		}
		func_257(9357, bVar5, -1, 1);
	}
}

var func_257(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam2 == -1)
	{
		bParam2 = func_21();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, bParam2);
		iVar1 = ((iParam0 - 384) - UNK_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, bParam2);
		iVar1 = ((iParam0 - 457) - UNK_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, false);
		iVar1 = ((iParam0 - 1281) - UNK_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, false);
		iVar1 = ((iParam0 - 1305) - UNK_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1393), 0, 1, bParam2);
		iVar1 = ((iParam0 - 1393) - UNK_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1361), 0, 0, false);
		iVar1 = ((iParam0 - 1361) - UNK_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, bParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - UNK_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, false, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - UNK_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, bParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - UNK_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, bParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - UNK_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, bParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - UNK_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, bParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - UNK_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, bParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - UNK_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, bParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - UNK_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - UNK_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, bParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - UNK_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, bParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - UNK_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, bParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - UNK_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, bParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - UNK_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, bParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - UNK_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, bParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - UNK_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, bParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - UNK_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, false, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - UNK_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = UNK_0xB8E1F940D68B4FA6(iVar0, bParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
		case 2:
			return 300000;
		case 3:
			return 500000;
	}
	return 0;
}

int func_259(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 == -1)
	{
		bParam1 = func_21();
	}
	iVar0 = 0;
	iVar1 = func_261(iParam0, bParam1);
	iVar2 = func_260(iParam0);
	if (0 != iVar1)
	{
		if (!UNK_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_260(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - UNK_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - UNK_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - UNK_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - UNK_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - UNK_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - UNK_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - UNK_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - UNK_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - UNK_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - UNK_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - UNK_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - UNK_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - UNK_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - UNK_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - UNK_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - UNK_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - UNK_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - UNK_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - UNK_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - UNK_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - UNK_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - UNK_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - UNK_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_261(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, bParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, bParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, false);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, false);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1361), 0, 0, false);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1393), 0, 1, bParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, false, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, bParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, bParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, bParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, bParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, bParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, bParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, bParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, false, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, bParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, bParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, bParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, bParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, bParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, bParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, bParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_262(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_148(iParam1);
	if (func_255(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_263(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_263(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_263(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_263(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_263(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_263(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_263(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_263(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_263(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_263(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_263(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_263(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
		}
	}
	return iVar0;
}

bool func_263(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_265(bParam0, iParam1))
	{
		iVar0 = func_264(bParam0, iParam1);
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_5, bParam2);
	}
	return false;
}

int func_264(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_255(iParam1) && bParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_265(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_255(iParam1) && bParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_266(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_10())
	{
		return 0;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_267(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;

	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_122())
			{
				Var0 = { func_150() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*iParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_262(UNK_0xD803B885F5E47A62(), Var0, *iParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18595);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18594);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*bParam2 = (*bParam2 + iVar7);
				iVar11 = func_231(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18585);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18584));
				iVar14 = ((*bParam2 / 100) * iVar13);
				*bParam2 = (*bParam2 + iVar14);
				if (uParam1->f_6)
				{
					*bParam2 = (*bParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_93(86);
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (func_205(0))
			{
				Var15 = { func_268(func_11()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*iParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_262(func_11(), Var15, *iParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18595));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18594));
				}
				*bParam2 = (*bParam2 + iVar22);
				fVar23 = Global_262145.f_18634;
				iVar24 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar23));
				*bParam2 = iVar24;
				iVar25 = Global_262145.f_18635;
				if (*bParam2 > iVar25)
				{
					*bParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_268(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_193;
}

void func_269(int iParam0, bool bParam1, var uParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	if (iParam0 == 167)
	{
		if (func_29(UNK_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_284();
			}
			func_283();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_29(UNK_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*bParam3 = (*bParam3 + func_275(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_182));
				}
				else
				{
					*iParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*iParam4 = (*iParam4 + uParam2->f_8);
					}
					iVar0 = func_274(*iParam4);
					iVar1 = (iVar0 * *iParam4);
					*bParam3 = (*bParam3 + iVar1);
					iVar3 = func_231(&uVar2);
					iVar4 = Global_262145.f_16141;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15350));
					iVar6 = ((*bParam3 / 100) * iVar5);
					*bParam3 = (*bParam3 + iVar6);
					if (uParam2->f_6)
					{
						*bParam3 = (*bParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_93(44);
					}
				}
				func_272(*bParam3);
				func_271();
				Global_2537071.f_5124.f_381 = *bParam3;
				iVar7 = 0;
				while (iVar7 < UNK_0x54EABC0DD106045B())
				{
					bVar8 = iVar7;
					if (UNK_0x81A93C8315C28F58(bVar8))
					{
						bVar9 = UNK_0x4B2BFE4A3BC248ED(bVar8);
						if (func_230(bVar9))
						{
							func_222(bVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_29(UNK_0xD803B885F5E47A62()))
		{
			func_270();
		}
	}
}

void func_270()
{
	bool bVar0;

	bVar0 = Global_2586255[func_21()];
	bVar0++;
	func_116(3667, bVar0, -1, 1);
}

void func_271()
{
	bool bVar0;

	bVar0 = Global_2586261[func_21()];
	bVar0++;
	func_116(3666, bVar0, -1, 1);
}

void func_272(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = Global_2586264[func_21()];
	bVar0 = (bVar0 + iParam0);
	func_116(3668, bVar0, -1, 1);
	if (func_259(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (bVar0 >= func_273(iVar1))
			{
				bVar2 = iVar1;
			}
			iVar1++;
		}
		func_257(7666, bVar2, -1, 1);
	}
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16274;
		case 2:
			return Global_262145.f_16275;
		case 3:
			return Global_262145.f_16276;
		case 4:
			return Global_262145.f_16277;
		case 5:
			return Global_262145.f_16278;
		case 6:
			return Global_262145.f_16279;
		case 7:
			return Global_262145.f_16280;
		case 8:
			return Global_262145.f_16281;
		case 9:
			return Global_262145.f_16282;
		case 10:
			return Global_262145.f_16283;
		case 11:
			return Global_262145.f_16284;
		case 12:
			return Global_262145.f_16285;
		case 13:
			return Global_262145.f_16286;
		case 14:
			return Global_262145.f_16287;
		case 15:
			return Global_262145.f_16288;
		case 16:
			return Global_262145.f_16289;
		case 17:
			return Global_262145.f_16290;
		case 18:
			return Global_262145.f_16291;
		case 19:
			return Global_262145.f_16292;
		case 20:
			return Global_262145.f_16293;
		case 21:
			return Global_262145.f_16294;
		case 22:
			return Global_262145.f_16295;
		case 23:
			return Global_262145.f_16296;
		case 24:
			return Global_262145.f_16297;
	}
	return 0;
}

int func_274(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_282(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_281(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_280(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_276(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_276(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_280(UNK_0x09AC81E49EA267F7(true, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_276(int iParam0)
{
	int iVar0;

	if (func_279(iParam0))
	{
		iVar0 = func_277(func_278(iParam0));
		return func_119(iVar0, -1, 0);
	}
	return 0;
}

int func_277(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_278(int iParam0)
{
	int iVar0;

	if (func_279(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_279(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

bool func_281(int iParam0, int iParam1)
{
	int iVar0;

	if (func_279(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_282(int iParam0)
{
	int iVar0;

	if (func_279(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_283()
{
	bool bVar0;

	bVar0 = Global_2586252[func_21()];
	bVar0++;
	Global_2586252[func_21()] = bVar0;
	func_116(3665, bVar0, -1, 1);
}

void func_284()
{
	bool bVar0;
	bool bVar1;

	bVar0 = Global_2586249[func_21()];
	bVar1 = Global_2586258[func_21()];
	bVar0++;
	bVar1++;
	Global_2586249[func_21()] = bVar0;
	Global_2586258[func_21()] = bVar1;
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_128 = bVar1;
	func_116(3663, bVar0, -1, 1);
	func_116(3664, bVar1, -1, 1);
}

void func_285()
{
	if (func_136())
	{
		Global_2451426.f_3074.f_134 = 0;
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
	}
}

void func_286()
{
	if (func_136())
	{
		if (Global_2451426.f_3074.f_134 < 10)
		{
			Global_2451426.f_3074.f_134++;
			Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

void func_287()
{
	if (func_136())
	{
		if (Global_2451426.f_3074.f_134 > 0)
		{
			Global_2451426.f_3074.f_134 = (Global_2451426.f_3074.f_134 - 1);
			Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

int func_288(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_28;
}

bool func_289(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return true;
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_95(1) && !func_205(1))
			{
				if (func_290(func_11()))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_290(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 26);
}

int func_291(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18281;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		case 170:
			return 0;
		case 171:
			return Global_262145.f_15051;
		case 172:
			return Global_262145.f_15067;
		case 173:
			return Global_262145.f_15010;
		case 166:
			return 0;
		case 179:
			return Global_262145.f_18289;
		case 180:
			return Global_262145.f_18164;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18172;
		case 185:
			return Global_262145.f_18181;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18377;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18394;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18241;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18425;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18303;
		case 205:
			return Global_262145.f_18412;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18270;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18407;
		case 211:
			return Global_262145.f_18371;
		case 214:
			return Global_262145.f_18965;
		case 215:
			return Global_262145.f_18975;
		case 216:
			return Global_262145.f_18985;
		case 217:
			return Global_262145.f_18994;
		case 218:
			return Global_262145.f_19003;
		case 219:
			return Global_262145.f_19019;
		case 241:
			return Global_262145.f_24090;
		case 242:
			return Global_262145.f_24086;
		case 248:
			return Global_262145.f_24089;
		case 244:
			return Global_262145.f_24087;
		case 239:
			return Global_262145.f_24091;
		case 240:
			return Global_262145.f_24092;
		case 243:
			return Global_262145.f_26299;
		default:
			break;
	}
	return 0;
}

int func_292(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18282;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		case 170:
			return Global_262145.f_14993;
		case 171:
			return Global_262145.f_15052;
		case 172:
			return Global_262145.f_15068;
		case 173:
			return Global_262145.f_15011;
		case 166:
			return 0;
		case 167:
			return Global_262145.f_17090;
		case 168:
			return Global_262145.f_17089;
		case 179:
			return Global_262145.f_18290;
		case 180:
			return Global_262145.f_18165;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18173;
		case 185:
			return Global_262145.f_18182;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18378;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18395;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18242;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18426;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18304;
		case 205:
			return Global_262145.f_18413;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18271;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18408;
		case 211:
			return Global_262145.f_18372;
		case 214:
			return Global_262145.f_18966;
		case 215:
			return Global_262145.f_18976;
		case 216:
			return Global_262145.f_18986;
		case 217:
			return Global_262145.f_18995;
		case 218:
			return Global_262145.f_19004;
		case 219:
			return Global_262145.f_19020;
		case 178:
			if (func_136())
			{
				return Global_262145.f_18843;
			}
			else if (bParam1)
			{
				return Global_262145.f_18844;
			}
			break;
		case 188:
			if (func_136())
			{
				return Global_262145.f_18927;
			}
			else if (bParam1)
			{
				return Global_262145.f_18928;
			}
			break;
		case 225:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21048;
				}
				else
				{
					return Global_262145.f_21049;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_21050;
			}
			break;
		case 226:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_21030;
			}
			break;
		case 227:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21040;
				}
				else
				{
					return Global_262145.f_21041;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_21042;
			}
			break;
		case 229:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22204;
				}
				else
				{
					return Global_262145.f_22205;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_22206;
			}
			break;
		case 230:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22300;
				}
				else
				{
					return Global_262145.f_22301;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_22302;
			}
			break;
		case 233:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22776;
				}
				else
				{
					return Global_262145.f_22777;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_22775;
			}
			break;
		case 241:
			return Global_262145.f_24097;
		case 242:
			return Global_262145.f_24093;
		case 244:
			return Global_262145.f_24094;
		case 248:
			return Global_262145.f_24096;
		case 239:
			return Global_262145.f_24098;
		case 240:
			return Global_262145.f_24099;
		case 237:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_23939;
				}
				else
				{
					return Global_262145.f_23940;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_23941;
			}
			break;
		case 238:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24050;
				}
				else
				{
					return Global_262145.f_24051;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_24052;
			}
			break;
		case 249:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24066;
				}
				else
				{
					return Global_262145.f_24067;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_24068;
			}
			break;
		case 243:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_26302;
				}
				else
				{
					return Global_262145.f_26303;
				}
			}
			else if (func_122())
			{
				return Global_262145.f_26302;
			}
			break;
		case 158:
			if (func_136() && !func_122())
			{
				if (func_290(UNK_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_122())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_293(int iParam0, float fParam1, float fParam2)
{
	bool bVar0;

	if (iParam0 == 157)
	{
		*fParam1 = 1f;
		*fParam2 = 1f;
		return;
	}
	if (func_294(iParam0))
	{
		if (!func_136())
		{
			*fParam1 = 1f;
			*fParam2 = Global_262145.f_12400;
		}
		else
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
		return;
	}
	if (func_28(UNK_0xD803B885F5E47A62(), 1))
	{
		if (func_92(iParam0))
		{
			*fParam1 = (Global_262145.f_18141 / 100f);
			*fParam2 = (Global_262145.f_18141 / 100f);
		}
		else if (iParam0 == 242)
		{
			*fParam1 = Global_262145.f_24100;
			*fParam2 = Global_262145.f_24100;
		}
		else if (iParam0 == 244)
		{
			*fParam1 = Global_262145.f_24101;
			*fParam2 = Global_262145.f_24101;
		}
		else if (iParam0 == 248)
		{
			*fParam1 = Global_262145.f_24103;
			*fParam2 = Global_262145.f_24103;
		}
		else if (iParam0 == 241)
		{
			*fParam1 = Global_262145.f_24104;
			*fParam2 = Global_262145.f_24104;
		}
		else if (iParam0 == 239)
		{
			*fParam1 = Global_262145.f_24105;
			*fParam2 = Global_262145.f_24105;
		}
		else if (iParam0 == 240)
		{
			*fParam1 = Global_262145.f_24106;
			*fParam2 = Global_262145.f_24106;
		}
		else
		{
			*fParam1 = Global_262145.f_12397;
			*fParam2 = Global_262145.f_12396;
		}
	}
	else if (func_92(iParam0))
	{
		*fParam1 = (Global_262145.f_18142 / 100f);
		*fParam2 = (Global_262145.f_18142 / 100f);
	}
	else if (iParam0 == 242)
	{
		*fParam1 = Global_262145.f_24107;
		*fParam2 = Global_262145.f_24107;
	}
	else if (iParam0 == 244)
	{
		*fParam1 = Global_262145.f_24108;
		*fParam2 = Global_262145.f_24108;
	}
	else if (iParam0 == 248)
	{
		*fParam1 = Global_262145.f_24110;
		*fParam2 = Global_262145.f_24110;
	}
	else if (iParam0 == 241)
	{
		*fParam1 = Global_262145.f_24111;
		*fParam2 = Global_262145.f_24111;
	}
	else if (iParam0 == 239)
	{
		*fParam1 = Global_262145.f_24112;
		*fParam2 = Global_262145.f_24112;
	}
	else if (iParam0 == 240)
	{
		*fParam1 = Global_262145.f_24113;
		*fParam2 = Global_262145.f_24113;
	}
	else
	{
		*fParam1 = Global_262145.f_12399;
		*fParam2 = Global_262145.f_12398;
	}
	bVar0 = func_60();
	if (bVar0 != func_10())
	{
		if (func_48(UNK_0xD803B885F5E47A62(), bVar0, 1))
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
	}
}

bool func_294(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return true;
		default:
			break;
	}
	return false;
}

bool func_295()
{
	if ((func_36(UNK_0xD803B885F5E47A62(), 21) || func_36(UNK_0xD803B885F5E47A62(), 22)) || func_300())
	{
		return true;
	}
	if (func_297())
	{
		func_296(22);
		return true;
	}
	return false;
}

void func_296(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_4), bParam0);
}

bool func_297()
{
	if (func_33(UNK_0xD803B885F5E47A62(), 0))
	{
		if (((func_26() && !func_299()) || func_22(UNK_0xD803B885F5E47A62(), 21)) || func_22(UNK_0xD803B885F5E47A62(), 25))
		{
			return true;
		}
		else
		{
			func_298(27);
		}
	}
	return false;
}

void func_298(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_4), bParam0);
}

bool func_299()
{
	return Global_1312418.f_1;
}

bool func_300()
{
	return func_247(358, -1);
}

bool func_301()
{
	return false;
}

void func_302()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;

	if (func_344())
	{
		return;
	}
	if (func_343())
	{
		func_336();
	}
	if (func_335())
	{
		func_334();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(UNK_0xD803B885F5E47A62(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 2) && !UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 4)) && !UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 3))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_82.f_10)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_82.f_10)
			{
				func_326(101, sVar0, sVar1, func_328(), func_327(UNK_0xD803B885F5E47A62()), func_37(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_325(87, func_37(), -1, sVar1, sVar0, 1, -1, 2, 0);
			}
		}
		else if (func_324() != UNK_0xD803B885F5E47A62())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(UNK_0xD803B885F5E47A62(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_82.f_10)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_82.f_10)
			{
				func_326(101, sVar0, sVar1, func_328(), func_327(UNK_0xD803B885F5E47A62()), func_324(), func_37(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_323(91, func_324(), func_37(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(UNK_0xD803B885F5E47A62(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_82.f_10)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_82.f_10)
			{
				func_326(101, "GB_WINNER", sVar1, func_328(), func_327(UNK_0xD803B885F5E47A62()), func_37(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_325(87, func_37(), -1, sVar1, "GB_WINNER", 1, -1, 2, 0);
			}
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(UNK_0xD803B885F5E47A62(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_304(88, sVar0, sVar1, 1, -1, 2, 1, 0);
		if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, 4) || func_31(func_37(), 1, 0))
		{
			if (UNK_0xD803B885F5E47A62() == func_60())
			{
				Var2.f_10 = func_60();
				Var2.f_2 = -475361280;
				func_303(Var2, func_46(func_37()));
			}
		}
	}
}

void func_303(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = UNK_0xD803B885F5E47A62();
	if (!bParam14 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Param0, 14, bParam14);
	}
}

int func_304(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_322(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_320(&(Var0.f_69), iParam7);
	}
	return func_305(&Var0);
}

int func_305(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_319(uParam0, uParam0->f_17);
	func_316(uParam0);
	if (func_84())
	{
		func_316(uParam0);
	}
	if (func_315(uParam0->f_1))
	{
		func_308();
		if (Global_2439138.f_2723[0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0 /*80*/].f_1 == 13 || Global_2439138.f_2723[0 /*80*/].f_1 == 53) || Global_2439138.f_2723[0 /*80*/].f_1 == 54) || Global_2439138.f_2723[0 /*80*/].f_1 == 58)
		{
			Global_2439138.f_2723[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1 /*80*/] = { Global_2439138.f_2723[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_308();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_320(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_307(uParam0->f_69, 128))
			{
				if (func_306(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_320(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_306(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return true;
		default:
			break;
	}
	return false;
}

bool func_307(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_308()
{
	bool bVar0;

	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_309();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_309()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_313(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_310(&(Global_2439138.f_3047.f_1));
}

void func_310(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
		}
		UNK_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		UNK_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!UNK_0x131F22FE6F47A65D(UNK_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (UNK_0x757EF87A33649210() && !func_312(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_311(0);
}

void func_311(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_312(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_313(var uParam0)
{
	func_314(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_314(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

bool func_315(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return true;
	}
	return false;
}

void func_316(var uParam0)
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_72 = func_317();
	}
}

int func_317()
{
	return 21;
}

bool func_318(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return true;
		default:
			break;
	}
	return false;
}

void func_319(var uParam0, bool bParam1)
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_10() || !func_9(bParam1, 0, 1))
	{
		return;
	}
	if (func_306(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_63(bParam1, -2, 0, 0, 0);
		}
	}
}

void func_320(var uParam0, int iParam1)
{
	func_321(uParam0, iParam1);
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_322(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_10();
	uParam1->f_18 = func_10();
	uParam1->f_19 = func_10();
	uParam1->f_20 = func_10();
	uParam1->f_1 = iParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_323(int iParam0, bool bParam1, bool bParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_322(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = bParam1;
	Var0.f_18 = bParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_305(&Var0);
}

bool func_324()
{
	return Local_82.f_3;
}

int func_325(int iParam0, bool bParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_322(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = bParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_320(&(Var0.f_69), iParam8);
	}
	return func_305(&Var0);
}

int func_326(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_322(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = bParam5;
	Var0.f_18 = bParam6;
	Var0.f_19 = bParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = iParam4;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_320(&(Var0.f_69), 4);
	return func_305(&Var0);
}

int func_327(bool bParam0)
{
	int iVar0;

	iVar0 = func_81(bParam0);
	if (iVar0 != -1)
	{
		return func_79(iVar0);
	}
	return 1;
}

bool func_328()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_27(UNK_0xD803B885F5E47A62());
	if (bVar0 != func_10())
	{
		if (bVar0 != UNK_0xD803B885F5E47A62())
		{
			if (((func_36(bVar0, 28) || func_36(UNK_0xD803B885F5E47A62(), 28)) || func_333(bVar0)) && !func_332(bVar0))
			{
				return func_330(bVar0, 0);
			}
			if (!UNK_0xDC30EF462887322E() && !UNK_0x05449BDA851F5199(0, -1, 1))
			{
				return func_330(bVar0, 0);
			}
		}
		bVar1 = func_329(&(Global_1628237[bVar0 /*615*/].f_11.f_104));
		if (UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			return func_330(bVar0, 0);
		}
		else
		{
			return bVar1;
		}
	}
	return "";
}

bool func_329(var uParam0)
{
	return uParam0;
}

char* func_330(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(bParam0, 1))
		{
			return func_331();
		}
	}
	return UNK_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_331()
{
	return UNK_0x19C9F30A7697B43C("GB_REST_ACCM");
}

bool func_332(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_175(bParam0) };
	if (UNK_0xDC30EF462887322E())
	{
		if (UNK_0x4DEB7B48DD0AABA4(0))
		{
			if (UNK_0x5B9BB2932920F9CD(&Var0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_333(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_10())
	{
		Var0 = { func_175(bParam0) };
		if (UNK_0x33A494591F2C1975() || UNK_0x0EFF6B4415DAF4A1())
		{
			if (UNK_0x4DEB7B48DD0AABA4(0))
			{
				return false;
			}
		}
		else if (UNK_0xDC30EF462887322E())
		{
			if (UNK_0x4DEB7B48DD0AABA4(0))
			{
				if (UNK_0x5B9BB2932920F9CD(&Var0))
				{
					return false;
				}
			}
		}
	}
	return true;
}

void func_334()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_320(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_335()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

void func_336()
{
	if (!func_342())
	{
		return;
	}
	if (!UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_337();
}

void func_337()
{
	func_339();
	func_338(0);
}

void func_338(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = UNK_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_339()
{
	if (!func_341())
	{
	}
	if (func_342())
	{
		UNK_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_340();
		UNK_0x35F2C6537D10DAEB();
	}
}

void func_340()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		case 0:
			return;
		case 1:
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		case 2:
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_52);
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		case 3:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 4:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 5:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 6:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 7:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 8:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 9:
			UNK_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		case 10:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		case 12:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 13:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_57);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 11:
			UNK_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		case 14:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 15:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_57);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 17:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		case 16:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 19:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 18:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_48));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		default:
			break;
	}
}

bool func_341()
{
	if (!func_342())
	{
		return false;
	}
	UNK_0x18B60B994182620C(&(Global_1312585.f_12));
	func_340();
	return UNK_0xB165082A56EE6E7F();
}

bool func_342()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

bool func_343()
{
	return func_342();
}

bool func_344()
{
	if (!func_345(1, 1, 1, 0) || func_621())
	{
		return true;
	}
	return false;
}

bool func_345(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_47(UNK_0xD803B885F5E47A62(), 29))
	{
		return false;
	}
	if (func_22(UNK_0xD803B885F5E47A62(), 21))
	{
		return false;
	}
	if (func_22(UNK_0xD803B885F5E47A62(), 25))
	{
		return false;
	}
	if (bParam2)
	{
		if (UNK_0x09BE1E6DF7B80B43())
		{
			return false;
		}
	}
	if (!func_393(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (bParam0)
	{
		if (UNK_0xF929B1A0A409FF93())
		{
			return false;
		}
	}
	if (func_391(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_390())
	{
		return false;
	}
	if (func_389())
	{
		return false;
	}
	if (func_388())
	{
		return false;
	}
	if (func_387())
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	if (func_385(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!func_383())
	{
		return false;
	}
	if (func_22(UNK_0xD803B885F5E47A62(), 0) || func_22(UNK_0xD803B885F5E47A62(), 3))
	{
		return false;
	}
	if ((func_22(UNK_0xD803B885F5E47A62(), 12) || func_22(UNK_0xD803B885F5E47A62(), 14)) || func_22(UNK_0xD803B885F5E47A62(), 13))
	{
		return false;
	}
	if (func_376(UNK_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_355())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (func_354())
		{
			return false;
		}
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_353(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_352())
	{
		return false;
	}
	if (func_351(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if ((func_350(UNK_0xD803B885F5E47A62()) && func_56(UNK_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return false;
	}
	if (func_349())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (func_348(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_347(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!func_124(UNK_0xD803B885F5E47A62()))
	{
		if (func_346(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

bool func_346(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_347(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("MP_M_FREEMODE_01") || iVar1 == joaat("MP_F_FREEMODE_01"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_348(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return true;
	}
	return false;
}

bool func_349()
{
	return Global_1676377.f_4303 != -1;
}

bool func_350(bool bParam0)
{
	if (bParam0 != func_10() && func_9(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

bool func_351(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return true;
	}
	return false;
}

bool func_352()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_353(bool bParam0)
{
	if (!func_9(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_354()
{
	return Global_98796.f_346 > 0;
}

bool func_355()
{
	int iVar0;

	iVar0 = func_32(UNK_0xD803B885F5E47A62());
	if (((func_375(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28) || func_374(UNK_0xD803B885F5E47A62())) || func_373(UNK_0xD803B885F5E47A62())) || func_368(UNK_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return true;
		}
	}
	if (func_366(UNK_0xD803B885F5E47A62()))
	{
		if (func_121(iVar0) || func_365(iVar0))
		{
			return true;
		}
	}
	if (func_364(UNK_0xD803B885F5E47A62()))
	{
		if (func_365(iVar0))
		{
			return true;
		}
	}
	if (func_363(UNK_0xD803B885F5E47A62()))
	{
		if (func_109(iVar0))
		{
			return true;
		}
	}
	if (func_362(UNK_0xD803B885F5E47A62()))
	{
		if (func_108(iVar0))
		{
			return true;
		}
	}
	if (func_361(UNK_0xD803B885F5E47A62()))
	{
		if (func_107(iVar0))
		{
			return true;
		}
	}
	if (func_360(UNK_0xD803B885F5E47A62()))
	{
		if (func_359(iVar0))
		{
			return true;
		}
	}
	if (func_358(UNK_0xD803B885F5E47A62(), 0))
	{
		if (func_357(iVar0))
		{
			if (func_58(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
		}
	}
	if (func_356(UNK_0xD803B885F5E47A62()))
	{
		if (func_99(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_356(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_357(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return true;
		default:
			break;
	}
	return false;
}

bool func_358(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TERBYTE"))
			{
				return true;
			}
		}
	}
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_10())
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

bool func_359(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_360(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_361(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_362(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_363(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_364(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

bool func_365(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return true;
		default:
			break;
	}
	return false;
}

bool func_366(int iParam0)
{
	if (func_367(Global_1590535[iParam0 /*876*/].f_274.f_28, -1))
	{
		return true;
	}
	return false;
}

bool func_367(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	return false;
}

bool func_368(int iParam0)
{
	if (func_369(Global_1590535[iParam0 /*876*/].f_274.f_28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_369(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_370(UNK_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_370(UNK_0xD803B885F5E47A62(), 0))
		{
			return false;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}
	return false;
}

bool func_370(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_10())
	{
		if (!func_372(Global_1590373))
		{
			return false;
		}
		if (bParam1)
		{
			if (UNK_0xD803B885F5E47A62() != Global_1590373)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_371(Global_1590373))
				{
					return true;
				}
			}
		}
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 24);
}

bool func_371(int iParam0)
{
	if (iParam0 != func_10())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return false;
}

bool func_372(int iParam0)
{
	if (iParam0 != func_10())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return false;
}

bool func_373(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_374(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

bool func_375(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}
	return false;
}

bool func_376(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if (func_374(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_364(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_373(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_363(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_362(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_361(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_382(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_360(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_381(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_358(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_380(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_356(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_379(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_378(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_377(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_377(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

bool func_378(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_379(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_380(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_381(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_382(bool bParam0)
{
	if (bParam0 != func_10())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_10())
			{
				return func_55(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_383()
{
	if (func_384() == 0)
	{
		return true;
	}
	return false;
}

int func_384()
{
	return Global_1312467.f_18;
}

bool func_385(int iParam0)
{
	return func_386(iParam0);
}

bool func_386(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, false);
}

bool func_387()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

bool func_388()
{
	return Global_1312877;
}

bool func_389()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 5;
}

bool func_390()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, false);
}

bool func_391(int iParam0)
{
	if (func_392(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_392(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_385(iParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_393(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_142, 22);
}

void func_394(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 != func_10())
	{
		if (UNK_0x40B8C182D63932FC(bParam1))
		{
			if (bParam1 == UNK_0xD803B885F5E47A62())
			{
				iVar0 = 1;
			}
			else if (func_395(bParam1, UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
			UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
			Global_2537071.f_5124.f_383 = UNK_0xDD0E7998AE8AD485();
		}
	}
}

bool func_395(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (bParam0 != func_10() && bParam1 != func_10())
	{
		bVar0 = func_27(bParam0);
		if (bVar0 != func_10())
		{
			return bVar0 == func_27(bParam1);
		}
	}
	return false;
}

void func_396(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	var uVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	char cVar57[16];

	if (func_515(iParam2))
	{
		return;
	}
	bVar45 = -1f;
	bVar46 = -1;
	bVar47 = -1;
	bVar49 = false;
	bVar50 = false;
	uParam3->f_36 = 0;
	if (func_513() || iParam2 == 28)
	{
		if (func_468(iParam1, iParam2, uParam3, Global_1574185, 0, func_511(), bParam7))
		{
			func_467(1);
			if ((!func_466() && !func_465()) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true))
			{
				if (func_464())
				{
					func_463();
				}
				else
				{
					UNK_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_462(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_461(iParam1, 0, 0);
							if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
							{
								UNK_0x0674E58A79778E99(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							bVar52 = false;
							while (bVar52 < 32)
							{
								iVar1[bVar52] = -1;
								bVar52++;
							}
							bVar52 = false;
							while (bVar52 < 32)
							{
								if (func_9(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar35 = UNK_0x117658E336116132(bVar52);
									if (!func_19(bVar35, 0))
									{
										if ((func_460(bVar35) || Global_2425662[bVar35 /*421*/].f_236 != -1) || func_30(bVar35))
										{
											bVar44 = bVar35;
											if (func_29(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_459(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								bVar52++;
							}
						}
						if (!func_457(UNK_0xD803B885F5E47A62(), 0) && func_32(UNK_0xD803B885F5E47A62()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							if (func_456())
							{
								if (func_9(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar35 = UNK_0x117658E336116132(bVar52);
								}
								else
								{
									bVar35 = func_10();
								}
							}
							else
							{
								bVar35 = (uParam0[bVar52 /*42*/])->f_1;
							}
							if ((func_455(bVar35) && func_451(bVar35, iParam2)) && func_9(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
								Var38 = { func_446(bVar35) };
								if (bVar35 == UNK_0xD803B885F5E47A62())
								{
									uParam3->f_35 = bVar53;
								}
								StringCopy(&(uParam3->f_1), UNK_0x6E524813889AECF8(bVar35), 64);
								*(uParam4[bVar52 /*13*/]) = { func_175(bVar35) };
								iVar37 = func_440(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = UNK_0x5283D58F79627134(iVar37);
								}
								Global_1574185++;
								if ((uParam0[bVar52 /*42*/])->f_22 != -1f)
								{
									bVar45 = (uParam0[bVar52 /*42*/])->f_22;
								}
								if ((uParam0[bVar52 /*42*/])->f_31 != -1)
								{
									bVar46 = (uParam0[bVar52 /*42*/])->f_31;
								}
								if ((uParam0[bVar52 /*42*/])->f_41 != -1)
								{
									bVar47 = (uParam0[bVar52 /*42*/])->f_41;
								}
								bVar43 = (uParam0[bVar52 /*42*/])->f_9;
								if (((uParam0[bVar52 /*42*/])->f_9 != -1 || (uParam0[bVar52 /*42*/])->f_22 != -1f) || (uParam0[bVar52 /*42*/])->f_31 != -1)
								{
									if (!func_456())
									{
										bVar50 = true;
									}
								}
								if (iParam5 != -1)
								{
									func_435(&bVar43, &bVar45, (uParam0[bVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_434(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									bVar48 = (uParam0[bVar52 /*42*/])->f_2 + 1;
									if (iVar54 != bVar48)
									{
										iVar54 = bVar48;
									}
									else
									{
										bVar48 = -2;
									}
								}
								bVar51 = func_433(bVar35, 0);
								if (bVar34)
								{
									if (func_28(bVar35, 1) && iVar1[bVar44] != -1)
									{
										bVar53 = iVar1[bVar44];
									}
									else
									{
										bVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = bVar53;
								if ((uParam0[bVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&cVar57, "UW_TM", 16);
									StringIntConCat(&cVar57, (uParam0[bVar52 /*42*/])->f_39, 16);
								}
								if (func_432(iParam5))
								{
									func_431(bVar35, iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar43, bVar51, bVar50, bVar45, bVar43, bVar47, &cVar57, (uParam0[bVar52 /*42*/])->f_40, bVar48, bParam6);
								}
								else
								{
									func_431(bVar35, iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar43, bVar51, bVar50, bVar45, bVar46, bVar47, &cVar57, (uParam0[bVar52 /*42*/])->f_40, bVar48, bParam6);
								}
								UNK_0x5D96D8530B3D0904(&bVar49, bVar35);
								bVar53++;
							}
							bVar52++;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							bVar35 = UNK_0x117658E336116132(bVar52);
							if (func_9(bVar35, 0, 1) && !UNK_0xEAE0D21A50E6C7F4(bVar49, bVar35))
							{
								bVar35 = UNK_0x117658E336116132(bVar52);
							}
							else
							{
								bVar35 = func_10();
							}
							if (func_455(bVar35))
							{
								if (func_9(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
									Var38 = { func_446(bVar35) };
									*(uParam4[bVar52 /*13*/]) = { func_175(bVar35) };
									iVar37 = func_440(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = UNK_0x5283D58F79627134(iVar37);
									}
									Global_1574185++;
									bVar51 = func_433(bVar35, 1);
									if (bVar34)
									{
										if (func_28(bVar35, 1))
										{
											bVar53 = iVar1[bVar52];
										}
										else
										{
											bVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = bVar53;
									func_411(bVar35, UNK_0x6E524813889AECF8(bVar35), iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar51, bVar50);
									bVar53++;
								}
							}
							bVar52++;
						}
						if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							func_408(uParam3, iParam1, iParam2);
						}
						func_407(&(uParam3->f_21));
						func_406();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
						{
							func_405(uParam3, iParam1);
							func_404(iParam1, 0, 1);
							UNK_0x5D96D8530B3D0904(&(uParam3->f_33), 7);
						}
						func_405(uParam3, iParam1);
						if (!UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							UNK_0x5D96D8530B3D0904(&(uParam3->f_33), 11);
						}
						if (func_400(uParam3))
						{
							Global_1574406 = 1;
						}
						func_397(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (UNK_0x83D8570832F172A7(*iParam1))
					{
						UNK_0xD9ACBBA59FD5A09E(7);
						UNK_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						UNK_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_406();
			func_462(0);
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
			{
				UNK_0x0674E58A79778E99(&(uParam3->f_33), 7);
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 10))
			{
				UNK_0x0674E58A79778E99(&(uParam3->f_33), 10);
			}
		}
	}
	UNK_0xD59EF13BB60323B9();
}

void func_397(var uParam0)
{
	if (!func_399(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_407(&(uParam0->f_21));
		func_398(0);
	}
}

void func_398(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			case 1:
				break;
			case 2:
				break;
		}
	}
}

bool func_399(var uParam0)
{
	return uParam0->f_1;
}

bool func_400(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = UNK_0x117658E336116132(uParam0->f_37);
	if (bVar15 != func_10() && func_9(bVar15, 0, 1))
	{
		Var2 = { func_175(bVar15) };
		iVar1 = func_403(uParam0, uParam0->f_37);
		if (func_402(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (UNK_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_401(uParam0, iVar0, 2);
						}
					}
					else if (UNK_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_401(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (!UNK_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_401(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_401(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (!UNK_0x74684D5E87B13DBD(&Var2))
						{
							iVar16 = 1;
							func_401(uParam0, iVar0, 0);
						}
					}
					else if (!UNK_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_401(uParam0, iVar0, 0);
					}
					break;
			}
		}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_401(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

int func_403(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_404(int iParam0, bool bParam1, int iParam2)
{
	if (UNK_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		UNK_0x1200CC973A2399C8(bParam1);
		UNK_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (UNK_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			UNK_0x7E60D21B163E9D56();
		}
	}
}

void func_405(var uParam0, int iParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 10))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		UNK_0x3CAEA85DA607305E(uParam0->f_35);
		UNK_0x7E60D21B163E9D56();
		UNK_0x5D96D8530B3D0904(&(uParam0->f_33), 10);
	}
}

void func_406()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_407(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_408(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar0);
		if (bVar2 != func_10())
		{
			if (func_9(bVar2, 0, 1))
			{
				if (uParam0->f_38[bVar0 /*2*/].f_1 != -1)
				{
					bVar1 = func_410(uParam0->f_38[bVar0 /*2*/], 0, iParam2);
					func_409(iParam1, uParam0->f_38[bVar0 /*2*/].f_1, bVar1, Global_1590535[bVar0 /*876*/].f_211.f_6);
				}
			}
		}
		bVar0++;
	}
}

void func_409(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		if (UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_ICON"))
		{
			UNK_0x3CAEA85DA607305E(bParam1);
			UNK_0x3CAEA85DA607305E(bParam2);
			if (bParam2 == 65)
			{
				UNK_0x3CAEA85DA607305E(bParam3);
			}
			UNK_0x7E60D21B163E9D56();
		}
	}
}

int func_410(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		case 1:
			return 49;
		default:
			break;
	}
	return iVar0;
}

void func_411(bool bParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, var uParam5, char* sParam6, var uParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	char* sVar1;

	if (bParam4 >= func_430() && bParam4 < func_429())
	{
		bParam4 = (bParam4 % 16);
		iVar0 = bParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (UNK_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			UNK_0x3CAEA85DA607305E(bParam4);
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_428("");
			}
			else
			{
				UNK_0x3CAEA85DA607305E(bParam10);
			}
			func_428(bParam1);
			UNK_0x3CAEA85DA607305E(bParam11);
			if (uParam3->f_108 == 6)
			{
				func_428("");
			}
			else
			{
				UNK_0x3CAEA85DA607305E(65);
			}
			UNK_0x3CAEA85DA607305E(-1);
			func_428("");
			if (uParam3->f_108 == 6)
			{
				func_428("");
			}
			else
			{
				func_428(&uParam5);
			}
			func_416(uParam3, bParam0);
			UNK_0x024BC5F58A72410C(bParam9);
			UNK_0x024BC5F58A72410C(bParam9);
			if (func_415(uParam3))
			{
				func_414("DPAD_FRIEND");
			}
			else if (func_413(uParam3))
			{
				func_414("DPAD_FRIEND");
			}
			else if (func_412(uParam3))
			{
				func_414("DPAD_CREW");
			}
			else
			{
				func_414("");
			}
			UNK_0x7E60D21B163E9D56();
		}
	}
}

bool func_412(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 6);
}

bool func_413(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 5);
}

void func_414(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_415(var uParam0)
{
	if (func_413(uParam0) && func_412(uParam0))
	{
		return true;
	}
	return false;
}

void func_416(var uParam0, bool bParam1)
{
	if (func_427(bParam1))
	{
		UNK_0x3CAEA85DA607305E(121);
	}
	else if (func_420(bParam1))
	{
		UNK_0x3CAEA85DA607305E(122);
	}
	else if (((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam1 /*421*/].f_413, false))
	{
		UNK_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_417())
		{
			uParam0->f_36 = 0;
		}
		UNK_0x1200CC973A2399C8(uParam0->f_36);
	}
}

bool func_417()
{
	if (UNK_0xA14BB9332558B949())
	{
		if (func_418() || func_86())
		{
			return true;
		}
	}
	return false;
}

int func_418()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_86();
	}
	return func_419(Global_4456448.f_194990);
}

int func_419(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_420(bool bParam0)
{
	if ((func_9(bParam0, 0, 1) && func_421()) && func_6(bParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_421()
{
	if (func_426(UNK_0xD803B885F5E47A62()) || func_425())
	{
		if (!func_422(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

bool func_422(int iParam0)
{
	if (func_424(iParam0) == 236 || func_424(iParam0) == 150)
	{
		return func_423(iParam0);
	}
	return false;
}

bool func_423(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, 7);
	}
	return false;
}

int func_424(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

bool func_425()
{
	switch (func_32(UNK_0xD803B885F5E47A62()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return true;
		default:
			break;
	}
	return false;
}

bool func_426(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

bool func_427(bool bParam0)
{
	if (func_417())
	{
		if (func_9(bParam0, 0, 1))
		{
			return func_29(bParam0);
		}
	}
	if ((func_9(bParam0, 0, 1) && func_421()) && func_8(bParam0, 0))
	{
		return true;
	}
	return false;
}

void func_428(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_429()
{
	int iVar0;

	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

bool func_430()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_431(bool bParam0, int iParam1, var uParam2, bool bParam3, var uParam4, char* sParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	bool bVar0;
	char* sVar1;

	if (bParam3 >= func_430() && bParam3 < func_429())
	{
		bParam3 = (bParam3 % 16);
		bVar0 = bParam3 + 1;
		if (Global_1574187)
		{
			bVar0 += 16;
		}
		if (bParam19)
		{
			bVar0 = bParam18;
			if (bVar0 == -2)
			{
				bParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (UNK_0x83D8570832F172A7(*iParam1))
		{
			if (UNK_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				UNK_0x3CAEA85DA607305E(bParam3);
				if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_428("");
				}
				else
				{
					UNK_0x3CAEA85DA607305E(bParam9);
				}
				if (uParam2->f_108 == 6 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					func_414(bParam16);
				}
				else
				{
					func_428(&(uParam2->f_1));
				}
				UNK_0x3CAEA85DA607305E(bParam11);
				if (uParam2->f_108 == 6)
				{
					func_428("");
				}
				else
				{
					UNK_0x3CAEA85DA607305E(65);
				}
				if (bParam12 == 1)
				{
					UNK_0x3CAEA85DA607305E(bVar0);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(-1);
				}
				if (func_456())
				{
					func_428("");
				}
				else if (uParam2->f_108 == 6 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 5 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 7 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 8 && !UNK_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (bParam13 != -1f)
					{
						UNK_0x21994591120B91F0(bParam13, 1);
					}
					if (bParam10 != -1)
					{
						UNK_0x6D99DF8263D35CE5(bParam10);
					}
					UNK_0x6B012227B3921E18(&(uParam2->f_104));
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 9)
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_CASH");
					UNK_0xCBD015EC7E4226BC(bParam10, 1);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 10)
				{
					if (bParam10 == 0)
					{
						UNK_0x7ACC3006A87F8B39("FM_AE_CASH");
						UNK_0xCBD015EC7E4226BC(bParam10, 1);
						UNK_0x779B34565F4D71B1();
					}
					else
					{
						UNK_0x7ACC3006A87F8B39("FM_NG_CASH");
						UNK_0xCBD015EC7E4226BC(bParam10, 1);
						UNK_0x779B34565F4D71B1();
					}
				}
				else if (bParam15 > -1)
				{
					if (bParam15 == 0 && !UNK_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
					{
						func_414(&(uParam2->f_104));
					}
					else
					{
						func_428("");
					}
				}
				else if (bParam14 != -1)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam14, 6);
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam13 != -1f)
				{
					UNK_0x7ACC3006A87F8B39("NUMBER");
					UNK_0x21994591120B91F0(bParam13, 1);
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam10 != -1)
				{
					UNK_0x3CAEA85DA607305E(bParam10);
				}
				else
				{
					func_428("");
				}
				if (uParam2->f_108 == 6)
				{
					func_428("");
				}
				else
				{
					func_428(&uParam4);
				}
				func_416(uParam2, bParam0);
				if (bParam12 == 1 || UNK_0xEA6BC48857E0AC4C(bParam8))
				{
					func_428("");
					func_428("");
				}
				else
				{
					UNK_0x024BC5F58A72410C(bParam8);
					UNK_0x024BC5F58A72410C(bParam8);
				}
				if (func_415(uParam2))
				{
					func_414("DPAD_FRIEND");
				}
				else if (func_413(uParam2))
				{
					func_414("DPAD_FRIEND");
				}
				else if (func_412(uParam2))
				{
					func_414("DPAD_CREW");
				}
				else
				{
					func_414("");
				}
				UNK_0x7E60D21B163E9D56();
			}
		}
	}
}

bool func_432(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

int func_433(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_426(bParam0)) && !func_124(bParam0))
	{
		iVar0 = func_317();
	}
	iVar1 = func_81(bParam0);
	if (!iVar1 == -1)
	{
		return func_79(iVar1);
	}
	return iVar0;
}

char* func_434(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		case 2:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_435(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_439(iParam3))
	{
		*bParam1 = (func_436(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_432(iParam3))
	{
		*bParam1 = (func_436(iParam3, iParam2) / 1000f);
		return 1;
	}
	*bParam0 = iParam2;
	return 0;
}

float func_436(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_438(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_437(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_437(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_438(float fParam0)
{
	return (fParam0 / 0.3048f);
}

bool func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

int func_440(bool bParam0)
{
	int iVar0;

	iVar0 = func_443(bParam0);
	if (iVar0 == -1)
	{
		func_441(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_441(bool bParam0, bool bParam1)
{
	if (!func_9(bParam0, 0, 1))
	{
		return;
	}
	if (func_443(bParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (bParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_442(bParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = bParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

bool func_442(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_443(bool bParam0)
{
	int iVar0;

	if (!func_9(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == bParam0)
		{
			if (UNK_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && UNK_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_444(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_444(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (UNK_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, UNK_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			UNK_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		UNK_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_445(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_445(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

struct<4> func_446(bool bParam0)
{
	char cVar0[32];

	if (func_9(bParam0, 0, 1))
	{
		Global_2513218 = { func_175(bParam0) };
		if (UNK_0xDC30EF462887322E())
		{
			if (func_402(Global_2513218))
			{
				if (!UNK_0x5B9BB2932920F9CD(&Global_2513218))
				{
					return cVar0;
				}
			}
		}
		else if (!UNK_0x4DEB7B48DD0AABA4(0))
		{
			return cVar0;
		}
		if (func_450(&Global_2513218))
		{
			Global_2513148 = { func_448(bParam0) };
			func_447(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_447(var uParam0, char* sParam1)
{
	UNK_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_448(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_449(bParam0))
	{
		return Global_1312909[UNK_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_175(bParam0) };
	UNK_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

bool func_449(bool bParam0)
{
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return true;
	}
	return false;
}

bool func_450(var uParam0)
{
	if (UNK_0x1963B11DE70153E0())
	{
		if (UNK_0x080E9D045AEE5605() && UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_451(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_454(bParam0) || func_453(bParam0)) || func_452(bParam0))
		{
			return false;
		}
	}
	if (!func_393(bParam0))
	{
		return false;
	}
	if ((!func_460(bParam0) && Global_2425662[bParam0 /*421*/].f_236 == -1) && !func_30(bParam0))
	{
		return false;
	}
	return true;
}

bool func_452(bool bParam0)
{
	if (func_454(bParam0))
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 8);
}

bool func_453(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 10) || UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 9));
	}
	return false;
}

bool func_454(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 2);
}

bool func_455(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_10())
	{
		return false;
	}
	if (func_19(bParam0, 0))
	{
		return false;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bVar0 /*876*/].f_142, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_456()
{
	switch (func_32(UNK_0xD803B885F5E47A62()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return true;
		default:
			break;
	}
	switch (func_424(UNK_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
	}
	if (func_124(UNK_0xD803B885F5E47A62()))
	{
		switch (func_32(UNK_0xD803B885F5E47A62()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
		}
	}
	if (func_422(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_457(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_458(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return true;
	}
	if (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_458(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return true;
		}
	}
	return false;
}

bool func_458(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return true;
		default:
			break;
	}
	return func_113(iParam0, 0);
	return false;
}

void func_459(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_9(UNK_0x117658E336116132(bVar0), 0, 1))
		{
			bVar1 = UNK_0x117658E336116132(bVar0);
			if (!func_19(bVar1, 0))
			{
				if ((func_460(bVar1) || Global_2425662[bVar1 /*421*/].f_236 != -1) || func_30(bVar1))
				{
					if (func_48(bVar1, bParam1, 0))
					{
						(*iParam0)[bVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		bVar0++;
	}
}

bool func_460(bool bParam0)
{
	if (func_9(bParam0, 0, 1))
	{
		if (func_9(UNK_0xD803B885F5E47A62(), 0, 1))
		{
			if (UNK_0xF816C4B5324CB295(bParam0, UNK_0xD803B885F5E47A62()) || func_32(bParam0) == 233)
			{
				return true;
			}
		}
	}
	return false;
}

void func_461(int iParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x3CAEA85DA607305E(bParam2);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_462(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_463()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true))
	{
		if (func_335())
		{
			func_334();
		}
	}
}

bool func_464()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, false) && func_335())
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true) && func_335())
	{
		return true;
	}
	return false;
}

bool func_465()
{
	if (func_335())
	{
		if (func_306(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_466()
{
	if (func_335())
	{
		if (func_318(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_467(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

bool func_468(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;

	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_510(iParam1);
	fVar7 = func_509();
	bVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_508())
		{
			if (func_507() > 0 && Global_1574187)
			{
				UNK_0xB8E3919889462ACD();
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				UNK_0x3584F71E5CA29322(18);
				if (UNK_0xFEBC1E4EC9E001F0())
				{
					UNK_0xE19C2AAC820D8ED5();
				}
				UNK_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_497())
		{
			func_496(iParam0, uParam2, 1);
			return false;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
	{
		func_496(iParam0, uParam2, 1);
		return false;
	}
	if (!func_399(&(uParam2->f_19)))
	{
		if (func_507() == 1)
		{
			func_495(bVar6, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_496(iParam0, uParam2, 0);
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_399(&(uParam2->f_19)) || bParam5)
	{
		if (UNK_0xFEBC1E4EC9E001F0())
		{
			UNK_0xE19C2AAC820D8ED5();
		}
		UNK_0x3584F71E5CA29322(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_507() == 0 && !bParam5))
		{
			func_496(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_494();
				if (iParam1 == 27 || iParam1 == 28)
				{
					UNK_0xB8E3919889462ACD();
				}
				UNK_0x3584F71E5CA29322(18);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, false))
			{
				if (bVar5 == 0)
				{
					func_494();
					if (iParam1 == 27 || iParam1 == 28)
					{
						UNK_0xB8E3919889462ACD();
					}
					UNK_0x3584F71E5CA29322(18);
				}
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				if (func_495(bVar6, iParam0, 0))
				{
					func_461(iParam0, 0, 0);
					bVar4 = func_492(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_490(iParam1) };
					if (bParam4)
					{
						func_487(iParam0, bVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_480(iParam0, func_484(uParam2), func_481(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						bVar9 = func_476(uParam2);
						if (!UNK_0xEA6BC48857E0AC4C(bParam6))
						{
							bVar9 = bParam6;
						}
						func_474(iParam0, bVar9, func_475(), -1);
					}
					else if (func_417())
					{
						uParam2->f_34 = Global_1574186;
						func_487(iParam0, bVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						bVar8 = func_469(iParam1);
						uParam2->f_34 = Global_1574186;
						func_487(iParam0, bVar4, "", 0, bVar8, Global_1574186, 1);
					}
					else
					{
						bVar8 = func_469(iParam1);
						func_487(iParam0, bVar4, &Var0, 1, bVar8, -1, 1);
					}
					UNK_0x5D96D8530B3D0904(&(uParam2->f_33), false);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, false))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						UNK_0x0674E58A79778E99(&(uParam2->f_33), false);
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_469(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_473())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 6;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 26:
			iVar0 = 21;
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 10;
			break;
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
		case 18:
			if (func_472(UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_471(UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_470(UNK_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_196())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_470(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_471(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_472(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_473()
{
	return Global_4456448.f_1 == 0;
}

void func_474(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_414(bParam1);
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		func_414("");
		if (bParam3 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam3);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_475()
{
	switch (func_32(UNK_0xD803B885F5E47A62()))
	{
		case 163:
			return "BD_SORT_1";
		case 160:
			return "BD_SORT_4";
		case 154:
			return "BD_SORT_3";
		case 155:
			return "BD_SORT_3";
	}
	return "";
}

char* func_476(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
		case 1:
			return "GR_DPD_F";
		case 2:
			return "GR_DPD_S";
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
		case 1:
			return "GR_DPD_B";
		case 2:
			return "GR_DPD_C";
		case 3:
			return "GR_DPD_D";
	}
	switch (func_32(UNK_0xD803B885F5E47A62()))
	{
		case 233:
			return "H2_DPAD_SET";
		case 180:
			return "GB_BIGUNLOAD_T";
		case 182:
			return "DEAL_DEALN";
		case 194:
			return "PI_BIK_13_0";
		case 189:
			return "PI_BIK_4_1";
		case 193:
			return "PI_BIK_13_1";
		case 205:
			return "PI_BIK_13_3";
		case 186:
			return "CELL_BIKER_CK";
		case 207:
			return "DV_SH_TITLE";
		case 208:
			return "BA_SH_TITLE";
		case 209:
			return "SHU_SH_TITLE";
		case 210:
			return "PI_BIK_13_4";
		case 183:
			return "CELL_BIKER_RESC";
		case 199:
			return "CELL_BIKER_SEAR";
		case 201:
			return "CELL_BIKER_STAN";
		case 142:
			return "PIM_MAGM210";
		case 163:
			return "PIM_MAGM608";
		case 160:
			return "PIM_MAGM604";
		case 154:
			return "PIM_MAGM602";
		case 155:
			return "PIM_MAGM603";
		case 148:
			if (func_478())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_205(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_205(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
		case 157:
			return "PIM_MAGM207";
		case 159:
			return "PIM_MAGM206";
		case 162:
			return "PIM_MAGM607";
		case 164:
			return "PIM_MAGM212";
		case 166:
			return "GB_DPAD_HEAD";
		case 167:
			return "GB_DPAD_BUY";
		case 168:
			return "GB_DPAD_SELL";
		case 169:
			return "GB_DPAD_DEF";
		case 170:
			return "GB_DPAD_AIR";
		case 171:
			return "GB_DPAD_CASH";
		case 172:
			return "GB_DPAD_SAL";
		case 173:
			return "GB_DPAD_FRA";
		case 178:
			return "VEX_TITLEa";
		case 188:
			return "VEX_TITLEb";
		case 218:
			return "FRT_MODE";
		case 217:
			return "FRT_TRNS";
		case 214:
			return "MODE_PLW";
		case 215:
			return "MODE_FUL";
		case 216:
			return "MODE_AA";
		case 219:
			return "MODE_VEL";
		case 220:
			return "MODE_RMP";
		case 221:
			return "MODE_STK";
		case 225:
			return "GR_TITLEL";
		case 226:
			return "GRS_TITLEL";
		case 227:
			return "GRD_TITLEL";
		case 195:
			return "GB_STEAL_T";
		case 198:
			return "SC_MENU_TITLE";
		case 190:
			return "GB_DPAD_BSEL";
		case 191:
			return "GB_DPAD_BDEF";
		case 185:
			return "GB_DPAD_GFH";
		case 197:
			return "GB_DPAD_JB";
		case 179:
			return "CELL_JOUST";
		case 200:
			return "CAG_BLIP";
		case 192:
			if (func_477(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

bool func_477(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

bool func_478()
{
	return (func_479() && func_62(func_60()));
}

bool func_479()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148;
}

void func_480(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_414(bParam1);
		}
		else if (func_424(UNK_0xD803B885F5E47A62()) == 133)
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		func_414("");
		if (bParam3 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam3);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_481(var uParam0)
{
	int iVar0;

	iVar0 = func_424(UNK_0xD803B885F5E47A62());
	if (func_483())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		case 132:
			return "FM_AE_SORT_5";
		case 133:
			switch (func_482())
			{
				case 0:
					return "FM_AE_SORT_2";
				case 1:
					return "FM_AE_SORT_2";
				case 2:
					return "FM_AE_SORT_3";
				case 3:
					return "FM_AE_SORT_2";
				case 4:
					return "FM_AE_SORT_2";
				case 5:
					return "FM_AE_SORT_2";
				case 6:
					return "FM_AE_SORT_2";
				case 7:
					return "FM_AE_SORT_13";
				case 8:
					return "FM_AE_SORT_4";
				case 9:
					return "FM_AE_SORT_2";
				case 10:
					return "FM_AE_SORT_2";
				case 11:
					return "FM_AE_SORT_2";
				case 12:
					return "FM_AE_SORT_2";
				case 13:
					return "FM_AE_SORT_2";
				case 14:
					return "FM_AE_SORT_5";
				case 15:
					return "FM_AE_SORT_9";
				case 16:
					return "FM_AE_SORT_9";
				case 17:
					return "FM_AE_SORT_9";
				case 18:
					return "FM_AE_SORT_9";
				default:
					break;
			}
			break;
		case 136:
			return "";
		case 138:
			return "";
		case 139:
			return "FM_AE_SORT_10";
		case 140:
			return "";
		case 141:
			return "FM_AE_SORT_5";
		case 144:
			return "FM_AE_SORT_1";
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_482()
{
	if (func_424(UNK_0xD803B885F5E47A62()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_483()
{
	return Global_1590408;
}

bool func_484(var uParam0)
{
	int iVar0;

	iVar0 = func_424(UNK_0xD803B885F5E47A62());
	if (func_483())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		case 132:
			if (func_486() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_486() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_482())
			{
				case 0:
					return "AMCH_0SLC";
				case 1:
					return "AMCH_1SLC";
				case 2:
					return "AMCH_2SLC";
				case 3:
					return "AMCH_3SLC";
				case 4:
					return "AMCH_4SLC";
				case 5:
					return "AMCH_5SLC";
				case 6:
					return "AMCH_6SLC";
				case 7:
					return "AMCH_7SLC";
				case 8:
					return "AMCH_8SLC";
				case 9:
					return "AMCH_12SLC";
				case 10:
					return "AMCH_13SLC";
				case 11:
					return "AMCH_15SLC";
				case 12:
					return "AMCH_16SLC";
				case 13:
					return "AMCH_23SLC";
				case 14:
					return "AMCH_9SLC";
				case 15:
					return "AMCH_19SLC";
				case 16:
					return "AMCH_20SLC";
				case 17:
					return "AMCH_21SLC";
				case 18:
					return "AMCH_22SLC";
				default:
					break;
			}
			break;
		case 136:
			return "PIM_TA10";
		case 138:
			return "PIM_TA4";
		case 139:
			return "PIM_TA5";
		case 140:
			return "PIM_TA3";
		case 141:
			return "PIM_TA8";
		case 144:
			return "PIM_TA2";
		case 129:
			if (func_485() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_485()
{
	return Global_2537071.f_5048;
}

int func_486()
{
	if (func_424(UNK_0xD803B885F5E47A62()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_487(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_428(bParam1);
		}
		else if (bParam5 != -1)
		{
			UNK_0x7ACC3006A87F8B39(bParam1);
			UNK_0x6D99DF8263D35CE5(bParam5);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			func_414(bParam1);
		}
		if (func_508() && bParam6)
		{
			if (func_489())
			{
				bVar0 = 2;
				bVar1 = 2;
			}
			else
			{
				bVar0 = true;
				bVar1 = 2;
			}
			UNK_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			UNK_0x6D99DF8263D35CE5(bVar0);
			UNK_0x6D99DF8263D35CE5(bVar1);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			func_414(bParam2);
		}
		if (bParam4 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam4);
			if (func_488(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x3CAEA85DA607305E(166);
			}
			else if (func_84())
			{
				UNK_0x3CAEA85DA607305E(220);
			}
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_488(int iParam0)
{
	if (func_472(iParam0) || func_471(iParam0))
	{
		return true;
	}
	return false;
}

bool func_489()
{
	return Global_1574187;
}

struct<4> func_490(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_491(UNK_0xD803B885F5E47A62()) || func_470(UNK_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_417() && UNK_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_491(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

bool func_492(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	if (iParam0 == 20 && (!func_417() || UNK_0xEA6BC48857E0AC4C(bParam1)))
	{
		sVar0 = func_493();
		return sVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return bParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
			case 1:
				return "HUD_LBD_TDM";
			case 5:
				return "HUD_LBD_GRCE";
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
			case 7:
				return "HUD_LBD_BRCE";
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
			case 3:
				return "HUD_LBD_HRD";
			case 22:
				return "HUD_LBD_SHOO";
		}
	}
	return bParam1;
}

char* func_493()
{
	if (UNK_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (UNK_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (UNK_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (UNK_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_494()
{
	Global_42351 = 1;
}

bool func_495(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return UNK_0x83D8570832F172A7(*iParam1);
}

void func_496(int iParam0, var uParam1, bool bParam2)
{
	UNK_0x0674E58A79778E99(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_406();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_399(&(uParam1->f_19)))
		{
			func_407(&(uParam1->f_19));
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4592), 5);
		}
	}
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0xE17FDF9E3068281B(iParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_33, false))
	{
		UNK_0x0674E58A79778E99(&(uParam1->f_33), false);
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
}

bool func_497()
{
	if (func_506())
	{
		return false;
	}
	if (func_389())
	{
		return false;
	}
	if (!func_504())
	{
		return false;
	}
	if (!func_383())
	{
		return false;
	}
	if (func_503(8, -1))
	{
		return false;
	}
	if (func_507() == 2)
	{
		return false;
	}
	if (Global_2537071.f_4543)
	{
		return false;
	}
	if (func_387())
	{
		return false;
	}
	else if (!func_392(UNK_0xD803B885F5E47A62(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_502(1) || func_500(1)) || Global_22211.f_124) || Global_22211)
	{
		return false;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (func_499() && Global_1695468 == 2)
	{
		return false;
	}
	if (func_17(UNK_0xD803B885F5E47A62()) && !func_499())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (Global_1662011)
	{
		return false;
	}
	if (func_206(0))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (Global_1370230)
	{
		return false;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return false;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return false;
	}
	if (func_498(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return false;
	}
	return true;
}

bool func_498(int iParam0)
{
	if (iParam0 == func_10())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_499()
{
	return (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && UNK_0xEAE0D21A50E6C7F4(Global_1695469, false));
}

bool func_500(bool bParam0)
{
	if (UNK_0xD6C3CB7DCE462DB4())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (func_501(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x06F8112AA79C53D9(0, 25) || UNK_0x06F8112AA79C53D9(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return false;
	}
	if (UNK_0x06F8112AA79C53D9(0, 19) || (!bParam0 && UNK_0x7FEE810EE9E768EB(0, 19)))
	{
		return true;
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (((UNK_0x06F8112AA79C53D9(0, 166) || UNK_0x06F8112AA79C53D9(0, 167)) || UNK_0x06F8112AA79C53D9(0, 168)) || UNK_0x06F8112AA79C53D9(0, 169))
		{
			return true;
		}
		if (!bParam0)
		{
			if (((UNK_0x7FEE810EE9E768EB(0, 166) || UNK_0x7FEE810EE9E768EB(0, 167)) || UNK_0x7FEE810EE9E768EB(0, 168)) || UNK_0x7FEE810EE9E768EB(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_501(bool bParam0)
{
	int iVar0;

	if (UNK_0x18AF0C72ABD5543B())
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_502(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_503(bool bParam0, int iParam1)
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

bool func_504()
{
	if (func_505())
	{
		return true;
	}
	if (UNK_0x757EF87A33649210())
	{
		return false;
	}
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749())
	{
		return false;
	}
	if (UNK_0x06980BB66EBA4D95())
	{
		return false;
	}
	return true;
}

bool func_505()
{
	return Global_1312440;
}

bool func_506()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_507()
{
	return Global_1377170.f_68;
}

bool func_508()
{
	if (Global_1574186 > 16)
	{
		return true;
	}
	return false;
}

float func_509()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - UNK_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_511()
{
	if (func_512(UNK_0xD803B885F5E47A62()))
	{
		return Global_1319101;
	}
	return false;
}

bool func_512(bool bParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
		if (func_19(bParam0, 0))
		{
			return UNK_0xB9BE6EF14AC6F8DE(bParam0);
		}
	}
	return false;
}

bool func_513()
{
	if (func_511())
	{
		return true;
	}
	if (func_452(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_483())
	{
		return true;
	}
	if (func_426(UNK_0xD803B885F5E47A62()))
	{
		switch (func_424(UNK_0xD803B885F5E47A62()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
			case 140:
				if (!func_514(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 129:
				if (!func_514(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 174:
				if (!func_514(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 175:
				return true;
		}
	}
	return false;
}

bool func_514(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 4);
}

bool func_515(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_426(UNK_0xD803B885F5E47A62()) && !func_124(UNK_0xD803B885F5E47A62())) && !func_422(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	if (iParam0 == 27)
	{
		if (func_33(UNK_0xD803B885F5E47A62(), 0) && func_124(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
		if (func_516(UNK_0xD803B885F5E47A62()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_516(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_426(bParam0) && !func_454(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 8));
	bVar2 = func_124(bParam0);
	bVar3 = func_26();
	bVar4 = func_295();
	if ((bVar1 && (func_423(bParam0) || func_518(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_35(bParam0)) && !func_517(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

bool func_517(bool bParam0)
{
	return func_36(bParam0, 19);
}

bool func_518(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, false);
	}
	return false;
}

void func_519()
{
	if (func_9(func_37(), 1, 1) && !UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(func_37()), 0))
	{
		func_520(151, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(func_37()), true), &uLocal_81, 1140457472 /* Float: 500f */, 1144750080 /* Float: 750f */, 0);
	}
}

void func_520(int iParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;
	float fVar1;

	if ((((func_426(UNK_0xD803B885F5E47A62()) && !func_454(UNK_0xD803B885F5E47A62())) && !UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 8)) && (func_423(UNK_0xD803B885F5E47A62()) || func_518(UNK_0xD803B885F5E47A62()))) || func_562(vParam1))
	{
		return;
	}
	Global_1674347 = { vParam1 };
	fVar0 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vParam1);
	func_558(iParam0, fVar0);
	if (UNK_0x798A3F1296751F46() && UNK_0x8BB17FEBE0394018() == 15)
	{
		if (func_35(UNK_0xD803B885F5E47A62()) || func_34(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0x70305AA977EFE679(1344549371))
			{
				UNK_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (UNK_0x70305AA977EFE679(1344549371))
		{
			UNK_0x64366F76B4845277(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_22(UNK_0xD803B885F5E47A62(), 21) || func_22(UNK_0xD803B885F5E47A62(), 25)))
		{
			func_557(vParam1, 1, 0);
		}
		if (!*iParam4 && func_9(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			*iParam4 = 1;
			if (func_556(iParam0))
			{
				UNK_0x51B096AAC60548C1(func_555(iParam0));
				if (func_554(iParam0, -1))
				{
					UNK_0x34D79252800B23FF(0);
					if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
					{
						UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 1);
						UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 1);
					}
					UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), false);
				}
			}
			if (func_553(iParam0))
			{
				fVar1 = func_552(iParam0);
				if (fVar1 != 1f)
				{
					func_549(fVar1);
					UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), true);
				}
			}
			if (!Global_2391045)
			{
				if (func_548(iParam0) && func_35(UNK_0xD803B885F5E47A62()))
				{
					func_546(1);
					func_545(2);
				}
			}
			func_296(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_36(UNK_0xD803B885F5E47A62(), 19))
			{
				func_298(19);
			}
		}
		if (*iParam4 && func_9(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			*iParam4 = 0;
			if (func_556(iParam0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, false))
				{
					UNK_0x51B096AAC60548C1(1f);
					UNK_0x34D79252800B23FF(5);
					UNK_0x0674E58A79778E99(&(Global_1674347.f_3), false);
				}
			}
			if (func_553(iParam0))
			{
				func_544();
				UNK_0x0674E58A79778E99(&(Global_1674347.f_3), true);
			}
			if (bParam7 && !func_426(UNK_0xD803B885F5E47A62()))
			{
				if (func_32(UNK_0xD803B885F5E47A62()) != 152)
				{
					func_522();
				}
			}
			if (func_206(2))
			{
				func_546(0);
				func_521(2);
			}
		}
	}
}

void func_521(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_45), bParam0);
}

void func_522()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_24), &Global_2409327, 2);
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_26), &Global_2409329, 19);
	func_542();
	func_525(1, 1, 0);
	func_523();
}

void func_523()
{
	func_524(0, 0);
}

void func_524(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_525(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_541();
	}
	if (!bParam2)
	{
		func_528(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
	}
	func_527(0);
	func_526();
}

void func_526()
{
	struct<6> Var0;

	if (Global_2405072.f_487.f_1 == UNK_0x0D0A574C76D769AC())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_527(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_528(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_540())
		{
			func_539();
		}
		Global_2405072.f_706.f_518 = UNK_0x0D0A574C76D769AC();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_537();
		func_532(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_529();
	}
}

void func_529()
{
	if (func_540() && !func_531())
	{
		func_539();
	}
	if (func_531())
	{
		func_530();
	}
	else
	{
		func_537();
		func_532(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_530()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

bool func_531()
{
	if ((Global_2405072.f_1744 && !UNK_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && UNK_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return true;
	}
	return false;
}

void func_532(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_10())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, false) && func_533())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = UNK_0x0D0A574C76D769AC();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

bool func_533()
{
	if ((((((func_32(UNK_0xD803B885F5E47A62()) == 229 || func_32(UNK_0xD803B885F5E47A62()) == 191) || func_536()) || func_535()) || func_347(UNK_0xD803B885F5E47A62())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_534(UNK_0xD803B885F5E47A62())))
	{
		return false;
	}
	return true;
}

int func_534(bool bParam0)
{
	if (func_423(bParam0))
	{
		return 1;
	}
	if (func_124(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_535()
{
	return Global_1574405;
}

bool func_536()
{
	if (Global_4456448 == 6)
	{
		return true;
	}
	return false;
}

void func_537()
{
	if (func_540() && !func_531())
	{
		func_539();
	}
	func_538();
	Global_2405072.f_706 = 0;
}

void func_538()
{
	int iVar0;
	struct<5> Var1;

	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_539()
{
	if (func_531())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

bool func_540()
{
	if ((Global_2405072.f_1745 && !UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && UNK_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return true;
	}
	return false;
}

void func_541()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_542()
{
	func_543();
	Global_2405072.f_2254 = 0;
}

void func_543()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_544()
{
	if (UNK_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == UNK_0x0D0A574C76D769AC() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

void func_545(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_45), bParam0);
}

void func_546(int iParam0)
{
	if (func_547() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_547()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

bool func_548(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return true;
		default:
			break;
	}
	return false;
}

void func_549(float fParam0)
{
	bool bVar0;

	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_550())
	{
		return;
	}
	bVar0 = (Global_2537071.f_5119 - fParam0);
	if (UNK_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == UNK_0x0D0A574C76D769AC() && UNK_0x755FF954DAE327E1(bVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = UNK_0x0D0A574C76D769AC();
}

int func_550()
{
	switch (func_16())
	{
		case 0:
			return func_551();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_551()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("FREEMODE");
		default:
			break;
	}
	return joaat("FREEMODE");
}

float func_552(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		default:
			break;
	}
	return 1f;
}

bool func_553(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_554(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return true;
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return true;
			}
			break;
		case 170:
		case 166:
		case 173:
			return true;
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return true;
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return true;
			}
			break;
	}
	return false;
}

float func_555(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		case 144:
			return 0f;
		case 185:
			return 0f;
		default:
			break;
	}
	return 1f;
}

bool func_556(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

void func_557(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

void func_558(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_561(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_559();
	}
}

void func_559()
{
	if (!func_560(UNK_0xD803B885F5E47A62()))
	{
		func_296(25);
	}
}

bool func_560(bool bParam0)
{
	return func_36(bParam0, 25);
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		case 142:
			return Global_262145.f_12510;
		case 157:
			return Global_262145.f_12477;
		case 159:
			return Global_262145.f_12460;
		case 162:
			return Global_262145.f_12571;
		case 173:
			return 100;
		case 170:
			return 100;
		default:
			break;
	}
	return -1;
}

bool func_562(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_563()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_564(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_564(int iParam0)
{
	struct<6> Var0;

	if (UNK_0x218F818E64020C17(1, iParam0, &Var0, 13))
	{
		if ((UNK_0xC844350D5D58C99A(Var0) && UNK_0xEC560E589DF8370E(Var0)) && UNK_0x940C1429253D3B1B(Var0) == UNK_0x9539D44F3E4492F6(func_37()))
		{
			if (Var0.f_5)
			{
				if (UNK_0xC844350D5D58C99A(Var0.f_1) && UNK_0xEC560E589DF8370E(Var0.f_1))
				{
					if (UNK_0x940C1429253D3B1B(Var0.f_1) == UNK_0x16F2683693E537C9())
					{
						UNK_0x5D96D8530B3D0904(&(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1), true);
					}
				}
			}
		}
	}
}

void func_565()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_80, 3))
	{
		if (func_9(func_37(), 1, 1) && UNK_0x40B8C182D63932FC(func_37()))
		{
			func_582(func_37(), func_583(6), 1, 0);
			func_580(func_37(), 432, 1, 0);
			func_578(func_37(), 1, 1, 0);
			func_577(func_37(), Global_262145.f_12355, 1, 0);
			func_574(func_37(), 1, 0);
			if (func_42() <= 1)
			{
				func_566(func_37(), 1, 7000);
			}
			UNK_0x5D96D8530B3D0904(&bLocal_80, 3);
		}
	}
}

void func_566(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (bParam0 == func_10())
	{
		return;
	}
	if (bParam2 > 200000)
	{
		bParam2 = 200000;
	}
	bVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2439138)
		{
		}
		else if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bVar0]))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2416079.f_370), bVar0);
			UNK_0x0674E58A79778E99(&(Global_2416079.f_375), bVar0);
			UNK_0xF412DD40DE84CE72(Global_2416079[bVar0], 1);
			UNK_0xF91C863A82DF022A(Global_2416079[bVar0], 250);
			func_567(bParam0);
			if (bParam2 < 0)
			{
				UNK_0x5D96D8530B3D0904(&(Global_2416079.f_375), bVar0);
			}
			else
			{
				Global_2416079.f_201[bVar0] = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam2);
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&(Global_2416079.f_370), bVar0);
			UNK_0x0674E58A79778E99(&(Global_2416079.f_375), bVar0);
			if (bParam2 < 0)
			{
				UNK_0x5D96D8530B3D0904(&(Global_2416079.f_375), bVar0);
			}
			else
			{
				Global_2416079.f_201[bVar0] = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam2);
			}
		}
	}
	if (!bParam1)
	{
		UNK_0x0674E58A79778E99(&(Global_2416079.f_370), bVar0);
		UNK_0x0674E58A79778E99(&(Global_2416079.f_375), bVar0);
		if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bVar0]))
		{
			func_567(bParam0);
			UNK_0xF412DD40DE84CE72(Global_2416079[bVar0], 0);
		}
	}
}

void func_567(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (func_9(bParam0, 0, 1))
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bVar0]))
		{
			Global_2416079.f_1501[bVar0] = func_568(bParam0);
			UNK_0x2A065371C9D96655(Global_2416079[bVar0], Global_2416079.f_1501[bVar0]);
		}
	}
}

int func_568(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;
	if (func_9(bParam0, 0, 1))
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bVar0]))
		{
			iVar1 = UNK_0x301901B13DC3365B(Global_2416079[bVar0]);
			if (UNK_0xEAE0D21A50E6C7F4(Global_2416079.f_386, bVar0) || UNK_0xEAE0D21A50E6C7F4(Global_2416079.f_385, bVar0))
			{
				return 1;
			}
			else if ((UNK_0xEAE0D21A50E6C7F4(Global_2416079.f_371, bVar0) || UNK_0xEAE0D21A50E6C7F4(Global_2416079.f_370, bVar0)) || UNK_0xEAE0D21A50E6C7F4(Global_2416079.f_388, bVar0))
			{
				return func_571(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_571(7);
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_571(11);
					case 254:
						if (UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(Global_2439138))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					case 271:
						if (UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(Global_2439138))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					case 163:
					case 164:
						if (func_78(Global_2439138, bParam0, -2, 0))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					case 303:
					case 418:
						return func_571(10);
					case 364:
						if (func_569(Global_2439138, bParam0, 1))
						{
							return func_571(10);
						}
						else
						{
							return func_571(5);
						}
						break;
					case 478:
					case 501:
					case 523:
					case 556:
						return func_571(10);
					case 417:
						if ((func_356(bParam0) || func_379(bParam0)) || func_378(bParam0))
						{
							if (func_569(Global_2439138, bParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_569(Global_2439138, bParam0, 1))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					case 256:
					case 268:
					default:
						if (func_569(Global_2439138, bParam0, 1))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
				}
			}
		}
	}
	return 1;
}

bool func_569(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_63(bParam0, -2, 0, 0, 0) == func_63(bParam1, -2, 0, 0, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (func_570(func_63(bParam0, -2, 0, 0, 0)) && func_570(func_63(bParam1, -2, 0, 0, 0)))
		{
			return true;
		}
	}
	return false;
}

int func_570(int iParam0)
{
	if (iParam0 == func_69(1) || iParam0 == func_69(0))
	{
		return 1;
	}
	return 0;
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_573())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_572(iParam0);
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
		case 5:
			return 8;
		case 6:
			return 7;
		case 8:
			return 6;
		case 7:
			return 4;
		case 4:
		case 11:
			return 2;
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
	}
	return 1;
}

bool func_573()
{
	int iVar0;

	iVar0 = UNK_0x08067D4957B73C02(Global_2439138);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iVar0 /*15700*/].f_9568, 4);
	}
	return false;
}

void func_574(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;

	if (func_576(bParam0))
	{
		return;
	}
	func_575(&(Global_2416079.f_720[bParam0]), &(Global_2416079.f_1083[bParam0]), &(Global_2416079.f_393), bParam1, bParam0, bParam2, &uVar0);
}

bool func_575(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		if (!UNK_0x1727A44C562FBED2(*uParam1) || *uParam1 == UNK_0x0D0A574C76D769AC())
		{
			*uParam1 = UNK_0x0D0A574C76D769AC();
			*uParam0 = UNK_0x0D0A574C76D769AC();
		}
	}
	if (!UNK_0x1727A44C562FBED2(*uParam0) || *uParam0 == UNK_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam4))
			{
				*bParam6 = 1;
				UNK_0x5D96D8530B3D0904(bParam2, bParam4);
			}
			*uParam0 = UNK_0x0D0A574C76D769AC();
		}
		else
		{
			if (UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam4))
			{
				*bParam6 = 1;
				UNK_0x0674E58A79778E99(bParam2, bParam4);
			}
			if (*uParam1 == UNK_0x0D0A574C76D769AC())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return true;
	}
	else if (UNK_0x1727A44C562FBED2(*uParam1) && !*uParam1 == UNK_0x0D0A574C76D769AC())
	{
	}
	return false;
}

bool func_576(bool bParam0)
{
	if (bParam0 == func_10())
	{
		return true;
	}
	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_550())
	{
		return true;
	}
	return false;
}

void func_577(bool bParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_576(bParam0))
	{
		return;
	}
	if (func_575(&(Global_2416079.f_753[bParam0]), &(Global_2416079.f_1116[bParam0]), &(Global_2416079.f_392), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_555[bParam0] = fParam1;
		}
	}
}

void func_578(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_576(bParam0))
	{
		return;
	}
	if (func_575(&(Global_2416079.f_819[bParam0]), &(Global_2416079.f_1182[bParam0]), &(Global_2416079.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_579(bParam0, bParam2);
	}
}

void func_579(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_2416079.f_368), bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_2416079.f_368), bParam0);
	}
	if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bParam0]))
	{
		if (bParam1)
		{
			UNK_0x6ABCCE651368DB93(Global_2416079[bParam0], false);
		}
		else
		{
			UNK_0x6ABCCE651368DB93(Global_2416079[bParam0], true);
		}
	}
}

void func_580(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (func_576(bParam0))
	{
		return;
	}
	if (func_575(&(Global_2416079.f_588[bParam0]), &(Global_2416079.f_951[bParam0]), &(Global_2416079.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_581();
		}
	}
}

void func_581()
{
	Global_2416079.f_1614 = 1;
}

void func_582(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_576(bParam0))
	{
		return;
	}
	if (func_575(&(Global_2416079.f_621[bParam0]), &(Global_2416079.f_984[bParam0]), &(Global_2416079.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[bParam0] = iParam1;
		}
	}
}

int func_583(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (bParam0)
	{
		case 1:
			return 4;
		case 0:
			return 4;
		case 6:
			return 59;
		case 18:
			return 2;
		case 13:
			return 5;
		case 116:
			return 38;
		case 28:
			return 6;
		case 29:
			return 7;
		case 30:
			return 8;
		case 31:
			return 9;
		case 32:
			return 10;
		case 33:
			return 11;
		case 34:
			return 12;
		case 35:
			return 13;
		case 36:
			return 14;
		case 37:
			return 15;
		case 38:
			return 16;
		case 39:
			return 17;
		case 40:
			return 18;
		case 41:
			return 19;
		case 42:
			return 20;
		case 43:
			return 21;
		case 44:
			return 22;
		case 45:
			return 23;
		case 46:
			return 24;
		case 47:
			return 25;
		case 48:
			return 26;
		case 49:
			return 27;
		case 50:
			return 28;
		case 51:
			return 29;
		case 52:
			return 30;
		case 53:
			return 31;
		case 54:
			return 32;
		case 55:
			return 33;
		case 56:
			return 34;
		case 57:
			return 35;
		case 58:
			return 36;
		case 59:
			return 37;
		case 9:
			return 57;
		case 10:
			return 53;
		case 118:
			return 57;
		case 14:
			return 56;
		case 3:
			return 55;
		case 21:
			return 50;
		case 15:
			return 51;
		case 20:
			return 52;
		case 11:
			return 54;
		case 23:
			return 58;
		case 12:
			return 60;
		case 24:
			return 61;
		case 4:
			return 62;
		default:
			break;
	}
	UNK_0xA402F6C87C08815C(bParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_584()
{
	bool bVar0;

	if (func_344())
	{
		if (func_343())
		{
			func_336();
		}
		return;
	}
	bVar0 = "GBTER_KILL";
	if (func_6(UNK_0xD803B885F5E47A62(), 1))
	{
		bVar0 = "GBTER_B_KILL";
		if (Local_82.f_10)
		{
			bVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_591(bVar0))
	{
		func_585(bVar0, func_37(), 1, 0);
	}
}

void func_585(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_586(bParam0, UNK_0x6E524813889AECF8(bParam1), bParam3, 1);
}

int func_586(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(sParam1) > 63)
	{
		return 0;
	}
	if (func_590(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_337();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_589();
	func_588(bParam2);
	func_587();
	return 1;
}

void func_587()
{
	UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), true);
}

void func_588(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), false);
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_1312585.f_59), false);
}

void func_589()
{
	Global_1312585.f_10 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
}

bool func_590(bool bParam0, bool bParam1)
{
	if (!func_342())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return false;
	}
	if (!UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12)))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam1) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

bool func_591(bool bParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (!func_342())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		if (UNK_0x7724E025FD444F45(bParam0) > 63)
		{
			return false;
		}
	}
	else if (UNK_0x7724E025FD444F45(bParam0) > 23)
	{
		return false;
	}
	return func_592(bParam0);
}

bool func_592(bool bParam0)
{
	if (!func_342())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_593(bParam0);
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_593(bool bParam0)
{
	if (!func_342())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

void func_594()
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (func_344())
	{
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_82.f_1, false))
	{
		if (func_399(&(Local_82.f_4)))
		{
			iVar1 = (func_5() - func_599(&(Local_82.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_598(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(UNK_0xD803B885F5E47A62(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_595(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_595(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_595(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_597(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_596(7, bVar0);
		Global_1378678.f_4562[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[bVar0] = iParam2;
		Global_1378678.f_4562.f_216[bVar0] = iParam3;
		Global_1378678.f_4562.f_183[bVar0] = iParam4;
		Global_1378678.f_4562.f_194[bVar0] = iParam5;
		Global_1378678.f_4562.f_249[bVar0] = iParam6;
		Global_1378678.f_4562.f_260[bVar0] = iParam7;
		Global_1378678.f_4562.f_205[bVar0] = iParam8;
		Global_1378678.f_4562.f_314[bVar0] = iParam9;
		Global_1378678.f_4562.f_325[bVar0] = iParam10;
		Global_1378678.f_4562.f_357[bVar0] = iParam11;
		Global_1378678.f_4562.f_238[bVar0] = iParam12;
		Global_1378678.f_4562.f_271[bVar0] = iParam13;
		Global_1378678.f_4562.f_368[bVar0] = iParam14;
		Global_1378678.f_4562.f_379[bVar0] = iParam15;
		Global_1378678.f_4562.f_390[bVar0] = iParam16;
		Global_1378678.f_4562.f_227[bVar0] = iParam17;
	}
}

void func_596(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_597(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

int func_598(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_599(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0);
}

void func_600()
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	bool bVar3;
	char* sVar4;
	char* sVar5;

	if (func_344())
	{
		return;
	}
	if (UNK_0xD803B885F5E47A62() != func_60())
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_80, false))
		{
			if (!func_335())
			{
				bVar0 = "GBTER_START";
				if (func_6(UNK_0xD803B885F5E47A62(), 1))
				{
					bVar0 = "GBTER_BSTART";
					if (Local_82.f_10)
					{
						bVar0 = "GBTER_AB_START";
					}
				}
				func_602(bVar0, UNK_0x6E524813889AECF8(func_37()), 0, -1);
				func_601(1);
				UNK_0x5D96D8530B3D0904(&bLocal_80, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(UNK_0xD803B885F5E47A62(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_82.f_10)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_334();
			func_325(86, func_37(), -1, sVar2, sVar1, 1, -1, 2, 0);
			UNK_0x5D96D8530B3D0904(&(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1), false);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bLocal_80, false))
	{
		if (!func_335())
		{
			bVar3 = "GBTER_BOSS";
			if (func_6(UNK_0xD803B885F5E47A62(), 1))
			{
				bVar3 = "GBTER_BBOSS";
				if (Local_82.f_10)
				{
					bVar3 = "GBTER_AB_BOSS";
				}
			}
			func_602(bVar3, UNK_0x6E524813889AECF8(func_37()), 0, -1);
			UNK_0x5D96D8530B3D0904(&bLocal_80, 2);
			func_601(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(UNK_0xD803B885F5E47A62(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_82.f_10)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_334();
		func_325(86, func_37(), -1, sVar5, sVar4, 1, -1, 2, 0);
		UNK_0x5D96D8530B3D0904(&(Local_93[UNK_0x57270EE11514DC67() /*4*/].f_1), false);
	}
	UNK_0x5D96D8530B3D0904(&bLocal_80, false);
}

void func_601(bool bParam0)
{
	bool bVar0;

	bVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_205(1))
	{
		bVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (bParam0 && !func_335())
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Boss_Message_Orange", bVar0, 0);
	}
}

void func_602(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	if (!bParam2 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam2);
	}
	UNK_0xD06AC7C87A34A6AD(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

void func_603(int iParam0)
{
	Local_93[UNK_0x57270EE11514DC67() /*4*/].f_2 = iParam0;
}

void func_604(bool bParam0)
{
	if (bParam0)
	{
		if (!func_36(UNK_0xD803B885F5E47A62(), 9))
		{
			if (func_516(UNK_0xD803B885F5E47A62()) != 0)
			{
				func_296(9);
			}
		}
	}
	else if (func_36(UNK_0xD803B885F5E47A62(), 9))
	{
		func_298(9);
	}
}

void func_605(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	float fVar0;

	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 != iParam0)
	{
		func_619(-1);
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 = iParam0;
		if (func_618() != -1)
		{
			func_617(-1);
		}
		if (func_616() != -1)
		{
			func_615(-1);
		}
		func_614(iParam2);
		func_612(iParam0);
		if (!func_553(iParam0))
		{
			fVar0 = func_552(iParam0);
			if (fVar0 != 1f)
			{
				func_549(fVar0);
				UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), true);
			}
		}
		if (!func_556(iParam0) || bParam3)
		{
			if (func_554(iParam0, iParam2) && bParam3 == 1)
			{
				UNK_0x34D79252800B23FF(0);
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
				}
				UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), false);
			}
			else if (UNK_0x02A813E6E0380440() < 5)
			{
				UNK_0x51B096AAC60548C1(1f);
				UNK_0x34D79252800B23FF(5);
			}
		}
		if (func_26())
		{
			func_296(27);
		}
		if (bParam1)
		{
			if (!func_295())
			{
				func_546(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, true) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, false))
			{
				func_93(6);
			}
			func_611();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			UNK_0x15EA7F4313456B1D(3, false);
			UNK_0x15EA7F4313456B1D(5, false);
		}
		if (func_426(UNK_0xD803B885F5E47A62()) && func_35(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 8);
		}
		func_607();
		if (func_606(iParam0))
		{
			UNK_0x15EA7F4313456B1D(3, false);
			UNK_0x15EA7F4313456B1D(5, false);
			UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), 6);
		}
		Global_2537071.f_6579 = 0;
	}
}

bool func_606(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return true;
		default:
			break;
	}
	return false;
}

void func_607()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_610();
	bVar2 = func_27(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < 32)
	{
		bVar1 = UNK_0x117658E336116132(bVar0);
		if (UNK_0x40B8C182D63932FC(bVar1))
		{
			if (func_48(bVar1, bVar2, 1) || func_608(bVar1, UNK_0xD803B885F5E47A62()))
			{
				UNK_0xD463D0CE3DC66332(UNK_0xD803B885F5E47A62(), bVar1, bVar3);
				UNK_0xD463D0CE3DC66332(bVar1, UNK_0xD803B885F5E47A62(), bVar3);
			}
		}
		bVar0++;
	}
}

bool func_608(bool bParam0, bool bParam1)
{
	if (func_28(bParam0, 1) && func_28(bParam1, 1))
	{
		return (func_609(bParam0) == func_27(bParam1) || func_609(bParam1) == func_27(bParam0));
	}
	return false;
}

bool func_609(bool bParam0)
{
	if (func_28(bParam0, 1))
	{
		return Global_1628237[func_27(bParam0) /*615*/].f_11.f_484;
	}
	return func_10();
}

bool func_610()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_11();
	if (bVar0 != func_10())
	{
		if (func_9(bVar0, 0, 1))
		{
			bVar1 = bVar0;
			if (bVar1 != -1)
			{
				return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar1 /*615*/].f_1, 16);
			}
		}
	}
	return false;
}

void func_611()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, true))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), true);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 4);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 6))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 6);
	}
	UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), false);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 2);
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		UNK_0x34D79252800B23FF(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

void func_612(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_119(3791, -1, 0);
	bVar1 = func_613(iParam0);
	if (bVar1 != -1)
	{
		UNK_0x5D96D8530B3D0904(&bVar0, bVar1);
		func_117(3791, bVar0, -1, 1, 0);
	}
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		case 166:
			return 1;
		case 171:
			return 2;
		case 172:
			return 3;
		case 173:
			return 4;
		case 214:
			return 5;
		case 215:
			return 6;
		case 216:
			return 7;
		case 217:
			return 8;
		case 218:
			return 9;
		case 219:
			return 10;
		case 220:
			return 11;
		case 221:
			return 12;
		default:
			break;
	}
	return -1;
}

void func_614(int iParam0)
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	if (Global_1628237[iVar0 /*615*/].f_11.f_181 != iParam0)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_181 = iParam0;
	}
}

void func_615(int iParam0)
{
	if (Global_2537071.f_5124.f_340 != iParam0)
	{
		Global_2537071.f_5124.f_340 = iParam0;
	}
}

int func_616()
{
	return Global_2537071.f_5124.f_340;
}

void func_617(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_618()
{
	return Global_2537071.f_5124.f_339;
}

void func_619(int iParam0)
{
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_32 = iParam0;
}

int func_620()
{
	return Local_93[UNK_0x57270EE11514DC67() /*4*/].f_2;
}

bool func_621()
{
	if (func_622(151) || func_295())
	{
		return true;
	}
	return false;
}

bool func_622(int iParam0)
{
	if (!func_136() && !func_28(UNK_0xD803B885F5E47A62(), 1))
	{
		if (!func_35(UNK_0xD803B885F5E47A62()))
		{
			if (func_295())
			{
				return true;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		case 151:
			break;
		case 152:
			break;
	}
	return false;
}

void func_623(int iParam0, int iParam1)
{
	Local_93[iParam0 /*4*/] = iParam1;
}

bool func_624()
{
	return true;
}

int func_625()
{
	return Local_82;
}

int func_626(int iParam0)
{
	return Local_93[iParam0 /*4*/];
}

bool func_627()
{
	var uVar0;

	func_632(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_631())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_630())
	{
		return true;
	}
	if (func_629(159))
	{
		if (!func_628())
		{
			return true;
		}
	}
	if (func_629(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_550() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_550()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_628()
{
	return Global_2450632.f_598;
}

bool func_629(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_630()
{
	return Global_2460680;
}

bool func_631()
{
	return Global_2450632.f_593;
}

void func_632(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			UNK_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_633(iVar0);
					break;
				case 589125870:
					UNK_0x218F818E64020C17(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_633(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_9(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_634(bVar4, &bVar5))
						{
							UNK_0x920D29D81E211607(bVar4, vVar0.z);
						}
						if (bVar5)
						{
							UNK_0x046C362CF15F1935(&bVar4);
						}
					}
				}
			}
		}
	}
}

bool func_634(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(bParam0))
		{
			if (UNK_0x7DDF43006A714856(bParam0))
			{
				if (!UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(bParam0)))
				{
					UNK_0x73270B3C9CC833FD(bParam0, false, 1);
					*bParam1 = 1;
				}
			}
		}
		if (UNK_0x9C77D2D0559097F0(bParam0, 0))
		{
			if (UNK_0xAFE0D3608EDA7039(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_635()
{
	SYSTEM::WAIT(0);
}

void func_636()
{
	func_336();
	if (func_9(func_37(), 0, 1))
	{
		func_577(func_37(), 1f, 1, 0);
		func_45(func_46(func_37()), 0);
	}
	Global_1681924 = func_10();
	func_637(1, 0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_637(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1366905.f_1.f_108 != 0)
	{
		Global_1366905.f_1.f_108 = 0;
	}
	Global_1366905.f_1.f_109 = -1;
	Global_1366905.f_1.f_110 = -1;
	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 167 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 168)
	{
		func_691();
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 4);
	}
	if ((func_122() && iParam1 != 0) && Global_262145.f_16981)
	{
		if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 190 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 192)
		{
			func_671(UNK_0xD803B885F5E47A62(), iParam1, 1, 0);
		}
	}
	if (((Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 164 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 208) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 250) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 237)
	{
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
	}
	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 != -1)
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 = -1;
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 14) && !func_426(UNK_0xD803B885F5E47A62()))
		{
			func_546(0);
		}
	}
	else if (func_669(UNK_0xD803B885F5E47A62()) != -1)
	{
		func_619(-1);
	}
	func_668(func_10());
	if (func_206(16))
	{
		func_521(16);
	}
	func_665(0);
	func_614(-1);
	func_664();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_663(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_660(iVar1);
		iVar1++;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, false))
	{
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x34D79252800B23FF(5);
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), false);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 5))
	{
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 5);
	}
	iVar2 = func_659();
	if ((func_458(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_658(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_121(iVar2))
	{
		func_655(-1, 1);
	}
	else if (((((func_654(iVar2) || func_653(iVar2)) || func_652(iVar2)) || func_109(iVar2)) || func_108(iVar2)) || func_107(iVar2))
	{
	}
	else
	{
		func_655(-1, 1);
	}
	func_298(19);
	func_298(20);
	func_298(21);
	func_298(22);
	func_298(27);
	func_521(3);
	func_521(4);
	func_521(7);
	func_651();
	if (func_35(UNK_0xD803B885F5E47A62()))
	{
		func_604(0);
	}
	func_298(29);
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 = func_10();
	if (Global_2537071.f_5124.f_41 != 0)
	{
		Global_2537071.f_5124.f_41 = 0;
	}
	if (bParam0)
	{
		func_522();
	}
	if (!func_426(UNK_0xD803B885F5E47A62()))
	{
		func_544();
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), true);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 6))
	{
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 6);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 7))
	{
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 7);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 8))
	{
		func_650("IMPEXP_SELFDES", 0);
		func_640("IMPEXP_SELFDES");
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 8);
	}
	func_638(iVar2, 0);
}

void func_638(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
		{
			UNK_0x8BC9595FD2792B5D(func_639(iParam0));
			UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), 9);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
	{
		UNK_0x8910D3D58E0132B8(func_639(iParam0));
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 9);
	}
}

char* func_639(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		default:
			break;
	}
	return "";
}

void func_640(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!UNK_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), bParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_642();
					Global_111638.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_641(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					UNK_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

bool func_641(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return true;
	}
	return false;
}

void func_642()
{
	if (func_649(14))
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
		Global_19486 = func_643();
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

var func_643()
{
	func_644();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_644()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_647(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_646(UNK_0x16F2683693E537C9());
			if (func_645(iVar0) && (!func_649(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_645(Global_111638.f_2358.f_539.f_4321))
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

bool func_645(int iParam0)
{
	return iParam0 < 3;
}

int func_646(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_647(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_647(int iParam0)
{
	if (func_645(iParam0))
	{
		return func_648(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_648(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_649(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_650(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!UNK_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), bParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111638.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111638.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111638.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111638.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111638.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111638.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_651()
{
	if (func_560(UNK_0xD803B885F5E47A62()))
	{
		func_298(25);
	}
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_653(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_655(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_659();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_59(UNK_0xD803B885F5E47A62()) == UNK_0xD803B885F5E47A62())
			{
				Global_2514606.f_93[func_657(iParam0)] = 1;
			}
		}
		iVar0 = func_657(159);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(157);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(148);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(164);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(142);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(152);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(166);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(170);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(173);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(179);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(200);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(201);
		if (func_656(iVar0, Global_262145.f_12606, bParam1))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(182);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(183);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(185);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(186);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(180);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(195);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(197);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(198);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(207);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(208);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(209);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(214);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(215);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(216);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(217);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(218);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(219);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(220);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(221);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_656(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_36(UNK_0xD803B885F5E47A62(), 19) && !func_36(UNK_0xD803B885F5E47A62(), 20)) && !func_36(UNK_0xD803B885F5E47A62(), 9))
		{
			return false;
		}
	}
	if (Global_2514606.f_93[iParam0] == 1 && func_399(&(Global_2514606[iParam0 /*2*/])))
	{
		if (func_599(&(Global_2514606[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2514606.f_93[iParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		case 157:
			return 12;
		case 148:
			return 13;
		case 164:
			return 14;
		case 142:
			return 15;
		case 152:
			return 16;
		case 163:
			return 17;
		case 155:
			return 18;
		case 160:
			return 19;
		case 153:
			return 20;
		case 162:
			return 21;
		case 154:
			return 22;
		case 166:
			return 8;
		case 170:
			return 9;
		case 173:
			return 10;
		case 171:
			return 23;
		case 172:
			return 24;
		case 179:
			return 25;
		case 189:
			return 26;
		case 193:
			return 27;
		case 194:
			return 28;
		case 199:
			return 29;
		case 201:
			return 30;
		case 200:
			return 31;
		case 205:
			return 32;
		case 210:
			return 33;
		case 182:
			return 34;
		case 183:
			return 35;
		case 185:
			return 36;
		case 186:
			return 37;
		case 180:
			return 38;
		case 195:
			return 39;
		case 197:
			return 40;
		case 198:
			return 41;
		case 207:
			return 42;
		case 208:
			return 43;
		case 209:
			return 44;
		case 211:
			return 45;
		case 214:
			return 0;
		case 215:
			return 1;
		case 216:
			return 2;
		case 217:
			return 3;
		case 218:
			return 4;
		case 219:
			return 5;
		case 220:
			return 6;
		case 221:
			return 7;
		default:
			break;
	}
	return -1;
}

void func_658(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_659();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_2514606.f_93[func_657(iParam0)] = 1;
		}
		iVar0 = func_657(155);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(163);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(160);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(153);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(162);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(154);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(171);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(172);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(199);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(194);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(193);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(210);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(205);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(189);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(211);
		if (func_656(iVar0, Global_262145.f_12607, 0))
		{
			func_407(&(Global_2514606[iVar0 /*2*/]));
			func_4(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_659()
{
	bool bVar0;

	bVar0 = UNK_0xBB0808A181D4745C();
	if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_660(int iParam0)
{
	if (!func_661(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_337[iParam0 /*3*/], func_662(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_337[iParam0 /*3*/] = { func_662() };
	}
	if (!func_661(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_324[iParam0 /*3*/], func_662(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_324[iParam0 /*3*/] = { func_662() };
	}
}

bool func_661(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_662()
{
	vector3 vVar0;

	return vVar0;
}

void func_663(int iParam0)
{
	if (!func_661(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_150[iParam0 /*3*/], func_662(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_150[iParam0 /*3*/] = { func_662() };
	}
	if (!func_661(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_125[iParam0 /*3*/], func_662(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_125[iParam0 /*3*/] = { func_662() };
	}
}

void func_664()
{
	struct<20> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573902 = { Var0 };
	Global_1573902.f_13 = func_10();
	if (UNK_0xEAE0D21A50E6C7F4(Global_1573344, 3))
	{
		UNK_0x0674E58A79778E99(&Global_1573344, 3);
	}
}

void func_665(bool bParam0)
{
	if (bParam0)
	{
		if (!func_47(UNK_0xD803B885F5E47A62(), 14))
		{
			func_667(14);
		}
	}
	else if (func_47(UNK_0xD803B885F5E47A62(), 14))
	{
		func_666(14);
	}
}

void func_666(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_5), bParam0);
}

void func_667(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_5), bParam0);
}

void func_668(bool bParam0)
{
	if (func_29(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xD803B885F5E47A62() != bParam0)
		{
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_484 != bParam0)
			{
				Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_484 = bParam0;
				if (bParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_669(int iParam0)
{
	if (func_670(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_32;
	}
	return -1;
}

bool func_670(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_32 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_33 != -1))
	{
		return true;
	}
	return false;
}

void func_671(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_265(bParam0, iParam1) && func_690(bParam0, iParam1))
	{
		iVar0 = func_264(bParam0, iParam1);
		func_675(iVar0, bParam2, bParam3);
		func_672(iVar0, 1);
	}
}

void func_672(int iParam0, bool bParam1)
{
	if (!func_674(iParam0))
	{
		return;
	}
	func_248(func_673(iParam0), bParam1, -1, 1);
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		case 1:
			return 7629;
		case 2:
			return 7630;
		case 3:
			return 7631;
		case 4:
			return 7632;
		case 5:
			return 15373;
		default:
			break;
	}
	return 7628;
}

bool func_674(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_675(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	bVar1 = false;
	iVar2 = func_689(UNK_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_688(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_687(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_686(iParam0, 0, bParam2);
	}
	else if (func_684(iParam0, bParam2))
	{
		iVar0 = func_683(iVar2, 0);
		iVar3 = func_682(UNK_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_681(iVar2, bParam2);
		iVar5 = func_683(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_680(iVar2) && func_679(UNK_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_688(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_678(UNK_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_677(iParam0, (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_681(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_683(iVar2, bParam2) / func_678(UNK_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_680(iVar2) && func_679(UNK_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_676(UNK_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_676(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == func_10())
	{
		return;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590535[iParam0 /*876*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_677(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_678(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_679(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_255(iParam1) && func_680(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_680(int iParam0)
{
	return func_148(iParam0) == 5;
}

int func_681(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = func_148(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16950;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16955;
			}
			break;
		case 3:
			uVar0 = Global_262145.f_16949;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16954;
			}
			break;
		case 4:
			uVar0 = Global_262145.f_16948;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16953;
			}
			break;
		case 0:
			uVar0 = Global_262145.f_16946;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16951;
			}
			break;
		case 2:
			uVar0 = Global_262145.f_16947;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16952;
			}
			break;
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21074;
				if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21075;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21058;
				if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21059;
				}
			}
			break;
	}
	return uVar0;
}

int func_682(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_683(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_148(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16942);
			}
			break;
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21071;
			}
			else
			{
				iVar0 = Global_262145.f_21055;
			}
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21072);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21056);
				}
			}
			if (func_263(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21073);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21057);
				}
			}
			if (func_679(UNK_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_684(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_249(15384, -1, -1);
	}
	return func_249(func_685(iParam0), -1, -1);
}

int func_685(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		case 1:
			return 9417;
		case 2:
			return 9418;
		case 3:
			return 9419;
		case 4:
			return 9420;
		case 5:
			return 15372;
		default:
			break;
	}
	return 9416;
}

void func_686(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_248(15384, bParam1, -1, 1);
		return;
	}
	func_248(func_685(iParam0), bParam1, -1, 1);
}

int func_687(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_2513475[iParam0];
	iVar1 = func_689(UNK_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_680(iVar1))
	{
		if (func_679(UNK_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_688(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

int func_689(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == func_10())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_255(Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

bool func_690(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_265(bParam0, iParam1))
	{
		iVar0 = func_264(bParam0, iParam1);
		if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return true;
		}
	}
	return false;
}

void func_691()
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 28);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 29);
	func_692(24);
}

void func_692(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

bool func_693(struct<21> Param0)
{
	func_742(func_743(Param0), Param0);
	UNK_0x3A4967AE7C71F999(0);
	func_739(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_82, 11);
	UNK_0x35B62793EAE9ADDF(&Local_93, 129);
	UNK_0x256D93AFAE851A7A(0);
	func_694(0, 0, 0);
	return true;
}

void func_694(int iParam0, bool bParam1, bool bParam2)
{
	func_738();
	if (func_58(UNK_0xD803B885F5E47A62()))
	{
		func_700(1);
	}
	if ((iParam0 != 0 && UNK_0x40B8C182D63932FC(bParam1)) && func_699(bParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				UNK_0x5D96D8530B3D0904(&Global_1674342, false);
				break;
		}
	}
	if (!func_136() && !func_28(UNK_0xD803B885F5E47A62(), 1))
	{
		if (func_300())
		{
			func_545(3);
		}
	}
	func_545(4);
	if (func_95(0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 = func_11();
	}
	if (func_92(iParam0))
	{
		func_698();
		Global_1674374.f_18 = func_697(func_60());
	}
	else if (func_110(func_669(UNK_0xD803B885F5E47A62())))
	{
		func_696();
		Global_1674428.f_18 = func_697(func_60());
	}
	if (bParam2)
	{
		if (!func_295())
		{
			func_546(1);
		}
	}
	func_695();
}

void func_695()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366905.f_534[iVar0 /*42*/].f_1 = func_10();
		Global_1366905.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_696()
{
	struct<63> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

int func_697(bool bParam0)
{
	if (func_28(bParam0, 1))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_451;
	}
	return -1;
}

void func_698()
{
	struct<54> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

bool func_699(bool bParam0, bool bParam1)
{
	return func_48(UNK_0xD803B885F5E47A62(), bParam0, bParam1);
}

void func_700(bool bParam0)
{
	int iVar0;

	func_692(33);
	func_692(34);
	func_692(35);
	func_692(36);
	func_692(37);
	func_692(38);
	func_692(39);
	func_692(40);
	func_692(43);
	func_692(41);
	func_692(54);
	func_692(42);
	func_692(47);
	func_737(23);
	func_737(24);
	func_692(92);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 2);
	func_736();
	func_731();
	func_726();
	func_721();
	func_710();
	func_706();
	func_702();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_701(3))
	{
		func_737(3);
	}
	else if (func_701(4))
	{
		func_737(4);
	}
	else if (func_701(5))
	{
		func_737(5);
	}
	else if (func_701(6))
	{
		func_737(6);
	}
	else if (func_701(7))
	{
		func_737(7);
	}
	else if (((((((((((((((((func_701(0) || func_701(1)) || func_701(2)) || func_701(8)) || func_701(9)) || func_701(10)) || func_701(11)) || func_701(12)) || func_701(13)) || func_701(14)) || func_701(15)) || func_701(16)) || func_701(17)) || func_701(18)) || func_701(19)) || func_701(20)) || func_701(21)) || func_701(22))
	{
		func_737(8);
		func_737(0);
		func_737(1);
		func_737(2);
		func_737(9);
		func_737(10);
		func_737(11);
		func_737(12);
		func_737(13);
		func_737(14);
		func_737(15);
		func_737(16);
		func_737(17);
		func_737(18);
		func_737(19);
		func_737(20);
		func_737(21);
		func_737(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_701(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_14[iVar0], bVar1);
}

void func_702()
{
	if (func_704())
	{
		func_703(0);
		func_703(1);
		func_703(2);
		func_703(3);
	}
}

void func_703(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_33[iVar0]), bVar1);
}

bool func_704()
{
	if (((func_705(0) || func_705(1)) || func_705(2)) || func_705(3))
	{
		return true;
	}
	return false;
}

bool func_705(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_33[iVar0], bVar1);
}

void func_706()
{
	if (func_708())
	{
		func_707(4);
		func_707(5);
		func_707(6);
		func_707(7);
	}
}

void func_707(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_31[iVar0]), bVar1);
}

bool func_708()
{
	if (((func_709(4) || func_709(5)) || func_709(6)) || func_709(7))
	{
		return true;
	}
	return false;
}

bool func_709(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_31[iVar0], bVar1);
}

void func_710()
{
	bool bVar0;

	if (func_720())
	{
		func_719(8);
		func_719(9);
		func_719(10);
		func_719(12);
		func_719(13);
		func_719(14);
		func_719(19);
		func_719(20);
		func_719(21);
		func_719(22);
		func_719(23);
		func_719(24);
		func_719(25);
		func_719(26);
		func_719(15);
		func_719(16);
		func_719(17);
		func_719(18);
		func_719(35);
		func_719(45);
		func_719(46);
		if (func_718(11))
		{
			func_719(11);
			bVar0 = func_119(7226, -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, 2);
			func_117(7226, bVar0, -1, 1, 0);
		}
	}
	if (func_718(48))
	{
		if (func_716(151, 3))
		{
			func_714(151, 3);
		}
		func_719(48);
	}
	if (func_718(49))
	{
		if (func_716(152, 3))
		{
			func_714(152, 3);
		}
		func_719(49);
	}
	if (func_718(50))
	{
		if (func_716(153, 3))
		{
			func_714(153, 3);
		}
		func_719(50);
	}
	if (func_718(51))
	{
		if (func_716(func_711(), 3))
		{
			func_714(func_711(), 3);
		}
		func_719(51);
	}
}

int func_711()
{
	if (func_713())
	{
		func_712(154, Global_19486, 1);
	}
	return 154;
}

void func_712(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

bool func_713()
{
	bool bVar0;

	bVar0 = func_27(UNK_0xD803B885F5E47A62());
	if (((bVar0 != UNK_0xD803B885F5E47A62() && bVar0 != func_10()) && UNK_0x40B8C182D63932FC(bVar0)) && bVar0 != -1)
	{
		return true;
	}
	return false;
}

void func_714(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_715(iParam0, iVar0, 0);
			func_712(iParam0, iVar0, 0);
		}
	}
}

void func_715(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

bool func_716(int iParam0, int iParam1)
{
	if (func_717(iParam0, iParam1) == 1)
	{
		return true;
	}
	return false;
}

int func_717(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_718(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_26[iVar0], bVar1);
}

void func_719(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_26[iVar0]), bVar1);
}

bool func_720()
{
	if (((((((((((((((((((((func_718(8) || func_718(9)) || func_718(10)) || func_718(12)) || func_718(11)) || func_718(13)) || func_718(14)) || func_718(19)) || func_718(20)) || func_718(21)) || func_718(22)) || func_718(23)) || func_718(24)) || func_718(25)) || func_718(26)) || func_718(15)) || func_718(16)) || func_718(17)) || func_718(18)) || func_718(35)) || func_718(45)) || func_718(46))
	{
		return true;
	}
	return false;
}

void func_721()
{
	if (func_725())
	{
		func_724(0);
		func_724(1);
		func_724(2);
		func_724(3);
		func_724(4);
		func_724(5);
		if (func_723(32))
		{
			if (func_716(func_722(), 3))
			{
				func_714(func_722(), 3);
			}
			func_724(32);
		}
	}
}

int func_722()
{
	if (func_713())
	{
		func_712(12, Global_19486, 1);
	}
	return 12;
}

bool func_723(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_23[iVar0], bVar1);
}

void func_724(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_23[iVar0]), bVar1);
}

bool func_725()
{
	if ((((func_723(1) || func_723(0)) || func_723(2)) || func_723(4)) || func_723(5))
	{
		return true;
	}
	return false;
}

void func_726()
{
	if (func_730())
	{
		func_729(0);
		func_729(1);
		func_729(2);
		func_729(3);
		func_729(4);
		func_729(5);
		func_729(6);
		func_729(7);
		if (func_728(8))
		{
			func_729(8);
		}
		if (func_728(15))
		{
			if (func_716(func_727(), 3))
			{
				func_714(func_727(), 3);
			}
			func_729(15);
		}
	}
}

int func_727()
{
	if (func_713())
	{
		func_712(20, Global_19486, 1);
	}
	return 20;
}

bool func_728(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_21[iVar0], bVar1);
}

void func_729(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_21[iVar0]), bVar1);
}

bool func_730()
{
	if ((((((((func_728(0) || func_728(1)) || func_728(2)) || func_728(3)) || func_728(4)) || func_728(5)) || func_728(6)) || func_728(7)) || func_728(8))
	{
		return true;
	}
	return false;
}

void func_731()
{
	if (func_735())
	{
		func_734(0);
		func_734(1);
		func_734(2);
		func_734(3);
		func_734(4);
		func_734(5);
		func_734(6);
		func_734(7);
		func_734(8);
		func_734(9);
		func_734(10);
		func_734(11);
		func_734(12);
		if (func_733(13))
		{
			if (func_716(func_732(), 3))
			{
				func_714(func_732(), 3);
			}
			func_734(13);
		}
	}
}

int func_732()
{
	if (func_713())
	{
		func_712(76, Global_19486, 1);
	}
	return 76;
}

bool func_733(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_19[iVar0], bVar1);
}

void func_734(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_19[iVar0]), bVar1);
}

bool func_735()
{
	if ((((((((((((func_733(0) || func_733(1)) || func_733(2)) || func_733(3)) || func_733(4)) || func_733(5)) || func_733(6)) || func_733(7)) || func_733(8)) || func_733(9)) || func_733(10)) || func_733(11)) || func_733(12))
	{
		return true;
	}
	return false;
}

void func_736()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2537071.f_5124.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_737(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_14[iVar0]), bVar1);
}

void func_738()
{
	struct<14> Var0;

	Global_1674356 = { Var0 };
	Global_1674356.f_14 = 0;
	Global_1674356.f_15 = 0;
}

int func_739(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_741();
			}
			else
			{
				return 0;
			}
		}
		if (!func_740())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0;
					}
				}
				if (func_631())
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0;
					}
				}
				if (func_629(157))
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!UNK_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_741();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = UNK_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_741();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!UNK_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_741();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_740()
{
	return Global_1312854;
}

void func_741()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_742(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_741();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 127:
			return 32;
		case 128:
			return 32;
		case 129:
			return 32;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 130:
			return 32;
		case 131:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 142:
			return 32;
		case 143:
			return 32;
		case 132:
			return 32;
		case 133:
			return 32;
		case 137:
			return 32;
		case 135:
			return 32;
		case 136:
			return 32;
		case 140:
			return 32;
		case 141:
			return 32;
		case 138:
			return 32;
		case 139:
			return 32;
		case 144:
			return 32;
		case 145:
			return 32;
		case 146:
			return 32;
		case 147:
			return 32;
		case 148:
			return 2;
		case 153:
			return 1;
		case 149:
			return 2;
		case 150:
			return 4;
		case 151:
			return 2;
		case 152:
			return 2;
		case 134:
			return 1;
		case 154:
			return 2;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		case 176:
			return 1;
		case 161:
			return 4;
		case 164:
			return 4;
		case 165:
			return 1;
		case 166:
			return 1;
		case 172:
			return 1;
		case 168:
			return 2;
		case 173:
			return 1;
		case 169:
			return 1;
		case 167:
			return 2;
		case 170:
			return 8;
		case 171:
			return 8;
		case 174:
			return 1;
		case 162:
			return 16;
		case 163:
			return 32;
		default:
			break;
	}
	return 0;
}

