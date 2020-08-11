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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 32;
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
	var uLocal_116 = 0;
	struct<150> Local_117 = { 4, 0, 0, 0, 0, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (UNK_0x8CD06866876216F2())
	{
		func_205(ScriptParam_0);
	}
	else
	{
		func_196(0);
	}
	while (true)
	{
		func_195();
		if (func_184())
		{
			func_196(0);
		}
		if (func_181())
		{
			func_196(0);
		}
		func_2();
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_178();
	if (func_177(0))
	{
		func_165();
	}
	else if (func_177(1))
	{
		if (func_164())
		{
			func_138();
		}
		else
		{
			func_130();
		}
	}
	else if (func_177(2))
	{
		if (func_113())
		{
			func_112(3);
		}
		func_103();
		if (func_99())
		{
			return;
		}
		func_90();
		func_89();
		func_60();
		func_49();
		func_47();
		func_3();
	}
	else if (func_177(3))
	{
		func_196(1);
	}
}

void func_3()
{
	func_46();
	func_39(0);
	func_24();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_5(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_6()
{
	int iVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 4))
	{
		if (func_22(0, -1, 0))
		{
			func_21(-1);
			func_20(21, "BLIP_184", -1);
			if (UNK_0x91E3F625EF57450D(0))
			{
				func_20(29, "CELL_284", -1);
			}
			else
			{
				func_20(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (UNK_0x91E3F625EF57450D(0))
			{
				iVar0 = 237;
			}
			func_19(iVar0, "BLIP_39", -1, 0);
			func_19(80, "MOVE_DRONE_RE", -1, 0);
			UNK_0x5D96D8530B3D0904(&(Local_117.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (UNK_0x91E3F625EF57450D(0))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 6))
		{
			UNK_0x5D96D8530B3D0904(&(Local_117.f_5), 6);
			UNK_0x0674E58A79778E99(&(Local_117.f_5), 4);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 6))
	{
		UNK_0x0674E58A79778E99(&(Local_117.f_5), 6);
		UNK_0x0674E58A79778E99(&(Local_117.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (bParam3 && !func_15(bParam4, bParam8))
	{
		return;
	}
	if (func_13())
	{
		return;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(UNK_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xDAC65F45B0B2D176() == 0 || UNK_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (UNK_0xB8E3620B82AD47D7(2))
		{
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[bVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xF59058FCB716F903(2, Global_22350.f_5026[bVar1], true), 64);
				}
				else if (Global_22350.f_5039[bVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			UNK_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			UNK_0x7E60D21B163E9D56();
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
			}
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_4964[bVar1 /*4*/])) != UNK_0x12AB0310C2281427("PREV"))
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar1);
					func_9(&(Global_22350.f_4771[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && UNK_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == UNK_0x12AB0310C2281427("PREV"))
					{
						func_9(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[bVar1] == -1)
					{
						func_8(&(Global_22350.f_4964[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_22350.f_5013[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
						if (bParam5)
						{
							UNK_0x164431059FF80580(bVar3, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(bVar3);
						}
						UNK_0x779B34565F4D71B1();
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[bVar1] != 361 && UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5052, bVar1))
						{
							UNK_0x1200CC973A2399C8(true);
							UNK_0x3CAEA85DA607305E(Global_22350.f_5026[bVar1]);
						}
						else
						{
							UNK_0x1200CC973A2399C8(false);
							UNK_0x3CAEA85DA607305E(361);
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
				bVar1++;
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_16)) != UNK_0x12AB0310C2281427(""))
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_9(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_8(&(Global_4268421.f_16));
				}
				else
				{
					bVar4 = Global_22350.f_5013[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bVar4, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bVar4);
					}
					UNK_0x779B34565F4D71B1();
				}
				UNK_0x7E60D21B163E9D56();
			}
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(80);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				UNK_0x3CAEA85DA607305E(true);
			}
			else
			{
				UNK_0x3CAEA85DA607305E(false);
			}
			UNK_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					UNK_0x3CAEA85DA607305E(bVar1);
					UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bParam2, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bParam2);
					}
					UNK_0x779B34565F4D71B1();
					UNK_0x7E60D21B163E9D56();
				}
			}
			bVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				UNK_0x3CAEA85DA607305E(bVar1);
				UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					UNK_0x164431059FF80580(bParam2, 70);
				}
				else
				{
					UNK_0x6D99DF8263D35CE5(bParam2);
				}
				UNK_0x779B34565F4D71B1();
				UNK_0x7E60D21B163E9D56();
			}
		}
		UNK_0xD02CE72B4B66DC29(76, 66);
		UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UNK_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UNK_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		UNK_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			UNK_0xD02CE72B4B66DC29(82, 66);
			UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			UNK_0xEF45C43067063F18(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			UNK_0xD59EF13BB60323B9();
		}
		else
		{
			UNK_0x6567AE843FADBA94(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_8(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_9(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_10(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

bool func_13()
{
	vector3 vVar0;

	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	if (func_14())
	{
		vVar0 = { 0f, -500f, 0f };
		UNK_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_14()
{
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	return false;
}

bool func_15(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return true;
	}
	if ((((((((!UNK_0x0F1CCD77290EE12F() || (func_17(8, -1) && func_16() != 65)) || (UNK_0x8BB17FEBE0394018() != 0 && !bParam1)) || (UNK_0x991B1F0980C62628() && !bParam0)) || UNK_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || UNK_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return false;
	}
	return true;
}

int func_16()
{
	return Global_1312812;
}

bool func_17(bool bParam0, int iParam1)
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

bool func_18(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1)
	{
		if (UNK_0x8CD06866876216F2() && UNK_0x2E9F2B9C010D34D9())
		{
			iParam2 = UNK_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, UNK_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = UNK_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*iParam0 = iVar17;
			return true;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*iParam0 = iVar18;
			return true;
		}
	}
	return false;
}

void func_19(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;

	sVar0 = UNK_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		UNK_0x5D96D8530B3D0904(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_20(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = UNK_0xE32F7AC5E6DF304A(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 361;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (!func_18(&iVar1, 0, iParam0))
		{
			return;
		}
		UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_22(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_18(&iVar0, 1, iParam1))
	{
		return false;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		UNK_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UNK_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	UNK_0x0D3BE1DE0262A012("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!UNK_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		UNK_0x0D3BE1DE0262A012("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!UNK_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_23(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_23(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = UNK_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (UNK_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 1:
			if (UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 2:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_24()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	float fVar15;

	if (func_164())
	{
		if (!UNK_0x83D8570832F172A7(Local_117.f_62))
		{
			Local_117.f_62 = UNK_0xB01F55A0FD1CFD49(func_38());
			return;
		}
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_117.f_8 > -1 || UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 3))
		{
			func_37("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_37("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_37("SET_HEADING_METER_IS_VISIBLE", 1);
		func_37("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_37("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_37("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_37("SET_INFO_LIST_IS_VISIBLE", 0);
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_37("SET_BOOST_METER_IS_VISIBLE", 0);
		func_37("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_37("SET_WARNING_IS_VISIBLE", 0);
		func_36(0);
		func_35(0);
		func_33();
		if (UNK_0x9F4FE516EAACCFC5(Local_117.f_61))
		{
			vVar0 = { UNK_0x17D61C69BA58F815(Local_117.f_61, 2) };
			func_32(SYSTEM::ROUND(-vVar0.z));
		}
		func_31(Local_117.f_33);
	}
	else if (UNK_0x9F4FE516EAACCFC5(Local_117.f_61))
	{
		vVar3 = { UNK_0x17D61C69BA58F815(Local_117.f_61, 2) };
		bVar6 = vVar3.z;
		if (UNK_0xC844350D5D58C99A(func_30()))
		{
			if (!UNK_0x437347B10A200C4B(func_30(), 0))
			{
				vVar12 = { UNK_0x68F4C0EC296D3901(func_30(), true) };
				fVar8 = UNK_0xD9522BA9E27E1349(func_30());
			}
		}
		while (bVar6 < 0f)
		{
			bVar6 = (bVar6 + 360f);
		}
		while (bVar6 > 360f)
		{
			bVar6 = (bVar6 - 360f);
		}
		while (fVar8 < 0f)
		{
			fVar8 = (fVar8 + 360f);
		}
		while (fVar8 > 360f)
		{
			fVar8 = (fVar8 - 360f);
		}
		fVar11 = bVar6;
		func_25(&fVar15);
		fVar9 = (fVar8 - fVar15);
		fVar10 = (fVar8 + fVar15);
		if (fVar11 < fVar9 && (fVar11 + 360f) <= fVar10)
		{
			fVar11 = (fVar11 + 360f);
		}
		if (fVar11 > fVar10 && (fVar11 - 360f) >= fVar9)
		{
			fVar11 = (fVar11 - 360f);
		}
		bVar7 = ((fVar11 - fVar9) / (fVar10 - fVar9));
		if (bVar7 == 2f)
		{
			bVar7 = 0f;
		}
		else if (bVar7 == -1f)
		{
			bVar7 = 1f;
		}
		else if (bVar7 < 0f && bVar7 >= -0.5f)
		{
			bVar7 = 0f;
		}
		else if (bVar7 < 0f && bVar7 > -1f)
		{
			bVar7 = 1f;
		}
		else if (bVar7 > 1.5f && bVar7 < 2f)
		{
			bVar7 = 0f;
		}
		else if (bVar7 > 2f || bVar7 < -1f)
		{
			bVar7 = 0.5f;
		}
		UNK_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_ALT_FOV_HEADING");
		UNK_0x7C19E5E4784BD7CF(vVar12.z);
		UNK_0x7C19E5E4784BD7CF(bVar7);
		UNK_0x7C19E5E4784BD7CF(bVar6);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_CAM_LOGO");
		UNK_0x3CAEA85DA607305E(false);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0xD9ACBBA59FD5A09E(1);
	UNK_0x6567AE843FADBA94(Local_117.f_62, 255, 255, 255, false, 0);
}

void func_25(var uParam0)
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

bool func_26(bool bParam0, bool bParam1)
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
	if (bParam0 != func_29())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

int func_27(int iParam0)
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

bool func_28(bool bParam0, bool bParam1, bool bParam2)
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

int func_29()
{
	return -1;
}

bool func_30()
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (UNK_0xC844350D5D58C99A(Global_1370256))
		{
			return Global_1370256;
		}
		if (Global_1590382 != -1)
		{
			if (UNK_0xC844350D5D58C99A(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	}
	return -1;
}

void func_31(bool bParam0)
{
	UNK_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_MISSILE_PERCENTAGE");
	UNK_0x3CAEA85DA607305E(bParam0);
	UNK_0x7E60D21B163E9D56();
}

void func_32(bool bParam0)
{
	UNK_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_HEADING");
	UNK_0x3CAEA85DA607305E(bParam0);
	UNK_0x7E60D21B163E9D56();
}

void func_33()
{
	if (Local_117.f_59 <= 60f && Local_117.f_59 > 55f)
	{
		func_34(0);
	}
	else if (Local_117.f_59 <= 55f && Local_117.f_59 > 50f)
	{
		func_34(1);
	}
	else if (Local_117.f_59 <= 50f && Local_117.f_59 > 45f)
	{
		func_34(2);
	}
	else if (Local_117.f_59 <= 45f && Local_117.f_59 > 40f)
	{
		func_34(3);
	}
	else if (Local_117.f_59 <= 40f && Local_117.f_59 > 30f)
	{
		func_34(4);
	}
}

void func_34(bool bParam0)
{
	UNK_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_ZOOM");
	UNK_0x3CAEA85DA607305E(bParam0);
	UNK_0x7E60D21B163E9D56();
}

void func_35(bool bParam0)
{
	UNK_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_RETICLE_STATE");
	UNK_0x3CAEA85DA607305E(bParam0);
	UNK_0x7E60D21B163E9D56();
}

void func_36(bool bParam0)
{
	UNK_0x7E60C62A7CE58FC8(Local_117.f_62, "SET_RETICLE_ON_TARGET");
	UNK_0x1200CC973A2399C8(bParam0);
	UNK_0x7E60D21B163E9D56();
}

void func_37(char* sParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(Local_117.f_62, sParam0);
	UNK_0x1200CC973A2399C8(bParam1);
	UNK_0x7E60D21B163E9D56();
}

char* func_38()
{
	if (func_164())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_39(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_40(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_41())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_41()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_44(int iParam0)
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

bool func_45()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_46()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_47()
{
	int iVar0;
	bool bVar1;
	var uVar2;
	vector3 vVar5;
	bool bVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;

	if (!func_164())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 <= 5)
	{
		if (((UNK_0x9F4FE516EAACCFC5(Local_117.f_61) && UNK_0x9CF8D5C7090408A2(Local_117.f_61)) && func_48(Local_117.f_84[bVar1])) && func_48(func_30()))
		{
			vVar10 = { UNK_0xD06724447386BC29(Local_117.f_61) };
			vVar13 = { UNK_0x68F4C0EC296D3901(Local_117.f_84[bVar1], true) };
			switch (Local_117.f_10[bVar1])
			{
				case 0:
					Local_117.f_98[bVar1] = UNK_0xCD02F8660C47B801(vVar10, vVar13, 511, false, 7);
					if (Local_117.f_98[bVar1] != 0)
					{
						Local_117.f_10[bVar1] = 1;
					}
					break;
				case 1:
					iVar9 = UNK_0x1EC301670B54C6DE(Local_117.f_98[bVar1], &iVar0, &vVar5, &uVar2, &bVar8);
					if (iVar9 == 2)
					{
						if (iVar0 == 0)
						{
							Local_117.f_17[bVar1] = 1;
							vVar5 = { 0f, 0f, 0f };
							if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_7, bVar1))
							{
								UNK_0x0674E58A79778E99(&(Local_117.f_7), bVar1);
							}
						}
						else
						{
							Local_117.f_17[bVar1] = 2;
							if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_7, bVar1))
							{
								UNK_0x0674E58A79778E99(&(Local_117.f_7), bVar1);
							}
							if (UNK_0xC844350D5D58C99A(bVar8))
							{
								if (Local_117.f_84[bVar1] == bVar8)
								{
									if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_7, bVar1))
									{
										UNK_0x5D96D8530B3D0904(&(Local_117.f_7), bVar1);
									}
								}
							}
							Local_117.f_98[bVar1] = 0;
							Local_117.f_10[bVar1] = 0;
						}
					}
					else if (iVar9 == 0)
					{
						Local_117.f_10[bVar1] = 0;
					}
					break;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_7, bVar1))
		{
			UNK_0x0674E58A79778E99(&(Local_117.f_7), bVar1);
		}
		bVar1++;
	}
}

bool func_48(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_49()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	bool bVar19;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	vector3 vVar32;
	vector3 vVar35;

	if (!func_164())
	{
		return;
	}
	iVar0 = 208;
	if (UNK_0x91E3F625EF57450D(0))
	{
		iVar0 = 237;
	}
	if ((UNK_0x06F8112AA79C53D9(2, iVar0) || UNK_0x7FEE810EE9E768EB(2, iVar0)) || UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 5))
	{
		iVar1 = 250;
		bVar2 = func_59();
		if (Local_117.f_8 > -1)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 3))
			{
				if (!func_58(&(Local_117.f_115)))
				{
					func_57(&(Local_117.f_115), 0, 0);
					Local_117.f_31 = 0;
					UNK_0x5D96D8530B3D0904(&(Local_117.f_5), 5);
				}
				else if (func_56(&(Local_117.f_115), 300, 0) || Local_117.f_31 == 0)
				{
					if (Local_117.f_31 < 0 || Local_117.f_31 >= 6)
					{
						Local_117.f_31 = 0;
					}
					if (UNK_0xC844350D5D58C99A(Local_117.f_84[Local_117.f_31]) && !UNK_0x437347B10A200C4B(Local_117.f_84[Local_117.f_31], 0))
					{
						bVar3 = UNK_0xF653B9B22DA806A9(func_30(), func_55());
						if (bVar3 != -1)
						{
							vVar4 = { UNK_0xBF584557291FDD31(func_30(), bVar3) + func_54(Local_117.f_31) };
							vVar7 = { UNK_0x9382F04ED9CDA21A(2) };
							vVar10 = { (-SYSTEM::SIN(vVar7.z) * SYSTEM::COS(vVar7.x)), (SYSTEM::COS(vVar7.z) * SYSTEM::COS(vVar7.x)), SYSTEM::SIN(vVar7.x) };
							vVar13 = { 1f, 1f, 1f };
							vVar16 = { vVar4 + vVar10 * vVar13 };
							UNK_0x4A21BDDF4D038ECF(vVar4, vVar16, iVar1, 1, func_53(0), UNK_0x16F2683693E537C9(), 1, 1, -1f, bVar2, 0, 0, Local_117.f_84[Local_117.f_31], 1, 0, 1);
							UNK_0xEB819BD1E585E9CB(-1, "Fire", vVar4, "DLC_BTL_Terrobyte_Turret_Sounds", true, 120, 1);
							Local_117.f_32++;
							func_52(&(Local_117.f_115), 0, 0);
						}
					}
					if (Local_117.f_32 == Local_117.f_8)
					{
						Local_117.f_31 = 0;
						Local_117.f_33 = 0;
						Local_117.f_32 = -1;
						UNK_0x5D96D8530B3D0904(&(Local_117.f_5), 3);
						UNK_0x0674E58A79778E99(&(Local_117.f_5), 5);
						func_57(&(Local_117.f_119), 0, 0);
						func_51(&(Local_117.f_115));
					}
					Local_117.f_31++;
				}
			}
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, true))
		{
			if (Local_117.f_31 < 0 || Local_117.f_31 >= 6)
			{
				Local_117.f_31 = 0;
			}
			bVar19 = UNK_0xF653B9B22DA806A9(func_30(), func_55());
			if (bVar19 != -1)
			{
				vVar20 = { UNK_0xBF584557291FDD31(func_30(), bVar19) + func_54(Local_117.f_31) };
				vVar23 = { UNK_0xF1EE614CA05DDE75() };
				vVar26 = { UNK_0x9382F04ED9CDA21A(2) };
				vVar29 = { (-SYSTEM::SIN(vVar26.z) * SYSTEM::COS(vVar26.x)), (SYSTEM::COS(vVar26.z) * SYSTEM::COS(vVar26.x)), SYSTEM::SIN(vVar26.x) };
				vVar32 = { 10f, 10f, 10f };
				if (!func_50(Local_117.f_56))
				{
					vVar32.x = UNK_0x0EB28750412C3A5A(Local_117.f_56, vVar23, 0);
					vVar32.f_1 = UNK_0x0EB28750412C3A5A(Local_117.f_56, vVar23, 0);
					vVar32.f_2 = UNK_0x0EB28750412C3A5A(Local_117.f_56, vVar23, 0);
				}
				vVar35 = { vVar23 + vVar29 * vVar32 };
				UNK_0x4A21BDDF4D038ECF(vVar20, vVar35, iVar1, 1, func_53(1), UNK_0x16F2683693E537C9(), 1, 1, -1f, bVar2, 0, 0, 0, 1, 0, 1);
				UNK_0xEB819BD1E585E9CB(-1, "Fire", vVar20, "DLC_BTL_Terrobyte_Turret_Sounds", true, 120, 1);
				UNK_0x5D96D8530B3D0904(&(Local_117.f_5), true);
				Local_117.f_33 = 0;
				func_57(&(Local_117.f_134), 0, 0);
				Local_117.f_31++;
			}
		}
	}
}

bool func_50(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_51(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_52(var uParam0, bool bParam1, bool bParam2)
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

int func_53(int iParam0)
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (iParam0 == 0)
		{
			return joaat("VEHICLE_WEAPON_HACKER_MISSILE_HOMING");
		}
		else
		{
			return joaat("VEHICLE_WEAPON_HACKER_MISSILE");
		}
	}
	return 0;
}

Vector3 func_54(int iParam0)
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, -0.6f, 0.9f;
			case 1:
				return -0.3f, -0.3f, 0.8f;
			case 2:
				return -0.1f, -0.1f, 0.8f;
			case 3:
				return 0.1f, 0.1f, 0.8f;
			case 4:
				return 0.3f, 0.3f, 0.8f;
			case 5:
				return 0.6f, 0.6f, 0.9f;
			case 6:
				return 0f, 0f, 0.8f;
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

char* func_55()
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		return "misc_c";
	}
	return "";
}

bool func_56(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_57(uParam0, bParam2, 0);
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

void func_57(var uParam0, bool bParam1, bool bParam2)
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

bool func_58(var uParam0)
{
	return uParam0->f_1;
}

int func_59()
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		return Global_1370256;
	}
	return -1;
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (!func_164())
	{
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 3))
	{
		if (func_58(&(Local_117.f_119)))
		{
			if (!func_56(&(Local_117.f_119), 5000, 0))
			{
				iVar0 = (100 * UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Local_117.f_119)));
				Local_117.f_33 = (iVar0 / 5000);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_117.f_119));
				UNK_0x0674E58A79778E99(&(Local_117.f_5), 3);
				Local_117.f_32 = -1;
				Local_117.f_33 = 100;
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, true))
	{
		if (func_58(&(Local_117.f_134)))
		{
			if (!func_56(&(Local_117.f_134), 1500, 0))
			{
				iVar1 = (100 * UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Local_117.f_134)));
				Local_117.f_33 = (iVar1 / 1500);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_117.f_134));
				UNK_0x0674E58A79778E99(&(Local_117.f_5), true);
				Local_117.f_33 = 100;
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, true) && !UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 5))
	{
		switch (Local_117.f_111)
		{
			case 0:
				func_85();
				break;
			case 1:
				func_75();
				break;
		}
		func_68();
	}
	func_62();
	func_61();
}

void func_61()
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;

	if ((UNK_0x9F4FE516EAACCFC5(Local_117.f_61) && UNK_0x9CF8D5C7090408A2(Local_117.f_61)) && func_48(func_30()))
	{
		vVar6 = { UNK_0xF1EE614CA05DDE75() };
		vVar9 = { UNK_0x9382F04ED9CDA21A(2) };
		vVar12 = { (-SYSTEM::SIN(vVar9.z) * SYSTEM::COS(vVar9.x)), (SYSTEM::COS(vVar9.z) * SYSTEM::COS(vVar9.x)), SYSTEM::SIN(vVar9.x) };
		vVar15 = { 300f, 300f, 300f };
		vVar18 = { vVar6 + vVar12 * vVar15 };
		vVar21 = { vVar6 + vVar12 * Vector(1f, 1f, 1f) };
		switch (Local_117.f_27)
		{
			case 0:
				Local_117.f_106 = UNK_0xCD02F8660C47B801(vVar21, vVar18, 511, func_30(), 7);
				if (Local_117.f_106 != 0)
				{
					Local_117.f_27 = 1;
				}
				break;
			case 1:
				iVar5 = UNK_0x1EC301670B54C6DE(Local_117.f_106, &iVar0, &(Local_117.f_56), &uVar1, &uVar4);
				if (iVar5 == 2)
				{
					if (iVar0 == 0)
					{
						Local_117.f_26 = 1;
						Local_117.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_117.f_26 = 2;
						Local_117.f_27 = 0;
					}
				}
				else if (iVar5 == 0)
				{
					Local_117.f_27 = 0;
				}
				break;
		}
	}
}

void func_62()
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 <= 5)
	{
		func_63(Local_117.f_84[bVar0], 0, bVar0);
		bVar0++;
	}
}

void func_63(bool bParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	if (UNK_0x27117E2CDD4D67C3("helicopterhud"))
	{
		UNK_0xD9ACBBA59FD5A09E(1);
		if (Local_117.f_8 > -1)
		{
			if (func_48(bParam0))
			{
				UNK_0x362FD95670BFA2A6(UNK_0x68F4C0EC296D3901(bParam0, true), &fVar1, &fVar2);
				fVar0 = 0.03f;
				if (((fVar1 > 0.1f && fVar1 < 0.9f) && fVar2 > 0.1f) && fVar2 < 0.9f)
				{
					if (UNK_0xEC560E589DF8370E(bParam0))
					{
						bVar7 = UNK_0x940C1429253D3B1B(bParam0);
						if (UNK_0x34BFC6F0CB887BC2(bVar7))
						{
							bVar8 = UNK_0x83FACCC48B68F9D1(bVar7);
							if (func_28(bVar8, 1, 1))
							{
								if (func_67(bVar8, -1))
								{
									UNK_0x237ED1D0CF5139C4(UNK_0x6937EA2286828455(bVar7, 0), 2);
								}
							}
						}
					}
					else if (UNK_0xE2F1E99DD161A861(bParam0))
					{
						bVar9 = UNK_0xA30B8362589C124A(UNK_0x96A5FE5834B81CE7(bParam0), -1, 0);
						if (UNK_0xC844350D5D58C99A(bVar9))
						{
							if (UNK_0x34BFC6F0CB887BC2(bVar9))
							{
								bVar10 = UNK_0x83FACCC48B68F9D1(bVar9);
								if (func_28(bVar10, 1, 1))
								{
									UNK_0x237ED1D0CF5139C4(UNK_0x96A5FE5834B81CE7(bParam0), 2);
								}
							}
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_48, bParam2))
					{
						if ((UNK_0x8AA6DC470ABA63A2(Local_117.f_34[bParam2]) && Local_117.f_34[bParam2] == -1) && !func_66())
						{
							Local_117.f_34[bParam2] = UNK_0xD68EA767274B7444();
							UNK_0x4D7F4CC43D4D0DE3(Local_117.f_34[bParam2], "VULKAN_LOCK_ON_AMBER", false, 1);
							func_57(&(Local_117.f_136[bParam2 /*2*/]), 0, 0);
							UNK_0x5D96D8530B3D0904(&(Local_117.f_48), bParam2);
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_48, bParam2 + 6))
					{
						if (func_58(&(Local_117.f_136[bParam2 /*2*/])))
						{
							if (func_56(&(Local_117.f_136[bParam2 /*2*/]), 1000, 0))
							{
								func_65(bParam2, 0);
								if (UNK_0x8AA6DC470ABA63A2(Local_117.f_41[bParam2]) && Local_117.f_41[bParam2] == -1)
								{
									Local_117.f_41[bParam2] = UNK_0xD68EA767274B7444();
									UNK_0x4D7F4CC43D4D0DE3(Local_117.f_41[bParam2], "VULKAN_LOCK_ON_RED", false, 1);
									func_57(&(Local_117.f_149[bParam2 /*2*/]), 0, 0);
									UNK_0x5D96D8530B3D0904(&(Local_117.f_48), bParam2 + 6);
								}
							}
						}
					}
					else if (func_58(&(Local_117.f_149[bParam2 /*2*/])))
					{
						if (func_56(&(Local_117.f_149[bParam2 /*2*/]), 700, 0))
						{
							func_64(bParam2, 0);
						}
					}
					UNK_0x7CE7752990174928(UNK_0x68F4C0EC296D3901(bParam0, true), 0);
					if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_48, bParam2 + 6))
					{
						UNK_0xA402F6C87C08815C(15, &iVar3, &iVar4, &iVar5, &bVar6);
					}
					else
					{
						UNK_0xA402F6C87C08815C(6, &iVar3, &iVar4, &iVar5, &bVar6);
					}
					if (!bParam1)
					{
						UNK_0x539E86AE011A8B38("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar3, iVar4, iVar5, bVar6, 1);
					}
					UNK_0x539E86AE011A8B38("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar3, iVar4, iVar5, bVar6, 1);
					UNK_0x539E86AE011A8B38("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar3, iVar4, iVar5, bVar6, 1);
					UNK_0x539E86AE011A8B38("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar3, iVar4, iVar5, bVar6, 1);
					UNK_0xB90B8DD97A132327();
				}
				else
				{
					func_65(bParam2, 1);
					func_64(bParam2, 1);
				}
			}
			else
			{
				func_65(bParam2, 1);
				func_64(bParam2, 1);
			}
		}
		else
		{
			func_65(bParam2, 1);
			func_64(bParam2, 1);
		}
	}
}

void func_64(bool bParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_48, bParam0 + 6))
	{
		if (!UNK_0x8AA6DC470ABA63A2(Local_117.f_41[bParam0]))
		{
			UNK_0x55D0A2DB35045A35(Local_117.f_41[bParam0]);
			UNK_0x43A06902454A1172(Local_117.f_41[bParam0]);
		}
		Local_117.f_41[bParam0] = -1;
		if (bParam1)
		{
			UNK_0x0674E58A79778E99(&(Local_117.f_48), bParam0 + 6);
		}
		func_51(&(Local_117.f_149[bParam0 /*2*/]));
	}
}

void func_65(bool bParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_48, bParam0))
	{
		if (!UNK_0x8AA6DC470ABA63A2(Local_117.f_34[bParam0]))
		{
			UNK_0x55D0A2DB35045A35(Local_117.f_34[bParam0]);
			UNK_0x43A06902454A1172(Local_117.f_34[bParam0]);
		}
		Local_117.f_34[bParam0] = -1;
		if (bParam1)
		{
			UNK_0x0674E58A79778E99(&(Local_117.f_48), bParam0);
		}
		func_51(&(Local_117.f_136[bParam0 /*2*/]));
	}
}

