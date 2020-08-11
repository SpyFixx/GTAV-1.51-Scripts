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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 32;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
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
	var uLocal_103 = 32;
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
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	vector3 vLocal_140[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_237 = 0;
	bool bLocal_238 = false;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	bool bLocal_245 = false;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_237 = -1;
	func_208(ScriptParam_0);
	while (true)
	{
		func_207();
		if (func_197())
		{
			func_187();
		}
		switch (func_186(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_185() == 2)
				{
					vLocal_140[UNK_0x57270EE11514DC67() /*3*/] = 2;
				}
				else if (func_185() == 6)
				{
					vLocal_140[UNK_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			case 2:
				if (func_185() == 2)
				{
					if (!func_184(0))
					{
						func_74();
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_2, true))
					{
						func_8();
					}
				}
				else if (func_185() == 6)
				{
					vLocal_140[UNK_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			case 5:
				func_6(&(vLocal_61.f_2));
				if (func_5(&(vLocal_61.f_2)))
				{
					vLocal_140[UNK_0x57270EE11514DC67() /*3*/] = 6;
				}
				break;
			case 3:
				vLocal_140[UNK_0x57270EE11514DC67() /*3*/] = 6;
			case 6:
				func_187();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_185())
			{
				case 0:
					vLocal_61.x = 2;
					break;
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						vLocal_61.x = 6;
					}
					break;
				case 6:
					break;
			}
		}
	}
}

bool func_1()
{
	if (UNK_0xEAE0D21A50E6C7F4(vLocal_61.y, false))
	{
		return true;
	}
	return false;
}

void func_2()
{
	if (UNK_0xBFF81ED3B99522C7())
	{
	}
}

void func_3()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0xBFF81ED3B99522C7())
	{
		if (iLocal_139 == 0)
		{
			UNK_0x0674E58A79778E99(&bLocal_238, false);
			UNK_0x5D96D8530B3D0904(&bLocal_238, true);
		}
		bVar0 = iLocal_139;
		if (UNK_0x81A93C8315C28F58(bVar0))
		{
			bVar1 = UNK_0x4B2BFE4A3BC248ED(bVar0);
			if (!UNK_0xEAE0D21A50E6C7F4(vLocal_140[iLocal_139 /*3*/].f_2, false))
			{
				UNK_0x0674E58A79778E99(&bLocal_238, true);
			}
			if (func_4(bVar1, 0, 1))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[iLocal_139 /*876*/].f_146, 4))
				{
				}
			}
		}
		iLocal_139++;
		if (iLocal_139 == 32)
		{
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, true))
			{
				UNK_0x5D96D8530B3D0904(&(vLocal_61.f_1), false);
			}
			UNK_0x5D96D8530B3D0904(&bLocal_238, false);
			iLocal_139 = 0;
		}
	}
}

bool func_4(bool bParam0, bool bParam1, bool bParam2)
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

bool func_5(var uParam0)
{
	if (uParam0->f_1)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8()
{
	if (iLocal_237 != -1)
	{
		func_72(iLocal_237, 0);
		func_71(iLocal_237, 0);
		iLocal_237 = -1;
	}
	UNK_0x5D96D8530B3D0904(&(vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_2), false);
	UNK_0x5D96D8530B3D0904(&(vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_2), true);
	func_70(10, 0);
	func_69(0);
	func_30(1);
	func_23();
	func_9(43, 1, 0);
	func_9(42, 1, 0);
}

void func_9(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 0, 0))
		{
			if (bParam2 && Global_98796.f_18[iParam0])
			{
				if (func_21(iParam0) == 3 && !func_20(iParam0))
				{
					func_19(iParam0);
					func_18(iParam0, 0, 0);
					func_11(iParam0, 1, 0);
					func_10(iParam0);
				}
				else
				{
					func_18(iParam0, 1, 0);
					func_10(iParam0);
				}
			}
			else
			{
				func_18(iParam0, 0, 0);
				func_11(iParam0, 1, 0);
				func_10(iParam0);
			}
		}
		else
		{
			func_11(iParam0, 1, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 0, 0))
	{
		func_11(iParam0, 0, 0);
		func_11(iParam0, 1, 0);
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_11(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x0674E58A79778E99(&(Global_98796.f_1357[iParam0]), bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_17() == 0)
		{
			bVar0 = func_15(func_16(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_12(func_16(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_12(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_13(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

bool func_13(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;
	if (bVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			bVar0 = iVar1;
		}
		else
		{
			bVar0 = false;
			Global_2548146 = 1;
		}
	}
	return bVar0;
}

int func_14()
{
	return Global_1312745;
}

int func_15(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_13(bParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
		case 1:
			return 828;
		case 2:
			return 829;
		case 3:
			return 830;
		case 4:
			return 831;
		case 5:
			return 832;
		case 6:
			return 833;
		case 7:
			return 834;
		case 8:
			return 835;
		case 9:
			return 836;
		case 10:
			return 837;
		case 11:
			return 838;
		case 12:
			return 839;
		case 13:
			return 840;
		case 14:
			return 841;
		case 15:
			return 843;
		case 16:
			return 844;
		case 17:
			return 845;
		case 18:
			return 846;
		case 19:
			return 847;
		case 20:
			return 848;
		case 21:
			return 849;
		case 22:
			return 850;
		case 23:
			return 851;
		case 24:
			return 852;
		case 25:
			return 853;
		case 26:
			return 854;
		case 27:
			return 855;
		case 28:
			return 856;
		case 29:
			return 857;
		case 30:
			return 858;
		case 31:
			return 859;
		case 32:
			return 860;
		case 33:
			return 861;
		case 34:
			return 862;
		case 35:
			return 863;
		case 36:
			return 864;
		case 37:
			return 865;
		case 38:
			return 866;
		case 39:
			return 867;
		case 40:
			return 871;
		case 41:
			return 872;
		case 42:
			return 873;
		case 43:
			return 874;
		case 44:
			return 9977;
		case 45:
			return 3808;
		case 46:
			return 5383;
		case 47:
			return 6155;
		case 48:
			return 7232;
		case 49:
			return 7878;
		case 52:
			return 8912;
		case 50:
			return 8265;
		case 51:
			return 8267;
		default:
			break;
	}
	return 11511;
}

int func_17()
{
	return Global_30768;
}

void func_18(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98796.f_1357[iParam0]), bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_17() == 0)
		{
			bVar0 = func_15(func_16(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_12(func_16(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_19(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_18(iParam0, 10, 1);
		func_18(iParam0, 19, 1);
	}
}

bool func_20(int iParam0)
{
	return func_22(iParam0, 5, 1);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
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
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

bool func_22(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_17() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_15(func_16(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_23()
{
	if (!func_29())
	{
		return;
	}
	if (!UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_24();
}

void func_24()
{
	func_26();
	func_25(0);
}

void func_25(bool bParam0)
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

void func_26()
{
	if (!func_28())
	{
	}
	if (func_29())
	{
		UNK_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_27();
		UNK_0x35F2C6537D10DAEB();
	}
}

void func_27()
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

bool func_28()
{
	if (!func_29())
	{
		return false;
	}
	UNK_0x18B60B994182620C(&(Global_1312585.f_12));
	func_27();
	return UNK_0xB165082A56EE6E7F();
}

bool func_29()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

void func_30(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1312448)
	{
		if (!func_68())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574637[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_65(UNK_0xD803B885F5E47A62(), bParam0);
	iVar2 = func_63(iVar1, bParam0);
	if (!func_62(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574637[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574637[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 255)
	{
		iVar3 = func_61(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_59(iVar4))
			{
				func_50(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_44(func_45(59, 0, 0), 0);
	func_40(func_45(135, 0, 0), 1);
	func_38(func_45(22, 0, 0), func_45(73, 0, 0));
	if (func_68())
	{
		if (func_37(77, -1))
		{
			func_36(1);
			func_35(1);
		}
	}
	if (func_34() || func_33())
	{
		func_31(77, 1, -1, 1);
		if (UNK_0x8CD06866876216F2())
		{
			func_9(28, 1, 0);
			func_9(29, 1, 0);
			func_9(30, 1, 0);
			func_9(31, 1, 0);
			func_9(32, 1, 0);
			func_9(33, 1, 0);
			func_9(34, 1, 0);
			func_9(35, 1, 0);
			func_9(36, 1, 0);
			func_9(37, 1, 0);
			func_9(38, 1, 0);
		}
	}
	if (func_45(21, 0, 0))
	{
		UNK_0x0F30FBDF741A7E3E(0);
	}
	Global_968399 = 0;
}

void func_31(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (func_32())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_13(bParam2)];
		if (iVar0 != 0)
		{
			UNK_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

bool func_32()
{
	return true;
	return false;
}

bool func_33()
{
	return Global_1312865;
}

bool func_34()
{
	return Global_1312867;
}

void func_35(bool bParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	func_9(28, bParam0, 0);
	func_9(30, bParam0, 0);
	func_9(31, bParam0, 0);
	func_9(33, bParam0, 0);
	func_9(34, bParam0, 0);
	func_9(38, bParam0, 0);
}

void func_36(bool bParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	func_9(29, bParam0, 0);
	func_9(32, bParam0, 0);
	func_9(36, bParam0, 0);
	func_9(35, bParam0, 0);
	func_9(37, bParam0, 0);
}

bool func_37(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_13(bParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_38(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_9(0, bParam0, 1);
	func_9(1, bParam0, 1);
	func_9(2, bParam0, 1);
	func_9(3, bParam0, 1);
	func_9(4, bParam0, 1);
	func_9(5, bParam0, 1);
	func_9(6, bParam0, 1);
	func_9(7, bParam0, bVar0);
	func_9(8, bParam0, 1);
	func_9(9, bParam0, 1);
	func_9(10, bParam0, 1);
	func_9(11, bParam0, 1);
	func_9(12, bParam0, bVar0);
	func_9(13, bParam0, 1);
	func_9(21, bParam0, 1);
	func_9(14, bParam0, 1);
	func_9(15, bParam0, 1);
	func_9(16, bParam0, 1);
	func_9(17, bParam0, 1);
	func_9(18, bParam0, 1);
	func_9(19, bParam0, 1);
	func_9(20, bParam0, 1);
	func_9(22, bParam0, 1);
	func_9(23, bParam0, 1);
	func_9(24, bParam0, 1);
	func_9(25, bParam0, 1);
	func_9(26, bParam0, 1);
	func_9(27, bParam0, 1);
	func_39(1, !bParam1);
	if (!bVar0)
	{
		func_19(12);
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_98796.f_9[iParam0] = 1;
	}
	else
	{
		Global_98796.f_9[iParam0] = 0;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = func_184(0);
	if (Global_262145.f_63 == 1 && func_45(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(44))
		{
			func_19(44);
		}
	}
	if (bParam0)
	{
		if (func_41(0) > 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1735), 10);
		}
	}
}

int func_41(int iParam0)
{
	int iVar0;

	if (Global_1671743[iParam0 /*8*/] == -1)
	{
		iVar0 = func_15(func_43(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_42(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0 /*8*/] = iVar0;
	}
	return Global_1671743[iParam0 /*8*/];
}

void func_42(int iParam0, bool bParam1)
{
	Global_1671743[iParam0 /*8*/] = bParam1;
	func_12(func_43(iParam0), bParam1, -1, 1, 0);
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9978;
		default:
			break;
	}
	return 9978;
}

void func_44(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = func_184(0);
	func_9(39, bParam0, 0);
	func_9(40, bParam0, 0);
	func_9(41, bParam0, 0);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(43, bParam0, 0);
		func_9(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(39))
		{
			func_19(39);
		}
		if (!func_20(40))
		{
			func_19(40);
		}
		if (!func_20(41))
		{
			func_19(41);
		}
		if (!func_20(42))
		{
			func_19(42);
		}
		if (!func_20(43))
		{
			func_19(43);
		}
	}
}

bool func_45(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return true;
		}
		if (iParam0 == 74)
		{
			return true;
		}
		if (func_47(UNK_0xD803B885F5E47A62(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return true;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return true;
		}
	}
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return true;
		}
	}
	if (func_34() || func_33())
	{
		return true;
	}
	bVar0 = iParam0;
	iVar1 = (bVar0 / 32);
	bVar0 = (bVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_46())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (bParam2)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1574637[iVar1], bVar0);
}

bool func_46()
{
	bool bVar0;

	if (Global_1312448)
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 23))
	{
		return true;
	}
	if (func_34())
	{
		return true;
	}
	if (func_33())
	{
		return true;
	}
	bVar0 = Global_1388048[func_13(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, 7))
	{
		UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 23);
		return true;
	}
	return false;
}

bool func_47(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_68())
	{
		return false;
	}
	if (func_49())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	iVar0 = func_48(iParam1);
	bVar1 = iVar0;
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_730, bVar1);
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		case 19:
			return 1;
		case 12:
			return 2;
		case 31:
			return 3;
		case 20:
			return 4;
		case 18:
			return 5;
		case 2:
			return 6;
		case 76:
			return 7;
		case 22:
			return 8;
		case 53:
			return 9;
		case 34:
			return 10;
		case 152:
			return 11;
		case 85:
			return 12;
		case 84:
			return 13;
		case 0:
			return 14;
		case 1:
			return 15;
		case 153:
			return 16;
		case 151:
			return 17;
		case 14:
			return 18;
		case 15:
			return 19;
		case 24:
			return 20;
		case 30:
			return 21;
		case 46:
			return 22;
		case 47:
			return 23;
		case 54:
			return 24;
		case 51:
			return 25;
		case 60:
			return 26;
		case 62:
			return 27;
		case 66:
			return 28;
		case 69:
			return 29;
		case 154:
			return 30;
		case 82:
			return 31;
		case 157:
			return 32;
		default:
			break;
	}
	return 1;
}

bool func_49()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146, 3);
}

void func_50(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_58(-1))
			{
				if (!func_68())
				{
					return;
				}
			}
			if (!func_58(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_57() && !func_56())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_55())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_58(-1))
				{
					if (!func_51())
					{
						return;
					}
				}
			}
		}
		bVar0 = iParam0;
		iVar1 = (bVar0 / 32);
		bVar0 = (bVar0 % 32);
		UNK_0x5D96D8530B3D0904(&(Global_1574637[iVar1]), bVar0);
	}
}

bool func_51()
{
	bool bVar0;

	if (func_54(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	bVar0 = Global_1388048[func_13(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
	{
		func_52(1);
		return true;
	}
	return false;
}

void func_52(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 25))
		{
			func_53(UNK_0xD803B885F5E47A62(), 12);
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 25);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 25))
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 25);
	}
}

void func_53(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_48(iParam1);
	bVar1 = iVar0;
	UNK_0x5D96D8530B3D0904(&(Global_1590535[iParam0 /*876*/].f_730), bVar1);
}

bool func_54(int iParam0)
{
	if (func_34())
	{
		return true;
	}
	if (func_33())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_142, 25);
}

bool func_55()
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
	{
		return true;
	}
	bVar0 = Global_1388048[func_13(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 6);
		}
		return true;
	}
	if (func_34())
	{
		return true;
	}
	if (func_33())
	{
		return true;
	}
	return false;
}

bool func_56()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146, 7);
}

bool func_57()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_34())
	{
		return true;
	}
	if (func_33())
	{
		return true;
	}
	return func_37(121, -1);
}

