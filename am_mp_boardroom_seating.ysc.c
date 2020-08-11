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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_75 = -1;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_125[32] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
	struct<7> Local_158 = { 0, 0, 0, 0, -1, 0, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_116 = 7;
	if (UNK_0x8CD06866876216F2())
	{
		func_69();
	}
	else
	{
		func_67();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_25();
		if (UNK_0x8CD06866876216F2() && UNK_0xBFF81ED3B99522C7())
		{
			func_19();
		}
		if (func_8() || UNK_0x757EF87A33649210())
		{
			func_67();
		}
		if ((!func_7(UNK_0xD803B885F5E47A62()) || func_5() != 0) && !func_1(UNK_0xD803B885F5E47A62()))
		{
			func_67();
		}
	}
}

bool func_1(bool bParam0)
{
	if (bParam0 != func_4())
	{
		if (func_3(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_2(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

int func_2(int iParam0)
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

bool func_3(bool bParam0, bool bParam1, bool bParam2)
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

bool func_4()
{
	return -1;
}

int func_5()
{
	return func_6(UNK_0xD803B885F5E47A62());
}

int func_6(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_7(bool bParam0)
{
	if (bParam0 != func_4())
	{
		if (func_3(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_2(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_8()
{
	var uVar0;

	func_16(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_15())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_14())
	{
		return true;
	}
	if (func_13(159))
	{
		if (!func_12())
		{
			return true;
		}
	}
	if (func_13(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_9() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_9()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_9()
{
	switch (func_11())
	{
		case 0:
			return func_10();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_10()
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

int func_11()
{
	return Global_30768;
}

bool func_12()
{
	return Global_2450632.f_598;
}

bool func_13(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_14()
{
	return Global_2460680;
}

bool func_15()
{
	return Global_2450632.f_593;
}

void func_16(var uParam0)
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
					func_17(iVar0);
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

void func_17(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_3(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_18(bVar4, &bVar5))
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

bool func_18(bool bParam0, bool bParam1)
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

void func_19()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;

	bVar0 = UNK_0x12AB0310C2281427("vw_prop_vw_offchair_01");
	if (func_1(UNK_0xD803B885F5E47A62()))
	{
		bVar0 = UNK_0x12AB0310C2281427("bkr_prop_clubhouse_chair_01");
	}
	iVar1 = 0;
	while (iVar1 < iLocal_116)
	{
		if (!UNK_0xE5DBF9B6126856CA(iLocal_117[iVar1]))
		{
			UNK_0x523BCC9DC80CD82F(bVar0);
			if (!UNK_0xB87F6CF6E5628C67(bVar0))
			{
				return;
			}
			UNK_0x3F423BF5B8125A50(func_22(iVar1, 0, 0));
			if (!UNK_0xB4AE0788C1587752(func_22(iVar1, 0, 0)))
			{
				return;
			}
			if (UNK_0x081C8BC5094A7B76(1))
			{
				vVar3 = { UNK_0x1BB04F10296A1C5E(func_22(iVar1, 0, 0), "enter_chair", func_21(iVar1, 1), func_20(iVar1), false, 2) };
				vVar6 = { UNK_0xEEB20D14BD38615E(func_22(iVar1, 0, 0), "enter_chair", func_21(iVar1, 1), func_20(iVar1), false, 2) };
				bVar2 = UNK_0x7707E48765093646(bVar0, vVar3, true, true, false);
				UNK_0x71199B01895C6202(bVar0);
				UNK_0x98868AF51859FC75(bVar2, 0);
				UNK_0x271603AF9C0C7EB3(bVar2, 1);
				UNK_0xC3BED1CE092AB15D(bVar2, 1);
				UNK_0x08841CDB215AE18F(bVar2, vVar3, 0, 0, 1);
				UNK_0xC023D1C4BF532815(bVar2, vVar6, 2, 1);
				UNK_0x1E9649458B15960F(bVar2, true);
				iLocal_117[iVar1] = UNK_0x4193A2DE62BC07C0(bVar2);
				UNK_0x8D17794CE3273D70(func_22(iVar1, 0, 0));
			}
		}
		iVar1++;
	}
}

Vector3 func_20(int iParam0)
{
	if (func_1(UNK_0xD803B885F5E47A62()))
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, 180f;
			case 1:
				return 0f, 0f, 180f;
			case 2:
				return 0f, 0f, -90f;
			case 3:
				return 0f, 0f, 0f;
			case 4:
				return 0f, 0f, 0f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, 148f;
			case 1:
				return 0f, 0f, 148f;
			case 2:
				return 0f, 0f, 148f;
			case 3:
				return 0f, 0f, 58f;
			case 4:
				return 0f, 0f, -32f;
			case 5:
				return 0f, 0f, -32f;
			case 6:
				return 0f, 0f, -32f;
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_21(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (func_1(UNK_0xD803B885F5E47A62()))
	{
		switch (iParam0)
		{
			case 0:
				vVar0 = { 2703.905f, -370.476f, -55.1649f };
				break;
			case 1:
				vVar0 = { 2705.002f, -370.476f, -55.1649f };
				break;
			case 2:
				vVar0 = { 2706.05f, -369.538f, -55.1649f };
				break;
			case 3:
				vVar0 = { 2705.002f, -368.526f, -55.1649f };
				break;
			case 4:
				vVar0 = { 2703.905f, -368.526f, -55.1649f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				vVar0 = { 970.3333f, 55.555f, 115.7754f };
				break;
			case 1:
				vVar0 = { 969.3386f, 56.1765f, 115.7754f };
				break;
			case 2:
				vVar0 = { 968.3069f, 56.8211f, 115.7754f };
				break;
			case 3:
				vVar0 = { 967.8962f, 58.3022f, 115.7754f };
				break;
			case 4:
				vVar0 = { 969.4728f, 58.6255f, 115.7754f };
				break;
			case 5:
				vVar0 = { 970.4819f, 57.995f, 115.7754f };
				break;
			case 6:
				vVar0 = { 971.4991f, 57.3593f, 115.7754f };
				break;
		}
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					vVar0.x = (vVar0.x - 0.0837f);
					vVar0.f_1 = (vVar0.y - 0.1338f);
					break;
				case 3:
					vVar0.x = (vVar0.x - 0.063f);
					vVar0.f_1 = (vVar0.y + 0.0407f);
					break;
				case 4:
				case 5:
				case 6:
					vVar0.x = (vVar0.x + 0.0837f);
					vVar0.f_1 = (vVar0.y + 0.1338f);
					break;
			}
		}
	}
	return vVar0;
}

char* func_22(int iParam0, int iParam1, int iParam2)
{
	if (func_1(UNK_0xD803B885F5E47A62()))
	{
		if (func_23())
		{
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base_r@";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base_r@";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base_r@";
						default:
							break;
					}
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base_r@";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base_r@";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base_r@";
						default:
							break;
					}
					break;
			}
		}
	}
	else if (func_23())
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 4:
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_a@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_a@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_a@base_r@";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_b@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_b@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_b@base_r@";
							default:
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_c@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_c@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_c@base_r@";
							default:
								break;
						}
						break;
				}
				break;
			case 3:
				return "anim@amb@office@boardroom@boss@female@";
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 4:
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_a@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_a@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_a@base_r@";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_b@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_b@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_b@base_r@";
							default:
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_c@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_c@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_c@base_r@";
							default:
								break;
						}
						break;
				}
				break;
			case 3:
				return "anim@amb@office@boardroom@boss@male@";
		}
	}
	return "";
}

int func_23()
{
	return func_24(UNK_0xD803B885F5E47A62());
}

int func_24(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

void func_25()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	func_57();
	iVar0 = 0;
	if (func_56() || (!func_54() && Local_158 > 2))
	{
		func_52(1);
	}
	switch (Local_158)
	{
		case 0:
			func_51(1);
			break;
		case 1:
			if (((((((((((((func_3(UNK_0xD803B885F5E47A62(), 1, 1) && !Global_262145.f_26139) && UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) && !func_50()) && !func_49()) && !UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 2)) && !UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) && func_46(UNK_0x16F2683693E537C9()) <= 9) && !Global_2405072.f_2672) && !func_45(UNK_0xD803B885F5E47A62())) && func_42(UNK_0xD803B885F5E47A62(), -1, 1)) && func_41()) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && func_40(UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9()), Local_158.f_2, 45f))
			{
				if (Local_158.f_6 == -1)
				{
					if ((Local_158.f_4 == 3 && func_34() != UNK_0xD803B885F5E47A62()) && !func_1(UNK_0xD803B885F5E47A62()))
					{
						func_33("MPJAC_NO_SIT");
					}
					else
					{
						func_32(&(Local_158.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (func_30(Local_158.f_6, 1))
				{
					if (func_29("MPJAC_NO_SIT"))
					{
						UNK_0xA37A90C62806D848(1);
					}
					func_27(&(Local_158.f_6));
					Local_158.f_6 = -1;
					UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 185, true);
					UNK_0x5D96D8530B3D0904(&(Global_1676377.f_6), 11);
					if (func_1(UNK_0xD803B885F5E47A62()))
					{
						switch (Local_158.f_4)
						{
							case 0:
								Local_158.f_1 = 0;
								break;
							case 1:
								Local_158.f_1 = 1;
								break;
							case 2:
								Local_158.f_1 = 2;
								break;
							case 3:
								Local_158.f_1 = 0;
								break;
							case 4:
								Local_158.f_1 = 1;
								break;
						}
					}
					else
					{
						switch (Local_158.f_4)
						{
							case 0:
								Local_158.f_1 = 0;
								break;
							case 1:
								Local_158.f_1 = 1;
								break;
							case 2:
								Local_158.f_1 = 2;
								break;
							case 3:
								Local_158.f_1 = 0;
								break;
							case 4:
								Local_158.f_1 = 0;
								break;
							case 5:
								Local_158.f_1 = 2;
								break;
							case 6:
								Local_158.f_1 = 1;
								break;
						}
					}
					func_51(2);
				}
			}
			else
			{
				if (Local_158.f_6 != -1)
				{
					func_27(&(Local_158.f_6));
					Local_158.f_6 = -1;
				}
				if (func_29("MPJAC_NO_SIT"))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			break;
		case 2:
			if (Local_158.f_4 != 3 || func_1(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x3F423BF5B8125A50(func_22(Local_158.f_4, Local_158.f_1, 0));
				UNK_0x3F423BF5B8125A50(func_22(Local_158.f_4, Local_158.f_1, 1));
				UNK_0x3F423BF5B8125A50(func_22(Local_158.f_4, Local_158.f_1, 2));
				if ((UNK_0xB4AE0788C1587752(func_22(Local_158.f_4, Local_158.f_1, 0)) && UNK_0xB4AE0788C1587752(func_22(Local_158.f_4, Local_158.f_1, 1))) && UNK_0xB4AE0788C1587752(func_22(Local_158.f_4, Local_158.f_1, 2)))
				{
					bVar4 = true;
				}
			}
			else
			{
				UNK_0x3F423BF5B8125A50(func_22(Local_158.f_4, 0, 0));
				if (UNK_0xB4AE0788C1587752(func_22(Local_158.f_4, 0, 0)))
				{
					bVar4 = true;
				}
			}
			if (bVar4 && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				vVar5 = { UNK_0x1BB04F10296A1C5E(func_22(Local_158.f_4, Local_158.f_1, 0), "enter", func_21(Local_158.f_4, 1), func_20(Local_158.f_4), false, 2) };
				vVar8 = { UNK_0xEEB20D14BD38615E(func_22(Local_158.f_4, Local_158.f_1, 0), "enter", func_21(Local_158.f_4, 1), func_20(Local_158.f_4), false, 2) };
				UNK_0x80AA372E04ED318D(UNK_0x16F2683693E537C9(), vVar5, 1f, 20000, vVar8.z, 0.05f);
				func_51(3);
			}
			break;
		case 3:
			if (!UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
			{
				UNK_0x8D30F6387EE75385(iLocal_117[Local_158.f_4]);
			}
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if ((UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]) && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 2106541073) != 1) && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 2106541073) != 0)
				{
					if (Local_158.f_4 == 3 && !func_1(UNK_0xD803B885F5E47A62()))
					{
						bVar2 = "enter_b";
						bVar3 = "enter_b_chair";
					}
					else
					{
						bVar2 = "enter";
						bVar3 = "enter_chair";
					}
					Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), bVar2, 2f, -2f, 13, 16, 1148846080, 0);
					UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), bVar3, 2f, -2f, 13);
					UNK_0x914E6894744915F8(Local_158.f_5);
					func_51(4);
				}
			}
			break;
		case 4:
			if (!UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
			{
				UNK_0x8D30F6387EE75385(iLocal_117[Local_158.f_4]);
			}
			if (UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
			{
				iVar1 = UNK_0xF958843510932FF6(Local_158.f_5);
				if (iVar1 == -1 || UNK_0xA45992A6CE82FB43(iVar1) >= 0.99f)
				{
					Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), "base", 2f, -2f, 13, 16, 1148846080, 0);
					UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), "base_chair", 2f, -2f, 13);
					UNK_0x914E6894744915F8(Local_158.f_5);
					func_51(5);
				}
			}
			break;
		case 5:
			if (((!UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, 2) && !UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, true)) && UNK_0xE5DBF9B6126856CA(iLocal_117[3]))
			{
				bVar11 = func_34();
				if (bVar11 != func_4() && func_3(bVar11, 1, 1))
				{
					if (iLocal_125[bVar11] == 3 && !func_1(UNK_0xD803B885F5E47A62()))
					{
						if (!UNK_0xE0EC712E4BE1FC42(UNK_0x16F2683693E537C9(), UNK_0x09AD4CE7DA179533(iLocal_117[3])))
						{
							UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), UNK_0x09AD4CE7DA179533(iLocal_117[3]), -1, 2048, 3);
						}
					}
					else if (UNK_0xE0EC712E4BE1FC42(UNK_0x16F2683693E537C9(), UNK_0x09AD4CE7DA179533(iLocal_117[3])))
					{
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
						}
					}
				}
				else if (UNK_0xE0EC712E4BE1FC42(UNK_0x16F2683693E537C9(), UNK_0x09AD4CE7DA179533(iLocal_117[3])))
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
					}
				}
			}
			if (!UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
			{
				UNK_0x8D30F6387EE75385(iLocal_117[Local_158.f_4]);
			}
			if (UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
			{
				iVar1 = UNK_0xF958843510932FF6(Local_158.f_5);
				if (iVar1 == -1 || UNK_0xA45992A6CE82FB43(iVar1) >= 0.99f)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, 2))
					{
						iVar12 = UNK_0x09AC81E49EA267F7(false, 3);
						if ((!UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, false) && !UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, true)) && !func_1(UNK_0xD803B885F5E47A62()))
						{
							switch (iVar12)
							{
								case 0:
									bVar2 = "idle_a";
									bVar3 = "idle_a_chair";
									break;
								case 1:
									bVar2 = "idle_d";
									bVar3 = "idle_d_chair";
									break;
								case 2:
									bVar2 = "idle_e";
									bVar3 = "idle_e_chair";
									break;
							}
						}
						else
						{
							switch (iVar12)
							{
								case 0:
									bVar2 = "idle_a";
									bVar3 = "idle_a_chair";
									break;
								case 1:
									bVar2 = "idle_b";
									bVar3 = "idle_b_chair";
									break;
								case 2:
									bVar2 = "idle_c";
									bVar3 = "idle_c_chair";
									break;
							}
						}
						Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
						if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, false))
						{
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), bVar2, 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), bVar3, 2f, -2f, 13);
						}
						else if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, true))
						{
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), bVar2, 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), bVar3, 2f, -2f, 13);
						}
						else
						{
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), bVar2, 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), bVar3, 2f, -2f, 13);
						}
						UNK_0x914E6894744915F8(Local_158.f_5);
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
						}
						UNK_0x5D96D8530B3D0904(&(Local_158.f_3), 2);
					}
					else
					{
						Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
						if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, false))
						{
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), "base", 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), "base_chair", 2f, -2f, 13);
						}
						else if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, true))
						{
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), "base", 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), "base_chair", 2f, -2f, 13);
						}
						else
						{
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), "base", 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), "base_chair", 2f, -2f, 13);
						}
						UNK_0x914E6894744915F8(Local_158.f_5);
						UNK_0x0674E58A79778E99(&(Local_158.f_3), 2);
					}
				}
				if ((((func_3(UNK_0xD803B885F5E47A62(), 1, 1) && !func_50()) && !func_49()) && !func_45(UNK_0xD803B885F5E47A62())) && !func_26())
				{
					if (UNK_0xB8E3620B82AD47D7(2) || UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, 2))
					{
						if (Local_158.f_6 != -1)
						{
							func_27(&(Local_158.f_6));
							Local_158.f_6 = -1;
						}
					}
					if (Local_158.f_6 == -1)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, 2))
						{
							if (UNK_0x91E3F625EF57450D(2))
							{
								if (Local_158.f_4 == 3 && !func_1(UNK_0xD803B885F5E47A62()))
								{
									func_32(&(Local_158.f_6), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
								}
								else
								{
									func_32(&(Local_158.f_6), 4, "MPOFSEAT_EX_PCC", 0, 0, 0, 0);
								}
							}
							else if (Local_158.f_4 == 3 && !func_1(UNK_0xD803B885F5E47A62()))
							{
								func_32(&(Local_158.f_6), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
							}
							else
							{
								func_32(&(Local_158.f_6), 4, "MPOFSEAT_EXIT_C", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						iVar14 = UNK_0x0DED1C1B8250FA57(2, 30);
						if (UNK_0x91E3F625EF57450D(2))
						{
							iVar13 = 225;
						}
						else
						{
							iVar13 = 190;
						}
						if (UNK_0xD245978525608929(2, iVar13))
						{
							if (Local_158.f_4 == 3 && !func_1(UNK_0xD803B885F5E47A62()))
							{
								bVar2 = "exit_b";
								bVar3 = "exit_b_chair";
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, false))
							{
								bVar2 = "exit_seat";
								bVar3 = "exit_seat_chair";
								iVar0 = 1;
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, true))
							{
								bVar2 = "exit_seat";
								bVar3 = "exit_seat_chair";
								iVar0 = 2;
							}
							else
							{
								bVar2 = "exit";
								bVar3 = "exit_chair";
								iVar0 = 0;
							}
							Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, false, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, iVar0), bVar2, 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, iVar0), bVar3, 2f, -2f, 13);
							UNK_0x914E6894744915F8(Local_158.f_5);
							func_27(&(Local_158.f_6));
							Local_158.f_6 = -1;
							if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
							}
							func_51(7);
						}
						else if (Local_158.f_4 != 3 || func_1(UNK_0xD803B885F5E47A62()))
						{
							if (iVar14 < 100 && !UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, false))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, true))
								{
									Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), "exit", 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), "exit_chair", 2f, -2f, 13);
									UNK_0x914E6894744915F8(Local_158.f_5);
									UNK_0x0674E58A79778E99(&(Local_158.f_3), false);
									UNK_0x0674E58A79778E99(&(Local_158.f_3), true);
								}
								else
								{
									Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), "enter", 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), "enter_chair", 2f, -2f, 13);
									UNK_0x914E6894744915F8(Local_158.f_5);
									UNK_0x5D96D8530B3D0904(&(Local_158.f_3), false);
									UNK_0x0674E58A79778E99(&(Local_158.f_3), true);
								}
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
								}
								func_27(&(Local_158.f_6));
								Local_158.f_6 = -1;
								func_51(6);
							}
							else if (iVar14 > 150 && !UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, true))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, false))
								{
									Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), "exit", 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), "exit_chair", 2f, -2f, 13);
									UNK_0x914E6894744915F8(Local_158.f_5);
									UNK_0x0674E58A79778E99(&(Local_158.f_3), false);
									UNK_0x0674E58A79778E99(&(Local_158.f_3), true);
								}
								else
								{
									Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), "enter", 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), "enter_chair", 2f, -2f, 13);
									UNK_0x914E6894744915F8(Local_158.f_5);
									UNK_0x0674E58A79778E99(&(Local_158.f_3), false);
									UNK_0x5D96D8530B3D0904(&(Local_158.f_3), true);
								}
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
								}
								func_27(&(Local_158.f_6));
								Local_158.f_6 = -1;
								func_51(6);
							}
						}
					}
				}
				else if (Local_158.f_6 != -1)
				{
					func_27(&(Local_158.f_6));
					Local_158.f_6 = -1;
				}
			}
			break;
		case 6:
			if (!UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
			{
				UNK_0x8D30F6387EE75385(iLocal_117[Local_158.f_4]);
			}
			if (UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
			{
				iVar1 = UNK_0xF958843510932FF6(Local_158.f_5);
				if (iVar1 == -1 || UNK_0xA45992A6CE82FB43(iVar1) >= 0.99f)
				{
					Local_158.f_5 = UNK_0xF66E5A439A080021(UNK_0x68F4C0EC296D3901(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true), UNK_0x835730A2D89F6093(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), 2), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, false))
					{
						UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), "base", 2f, -2f, 13, 16, 1148846080, 0);
						UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 1), "base_chair", 2f, -2f, 13);
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_158.f_3, true))
					{
						UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), "base", 2f, -2f, 13, 16, 1148846080, 0);
						UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 2), "base_chair", 2f, -2f, 13);
					}
					else
					{
						UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), "base", 2f, -2f, 13, 16, 1148846080, 0);
						UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), Local_158.f_5, func_22(Local_158.f_4, Local_158.f_1, 0), "base_chair", 2f, -2f, 13);
					}
					UNK_0x914E6894744915F8(Local_158.f_5);
					func_51(5);
				}
			}
			break;
		case 7:
			iVar1 = UNK_0xF958843510932FF6(Local_158.f_5);
			if (iVar1 == -1 || UNK_0xA45992A6CE82FB43(iVar1) >= 0.99f)
			{
				func_52(0);
			}
			break;
	}
}

