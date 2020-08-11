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
	int iLocal_35 = 0;
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
	func_88();
	while (true)
	{
		func_87();
		if (func_79())
		{
			func_78();
		}
		if (Global_2537071.f_5124.f_749 == 0)
		{
			func_78();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			case 4:
				func_78();
				break;
		}
	}
}

bool func_1()
{
	bool bVar0;

	if (func_7(1))
	{
		bVar0 = Global_2537071.f_5124.f_748;
		if (bVar0 != func_6())
		{
			if (func_4(bVar0))
			{
				func_2(bVar0);
				return false;
			}
		}
		else
		{
			func_2(bVar0);
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_2(bool bParam0)
{
	if (bParam0 != func_6())
	{
		func_3(bParam0);
	}
	Global_2537071.f_5124.f_748 = func_6();
}

void func_3(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	UNK_0x0674E58A79778E99(&(Global_2416079.f_388), bVar0);
	UNK_0x0674E58A79778E99(&(Global_2416079.f_389), bVar0);
	UNK_0x0674E58A79778E99(&(Global_2416079.f_390), bVar0);
	UNK_0x0674E58A79778E99(&(Global_2416079.f_392), bVar0);
	UNK_0x0674E58A79778E99(&(Global_2416079.f_396), bVar0);
	UNK_0x0674E58A79778E99(&(Global_2416079.f_391), bVar0);
}

bool func_4(bool bParam0)
{
	if (!func_5(bParam0, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_5(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = bParam0;
	if (iVar0 != -1)
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
				if (!Global_2439138.f_3[iVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool func_6()
{
	return -1;
}

bool func_7(bool bParam0)
{
	return func_8(UNK_0xD803B885F5E47A62(), bParam0);
}

int func_8(int iParam0, bool bParam1)
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_6() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_6())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_11()
{
	bool bVar0;

	if (func_7(1))
	{
		bVar0 = Global_2537071.f_5124.f_748;
		if (bVar0 != func_6())
		{
			if (func_12(bVar0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_12(bool bParam0)
{
	if (func_5(bParam0, 0, 1))
	{
		func_76(bParam0, 432, 1, 0);
		if (func_75(bParam0))
		{
			func_72(bParam0, func_73(func_74(UNK_0xD803B885F5E47A62())), 1, 0);
		}
		if (func_70(bParam0))
		{
			func_68(bParam0, 1, 1, 0);
		}
		func_62(bParam0, 1, 0);
		func_13(bParam0, 1, 5000);
		return true;
	}
	return false;
}

void func_13(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (bParam0 == func_6())
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
			func_14(bParam0);
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
			func_14(bParam0);
			UNK_0xF412DD40DE84CE72(Global_2416079[bVar0], 0);
		}
	}
}

void func_14(bool bParam0)
{
	int iVar0;

	iVar0 = bParam0;
	if (func_5(bParam0, 0, 1))
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_2416079[iVar0]))
		{
			Global_2416079.f_1501[iVar0] = func_15(bParam0);
			UNK_0x2A065371C9D96655(Global_2416079[iVar0], Global_2416079.f_1501[iVar0]);
		}
	}
}

int func_15(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;
	if (func_5(bParam0, 0, 1))
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
				return func_59(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_59(7);
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_59(11);
					case 254:
						if (UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(Global_2439138))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					case 271:
						if (UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(Global_2439138))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					case 163:
					case 164:
						if (func_58(Global_2439138, bParam0, -2, 0))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					case 303:
					case 418:
						return func_59(10);
					case 364:
						if (func_20(Global_2439138, bParam0, 1))
						{
							return func_59(10);
						}
						else
						{
							return func_59(5);
						}
						break;
					case 478:
					case 501:
					case 523:
					case 556:
						return func_59(10);
					case 417:
						if ((func_19(bParam0) || func_18(bParam0)) || func_16(bParam0))
						{
							if (func_20(Global_2439138, bParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_20(Global_2439138, bParam0, 1))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					case 256:
					case 268:
					default:
						if (func_20(Global_2439138, bParam0, 1))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
				}
			}
		}
	}
	return 1;
}

bool func_16(bool bParam0)
{
	if (bParam0 != func_6())
	{
		if (func_5(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

int func_17(int iParam0)
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

bool func_18(bool bParam0)
{
	if (bParam0 != func_6())
	{
		if (func_5(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_19(bool bParam0)
{
	if (bParam0 != func_6())
	{
		if (func_5(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_20(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_23(bParam0, -2, 0, 0, 0) == func_23(bParam1, -2, 0, 0, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (func_21(func_23(bParam0, -2, 0, 0, 0)) && func_21(func_23(bParam1, -2, 0, 0, 0)))
		{
			return true;
		}
	}
	return false;
}

int func_21(int iParam0)
{
	if (iParam0 == func_22(1) || iParam0 == func_22(0))
	{
		return 1;
	}
	return 0;
}

int func_22(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_23(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (func_53(bParam0) && !bParam4)
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
	if (((func_53(UNK_0xD803B885F5E47A62()) || (func_52() && func_51())) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		bVar1 = func_50();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bVar1))
			{
				if (UNK_0x83FACCC48B68F9D1(bVar1) != -1)
				{
					if (func_5(UNK_0x83FACCC48B68F9D1(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_48(iParam1, bParam0, 0);
							}
							else
							{
								return func_35(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_35(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_48(iParam1, bParam0, 0);
				}
				else
				{
					return func_24(0, -1, 0);
				}
			}
			else
			{
				return func_24(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_48(iParam1, bParam0, 0);
		}
		else
		{
			return func_35(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_35(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_24(bool bParam0, int iParam1, bool bParam2)
{
	return func_25(UNK_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_25(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!UNK_0x40B8C182D63932FC(bParam0))
	{
		return 3;
	}
	iVar0 = UNK_0x08067D4957B73C02(bParam0);
	if ((func_34() || (func_33() && func_31())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_30(iParam2, iVar0);
		}
		else
		{
			return func_30(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_29(iVar0, iParam2, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_22(1);
				}
				else
				{
					return func_22(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_26(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_26(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_22(1);
	}
	return func_22(0);
}

int func_26(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_28(iParam0, iParam1, iParam3);
	if (func_27(Global_4456448.f_194990, 1))
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

bool func_27(int iParam0, bool bParam1)
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

int func_28(int iParam0, int iParam1, int iParam2)
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
			if (!func_29(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_29(int iParam0, int iParam1, int iParam2)
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

int func_30(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_28(iParam1, iParam0, 4);
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

bool func_31()
{
	if (func_32())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_32()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_33()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_34()
{
	if (func_32() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

int func_35(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_43())
			{
				iVar3 = func_39(bParam0);
				if (!iVar3 == -1)
				{
					return func_37(iVar3);
				}
			}
			if ((func_58(bParam1, bParam0, iVar0, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_29(UNK_0x08067D4957B73C02(bParam1), UNK_0x08067D4957B73C02(bParam0), 0) && UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_22(1);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_36(1);
			}
			else
			{
				return func_25(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_22(1);
			}
			else
			{
				return func_25(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_39(bParam0);
	if (!iVar4 == -1)
	{
		return func_37(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_36(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_37(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_38(iParam0);
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

var func_38(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_39(bool bParam0)
{
	if (!bParam0 == func_6())
	{
		if (func_41(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_40(bParam0)];
		}
	}
	return -1;
}

bool func_40(bool bParam0)
{
	if (bParam0 != func_6())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_6();
}

bool func_41(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_42(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_6();
}

bool func_42(bool bParam0)
{
	if (bParam0 != func_6())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_6())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_43()
{
	if (((func_47() || func_46()) || func_45()) || func_44())
	{
		return true;
	}
	return false;
}

var func_44()
{
	return Global_2450632.f_19;
}

var func_45()
{
	return Global_2450632.f_17;
}

var func_46()
{
	return Global_2450632.f_16;
}

var func_47()
{
	return Global_2450632.f_15;
}

int func_48(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_43())
	{
		iVar2 = func_39(bParam1);
		if (!iVar2 == -1)
		{
			return func_37(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_6())
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
			iVar0 = func_25(bParam1, !bParam2, iParam0, 0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_49(iParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_29(iParam0, UNK_0x08067D4957B73C02(bParam1), 0))
		{
			iVar0 = func_36(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_49(int iParam0)
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

var func_50()
{
	return Global_2359302.f_2;
}

bool func_51()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_52()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_53(bool bParam0)
{
	if (func_55(bParam0, 0))
	{
		return true;
	}
	if (func_54())
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

bool func_54()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_55(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_56(-1, 0) == 8;
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

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
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

int func_57()
{
	return Global_1312745;
}

bool func_58(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_61())
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
	return func_60(iParam0);
}

int func_60(int iParam0)
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

bool func_61()
{
	int iVar0;

	iVar0 = UNK_0x08067D4957B73C02(Global_2439138);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iVar0 /*15700*/].f_9568, 4);
	}
	return false;
}

void func_62(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;

	if (func_64(bParam0))
	{
		return;
	}
	func_63(&(Global_2416079.f_720[bParam0]), &(Global_2416079.f_1083[bParam0]), &(Global_2416079.f_393), bParam1, bParam0, bParam2, &uVar0);
}

bool func_63(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

bool func_64(bool bParam0)
{
	if (bParam0 == func_6())
	{
		return true;
	}
	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_65())
	{
		return true;
	}
	return false;
}

int func_65()
{
	switch (func_67())
	{
		case 0:
			return func_66();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_66()
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

int func_67()
{
	return Global_30768;
}

void func_68(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_64(bParam0))
	{
		return;
	}
	if (func_63(&(Global_2416079.f_819[bParam0]), &(Global_2416079.f_1182[bParam0]), &(Global_2416079.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_69(bParam0, bParam2);
	}
}

void func_69(bool bParam0, bool bParam1)
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

int func_70(bool bParam0)
{
	return func_71(&(Global_2416079.f_819[bParam0]));
}

int func_71(var uParam0)
{
	if (UNK_0x1727A44C562FBED2(*uParam0))
	{
		if (!*uParam0 == UNK_0x0D0A574C76D769AC())
		{
			return 0;
		}
	}
	return 1;
}

void func_72(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_64(bParam0))
	{
		return;
	}
	if (func_63(&(Global_2416079.f_621[bParam0]), &(Global_2416079.f_984[bParam0]), &(Global_2416079.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[bParam0] = iParam1;
		}
	}
}

int func_73(bool bParam0)
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

bool func_74(int iParam0)
{
	int iVar0;

	iVar0 = func_39(iParam0);
	if (iVar0 != -1)
	{
		return func_37(iVar0);
	}
	return true;
}

int func_75(bool bParam0)
{
	return func_71(&(Global_2416079.f_621[bParam0]));
}

void func_76(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (func_64(bParam0))
	{
		return;
	}
	if (func_63(&(Global_2416079.f_588[bParam0]), &(Global_2416079.f_951[bParam0]), &(Global_2416079.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_77();
		}
	}
}

void func_77()
{
	Global_2416079.f_1614 = 1;
}

void func_78()
{
	func_2(Global_2537071.f_5124.f_748);
	UNK_0x10FAF14A60A0DBE1();
}

bool func_79()
{
	var uVar0;

	func_84(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_83())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_82())
	{
		return true;
	}
	if (func_81(159))
	{
		if (!func_80())
		{
			return true;
		}
	}
	if (func_81(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_65() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_65()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_80()
{
	return Global_2450632.f_598;
}

bool func_81(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_82()
{
	return Global_2460680;
}

bool func_83()
{
	return Global_2450632.f_593;
}

void func_84(var uParam0)
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
					func_85(iVar0);
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

void func_85(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_86(bVar4, &bVar5))
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

bool func_86(bool bParam0, var uParam1)
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
					*uParam1 = 1;
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

void func_87()
{
	SYSTEM::WAIT(0);
}

int func_88()
{
	UNK_0x256D93AFAE851A7A(0);
	return 1;
}