bool func_58(bool bParam0)
{
	return func_37(123, bParam0);
}

bool func_59(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_34())
	{
		return true;
	}
	if (func_33())
	{
		return true;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			bVar0 = func_15(func_60(iParam0), -1, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, bVar1))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

int func_60(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		case 1:
			return 1201;
		case 2:
			return 1202;
		case 3:
			return 1203;
		case 4:
			return 1204;
		case 5:
			return 1206;
		case 6:
			return 3815;
		case 7:
			return 4018;
		case 8:
			return 5472;
		default:
			break;
	}
	return 1200;
}

int func_61(int iParam0)
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		case 21:
			return 2;
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_58(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		case 97:
		case 107:
			return 7;
		case 4:
			return 8;
		case 19:
			return 8;
		case 29:
			return 10;
		case 8:
			return 11;
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		case 89:
			return 13;
		case 31:
			return 14;
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		case 109:
		case 88:
			return 16;
		case 74:
		case 100:
			return 17;
		case 6:
			return 18;
		case 20:
			return 19;
		case 62:
		case 108:
		case 130:
			return 20;
		case 65:
		case 93:
			return 21;
		case 63:
		case 104:
			return 25;
		case 77:
		case 106:
			return 30;
		case 81:
		case 98:
			return 35;
		case 75:
		case 95:
			return 40;
		case 105:
			return 45;
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_62(bool bParam0)
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_34())
	{
		return true;
	}
	if (func_33())
	{
		return true;
	}
	return func_37(119, bParam0);
}

int func_63(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_64(iParam0, 0);
}

int func_64(int iParam0, int iParam1)
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

int func_65(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(bParam0);
}

int func_66(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_13(-1)];
			}
			else if (func_67(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_13(-1)];
	}
	return 0;
}

bool func_67(bool bParam0)
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

bool func_68()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_34())
	{
		return true;
	}
	if (func_33())
	{
		return true;
	}
	return func_37(120, -1);
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146), 18);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146), 18);
	}
}

void func_70(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208, bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208, bParam0))
	{
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208), bParam0);
	}
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[iParam0]))
	{
	}
}

void func_72(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_73(39, bParam1);
			break;
		case 40:
			func_73(40, bParam1);
			break;
		case 41:
			func_73(41, bParam1);
			break;
		case 42:
			func_73(42, bParam1);
			break;
		case 43:
			func_73(43, bParam1);
			break;
		case 44:
			func_73(44, bParam1);
			break;
		default:
			break;
	}
}

void func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 8, 0))
		{
			func_18(iParam0, 8, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 8, 0))
	{
		func_11(iParam0, 8, 0);
		func_10(iParam0);
	}
}