bool func_26()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_27(var uParam0)
{
	int iVar0;

	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_28(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_28(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_29(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_30(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_31(0))
	{
		return false;
	}
	if (UNK_0x22A8E52414415B76())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

bool func_31(int iParam0)
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_27(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = UNK_0x0D0A574C76D769AC();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!UNK_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_33(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_34()
{
	return func_35(UNK_0xD803B885F5E47A62());
}

bool func_35(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_4())
	{
		return bParam0;
	}
	if (func_39(bParam0) != -1)
	{
		iVar0 = func_2(func_39(bParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_37(bParam0, 0))
			{
				return func_36(bParam0);
			}
			return bParam0;
		}
		else if (iVar0 == 3)
		{
			return func_4();
		}
		return Global_2425662[bParam0 /*421*/].f_310.f_8;
	}
	return func_4();
}

bool func_36(bool bParam0)
{
	if (bParam0 != func_4())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_4();
}

bool func_37(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_38(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_4();
}

bool func_38(bool bParam0)
{
	if (bParam0 != func_4())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_4())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

int func_39(bool bParam0)
{
	if (bParam0 != func_4())
	{
		if (func_3(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && bParam0 == UNK_0xD803B885F5E47A62()) && func_3(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5;
		}
	}
	return -1;
}

bool func_40(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return true;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return true;
	}
	return false;
}

bool func_41()
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		bVar1 = UNK_0x117658E336116132(bVar0);
		if (func_3(bVar1, 1, 1) && !UNK_0xBC4ABD9D5FABB2A7(bVar1))
		{
			if (bVar1 != UNK_0xD803B885F5E47A62())
			{
				if (func_42(bVar1, Local_158.f_4, 0))
				{
					return false;
				}
			}
		}
		bVar0++;
	}
	return true;
}

bool func_42(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (func_3(bParam0, 1, 1))
	{
		bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			iVar1 = 0;
			while (iVar1 < iLocal_116)
			{
				if (iParam1 == -1 || iParam1 == iVar1)
				{
					if (UNK_0x3D1053F9EB43B7AD(bVar0, func_44(iVar1, 0), func_44(iVar1, 1), 1.25f, 0, true, 0))
					{
						if (bParam2)
						{
							Local_158.f_4 = iVar1;
							iLocal_125[UNK_0xD803B885F5E47A62()] = iVar1;
							Local_158.f_2 = func_43(iVar1);
						}
						return true;
					}
				}
				iVar1++;
			}
		}
	}
	return false;
}

float func_43(int iParam0)
{
	if (func_1(UNK_0xD803B885F5E47A62()))
	{
		switch (iParam0)
		{
			case 0:
				return 0f;
			case 1:
				return 0f;
			case 2:
				return 90f;
			case 3:
				return 180f;
			case 4:
				return 180f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 330f;
			case 1:
				return 330f;
			case 2:
				return 330f;
			case 3:
				return 235f;
			case 4:
				return 145f;
			case 5:
				return 145f;
			case 6:
				return 145f;
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_44(int iParam0, bool bParam1)
{
	if (func_1(UNK_0xD803B885F5E47A62()))
	{
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
					return 2703.514f, -370.7754f, -55.7809f;
				case 1:
					return 2704.614f, -370.7866f, -55.7809f;
				case 2:
					return 2706.25f, -369.9455f, -55.7809f;
				case 3:
					return 2705.38f, -368.3092f, -55.7809f;
				case 4:
					return 2704.242f, -368.2946f, -55.7809f;
				default:
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return 2704.322f, -370.7709f, -53.7809f;
				case 1:
					return 2705.475f, -370.7686f, -53.7809f;
				case 2:
					return 2706.241f, -369.1244f, -53.7809f;
				case 3:
					return 2704.588f, -368.3117f, -53.7809f;
				case 4:
					return 2703.461f, -368.3133f, -53.7809f;
				default:
					break;
			}
		}
	}
	else if (!bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 969.8056f, 55.40404f, 115.1742f;
			case 1:
				return 968.8292f, 56.27096f, 115.1742f;
			case 2:
				return 967.8247f, 56.87987f, 115.1742f;
			case 3:
				return 967.9557f, 58.79199f, 115.1742f;
			case 4:
				return 969.9387f, 58.57924f, 115.1742f;
			case 5:
				return 970.9537f, 57.93294f, 115.1742f;
			case 6:
				return 971.9705f, 57.33719f, 115.1742f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 970.5887f, 54.95844f, 117.1742f;
			case 1:
				return 969.6066f, 55.76311f, 117.1742f;
			case 2:
				return 968.5153f, 56.42958f, 117.1742f;
			case 3:
				return 967.4798f, 58.03454f, 117.1742f;
			case 4:
				return 969.1876f, 59.0316f, 117.1742f;
			case 5:
				return 970.2271f, 58.39074f, 117.1742f;
			case 6:
				return 971.2681f, 57.7982f, 117.1742f;
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

bool func_45(bool bParam0)
{
	if (bParam0 != func_4() && func_3(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

int func_46(bool bParam0)
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
	iVar0 = func_48(bParam0);
	iVar1 = func_47(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

int func_47(int iParam0)
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

int func_48(bool bParam0)
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

bool func_49()
{
	return UNK_0x8BB17FEBE0394018() != 0;
}

bool func_50()
{
	if (Global_4254512.f_910 == 1)
	{
		return true;
	}
	return false;
}

void func_51(int iParam0)
{
	Local_158 = iParam0;
}

void func_52(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (Local_158 > 2)
	{
		UNK_0x45934E8E3471AAA9(Local_158.f_5);
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
		}
		if (UNK_0xE9F78D191AD5EDBA(iLocal_117[Local_158.f_4]) && UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
		{
			vVar0 = { UNK_0x1BB04F10296A1C5E(func_22(Local_158.f_4, Local_158.f_1, 0), "enter_chair", func_21(Local_158.f_4, 1), func_20(Local_158.f_4), false, 2) };
			vVar3 = { UNK_0xEEB20D14BD38615E(func_22(Local_158.f_4, Local_158.f_1, 0), "enter_chair", func_21(Local_158.f_4, 1), func_20(Local_158.f_4), false, 2) };
			UNK_0x08841CDB215AE18F(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), vVar0, 0, 0, 1);
			UNK_0xC023D1C4BF532815(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), vVar3, 2, 1);
			UNK_0x1E9649458B15960F(UNK_0x09AD4CE7DA179533(iLocal_117[Local_158.f_4]), true);
		}
	}
	if (Local_158.f_6 != -1)
	{
		func_27(&(Local_158.f_6));
		Local_158.f_6 = -1;
	}
	if (func_29("MPJAC_NO_SIT"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	if (bParam0 && Local_158 > 2)
	{
		if (UNK_0xE9F78D191AD5EDBA(iLocal_117[Local_158.f_4]) && UNK_0x526BC32A660C89E6(iLocal_117[Local_158.f_4]))
		{
			func_53(&(iLocal_117[Local_158.f_4]));
		}
	}
	Local_158.f_3 = 0;
	if (func_1(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_a@base@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_a@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_a@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_b@base@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_b@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_b@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_c@base@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_c@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@female@var_c@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_a@base@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_a@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_a@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_b@base@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_b@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_b@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_c@base@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_c@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@clubhouse@boardroom@crew@male@var_c@base_r@");
	}
	else
	{
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_a@base@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_a@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_a@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_b@base@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_b@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_b@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_c@base@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_c@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@female@var_c@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_a@base@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_a@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_a@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_b@base@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_b@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_b@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_c@base@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_c@base_l@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@crew@male@var_c@base_r@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@boss@female@");
		UNK_0x8D17794CE3273D70("anim@amb@office@boardroom@boss@male@");
	}
	if (Local_158 > 1)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 185, false);
		}
		UNK_0x0674E58A79778E99(&(Global_1676377.f_6), 11);
	}
	Local_158.f_4 = -1;
	iLocal_125[UNK_0xD803B885F5E47A62()] = -1;
	func_51(1);
}

void func_53(var uParam0)
{
	bool bVar0;

	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!UNK_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
}

bool func_54()
{
	if (func_55() == 0)
	{
		return true;
	}
	return false;
}

int func_55()
{
	return Global_1312467.f_18;
}

bool func_56()
{
	return Global_1312877;
}

void func_57()
{
	if (Local_158 > 3)
	{
		UNK_0x2103752056F874E1();
		UNK_0x770C703CAD045196(0);
		UNK_0x69FCF499804D6AE7(0);
		UNK_0x3584F71E5CA29322(19);
		UNK_0x3584F71E5CA29322(2);
		UNK_0x5A89B88F77C0FC3B();
		func_65(1);
		func_59(0);
		func_58();
	}
}

void func_58()
{
	Global_22211.f_6 = 1;
}

void func_59(int iParam0)
{
	if (func_64())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_31(0))
		{
			func_60(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_60(int iParam0)
{
	if (func_64())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_63())
		{
			func_62(1, 1);
		}
		else
		{
			func_62(0, 0);
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
	if (!func_61())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_61()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_31(0))
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

bool func_63()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_64()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_65(bool bParam0)
{
	if (bParam0)
	{
		if (func_66())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_66()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_67()
{
	func_52(0);
	func_68();
}

void func_68()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_69()
{
	UNK_0x37AD2AB54480FA6A(32, 0, func_73());
	func_71(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&iLocal_117, 8);
	UNK_0x35B62793EAE9ADDF(&iLocal_125, 33);
	if (func_1(UNK_0xD803B885F5E47A62()))
	{
		iLocal_116 = 5;
	}
	else
	{
		iLocal_116 = 7;
	}
	UNK_0xE57F9AD44D9539F1(iLocal_116);
	if (!func_70())
	{
		func_67();
	}
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		func_67();
	}
}

bool func_70()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!UNK_0x8CD06866876216F2())
		{
			return false;
		}
		if (UNK_0x67CCE3DFA3467CAD())
		{
			return true;
		}
		if (func_15())
		{
			return false;
		}
		if (func_13(157))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		SYSTEM::WAIT(0);
	}
	return false;
}

int func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_68();
			}
			else
			{
				return 0;
			}
		}
		if (!func_72())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_68();
					}
					else
					{
						return 0;
					}
				}
				if (func_15())
				{
					if (!bParam2)
					{
						func_68();
					}
					else
					{
						return 0;
					}
				}
				if (func_13(157))
				{
					if (!bParam2)
					{
						func_68();
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
					func_68();
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
				func_68();
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
			func_68();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_72()
{
	return Global_1312854;
}

var func_73()
{
	var uVar0;

	uVar0 = Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_6;
	return uVar0;
}

