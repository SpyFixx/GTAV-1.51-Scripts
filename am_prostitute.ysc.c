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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	int iLocal_57 = 0;
	vector3 vLocal_58[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
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
	if (UNK_0x8CD06866876216F2())
	{
		func_51(ScriptParam_0);
	}
	else
	{
		func_46();
	}
	iLocal_53 = UNK_0x1C0640BA9A7327B3();
	while (true)
	{
		func_45();
		if (((func_34() || UNK_0x09BE1E6DF7B80B43()) || (func_33(UNK_0xD803B885F5E47A62()) || func_32(UNK_0xD803B885F5E47A62()))) || func_29(UNK_0xD803B885F5E47A62()))
		{
			func_46();
		}
		if (UNK_0x8CD06866876216F2())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= UNK_0x54EABC0DD106045B())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_46();
		}
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	iVar1 = UNK_0x6E61BE9E61434AC1();
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		if ((iLocal_54 % bVar0) == 0)
		{
			if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar0)))
			{
				bVar2 = UNK_0x9539D44F3E4492F6(UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar0)));
				if (!UNK_0x437347B10A200C4B(bVar2, 0))
				{
					if (vLocal_58[bVar0 /*3*/].f_2)
					{
						if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bVar2, true)) <= 22500f)
						{
							if (!bLocal_56)
							{
								UNK_0x3F423BF5B8125A50("mini@prostitutes@sexlow_veh");
								UNK_0x3F423BF5B8125A50("mini@prostitutes@sexnorm_veh");
								UNK_0x3F423BF5B8125A50("mini@prostitutes@sexlow_veh_first_person");
								UNK_0x3F423BF5B8125A50("mini@prostitutes@sexnorm_veh_first_person");
								UNK_0x3F423BF5B8125A50("anim@mini@prostitutes@sex@veh_vstr@");
								bLocal_56 = true;
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_55, bVar0))
							{
								UNK_0x5D96D8530B3D0904(&bLocal_55, bVar0);
							}
						}
						else if (UNK_0xEAE0D21A50E6C7F4(bLocal_55, bVar0))
						{
							UNK_0x0674E58A79778E99(&bLocal_55, bVar0);
						}
					}
					else if (UNK_0xEAE0D21A50E6C7F4(bLocal_55, bVar0))
					{
						UNK_0x0674E58A79778E99(&bLocal_55, bVar0);
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(bLocal_55, bVar0))
				{
					UNK_0x0674E58A79778E99(&bLocal_55, bVar0);
				}
			}
		}
		bVar0++;
	}
	if ((bLocal_55 == 0 && bLocal_56) && !vLocal_58[iVar1 /*3*/].f_2)
	{
		UNK_0x8D17794CE3273D70("mini@prostitutes@sexlow_veh");
		UNK_0x8D17794CE3273D70("mini@prostitutes@sexnorm_veh");
		UNK_0x8D17794CE3273D70("mini@prostitutes@sexlow_veh_first_person");
		UNK_0x8D17794CE3273D70("mini@prostitutes@sexnorm_veh_first_person");
		UNK_0x8D17794CE3273D70("anim@mini@prostitutes@sex@veh_vstr@");
		bLocal_56 = false;
	}
}