bool func_66()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!UNK_0x8AA6DC470ABA63A2(Local_117.f_34[iVar0]) || !UNK_0x8AA6DC470ABA63A2(Local_117.f_41[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_67(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_28(bParam0, 1, 1))
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

void func_68()
{
	bool bVar0;
	int iVar1;

	iVar1 = -1;
	bVar0 = false;
	while (bVar0 <= 5)
	{
		if (UNK_0xC844350D5D58C99A(Local_117.f_84[bVar0]))
		{
			if (UNK_0xC844350D5D58C99A(Local_117.f_84[bVar0]))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_7, bVar0))
				{
					if (func_58(&(Local_117.f_121[bVar0 /*2*/])))
					{
						if (func_56(&(Local_117.f_121[bVar0 /*2*/]), 1000, 0))
						{
							Local_117.f_84[bVar0] = -1;
							if (Local_117.f_8 > -1)
							{
								Local_117.f_17[bVar0] = 0;
								func_51(&(Local_117.f_121[bVar0 /*2*/]));
								Local_117.f_8 = (Local_117.f_8 - 1);
							}
						}
					}
					else
					{
						func_57(&(Local_117.f_121[bVar0 /*2*/]), 0, 0);
					}
				}
				else
				{
					func_51(&(Local_117.f_121[bVar0 /*2*/]));
				}
				if ((!func_74(Local_117.f_84[bVar0]) || !UNK_0xC844350D5D58C99A(Local_117.f_84[bVar0])) || !func_69(Local_117.f_84[bVar0]))
				{
					if (!UNK_0xC844350D5D58C99A(Local_117.f_84[bVar0]))
					{
					}
					if (!func_74(Local_117.f_84[bVar0]))
					{
					}
					Local_117.f_84[bVar0] = -1;
					if (Local_117.f_8 > -1)
					{
						Local_117.f_17[bVar0] = 0;
						func_51(&(Local_117.f_121[bVar0 /*2*/]));
						Local_117.f_8 = (Local_117.f_8 - 1);
					}
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(Local_117.f_84[bVar0]))
		{
			iVar1++;
		}
		bVar0++;
	}
	if (Local_117.f_8 != iVar1)
	{
		Local_117.f_8 = iVar1;
	}
}

bool func_69(bool bParam0)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0xE2F1E99DD161A861(bParam0))
		{
			if (func_73(UNK_0x96A5FE5834B81CE7(bParam0), 0, 0))
			{
				return true;
			}
			if (func_72(UNK_0x134B62B726CEC8E6(bParam0)))
			{
				return true;
			}
		}
		else if (UNK_0xEC560E589DF8370E(bParam0))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam0);
			if (UNK_0x34BFC6F0CB887BC2(bVar0))
			{
				if (!func_70(UNK_0x83FACCC48B68F9D1(bVar0), UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_70(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_71(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_71(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_71(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_29();
}

bool func_72(int iParam0)
{
	switch (iParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	}
	return false;
}

bool func_73(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = UNK_0xD6DF381716822EFE(bParam0) + 1;
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!UNK_0xBBA8A868118C90ED(bParam0, (iVar0 - 1), 0))
			{
				bVar2 = UNK_0xA30B8362589C124A(bParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (UNK_0xC844350D5D58C99A(bVar2))
					{
						if (UNK_0x34BFC6F0CB887BC2(bVar2))
						{
							if (!bParam2 && func_70(UNK_0x83FACCC48B68F9D1(bVar2), UNK_0xD803B885F5E47A62()))
							{
							}
							else
							{
								return true;
							}
						}
					}
				}
				else if (!UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					if (UNK_0x34BFC6F0CB887BC2(bVar2))
					{
						if (!bParam2 && func_70(UNK_0x83FACCC48B68F9D1(bVar2), UNK_0xD803B885F5E47A62()))
						{
						}
						else
						{
							return true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_74(bool bParam0)
{
	float fVar0;
	float fVar1;

	if (UNK_0xC844350D5D58C99A(bParam0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		UNK_0x362FD95670BFA2A6(UNK_0x68F4C0EC296D3901(bParam0, true), &fVar0, &fVar1);
		if (((fVar0 < 0.1f || fVar0 > 0.9f) || fVar1 < 0.1f) || fVar1 > 0.9f)
		{
			return false;
		}
	}
	return true;
}

void func_75()
{
	if (Local_117.f_28 < 0 || Local_117.f_28 >= 20)
	{
		Local_117.f_28 = 0;
	}
	else if (UNK_0xC844350D5D58C99A(Local_117.f_63[Local_117.f_28]) && !UNK_0x437347B10A200C4B(Local_117.f_63[Local_117.f_28], 0))
	{
		func_83(Local_117.f_63[Local_117.f_28]);
		if (func_56(&(Local_117.f_117), 1000, 0))
		{
			if (Local_117.f_112 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, false))
				{
					if (Local_117.f_8 < 5)
					{
						if (func_82(Local_117.f_63[Local_117.f_28]))
						{
							Local_117.f_63[Local_117.f_28] = -1;
							UNK_0x0674E58A79778E99(&(Local_117.f_5), false);
							func_51(&(Local_117.f_117));
							Local_117.f_28++;
						}
					}
					else
					{
						if (func_79(Local_117.f_63[Local_117.f_28]))
						{
							func_76(Local_117.f_63[Local_117.f_28]);
						}
						Local_117.f_63[Local_117.f_28] = -1;
						UNK_0x0674E58A79778E99(&(Local_117.f_5), false);
						Local_117.f_25 = 0;
						func_51(&(Local_117.f_117));
						Local_117.f_28++;
					}
				}
				else
				{
					Local_117.f_25 = 0;
					Local_117.f_63[Local_117.f_28] = -1;
					UNK_0x0674E58A79778E99(&(Local_117.f_5), false);
					func_52(&(Local_117.f_117), 0, 0);
					Local_117.f_28++;
				}
			}
		}
	}
	else
	{
		Local_117.f_63[Local_117.f_28] = -1;
		Local_117.f_25 = 0;
		func_51(&(Local_117.f_117));
		Local_117.f_28++;
	}
	if (Local_117.f_28 == 20)
	{
		Local_117.f_111 = 0;
		Local_117.f_25 = 0;
		func_51(&(Local_117.f_117));
		Local_117.f_28 = 0;
	}
}

void func_76(bool bParam0)
{
	if (func_77() != -1 && func_77() < 6)
	{
		if (UNK_0xC844350D5D58C99A(Local_117.f_84[func_77()]) && UNK_0xC844350D5D58C99A(bParam0))
		{
			Local_117.f_84[func_77()] = bParam0;
		}
	}
}

int func_77()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = -1;
	fVar1 = 0f;
	if (UNK_0x9F4FE516EAACCFC5(Local_117.f_61) && UNK_0x9CF8D5C7090408A2(Local_117.f_61))
	{
		vVar2 = { UNK_0xD06724447386BC29(Local_117.f_61) };
		iVar5 = 0;
		while (iVar5 <= 5)
		{
			if (UNK_0xC844350D5D58C99A(Local_117.f_84[iVar5]) && !UNK_0x437347B10A200C4B(Local_117.f_84[iVar5], 0))
			{
				vVar6 = { UNK_0x68F4C0EC296D3901(Local_117.f_84[iVar5], true) - vVar2 };
				fVar9 = func_78(vVar6);
				if (fVar9 > fVar1)
				{
					fVar1 = fVar9;
					iVar0 = iVar5;
				}
			}
			iVar5++;
		}
	}
	Local_117.f_9 = iVar0;
	return iVar0;
}

float func_78(vector3 vParam0)
{
	return SYSTEM::SQRT((((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)) + (vParam0.z * vParam0.z)));
}

bool func_79(bool bParam0)
{
	if (func_77() != -1)
	{
		if ((func_48(Local_117.f_84[func_77()]) && func_48(bParam0)) && func_48(func_81()))
		{
			if (func_80(func_81(), Local_117.f_84[func_77()], 1) > func_80(func_81(), bParam0, 1) && func_80(Local_117.f_84[func_77()], bParam0, 1) > 5f)
			{
				return true;
			}
		}
	}
	return false;
}

float func_80(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	else
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

bool func_81()
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (UNK_0x6E61BE9E61434AC1() != -1)
		{
			return Global_2439138.f_1123[UNK_0x6E61BE9E61434AC1()];
		}
	}
	return -1;
}

bool func_82(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!UNK_0xC844350D5D58C99A(Local_117.f_84[iVar0]))
		{
			Local_117.f_84[iVar0] = uParam0;
			Local_117.f_8++;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_83(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	var uVar7;
	vector3 vVar10;
	bool bVar13;

	if (((UNK_0x9F4FE516EAACCFC5(Local_117.f_61) && UNK_0x9CF8D5C7090408A2(Local_117.f_61)) && func_48(bParam0)) && func_48(func_30()))
	{
		vVar0 = { UNK_0xD06724447386BC29(Local_117.f_61) };
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
		switch (Local_117.f_25)
		{
			case 0:
				Local_117.f_105 = UNK_0xCD02F8660C47B801(vVar0, vVar3, 511, false, 7);
				if (Local_117.f_105 != 0)
				{
					Local_117.f_25 = 1;
				}
				break;
			case 1:
				Local_117.f_112 = UNK_0x1EC301670B54C6DE(Local_117.f_105, &iVar6, &vVar10, &uVar7, &bVar13);
				if (Local_117.f_112 == 2)
				{
					if (iVar6 == 0)
					{
						Local_117.f_24 = 1;
						vVar10 = { 0f, 0f, 0f };
						if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, false))
						{
							UNK_0x0674E58A79778E99(&(Local_117.f_5), false);
						}
					}
					else
					{
						Local_117.f_24 = 2;
						if (UNK_0xC844350D5D58C99A(bVar13))
						{
							if (UNK_0xE2F1E99DD161A861(bVar13) || (UNK_0xEC560E589DF8370E(bVar13) && UNK_0x34BFC6F0CB887BC2(UNK_0x940C1429253D3B1B(bVar13))))
							{
								if (bVar13 == func_84(bParam0))
								{
									if (!UNK_0x437347B10A200C4B(bParam0, 0))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, false))
										{
											UNK_0x5D96D8530B3D0904(&(Local_117.f_5), false);
										}
									}
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, false))
							{
								UNK_0x0674E58A79778E99(&(Local_117.f_5), false);
							}
						}
						Local_117.f_105 = 0;
						Local_117.f_25 = 0;
					}
				}
				else if (Local_117.f_112 == 0)
				{
					Local_117.f_25 = 0;
				}
				break;
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, false))
	{
		UNK_0x0674E58A79778E99(&(Local_117.f_5), false);
	}
}

bool func_84(bool bParam0)
{
	return bParam0;
}

void func_85()
{
	bool bVar0;
	int iVar1;
	var uVar2[100];
	bool bVar103;
	bool bVar104;
	int iVar105;

	if (UNK_0x9F4FE516EAACCFC5(Local_117.f_61) && UNK_0x9CF8D5C7090408A2(Local_117.f_61))
	{
		if (func_28(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (func_48(func_81()))
			{
				iVar105 = UNK_0x9ED5EF2B539772F7(&uVar2);
				if (iVar105 > 0)
				{
					bVar0 = false;
					while (bVar0 < iVar105)
					{
						if (!UNK_0xC844350D5D58C99A(uVar2[bVar0]))
						{
						}
						else if ((!UNK_0xE2F1E99DD161A861(uVar2[bVar0]) || uVar2[bVar0] == func_30()) || !func_69(uVar2[bVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_87(uVar2[bVar0]) && !func_86(uVar2[bVar0]))
						{
							if (func_74(uVar2[bVar0]) && func_80(uVar2[bVar0], func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_117.f_63[iVar1] = uVar2[bVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						bVar0++;
					}
				}
				bVar0 = false;
				while (bVar0 < 32)
				{
					if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(bVar0)))
					{
						bVar103 = UNK_0x117658E336116132(bVar0);
						bVar104 = UNK_0x9539D44F3E4492F6(bVar103);
						if ((bVar103 == UNK_0xD803B885F5E47A62() || !func_69(bVar104)) || UNK_0x437347B10A200C4B(bVar104, 0))
						{
						}
						else if (func_87(bVar104) && !func_86(bVar104))
						{
							if (func_80(bVar104, func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_117.f_63[iVar1] = bVar104;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					bVar0++;
				}
				Local_117.f_111 = 1;
			}
		}
	}
}

bool func_86(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((UNK_0xC844350D5D58C99A(Local_117.f_84[iVar0]) && !UNK_0x437347B10A200C4B(Local_117.f_84[iVar0], 0)) && UNK_0xC844350D5D58C99A(bParam0)) && !UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (bParam0 == Local_117.f_84[iVar0])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_87(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && !UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (bParam0 == Local_117.f_63[iVar0])
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_88()
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 <= 5)
	{
		func_65(bVar0, 1);
		func_64(bVar0, 1);
		bVar0++;
	}
}

void func_89()
{
	int iVar0;

	if ((func_48(func_30()) && UNK_0x9F4FE516EAACCFC5(Local_117.f_61)) && UNK_0x9CF8D5C7090408A2(Local_117.f_61))
	{
		iVar0 = UNK_0xF653B9B22DA806A9(func_30(), func_55());
		if (iVar0 != -1)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_382, false))
			{
				UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_382), false);
			}
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_382, false))
	{
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_382), false);
	}
}

void func_90()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	int iVar18;
	vector3 vVar19;
	float fVar22;
	float fVar23;
	bool bVar24;
	int iVar25;
	float fVar26;
	float fVar27;
	vector3 vVar28;
	float fVar31;
	float fVar32;
	float fVar33;
	int iVar34;
	vector3 vVar35;
	int iVar38;
	int iVar39;

	if (((UNK_0x9F4FE516EAACCFC5(Local_117.f_61) && (UNK_0x9CF8D5C7090408A2(Local_117.f_61) || !UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))) && func_48(func_30())) && func_30() != -1)
	{
		fVar0 = 0.25f;
		fVar1 = 0f;
		func_98(&fVar1);
		if (UNK_0x91E3F625EF57450D(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_97(&fVar8, &fVar7);
		func_96(&fVar10, &fVar9);
		func_95(&bVar12, &bVar11);
		func_25(&fVar13);
		UNK_0xA2E3EDD0E119882F(2);
		UNK_0x558EC149EB2BC0A2(0, 39);
		if (UNK_0x91E3F625EF57450D(0))
		{
			fVar14 = 15f;
			fVar5 = (UNK_0x8A6BC5D9CAEACD0F(0, 291) * -fVar14);
			fVar6 = (UNK_0x8A6BC5D9CAEACD0F(0, 290) * fVar14);
		}
		else
		{
			iVar4 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(0, 291) * -fVar14));
			iVar3 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(0, 290) * fVar14));
		}
		bVar2 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(0, 39) * fVar14));
		if (!UNK_0x91E3F625EF57450D(0))
		{
			iVar18 = SYSTEM::ROUND((IntToFloat(iVar18) * fVar14));
			if (UNK_0x51D1D19912234EA0(bVar2) < iVar18)
			{
				bVar2 = false;
			}
			vVar19 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (SYSTEM::VMAG(vVar19) < IntToFloat(iVar18))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar22 = ((vVar15.x / fVar7) * 0.5f);
		if (fVar22 > 0f)
		{
			fVar22 = (fVar22 + 1f);
		}
		else
		{
			fVar22 = 1f;
		}
		if (UNK_0x91E3F625EF57450D(0))
		{
			Local_117[2] = ((fVar5 * Local_117.f_59) * fVar1);
			Local_117[3] = (((fVar6 * Local_117.f_59) * fVar1) * fVar22);
		}
		else
		{
			Local_117[2] = (((SYSTEM::TO_FLOAT(iVar4) * Local_117.f_59) * fVar1) * SYSTEM::TIMESTEP());
			Local_117[3] = ((((SYSTEM::TO_FLOAT(iVar3) * Local_117.f_59) * fVar1) * fVar22) * SYSTEM::TIMESTEP());
		}
		Local_117[3] = func_94(Local_117[3], bVar12, bVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			vVar15 = { UNK_0x17D61C69BA58F815(Local_117.f_61, 2) };
		}
		if (!func_93(UNK_0xD06724447386BC29(Local_117.f_61), 0f, 0f, 0f, 0))
		{
			if (!UNK_0x437347B10A200C4B(func_30(), 0))
			{
				fVar23 = UNK_0xD9522BA9E27E1349(func_30());
				bVar24 = (fVar23 - vVar15.z);
				while (UNK_0x755FF954DAE327E1(bVar24) >= 180f && iVar25 < 30)
				{
					if (bVar24 < 0f)
					{
						bVar24 = (bVar24 + 360f);
					}
					else
					{
						bVar24 = (bVar24 - 360f);
					}
					iVar25++;
					if (iVar25 == 30)
					{
					}
				}
				if (bVar24 >= bVar11)
				{
					if (bVar24 > 0f)
					{
						vVar15.f_2 = (fVar23 - bVar11);
					}
					else
					{
						vVar15.f_2 = (fVar23 + bVar11);
					}
				}
				if (bVar24 < bVar12)
				{
					if (bVar24 > 0f)
					{
						vVar15.f_2 = (fVar23 - UNK_0x755FF954DAE327E1(bVar12));
					}
					else
					{
						vVar15.f_2 = (fVar23 + UNK_0x755FF954DAE327E1(bVar12));
					}
				}
			}
			fVar26 = 0f;
			fVar27 = 0f;
			if (func_93(Local_117.f_50, 0f, 0f, 0f, 0))
			{
				Local_117.f_50 = { UNK_0x835730A2D89F6093(func_30(), 2) };
			}
			else
			{
				vVar28 = { UNK_0x835730A2D89F6093(func_30(), 2) };
				fVar31 = ((UNK_0x755FF954DAE327E1(Local_117.f_53.f_2) - 90f) / -90f);
				fVar26 = (fVar26 + ((vVar28.x - Local_117.f_50) * fVar31));
				fVar27 = (fVar27 + (vVar28.z - Local_117.f_50.f_2));
				if (fVar27 > 180f)
				{
					fVar27 = (fVar27 - 360f);
				}
				if (fVar27 < -180f)
				{
					fVar27 = (fVar27 + 360f);
				}
				if (vVar28.x < -80f || vVar28.x > 80f)
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				if (UNK_0x377BE9A1BF38C7CE(func_30()))
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				Local_117.f_50 = { vVar28 };
			}
			if ((((Local_117[2] != 0f || Local_117[3] != 0f) || fVar26 != 0f) || fVar27 != 0f) || !UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))
			{
				fVar32 = (((Local_117.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar32 < 3f)
				{
					fVar32 = 3f;
				}
				Local_117[2] = (Local_117[2] * fVar32);
				Local_117[3] = (Local_117[3] * fVar32);
				Local_117.f_53 = (Local_117.f_53 + Local_117[2]);
				Local_117.f_53.f_2 = (Local_117.f_53.f_2 - Local_117[3]);
				Local_117.f_53 = (Local_117.f_53 - fVar26);
				Local_117.f_53.f_2 = (Local_117.f_53.f_2 - fVar27);
				if (Local_117.f_53 < fVar8)
				{
					Local_117.f_53 = fVar8;
				}
				if (Local_117.f_53 > fVar7)
				{
					Local_117.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_117.f_53.f_2 > 180f)
					{
						Local_117.f_53.f_2 = (Local_117.f_53.f_2 - 360f);
					}
					while (Local_117.f_53.f_2 < -180f)
					{
						Local_117.f_53.f_2 = (Local_117.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_117.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_117.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_117.f_53.f_2 > (fVar13 / 2f))
					{
						Local_117.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))
			{
				if (func_164())
				{
					Local_117.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_117.f_53 = { fVar7, 0f, 0f };
				}
				UNK_0x5D96D8530B3D0904(&(Local_117.f_5), 2);
			}
			if (!func_92(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_383[0 /*3*/], Local_117.f_53, 0f, Local_117.f_53.f_2, 1056964608 /* Float: 0.5f */, 0))
			{
				Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_383[0 /*3*/] = { Local_117.f_53, 0f, Local_117.f_53.f_2 };
			}
			if (func_164())
			{
				UNK_0xF42E0F9B569BF0A5(Local_117.f_61, func_30(), UNK_0xF653B9B22DA806A9(func_30(), "weapon_1d"), 1, Local_117.f_53, 0f, Local_117.f_53.f_2, func_91(), 1);
			}
			else
			{
				UNK_0xF42E0F9B569BF0A5(Local_117.f_61, func_30(), 0, 1, Local_117.f_53, 0f, Local_117.f_53.f_2, func_91(), 1);
			}
		}
		Local_117.f_59 = (Local_117.f_59 + (((SYSTEM::TO_FLOAT(bVar2) / 5f) * SYSTEM::TIMESTEP()) * fVar0));
		if (Local_117.f_59 > fVar9)
		{
			Local_117.f_59 = fVar9;
		}
		if (Local_117.f_59 < fVar10)
		{
			Local_117.f_59 = fVar10;
		}
		UNK_0x36629DB72EBCB78C(1f);
		UNK_0x5818C8D5303DCCF8(Local_117.f_61, Local_117.f_59);
		fVar33 = ((Local_117.f_59 - 5f) / 42f);
		UNK_0x7B0A869D38A120EA(fVar33);
		if (UNK_0x64F604CF561734A9("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((UNK_0x51D1D19912234EA0(bVar2) > 0 && Local_117.f_59 <= fVar9) && Local_117.f_59 >= fVar10)
			{
				iVar34 = Local_117.f_29;
				if (iVar34 != -1)
				{
					if (UNK_0x8AA6DC470ABA63A2(iVar34))
					{
						UNK_0x4D7F4CC43D4D0DE3(iVar34, "COP_HELI_CAM_ZOOM", false, 1);
					}
					UNK_0x6F6BA3FE885E6C91(iVar34, "Ctrl", SYSTEM::TO_FLOAT(bVar2));
					if (bVar2 < 0)
					{
						UNK_0x6F6BA3FE885E6C91(iVar34, "Dir", -1f);
					}
					else
					{
						UNK_0x6F6BA3FE885E6C91(iVar34, "Dir", 1f);
					}
				}
			}
			else if (Local_117.f_29 != -1)
			{
				if (!UNK_0x8AA6DC470ABA63A2(Local_117.f_29))
				{
					UNK_0x55D0A2DB35045A35(Local_117.f_29);
				}
			}
			vVar35 = { -Vector(UNK_0x8A6BC5D9CAEACD0F(0, 290), 0f, UNK_0x8A6BC5D9CAEACD0F(0, 291)) };
			if (SYSTEM::VMAG(vVar35) > 0f)
			{
				iVar38 = Local_117.f_30;
				if (iVar38 != -1)
				{
					if (UNK_0x8AA6DC470ABA63A2(iVar38))
					{
						UNK_0x4D7F4CC43D4D0DE3(iVar38, "COP_HELI_CAM_TURN", false, 1);
					}
					UNK_0x6F6BA3FE885E6C91(iVar38, "Ctrl", SYSTEM::VMAG(vVar35));
				}
			}
			else
			{
				iVar39 = Local_117.f_30;
				if (iVar39 != -1)
				{
					if (!UNK_0x8AA6DC470ABA63A2(iVar39))
					{
						UNK_0x55D0A2DB35045A35(iVar39);
					}
				}
			}
		}
	}
}

Vector3 func_91()
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		return -0.25f, -1f, 1.1f;
	}
	if (UNK_0xC844350D5D58C99A(func_30()))
	{
		switch (UNK_0x134B62B726CEC8E6(func_30()))
		{
			case joaat("MAVERICK"):
				return 0f, 2.75f, -1.25f;
		}
	}
	return 0f, 0f, 0f;
}

bool func_92(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (UNK_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_93(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_94(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_95(var uParam0, var uParam1)
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_96(var uParam0, var uParam1)
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_97(var uParam0, var uParam1)
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_98(float fParam0)
{
	*fParam0 = 0.0015f;
}

bool func_99()
{
	if (UNK_0x798A3F1296751F46() || UNK_0x590766B2AF637235())
	{
		return true;
	}
	if (func_102(1))
	{
		return true;
	}
	if (func_100(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_100(bool bParam0)
{
	if (func_10(bParam0, 0))
	{
		return true;
	}
	if (func_101())
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

bool func_101()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_102(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_103()
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_111())
	{
		func_110(1);
	}
	UNK_0x58D1E74A3FBADA8D(0, 1);
	if (func_164())
	{
		func_109();
	}
	else if (UNK_0xC844350D5D58C99A(Local_117.f_107))
	{
		UNK_0xB12423B4F533017F(Local_117.f_107);
	}
	vVar0 = { UNK_0xF1EE614CA05DDE75() };
	if ((((UNK_0x798A3F1296751F46() || func_108()) || UNK_0xBFC0798A6E3417F9(2, 199)) || UNK_0x06F8112AA79C53D9(2, 199)) || UNK_0xB9132A06AE472728(2, 199))
	{
		UNK_0x6857CFBD47C253B6(vVar0.x, vVar0.y);
		UNK_0xA464CD2441CD9CE2(vVar0.x, vVar0.y, 0);
		if (UNK_0x798A3F1296751F46() || func_108())
		{
			if (UNK_0xE4EDC4B0E92C078B(UNK_0x023428EEA3027652()))
			{
				UNK_0x7F010F50CE03A8AF(UNK_0x023428EEA3027652(), 255);
			}
		}
	}
	else if (func_164())
	{
		if (UNK_0xE4EDC4B0E92C078B(UNK_0x023428EEA3027652()))
		{
			UNK_0x7F010F50CE03A8AF(UNK_0x023428EEA3027652(), false);
		}
	}
	UNK_0xDB111A9E05F41582(vVar0.x, vVar0.y);
	UNK_0x6476077988E40DA0();
	UNK_0xB243B37593BB6C38();
	if (UNK_0x9F4FE516EAACCFC5(Local_117.f_61))
	{
		UNK_0xA2071E69C1AE8451(Local_117.f_61, 1);
	}
	UNK_0xF91D0B1DCE756AFB(0);
	if (func_164())
	{
		vVar3 = { UNK_0x9382F04ED9CDA21A(0) };
		vVar3 = { func_107(vVar3) };
		if (!UNK_0xE4EDC4B0E92C078B(Local_117.f_109))
		{
			Local_117.f_108 = func_105(vVar0, 0);
			UNK_0xBC8E0A7390523199(Local_117.f_108, 425);
			UNK_0xF2D30B8ACAF12A39(Local_117.f_108, false);
			UNK_0x9D7CDDB4B55142AF(Local_117.f_108, 4);
			UNK_0x61755AC17D8F538E(Local_117.f_108, func_104(2));
			UNK_0x029222ED35E8A217(Local_117.f_108, true);
			UNK_0x516E63E474722206(Local_117.f_108, 0.54f);
			UNK_0x2A065371C9D96655(Local_117.f_108, 13 + 1);
			Local_117.f_109 = func_105(vVar0, 0);
			UNK_0xBC8E0A7390523199(Local_117.f_109, 425);
			UNK_0xF2D30B8ACAF12A39(Local_117.f_109, false);
			UNK_0x9D7CDDB4B55142AF(Local_117.f_109, 4);
			UNK_0x61755AC17D8F538E(Local_117.f_109, func_104(18));
			UNK_0x029222ED35E8A217(Local_117.f_109, true);
			UNK_0x516E63E474722206(Local_117.f_109, 0.44f);
			UNK_0x2A065371C9D96655(Local_117.f_109, 13 + 1);
			UNK_0x54B31D18C3F36EB7(Local_117.f_109, 1);
			UNK_0x436F3596830D7DC3(Local_117.f_109, SYSTEM::ROUND(UNK_0xE7D606C557C86100(vVar3.x, vVar3.y)));
			UNK_0x54B31D18C3F36EB7(Local_117.f_108, 1);
			UNK_0x436F3596830D7DC3(Local_117.f_108, SYSTEM::ROUND(UNK_0xE7D606C557C86100(vVar3.x, vVar3.y)));
		}
		else
		{
			UNK_0x2F9282246F89FFD1(Local_117.f_109, vVar0);
			UNK_0x436F3596830D7DC3(Local_117.f_109, SYSTEM::ROUND(UNK_0xE7D606C557C86100(vVar3.x, vVar3.y)));
			UNK_0x9D7CDDB4B55142AF(Local_117.f_109, 5);
			UNK_0x2F9282246F89FFD1(Local_117.f_108, vVar0);
			UNK_0x436F3596830D7DC3(Local_117.f_108, SYSTEM::ROUND(UNK_0xE7D606C557C86100(vVar3.x, vVar3.y)));
			UNK_0x9D7CDDB4B55142AF(Local_117.f_108, 5);
		}
	}
}

int func_104(bool bParam0)
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

int func_105(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_106(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_107(vector3 vParam0)
{
	vector3 vVar0;

	vVar0.x = SYSTEM::COS(vParam0.x);
	vVar0.f_1 = SYSTEM::COS(vParam0.z);
	vVar0.f_2 = SYSTEM::SIN(vParam0.x);
	vVar0.f_1 = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -SYSTEM::SIN(vParam0.z));
	return vVar0;
}

bool func_108()
{
	return UNK_0x8BB17FEBE0394018() != 0;
}

void func_109()
{
	Global_1312666 = 1;
}

void func_110(int iParam0)
{
	Global_2462959 = iParam0;
}

bool func_111()
{
	return Global_2462959;
}

void func_112(int iParam0)
{
	if (Local_117.f_110 != iParam0)
	{
		Local_117.f_110 = iParam0;
	}
}

bool func_113()
{
	vector3 vVar0;
	float fVar3;

	if (func_129() && !func_99())
	{
		if ((func_127(0) || func_102(1)) || func_126())
		{
		}
		else
		{
			if (func_164())
			{
				if (UNK_0xBFC0798A6E3417F9(2, 80) || UNK_0xD245978525608929(2, 80))
				{
					return true;
				}
			}
			else
			{
				if (UNK_0xBFC0798A6E3417F9(0, 51) || UNK_0xD245978525608929(0, 51))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_117.f_107, 0))
					{
						UNK_0x8A11CFBA6F8D36BF(Local_117.f_107, 1f);
						UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					}
					return true;
				}
				if (func_48(func_30()))
				{
					if (UNK_0x9F4FE516EAACCFC5(Local_117.f_61))
					{
						vVar0 = { UNK_0xD06724447386BC29(Local_117.f_61) };
						if (UNK_0xE82754C349C7B581(vVar0, &fVar3, 0, 0))
						{
							if (SYSTEM::VDIST(vVar0, vVar0.x, vVar0.y, fVar3) < 2f)
							{
								return true;
							}
						}
					}
					if (UNK_0x70EED0761B82965E(func_30()))
					{
						return true;
					}
					if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_117.f_107, 0))
					{
						UNK_0x8A11CFBA6F8D36BF(Local_117.f_107, 1f);
						UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					}
				}
				else
				{
					return true;
				}
			}
			if (func_124())
			{
				return true;
			}
		}
	}
	if (func_122(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	if (func_116())
	{
		return true;
	}
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (func_48(func_114()))
		{
			if ((UNK_0xF4CCC8CB6DE7F1AE() % 30) == 0)
			{
				if (UNK_0x3D1053F9EB43B7AD(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, true, 0))
				{
					return true;
				}
			}
			if (UNK_0x377BE9A1BF38C7CE(func_114()))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_114()
{
	if (Global_1590382 != func_29())
	{
		if (!func_115(Global_1590382))
		{
			if (UNK_0xC844350D5D58C99A(Global_1370256))
			{
				return Global_1370256;
			}
			if (UNK_0xC844350D5D58C99A(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	return -1;
}

bool func_115(bool bParam0)
{
	if (bParam0 != func_29())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310.f_3, 4);
	}
	return false;
}

bool func_116()
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (Global_1590382 != func_29())
		{
			if (func_115(Global_1590382) || func_121(Global_1590382))
			{
				return true;
			}
			if (func_120(Global_1590382))
			{
				if (func_27(func_119(Global_1590382)) == 11)
				{
					if (func_27(func_118(Global_1590382)) == 11)
					{
						if (func_117(Global_1590382) == 5)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

int func_117(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

int func_118(bool bParam0)
{
	if (bParam0 != func_29() && func_28(bParam0, 1, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_15;
	}
	return -1;
}

int func_119(bool bParam0)
{
	if (bParam0 != func_29() && func_28(bParam0, 1, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

bool func_120(bool bParam0)
{
	if (bParam0 != func_29() && func_28(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 4);
	}
	return false;
}

bool func_121(int iParam0)
{
	if (iParam0 != func_29())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 14);
	}
	return false;
}

bool func_122(bool bParam0)
{
	if (bParam0 != func_29() && func_28(bParam0, 1, 1))
	{
		if (func_123(bParam0) && !func_120(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_123(bool bParam0)
{
	if (bParam0 != func_29() && func_28(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

bool func_124()
{
	bool bVar0;
	bool bVar1;

	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (UNK_0xC844350D5D58C99A(func_30()))
		{
			bVar0 = UNK_0xA30B8362589C124A(func_30(), -1, 0);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					bVar1 = UNK_0x83FACCC48B68F9D1(bVar0);
					if (func_28(bVar1, 1, 1))
					{
						if (func_125(bVar1))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_125(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (Global_1628237[bVar0 /*615*/].f_8)
		{
			return true;
		}
	}
	return false;
}

bool func_126()
{
	return Global_22211.f_135;
}

bool func_127(bool bParam0)
{
	if (UNK_0xD6C3CB7DCE462DB4())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (func_128(UNK_0x16F2683693E537C9()))
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

bool func_128(bool bParam0)
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

bool func_129()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687686, true);
}

void func_130()
{
	vector3 vVar0;
	vector3 vVar3;

	if (func_137())
	{
		if (!UNK_0x9F4FE516EAACCFC5(Local_117.f_61))
		{
			Local_117.f_61 = UNK_0x92B061D59B9B540A(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			UNK_0x5818C8D5303DCCF8(Local_117.f_61, Local_117.f_59);
			vVar0 = { UNK_0x835730A2D89F6093(func_30(), 2) };
			UNK_0x5F3CBA6EB9341C90(Local_117.f_61, 0f, 0f, vVar0.z, 2);
			UNK_0xC5940439E4EB9A33(Local_117.f_61, func_30(), func_136(), 1);
			func_133(1);
			func_132(1);
			func_90();
			UNK_0x225CFE81EA219E44();
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))
		{
			func_103();
			func_3();
			UNK_0xB3A1B75CB59FEB56(true, false, 0, 1, 1, 0);
			UNK_0x63D6BFA449464BBF("eyeinthesky");
			if (Local_117.f_49 == -1)
			{
				Local_117.f_49 = UNK_0xD68EA767274B7444();
				UNK_0x4D7F4CC43D4D0DE3(Local_117.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				Local_117.f_107 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				vVar3 = { UNK_0x68F4C0EC296D3901(Local_117.f_107, true) };
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				UNK_0x9AFA0796FDCABCD5(UNK_0x16F2683693E537C9(), Local_117.f_107, false, false, vVar3, 4, 0f, -1f, -1f, -1, -1, -1f, 0);
				UNK_0x8A11CFBA6F8D36BF(Local_117.f_107, 0f);
			}
			func_131("HUNTGUN_2b", -1);
			func_112(2);
		}
	}
	else
	{
		func_112(3);
	}
}

void func_131(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_334, 25))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_334), 25);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_334, 25))
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_334), 25);
	}
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!func_129())
		{
			UNK_0x5D96D8530B3D0904(&Global_1687686, true);
		}
	}
	else
	{
		if (func_129())
		{
			UNK_0x0674E58A79778E99(&Global_1687686, true);
		}
		func_134(0);
	}
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		if (!func_135())
		{
			UNK_0x5D96D8530B3D0904(&Global_1687686, 2);
		}
	}
	else if (func_135())
	{
		UNK_0x0674E58A79778E99(&Global_1687686, 2);
	}
}

bool func_135()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687686, 2);
}

Vector3 func_136()
{
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		return 0f, 0f, 3.3f;
	}
	if (UNK_0xC844350D5D58C99A(func_30()))
	{
		switch (UNK_0x134B62B726CEC8E6(func_30()))
		{
			case joaat("MAVERICK"):
				return 0f, 2.75f, -1.25f;
		}
	}
	return 0f, 0f, 0f;
}

bool func_137()
{
	if (!UNK_0xC844350D5D58C99A(func_30()))
	{
		return false;
	}
	if (UNK_0xC844350D5D58C99A(func_30()) && UNK_0x437347B10A200C4B(func_30(), 0))
	{
		return false;
	}
	return true;
}

void func_138()
{
	vector3 vVar0;

	if (func_137())
	{
		if (func_150())
		{
			if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
			{
				func_139(UNK_0xD803B885F5E47A62(), 0, 32768, 0);
			}
			if (!func_58(&(Local_117.f_113)))
			{
				if (func_48(func_30()))
				{
					if (UNK_0x9E632F16E887F781(UNK_0x68F4C0EC296D3901(func_30(), true), 100f, 1))
					{
						func_57(&(Local_117.f_113), 0, 0);
					}
				}
			}
			else if (func_56(&(Local_117.f_113), 2000, 0))
			{
				UNK_0x75AFFFF37CDAEC84(func_30());
			}
		}
		if (func_58(&(Local_117.f_113)))
		{
			if (func_56(&(Local_117.f_113), 5000, 0))
			{
				if (UNK_0x68367101660E33F0())
				{
					if (!UNK_0x9F4FE516EAACCFC5(Local_117.f_61))
					{
						Local_117.f_61 = UNK_0x92B061D59B9B540A(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
						UNK_0x5818C8D5303DCCF8(Local_117.f_61, Local_117.f_59);
						vVar0 = { UNK_0x835730A2D89F6093(func_30(), 2) };
						UNK_0x5F3CBA6EB9341C90(Local_117.f_61, 0f, 0f, vVar0.z, 2);
						UNK_0xC5940439E4EB9A33(Local_117.f_61, func_30(), func_136(), 1);
						func_133(1);
						func_132(1);
						func_90();
						UNK_0x225CFE81EA219E44();
						UNK_0x8BC9595FD2792B5D("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 2))
					{
						func_103();
						func_3();
						UNK_0x486B4ADE317F0689();
						UNK_0xB3A1B75CB59FEB56(true, false, 0, 1, 1, 0);
						if (Local_117.f_49 == -1)
						{
							Local_117.f_49 = UNK_0xD68EA767274B7444();
							UNK_0x4D7F4CC43D4D0DE3(Local_117.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_112(2);
					}
				}
			}
		}
	}
	else
	{
		func_112(3);
	}
}

void func_139(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_149())
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
		if (!func_147())
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
				else if (bVar14 || (!func_10(UNK_0xD803B885F5E47A62(), 0) && !func_101()))
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
					func_144(0, 0, 0);
					if (bVar25)
					{
						UNK_0x066C43E677C08D5C();
					}
				}
				if (!func_143(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
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
					func_142();
					func_141();
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
				if (!func_143(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
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
					if (func_140(Global_4456448.f_232883))
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

bool func_140(int iParam0)
{
	return iParam0 == 17;
}

void func_141()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_142()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_143(bool bParam0)
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

void func_144(bool bParam0, bool bParam1, int iParam2)
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
				func_146();
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
		if (func_10(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0xD51AAA59D51D8056(bParam0, bParam1, 1);
		}
		else
		{
			UNK_0x7AEFB64DFEBF60B0(bParam0, bParam1);
		}
		UNK_0xF374D547F2AC15B0(bParam0, bParam1);
		func_145(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_145(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_146()
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

bool func_147()
{
	if (func_148() == 0)
	{
		return true;
	}
	return false;
}

int func_148()
{
	return Global_1312467.f_18;
}

bool func_149()
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

bool func_150()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if (((UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return true;
		}
		if (func_151())
		{
			return false;
		}
	}
	return false;
}

bool func_151()
{
	bool bVar0;

	if (func_163(UNK_0xD803B885F5E47A62()))
	{
		bVar0 = func_162(UNK_0xD803B885F5E47A62());
		if (func_28(bVar0, 0, 1))
		{
			if ((((((func_123(bVar0) && func_27(func_119(bVar0)) == 4) && UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar0))) && !UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar0))) && UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bVar0), 0)) && UNK_0xC844350D5D58C99A(UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bVar0), 0))) && func_161(UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bVar0), 0)))
			{
				return true;
			}
			if (!func_160(Global_4456448.f_194990))
			{
				if (func_163(bVar0))
				{
					if (func_159(bVar0))
					{
						return true;
					}
					else if (func_123(UNK_0xD803B885F5E47A62()) || func_158())
					{
						return true;
					}
				}
			}
		}
	}
	if (Global_1687716)
	{
		return true;
	}
	if (func_157(UNK_0xD803B885F5E47A62()))
	{
		bVar0 = func_156(UNK_0xD803B885F5E47A62());
		if (func_28(bVar0, 0, 1))
		{
			if ((((((func_123(bVar0) && func_27(func_119(bVar0)) == 9) && UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar0))) && !UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar0))) && UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bVar0), 0)) && UNK_0xC844350D5D58C99A(UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bVar0), 0))) && UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bVar0), 0)) == joaat("AVENGER"))
			{
				return true;
			}
			if (func_155(bVar0))
			{
				return true;
			}
			else if (func_123(UNK_0xD803B885F5E47A62()) || func_158())
			{
				return true;
			}
		}
	}
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		bVar0 = func_154(UNK_0xD803B885F5E47A62());
		if (func_28(bVar0, 0, 1))
		{
			if ((((Global_1590382 != func_29() && func_123(Global_1590382)) && func_27(func_119(Global_1590382)) == 11) && func_67(Global_1590382, -1)) && UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(Global_1590382), 0), joaat("TERBYTE")))
			{
				return true;
			}
			else if (func_115(bVar0))
			{
				return true;
			}
			else if (func_123(UNK_0xD803B885F5E47A62()) || func_158())
			{
				return true;
			}
		}
	}
	if (func_157(UNK_0xD803B885F5E47A62()) || func_153(UNK_0xD803B885F5E47A62()))
	{
		switch (Global_1319116)
		{
			case 1:
				if (Global_262145.f_22584)
				{
					return true;
				}
				break;
			case 2:
				if (Global_262145.f_22585)
				{
					return true;
				}
				break;
			case 3:
				if (Global_262145.f_22586)
				{
					return true;
				}
				break;
		}
	}
	if (Global_1319114 == 1)
	{
		return true;
	}
	if (func_152(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_152(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_194990;
}

bool func_153(bool bParam0)
{
	if (bParam0 != func_29())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_27(Global_2425662[bParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return false;
}

int func_154(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

bool func_155(bool bParam0)
{
	if (bParam0 != func_29())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310.f_2, 6);
	}
	return false;
}

int func_156(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

bool func_157(bool bParam0)
{
	if (bParam0 != func_29())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_158()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377, 6);
}

bool func_159(bool bParam0)
{
	if (bParam0 != func_29())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 6);
	}
	return false;
}

bool func_160(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

bool func_161(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("HAULER2") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("PHANTOM3"))
	{
		return true;
	}
	return false;
}

int func_162(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0 /*421*/].f_310.f_8;
}

