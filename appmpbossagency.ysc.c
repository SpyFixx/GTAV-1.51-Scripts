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
	float fLocal_47 = 0f;
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
	var uLocal_62 = 0;
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
	int iLocal_73 = 0;
	char cLocal_74[16] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	char cLocal_78[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	char cLocal_82[16] = "";
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	char cLocal_86[16] = "";
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	char cLocal_90[16] = "";
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	char cLocal_94[16] = "";
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&cLocal_74, "CELL_206", 16);
	StringCopy(&cLocal_78, "CELL_214", 16);
	StringCopy(&cLocal_82, "CELL_243", 16);
	StringCopy(&cLocal_86, "CELL_244", 16);
	StringCopy(&cLocal_90, "CELL_265", 16);
	StringCopy(&cLocal_94, "CELL_300", 16);
	UNK_0xB57F88F0123F4C38();
	func_97(&uLocal_101);
	iLocal_98 = 0;
	func_95();
	func_94(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_84(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_83();
		func_82();
		if (!Global_19486.f_1 == 9 && Global_19486.f_1 > 3)
		{
			switch (iLocal_73)
			{
				case 0:
					func_47();
					break;
				case 1:
					func_31();
					break;
				case 3:
					func_5();
					break;
				case 2:
					func_4();
					break;
				default:
					break;
			}
			if (Global_19486.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
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
	Global_1626881.f_6 = 0;
	UNK_0x10FAF14A60A0DBE1();
}

bool func_3()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	Global_1626881.f_6 = 1;
	if (bLocal_100)
	{
		if (UNK_0xB9132A06AE472728(2, Global_19455))
		{
			bLocal_100 = false;
		}
		return;
	}
	if (UNK_0xB9132A06AE472728(2, 201))
	{
		iLocal_73 = 1;
		iVar0 = func_29(iLocal_98, 0);
		func_6(iVar0);
		return;
	}
	if (UNK_0xB9132A06AE472728(2, 202))
	{
		iLocal_73 = 1;
		return;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, false, true, 0);
}

void func_6(int iParam0)
{
	bool bVar0;

	bVar0 = Global_1626881.f_7[iParam0 /*8*/].f_2;
	if (Global_1626881.f_7[iParam0 /*8*/].f_1 == 1 && bLocal_99 == bVar0)
	{
		func_26(bVar0, Global_1626881.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1626881.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_8()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

bool func_10(int iParam0)
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

bool func_11()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_12()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_13(int iParam0)
{
	int iVar0;

	if (iParam0 != -1)
	{
		if (Global_1626881.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1626881.f_7[iParam0 /*8*/].f_5, false))
			{
				func_25();
				if (Global_1626881.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1626881.f_4 = (Global_1626881.f_4 - 1);
					if (Global_1626881.f_4 < 0)
					{
						Global_1626881.f_4 = 0;
					}
					func_18();
				}
			}
			UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_22), Global_1626881.f_7[iParam0 /*8*/].f_2);
			UNK_0xD59AE843FA2C6B40(Global_1626881.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1626881.f_7[iVar0 /*8*/] = { Global_1626881.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1626881.f_7[9 /*8*/].f_1 = 0;
		Global_1626881.f_7[9 /*8*/].f_2 = func_14();
	}
}

bool func_14()
{
	return -1;
}

void func_15(bool bParam0)
{
	if (!func_16(bParam0))
	{
		UNK_0x5D96D8530B3D0904(&(Global_1626881.f_3), bParam0);
	}
}

bool func_16(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1626881.f_3, bParam0);
}

void func_17()
{
	Global_1626881 = (Global_1626881 - 1);
}

void func_18()
{
	Global_21868 = (Global_21868 - 1);
	if (Global_21868 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_94(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_20(1);
			func_94(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
}

void func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;

	Global_21873 = 0;
	Global_7961 = iParam0;
	bVar0 = false;
	while (bVar0 < 9)
	{
		Global_7925[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 9)
	{
		iVar1 = 0;
		if (func_23(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[bVar0] == 0)
						{
							Global_7889[bVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									bVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									bVar2 = 255;
									Global_19668 = 0;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_22(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[bVar0] == 0)
						{
							Global_7889[bVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268500[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268500[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										case 1:
											iVar6 = Global_42608;
											break;
										case 2:
											iVar6 = Global_42609;
											break;
										default:
											break;
									}
									func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_22(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(Global_7362);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									bVar7 = 42;
								}
								else
								{
									bVar7 = 255;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_22(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar7);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									bVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									bVar8 = 255;
									Global_19668 = 0;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_22(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar8);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_22(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && UNK_0x7F8A39872A07D2CE(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && UNK_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_22(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
}

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_22(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_22(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_22(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_22(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_22(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_22(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_23(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_24(bool bParam0)
{
	if (Global_21868 != 0)
	{
		if (!UNK_0xEA6BC48857E0AC4C(bParam0))
		{
		}
		Global_21868 = 0;
	}
}

void func_25()
{
	Global_1626881.f_1 = (Global_1626881.f_1 - 1);
	if (Global_1626881.f_1 < 0)
	{
		Global_1626881.f_1 = 0;
	}
}

void func_26(bool bParam0, var uParam1)
{
	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_26 == func_14())
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_26 = bParam0;
			Global_2537071.f_5124.f_221 = uParam1;
			func_27(func_28(bParam0));
		}
	}
}

void func_27(bool bParam0)
{
	struct<2> Var0;

	Var0 = -1185346884;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	if (!bParam0 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Var0, 2, bParam0);
	}
}

bool func_28(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()
{
	return Global_1626881;
}

void func_31()
{
	int iVar0;
	bool bVar1;

	iVar0 = func_29(iLocal_98, 0);
	if (iLocal_98 == -1)
	{
		func_84(1);
		return;
	}
	bVar1 = Global_1626881.f_7[iVar0 /*8*/].f_2;
	if (!func_46(bVar1, 0, 1) || bLocal_99 != bVar1)
	{
		func_84(1);
		return;
	}
	func_41(&uLocal_101);
	if (func_39(&uLocal_101))
	{
		func_84(1);
		return;
	}
	if (func_38(&uLocal_101))
	{
		func_13(iVar0);
		func_84(1);
		return;
	}
	if (func_34(&uLocal_101))
	{
		if (func_33())
		{
			bLocal_100 = true;
			iLocal_73 = 3;
		}
		else if (Global_1626881.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1626881.f_7[iVar0 /*8*/] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)
{
	UNK_0x5D96D8530B3D0904(&Global_1573902, 15);
	func_13(iParam0);
	Global_1626881.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1312418;
}

bool func_34(var uParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(*uParam0, false))
	{
		return false;
	}
	if (Global_19464)
	{
		return false;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	if (!UNK_0xBFC0798A6E3417F9(2, Global_19455))
	{
		return false;
	}
	func_35();
	Global_19464 = 1;
	return true;
}

void func_35()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		UNK_0x5A963FB0365294C8(5);
	}
}

bool func_37()
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

bool func_38(var uParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(*uParam0, true))
	{
		return false;
	}
	if (Global_19464)
	{
		return false;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	if (!UNK_0xBFC0798A6E3417F9(2, Global_19458))
	{
		return false;
	}
	func_35();
	Global_19464 = 1;
	return true;
}

bool func_39(var uParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(*uParam0, 2))
	{
		return false;
	}
	if (Global_19464)
	{
		return false;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	if (!UNK_0xBFC0798A6E3417F9(2, Global_19456))
	{
		return false;
	}
	func_40();
	Global_19464 = 1;
	return true;
}

void func_40()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_41(var uParam0)
{
	if (UNK_0x1C0640BA9A7327B3() < uParam0->f_1)
	{
		return;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return;
	}
	if (UNK_0xBFC0798A6E3417F9(2, Global_19462) || UNK_0xBFC0798A6E3417F9(2, 181))
	{
		func_44();
		uParam0->f_1 = UNK_0x1C0640BA9A7327B3() + 50;
	}
	if (UNK_0xBFC0798A6E3417F9(2, Global_19463) || UNK_0xBFC0798A6E3417F9(2, 180))
	{
		func_42();
		uParam0->f_1 = UNK_0x1C0640BA9A7327B3() + 50;
	}
}

void func_42()
{
	func_94(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_43();
}

void func_43()
{
	if (func_37())
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

void func_44()
{
	func_94(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_45();
}

void func_45()
{
	if (func_37())
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

bool func_46(bool bParam0, bool bParam1, bool bParam2)
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

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_30() > 1)
	{
		func_41(&uLocal_101);
	}
	if (func_34(&uLocal_101))
	{
		UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
		iVar0 = UNK_0x7A8BB56B212464AC();
		while (!UNK_0xC95D7AEEDEF4946B(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_98 = UNK_0xA52833FE33F41C53(iVar0);
		iVar1 = func_29(iLocal_98, 0);
		switch (Global_1626881.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			case 1:
				func_49();
				break;
			default:
				return;
		}
		Global_19486.f_1 = 8;
		return;
	}
	if (func_38(&uLocal_101))
	{
		UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
		iVar2 = UNK_0x7A8BB56B212464AC();
		while (!UNK_0xC95D7AEEDEF4946B(iVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_98 = UNK_0xA52833FE33F41C53(iVar2);
		iVar3 = func_29(iLocal_98, 0);
		switch (Global_1626881.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			case 1:
				func_13(iVar3);
				func_84(0);
				return;
			default:
				break;
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_84(0);
	}
}

void func_48(bool bParam0)
{
	if (func_16(bParam0))
	{
		UNK_0x0674E58A79778E99(&(Global_1626881.f_3), bParam0);
	}
}

void func_49()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<16> Var5;
	var uVar21[3];
	bool bVar25;
	int iVar26;
	int iVar27;
	char cVar28[16];
	struct<16> Var32;
	char cVar48[16];

	if (Global_19486.f_1 != 8)
	{
		Global_19486.f_1 = 8;
	}
	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	bVar0 = false;
	iVar3 = func_29(iLocal_98, 0);
	bLocal_99 = Global_1626881.f_7[iVar3 /*8*/].f_2;
	bVar4 = Global_1626881.f_7[iVar3 /*8*/].f_2;
	UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(26);
	UNK_0x3CAEA85DA607305E(false);
	if (func_46(bVar4, 0, 1))
	{
		Var5 = { func_81(bVar4) };
		UNK_0x7ACC3006A87F8B39("STRING");
		UNK_0x3A820E495A7BA3E5(func_75(bVar4));
		UNK_0xD06AC7C87A34A6AD(&Var5);
		UNK_0x779B34565F4D71B1();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1626881.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_14960)
		{
			bVar25 = func_74(bVar4);
			iVar26 = 0;
			while (iVar26 < 3)
			{
				if (iVar27 < 3)
				{
					if (Global_1628237[bVar4 /*615*/].f_11.f_11[iVar26] != func_14())
					{
						if (func_46(Global_1628237[bVar4 /*615*/].f_11.f_11[iVar26], 0, 1))
						{
							uVar21[iVar27] = Global_1628237[bVar4 /*615*/].f_11.f_11[iVar26];
							iVar27++;
						}
					}
				}
				iVar26++;
			}
			if (iVar27 == 0)
			{
				if (bVar25)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar28, "BA_APP_BODY_T4", 16);
				if (bVar25)
				{
					StringCopy(&cVar28, "BA_APP_BODYCT4", 16);
				}
				if (iVar27 == 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar27 > 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T6", 16);
					}
				}
				UNK_0x7ACC3006A87F8B39(&cVar28);
				iVar26 = 0;
				while (iVar26 < iVar27)
				{
					Var32 = { func_81(uVar21[iVar26]) };
					UNK_0xD06AC7C87A34A6AD(&Var32);
					iVar26++;
				}
				UNK_0x779B34565F4D71B1();
			}
		}
		else
		{
			if (Global_1626881.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1626881.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar48, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar48, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1626881.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar48, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar48, "BA_APP_BODY_T10", 16);
			}
			UNK_0x7ACC3006A87F8B39(&cVar48);
			UNK_0x6D99DF8263D35CE5(Global_1626881.f_88[iVar3 /*5*/]);
			UNK_0x6D99DF8263D35CE5(func_73(bVar4));
			UNK_0x6D99DF8263D35CE5(Global_1626881.f_88[iVar3 /*5*/].f_3);
			UNK_0x6D99DF8263D35CE5(Global_1626881.f_88[iVar3 /*5*/].f_4);
			UNK_0x779B34565F4D71B1();
		}
	}
	else if (Global_1626881.f_7[iVar3 /*8*/] == 1)
	{
		UNK_0x7ACC3006A87F8B39("BA_APP_BODY_DM2");
		UNK_0x3A820E495A7BA3E5(func_75(Global_1626881.f_7[iVar3 /*8*/].f_2));
		UNK_0xD06AC7C87A34A6AD(func_61(Global_1626881.f_7[iVar3 /*8*/].f_2));
		UNK_0x779B34565F4D71B1();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1626881.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			bVar1 = UNK_0x5283D58F79627134(iVar2);
		}
	}
	if (bVar0)
	{
		UNK_0x024BC5F58A72410C(bVar1);
	}
	else
	{
		func_22(&cLocal_94);
	}
	UNK_0x7E60D21B163E9D56();
	func_94(Global_19467, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_53(&cLocal_90);
	func_50(13, &cLocal_82, 12, &cLocal_86, 4, &cLocal_74, &uLocal_101);
	iLocal_73 = 1;
}

void func_50(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_51(2, iParam0, bParam1, 0, bParam6, -1);
	func_51(1, iParam2, bParam3, 1, bParam6, 17);
	func_51(3, iParam4, bParam5, 2, bParam6, -1);
}

void func_51(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_19467, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x0674E58A79778E99(bParam4, bParam3);
		func_52(bParam5, 0);
		return;
	}
	if (Global_19474)
	{
		func_21(Global_19467, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, bParam2, 0, 0, 0, 0);
		UNK_0x5D96D8530B3D0904(bParam4, bParam3);
		func_52(bParam5, 1);
		return;
	}
	func_21(Global_19467, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	UNK_0x5D96D8530B3D0904(bParam4, bParam3);
	func_52(bParam5, 1);
}

void func_52(bool bParam0, bool bParam1)
{
	if (bParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, bParam0);
		return;
	}
	UNK_0x0674E58A79778E99(&Global_7356, bParam0);
}

void func_53(bool bParam0)
{
	func_54(Global_19467, "SET_HEADER", bParam0, 0, 0, 0, 0);
}

void func_54(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_22(bParam2);
	if (!UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		func_22(bParam3);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_22(bParam4);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam5))
	{
		func_22(bParam5);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam6))
	{
		func_22(bParam6);
	}
	UNK_0x7E60D21B163E9D56();
}

int func_55(bool bParam0)
{
	int iVar0;

	iVar0 = func_58(bParam0);
	if (iVar0 == -1)
	{
		func_56(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_56(bool bParam0, bool bParam1)
{
	if (!func_46(bParam0, 0, 1))
	{
		return;
	}
	if (func_58(bParam0) != -1)
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
	if (func_57(bParam0))
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

bool func_57(bool bParam0)
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

int func_58(bool bParam0)
{
	int iVar0;

	if (!func_46(bParam0, 0, 1))
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
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)
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
	func_60(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

bool func_61(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_72(&(Global_1628237[bParam0 /*615*/].f_11.f_104));
		return bVar0;
	}
	if (Global_1628237[bParam0 /*615*/].f_11.f_120 != Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_120)
	{
		bVar0 = func_67(bParam0, 0);
		return bVar0;
	}
	if (((func_66(bParam0, 28) || func_66(UNK_0xD803B885F5E47A62(), 28)) || func_65(bParam0)) && !func_63(bParam0))
	{
		return func_67(bParam0, 0);
	}
	bVar1 = func_62(bParam0);
	if (bVar1 != func_14())
	{
		if (bVar1 != UNK_0xD803B885F5E47A62())
		{
			if (!UNK_0xDC30EF462887322E() && !UNK_0x05449BDA851F5199(0, -1, 1))
			{
				return func_67(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_14())
	{
		bVar0 = func_72(&(Global_1628237[bVar1 /*615*/].f_11.f_104));
		if (UNK_0xEA6BC48857E0AC4C(bVar0))
		{
			return func_67(bVar1, 0);
		}
		else
		{
			return bVar0;
		}
	}
	return "";
}

int func_62(bool bParam0)
{
	if (bParam0 != func_14())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_14();
}

bool func_63(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_64(bParam0) };
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

struct<13> func_64(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_65(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_14())
	{
		Var0 = { func_64(bParam0) };
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

bool func_66(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_4, bParam1);
}

char* func_67(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(bParam0, 1))
		{
			return func_68();
		}
	}
	return UNK_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_68()
{
	return UNK_0x19C9F30A7697B43C("GB_REST_ACCM");
}

int func_69(bool bParam0, bool bParam1)
{
	return func_70(bParam0, bParam1, 1);
}

int func_70(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_71(bParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (iVar0 != func_14() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_71(bool bParam0, int iParam1)
{
	if (bParam0 != func_14())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_14())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

char* func_72(var uParam0)
{
	return uParam0;
}

int func_73(bool bParam0)
{
	if (func_62(bParam0) == func_14())
	{
		return 0;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_19;
}

bool func_74(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 26);
}

int func_75(bool bParam0)
{
	int iVar0;

	iVar0 = func_78(bParam0);
	if (iVar0 != -1)
	{
		return func_76(iVar0);
	}
	return 1;
}

int func_76(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_77(iParam0);
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

int func_77(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_78(bool bParam0)
{
	if (!bParam0 == func_14())
	{
		if (func_79(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_62(bParam0)];
		}
	}
	return -1;
}

bool func_79(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_80(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_14();
}

bool func_80(bool bParam0)
{
	if (bParam0 != func_14())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_14())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

struct<16> func_81(bool bParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, UNK_0x6E524813889AECF8(bParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_82()
{
	if (Global_1626881.f_6)
	{
		if (iLocal_73 != 3)
		{
			if (!UNK_0xE57E602827E07C9D())
			{
				Global_1626881.f_6 = 0;
			}
		}
	}
}

void func_83()
{
	UNK_0x558EC149EB2BC0A2(0, 176);
	UNK_0x558EC149EB2BC0A2(0, 177);
}

void func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bLocal_99 = func_14();
	if (!Global_19486.f_1 == 7)
	{
		Global_19486.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_98;
	}
	if (iVar0 >= Global_1387710)
	{
		iVar0 = 0;
	}
	if (Global_21865)
	{
		func_49();
		Global_21865 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_93());
	if ((func_79(UNK_0xD803B885F5E47A62(), 0) && !func_92(1)) && iVar1 <= 0)
	{
		func_90();
		return;
	}
	func_85();
	func_94(Global_19467, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &cLocal_78, 12, &cLocal_86, 4, &cLocal_74, &uLocal_101);
	}
	else
	{
		func_50(1, "", 1, "", 4, &cLocal_74, &uLocal_101);
	}
	iLocal_73 = 0;
}

void func_85()
{
	int iVar0;
	bool bVar1;

	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0 /*8*/].f_1 == 1 && Global_1626881.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1626881.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_89(iVar0, bVar1))
					{
						bVar1++;
					}
					break;
				case 1:
					if (func_87(iVar0, bVar1))
					{
						bVar1++;
					}
					break;
			}
		}
		iVar0++;
	}
	if (bVar1 > 0)
	{
		return;
	}
	func_86();
}

void func_86()
{
	bool bVar0;

	UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(25);
	UNK_0x3CAEA85DA607305E(false);
	if (func_80(UNK_0xD803B885F5E47A62()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	UNK_0x3CAEA85DA607305E(-1);
	UNK_0x3CAEA85DA607305E(true);
	bVar0 = UNK_0x8CD06866876216F2();
	UNK_0x1200CC973A2399C8(bVar0);
	UNK_0x7E60D21B163E9D56();
}

bool func_87(int iParam0, bool bParam1)
{
	struct<16> Var0;
	bool bVar16;
	int iVar17;

	if (Global_1626881.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1626881.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return false;
	}
	UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(25);
	UNK_0x3CAEA85DA607305E(bParam1);
	Var0 = { func_81(Global_1626881.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	UNK_0x7ACC3006A87F8B39("BA_APP_BODY_DM1");
	UNK_0x779B34565F4D71B1();
	UNK_0x3CAEA85DA607305E(-1);
	bVar16 = true;
	iVar17 = func_78(Global_1626881.f_7[iParam0 /*8*/].f_2);
	if (iVar17 != -1)
	{
		bVar16 = func_76(iVar17);
	}
	UNK_0x3CAEA85DA607305E(bVar16);
	UNK_0x1200CC973A2399C8(true);
	UNK_0x7E60D21B163E9D56();
	return true;
}

void func_88(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_89(int iParam0, bool bParam1)
{
	struct<16> Var0;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;

	if (Global_1626881.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1626881.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return false;
	}
	UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(25);
	UNK_0x3CAEA85DA607305E(bParam1);
	Var0 = { func_81(Global_1626881.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	bVar16 = func_74(Global_1626881.f_7[iParam0 /*8*/].f_2);
	bVar17 = func_73(Global_1626881.f_7[iParam0 /*8*/].f_2);
	if (bVar17 == 0)
	{
		if (bVar16)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (bVar17 == 1)
	{
		if (bVar16)
		{
			UNK_0x7ACC3006A87F8B39("BA_APP_BODYCT3");
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("BA_APP_BODY_T3");
		}
		UNK_0x6D99DF8263D35CE5(bVar17);
		UNK_0x779B34565F4D71B1();
	}
	else
	{
		if (bVar16)
		{
			UNK_0x7ACC3006A87F8B39("BA_APP_BODYCT2");
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("BA_APP_BODY_T2");
		}
		UNK_0x6D99DF8263D35CE5(bVar17);
		UNK_0x779B34565F4D71B1();
	}
	UNK_0x3CAEA85DA607305E(-1);
	bVar18 = true;
	iVar19 = func_78(Global_1626881.f_7[iParam0 /*8*/].f_2);
	if (iVar19 != -1)
	{
		bVar18 = func_76(iVar19);
	}
	UNK_0x3CAEA85DA607305E(bVar18);
	UNK_0x1200CC973A2399C8(true);
	UNK_0x7E60D21B163E9D56();
	return true;
}

void func_90()
{
	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(26);
	UNK_0x3CAEA85DA607305E(false);
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0x3A820E495A7BA3E5(func_75(UNK_0xD803B885F5E47A62()));
	UNK_0xD06AC7C87A34A6AD(func_91());
	UNK_0x779B34565F4D71B1();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	UNK_0x7E60D21B163E9D56();
	func_94(Global_19467, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &cLocal_74, &uLocal_101);
	iLocal_73 = 2;
}

bool func_91()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_62(UNK_0xD803B885F5E47A62());
	if (bVar0 != func_14())
	{
		if (bVar0 != UNK_0xD803B885F5E47A62())
		{
			if (((func_66(bVar0, 28) || func_66(UNK_0xD803B885F5E47A62(), 28)) || func_65(bVar0)) && !func_63(bVar0))
			{
				return func_67(bVar0, 0);
			}
			if (!UNK_0xDC30EF462887322E() && !UNK_0x05449BDA851F5199(0, -1, 1))
			{
				return func_67(bVar0, 0);
			}
		}
		bVar1 = func_72(&(Global_1628237[bVar0 /*615*/].f_11.f_104));
		if (UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			return func_67(bVar0, 0);
		}
		else
		{
			return bVar1;
		}
	}
	return "";
}

int func_92(bool bParam0)
{
	return func_69(UNK_0xD803B885F5E47A62(), bParam0);
}

int func_93()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_94(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_95()
{
	Global_1626881.f_1 = 0;
	func_96();
}

void func_96()
{
	Global_1626881.f_5 = 0;
}

void func_97(var uParam0)
{
	*uParam0 = 0;
}