void func_74()
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;

	switch (vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_2, false))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 5))
					{
						if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
						{
							if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
							{
								UNK_0x0674E58A79778E99(&bLocal_238, 10);
							}
							if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
								{
									UNK_0x0674E58A79778E99(&bLocal_238, 3);
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 7))
								{
									UNK_0x0674E58A79778E99(&bLocal_238, 7);
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 8))
								{
									UNK_0x0674E58A79778E99(&bLocal_238, 8);
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 11))
								{
									UNK_0x0674E58A79778E99(&bLocal_238, 11);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 2))
								{
									if (iLocal_237 != -1)
									{
										func_72(iLocal_237, 0);
										func_71(iLocal_237, 0);
										iLocal_237 = -1;
									}
									UNK_0x0674E58A79778E99(&bLocal_238, 3);
									func_180("FM_CTUT_CAR", 0);
									UNK_0x5D96D8530B3D0904(&bLocal_238, 2);
								}
							}
							else
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 2))
								{
									UNK_0x0674E58A79778E99(&bLocal_238, 2);
								}
								bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
								if ((!func_152(bVar0, 0, &uVar1) || !func_151(bVar0)) || func_150(UNK_0x134B62B726CEC8E6(bVar0)))
								{
									if (func_149())
									{
										func_148(0);
									}
									if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
									{
										UNK_0x0674E58A79778E99(&bLocal_238, 3);
									}
									if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 7))
									{
										func_180("FM_CTUT_ANO", 0);
										UNK_0x5D96D8530B3D0904(&bLocal_238, 7);
									}
									if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 8))
									{
										if (func_143())
										{
											if (UNK_0xDF1306B443CD3D15(bVar0, 0))
											{
												if (iLocal_246 > 0)
												{
													if (func_150(UNK_0x134B62B726CEC8E6(bVar0)))
													{
														func_142("FM_CTUT_PRM", -1);
														UNK_0x5D96D8530B3D0904(&bLocal_238, 8);
														UNK_0x5D96D8530B3D0904(&bLocal_238, 11);
														func_7(&uLocal_243, 0, 0);
													}
													else if (!func_151(bVar0))
													{
														UNK_0x5D96D8530B3D0904(&bLocal_238, 8);
														func_142("FM_CTUT_DRI", -1);
													}
													else if (!func_152(bVar0, 0, &uVar1))
													{
														UNK_0x5D96D8530B3D0904(&bLocal_238, 8);
														func_142("FM_CTUT_HMD", -1);
													}
												}
											}
										}
									}
									else if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 11))
									{
										if (func_141(&uLocal_243, 30000, 0))
										{
											if (func_150(UNK_0x134B62B726CEC8E6(bVar0)))
											{
												if (func_143())
												{
													func_142("FM_CTUT_PRM", -1);
													func_140(&uLocal_243);
													func_7(&uLocal_243, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 7))
									{
										UNK_0x0674E58A79778E99(&bLocal_238, 7);
									}
									if (!func_149())
									{
										func_148(1);
									}
									if (func_139("FM_CTUT_HMD"))
									{
										UNK_0xA37A90C62806D848(1);
									}
									if (!func_138() || (func_138() && UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
										{
											func_180("FM_CTUT_MOD", 0);
											UNK_0x5D96D8530B3D0904(&bLocal_238, 3);
											func_140(&uLocal_239);
											func_7(&uLocal_239, 0, 0);
											if (!func_137(UNK_0xD803B885F5E47A62()))
											{
												func_69(1);
											}
											if (iLocal_237 == -1)
											{
												iLocal_237 = func_121(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 4, -1);
												if (iLocal_237 != -1)
												{
													func_72(iLocal_237, 1);
													func_71(iLocal_237, 1);
												}
											}
										}
									}
									else if (func_138() && !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
										{
											UNK_0x5D96D8530B3D0904(&bLocal_238, 3);
										}
									}
								}
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 4))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
								{
									if (func_141(&uLocal_239, 10000, 0))
									{
										if (!UNK_0x798A3F1296751F46())
										{
											if (!func_120())
											{
												if (func_143())
												{
													UNK_0x5D96D8530B3D0904(&bLocal_238, 4);
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 10))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 9))
								{
									func_180("FM_IHELP_LCP", 0);
									if (iLocal_237 != -1)
									{
										func_72(iLocal_237, 0);
										func_71(iLocal_237, 0);
										iLocal_237 = -1;
									}
									UNK_0x0674E58A79778E99(&bLocal_238, 3);
									UNK_0x0674E58A79778E99(&bLocal_238, 2);
									UNK_0x0674E58A79778E99(&bLocal_238, 7);
									UNK_0x0674E58A79778E99(&bLocal_238, 8);
									UNK_0x5D96D8530B3D0904(&bLocal_238, 10);
								}
							}
							if (func_149())
							{
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
									{
										bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
										if ((!func_152(bVar0, 0, &uVar2) || !func_151(bVar0)) || func_150(UNK_0x134B62B726CEC8E6(bVar0)))
										{
											func_148(0);
										}
									}
									else
									{
										func_148(0);
									}
								}
							}
						}
					}
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3) || (func_138() && UNK_0xEAE0D21A50E6C7F4(bLocal_238, 10)))
					{
						if (func_138())
						{
							if (((func_139("FM_IHELP_CAR") || func_139("FM_IHELP_MOD")) || func_139("FM_CMOD_GPS")) || func_139("FM_CMOD_STOL"))
							{
								UNK_0xA37A90C62806D848(1);
							}
							if (func_117("FM_IHELP_LCP"))
							{
								func_23();
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 9))
							{
								if (func_115())
								{
									UNK_0x5D96D8530B3D0904(&bLocal_238, 9);
									UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1729), 25);
									if (func_117("FM_CTUT_MOD"))
									{
										func_23();
									}
								}
							}
							if (func_114())
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1729, 25))
								{
									UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1729), 25);
								}
								if (!func_113(UNK_0xD803B885F5E47A62()))
								{
									if (!func_112(UNK_0xD803B885F5E47A62()))
									{
										func_111(1);
										bLocal_245 = true;
										func_30(1);
									}
								}
								if ((func_117("FM_CTUT_RSP") || func_117("FM_IHELP_PTRK")) || func_117("FM_IHELP_PINS"))
								{
									func_23();
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 9))
							{
								if (func_110(UNK_0xD803B885F5E47A62()) || (!func_108() && func_107()))
								{
									iVar3 = func_104(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0));
									if (iVar3 > 0)
									{
										if (!func_117("FM_CTUT_REP"))
										{
											func_180("FM_CTUT_REP", 0);
										}
									}
									else if (!func_102())
									{
										if (!func_117("FM_CTUT_RSP"))
										{
											func_180("FM_CTUT_RSP", 0);
										}
									}
									else if (!func_100())
									{
										if (!func_117("FM_IHELP_PTRK"))
										{
											func_180("FM_IHELP_PTRK", 0);
										}
									}
									else if (!func_97())
									{
										if (!func_117("FM_IHELP_PINS"))
										{
											func_180("FM_IHELP_PINS", 0);
										}
									}
								}
							}
						}
						else if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 9))
						{
							if (!func_114())
							{
								if (UNK_0x0F1CCD77290EE12F())
								{
									UNK_0x0674E58A79778E99(&bLocal_238, 9);
									UNK_0x0674E58A79778E99(&bLocal_238, 3);
									UNK_0x0674E58A79778E99(&bLocal_238, 10);
									func_23();
									iLocal_237 = -1;
									func_85(UNK_0xD803B885F5E47A62(), 1, 0, 0);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_2, false))
							{
								UNK_0x5D96D8530B3D0904(&(vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_2), false);
							}
						}
					}
					else if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 9))
					{
						UNK_0x0674E58A79778E99(&bLocal_238, 9);
						UNK_0x0674E58A79778E99(&bLocal_238, 3);
						UNK_0x0674E58A79778E99(&bLocal_238, 10);
						func_23();
						iLocal_237 = -1;
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_238, 5))
					{
						if (((func_82(UNK_0xD803B885F5E47A62(), 1, 0) || func_81()) || func_80() > 0) || (!func_78() && !func_138()))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_238, 5);
							func_23();
						}
					}
					else if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()) || func_138())
					{
						if (UNK_0x0F1CCD77290EE12F())
						{
							if ((((!func_82(UNK_0xD803B885F5E47A62(), 1, 0) && !func_81()) && func_80() == 0) && func_78()) || func_138())
							{
								if (!func_77(&uLocal_241))
								{
									func_7(&uLocal_241, 0, 0);
								}
								else if (func_141(&uLocal_241, 7000, 0) || func_138())
								{
									UNK_0x0674E58A79778E99(&bLocal_238, 5);
									UNK_0x0674E58A79778E99(&bLocal_238, 2);
									UNK_0x0674E58A79778E99(&bLocal_238, 3);
									UNK_0x0674E58A79778E99(&bLocal_238, 7);
									UNK_0x0674E58A79778E99(&bLocal_238, 10);
									func_140(&uLocal_241);
									if (iLocal_237 != -1)
									{
										func_72(iLocal_237, 0);
										func_71(iLocal_237, 0);
										iLocal_237 = -1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_2, true))
	{
		if (func_76())
		{
			func_8();
		}
		else
		{
			func_75();
		}
	}
}

void func_75()
{
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
	{
		return;
	}
	if (func_138())
	{
		return;
	}
	switch (iLocal_246)
	{
		case 0:
			if (!UNK_0xFEBC1E4EC9E001F0())
			{
				func_142("FM_IHELP_CAR", -1);
				iLocal_246++;
			}
			break;
		case 1:
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
			{
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					func_142("FM_IHELP_MOD", -1);
					iLocal_246++;
				}
			}
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						if (!UNK_0xFEBC1E4EC9E001F0())
						{
							if (!func_77(&uLocal_247))
							{
								func_7(&uLocal_247, 0, 0);
							}
							else if (func_141(&uLocal_247, 1000, 0))
							{
								func_142("FM_CMOD_GPS", -1);
								iLocal_246++;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
			{
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					if (!func_77(&uLocal_247))
					{
						func_7(&uLocal_247, 0, 0);
					}
					else if (func_141(&uLocal_247, 1000, 0))
					{
						func_142("FM_CMOD_STOL", -1);
						iLocal_246++;
					}
				}
			}
			break;
		case 4:
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
			{
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					if (!func_77(&uLocal_247))
					{
						func_7(&uLocal_247, 0, 0);
					}
					else if (func_141(&uLocal_247, 5000, 0))
					{
						func_142("FM_IHELP_BLP", -1);
						iLocal_246++;
					}
				}
			}
			break;
		case 5:
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_238, 3))
			{
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					iLocal_246++;
				}
			}
			break;
	}
}