bool func_163(bool bParam0)
{
	if (bParam0 != func_29())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_164()
{
	return UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 7);
}

void func_165()
{
	if (!func_99())
	{
		if (func_28(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!func_171())
			{
				if (func_164())
				{
					if ((func_167() && !func_150()) && func_166("MP_HTRUCK_T_2"))
					{
						if (UNK_0xB9132A06AE472728(2, 176) || UNK_0x9A01369A10646AFE(2, 176))
						{
							func_134(1);
							func_112(1);
							UNK_0xA37A90C62806D848(1);
						}
					}
				}
				else if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if ((!UNK_0xFEBC1E4EC9E001F0() && !UNK_0x8FA469D9C5F1A01F()) && !func_166("HUNTGUN_1b"))
					{
						func_131("HUNTGUN_1b", -1);
					}
					else if (!func_166("HUNTGUN_1b"))
					{
						UNK_0xA37A90C62806D848(1);
					}
					else if (UNK_0xBFC0798A6E3417F9(0, 51) || UNK_0xD245978525608929(0, 51))
					{
						func_134(1);
						func_112(1);
						UNK_0xA37A90C62806D848(1);
					}
				}
				else if (func_166("HUNTGUN_1b"))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			else if (func_166("HUNTGUN_1b"))
			{
				UNK_0xA37A90C62806D848(1);
			}
		}
	}
}

