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
	struct<27> Local_73 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_100 = 0;
	vector3 vLocal_101[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_198 = 0;
	bool bLocal_199 = false;
	int iLocal_200 = 0;
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
	if (UNK_0x8CD06866876216F2() && func_221(UNK_0xD803B885F5E47A62(), 0, 1))
	{
		func_208(ScriptParam_0);
	}
	else
	{
		func_204();
	}
	while (true)
	{
		func_203();
		if (func_192() || func_188(15))
		{
			func_204();
		}
		if (UNK_0x09BE1E6DF7B80B43())
		{
			func_204();
		}
		switch (func_187(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_186() == 1)
				{
					if (func_185(60000))
					{
						if (UNK_0xE9F78D191AD5EDBA(Local_73.f_2))
						{
							if (UNK_0xDF1306B443CD3D15(UNK_0xB177666FAB6F4417(Local_73.f_2), 0))
							{
								if (!func_183())
								{
									if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
									{
										func_182("PTD_HELP1", -1);
									}
									else
									{
										func_182("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					vLocal_101[UNK_0x57270EE11514DC67() /*3*/] = 1;
				}
				else if (func_186() == 4)
				{
					vLocal_101[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			case 1:
				if (func_186() == 1)
				{
					func_22();
				}
				else if (func_186() == 4)
				{
					vLocal_101[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			case 3:
				func_21(&(Local_73.f_24));
				if (func_20(&(Local_73.f_24)))
				{
					vLocal_101[UNK_0x57270EE11514DC67() /*3*/] = 4;
				}
				break;
			case 2:
				vLocal_101[UNK_0x57270EE11514DC67() /*3*/] = 4;
			case 4:
				func_204();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_186())
			{
				case 0:
					if (func_11())
					{
						Local_73 = 1;
					}
					break;
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_73 = 4;
					}
					break;
				case 4:
					break;
			}
		}
	}
}

bool func_1()
{
	if (func_2())
	{
		return true;
	}
	return false;
}

bool func_2()
{
	struct<14> Var0;
	struct<14> Var14;

	if (func_7(Local_73.f_2))
	{
		if (Local_73.f_22 > 0)
		{
			if (UNK_0xE9F78D191AD5EDBA(Local_73.f_2))
			{
				if (!UNK_0x3D1053F9EB43B7AD(UNK_0xB177666FAB6F4417(Local_73.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, true, 0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
					{
						Var0.f_2 = 1919748918;
					}
					else
					{
						Var0.f_2 = -430230173;
					}
					func_5(Var0, func_6(1));
					UNK_0x5D96D8530B3D0904(&(Local_73.f_1), true);
					return true;
				}
			}
		}
	}
	if (Local_73.f_23 == 0)
	{
		if (Local_73 != 4)
		{
			if (UNK_0xE9F78D191AD5EDBA(Local_73.f_2))
			{
				if (UNK_0x437347B10A200C4B(UNK_0xB177666FAB6F4417(Local_73.f_2), 0))
				{
					if (func_3(&(Local_73.f_26), 3000, 0))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
						{
							Var14.f_2 = -25272461;
						}
						else
						{
							Var14.f_2 = -1451024071;
						}
						func_5(Var14, func_6(1));
						return true;
					}
				}
			}
		}
	}
	return false;
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

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = UNK_0xD803B885F5E47A62();
	if (!bParam14 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Param0, 14, bParam14);
	}
}

bool func_6(bool bParam0)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar1)))
		{
			bVar2 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar1));
			if (func_221(bVar2, 0, 0))
			{
				if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar2);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_7(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_8(UNK_0xB177666FAB6F4417(iParam0));
	}
	return false;
}

bool func_8(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
		else if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_9()
{
	switch (Local_73.f_23)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	int iVar14;

	if (UNK_0x437347B10A200C4B(UNK_0xB177666FAB6F4417(Local_73.f_2), 0))
	{
		if (Local_73 != 4)
		{
			bLocal_199 = false;
			while (bLocal_199 < UNK_0x54EABC0DD106045B())
			{
				if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bLocal_199)))
				{
					iVar14 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bLocal_199));
					if (UNK_0xEAE0D21A50E6C7F4(vLocal_101[bLocal_199 /*3*/].f_1, false))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
						{
							Var0.f_2 = 1393757853;
						}
						else
						{
							Var0.f_2 = -1380476051;
						}
						Var0.f_10 = iVar14;
						func_5(Var0, func_6(1));
						Local_73 = 4;
						return;
					}
					if (UNK_0xEAE0D21A50E6C7F4(vLocal_101[bLocal_199 /*3*/].f_1, true))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, 2))
						{
							UNK_0x5D96D8530B3D0904(&(Local_73.f_1), 2);
						}
					}
				}
				bLocal_199++;
			}
		}
	}
}

bool func_11()
{
	if (func_19(Local_73.f_4) && func_19(Local_73.f_5))
	{
		if (func_14() && func_12())
		{
			UNK_0x71199B01895C6202(Local_73.f_4);
			UNK_0x71199B01895C6202(Local_73.f_5);
			return true;
		}
	}
	return false;
}

int func_12()
{
	if ((!UNK_0xE9F78D191AD5EDBA(Local_73.f_3) && func_19(Local_73.f_5)) && UNK_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		if (func_7(Local_73.f_2))
		{
			if (func_13(&(Local_73.f_3), Local_73.f_2, 22, Local_73.f_5, -1, 1, 1, 1))
			{
				UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_73.f_3), true);
				UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_73.f_3), Global_1575002);
				UNK_0xC743BD39A24D0583(UNK_0x1B50683925F00106(Local_73.f_3), 0);
				UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_73.f_3), true);
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(Local_73.f_3))
	{
		return 0;
	}
	return 1;
}