void func_2()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		return;
	}
	if (iLocal_53 > UNK_0x1C0640BA9A7327B3())
	{
		return;
	}
	bVar0 = false;
	iVar2 = UNK_0x6E61BE9E61434AC1();
	bVar3 = false;
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			iVar1 = UNK_0x16F2683693E537C9();
			if (func_28(&iVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (((func_25(UNK_0xD803B885F5E47A62(), 1, 0) || func_24()) || !bVar3) || func_17())
			{
				iLocal_52 = 4;
			}
			else
			{
				bVar0 = func_13();
				if (bVar0 != func_12(iVar2) && bVar0 != 0)
				{
					func_11(bVar0);
					iLocal_53 = UNK_0x1C0640BA9A7327B3();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = UNK_0x1C0640BA9A7327B3() + 500;
				}
			}
			break;
		case 2:
			if (func_4())
			{
				Global_30921 = 0f;
				UNK_0x92DCE5C81176D2B4("pb_prostitute");
				iLocal_53 = UNK_0x1C0640BA9A7327B3() + 250;
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = UNK_0x1C0640BA9A7327B3() + 250;
			}
			break;
		case 3:
			if ((UNK_0x1FBF08B001C4788A("pb_prostitute") && UNK_0x8A22C4C08282BF26(joaat("PB_PROSTITUTE")) <= 0) && !UNK_0xADC2AA9A68E522A1("pb_prostitute", UNK_0x6E61BE9E61434AC1(), 1, 0))
			{
				bVar4 = func_12(iVar2);
				iLocal_57 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("pb_prostitute", &bVar4, 1, 2050);
				UNK_0x5E8C29AE121DF1C7("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = UNK_0x1C0640BA9A7327B3();
			break;
		case 4:
			if (func_4())
			{
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = UNK_0x1C0640BA9A7327B3() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = UNK_0x1C0640BA9A7327B3() + 500;
			}
			break;
		case 5:
			if (((!func_25(UNK_0xD803B885F5E47A62(), 1, 0) && !func_24()) && bVar3) && !func_3())
			{
				iLocal_53 = UNK_0x1C0640BA9A7327B3() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = UNK_0x1C0640BA9A7327B3() + 500;
			}
			break;
	}
}

bool func_3()
{
	return Global_1694135;
}

bool func_4()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PB_PROSTITUTE")) <= 0 && !UNK_0xADC2AA9A68E522A1("pb_prostitute", UNK_0x6E61BE9E61434AC1(), 1, 0))
	{
		return true;
	}
	if (iLocal_57 == 0)
	{
		return true;
	}
	if (UNK_0x8CD06866876216F2())
	{
		func_5();
	}
	else
	{
		UNK_0x92C09D86742BFBDB("pb_prostitute", 1);
	}
	return false;
}

void func_5()
{
	struct<2> Var0;
	bool bVar2;

	Var0 = -1835440739;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	bVar2 = func_6(1, 1);
	if (bVar2 != 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Var0, 2, bVar2);
	}
}

bool func_6(bool bParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar1);
		if (func_10(bVar2, 0, 0))
		{
			if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
			{
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
				else if (!func_7(bVar2, 0))
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_7(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312745;
}

bool func_10(bool bParam0, bool bParam1, bool bParam2)
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

void func_11(bool bParam0)
{
	vLocal_58[UNK_0x6E61BE9E61434AC1() /*3*/] = bParam0;
}

bool func_12(int iParam0)
{
	if (iParam0 == -1)
	{
		return vLocal_58[UNK_0x6E61BE9E61434AC1() /*3*/];
	}
	return vLocal_58[iParam0 /*3*/];
}

bool func_13()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;

	bVar0 = func_14();
	iVar1 = UNK_0x6E61BE9E61434AC1();
	if (!UNK_0xC844350D5D58C99A(func_12(iVar1)))
	{
		func_11(0);
		return bVar0;
	}
	if (iLocal_57 != 0 && UNK_0x1727A44C562FBED2(iLocal_57))
	{
		if (vLocal_58[iVar1 /*3*/].f_2)
		{
			return func_12(iVar1);
		}
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				iVar2 = UNK_0x16F2683693E537C9();
				if (func_28(&iVar2))
				{
					bVar3 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xC844350D5D58C99A(bVar3))
					{
						if (func_12(iVar1) == UNK_0xA30B8362589C124A(bVar3, false, 0) || UNK_0xC42A92762C58E1B9(func_12(iVar1), bVar3, 1))
						{
							vLocal_58[iVar1 /*3*/].f_2 = 1;
							return func_12(iVar1);
						}
					}
					if (bVar0 == 0)
					{
						return func_12(iVar1);
					}
					vVar4 = { UNK_0x68F4C0EC296D3901(func_12(iVar1), false) };
					vVar7 = { UNK_0x68F4C0EC296D3901(bVar0, false) };
					vVar10 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
					fVar13 = SYSTEM::VDIST(vVar4, vVar10);
					fVar14 = SYSTEM::VDIST(vVar10, vVar7);
					if (fVar13 > fVar14)
					{
						if ((fVar13 - fVar14) > 25f)
						{
							return bVar0;
						}
						else if (fVar14 < 6f && fVar13 > 11f)
						{
							return bVar0;
						}
						else
						{
							return func_12(iVar1);
						}
					}
					else
					{
						return func_12(iVar1);
					}
				}
			}
		}
	}
	return bVar0;
}

int func_14()
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar10 = UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!UNK_0xEB6A8945D1AC98A1(uVar1[iVar11]))
			{
				if (UNK_0xD3658E8B80B4DE3E(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || UNK_0xD3658E8B80B4DE3E(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_16(uVar1[iVar11]))
					{
						if (!func_15(uVar1[iVar11]))
						{
							if (!UNK_0xE9FDA1035CFEA94F(uVar1[iVar11]))
							{
								return uVar1[iVar11];
							}
						}
					}
				}
			}
			iVar11++;
		}
	}
	return iVar0;
}