bool func_166(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_167()
{
	if ((func_26(UNK_0xD803B885F5E47A62(), 0) && Global_1319110 == 2) && func_168())
	{
		return true;
	}
	return false;
}

bool func_168()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if ((((UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_169(UNK_0x16F2683693E537C9(), 2106541073))
		{
			return false;
		}
		if (((((!UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return false;
		}
		if (func_151())
		{
			return false;
		}
	}
	return true;
}

bool func_169(bool bParam0, int iParam1)
{
	if (func_170(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_170(bool bParam0)
{
	if (func_48(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_171()
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (Global_262145.f_24157)
		{
			return true;
		}
	}
	if (func_176())
	{
		return true;
	}
	if (func_175())
	{
		return true;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return true;
	}
	if (func_174())
	{
		return true;
	}
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (func_115(Global_1590382))
		{
			return true;
		}
	}
	if (func_125(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	if (func_44(0))
	{
		return true;
	}
	if (func_173())
	{
		return true;
	}
	if (func_172())
	{
		return true;
	}
	if (!func_137())
	{
		return true;
	}
	if (func_116())
	{
		return true;
	}
	if (Global_1319114)
	{
		return true;
	}
	if (func_26(UNK_0xD803B885F5E47A62(), 0))
	{
		if (func_48(func_114()))
		{
			if (UNK_0x3D1053F9EB43B7AD(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, true, 0))
			{
				return true;
			}
			if (UNK_0x377BE9A1BF38C7CE(func_114()))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (func_124())
	{
		return true;
	}
	if (!func_164())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (func_48(bVar0))
			{
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
				if (UNK_0xE82754C349C7B581(vVar1, &fVar4, 0, 0))
				{
					if (SYSTEM::VDIST(vVar1, vVar1.x, vVar1.y, fVar4) < 3f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_172()
{
	return Global_96053;
}

bool func_173()
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPCAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_174()
{
	return Global_1676377.f_474;
}

bool func_175()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

bool func_176()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_177(int iParam0)
{
	return Local_117.f_110 == iParam0;
}

void func_178()
{
	vector3 vVar0;

	if (func_177(1) || func_177(2))
	{
		if (func_48(func_30()))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(func_30(), true) };
			UNK_0xA4A0E041958E996F(vVar0, 100f, 200f);
			UNK_0x71AEB1E48B81572C();
			if ((UNK_0xF4CCC8CB6DE7F1AE() % 120) == 0)
			{
				UNK_0x9303BDE130B7DFE2(vVar0, 300f, 30);
			}
		}
	}
	if (func_177(2))
	{
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			func_139(UNK_0xD803B885F5E47A62(), 1, 0, 0);
		}
		func_179();
		UNK_0xEAB026E686C0D991(0, 19, 1);
		UNK_0xEAB026E686C0D991(0, 166, 1);
		UNK_0xEAB026E686C0D991(0, 167, 1);
		UNK_0xEAB026E686C0D991(0, 168, 1);
		UNK_0xEAB026E686C0D991(0, 169, 1);
		UNK_0xEAB026E686C0D991(2, 218, 1);
		UNK_0xEAB026E686C0D991(2, 219, 1);
		UNK_0xEAB026E686C0D991(2, 220, 1);
		UNK_0xEAB026E686C0D991(2, 221, 1);
		UNK_0xEAB026E686C0D991(2, 205, 1);
		UNK_0xEAB026E686C0D991(2, 206, 1);
		UNK_0xEAB026E686C0D991(2, 207, 1);
		UNK_0xEAB026E686C0D991(2, 208, 1);
		UNK_0xEAB026E686C0D991(2, 209, 1);
		UNK_0xEAB026E686C0D991(2, 210, 1);
		UNK_0xEAB026E686C0D991(2, 202, 1);
		UNK_0xEAB026E686C0D991(2, 80, 1);
		UNK_0xEAB026E686C0D991(2, 51, 1);
		UNK_0xEAB026E686C0D991(2, 190, 1);
		UNK_0xEAB026E686C0D991(2, 199, 1);
		UNK_0xEAB026E686C0D991(2, 200, 1);
		if (UNK_0x91E3F625EF57450D(0))
		{
			UNK_0xEAB026E686C0D991(0, 238, 1);
			UNK_0xEAB026E686C0D991(0, 237, 1);
		}
		if (UNK_0x798A3F1296751F46())
		{
			UNK_0xEAB026E686C0D991(0, 201, 1);
			UNK_0xEAB026E686C0D991(0, 202, 1);
			UNK_0xEAB026E686C0D991(0, 188, 1);
			UNK_0xEAB026E686C0D991(0, 187, 1);
			UNK_0xEAB026E686C0D991(0, 189, 1);
			UNK_0xEAB026E686C0D991(2, 195, 1);
			UNK_0xEAB026E686C0D991(2, 196, 1);
			UNK_0xEAB026E686C0D991(2, 198, 1);
			UNK_0xEAB026E686C0D991(2, 197, 1);
		}
	}
}

void func_179()
{
	func_180();
}

void func_180()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 361)
	{
		UNK_0x38C3A68D7861DCFD(0, iVar0, 1);
		iVar0++;
	}
}

bool func_181()
{
	if (!func_147())
	{
		return true;
	}
	if (func_183())
	{
		return true;
	}
	if (!func_164())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (!func_182(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_182(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0xA30B8362589C124A(bParam0, -1, 0) == UNK_0x16F2683693E537C9() && UNK_0xBBA8A868118C90ED(bParam0, false, 1))
		{
			switch (UNK_0x134B62B726CEC8E6(bParam0))
			{
				case joaat("MAVERICK"):
					return false;
			}
		}
	}
	return false;
}

bool func_183()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687686, false);
}

bool func_184()
{
	var uVar0;

	func_192(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_191())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_190())
	{
		return true;
	}
	if (func_189(159))
	{
		if (!func_188())
		{
			return true;
		}
	}
	if (func_189(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_185() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_185()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_185()
{
	switch (func_187())
	{
		case 0:
			return func_186();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_186()
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

int func_187()
{
	return Global_30768;
}

bool func_188()
{
	return Global_2450632.f_598;
}

bool func_189(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_190()
{
	return Global_2460680;
}

bool func_191()
{
	return Global_2450632.f_593;
}

void func_192(var uParam0)
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
					func_193(iVar0);
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

void func_193(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_28(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_194(bVar4, &bVar5))
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

bool func_194(bool bParam0, var uParam1)
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

void func_195()
{
	SYSTEM::WAIT(0);
}

void func_196(bool bParam0)
{
	int iVar0;

	if (!func_164())
	{
		if (func_166("HUNTGUN_1b"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		UNK_0x225CFE81EA219E44();
	}
	if (func_48(func_30()))
	{
		UNK_0x066C43E677C08D5C();
	}
	UNK_0xF5A41F3D3B38EFE3("helicopterhud");
	UNK_0xF5A41F3D3B38EFE3("droneHUD");
	UNK_0xE17FDF9E3068281B(&(Local_117.f_62));
	func_204();
	func_203();
	if (func_111())
	{
		func_110(0);
	}
	UNK_0xF737A3AD8873CE16();
	UNK_0xFB452C6B9BE826C7();
	if (func_147() && !func_123(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0x0C2635BB5127C8FB())
		{
			func_139(UNK_0xD803B885F5E47A62(), 1, 0, 0);
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
		}
	}
	func_51(&(Local_117.f_113));
	func_51(&(Local_117.f_115));
	func_51(&(Local_117.f_117));
	func_51(&(Local_117.f_119));
	func_133(0);
	func_132(0);
	Local_117.f_32 = -1;
	Local_117.f_31 = 0;
	Local_117.f_5 = 0;
	Local_117.f_24 = 0;
	Local_117.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_117.f_17[iVar0] = 0;
		func_51(&(Local_117.f_121[iVar0 /*2*/]));
		iVar0++;
	}
	func_88();
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_382, false))
	{
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_382), false);
	}
	Local_117.f_48 = 0;
	func_202();
	func_200(1, -1);
	if (UNK_0xE4EDC4B0E92C078B(Local_117.f_108))
	{
		UNK_0x142CC44DB769B57E(&(Local_117.f_108));
	}
	if (UNK_0xE4EDC4B0E92C078B(Local_117.f_109))
	{
		UNK_0x142CC44DB769B57E(&(Local_117.f_109));
	}
	if (!bParam0)
	{
		func_199(0);
		func_198();
	}
	else
	{
		func_197(0);
	}
}

void func_197(bool bParam0)
{
	int iVar0;

	Local_117.f_33 = 100;
	Local_117.f_59 = 50f;
	Local_117.f_62 = UNK_0xB01F55A0FD1CFD49(func_38());
	UNK_0x64F604CF561734A9("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	UNK_0x0D3BE1DE0262A012("helicopterhud", 0);
	UNK_0x0D3BE1DE0262A012("droneHUD", 0);
	Local_117.f_29 = UNK_0xD68EA767274B7444();
	Local_117.f_30 = UNK_0xD68EA767274B7444();
	func_112(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_117.f_34[iVar0] = -1;
		Local_117.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_198()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_199(bool bParam0)
{
	if (bParam0)
	{
		if (!func_183())
		{
			UNK_0x5D96D8530B3D0904(&Global_1687686, false);
		}
	}
	else if (func_183())
	{
		UNK_0x0674E58A79778E99(&Global_1687686, false);
	}
}

void func_200(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UNK_0x11CCD0ACA866C6C5(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_201(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_201(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (UNK_0x83D8570832F172A7(*iParam0))
		{
			UNK_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

void func_202()
{
	if (Local_117.f_30 != -1)
	{
		UNK_0x55D0A2DB35045A35(Local_117.f_30);
		UNK_0x43A06902454A1172(Local_117.f_30);
		Local_117.f_30 = -1;
	}
	if (Local_117.f_29 != -1)
	{
		UNK_0x55D0A2DB35045A35(Local_117.f_29);
		UNK_0x43A06902454A1172(Local_117.f_29);
		Local_117.f_29 = -1;
	}
	if (Local_117.f_49 != -1)
	{
		UNK_0x55D0A2DB35045A35(Local_117.f_49);
		UNK_0x43A06902454A1172(Local_117.f_49);
		Local_117.f_49 = -1;
	}
	UNK_0x8910D3D58E0132B8("DLC_GR_MOC_Turret_View_Scene");
	UNK_0xBFBFE6D9F51994DB();
}

void func_203()
{
	if (Local_117.f_6 == -1)
	{
		UNK_0x55D0A2DB35045A35(Local_117.f_6);
		UNK_0x43A06902454A1172(Local_117.f_6);
		Local_117.f_6 = -1;
	}
}

void func_204()
{
	if (UNK_0x9F4FE516EAACCFC5(Local_117.f_61))
	{
		UNK_0x9A8DDC7C522F5BF5(Local_117.f_61, 0);
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0x225CFE81EA219E44();
	}
}

void func_205(struct<19> Param0, var uParam19, var uParam20)
{
	UNK_0x37AD2AB54480FA6A(32, 0, Param0.f_16);
	func_208(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&uLocal_116, 1);
	UNK_0x35B62793EAE9ADDF(&uLocal_83, 33);
	if (!func_207())
	{
		func_196(0);
	}
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		func_196(0);
	}
	if (Param0.f_18 == 1)
	{
		func_206(1);
	}
	else
	{
		func_206(0);
	}
	func_197(1);
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 7))
		{
			UNK_0x5D96D8530B3D0904(&(Local_117.f_5), 7);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_117.f_5, 7))
	{
		UNK_0x0674E58A79778E99(&(Local_117.f_5), 7);
	}
}

bool func_207()
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
		if (func_191())
		{
			return false;
		}
		if (func_189(157))
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

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_198();
			}
			else
			{
				return 0;
			}
		}
		if (!func_209())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_191())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_189(157))
				{
					if (!bParam2)
					{
						func_198();
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
					func_198();
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
				func_198();
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
			func_198();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_209()
{
	return Global_1312854;
}