bool func_13(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!UNK_0xA3FA8B6D2780D661(1))
	{
		return false;
	}
	if (!UNK_0xE9F78D191AD5EDBA(iParam1))
	{
		return false;
	}
	if (!UNK_0xDF1306B443CD3D15(UNK_0xB177666FAB6F4417(iParam1), 0))
	{
		return false;
	}
	*uParam0 = UNK_0xE8C9CB886096272A(UNK_0x852A19533F896693(UNK_0xB177666FAB6F4417(iParam1), iParam2, bParam3, bParam4, iParam6, bParam5));
	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		UNK_0x120A395B0ECB8EA5(UNK_0x1B50683925F00106(*uParam0), bParam7);
		if (UNK_0xECE0BE5313FD8BDA(UNK_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				UNK_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

int func_14()
{
	bool bVar0;

	if (!UNK_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		if (func_19(Local_73.f_4))
		{
			if (func_15(&(Local_73.f_2), Local_73.f_4, Local_73.f_6, func_18(Local_73.f_6, Local_73.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				UNK_0x71EDC33E5A423750(UNK_0xB177666FAB6F4417(Local_73.f_2), 2);
				UNK_0x1E9649458B15960F(UNK_0xB177666FAB6F4417(Local_73.f_2), false);
				UNK_0xEF190091B5B9F5EB(UNK_0xB177666FAB6F4417(Local_73.f_2), 1);
				UNK_0xAC0C6241732E36F6(UNK_0xB177666FAB6F4417(Local_73.f_2));
				UNK_0x1AEF7184B203A58D(UNK_0xB177666FAB6F4417(Local_73.f_2), 30f);
				UNK_0x873BCADC75FF6D20(UNK_0xB177666FAB6F4417(Local_73.f_2));
				UNK_0x56FDC9ADE35F7DB0(UNK_0xB177666FAB6F4417(Local_73.f_2), true, true, 0);
				UNK_0xB422445CBCD0AEFB(UNK_0xB177666FAB6F4417(Local_73.f_2), 0);
				UNK_0x120A395B0ECB8EA5(UNK_0xB177666FAB6F4417(Local_73.f_2), false);
				if (Local_73.f_4 == joaat("CUBAN800"))
				{
					UNK_0xB58CA658A628ED02(UNK_0xB177666FAB6F4417(Local_73.f_2), 3);
				}
				if (UNK_0xF1D385D359D58F72("MPBitset", 3))
				{
					if (UNK_0x30F813723591D02E(UNK_0xB177666FAB6F4417(Local_73.f_2), "MPBitset"))
					{
						bVar0 = UNK_0x1E2DFB0EF4BB4566(UNK_0xB177666FAB6F4417(Local_73.f_2), "MPBitset");
					}
					UNK_0x5D96D8530B3D0904(&bVar0, 10);
					UNK_0xB7E567188872123E(UNK_0xB177666FAB6F4417(Local_73.f_2), "MPBitset", bVar0);
				}
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		return 0;
	}
	return 1;
}

bool func_15(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0x468C1AC3ABF95C57(bParam1))
	{
		return false;
	}
	if (!UNK_0xE75B31D140F2F10B(1))
	{
		return false;
	}
	bVar0 = 1.5f;
	if (bParam1 == joaat("BOMBUSHKA"))
	{
		bVar0 = 20f;
	}
	if (bParam11)
	{
		UNK_0x28F5E4DA506AC0CA(vParam2, bVar0, 0, 0, 0, 0, false, 0);
	}
	bVar1 = UNK_0x122AAB0B1D6F55AD(bParam1, vParam2, bParam5, bParam7, bParam6, bParam14);
	if (UNK_0xC844350D5D58C99A(bVar1))
	{
		*uParam0 = UNK_0xFBA927257CA38E95(bVar1);
		Global_2537071.f_6516 = bVar1;
		if (UNK_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam15)
			{
				UNK_0x271603AF9C0C7EB3(bVar1, 1);
			}
			UNK_0x120A395B0ECB8EA5(bVar1, bParam10);
			if (UNK_0xECE0BE5313FD8BDA(bVar1))
			{
				if (bParam8)
				{
					UNK_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					UNK_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam13)
				{
					UNK_0x7F379C0A8EB2F4D0(*uParam0, UNK_0xD803B885F5E47A62(), 1);
				}
			}
			UNK_0x750A9DEB80D6992C(bVar1, bParam9);
			UNK_0x8E44A2B22BBBAFE4(bVar1, 1);
			if (bParam12)
			{
				UNK_0x4CC3459AE123CD76(bVar1);
				UNK_0xF50D17A63556B8D4(bVar1, 5, 5, 1f);
			}
			func_16(vParam2, bParam5, bParam1, bVar1);
			return true;
		}
	}
	return false;
}

void func_16(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (func_17(UNK_0xD803B885F5E47A62(), vParam0, bParam4) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == bParam5 && Global_2405072.f_2912[1 /*6*/].f_4 == bParam4) && SYSTEM::VDIST(Global_2405072.f_2912[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { vParam0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = bParam3;
		Global_2405072.f_2912[1 /*6*/].f_4 = bParam4;
		Global_2405072.f_2912[1 /*6*/].f_5 = bParam5;
	}
}

int func_17(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == bParam4)
			{
				vVar2 = { vParam1 };
				if (UNK_0x755FF954DAE327E1((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.f_2 = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_18(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

bool func_19(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

bool func_20(var uParam0)
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

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_22()
{
	switch (vLocal_101[UNK_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0:
			func_180();
			func_23();
			if (Local_73.f_23 > 0)
			{
				vLocal_101[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			func_204();
			break;
	}
}

void func_23()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar9;

	if (UNK_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(vLocal_101[UNK_0x57270EE11514DC67() /*3*/].f_1, false))
		{
			if (!UNK_0xDF1306B443CD3D15(UNK_0xB177666FAB6F4417(Local_73.f_2), 0))
			{
			}
			if (UNK_0x437347B10A200C4B(UNK_0xB177666FAB6F4417(Local_73.f_2), 0))
			{
			}
			if (UNK_0x437347B10A200C4B(UNK_0xB177666FAB6F4417(Local_73.f_2), 0))
			{
				if (UNK_0xD803B885F5E47A62() == UNK_0x39DDAA68EF6A6BF4(Local_73.f_2, &uVar0))
				{
					func_179(2061, -1);
					iVar1 = func_178(2061, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_8099)
					{
						iVar2 = Global_262145.f_8099;
					}
					iVar3 = (Global_262145.f_8097 * iVar2);
					func_124(0, UNK_0x16F2683693E537C9(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0, 0);
					if (iVar1 > Global_262145.f_8098)
					{
						iVar1 = Global_262145.f_8098;
					}
					bVar4 = (Global_262145.f_8096 * iVar1);
					func_120(bVar4, 1, 1, 1092616192 /* Float: 10f */);
					Global_2462880 = bVar4;
					func_61(&bVar4, 1);
					if (bVar4 > 0)
					{
						if (func_60())
						{
							func_48(1780666425, bVar4, &uVar9, 0, 0, 0);
						}
						else
						{
							UNK_0x9AC21D04D5646532(bVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_43(65, 1, -1);
					if (func_42())
					{
						func_29(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_29(2, "PTD_PASS1", 0, 0, -99);
					}
					UNK_0x5D96D8530B3D0904(&(vLocal_101[UNK_0x57270EE11514DC67() /*3*/].f_1), false);
				}
			}
			else
			{
				if (UNK_0xBFF81ED3B99522C7())
				{
					if (Local_73.f_22 < 4)
					{
						if (UNK_0x5A91F08DF773C39D(UNK_0xB177666FAB6F4417(Local_73.f_2), Local_73.f_9[Local_73.f_22 /*3*/], 50f, 50f, 500f, false, true, 0))
						{
							Local_73.f_22++;
						}
					}
				}
				if (UNK_0x526BC32A660C89E6(Local_73.f_2))
				{
					func_27();
					if (func_26())
					{
						if (func_25(Local_73.f_2) && func_25(Local_73.f_3))
						{
							UNK_0xCCB891029A74A633(UNK_0xB177666FAB6F4417(Local_73.f_2), 1, 1, -1);
							if (UNK_0xE5DBF9B6126856CA(Local_73.f_2))
							{
								func_24(&(Local_73.f_2));
							}
							if (UNK_0xE5DBF9B6126856CA(Local_73.f_3))
							{
								UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_73.f_3), true);
								func_24(&(Local_73.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_24(var uParam0)
{
	bool bVar0;

	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x82692E8F6A0D7A22(&bVar0);
	}
}

bool func_25(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		UNK_0x8D30F6387EE75385(iParam0);
		return UNK_0x526BC32A660C89E6(iParam0);
	}
	return false;
}

bool func_26()
{
	if (UNK_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		if (UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_73.f_2), 0, 7000))
		{
			return true;
		}
		if (UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_73.f_2), 1, 40000))
		{
			return true;
		}
		if (UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_73.f_2), 3, 30000))
		{
			return true;
		}
		if (UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_73.f_2), 2, 30000))
		{
			return true;
		}
	}
	return false;
}

void func_27()
{
	vector3 vVar0;

	if (func_7(Local_73.f_2) && !func_28(Local_73.f_3))
	{
		if (UNK_0xC42A92762C58E1B9(UNK_0x1B50683925F00106(Local_73.f_3), UNK_0xB177666FAB6F4417(Local_73.f_2), 0))
		{
			if (Local_73.f_22 < 4)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
				{
					UNK_0x0C4243AF9A434F34(UNK_0x1B50683925F00106(Local_73.f_3), UNK_0xB177666FAB6F4417(Local_73.f_2), false, false, Local_73.f_9[Local_73.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, 1);
				}
				else
				{
					UNK_0x9AFA0796FDCABCD5(UNK_0x1B50683925F00106(Local_73.f_3), UNK_0xB177666FAB6F4417(Local_73.f_2), false, false, Local_73.f_9[Local_73.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1f, 0);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, 2) && !UNK_0xEAE0D21A50E6C7F4(vLocal_101[UNK_0x57270EE11514DC67() /*3*/].f_1, true))
			{
				vVar0 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0xB177666FAB6F4417(Local_73.f_2), 0f, 12000f, 0f) };
				if (vVar0.x < -3700f)
				{
					vVar0.x = -3700f;
				}
				else if (vVar0.x > 4500f)
				{
					vVar0.x = 4500f;
				}
				if (vVar0.y < -3900f)
				{
					vVar0.f_1 = -3900f;
				}
				else if (vVar0.y > 8000f)
				{
					vVar0.f_1 = 8000f;
				}
				vVar0.f_2 = 100f;
				if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
				{
					UNK_0x0C4243AF9A434F34(UNK_0x1B50683925F00106(Local_73.f_3), UNK_0xB177666FAB6F4417(Local_73.f_2), false, false, vVar0, 4, 20f, -1f, -1f, 100, 100, 1);
				}
				else
				{
					UNK_0x9AFA0796FDCABCD5(UNK_0x1B50683925F00106(Local_73.f_3), UNK_0xB177666FAB6F4417(Local_73.f_2), false, false, vVar0, 4, 20f, -1f, -1f, 100, 100, -1f, 0);
				}
				UNK_0x5D96D8530B3D0904(&(vLocal_101[UNK_0x57270EE11514DC67() /*3*/].f_1), true);
			}
		}
	}
}

bool func_28(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(iParam0));
	}
	return true;
}

void func_29(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	func_30(1, iParam0, bParam1, bParam2, bParam3, iParam4);
}

void func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam1;
	bVar1 = false;
	func_31(iParam0, bParam2, iVar0, bVar1, bParam3, bParam4, iParam5);
}

void func_31(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return;
	}
	if (UNK_0x7724E025FD444F45(bParam1) > 15)
	{
		return;
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		if (UNK_0x7724E025FD444F45(bParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_40();
	if (iVar0 == -1)
	{
		return;
	}
	func_39(iVar0);
	func_38(iVar0, iParam0);
	func_37(iVar0, iParam2, bParam3);
	func_36(iVar0, bParam1);
	if (UNK_0xEA6BC48857E0AC4C(bParam4) && iParam6 == -99)
	{
		return;
	}
	func_35(iVar0);
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_33(iVar0, bParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_32(iVar0, iParam6);
	}
}

void func_32(int iParam0, int iParam1)
{
	Global_1370527.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_33(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1370527.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_34(iParam0);
}

void func_34(int iParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0 /*16*/]), 5);
}

void func_35(int iParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0 /*16*/]), 4);
}

void func_36(int iParam0, char* sParam1)
{
	struct<4> Var0;

	StringCopy(&Var0, sParam1, 16);
	Global_1370527.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_37(int iParam0, int iParam1, bool bParam2)
{
	Global_1370527.f_59[iParam0 /*16*/].f_2 = iParam1;
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0 /*16*/]), 2);
		UNK_0x0674E58A79778E99(&(Global_1370527.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0 /*16*/]), 3);
		UNK_0x0674E58A79778E99(&(Global_1370527.f_59[iParam0 /*16*/]), 2);
	}
}

void func_38(int iParam0, int iParam1)
{
	Global_1370527.f_59[iParam0 /*16*/].f_1 = iParam1;
}

void func_39(int iParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1370527.f_59[iParam0 /*16*/]), false);
}

int func_40()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_41(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1370527.f_59[iParam0 /*16*/], false);
}

bool func_42()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_45(iParam0, func_46(iParam2));
	bVar0 = (bVar0 + iParam1);
	func_44(iParam0, bVar0, iParam2);
}

void func_44(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = Global_2585280[iParam0 /*3*/][func_46(iParam2)];
	UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2585280[iParam0 /*3*/][func_46(iParam1)];
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1312745;
}

void func_48(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_60())
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
				func_49(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_49(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
				func_49(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_49(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_47()) || UNK_0xDD2EE1F5DA6A6AB0())
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
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || UNK_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_56(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
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
			func_55(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_50(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_50(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_51(iParam0);
	}
}

void func_51(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_54(iParam0))
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
		func_52(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_52(var uParam0)
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
	func_53(&(uParam0->f_14));
	func_53(&(uParam0->f_14.f_13));
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

void func_53(var uParam0)
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

bool func_54(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_55(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_60())
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
				func_57(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_57(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	bVar36 = func_59(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_58();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_58()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_59(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_60()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

void func_61(bool bParam0, int iParam1)
{
	bool bVar0;

	if (*bParam0 > 0)
	{
		if (!func_119())
		{
			if (func_118(0))
			{
				if (!func_114(0))
				{
					if (UNK_0x40B8C182D63932FC(func_113()))
					{
						if (func_112() == 100)
						{
							bVar0 = *bParam0;
							*bParam0 = 0;
						}
						else
						{
							bVar0 = ((*bParam0 / 100) * func_112());
							*bParam0 = (*bParam0 - bVar0);
						}
						func_110(&bVar0, 0);
						if (iParam1 == 1)
						{
							func_66("GB_BCUT_TICK1", func_113(), bVar0, 0, 0, 1);
						}
						func_65(20);
						func_62(func_113(), bVar0, 1);
					}
				}
			}
		}
	}
}

void func_62(bool bParam0, bool bParam1, int iParam2)
{
	struct<8> Var0;

	if (func_221(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = UNK_0xD803B885F5E47A62();
		Var0.f_2 = bParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_64(bParam0);
		func_63(&(Var0.f_6), &(Var0.f_7));
		UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_59(bParam0));
	}
}

void func_63(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_64(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

void func_65(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

int func_66(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
		UNK_0x3A820E495A7BA3E5(func_75(bParam1, -2, 1, 0, 0));
		UNK_0xD06AC7C87A34A6AD(func_73(&cVar1));
		if (!bParam3 == 0)
		{
			UNK_0x3A820E495A7BA3E5(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam2);
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		func_67(27, bParam0, 1, &cVar1, bParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_67(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_72() || !UNK_0xA14BB9332558B949()) || !func_70(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_68(iParam2);
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

int func_68(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_69(iVar0);
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

void func_69(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_70(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_71(-1, 0) == 8;
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

int func_71(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

bool func_72()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

var func_73(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_74(&cVar0);
}

char[] func_74(char[4] cParam0)
{
	return cParam0;
}

int func_75(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (func_108(bParam0) && !bParam4)
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
	if (((func_108(UNK_0xD803B885F5E47A62()) || (func_107() && func_106())) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		bVar1 = func_105();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bVar1))
			{
				if (UNK_0x83FACCC48B68F9D1(bVar1) != -1)
				{
					if (func_221(UNK_0x83FACCC48B68F9D1(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_103(iParam1, bParam0, 0);
							}
							else
							{
								return func_88(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_88(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_103(iParam1, bParam0, 0);
				}
				else
				{
					return func_76(0, -1, 0);
				}
			}
			else
			{
				return func_76(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_103(iParam1, bParam0, 0);
		}
		else
		{
			return func_88(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_88(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_76(bool bParam0, int iParam1, bool bParam2)
{
	return func_77(UNK_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_77(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!UNK_0x40B8C182D63932FC(bParam0))
	{
		return 3;
	}
	iVar0 = UNK_0x08067D4957B73C02(bParam0);
	if ((func_87() || (func_86() && func_84())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_83(iParam2, iVar0);
		}
		else
		{
			return func_83(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_82(iVar0, iParam2, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_81(1);
				}
				else
				{
					return func_81(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_78(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_78(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_81(1);
	}
	return func_81(0);
}

int func_78(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_80(iParam0, iParam1, iParam3);
	if (func_79(Global_4456448.f_194990, 1))
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

bool func_79(int iParam0, bool bParam1)
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

int func_80(int iParam0, int iParam1, int iParam2)
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
			if (!func_82(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_81(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

bool func_82(int iParam0, int iParam1, int iParam2)
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

int func_83(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_80(iParam1, iParam0, 4);
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

bool func_84()
{
	if (func_85())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_85()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_86()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_87()
{
	if (func_85() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

int func_88(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_98())
			{
				iVar3 = func_93(bParam0);
				if (!iVar3 == -1)
				{
					return func_91(iVar3);
				}
			}
			if ((func_90(bParam1, bParam0, iVar0, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_82(UNK_0x08067D4957B73C02(bParam1), UNK_0x08067D4957B73C02(bParam0), 0) && UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_81(1);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_89(1);
			}
			else
			{
				return func_77(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_81(1);
			}
			else
			{
				return func_77(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_93(bParam0);
	if (!iVar4 == -1)
	{
		return func_91(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_89(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_90(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

int func_91(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_92(iParam0);
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

int func_92(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_93(bool bParam0)
{
	if (!bParam0 == func_97())
	{
		if (func_95(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_94(bParam0)];
		}
	}
	return -1;
}

bool func_94(bool bParam0)
{
	if (bParam0 != func_97())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_97();
}

bool func_95(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_96(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_97();
}

bool func_96(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_97())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_97()
{
	return -1;
}

bool func_98()
{
	if (((func_102() || func_101()) || func_100()) || func_99())
	{
		return true;
	}
	return false;
}

var func_99()
{
	return Global_2450632.f_19;
}

var func_100()
{
	return Global_2450632.f_17;
}

var func_101()
{
	return Global_2450632.f_16;
}

var func_102()
{
	return Global_2450632.f_15;
}

int func_103(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_98())
	{
		iVar2 = func_93(bParam1);
		if (!iVar2 == -1)
		{
			return func_91(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_97())
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
			iVar0 = func_77(bParam1, !bParam2, iParam0, 0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_104(iParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_82(iParam0, UNK_0x08067D4957B73C02(bParam1), 0))
		{
			iVar0 = func_89(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_104(int iParam0)
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

bool func_105()
{
	return Global_2359302.f_2;
}

bool func_106()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_107()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_108(bool bParam0)
{
	if (func_70(bParam0, 0))
	{
		return true;
	}
	if (func_109())
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

bool func_109()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

void func_110(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_111(1);
	}
	else
	{
		iVar1 = func_111(0);
	}
	iVar0 = ((*bParam0 / 100) * iVar1);
	*bParam0 = (*bParam0 - iVar0);
}

int func_111(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_112()
{
	return Global_262145.f_12389;
}

bool func_113()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

int func_114(bool bParam0)
{
	return func_115(UNK_0xD803B885F5E47A62(), bParam0);
}

int func_115(int iParam0, bool bParam1)
{
	return func_116(iParam0, bParam1, 1);
}

int func_116(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == func_97())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_117(iParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (bVar0 != func_97() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_117(int iParam0, int iParam1)
{
	if (iParam0 != func_97())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_97())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_118(bool bParam0)
{
	return func_95(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_119()
{
	return func_96(UNK_0xD803B885F5E47A62());
}

void func_120(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	func_121(bParam0, iParam1, iParam2, fParam3);
}

void func_121(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	func_122(bParam0, iParam1, iParam2, fParam3);
}

void func_122(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (bParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_4 = iVar1;
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_3 = (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_123(iVar1, 0);
	}
}

void func_123(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

bool func_124(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_125(iParam0, bParam1, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

bool func_125(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_135(iParam0, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xEC560E589DF8370E(bParam1))
			{
				bVar1 = UNK_0x940C1429253D3B1B(bParam1);
				func_131(UNK_0x64430C979F516F7A(bVar1, 31086, 0f, 0f, 0f), bVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_126(bParam1, bVar0, iParam8, iParam10);
	}
	return bVar0;
}

void func_126(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_129(bParam0, 1) };
	if (bParam0 == func_128(UNK_0x16F2683693E537C9()))
	{
		func_127(1);
	}
	func_131(vVar0, bParam1, 0, bParam2, iParam3);
}

void func_127(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_128(int iParam0)
{
	return iParam0;
}

Vector3 func_129(bool bParam0, bool bParam1)
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
	if (bParam0 == func_130(UNK_0x16F2683693E537C9()) && UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
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

bool func_130(int iParam0)
{
	return iParam0;
}

void func_131(vector3 vParam0, bool bParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_134(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = UNK_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = bParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_133();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_132();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), iParam6);
		}
	}
}

int func_132()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_133()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_134(vector3 vParam0, var uParam3, var uParam4)
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

bool func_135(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;

	bVar0 = func_136(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, bParam2, iParam3, bParam7);
	return bVar0;
}

bool func_136(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_177(UNK_0xD803B885F5E47A62()) || func_176(UNK_0xD803B885F5E47A62()))
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
	else if (func_174() || func_170(UNK_0xD803B885F5E47A62()))
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
	if (func_169(bParam2))
	{
	}
	if (func_168())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_166(bVar1);
		fVar3 = (SYSTEM::TO_FLOAT(bVar1) * Global_262145.f_1);
		bVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			bVar1 = func_165(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_162(0, &bVar1);
					break;
				case 3:
					func_162(1, &bVar1);
					break;
				case 1:
					func_159(&bVar1);
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
			func_157(1164, bVar1, -1);
			if (iParam1 == 0)
			{
				func_147((func_156(UNK_0xD803B885F5E47A62()) + bVar1), iParam9, 0);
				if (bParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				UNK_0x189A6F4108CDFDD6(bVar1, bParam8, iParam9);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_157(1165, bVar1, -1);
				}
				func_141(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_137((func_139(UNK_0xD803B885F5E47A62()) + bVar1));
			}
			else
			{
				func_137((func_139(UNK_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_137(bool bParam0)
{
	if (func_168())
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_5 = bParam0;
		func_138(joaat("MPPLY_GLOBALXP"), bParam0);
	}
}

void func_138(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

int func_139(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_221(bParam0, 0, 1))
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return func_140(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_140(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_140(int iParam0)
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

void func_141(bool bParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_146(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_144(func_145(&Var0));
			if (iVar13 == 0)
			{
				func_143(&Global_1387915, bParam0);
				func_142(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_143(&Global_1387916, bParam0);
				func_142(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_143(&Global_1387917, bParam0);
				func_142(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_143(&Global_1387918, bParam0);
				func_142(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_143(&Global_1387919, bParam0);
				func_142(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_142(int iParam0, bool bParam1)
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

void func_143(var uParam0, bool bParam1)
{
	*uParam0 = (*uParam0 + bParam1);
}

int func_144(int iParam0)
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

int func_145(var uParam0)
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

struct<13> func_146(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

void func_147(bool bParam0, int iParam1, int iParam2)
{
	if (func_168())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1388060[func_46(-1)])
				{
					UNK_0x189A6F4108CDFDD6(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1388060[func_46(-1)])
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
		if (func_155(UNK_0xD803B885F5E47A62()))
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_1 = bParam0;
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_153(bParam0, 1);
		}
		func_152(639, bParam0, -1, 1);
		func_151(640, func_153(bParam0, 1), -1, 1, 0);
		Global_1388060[func_46(-1)] = bParam0;
		func_148(-1109644434, 7, 0);
	}
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_150(iParam1, bParam2))
	{
		iVar0 = func_149();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_149()
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

bool func_150(int iParam0, bool bParam1)
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

void func_151(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

void func_152(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_46(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_46(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_46(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_46(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_46(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_46(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_46(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_46(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_46(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_46(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_46(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_46(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_46(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_46(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_46(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_46(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_46(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_46(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_46(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_46(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_46(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_46(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_46(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_46(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_46(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_46(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_46(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_46(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_46(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_46(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_46(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_46(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_46(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_46(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_46(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_46(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_46(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_46(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_46(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_46(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_46(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_46(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_46(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_46(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_46(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_46(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_46(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_46(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_46(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_46(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_46(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_46(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_46(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

int func_153(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_154(bParam0, 0);
}

int func_154(bool bParam0, int iParam1)
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

bool func_155(bool bParam0)
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

int func_156(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_46(-1)];
			}
			else if (func_155(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_46(-1)];
	}
	return 0;
}

void func_157(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_178(iParam0, func_46(iParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_158(iParam0))
	{
		func_151(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_152(iParam0, bVar0, iParam2, 1);
	}
}

bool func_158(int iParam0)
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

void func_159(bool bParam0)
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
				if (UNK_0x08067D4957B73C02(bVar5) == iVar1 || func_82(UNK_0x08067D4957B73C02(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != UNK_0xD803B885F5E47A62())
					{
						if (func_161(UNK_0xD803B885F5E47A62(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_160(*bParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_160(*bParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_160(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

bool func_161(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_146(bParam0) };
		Global_2513231 = { func_146(bParam1) };
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

void func_162(bool bParam0, bool bParam1)
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
				if (func_221(bVar4, 0, 1))
				{
					if (bVar4 != UNK_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_161(UNK_0xD803B885F5E47A62(), bVar4))
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
			if (func_221(bVar4, 1, 1))
			{
				if (bVar4 != UNK_0xD803B885F5E47A62())
				{
					if (func_163(UNK_0xD803B885F5E47A62(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_161(UNK_0xD803B885F5E47A62(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_160(*bParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_160(*bParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_163(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_164(bParam0), func_164(bParam1));
	return 0f;
}

Vector3 func_164(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_165(bool bParam0)
{
	int iVar0;

	if (UNK_0xA0501A3E65437842() != 3)
	{
		return *bParam0;
	}
	iVar0 = SYSTEM::ROUND((func_160(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

bool func_166(bool bParam0)
{
	if (bParam0 < 0)
	{
		if (UNK_0x51D1D19912234EA0(bParam0) > func_156(UNK_0xD803B885F5E47A62()))
		{
			bParam0 = -func_156(UNK_0xD803B885F5E47A62());
		}
	}
	if (func_167(8000, 0, 0) > 0)
	{
		if (func_167(8000, 0, 0) < (bParam0 + func_156(UNK_0xD803B885F5E47A62())))
		{
			bParam0 = (func_167(8000, 0, 0) - func_156(UNK_0xD803B885F5E47A62()));
		}
	}
	return bParam0;
}

int func_167(int iParam0, bool bParam1, int iParam2)
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

bool func_168()
{
	return true;
}

bool func_169(bool bParam0)
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

int func_170(int iParam0)
{
	return func_171(func_172(iParam0));
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (func_173(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_173(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_174()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_100();
	}
	return func_175(Global_4456448.f_194990);
}

int func_175(int iParam0)
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

bool func_176(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_177(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_46(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_179(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_178(iParam0, func_46(iParam1), 0);
	bVar0++;
	if (!func_158(iParam0))
	{
		func_151(iParam0, bVar0, iParam1, 1, 0);
	}
	else
	{
		func_152(iParam0, bVar0, iParam1, 1);
	}
}

void func_180()
{
	if (UNK_0xE9F78D191AD5EDBA(Local_73.f_2) && !UNK_0x437347B10A200C4B(UNK_0xB177666FAB6F4417(Local_73.f_2), 0))
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_200))
		{
			iLocal_200 = UNK_0x5C3B41825F6AC5A0(UNK_0xB177666FAB6F4417(Local_73.f_2));
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
			{
				UNK_0xBC8E0A7390523199(iLocal_200, 307);
				UNK_0xDC5B2F9D0CCE3A10(iLocal_200, "PTD_BLIPN");
			}
			else
			{
				UNK_0xBC8E0A7390523199(iLocal_200, 64);
				UNK_0xDC5B2F9D0CCE3A10(iLocal_200, "PTD_BLIPH");
			}
			UNK_0x61755AC17D8F538E(iLocal_200, true);
			UNK_0x0EC848EFF66DF45A(iLocal_200, 7000);
			UNK_0x2A065371C9D96655(iLocal_200, 6);
			if (func_183())
			{
				UNK_0x9D7CDDB4B55142AF(iLocal_200, 0);
			}
		}
		else
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
			{
				UNK_0x436F3596830D7DC3(iLocal_200, SYSTEM::ROUND(UNK_0xD9522BA9E27E1349(UNK_0xB177666FAB6F4417(Local_73.f_2))));
			}
			if (func_183() || func_181())
			{
				UNK_0x9D7CDDB4B55142AF(iLocal_200, 0);
			}
			else
			{
				UNK_0x9D7CDDB4B55142AF(iLocal_200, 4);
			}
		}
	}
}

bool func_181()
{
	return Global_2416079.f_1812;
}

void func_182(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_183()
{
	if (func_184(19))
	{
		return true;
	}
	if (func_184(0))
	{
		return true;
	}
	return false;
}

bool func_184(bool bParam0)
{
	bool bVar0;

	bVar0 = func_178(2480, -1, 0);
	return UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0);
}

bool func_185(int iParam0)
{
	return UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(Global_2413895, UNK_0x2B6E0A53779D29EA())) > iParam0;
}

int func_186()
{
	return Local_73;
}

int func_187(int iParam0)
{
	return vLocal_101[iParam0 /*3*/];
}

bool func_188(int iParam0)
{
	return !func_189(iParam0);
}

bool func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (Global_262145.f_6660)
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 5:
			if (Global_262145.f_6661)
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 6:
			if (Global_262145.f_6662)
			{
				return false;
			}
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			if (Global_262145.f_6663)
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 15:
			if (func_190(4))
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 17:
			if (func_190(4))
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 16:
			if (func_190(4))
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_190(4))
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 19:
			if (func_190(4))
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			break;
		case 20:
			if (func_190(4))
			{
				return false;
			}
			if (func_191(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
	return true;
}

bool func_190(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_221(UNK_0x117658E336116132(bVar0), 0, 1))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[bVar0 /*421*/].f_208, bParam0))
			{
				return true;
			}
		}
		bVar0++;
	}
	return false;
}

bool func_191(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, bParam1);
}

bool func_192()
{
	var uVar0;

	func_200(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_199())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_198())
	{
		return true;
	}
	if (func_197(159))
	{
		if (!func_196())
		{
			return true;
		}
	}
	if (func_197(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_193() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_193()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_193()
{
	switch (func_195())
	{
		case 0:
			return func_194();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_194()
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

int func_195()
{
	return Global_30768;
}

bool func_196()
{
	return Global_2450632.f_598;
}

bool func_197(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_198()
{
	return Global_2460680;
}

bool func_199()
{
	return Global_2450632.f_593;
}

void func_200(var uParam0)
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
					func_201(iVar0);
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

void func_201(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_221(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_202(bVar4, &bVar5))
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

bool func_202(bool bParam0, bool bParam1)
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

void func_203()
{
	SYSTEM::WAIT(0);
}

void func_204()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_200))
	{
		UNK_0x142CC44DB769B57E(&iLocal_200);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, true))
	{
		func_29(2, "PTD_FAIL", 0, 0, -99);
	}
	func_207();
	if (func_186() == 4 && Local_73.f_4 != 0)
	{
		UNK_0xAB8E2DDC7AF955E0(Local_73.f_4, false);
	}
	func_206(15, 0);
	func_205();
}

void func_205()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_206(bool bParam0, bool bParam1)
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

void func_207()
{
	UNK_0xF82EA857DA10E0CD(&uLocal_198);
}

void func_208(struct<21> Param0)
{
	int iVar0;

	func_219(func_220(Param0), Param0);
	UNK_0x0BEC04ECA8485A3A(1);
	UNK_0x28E5F00F131890E3(1);
	func_217(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_73, 28);
	UNK_0x35B62793EAE9ADDF(&vLocal_101, 97);
	if (!func_216())
	{
		func_204();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x256D93AFAE851A7A(0);
		if (UNK_0xBFF81ED3B99522C7())
		{
			iVar0 = UNK_0x09AC81E49EA267F7(false, 6);
			switch (iVar0)
			{
				case 0:
					Local_73.f_4 = joaat("CUBAN800");
					Local_73.f_5 = joaat("A_M_M_SKIDROW_01");
					break;
				case 1:
					Local_73.f_4 = joaat("STUNT");
					Local_73.f_5 = joaat("A_M_Y_EASTSA_02");
					break;
				case 2:
					Local_73.f_4 = joaat("DUSTER");
					Local_73.f_5 = joaat("A_M_M_PROLHOST_01");
					break;
				case 3:
					Local_73.f_4 = joaat("MAMMATUS");
					Local_73.f_5 = joaat("A_M_Y_VINEWOOD_02");
					break;
				case 4:
					Local_73.f_4 = joaat("MAVERICK");
					Local_73.f_5 = joaat("A_M_M_EASTSA_02");
					UNK_0x5D96D8530B3D0904(&(Local_73.f_1), false);
					break;
				case 5:
					Local_73.f_4 = joaat("SWIFT");
					Local_73.f_5 = joaat("A_M_Y_BUSICAS_01");
					UNK_0x5D96D8530B3D0904(&(Local_73.f_1), false);
					break;
			}
			if (Local_73.f_4 != 0)
			{
				UNK_0xAB8E2DDC7AF955E0(Local_73.f_4, true);
			}
			func_215();
			func_209();
		}
		func_206(15, 1);
		vLocal_101[UNK_0x57270EE11514DC67() /*3*/] = 0;
	}
	else
	{
		func_204();
	}
}

void func_209()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = UNK_0x09AC81E49EA267F7(false, 3);
		Local_73.f_9[iVar0 /*3*/] = { func_211(iVar1) };
		if (iVar0 > 0)
		{
			if (func_210(Local_73.f_9[iVar0 /*3*/], Local_73.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_73.f_9[iVar0 /*3*/] = { func_211(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

bool func_210(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_211(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_214();
		case 1:
			return func_213();
		case 2:
			return func_212();
		default:
			break;
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_212()
{
	switch (UNK_0x09AC81E49EA267F7(false, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		default:
			break;
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_213()
{
	switch (UNK_0x09AC81E49EA267F7(false, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		default:
			break;
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_214()
{
	switch (UNK_0x09AC81E49EA267F7(false, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		case 6:
			return 3800f, 4462f, 5f;
		case 7:
			return 3350f, 5152f, 20f;
		case 8:
			return 2200f, 5600f, 54f;
		case 9:
			return 1410f, 6560f, 20f;
		case 10:
			return -330f, 6100f, 32f;
		case 11:
			return -1365f, 4380f, 42f;
		case 12:
			return 700f, 3900f, 30f;
		default:
			break;
	}
	return 700f, 3900f, 30f;
}

void func_215()
{
	Local_73.f_6 = { func_211(UNK_0x09AC81E49EA267F7(false, 3)) };
	Local_73.f_6 = { Local_73.f_6 + Vector(120f, 0f, 0f) };
}

bool func_216()
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
		if (func_199())
		{
			return false;
		}
		if (func_197(157))
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

int func_217(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_205();
			}
			else
			{
				return 0;
			}
		}
		if (!func_218())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_205();
					}
					else
					{
						return 0;
					}
				}
				if (func_199())
				{
					if (!bParam2)
					{
						func_205();
					}
					else
					{
						return 0;
					}
				}
				if (func_197(157))
				{
					if (!bParam2)
					{
						func_205();
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
					func_205();
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
				func_205();
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
			func_205();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_218()
{
	return Global_1312854;
}

void func_219(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_205();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_220(int iParam0)
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

bool func_221(bool bParam0, bool bParam1, bool bParam2)
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