bool func_15(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (vLocal_58[iVar0 /*3*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_16(bool bParam0)
{
	var uVar0;
	bool bVar1;

	bVar1 = UNK_0xA712FAE854841798(bParam0, &uVar0);
	if (!UNK_0xEA6BC48857E0AC4C(bVar1))
	{
		if (UNK_0x7F8A39872A07D2CE(bVar1, "GB_VEHICLE_EXPORT"))
		{
			return false;
		}
		if (UNK_0x7F8A39872A07D2CE(bVar1, "BUSINESS_BATTLES_SELL"))
		{
			return false;
		}
		if (UNK_0x7F8A39872A07D2CE(bVar1, "BUSINESS_BATTLES"))
		{
			return false;
		}
		if (UNK_0x7F8A39872A07D2CE(bVar1, "GB_CASINO"))
		{
			return false;
		}
		if (UNK_0x7F8A39872A07D2CE(bVar1, "GB_CASINO_HEIST"))
		{
			return false;
		}
	}
	return true;
}

bool func_17()
{
	if (func_3())
	{
		return true;
	}
	if (func_22(UNK_0xD803B885F5E47A62()) != -1)
	{
		return true;
	}
	if (func_18(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0)
{
	if (func_19(func_20(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
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

int func_20(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_21(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_22(int iParam0)
{
	if (func_20(iParam0) == 237 || func_20(iParam0) == 250)
	{
		return func_23(iParam0);
	}
	return -1;
}

int func_23(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_24()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, false);
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_26(iParam0))
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

bool func_26(int iParam0)
{
	return func_27(iParam0);
}

bool func_27(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, false);
}

bool func_28(int iParam0)
{
	if (UNK_0x405E212DDE472467(*iParam0, 0))
	{
		if (UNK_0xA30B8362589C124A(UNK_0x3C66DF04E6EA3587(*iParam0), -1, 0) == *iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_29(bool bParam0)
{
	if (bParam0 != func_31())
	{
		if (func_10(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_30(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

int func_30(int iParam0)
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

int func_31()
{
	return -1;
}

bool func_32(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_33(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

int func_34()
{
	var uVar0;

	func_42(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(159))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(157))
	{
		return 1;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	switch (func_37())
	{
		case 0:
			return func_36();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_36()
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

int func_37()
{
	return Global_30768;
}

bool func_38()
{
	return Global_2450632.f_598;
}

bool func_39(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_40()
{
	return Global_2460680;
}

bool func_41()
{
	return Global_2450632.f_593;
}

void func_42(var uParam0)
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
					func_43(iVar0);
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

void func_43(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_10(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_44(bVar4, &bVar5))
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

bool func_44(bool bParam0, var uParam1)
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

void func_45()
{
	SYSTEM::WAIT(0);
}

void func_46()
{
	if (bLocal_56)
	{
		UNK_0x8D17794CE3273D70("mini@prostitutes@sexlow_veh");
		UNK_0x8D17794CE3273D70("mini@prostitutes@sexnorm_veh");
		UNK_0x8D17794CE3273D70("mini@prostitutes@sexlow_veh_first_person");
		UNK_0x8D17794CE3273D70("mini@prostitutes@sexnorm_veh_first_person");
		UNK_0x8D17794CE3273D70("anim@mini@prostitutes@sex@veh_vstr@");
	}
	if (!func_50(UNK_0xD803B885F5E47A62()) && !func_49(UNK_0xD803B885F5E47A62()))
	{
		func_48();
	}
	func_4();
	if (UNK_0x8CD06866876216F2())
	{
		func_5();
	}
	else
	{
		UNK_0x92C09D86742BFBDB("pb_prostitute", 1);
	}
	Global_2537071.f_4 = 0;
	func_47();
}

void func_47()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_48()
{
	Global_2439138.f_1156.f_10 = 0;
}

bool func_49(int iParam0)
{
	if (iParam0 != func_31())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 29);
	}
	return false;
}

bool func_50(int iParam0)
{
	if (iParam0 != func_31())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_393.f_2, 16);
	}
	return false;
}

void func_51(struct<21> Param0)
{
	func_54(func_55(Param0), Param0);
	func_52(0, -1, 0);
	UNK_0x35B62793EAE9ADDF(&vLocal_58, 97);
	if (UNK_0x8CD06866876216F2())
	{
		func_5();
	}
	else
	{
		UNK_0x92C09D86742BFBDB("pb_prostitute", 1);
	}
	UNK_0x256D93AFAE851A7A(0);
}

int func_52(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_47();
			}
			else
			{
				return 0;
			}
		}
		if (!func_53())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_41())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_39(157))
				{
					if (!bParam2)
					{
						func_47();
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
					func_47();
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
				func_47();
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
			func_47();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_53()
{
	return Global_1312854;
}

void func_54(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_47();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_55(int iParam0)
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