bool func_76()
{
	if (UNK_0xEAE0D21A50E6C7F4(vLocal_140[UNK_0x57270EE11514DC67() /*3*/].f_2, false))
	{
		return true;
	}
	return false;
}

bool func_77(var uParam0)
{
	return uParam0->f_1;
}

bool func_78()
{
	if (func_79() == 0)
	{
		return true;
	}
	return false;
}

int func_79()
{
	return Global_1312467.f_18;
}

int func_80()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_197;
}

bool func_81()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, false);
}

bool func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_83(iParam0))
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

bool func_83(int iParam0)
{
	return func_84(iParam0);
}

bool func_84(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, false);
}

void func_85(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;

	if (bParam1)
	{
		if (UNK_0xC6F697B2083C83D4())
		{
			UNK_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_96())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			bParam3 = true;
		}
	}
	if (!UNK_0x8CD06866876216F2())
	{
		bVar0 = iParam2;
		UNK_0x98E4DC66A651C9FA(bParam0, bParam1, bVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || UNK_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_78())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (UNK_0x40B8C182D63932FC(bParam0) && (UNK_0xE1DBBD6CE209517C(bParam0) || bParam3 == 1))
		{
			if (bParam3 && UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bParam0), 0))
			{
				return;
			}
			bVar27 = UNK_0x9539D44F3E4492F6(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && UNK_0x8CD06866876216F2())
				{
					UNK_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_94(UNK_0xD803B885F5E47A62(), 0) && !func_93()))
				{
					UNK_0x4A4806F9D471E491(bVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (UNK_0x8CD06866876216F2() && !bVar19)
					{
						UNK_0x30134914EFF0516E(0);
					}
					Global_2425662[bParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_90(0, 0, 0);
					if (bVar25)
					{
						UNK_0x066C43E677C08D5C();
					}
				}
				if (!func_89(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
				{
					if (!bVar22)
					{
						UNK_0x20641932E5104B25(bVar27, true, 0);
					}
				}
				if (!UNK_0xD59B17D2DFF98E26(bVar27))
				{
					if (!bVar21)
					{
						UNK_0x1E9649458B15960F(bVar27, false);
					}
					UNK_0x120A395B0ECB8EA5(bVar27, true);
				}
				else if (!bVar21)
				{
					UNK_0x1E9649458B15960F(bVar27, false);
				}
				UNK_0x25C5402CC10F76CD(bVar27, true);
				UNK_0x62DE699599F0417E(bParam0, 0);
				UNK_0x7569764C11F70C0A(bParam0, 0);
				if (UNK_0xCCBA4C0B3BD2AB7B(bVar27) && UNK_0x8A83E339B374E53A(bVar27))
				{
					UNK_0xE7EE28867F07D06D(bVar27);
				}
				UNK_0x46CB381A452EF99D(bVar27, 1);
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()) == 0)
				{
					func_88();
					func_87();
				}
				if (UNK_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (UNK_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[bParam0 /*421*/].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_89(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
				{
					if (!bVar22)
					{
						UNK_0x20641932E5104B25(bVar27, !bVar15, 0);
					}
					if (!UNK_0xD59B17D2DFF98E26(bVar27))
					{
						if (!bVar21)
						{
							UNK_0x1E9649458B15960F(bVar27, bVar16);
						}
						if (!bVar16)
						{
							UNK_0x120A395B0ECB8EA5(bVar27, true);
						}
					}
					if (func_86(Global_4456448.f_232883))
					{
						UNK_0x1E9649458B15960F(bVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					UNK_0x62DE699599F0417E(bParam0, 0);
				}
				else
				{
					UNK_0x62DE699599F0417E(bParam0, 1);
				}
				UNK_0x25C5402CC10F76CD(bVar27, bVar17);
				if (bVar3)
				{
					if (!UNK_0x2EF364CB160B45F2(bVar27) && !UNK_0x405E212DDE472467(bVar27, 0))
					{
						UNK_0x327AAEE25F323797(bVar27);
					}
				}
			}
			bVar28 = false;
			if (bVar2)
			{
				bVar28 = (bVar28 || 2);
			}
			if (bVar3)
			{
				bVar28 = (bVar28 || 4);
			}
			if (bVar4)
			{
				bVar28 = (bVar28 || 8);
			}
			if (bVar5)
			{
				bVar28 = (bVar28 || 16);
			}
			if (bVar6)
			{
				bVar28 = (bVar28 || 32);
			}
			if (bVar7)
			{
				bVar28 = (bVar28 || 64);
			}
			if (bVar8)
			{
				bVar28 = (bVar28 || 128);
			}
			if (bVar9)
			{
				bVar28 = (bVar28 || 256);
			}
			if (bVar10)
			{
				bVar28 = (bVar28 || 512);
			}
			if (bVar11)
			{
				bVar28 = (bVar28 || 1024);
			}
			if (bVar12)
			{
				bVar28 = (bVar28 || 2048);
			}
			if (bVar13)
			{
				bVar28 = (bVar28 || 4096);
			}
			UNK_0x98E4DC66A651C9FA(bParam0, bParam1, bVar28);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_88()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_89(bool bParam0)
{
	int iVar0;

	if (UNK_0x405E212DDE472467(bParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = UNK_0xD1960163A3042274(bParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

void func_90(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (UNK_0x437347B10A200C4B(bParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bParam1))
			{
				if (!UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), UNK_0x83FACCC48B68F9D1(bParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_92();
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, true))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						UNK_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), true);
			}
		}
		if (func_94(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0xD51AAA59D51D8056(bParam0, bParam1, 1);
		}
		else
		{
			UNK_0x7AEFB64DFEBF60B0(bParam0, bParam1);
		}
		UNK_0xF374D547F2AC15B0(bParam0, bParam1);
		func_91(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_91(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_92()
{
	int iVar0;

	if (!UNK_0xB7DDF77EF860941D())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = UNK_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), false);
		}
	}
}

bool func_93()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_94(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_95(-1, 0) == 8;
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

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

bool func_96()
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

bool func_97()
{
	if (Global_98796.f_1423)
	{
		return true;
	}
	if (func_98() >= 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1323615[func_98() /*141*/].f_102, 2))
		{
			return true;
		}
	}
	return false;
}

int func_98()
{
	if (Global_2097152[func_99() /*10930*/].f_6174.f_2 >= 307)
	{
		Global_2097152[func_99() /*10930*/].f_6174.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_99() /*10930*/].f_6174.f_2;
}

int func_99()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

bool func_100()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_101(bVar0, 1) || Global_98796.f_1422)
		{
			return true;
		}
	}
	return false;
}

int func_101(bool bParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && (!bParam1 || UNK_0xDF1306B443CD3D15(bParam0, 0)))
		{
			if (UNK_0x30F813723591D02E(bParam0, "Player_Vehicle"))
			{
				if (UNK_0x1E2DFB0EF4BB4566(bParam0, "Player_Vehicle") == UNK_0xE86C2816EDC6CAF0(UNK_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_102()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_103(bVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_103(bool bParam0)
{
	return UNK_0x30F813723591D02E(bParam0, "Sprayed_Vehicle_Decorator");
}

int func_104(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	fVar3 = UNK_0xA471721ED5268046(bParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (UNK_0x6EE94F60DA2A2273(bParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (UNK_0xD96C5EC6FCB061BA(bParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (SYSTEM::TO_FLOAT(UNK_0x7F6DC62EA9922664(bParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (UNK_0xAFB99709A487B3A4(bParam0))
	{
		iVar8 += 50;
	}
	if (UNK_0xDBF86CCBD1D2F357(bParam0, 1))
	{
		iVar8 += 50;
	}
	else if (UNK_0x0B3E621E4A1D12D7(bParam0, 1))
	{
		iVar8 += 25;
	}
	if (UNK_0xDBF86CCBD1D2F357(bParam0, 0))
	{
		iVar8 += 50;
	}
	else if (UNK_0x0B3E621E4A1D12D7(bParam0, 0))
	{
		iVar8 += 25;
	}
	if (!UNK_0xB8BCFE7E6CA4F9ED(bParam0))
	{
		iVar10 += 20;
		if (!UNK_0xD6CC9546EDEF00CE(bParam0, 6))
		{
			iVar10 += 40;
		}
		if (!UNK_0xD6CC9546EDEF00CE(bParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		iVar1 = 0;
		if (UNK_0x1150BCE24B1630AC(bParam0, false))
		{
			iVar1++;
		}
		if (UNK_0x1150BCE24B1630AC(bParam0, true))
		{
			iVar1++;
		}
		if (UNK_0x1150BCE24B1630AC(bParam0, 2))
		{
			iVar1++;
		}
		if (UNK_0x1150BCE24B1630AC(bParam0, 3))
		{
			iVar1++;
		}
		if (UNK_0x1150BCE24B1630AC(bParam0, 4))
		{
			iVar1++;
		}
		if (UNK_0x1150BCE24B1630AC(bParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (UNK_0xE347785EEDFB544D(bParam0))
	{
		iVar8 += 15;
	}
	if (UNK_0x25D57666028A7E5A(bParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	bVar2 = false;
	while (bVar2 < 8)
	{
		if (UNK_0x464B3D84B739AE72(bParam0, bVar2, 0))
		{
			iVar1++;
		}
		bVar2++;
	}
	iVar7 = iVar1 * 25;
	if (UNK_0xA081CDBBF4F02A19(bParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_106(UNK_0x134B62B726CEC8E6(bParam0), 0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11551));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11551)))
		{
			iVar4 = Global_262145.f_11549;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11550)
		{
			iVar0 = Global_262145.f_11550;
		}
	}
	else if (func_105(bParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11554));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11554)))
		{
			iVar4 = Global_262145.f_11552;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11553)
		{
			iVar0 = Global_262145.f_11553;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

bool func_105(bool bParam0)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("TECHNICAL2"):
		case joaat("BOXVILLE5"):
		case joaat("WASTELANDER"):
		case joaat("PHANTOM2"):
		case joaat("VOLTIC2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("RUINER2"):
		case joaat("BLAZER5"):
			return true;
	}
	return false;
}

bool func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
		case joaat("SABREGT2"):
			if (!Global_262145.f_14219)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("TORNADO5"):
			if (!Global_262145.f_14220)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("VIRGO2"):
			if (!Global_262145.f_14218)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14221)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14223)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("FACTION3"):
			if (!Global_262145.f_14222)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("COMET3"):
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("DIABLOUS2"):
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("FCR2"):
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ELEGY"):
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("NERO2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ITALIGTB2"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SPECTER2"):
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("INSURGENT3"):
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}
	return false;
}

bool func_107()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_108()
{
	if (((((func_109(39) || func_109(40)) || func_109(41)) || func_109(42)) || func_109(43)) || func_109(44))
	{
		return true;
	}
	return false;
}

bool func_109(int iParam0)
{
	return func_22(iParam0, 20, 1);
}

bool func_110(int iParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_146, 19);
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146), 20);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146), 20);
	}
}

bool func_112(int iParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_146, 20);
}

bool func_113(int iParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_146, 21);
}

bool func_114()
{
	if (!func_100())
	{
		return false;
	}
	if (!func_97())
	{
		return false;
	}
	if (!func_102())
	{
		return false;
	}
	return true;
}

bool func_115()
{
	if (((((func_116(39) || func_116(40)) || func_116(41)) || func_116(42)) || func_116(43)) || func_116(44))
	{
		return true;
	}
	return false;
}

bool func_116(int iParam0)
{
	return func_22(iParam0, 6, 1);
}

bool func_117(bool bParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (!func_29())
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
	return func_118(bParam0);
}

bool func_118(bool bParam0)
{
	if (!func_29())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_119(bParam0);
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_119(bool bParam0)
{
	if (!func_29())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

bool func_120()
{
	return Global_1312877;
}

int func_121(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_21(iVar0))
		{
			iVar4 = iVar0;
			if (func_136(iVar4))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(vParam0, func_122(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_122(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
		case 4:
			return 1208.333f, -470.917f, 65.208f;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		case 45:
			return func_133(Global_100839);
		case 46:
			if (Global_1590374 != func_132())
			{
				if (func_131(Global_1590374))
				{
					return func_124(2, 2);
				}
				else if (func_123(Global_1590374))
				{
					return func_124(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
		case 50:
			return Global_1696048;
		case 51:
			return 1100f, 220f, -50f;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_123(int iParam0)
{
	if (iParam0 != func_132())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_124(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar6;

	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_132())
	{
		if (iParam1 == 3)
		{
			if (func_125(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_125(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_125(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

bool func_125(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar6;
	struct<4> Var12;
	vector3 vVar18;

	if (!func_130(iParam3, &Var0))
	{
		return false;
	}
	if (!func_130(iParam1, &vVar6))
	{
		return false;
	}
	if (!bParam4)
	{
		Var12 = { func_128(iParam0) };
	}
	else
	{
		Var12 = { func_127(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_126(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_126(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { UNK_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return true;
}

Vector3 func_126(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

struct<6> func_127(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_128(int iParam0)
{
	return func_129(iParam0);
}

struct<6> func_129(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_130(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_131(int iParam0)
{
	if (iParam0 != func_132())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return true;
		}
	}
	return false;
}

int func_132()
{
	return -1;
}

Vector3 func_133(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
		case 2:
			return 1060f, -2990f, -35f;
		case 3:
			return 974.9542f, -3000.091f, -35f;
		case 6:
			return -1586.36f, -566.6f, 106.17f;
		case 7:
			return -1389.87f, -465.17f, 82.68f;
		case 8:
			return -145.81f, -590.2f, 171.13f;
		case 9:
			return -62.49f, -823.55f, 288.74f;
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
		case 10:
			return 1103.562f, -3000f, -40f;
		case 11:
			return 938.3077f, -3196.112f, -100f;
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
		case 13:
			return 520.0001f, 4750f, -70f;
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
		case 16:
			return -1421.015f, -3012.587f, -80f;
		case 17:
			if (func_134() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		default:
			return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

int func_134()
{
	return func_135(UNK_0xD803B885F5E47A62());
}

int func_135(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_136(int iParam0)
{
	bool bVar0;

	switch (iParam0)
	{
		case 39:
			bVar0 = UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[39]);
			break;
		case 40:
			bVar0 = UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[40]);
			break;
		case 41:
			bVar0 = UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[41]);
			break;
		case 42:
			bVar0 = UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[42]);
			break;
		case 43:
			bVar0 = UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[43]);
			break;
		case 44:
			bVar0 = UNK_0xE4EDC4B0E92C078B(Global_98796.f_235[44]);
			break;
	}
	return bVar0;
}

bool func_137(int iParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_146, 18);
}

bool func_138()
{
	if (((((func_20(39) || func_20(40)) || func_20(41)) || func_20(42)) || func_20(43)) || func_20(44))
	{
		return true;
	}
	return false;
}

bool func_139(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_140(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_141(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_7(uParam0, bParam2, 0);
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

void func_142(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_143()
{
	if (((((((((((((!func_4(UNK_0xD803B885F5E47A62(), 1, 1) || UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9())) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || func_147(8, -1)) || func_147(15, -1)) || func_146()) || func_147(3, -1)) || UNK_0xFEBC1E4EC9E001F0()) || func_82(UNK_0xD803B885F5E47A62(), 1, 0)) || func_81()) || func_107()) || func_145()) || func_144()) || UNK_0x798A3F1296751F46())
	{
		return false;
	}
	return true;
}

bool func_144()
{
	return Global_2439138.f_3047.f_578;
}

bool func_145()
{
	return Global_98796.f_346 > 0;
}

bool func_146()
{
	return Global_2394809;
}

bool func_147(bool bParam0, int iParam1)
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

void func_148(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1732), 4);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_1732), 4);
	}
}

bool func_149()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1732, 4);
}

bool func_150(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ADDER"):
		case joaat("BULLET"):
		case joaat("CARBONIZZARE"):
		case joaat("CHEETAH"):
		case joaat("COGCABRIO"):
		case joaat("COQUETTE"):
		case joaat("ENTITYXF"):
		case joaat("EXEMPLAR"):
		case joaat("FELTZER2"):
		case joaat("INFERNUS"):
		case joaat("JB700"):
		case joaat("MONROE"):
		case joaat("NINEF"):
		case joaat("NINEF2"):
		case joaat("RAPIDGT2"):
		case joaat("RAPIDGT"):
		case joaat("STINGER"):
		case joaat("STINGERGT"):
		case joaat("SUPERD"):
		case joaat("VACCA"):
		case joaat("ZTYPE"):
		case joaat("AKUMA"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("DOUBLE"):
		case joaat("HEXER"):
		case joaat("ELEGY2"):
		case joaat("KHAMELION"):
		case joaat("HOTKNIFE"):
		case joaat("CARBONRS"):
		case joaat("VOLTIC"):
		case joaat("COMET2"):
		case joaat("SURANO"):
		case joaat("BANSHEE"):
		case joaat("BLAZER3"):
		case joaat("JESTER"):
		case joaat("MASSACRO"):
		case joaat("TURISMOR"):
		case joaat("ZENTORNO"):
		case joaat("HUNTLEY"):
		case joaat("ALPHA"):
		case joaat("PARADISE"):
		case joaat("BIFTA"):
		case joaat("KALAHARI"):
		case joaat("BTYPE"):
		case joaat("THRUST"):
		case joaat("DUBSTA3"):
		case joaat("BLADE"):
		case joaat("GLENDALE"):
		case joaat("RHAPSODY"):
		case joaat("WARRENER"):
		case joaat("PANTO"):
		case joaat("PIGALLE"):
		case joaat("COQUETTE2"):
		case joaat("MONSTER"):
		case joaat("SOVEREIGN"):
		case joaat("INNOVATION"):
		case joaat("HAKUCHOU"):
		case joaat("FUROREGT"):
		case joaat("BOXVILLE4"):
		case joaat("CASCO"):
		case joaat("DINGHY3"):
		case joaat("ENDURO"):
		case joaat("GBURRITO2"):
		case joaat("GUARDIAN"):
		case joaat("HYDRA"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("KURUMA"):
		case joaat("KURUMA2"):
		case joaat("LECTRO"):
		case joaat("MULE3"):
		case joaat("SAVAGE"):
		case joaat("TECHNICAL"):
		case joaat("VALKYRIE"):
		case joaat("VELUM2"):
		case joaat("BLISTA2"):
		case joaat("DODO"):
		case joaat("DUKES"):
		case joaat("MARSHALL"):
		case joaat("STALION"):
		case joaat("SUBMERSIBLE2"):
		case joaat("BLISTA3"):
			return true;
	}
	switch (iParam0)
	{
		case joaat("BUFFALO3"):
		case joaat("DOMINATOR2"):
		case joaat("DUKES2"):
		case joaat("GAUNTLET2"):
		case joaat("STALION2"):
		case joaat("BLIMP2"):
		case joaat("JESTER2"):
		case joaat("MASSACRO2"):
		case joaat("RATLOADER2"):
		case joaat("SLAMVAN"):
		case joaat("BARRACKS3"):
		case joaat("SLAMVAN2"):
		case joaat("BRAWLER"):
		case joaat("CHINO"):
		case joaat("COQUETTE3"):
		case joaat("FELTZER3"):
		case joaat("LUXOR2"):
		case joaat("OSIRIS"):
		case joaat("SWIFT2"):
		case joaat("T20"):
		case joaat("TORO"):
		case joaat("VINDICATOR"):
		case joaat("VIRGO"):
		case joaat("WINDSOR"):
		case joaat("FACTION"):
		case joaat("MOONBEAM"):
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
		case joaat("BTYPE2"):
		case joaat("LURCHER"):
		case joaat("FACTION3"):
		case joaat("MINIVAN2"):
		case joaat("SABREGT2"):
		case joaat("SLAMVAN3"):
		case joaat("TORNADO5"):
		case joaat("VIRGO2"):
		case joaat("VIRGO3"):
		case joaat("BALLER3"):
		case joaat("BALLER4"):
		case joaat("BALLER5"):
		case joaat("BALLER6"):
		case joaat("COG55"):
		case joaat("COG552"):
		case joaat("COGNOSCENTI"):
		case joaat("COGNOSCENTI2"):
		case joaat("MAMBA"):
		case joaat("NIGHTSHADE"):
		case joaat("SCHAFTER3"):
		case joaat("SCHAFTER5"):
		case joaat("SCHAFTER4"):
		case joaat("SCHAFTER6"):
		case joaat("VERLIERER2"):
		case joaat("TAMPA"):
		case joaat("BANSHEE2"):
		case joaat("SULTANRS"):
		case joaat("BTYPE3"):
		case joaat("BESTIAGTS"):
		case joaat("BRICKADE"):
		case joaat("FMJ"):
		case joaat("NIMBUS"):
		case joaat("PFISTER811"):
		case joaat("PROTOTIPO"):
		case joaat("RUMPO3"):
		case joaat("SEVEN70"):
		case joaat("TUG"):
		case joaat("VOLATUS"):
		case joaat("WINDSOR2"):
		case joaat("XLS"):
		case joaat("XLS2"):
		case joaat("REAPER"):
		case joaat("LE7B"):
		case joaat("OMNIS"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("TROPHYTRUCK"):
		case joaat("TROPHYTRUCK2"):
		case joaat("CONTENDER"):
		case joaat("CLIFFHANGER"):
		case joaat("BF400"):
		case joaat("TYRUS"):
		case joaat("SHEAVA"):
		case joaat("RALLYTRUCK"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("LYNX"):
		case joaat("AVARUS"):
		case joaat("BLAZER4"):
		case joaat("CHIMERA"):
		case joaat("DAEMON2"):
		case joaat("DEFILER"):
		case joaat("ESSKEY"):
		case joaat("FAGGIO3"):
		case joaat("FAGGIO"):
		case joaat("HAKUCHOU2"):
		case joaat("MANCHEZ"):
		case joaat("NIGHTBLADE"):
		case joaat("RAPTOR"):
		case joaat("RATBIKE"):
		case joaat("SANCTUS"):
		case joaat("SHOTARO"):
		case joaat("TORNADO6"):
		case joaat("VORTEX"):
		case joaat("WOLFSBANE"):
		case joaat("YOUGA2"):
		case joaat("ZOMBIEA"):
		case joaat("ZOMBIEB"):
		case joaat("COMET2"):
		case joaat("COMET3"):
		case joaat("DIABLOUS"):
		case joaat("DIABLOUS2"):
		case joaat("ELEGY2"):
		case joaat("ELEGY"):
		case joaat("FCR"):
		case joaat("FCR2"):
		case joaat("ITALIGTB"):
		case joaat("ITALIGTB2"):
		case joaat("NERO"):
		case joaat("NERO2"):
		case joaat("PENETRATOR"):
		case joaat("SPECTER"):
		case joaat("SPECTER2"):
		case joaat("TEMPESTA"):
		case joaat("BLAZER5"):
		case joaat("BOXVILLE5"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("PHANTOM2"):
		case joaat("RUINER2"):
		case joaat("RUINER3"):
		case joaat("TECHNICAL2"):
		case joaat("VOLTIC2"):
		case joaat("WASTELANDER"):
		case joaat("GP1"):
		case joaat("INFERNUS2"):
		case joaat("RUSTON"):
		case joaat("TURISMO2"):
		case joaat("ARDENT"):
		case joaat("VAGNER"):
		case joaat("CHEETAH2"):
		case joaat("NIGHTSHARK"):
		case joaat("TORERO"):
		case joaat("XA21"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("TRAILERSMALL2"):
		case joaat("INSURGENT3"):
		case joaat("TECHNICAL3"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("CYCLONE"):
		case joaat("RAPIDGT3"):
		case joaat("RETINUE"):
		case joaat("VISIONE"):
		case joaat("VIGILANTE"):
			return true;
	}
	switch (iParam0)
	{
		case joaat("DELUXO"):
		case joaat("STROMBERG"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
		case joaat("AKULA"):
		case joaat("THRUSTER"):
		case joaat("BARRAGE"):
		case joaat("VOLATOL"):
		case joaat("COMET4"):
		case joaat("NEON"):
		case joaat("STREITER"):
		case joaat("SENTINEL3"):
		case joaat("YOSEMITE"):
		case joaat("SC1"):
		case joaat("AUTARCH"):
		case joaat("GT500"):
		case joaat("HUSTLER"):
		case joaat("REVOLTER"):
		case joaat("PARIAH"):
		case joaat("RAIDEN"):
		case joaat("SAVESTRA"):
		case joaat("RIATA"):
		case joaat("HERMES"):
		case joaat("COMET5"):
		case joaat("Z190"):
		case joaat("VISERIS"):
		case joaat("KAMACHO"):
		case joaat("GB200"):
		case joaat("FAGALOA"):
		case joaat("ELLIE"):
		case joaat("ISSI3"):
		case joaat("MICHELLI"):
		case joaat("FLASHGT"):
		case joaat("HOTRING"):
		case joaat("TEZERACT"):
		case joaat("TYRANT"):
		case joaat("DOMINATOR3"):
		case joaat("TAIPAN"):
		case joaat("ENTITY2"):
		case joaat("JESTER3"):
		case joaat("CHEBUREK"):
		case joaat("CARACARA"):
		case joaat("SEASPARROW"):
		case joaat("MULE4"):
		case joaat("POUNDER2"):
		case joaat("SPEEDO4"):
		case joaat("OPPRESSOR2"):
		case joaat("SCRAMJET"):
		case joaat("FREECRAWLER"):
		case joaat("MENACER"):
		case joaat("PATRIOT2"):
		case joaat("STAFFORD"):
		case joaat("SWINGER"):
		case joaat("TERBYTE"):
		case joaat("STRIKEFORCE"):
		case joaat("PBUS2"):
		case joaat("BLIMP3"):
		case joaat("CLIQUE"):
		case joaat("DEVESTE"):
		case joaat("DEVIANT"):
		case joaat("IMPALER"):
		case joaat("SCARAB"):
		case joaat("SCHLAGEN"):
		case joaat("TOROS"):
		case joaat("VAMOS"):
		case joaat("TULIP"):
		case joaat("MONSTER3"):
		case joaat("IMPALER2"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("ITALIGTO"):
		case joaat("DEATHBIKE"):
		case joaat("SLAMVAN4"):
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("DEATHBIKE2"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
		case joaat("RCBANDITO"):
		case joaat("ZR380"):
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case joaat("LOCUST"):
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -447711397:
		case 1416466158:
		case -208911803:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case joaat("OUTLAW"):
		case 740289177:
		case 301304410:
		case 2031587082:
		case -1960756985:
		case 1693751655:
		case 960812448:
		case -2122646867:
		case joaat("CLUB"):
		case 2134119907:
		case 67753863:
		case 1107404867:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case 1181339704:
		case -1728685474:
			return true;
	}
	return false;
}

bool func_151(bool bParam0)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
		if (iVar0 == UNK_0x16F2683693E537C9())
		{
			return true;
		}
	}
	return false;
}

bool func_152(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;

	*uParam2 = 0;
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return false;
	}
	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	if ((!func_178(bVar0, bParam1, uParam2) && !func_177(UNK_0xD803B885F5E47A62())) && !func_161(bParam0))
	{
		return false;
	}
	if (func_177(UNK_0xD803B885F5E47A62()))
	{
		if (func_160(bVar0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bVar1 = false;
	if (func_159(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bVar0) || UNK_0xC41A9202669A24C4(bVar0)))
	{
		bVar1 = true;
	}
	if (((UNK_0x56E1CD81AE700E98(bParam0) && !func_157(bParam0)) && !bVar1) && !(func_156(UNK_0x134B62B726CEC8E6(bParam0)) && func_154(UNK_0xD803B885F5E47A62())))
	{
		switch (UNK_0x134B62B726CEC8E6(bParam0))
		{
			case joaat("CERBERUS"):
			case joaat("CERBERUS2"):
			case joaat("CERBERUS3"):
			case joaat("MONSTER3"):
			case joaat("MONSTER4"):
			case joaat("MONSTER5"):
				*uParam2 = 16;
				break;
			default:
				*uParam2 = 2;
				break;
		}
		return false;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		if ((func_153(bParam0) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("SENTINEL2")) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return false;
		}
	}
	return true;
}

bool func_153(bool bParam0)
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

bool func_154(bool bParam0)
{
	if (bParam0 != func_132())
	{
		if (func_4(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_155(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

int func_155(int iParam0)
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

bool func_156(int iParam0)
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return true;
	}
	return false;
}

bool func_157(bool bParam0)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("HALFTRACK"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("BRUISER"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			return true;
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (func_158(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
			break;
		case -1254331310:
		case joaat("BURRITO2"):
			return true;
	}
	return false;
}

bool func_158(bool bParam0)
{
	if (bParam0 != func_132())
	{
		if (func_4(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_155(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_159(bool bParam0)
{
	if (bParam0 != func_132())
	{
		if (func_4(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_155(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_160(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("AVENGER"):
		case joaat("THRUSTER"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
			return true;
	}
	return false;
}

bool func_161(bool bParam0)
{
	if (func_176(UNK_0xD803B885F5E47A62()) || func_175(UNK_0xD803B885F5E47A62()))
	{
		if (func_162(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_162(bool bParam0)
{
	if ((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (func_165(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x30F813723591D02E(bParam0, "Player_Vehicle"))
	{
		if (UNK_0x1E2DFB0EF4BB4566(bParam0, "Player_Vehicle") == UNK_0xE86C2816EDC6CAF0(UNK_0xD803B885F5E47A62()))
		{
			if (func_163(bParam0))
			{
				return true;
			}
			switch (UNK_0x134B62B726CEC8E6(bParam0))
			{
				case joaat("ARDENT"):
				case joaat("NIGHTSHARK"):
				case joaat("DELUXO"):
				case joaat("STROMBERG"):
				case joaat("COMET4"):
				case joaat("REVOLTER"):
				case joaat("SAVESTRA"):
				case joaat("VISERIS"):
				case joaat("CARACARA"):
				case 1416466158:
					return true;
			}
		}
	}
	return false;
}

bool func_163(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_164(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_164(int iParam0)
{
	switch (iParam0)
	{
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("HALFTRACK"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("INSURGENT3"):
		case joaat("VIGILANTE"):
		case joaat("BARRAGE"):
		case joaat("MENACER"):
		case joaat("SCRAMJET"):
			return true;
	}
	return false;
}

bool func_165(bool bParam0, bool bParam1)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_167(UNK_0x134B62B726CEC8E6(bParam0), 0))
			{
				if (Global_2537071.f_301 == bParam0)
				{
					return true;
				}
				else if (func_166(bParam0) != -1 && !bParam1)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_166(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2439138.f_628[iVar0] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_167(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_106(iParam0, 0))
		{
			return true;
		}
	}
	switch (iParam0)
	{
		case joaat("FACTION"):
		case joaat("BUCCANEER"):
		case joaat("CHINO"):
		case joaat("MOONBEAM"):
		case joaat("PRIMO"):
		case joaat("VOODOO2"):
			return func_174();
		case joaat("SABREGT"):
			if (Global_262145.f_14219)
			{
				return func_173();
			}
			break;
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_262145.f_14220)
			{
				return func_173();
			}
			break;
		case joaat("VIRGO3"):
			if (Global_262145.f_14218)
			{
				return func_173();
			}
			break;
		case joaat("MINIVAN"):
			if (Global_262145.f_14221)
			{
				return func_173();
			}
			break;
		case joaat("SLAMVAN"):
			if (Global_262145.f_14223)
			{
				return func_173();
			}
			break;
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_172();
		case joaat("COMET2"):
			if (Global_262145.f_18669)
			{
				return func_171();
			}
			break;
		case joaat("DIABLOUS"):
			if (Global_262145.f_18671)
			{
				return func_171();
			}
			break;
		case joaat("FCR"):
			if (Global_262145.f_18675)
			{
				return func_171();
			}
			break;
		case joaat("ELEGY2"):
			if (Global_262145.f_18672)
			{
				return func_171();
			}
			break;
		case joaat("NERO"):
			if (Global_262145.f_18679)
			{
				return func_171();
			}
			break;
		case joaat("ITALIGTB"):
			if (Global_262145.f_18677)
			{
				return func_171();
			}
			break;
		case joaat("SPECTER"):
			if (Global_262145.f_18682)
			{
				return func_171();
			}
			break;
		case joaat("TECHNICAL"):
			if (Global_262145.f_20625)
			{
				return func_170();
			}
			break;
		case joaat("INSURGENT"):
			if (Global_262145.f_20626)
			{
				return func_170();
			}
			break;
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_169();
		case joaat("GLENDALE"):
			if (func_169() || func_168())
			{
				return true;
			}
			break;
		case joaat("IMPALER"):
			return func_169();
		case joaat("ISSI3"):
			return func_169();
		case joaat("GARGOYLE"):
			return func_169();
		case joaat("DOMINATOR"):
			return func_169();
		case joaat("DOMINATOR2"):
			return func_169();
		case joaat("IMPERATOR"):
			return func_169();
		case joaat("IMPERATOR2"):
			return func_169();
		case joaat("IMPERATOR3"):
			return func_169();
		case joaat("DEATHBIKE"):
			return func_169();
		case joaat("DEATHBIKE2"):
			return func_169();
		case joaat("DEATHBIKE3"):
			return func_169();
		case joaat("IMPALER2"):
		case joaat("BRUTUS"):
		case joaat("BRUISER"):
		case joaat("SLAMVAN4"):
		case joaat("ISSI4"):
		case joaat("MONSTER3"):
		case joaat("SCARAB"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return func_169();
		case joaat("YOUGA2"):
			if (Global_262145.f_28524)
			{
				return func_168();
			}
			break;
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_168();
			}
			break;
		case joaat("MANANA"):
			if (Global_262145.f_28523)
			{
				return func_168();
			}
			break;
		case joaat("PEYOTE"):
			if (Global_262145.f_28873)
			{
				return func_168();
			}
			break;
		case joaat("YOSEMITE"):
			if (Global_262145.f_28872)
			{
				return func_168();
			}
			break;
	}
	return false;
}

bool func_168()
{
	return UNK_0xC146D5FBD23C6954(1815791016);
}

bool func_169()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPCHRISTMAS2018"));
}

bool func_170()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPGUNRUNNING"));
}

bool func_171()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPIMPORTEXPORT"));
}

bool func_172()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPJANUARY2016"));
}

bool func_173()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER2"));
}

bool func_174()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER"));
}

bool func_175(bool bParam0)
{
	if (bParam0 != func_132())
	{
		if (func_4(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_132())
			{
				return func_155(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_176(bool bParam0)
{
	if (bParam0 != func_132())
	{
		if (func_4(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_132())
			{
				return func_155(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_177(bool bParam0)
{
	if (bParam0 != func_132())
	{
		if (func_4(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_155(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_178(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;

	if (!bParam1)
	{
		if ((((((((((((((bParam0 == joaat("POLICE") || bParam0 == joaat("POLICEOLD1")) || bParam0 == joaat("POLICEOLD2")) || bParam0 == joaat("POLICE2")) || bParam0 == joaat("POLICE3")) || bParam0 == joaat("POLICE4")) || bParam0 == joaat("FBI")) || bParam0 == joaat("FBI2")) || bParam0 == joaat("POLMAV")) || bParam0 == joaat("POLICEB")) || bParam0 == joaat("POLICET")) || bParam0 == joaat("RIOT")) || bParam0 == joaat("SHERIFF")) || bParam0 == joaat("PRANGER")) || bParam0 == joaat("SHERIFF2"))
		{
			*uParam2 = 1;
			return false;
		}
	}
	if (((((((bParam0 == joaat("AMBULANCE") || bParam0 == joaat("FIRETRUK")) || bParam0 == joaat("TAXI")) || bParam0 == joaat("LGUARD")) || bParam0 == joaat("RIPLEY")) || bParam0 == joaat("DILETTANTE2")) || bParam0 == joaat("AIRBUS")) || bParam0 == joaat("AIRTUG"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((bParam0 == joaat("BURRITO") || bParam0 == joaat("RUMPO2")) || bParam0 == joaat("SPEEDO")) || bParam0 == joaat("SPEEDO2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((bParam0 == joaat("SCORCHER") || bParam0 == joaat("BMX")) || bParam0 == joaat("CRUISER")) || bParam0 == joaat("FIXTER"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((((((((((((((((((bParam0 == joaat("CADDY") || bParam0 == joaat("FORKLIFT")) || bParam0 == joaat("CADDY2")) || bParam0 == joaat("CRUSADER")) || bParam0 == joaat("TRIBIKE")) || bParam0 == joaat("TRIBIKE2")) || bParam0 == joaat("TRIBIKE3")) || bParam0 == joaat("TRACTOR")) || bParam0 == joaat("TRACTOR2")) || bParam0 == joaat("MOWER")) || bParam0 == joaat("TORNADO4")) || bParam0 == joaat("DOCKTUG")) || bParam0 == joaat("STRETCH")) || bParam0 == joaat("BISON2")) || bParam0 == joaat("BISON3")) || bParam0 == joaat("BENSON")) || bParam0 == joaat("POUNDER")) || bParam0 == joaat("SUBMERSIBLE")) || bParam0 == joaat("EMPEROR3")) || bParam0 == joaat("DUNE2"))
	{
		*uParam2 = 2;
		return false;
	}
	bVar0 = false;
	if (func_159(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bParam0) || UNK_0xC41A9202669A24C4(bParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!UNK_0x8E39AC3C76C8AA58(bParam0) && !UNK_0x7D8B2A8F9EA82DB7(bParam0)) && bParam0 != joaat("BLAZER")) && bParam0 != joaat("BLAZER2")) && bParam0 != joaat("BLAZER3")) && bParam0 != joaat("BLAZER4")) && bParam0 != joaat("BLAZER5")) && bParam0 != joaat("CHIMERA")) && bParam0 != joaat("TRAILERLARGE")) && bParam0 != joaat("TRAILERSMALL2")) && bParam0 != 916547552) && bParam0 != 301304410) && !bVar0)
	{
		*uParam2 = 2;
		return false;
	}
	if (bParam0 == joaat("MONSTER"))
	{
		*uParam2 = 2;
		return false;
	}
	if ((bParam0 == joaat("INSURGENT") || bParam0 == joaat("TECHNICAL")) || bParam0 == joaat("LIMO2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (func_179(bParam0))
		{
			*uParam2 = 2;
			return false;
		}
	}
	if (!UNK_0x8CD06866876216F2())
	{
		if (bParam0 == joaat("INSURGENT") || bParam0 == joaat("INSURGENT2"))
		{
			*uParam2 = 2;
		}
	}
	return true;
}

bool func_179(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("FORKLIFT"):
			return true;
	}
	return false;
}

void func_180(char* sParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_118(sParam0))
	{
		return;
	}
	func_24();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_183();
	func_182(bParam1);
	func_181();
}

void func_181()
{
	UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), true);
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), false);
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_1312585.f_59), false);
}

void func_183()
{
	Global_1312585.f_10 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
}

bool func_184(bool bParam0)
{
	bool bVar0;

	if (Global_1312448)
	{
		return true;
	}
	if (func_34())
	{
		return true;
	}
	if (func_33())
	{
		return true;
	}
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1726, 26))
		{
			bVar0 = func_15(1191, -1, 0);
			if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 23))
			{
				return false;
			}
		}
	}
	return func_37(122, -1);
}

int func_185()
{
	return vLocal_61.x;
}

int func_186(int iParam0)
{
	return vLocal_140[iParam0 /*3*/];
}

void func_187()
{
	func_23();
	func_70(10, 0);
	if (func_55())
	{
		func_189();
	}
	if (iLocal_237 != -1)
	{
		func_72(iLocal_237, 0);
		func_71(iLocal_237, 0);
	}
	if (!func_184(0))
	{
		if (func_112(UNK_0xD803B885F5E47A62()) || bLocal_245)
		{
			func_31(122, 1, -1, 1);
		}
	}
	func_69(0);
	func_188();
}

void func_188()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_189()
{
	if (!func_196(1, -1))
	{
		func_194(1, -1);
	}
	if (func_120() && func_17() == 0)
	{
	}
	else
	{
		UNK_0x45019D71A0DF8B62(0);
	}
	if (func_193(1))
	{
		UNK_0xED41266DE64A57FD(1);
	}
	else
	{
		UNK_0xED41266DE64A57FD(0);
	}
	Global_2450632.f_643 = 0;
	if (func_190())
	{
		if (!func_37(133, -1))
		{
			func_31(133, 1, -1, 1);
		}
	}
}

bool func_190()
{
	if (func_192() && func_191(0))
	{
		return true;
	}
	return false;
}

var func_191(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_192()
{
	return func_191(func_14() + 1);
}

bool func_193(int iParam0)
{
	return Global_1662155.f_16[iParam0 /*44*/].f_3;
}

void func_194(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_14();
	}
	Global_1387909 = 0;
	if (UNK_0xE0DC536BD2AC0301() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			UNK_0xD5F10CECBB7D51B6(false, bParam1);
			iVar1 = func_195(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			break;
		default:
			iVar1 = func_195(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			if (!UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0))
			{
				UNK_0x5D96D8530B3D0904(&bVar0, bParam0);
				UNK_0xD5F10CECBB7D51B6(bVar0, bParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_31(120, 0, bParam1, 1);
			func_31(124, 0, bParam1, 1);
			func_31(115, 0, bParam1, 1);
			func_31(119, 0, bParam1, 1);
			func_31(121, 0, bParam1, 1);
			func_31(122, 0, bParam1, 1);
			func_31(125, 0, bParam1, 1);
			func_12(1303, 0, bParam1, 1, 0);
			func_12(7233, 0, bParam1, 1, 0);
			break;
	}
}

int func_195(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_14();
	}
	switch (bParam0)
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

bool func_196(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_14();
	}
	iVar0 = func_195(bParam1);
	bVar1 = UNK_0x0A4C9A3D51EAE31F(iVar0);
	return UNK_0xEAE0D21A50E6C7F4(bVar1, bParam0);
}

bool func_197()
{
	var uVar0;

	func_204(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_203())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_202())
	{
		return true;
	}
	if (func_201(159))
	{
		if (!func_200())
		{
			return true;
		}
	}
	if (func_201(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_198() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_198()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_198()
{
	switch (func_17())
	{
		case 0:
			return func_199();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_199()
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

bool func_200()
{
	return Global_2450632.f_598;
}

bool func_201(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_202()
{
	return Global_2460680;
}

bool func_203()
{
	return Global_2450632.f_593;
}

void func_204(var uParam0)
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
					func_205(iVar0);
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

void func_205(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_4(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_206(bVar4, &bVar5))
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

bool func_206(bool bParam0, bool bParam1)
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

void func_207()
{
	SYSTEM::WAIT(0);
}

void func_208(struct<21> Param0)
{
	func_214(func_215(Param0), Param0);
	func_212(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&vLocal_61, 78);
	UNK_0x35B62793EAE9ADDF(&vLocal_140, 97);
	UNK_0x256D93AFAE851A7A(0);
	if (!func_211())
	{
		func_187();
	}
	func_70(10, 1);
	func_209();
}

void func_209()
{
	UNK_0x45019D71A0DF8B62(1);
	func_210(1, -1);
	UNK_0xED41266DE64A57FD(1);
	if (func_37(133, -1))
	{
		func_31(133, 0, -1, 1);
	}
	Global_2450632.f_643 = 1;
}

void func_210(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_14();
	}
	switch (bParam0)
	{
		case 0:
			UNK_0xD5F10CECBB7D51B6(false, bParam1);
			break;
		default:
			iVar1 = func_195(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0))
			{
				UNK_0x0674E58A79778E99(&bVar0, bParam0);
				UNK_0xD5F10CECBB7D51B6(bVar0, bParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_31(120, 0, bParam1, 1);
			func_31(124, 0, bParam1, 1);
			func_31(115, 0, bParam1, 1);
			func_31(119, 0, bParam1, 1);
			break;
	}
}

bool func_211()
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
		if (func_203())
		{
			return false;
		}
		if (func_201(157))
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

int func_212(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_188();
			}
			else
			{
				return 0;
			}
		}
		if (!func_213())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0;
					}
				}
				if (func_203())
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0;
					}
				}
				if (func_201(157))
				{
					if (!bParam2)
					{
						func_188();
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
					func_188();
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
				func_188();
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
			func_188();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_213()
{
	return Global_1312854;
}

void func_214(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_188();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_215(int iParam0)
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

