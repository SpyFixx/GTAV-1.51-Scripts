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
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_70 = 0;
	vector3 vLocal_71[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_168 = false;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
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
	if (UNK_0x8CD06866876216F2())
	{
		if (!func_232(ScriptParam_0))
		{
			func_226();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_225(UNK_0xD803B885F5E47A62()) != 1 && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_859.f_7, false))
			{
				func_226();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_224();
		if (func_214())
		{
			func_226();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_225(UNK_0xD803B885F5E47A62()) != 1 && Global_1626726 == 0)
			{
				func_226();
			}
		}
		if (UNK_0x09BE1E6DF7B80B43() != iLocal_173)
		{
			func_226();
		}
		UNK_0x0F6D9B8ED0147392();
		switch (func_213(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_212())
				{
					if (func_211() == 1)
					{
						vLocal_71[UNK_0x57270EE11514DC67() /*3*/] = 1;
					}
					else if (func_211() == 4)
					{
						vLocal_71[UNK_0x57270EE11514DC67() /*3*/] = 3;
					}
				}
				break;
			case 1:
				if (func_211() == 1)
				{
					func_185();
				}
				else if (func_211() == 4)
				{
					vLocal_71[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				if (vLocal_71[UNK_0x57270EE11514DC67() /*3*/].f_2 == 0)
				{
					if ((!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), Local_60.f_3, 500f, 500f, 500f, false, true, 0) && func_225(UNK_0xD803B885F5E47A62()) != 1) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_859.f_7, false))
					{
						vLocal_71[UNK_0x57270EE11514DC67() /*3*/] = 4;
					}
				}
				break;
			case 3:
				func_183(&(Local_60.f_9));
				if (func_182(&(Local_60.f_9)))
				{
					vLocal_71[UNK_0x57270EE11514DC67() /*3*/] = 4;
				}
				break;
			case 2:
				vLocal_71[UNK_0x57270EE11514DC67() /*3*/] = 4;
			case 4:
				func_226();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_211())
			{
				case 0:
					if (func_7())
					{
						Local_60 = 1;
					}
					break;
				case 1:
					func_6();
					func_5();
					if (func_1())
					{
						Local_60 = 4;
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
	if (Local_60.f_7 >= 32 && func_225(UNK_0xD803B885F5E47A62()) == 1)
	{
		if (func_4(Global_2537071.f_859.f_1))
		{
			return true;
		}
	}
	if (func_3(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	if (Local_60.f_8 == 2)
	{
		return true;
	}
	return false;
}

bool func_3(bool bParam0)
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

bool func_4(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_5()
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!UNK_0xE9F78D191AD5EDBA(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		case 1:
			Local_60.f_8 = 2;
			break;
		case 2:
			break;
	}
}

void func_6()
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(vLocal_71[bVar0 /*3*/].f_1, false))
				{
					Local_60.f_6 = bVar0;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_60.f_1, 7))
			{
				if (UNK_0xEAE0D21A50E6C7F4(vLocal_71[bVar0 /*3*/].f_1, true))
				{
					UNK_0x5D96D8530B3D0904(&(Local_60.f_1), 7);
				}
			}
		}
		bVar0++;
	}
}

bool func_7()
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	struct<35> Var13;

	if (!UNK_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (func_212())
		{
			if (UNK_0x081C8BC5094A7B76(1))
			{
				fVar5 = 250f;
				vVar6 = { Local_60.f_3 };
				if (UNK_0xEAE0D21A50E6C7F4(Local_60.f_1, 8))
				{
					vVar0 = { Global_2537071.f_859.f_1 };
					bVar3 = Global_2537071.f_859.f_4;
				}
				if (func_225(UNK_0xD803B885F5E47A62()) == 7)
				{
					iVar12 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
					if (Global_4456448.f_271[iVar12 /*15700*/].f_2187[0 /*36*/].f_23 > 0f)
					{
						vVar6 = { Global_4456448.f_271[iVar12 /*15700*/].f_2187[0 /*36*/].f_16 };
						vVar9 = { Global_4456448.f_271[iVar12 /*15700*/].f_2187[0 /*36*/].f_19 };
						fVar5 = Global_4456448.f_271[iVar12 /*15700*/].f_2187[0 /*36*/].f_23;
						iVar4 = 1;
					}
					else if (Global_4456448.f_271[iVar12 /*15700*/].f_2187[0 /*36*/].f_22 > 0f)
					{
						vVar6 = { Global_4456448.f_271[iVar12 /*15700*/].f_2187[0 /*36*/].f_13 };
						fVar5 = Global_4456448.f_271[iVar12 /*15700*/].f_2187[0 /*36*/].f_22;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_32 = -1082130432;
				Var13.f_34 = 1;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_60.f_1, 8) || func_181(vVar6, fVar5, &vVar0, &bVar3, &Var13))
					{
						if (Local_60.f_7 >= 32 || func_225(UNK_0xD803B885F5E47A62()) == 1)
						{
							Local_60.f_2 = UNK_0x4193A2DE62BC07C0(UNK_0xEC03378782221D46(joaat("PICKUP_PORTABLE_PACKAGE"), vVar0, true, joaat("PROP_DRUG_PACKAGE_02")));
						}
						else
						{
							Local_60.f_2 = UNK_0x4193A2DE62BC07C0(UNK_0xE2E04D27E0E84BD7(joaat("PICKUP_PORTABLE_PACKAGE"), vVar0, 1, joaat("PROP_DRUG_PACKAGE_02")));
						}
						UNK_0xD8F6A53F4799FAFE(UNK_0x09AD4CE7DA179533(Local_60.f_2), bVar3);
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_60.f_1, 8) || func_8(vVar6, vVar9, fVar5, &vVar0, &bVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_225(UNK_0xD803B885F5E47A62()) == 1)
					{
						Local_60.f_2 = UNK_0x4193A2DE62BC07C0(UNK_0xEC03378782221D46(joaat("PICKUP_PORTABLE_PACKAGE"), vVar0, true, joaat("PROP_DRUG_PACKAGE_02")));
					}
					else
					{
						Local_60.f_2 = UNK_0x4193A2DE62BC07C0(UNK_0xE2E04D27E0E84BD7(joaat("PICKUP_PORTABLE_PACKAGE"), vVar0, 1, joaat("PROP_DRUG_PACKAGE_02")));
					}
					UNK_0xD8F6A53F4799FAFE(UNK_0x09AD4CE7DA179533(Local_60.f_2), bVar3);
				}
			}
		}
	}
	if (UNK_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		return true;
	}
	return false;
}

bool func_8(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7, bool bParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	struct<17> Var0;
	struct<25> Var34;

	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 2;
	Var34.f_8 = { vParam0 };
	Var34.f_11 = { vParam3 };
	Var34.f_14 = fParam6;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	Param9.f_7 = 0;
	if (func_9(&Var34, &Param9, &Var0))
	{
		*uParam7 = { Var0[0 /*3*/] };
		*bParam8 = Var0.f_16[0];
		return true;
	}
	return false;
}

bool func_9(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar85;

	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405072.f_2458 == *uParam0 || !Global_2405072.f_2458.f_1 == uParam0->f_1) || !Global_2405072.f_2458.f_2 == uParam0->f_2) || !Global_2405072.f_2461 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		case 1:
			if (((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		case 2:
			if ((((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2) || !Global_2405072.f_2478 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405072.f_2456 == 1)
		{
			if (UNK_0x1727A44C562FBED2(Global_2405072.f_2465))
			{
				if (Global_2405072.f_2465 == UNK_0x0D0A574C76D769AC())
				{
					if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_180(0))
					{
						return false;
					}
				}
				else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_180(0))
				{
					return false;
				}
			}
			UNK_0xDEED9606C7D093F7();
			UNK_0x0FB2CEE58DA4A6EE();
			func_179();
		}
		Global_2405072.f_2456 = 0;
	}
	else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2462) > func_180(0))
	{
		Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
		func_173();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	UNK_0x10FEEAFF01E32639(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar11 = { vVar8 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar14 = { vVar8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405072.f_2456)
	{
		UNK_0xDEED9606C7D093F7();
		UNK_0x0FB2CEE58DA4A6EE();
		func_179();
		if (iParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_172(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, iParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return true;
				}
			}
		}
		if (!UNK_0xC79C8A78EC708587())
		{
			Global_2405072.f_2479 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405072.f_2458 = { *uParam0 };
					Global_2405072.f_2461 = uParam0->f_4;
					break;
				case 1:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = 0f;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = uParam0->f_14;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!iParam1->f_8 && !iParam1->f_9)
			{
				func_171(vVar8.x, vVar8.y);
			}
			Global_2405072.f_2457 = 1;
			Global_2405072.f_2456 = 1;
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2462 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2465 = UNK_0x0D0A574C76D769AC();
		}
		else
		{
			return false;
		}
	}
	if (Global_2405072.f_2456)
	{
		if (Global_2405072.f_2457 == 1)
		{
			if (UNK_0xD1B4D22E0BA9B0C8(fVar4, fVar5, fVar6, fVar7) || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 5000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (iParam1->f_8 || iParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("TAILGATER");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *iParam1 };
					Var26.f_3 = iParam1->f_5;
					Var26.f_11 = iParam1->f_9;
					Var26.f_18 = 1;
					if (iParam1->f_32 > 0f)
					{
						Var26.f_6 = iParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { iParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = iParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = iParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_170(Global_4456448.f_232883))
					{
						Var26.f_9 = 1;
					}
					func_145(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((iParam1->f_7 && iParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_144(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405072.f_2457 = 9;
				}
				else
				{
					Global_2405072.f_2457 = 2;
				}
			}
		}
		if (Global_2405072.f_2457 == 2)
		{
			if ((UNK_0xF8A3B10A1B8ACCDD(vVar11, vVar14) || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 15000) || UNK_0x7D293360C866EB8E(vVar11, vVar14) == 0)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (uParam0->f_5 && !func_141(UNK_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_2457 = 3;
				}
				else
				{
					Global_2405072.f_2457 = 4;
				}
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2467) > 7000)
			{
				func_140(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405072.f_2457 == 3)
		{
			if (func_139() || UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 10000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 4;
			}
		}
		if (Global_2405072.f_2457 == 4)
		{
			if (UNK_0xC79C8A78EC708587())
			{
				UNK_0xDEED9606C7D093F7();
				UNK_0x0FB2CEE58DA4A6EE();
			}
			else
			{
				iVar0 = 0;
				func_173();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*iParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (iParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (UNK_0xAFED075B5A62767B(UNK_0xD803B885F5E47A62(), *uParam0, uParam0->f_4, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (UNK_0xD4B5AAF3676F3DE0(UNK_0xD803B885F5E47A62(), vVar18, vVar21, uVar24, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						case 2:
							if (UNK_0xD4B5AAF3676F3DE0(UNK_0xD803B885F5E47A62(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *iParam1, iVar0))
							{
								Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
					}
				}
				else
				{
					if (iParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (iParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							UNK_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							UNK_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						case 2:
							UNK_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
					}
				}
			}
		}
		if (Global_2405072.f_2457 == 5)
		{
			if (func_64(uParam2, uParam0, iParam1, 0))
			{
				if (Global_2405072.f_2483.f_5)
				{
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 6;
				}
				else
				{
					Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*iParam1) == 0f)
						{
							vVar1 = { *iParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
						}
					}
					Global_2405072.f_2457 = 9;
				}
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				UNK_0xDEED9606C7D093F7();
				UNK_0x0FB2CEE58DA4A6EE();
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 6)
		{
			iVar0 = 0;
			Global_2405072.f_2483.f_1 = 0;
			if (iParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_63(uParam0->f_4))
				{
					if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (iParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					UNK_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					func_138(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					UNK_0x1814612955640FD9(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				case 2:
					UNK_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
			}
		}
		if (Global_2405072.f_2457 == 7)
		{
			if (func_64(uParam2, uParam0, iParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405072.f_2617[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_144(Global_2405072.f_2617[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
									case 1:
										if (func_60(Global_2405072.f_2617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
									case 2:
										if (UNK_0x0399732A9EBC368E(Global_2405072.f_2617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar17 /*3*/] };
										}
										break;
								}
							}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&vVar1, 0, 1, 1, 0, uParam0, iParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				if (!SYSTEM::VMAG(*iParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *iParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405072.f_2457 = 9;
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2405072.f_486))
				{
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_10(uParam2, &(Global_2405072.f_2483.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405072.f_2458 };
				func_12(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, iParam1);
			}
			Global_2405072.f_2463 = UNK_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 9;
		}
		if (Global_2405072.f_2457 == 9)
		{
			Global_2405072.f_2456 = 0;
			UNK_0xDEED9606C7D093F7();
			UNK_0x0FB2CEE58DA4A6EE();
			func_179();
			return true;
		}
		Global_2405072.f_2462 = UNK_0x2B6E0A53779D29EA();
	}
	return false;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

bool func_11(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return true;
	}
	return false;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6)
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	vector3 vVar67;
	vector3 vVar70;
	vector3 vVar73;
	float fVar76;

	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("TAILGATER");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!iParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_63(uParam5->f_4) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, 0f) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vVar67)))
						{
							iVar66 += 4;
						}
						break;
				}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_28(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
		Var4 = { *iParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = iParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (iParam6->f_32 > 0f)
		{
			Var4.f_6 = iParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
			}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { iParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = iParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = iParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_24(UNK_0xD803B885F5E47A62(), 0))
		{
			Var4.f_9 = 1;
		}
		func_145(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_23(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_28(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_23(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (UNK_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
					{
						vVar0.f_2 = uVar63;
					}
				}
			}
			else if (func_13(uParam0, 1, 1, 1, 1))
			{
				func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, iParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (UNK_0xE82754C349C7B581(vVar0, &uVar63, 0, 0))
				{
					vVar0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405072.f_661 = 1;
}

bool func_13(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0 /*17*/].f_16))
			{
				if (func_22(*iParam0, &(Global_2409984[iVar0 /*17*/]), 1008981770 /* Float: 0.01f */, iParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0 /*17*/].f_12)
						{
							*iParam0 = { Global_2409984[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *iParam0 };
							func_14(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 0, bParam3);
							if (func_13(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *iParam0 };
								func_14(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 1, 0);
							}
							*iParam0 = { vVar1 };
						}
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_14(int iParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*iParam0 = { func_21(*iParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			case 1:
				*iParam0 = { func_21(*iParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			case 2:
				*iParam0 = { func_21(*iParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_19(iParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			case 1:
				func_18(iParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			case 2:
				func_15(iParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
		}
	}
}

void func_15(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7, float fParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;

	vVar0 = { vParam4 - vParam1 };
	vVar0.f_2 = 0f;
	vVar3 = { *iParam0 - vParam1 };
	vVar3.f_2 = 0f;
	vVar6 = { func_17(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(UNK_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (bParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_16(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((bParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((bParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((bParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((bParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *iParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.f_2 = 0f;
		vVar6 = { func_17(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((bParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.f_2 = 0f;
		vVar29 = { *iParam0 - vVar20 };
		vVar29.f_2 = 0f;
		vVar6 = { func_17(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(UNK_0x07AB02F3C4AE2B04(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_16(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *iParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *iParam0, iParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *iParam0, iParam0->f_1, 0f))
		{
			*iParam0 = { vVar10 };
		}
		else
		{
			*iParam0 = { vVar13 };
		}
	}
}

float func_16(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_17(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_18(int iParam0, struct<2> Param1, float fParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { *iParam0 };
	fVar3 = (*iParam0 - Param1);
	fVar4 = (*iParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (iParam0->f_1 - Param1.f_1);
	fVar7 = (iParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *iParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.f_1 = (Param1.f_1 - fParam7);
	}
	*iParam0 = { vVar0 };
}

void func_19(int iParam0, vector3 vParam1, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { *iParam0 - vParam1 };
	vVar0.f_2 = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (bParam7 == 0f)
		{
			func_20(&vVar0, 0f, 0f, UNK_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_20(&vVar0, 0f, 0f, bParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((bParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*iParam0 = vVar3.x;
	iParam0->f_1 = vVar3.y;
}

void func_20(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_21(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam10)
	{
		case 0:
			func_19(&vParam0, vParam3, bParam9, fParam11, bParam12, 0);
			break;
		case 1:
			func_18(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		case 2:
			func_15(&vParam0, vParam3, vParam6, bParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		UNK_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_144(vVar1, vParam3, bParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			case 1:
				if (!func_60(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			case 2:
				if (!UNK_0x0399732A9EBC368E(vVar1, vParam3, vParam6, bParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

bool func_22(vector3 vParam0, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam3->f_10)
	{
		case 0:
			return func_144(vParam0, *iParam3, ((iParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * iParam3->f_8)), bParam5, bParam6);
		case 1:
			return func_60(vParam0, *iParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), iParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
		case 2:
			if (bParam5 && bParam6)
			{
				return UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false);
			}
			else if (bParam5)
			{
				if (UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false) && !(vParam0.z < iParam3->f_2 && vParam0.z < iParam3->f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (bParam6)
			{
				if (UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false) && !(vParam0.z > iParam3->f_2 && vParam0.z > iParam3->f_3.f_2))
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
				return UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, true);
			}
			break;
	}
	return false;
}

bool func_23(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, bool bParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam4) <= bParam10)
			{
				return true;
			}
			break;
		case 1:
			return func_60(vParam0, vParam4, vParam7, 0, 0);
		case 2:
			return UNK_0x0399732A9EBC368E(vParam0, vParam4, vParam7, bParam10, 0, true);
	}
	return false;
}

bool func_24(bool bParam0, bool bParam1)
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
	if (bParam0 != func_27())
	{
		if (func_26(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_27())
			{
				return func_25(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

int func_25(int iParam0)
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

bool func_26(bool bParam0, bool bParam1, bool bParam2)
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

int func_27()
{
	return -1;
}

bool func_28(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_59(vParam0, iParam3))
	{
		if (func_29(vParam0, iParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	if (UNK_0xB885EF0389689E54(vParam0, 0, iParam3, iParam4))
	{
		if (func_29(vParam0, iParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	return false;
}

bool func_29(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;

	fVar0 = SYSTEM::VDIST(vParam0, *iParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_45(Global_2405072.f_509, iParam3, &uVar1, &uVar8, iParam5, 1)) || iParam4 == 0)
		{
			if (!func_33(*iParam3, 1056964608 /* Float: 0.5f */))
			{
				if (!func_30(iParam3, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_30(int iParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { *iParam0 };
	iVar4 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_31(vVar1, &(Global_2410189[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410189[iVar4 /*141*/][iVar0 /*7*/], Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*iParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_31(vVar1, &(Global_2410189[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410189[8 /*141*/][iVar0 /*7*/], Global_2410189[8 /*141*/][iVar0 /*7*/].f_3, Global_2410189[8 /*141*/][iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*iParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_31(vector3 vParam0, var uParam3)
{
	return UNK_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_32(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

bool func_33(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (func_42(UNK_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0 /*107*/].f_7 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_91961[iVar0 /*107*/], Global_4456448.f_91961[iVar0 /*107*/].f_6, Global_4456448.f_91961[iVar0 /*107*/].f_7, iParam3))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0 /*266*/].f_15 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_78242[iVar0 /*266*/], Global_4456448.f_78242[iVar0 /*266*/].f_3, Global_4456448.f_78242[iVar0 /*266*/].f_15, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0 /*325*/].f_12 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_124065[iVar0 /*325*/], Global_4456448.f_124065[iVar0 /*325*/].f_3, Global_4456448.f_124065[iVar0 /*325*/].f_12, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_233[iVar0]) && !UNK_0x437347B10A200C4B(Global_969031.f_233[iVar0], 0))
				{
					if (func_34(vParam0, UNK_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], true), UNK_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), UNK_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_119[iVar0]) && !UNK_0x437347B10A200C4B(Global_969031.f_119[iVar0], 0))
				{
					if (func_34(vParam0, UNK_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], true), UNK_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), UNK_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_34(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;

	if (SYSTEM::VDIST(vParam0, vParam3) < func_41(bParam7, 1008981770 /* Float: 0.01f */))
	{
		func_35(vParam3, bParam6, bParam7, &vVar0, &vVar3, &bVar6, iParam8);
		if (UNK_0x0399732A9EBC368E(vParam0, vVar0, vVar3, bVar6, 0, true))
		{
			return true;
		}
	}
	return false;
}

void func_35(vector3 vParam0, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, bParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_36(bParam4, &vVar3, &vVar6, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.f_2 = (vVar9.z - ((0.5f * UNK_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.f_2 = (vVar12.z + ((0.5f * UNK_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*iParam6 = { vVar12 };
	*bParam7 = UNK_0x755FF954DAE327E1((vVar6.x - vVar3.x));
}

void func_36(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	if (UNK_0x468C1AC3ABF95C57(bParam0))
	{
		UNK_0xA6B02C1DB14DDA13(bParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_39(bParam0);
		if (iVar0 != 0)
		{
			func_37(iVar0, fParam1, fParam2, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
			return;
		}
	}
	if (SYSTEM::VMAG(*fParam1) <= 0.01f || SYSTEM::VMAG(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_37(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	func_38(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0x468C1AC3ABF95C57(Global_1315812[iVar0]))
		{
			UNK_0xA6B02C1DB14DDA13(Global_1315812[iVar0], &(Global_1315816[iVar0 /*3*/]), &(Global_1315823[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315816[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0 /*3*/] - Global_1315816[iVar0 /*3*/]);
		Global_1315833[iVar0] = (Global_1315823[iVar0 /*3*/].f_1 - Global_1315816[iVar0 /*3*/].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0 /*3*/].f_2 - Global_1315816[iVar0 /*3*/].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*fParam1 = { Global_1315841 };
	*fParam2 = { Global_1315844 };
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_39(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == bParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(bool bParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (bParam0 == 0)
	{
		return 5f;
	}
	func_36(bParam0, &vVar0, &vVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

bool func_42(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_43(bParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[bParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_43(bool bParam0)
{
	return func_44(bParam0);
}

bool func_44(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_13.f_1, false);
}

bool func_45(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (func_52(vParam0))
	{
		if (func_13(iParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return true;
		}
	}
	if (func_47(iParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return true;
	}
	if (bParam7)
	{
		if (func_46(*iParam3, 1056964608 /* Float: 0.5f */))
		{
			return true;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *bParam4)
	{
		if (SYSTEM::VDIST(*iParam3, *(bParam4[iVar0 /*3*/])) < (*iParam5)[iVar0])
		{
			if (bParam6)
			{
				func_19(iParam3, *(bParam4[iVar0 /*3*/]), (*iParam5)[iVar0], 1036831949 /* Float: 0.1f */, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return true;
	}
	return false;
}

bool func_46(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405072.f_2728[iVar0 /*3*/]) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_47(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_49(*iParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *iParam0 };
			func_14(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 0, bParam2);
			if (func_49(vVar2, &uVar1) || func_48(vVar2))
			{
				vVar2 = { *iParam0 };
				func_14(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 1, bParam2);
			}
			*iParam0 = { vVar2 };
		}
		return true;
	}
	return false;
}

bool func_48(vector3 vParam0)
{
	float fVar0;

	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return true;
		}
	}
	return false;
}

bool func_49(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_51())
	{
		return false;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_22(vParam0, &(Global_2405072.f_365[iVar0 /*12*/]), 1008981770 /* Float: 0.01f */, 0, 0))
			{
				*iParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_50()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_51()
{
	return Global_1676377.f_474;
}

bool func_52(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_56(UNK_0xD803B885F5E47A62(), 1))
			{
				return true;
			}
			if (!func_55(vParam0, 1008981770 /* Float: 0.01f */))
			{
				if (!func_13(&vParam0, 0, 0, 0, 1))
				{
					return true;
				}
				else if (func_13(&vParam0, 0, 1, 0, 1))
				{
					return true;
				}
			}
			else
			{
				iVar0 = func_54(vParam0, 1008981770 /* Float: 0.01f */);
				if (iVar0 > -1)
				{
					vVar1 = { func_53(&(Global_2405072.f_45[iVar0 /*12*/])) };
					if (!func_13(&vVar1, 0, 0, 0, 1))
					{
						if (!func_13(&vParam0, 0, 0, 0, 1))
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

Vector3 func_53(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
	}
	return *uParam0;
}

int func_54(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_55(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_56(bool bParam0, bool bParam1)
{
	if (func_58() != 0)
	{
		return func_57(bParam0) != 0;
	}
	return func_42(bParam0, bParam1, 0);
}

int func_57(bool bParam0)
{
	if (func_26(bParam0, 0, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_1;
	}
	return 0;
}

int func_58()
{
	return Global_30768;
}

bool func_59(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			fVar3 = SYSTEM::VDIST(Global_2405072.f_2255[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*iParam3 = { Global_2405072.f_2255[iVar1 /*4*/] };
			return true;
		}
	}
	return false;
}

bool func_60(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_61(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return false;
	}
	if (bParam9 && bParam10)
	{
		return true;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return true;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return true;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return true;
	}
	return false;
}

void func_61(bool bParam0, var uParam1)
{
	var uVar0;

	if (*bParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *bParam0;
		*bParam0 = uVar0;
	}
	if (bParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = bParam0->f_1;
		bParam0->f_1 = uVar0;
	}
	if (bParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = bParam0->f_2;
		bParam0->f_2 = uVar0;
	}
}

bool func_62(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;

	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.f_1 = vParam0.y;
		vVar0.f_1 = vParam3.y;
	}
	else
	{
		vVar3.f_1 = vParam3.y;
		vVar0.f_1 = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.f_2 = vParam0.z;
		vVar0.f_2 = vParam3.z;
	}
	else
	{
		vVar3.f_2 = vParam3.z;
		vVar0.f_2 = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar3 - vVar0) > 100f)
	{
		return true;
	}
	if (fParam6 > 50f)
	{
		return true;
	}
	return false;
}

bool func_63(float fParam0)
{
	if (fParam0 > 50f)
	{
		return true;
	}
	return false;
}

bool func_64(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (Global_2405072.f_2483.f_1 == 0 && Global_2405072.f_2483 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (UNK_0xB1275034A6871D62(&(Global_2405072.f_2483.f_1)))
			{
				case 0:
					func_136(uParam1, iParam2);
					if (!Global_2405072.f_2483.f_2)
					{
						if (iParam2->f_7 && Global_2405072.f_552.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return true;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
							}
							if (uParam1->f_5 && func_11(Global_2405072.f_486))
							{
								if (!Global_2405072.f_2483.f_5)
								{
									Global_2405072.f_2483.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
								}
							}
							else
							{
								func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, iParam2);
							}
							uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
							return true;
						}
					}
					break;
				case 1:
					func_136(uParam1, iParam2);
					break;
				case 2:
					return false;
				case 3:
					return false;
			}
		}
		else if (UNK_0xC79C8A78EC708587())
		{
			if (!UNK_0xFA2A5CC35287E5B8())
			{
				if (UNK_0x4FC9A1459CD5C324())
				{
					func_136(uParam1, iParam2);
					Global_2405072.f_2483.f_1 = UNK_0xEAD4FBE79458D592();
				}
				else
				{
					return false;
				}
			}
			else
			{
				UNK_0x0FB2CEE58DA4A6EE();
				func_136(uParam1, iParam2);
				if (!Global_2405072.f_2483.f_2)
				{
					Global_2405072.f_2483.f_5 = 1;
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if (uParam1->f_5)
	{
		func_133(Global_2405072.f_552, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90));
	}
	if (iParam2->f_7 && !Global_2405072.f_2483.f_4)
	{
		Global_2405072.f_2483.f_4 = 1;
		func_72(*uParam1, uParam1->f_3, uParam1, iParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405072.f_2483.f_1 > 0 || Global_2405072.f_2483 > 0)
	{
		if (uParam1->f_5 || UNK_0xC79C8A78EC708587())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405072.f_2483.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405072.f_2483.f_3)
					{
						iVar4 = Global_2405072.f_2483.f_3 + 1;
					}
					if (iVar4 > (Global_2405072.f_2483.f_1 - 1))
					{
						iVar4 = (Global_2405072.f_2483.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						UNK_0xE0463990929F9949(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						UNK_0xB2C5D6F8163D4A45(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = UNK_0x00C66A3E05649B75(iVar4);
					}
					else
					{
						UNK_0xD38A4489EFBF773A(iVar4, &iVar5);
					}
					func_72(vVar0, fVar3, uParam1, iParam2, 0, iVar5);
					iVar6++;
					Global_2405072.f_2483.f_3 = iVar4;
				}
				else
				{
					return false;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405072.f_2483.f_1;
		}
		if (Global_2405072.f_2483.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405072.f_2880)
			{
				func_66(&(Global_2405072.f_2483.f_6[0 /*10*/]), &(Global_2405072.f_2483.f_6[1 /*10*/]), &(Global_2405072.f_2483.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_2405072.f_486))
			{
				if (Global_2405072.f_2483.f_2)
				{
					func_10(uParam0, &(Global_2405072.f_2483.f_6));
					func_65(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
					func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, iParam2);
					uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_10(uParam0, &(Global_2405072.f_2483.f_6));
				func_65(*(uParam0[0 /*3*/]));
				return true;
			}
			else if (uParam1->f_5)
			{
				iVar4 = UNK_0x09AC81E49EA267F7(false, Global_2405072.f_2483.f_1);
				UNK_0xE0463990929F9949(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_65(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
					func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
					uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
				func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, iParam2);
				uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
				func_65(*(uParam0[0 /*3*/]));
				return true;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
		if (uParam1->f_5 && func_11(Global_2405072.f_486))
		{
			if (!Global_2405072.f_2483.f_5)
			{
				Global_2405072.f_2483.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, iParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_12(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, iParam2);
		}
		uParam0->f_16[0] = UNK_0x79833B02DBD2A244(0f, 360f);
		func_65(*(uParam0[0 /*3*/]));
		return true;
	}
	return false;
}

void func_65(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405072.f_2617[(3 - iVar0) /*3*/] = { Global_2405072.f_2617[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405072.f_2617[0 /*3*/] = { vParam0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2405072.f_486) && func_71() < 4096)
	{
		func_70(uParam0, 0f);
		func_70(uParam1, uParam0->f_2);
		func_70(uParam2, uParam1->f_2);
	}
	else
	{
		func_69(uParam0);
		func_68(uParam2, uParam0->f_4);
		func_67(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_67(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;

	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408006[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;

	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408006[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408006[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;

	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408006[iVar0 /*10*/].f_1;
				Var2 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;

	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_2 < fVar1 && Global_2408006[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408006[iVar0 /*10*/].f_2;
				Var2 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408006[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;

	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (iParam4->f_5)
	{
		if (Global_2405072.f_486 == 1)
		{
			if (UNK_0x755FF954DAE327E1((Global_2405072.f_509.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (iParam4->f_5)
	{
		if (func_129(UNK_0xD803B885F5E47A62()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (iParam4->f_5 && iParam4->f_6)
	{
		if (!func_128(vParam0, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (iParam4->f_5)
	{
		if (!UNK_0xE5DF6192D54A65A1(UNK_0x16F2683693E537C9(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!UNK_0xE5DF6192D54A65A1(UNK_0x16F2683693E537C9(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (iParam4->f_5)
	{
		if (!func_127(vParam0, iParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(iParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, iParam5->f_13[iVar11 /*3*/]) > iParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(iParam5->f_23) > 0f && SYSTEM::VMAG(iParam5->f_26) > 0f) && iParam5->f_29 > 0f)
		{
			if (UNK_0x0399732A9EBC368E(vParam0, iParam5->f_23, iParam5->f_26, iParam5->f_29, 0, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (iParam4->f_5)
	{
		if (func_121(vParam0, iParam3, iParam4->f_15, func_126(1), iParam4->f_16, 0, 1123024896 /* Float: 120f */, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 1084227584 /* Float: 5f */, 1092616192 /* Float: 10f */, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405072.f_3;
		}
	}
	else if (!func_118(vParam0, 25f, UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (iParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_115(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_115(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (iParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			vVar12 = { Global_2405072.f_509 };
			if (Global_2405072.f_486 == 26)
			{
				vVar12 = { Global_2405072.f_552.f_18 };
			}
			if (!func_46(vParam0, 0.5f))
			{
				if (func_52(vVar12))
				{
					if (!func_13(&vParam0, 0, 0, 0, 1) && !func_114(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_114(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_113(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (iParam4->f_5)
	{
		if (!(func_112(UNK_0xD803B885F5E47A62()) && func_110(UNK_0xD803B885F5E47A62())))
		{
			if (!func_109(&vParam0, &(Global_2405072.f_2483.f_90), 0, 1065353216 /* Float: 1f */))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (iParam4->f_5)
	{
		if (!func_110(UNK_0xD803B885F5E47A62()))
		{
			if (!func_108(vParam0, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90), 1073741824 /* Float: 2f */))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_107(vParam0))
	{
		if (iParam4->f_5)
		{
			if (func_11(Global_2405072.f_486))
			{
				if (func_55(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (iParam4->f_5)
	{
		if (func_106(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405072.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (iParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (UNK_0x31609A585163CBAC(UNK_0xFBD08BECC9B87937(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (iParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			if (!func_47(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_30(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_54(vParam0, 1008981770 /* Float: 0.01f */);
		if (iVar16 > -1)
		{
			func_105(vParam0, &vVar17, &vVar20, &uVar23);
			if (!func_100(&(Global_2405072.f_45[iVar16 /*12*/]), vVar17, vVar20, uVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(vParam0, 1056964608 /* Float: 0.5f */))
	{
		iVar8 = -1;
	}
	if (iParam5->f_33)
	{
		if (UNK_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (iParam5->f_34)
	{
		if (UNK_0x558ADED8B93EA0F6(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (iParam4->f_5)
	{
	}
	else if (func_99(vParam0, 1, 0, iParam4->f_15, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405072.f_2880 && iParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				iParam5->f_4 = 0;
				iVar4 = 0;
			}
			else
			{
				iVar4 = 1;
			}
			if (iParam4->f_21)
			{
				fVar0 = func_91(vParam0, iParam4->f_18, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_91(vParam0, Global_2405072.f_2458, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2405072.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_89(vParam0);
			}
			fVar7 = func_78(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = iParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = fVar7;
			func_77(Var25);
			Global_2405072.f_2483.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405072.f_2483.f_6[iVar24 /*10*/])
			{
				if (iParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							iParam5->f_4 = 0;
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						if (iParam4->f_21)
						{
							fVar0 = func_91(vParam0, iParam4->f_18, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_91(vParam0, Global_2405072.f_2458, iParam5->f_6, iParam5->f_4, iVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_11(Global_2405072.f_486) && iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_89(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405072.f_2483.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = iParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_76(Var25, iVar24);
							Global_2405072.f_2483.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405072.f_2483.f_6[iVar24 /*10*/] || (iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/] && fVar0 > Global_2405072.f_2483.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = iParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_76(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (iParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_74(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_78(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405072.f_2483.f_6[iVar24 /*10*/] || (iVar8 == Global_2405072.f_2483.f_6[iVar24 /*10*/] && fVar3 > Global_2405072.f_2483.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = iParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_76(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;

	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_74(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	bVar2 = false;
	fVar3 = 1E+13f;
	if (bParam4 && !bParam6)
	{
		if (func_26(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				if (UNK_0x8E28E832BEAC3DCE(vParam0, bParam3))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_26(bVar1, 1, 1))
		{
			if (!func_141(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if (func_75(bVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((bParam5 || (bParam5 == 0 && UNK_0x08067D4957B73C02(bVar1) != UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))) || UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (UNK_0x08067D4957B73C02(bVar1) != iParam7 || UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

bool func_75(bool bParam0)
{
	if (UNK_0x62FA787159F264AC(UNK_0x9539D44F3E4492F6(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

void func_76(struct<10> Param0, int iParam10)
{
	struct<10> Var0;

	Var0.f_2 = 1176256410;
	Var0 = { Global_2405072.f_2483.f_6[iParam10 /*10*/] };
	Global_2405072.f_2483.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_76(Var0, iParam10 + 1);
	}
}

void func_77(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;

	Var1.f_2 = 1176256410;
	iVar11 = func_71();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] < iVar11)
		{
			Global_2408006[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] == 0)
		{
			Global_2408006[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2408006[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408006[iVar13 /*10*/] = { Param0 };
	}
}

float func_78(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;

	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar11 = iVar0;
		if (func_26(bVar11, 1, 1) || (iParam7 == 1 && func_26(bVar11, 0, 0)))
		{
			if (!bVar11 == UNK_0xD803B885F5E47A62() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_80(bVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (UNK_0x08067D4957B73C02(bVar11) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
					{
						if (!UNK_0x08067D4957B73C02(bVar11) == -1 || !func_56(UNK_0xD803B885F5E47A62(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar11) || !bParam6)
					{
						if (func_75(bVar11))
						{
							vVar5 = { func_79(bVar11) };
							if (!bVar11 == UNK_0xD803B885F5E47A62())
							{
								vVar8 = { UNK_0x088E3BBDA11FE175(UNK_0x9539D44F3E4492F6(bVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.f_2 = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.f_2 = vParam0.z;
								}
							}
							fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar5, 1);
							fVar2 = UNK_0x0EB28750412C3A5A(vParam0, vVar8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_79(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_80(bool bParam0)
{
	if (func_26(bParam0, 0, 1))
	{
		if (!func_87(bParam0))
		{
			if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (!UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
				{
					if (func_42(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_86(UNK_0x08067D4957B73C02(bParam0), UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()), 0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
				else if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
				{
					if (!func_42(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_81(bParam0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_81(bool bParam0)
{
	if (func_85(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_84(bParam0) };
	if (UNK_0x04A104F429E6CBB0(&Global_2513218))
	{
		return true;
	}
	if (func_82(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_82(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_83(bParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_83(bParam1))
		{
			return true;
		}
	}
	return false;
}

int func_83(bool bParam0)
{
	if (bParam0 != func_27())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_27();
}

struct<13> func_84(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_85(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_84(bParam0) };
		Global_2513231 = { func_84(bParam1) };
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

bool func_86(int iParam0, int iParam1, int iParam2)
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

bool func_87(bool bParam0)
{
	if (func_141(bParam0, 0))
	{
		return true;
	}
	if (func_88())
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

bool func_88()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

float func_89(vector3 vParam0)
{
	var uVar0;

	return func_90(vParam0, &(Global_2405072.f_45), &uVar0);
}

float func_90(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405072.f_2726) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_91(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;

	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_73(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_78(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_73(fVar4, 0f, func_98(), func_96(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_94(vParam0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && !func_56(UNK_0xD803B885F5E47A62(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_93(vParam0, UNK_0xD803B885F5E47A62(), 0);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_92(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_73(SYSTEM::VDIST(Global_2405072.f_509, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

bool func_92(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;

	iVar3 = UNK_0x8529439EA7EEBA65(vParam0, 1, &uVar5, &uVar4, true, 3f, false);
	if (UNK_0x5DD62183BBF151CD(iVar3))
	{
		UNK_0x8502D8EBA9E78216(iVar3, &vVar0);
		*fParam3 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*fParam4 = UNK_0x755FF954DAE327E1((vParam0.z - vVar0.z));
		return true;
	}
	return false;
}

float func_93(vector3 vParam0, bool bParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;

	fVar0 = 999999.9f;
	if (func_26(bParam3, 0, 1))
	{
		bVar2 = false;
		while (bVar2 < 32)
		{
			if (!bParam3 == bVar2 || iParam4 == 1)
			{
				bVar3 = bVar2;
				if (func_26(bVar3, 0, 1))
				{
					if (UNK_0x08067D4957B73C02(bVar3) != UNK_0x08067D4957B73C02(bParam3) || (UNK_0x08067D4957B73C02(bVar3) == -1 && UNK_0x08067D4957B73C02(bParam3) == -1))
					{
						if (Global_2417897.f_261[bVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417897.f_131[bVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			bVar2++;
		}
	}
	return fVar0;
}

float func_94(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;

	iVar39 = UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (UNK_0xC844350D5D58C99A(uVar6[iVar2]))
		{
			if (!UNK_0x437347B10A200C4B(uVar6[iVar2], 0))
			{
				if (func_95(uVar6[iVar2]))
				{
					vVar3 = { UNK_0x68F4C0EC296D3901(uVar6[iVar2], true) };
					fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405072.f_2925)
	{
		if (Global_969031.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969031.f_267)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_152[iVar2]))
				{
					if (!UNK_0x437347B10A200C4B(Global_969031.f_152[iVar2], 0))
					{
						if (func_95(Global_969031.f_152[iVar2]))
						{
							vVar3 = { UNK_0x68F4C0EC296D3901(Global_969031.f_152[iVar2], true) };
							fVar1 = UNK_0x0EB28750412C3A5A(vParam0, vVar3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

bool func_95(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = UNK_0xD09DF7101876AFB8(bParam0);
	switch (UNK_0x256517DE1B6755D4(bVar0, joaat("PLAYER")))
	{
		case 3:
		case 5:
			return true;
	}
	if (UNK_0x1C43D178459D5730(Global_1574967[UNK_0xD803B885F5E47A62()]))
	{
		switch (UNK_0x256517DE1B6755D4(bVar0, Global_1574967[UNK_0xD803B885F5E47A62()]))
		{
			case 3:
			case 5:
				return true;
		}
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 0)
	{
		iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (UNK_0x1C43D178459D5730(Global_1574677[iVar1]))
			{
				switch (UNK_0x256517DE1B6755D4(bVar0, Global_1574677[iVar1]))
				{
					case 3:
					case 5:
						return true;
				}
			}
		}
	}
	return false;
}

float func_96()
{
	if (func_97())
	{
		if ((UNK_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || UNK_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

bool func_97()
{
	if (Global_2405072.f_45.f_65 && !Global_2405072.f_45.f_301)
	{
		if (!func_87(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	return false;
}

float func_98()
{
	if (func_97())
	{
		if ((UNK_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || UNK_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

bool func_99(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;

	bVar0 = iParam6;
	if (bParam5)
	{
		bVar0 = bParam7;
	}
	if ((((bParam7 > 0f && UNK_0x558ADED8B93EA0F6(vParam0, bParam7)) || (bVar0 > 0f && UNK_0xEA19D5D9230DBB67(vParam0, bVar0))) || ((iParam4 == 1 && bParam8 > 0f) && UNK_0x9DD97B5335E52CB9(vParam0, bParam8, 0))) || ((iParam3 == 1 && bParam9 > 0f) && UNK_0x9DD97B5335E52CB9(vParam0, bParam9, 1)))
	{
		return true;
	}
	return false;
}

bool func_100(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_104(*uParam0, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
		case 1:
			if (func_103(*uParam0, uParam0->f_3, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
		case 2:
			if (func_101(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_101(vector3 vParam0, vector3 vParam3, var uParam6, vector3 vParam7, vector3 vParam10, bool bParam13)
{
	vector3 vVar0[8];
	int iVar25;

	func_102(vParam0, vParam3, uParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar25 /*3*/], vParam7, vParam10, bParam13, 0, true))
		{
			return false;
		}
		iVar25++;
	}
	return true;
}

void func_102(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	if (vParam0.z == vParam3.z)
	{
		vParam3.f_2 = (vParam3.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_17(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(SYSTEM::VMAG(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0.5f)) };
	if (vParam0.z > vParam3.z)
	{
		fVar6 = vParam3.z;
		fVar7 = vParam0.z;
	}
	else
	{
		fVar6 = vParam0.z;
		fVar7 = vParam3.z;
	}
	*(uParam7[0 /*3*/]) = { Vector(fVar6, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[1 /*3*/]) = { Vector(fVar6, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[2 /*3*/]) = { Vector(fVar7, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[3 /*3*/]) = { Vector(fVar7, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[4 /*3*/]) = { Vector(fVar6, vParam3.y, vParam3.x) + vVar3 };
	*(uParam7[5 /*3*/]) = { Vector(fVar6, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[6 /*3*/]) = { Vector(fVar7, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[7 /*3*/]) = { Vector(fVar7, vParam3.y, vParam3.x) + vVar3 };
}

bool func_103(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, bool bParam12)
{
	vector3 vVar0[8];
	int iVar25;

	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6 /*3*/] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7 /*3*/] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar25 /*3*/], vParam6, vParam9, bParam12, 0, true))
		{
			return false;
		}
		iVar25++;
	}
	return true;
}

bool func_104(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, bool bParam10)
{
	vector3 vVar0[4];
	int iVar13;

	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!UNK_0x0399732A9EBC368E(vVar0[iVar13 /*3*/], vParam4, vParam7, bParam10, 0, true))
		{
			return false;
		}
		iVar13++;
	}
	return true;
}

void func_105(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { vParam0 };
	iVar4 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_31(vVar1, &(Global_2410189[iVar4 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410189[iVar4 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410189[iVar4 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_31(vVar1, &(Global_2410189[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410189[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410189[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410189[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

bool func_106(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2405072.f_45.f_55)
	{
		if (UNK_0x31609A585163CBAC(Global_2405072.f_45.f_56))
		{
			if (!UNK_0xD1BF3090E1F8300E(vParam0))
			{
				iVar0 = UNK_0xFBD08BECC9B87937(vParam0);
				if (UNK_0x31609A585163CBAC(iVar0))
				{
					iVar1 = UNK_0x7C3DA83DB15FFBEB(iVar0);
					if (!iVar1 == Global_2405072.f_45.f_57)
					{
						return false;
					}
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
	}
	return true;
}

bool func_107(vector3 vParam0)
{
	switch (Global_2405072.f_2479)
	{
		case 0:
			return func_144(vParam0, Global_2405072.f_2458, Global_2405072.f_2461, 0, 0);
		case 1:
			return func_60(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, 0, 0);
		case 2:
			return UNK_0x0399732A9EBC368E(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, Global_2405072.f_2478, 0, true);
	}
	return false;
}

bool func_108(vector3 vParam0, int iParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;

	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam3)
	{
		fVar0 = ((iParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(iParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return true;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	bVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *(uParam4[iVar1 /*10*/]) };
		vVar5 = { (uParam4[iVar1 /*10*/])->f_3 };
		bVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (UNK_0x0399732A9EBC368E(vParam0, vVar2, vVar5, bVar8, 0, true))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_109(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949 /* Float: 0.1f */, 0, 0);
				*uParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_110(int iParam0)
{
	switch (func_58())
	{
		case 0:
			if (!func_111(iParam0))
			{
				if (Global_1590535[iParam0 /*876*/] == 0)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_111(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196 != 0;
}

bool func_112(bool bParam0)
{
	if (func_42(bParam0, 1, 0))
	{
		if (Global_1590535[bParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_113(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405072.f_2617[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_114(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = UNK_0x79833B02DBD2A244(0.01f, 360f);
			func_19(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 0, fVar4);
			if (func_49(vVar1, &uVar0) || func_48(vVar1))
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return false;
}

bool func_115(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_26(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (UNK_0x0EB28750412C3A5A(func_116(UNK_0xD803B885F5E47A62()), vParam0, 1) <= (bVar2 + bParam3))
				{
					if (UNK_0x8E28E832BEAC3DCE(vParam0, bParam3))
					{
						return true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_26(bVar1, 1, 1))
		{
			if (!func_141(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if ((func_75(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
					{
						bVar2 = bParam6;
						if (bParam9 > 0f)
						{
							if (!UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
								{
									bVar2 = bParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((bParam5 || (bParam5 == 0 && UNK_0x08067D4957B73C02(bVar1) != UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))) || UNK_0x08067D4957B73C02(bVar1) == -1)
							{
								if (UNK_0x0EB28750412C3A5A(func_116(bVar1), vParam0, 1) <= (bVar2 + bParam3))
								{
									if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
									{
										return true;
									}
								}
							}
						}
						else if (UNK_0x08067D4957B73C02(bVar1) != bParam8 || UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0x0EB28750412C3A5A(func_116(bVar1), vParam0, 1) <= (bVar2 + bParam3))
							{
								if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_116(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_117() && Global_1590535[bVar0 /*876*/].f_847) && !func_4(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_79(bParam0);
}

var func_117()
{
	return Global_2450632.f_17;
}

bool func_118(vector3 vParam0, float fParam3, int iParam4, float fParam5, int iParam6)
{
	if (func_120(vParam0, fParam3, iParam4, fParam5, 0) || func_119(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

int func_119(vector3 vParam0, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam3 == bVar0 || iParam4 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_34(vParam0, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949 /* Float: 0.1f */))
					{
						if (func_26(bVar2, 0, 1) && func_26(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_120(vector3 vParam0, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam4 == bVar0 || iParam5 == 1)
		{
			bVar1 = bVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_26(bVar1, 0, 1) && func_26(bParam4, 0, 1))
				{
					if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(bVar1, 0, 1) && func_26(bParam4, 0, 1))
				{
					if (Global_2417897.f_261[bVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_79(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[bVar0])
				{
					if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_26(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_79(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_121(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, int iParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405072.f_3 = 0;
	if (!func_118(vParam0, 0.5f, UNK_0xD803B885F5E47A62(), 0, 0))
	{
		Global_2405072.f_3++;
		if (bParam5)
		{
			if (func_172(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_125(vParam0, iParam12))
				{
					Global_2405072.f_3++;
					if (!func_33(vParam0, 1056964608 /* Float: 0.5f */))
					{
						Global_2405072.f_3++;
						return true;
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_172(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_125(vParam0, iParam12))
				{
					Global_2405072.f_3++;
					if (!func_122(vParam0, bParam3, iParam9, bParam10, 1084227584 /* Float: 5f */))
					{
						Global_2405072.f_3++;
						if (!func_33(vParam0, 1056964608 /* Float: 0.5f */))
						{
							Global_2405072.f_3++;
							return true;
						}
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (func_172(vParam0, 6f, 5f, 5f, 5f, 0, fParam6, bParam7, bParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			if (!func_125(vParam0, iParam12))
			{
				Global_2405072.f_3++;
				if (!func_122(vParam0, bParam3, iParam9, bParam10, iParam11))
				{
					Global_2405072.f_3++;
					if (!func_33(vParam0, 1056964608 /* Float: 0.5f */))
					{
						Global_2405072.f_3++;
						return true;
					}
				}
			}
		}
		else
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
		}
	}
	return false;
}

bool func_122(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!UNK_0xD803B885F5E47A62() == bVar1)
		{
			if ((func_26(bVar1, 1, 1) && func_75(bVar1)) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (!func_124(UNK_0xD803B885F5E47A62(), bVar1, -2, 0))
				{
					if (func_123(func_79(bVar1), vParam0, bParam3, iParam4, bParam5, iParam6))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_123(vector3 vParam0, vector3 vParam3, bool bParam6, float fParam7, bool bParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	bParam6 = (bParam6 * -1f);
	bParam6 = (bParam6 + 360f);
	vVar0.x = SYSTEM::SIN(bParam6);
	vVar0.f_1 = SYSTEM::COS(bParam6);
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.f_2 = vParam3.z;
	vVar3.f_2 = (vVar3.z + fParam9);
	vParam3.f_2 = (vParam3.z + fParam9);
	return UNK_0x0399732A9EBC368E(vParam0, vParam3, vVar3, bParam8, 0, true);
}

bool func_124(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

bool func_125(vector3 vParam0, float fParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((func_26(bVar1, 1, 1) && func_75(bVar1)) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
		{
			if ((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && UNK_0x08067D4957B73C02(bVar1) == -1) && !func_56(UNK_0xD803B885F5E47A62(), 1))
			{
				return false;
			}
			else if ((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && !UNK_0xD803B885F5E47A62() == bVar1) || !func_124(UNK_0xD803B885F5E47A62(), bVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_79(bVar1)) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_126(int iParam0)
{
	if ((Global_2405072.f_486 == 9 || Global_2405072.f_486 == 9) || (Global_2405072.f_486 == 15 && iParam0 == 1))
	{
		return true;
	}
	return false;
}

bool func_127(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || bParam8 == 0)
		{
			if (func_26(bVar1, bParam4, bParam5))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam7 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_75(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam9) && bParam6) && func_81(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								if (UNK_0x0EB28750412C3A5A(func_79(bVar1), vParam0, 1) < fParam3)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_128(vector3 vParam0, bool bParam3, int iParam4, float fParam5)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;

	iVar3 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = iVar0;
			if (func_26(bVar1, 1, 1))
			{
				if ((!func_141(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1)) && bVar1 != UNK_0xD803B885F5E47A62())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!UNK_0x08067D4957B73C02(bVar1) == -1)
						{
							if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (UNK_0x08067D4957B73C02(bVar1) == iVar3)
					{
						if (UNK_0x0EB28750412C3A5A(func_79(bVar1), vParam0, 1) <= (fVar2 + bParam3))
						{
							if (UNK_0xAA451564CBFD3413(bVar1, vParam0, bParam3))
							{
								return true;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_129(bool bParam0)
{
	if (((func_56(bParam0, 1) || func_132(bParam0)) || func_131(bParam0, 0)) || func_130(bParam0))
	{
		return true;
	}
	return false;
}

bool func_130(bool bParam0)
{
	if (!func_26(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_131(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

bool func_132(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

void func_133(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	vector3 vVar17;
	vector3 vVar20;

	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_135(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5999[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_135(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_135(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar17, vParam0) < SYSTEM::VDIST(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_134(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_134(var uParam0, var uParam1, int iParam2)
{
	Global_2412464 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_134(&Global_2412464, uParam1, iParam2 + 1);
	}
}

void func_135(var uParam0, var uParam1, int iParam2)
{
	Global_2412460 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_135(&Global_2412460, uParam1, iParam2 + 1);
	}
}

void func_136(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			if (func_137(Global_2405072.f_2255[iVar0 /*4*/], uParam0))
			{
				iVar4 = Global_2405072.f_2255[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*iParam1) > 0.01f)
				{
					vVar1 = { *iParam1 - Global_2405072.f_2255[iVar0 /*4*/] };
					iVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
				}
				func_72(Global_2405072.f_2255[iVar0 /*4*/], iVar4, uParam0, iParam1, 0, -1);
				Global_2405072.f_2483++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405072.f_2880)
	{
		func_66(&(Global_2405072.f_2483.f_6[0 /*10*/]), &(Global_2405072.f_2483.f_6[1 /*10*/]), &(Global_2405072.f_2483.f_6[2 /*10*/]));
	}
}

bool func_137(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_23(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		case 1:
		case 2:
			return func_23(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		default:
			break;
	}
	return false;
}

void func_138(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;

	func_61(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0.5f);
}

bool func_139()
{
	return Global_1310987.f_4;
}

void func_140(float fParam0, float fParam1)
{
	func_179();
	func_171(fParam0, fParam1);
}

bool func_141(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_142(-1, 0) == 8;
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

int func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_143();
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

int func_143()
{
	return Global_1312745;
}

bool func_144(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
}

void func_145(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_167(uParam0, uParam1, fParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			fParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_146(uParam0, uParam1, fParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_146(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	var uVar34;
	bool bVar35;

	iVar0 = 0;
	if (!SYSTEM::VMAG(fParam2->f_35) > 0f)
	{
		fParam2->f_35 = { *iParam0 };
	}
	if (fParam2->f_15)
	{
		if (func_45(fParam2->f_35, iParam0, &(fParam2->f_38), &(fParam2->f_45), 1, 1))
		{
			fParam2->f_6 = 9999.9f;
			fParam2->f_7 = 9999.9f;
		}
	}
	if (fParam2->f_51)
	{
		fParam2->f_6 = 9999.9f;
	}
	if (fParam2->f_48)
	{
		if (func_166(iParam0, 1))
		{
		}
	}
	if (iParam0->f_2 < -80f)
	{
		fParam2->f_6 = 9999.9f;
		fParam2->f_7 = 9999.9f;
	}
	bVar5 = false;
	bVar10 = true;
	if (fParam2->f_11)
	{
		bVar5 += 2;
		bVar5++;
		bVar10 = false;
	}
	else if (fParam2->f_10 == 0 || (fParam2->f_33 > 0 && fParam2->f_16))
	{
		bVar5++;
		bVar10 = false;
	}
	bVar5 += 4;
	fVar13 = 3f;
	bVar14 = 5f;
	switch (fParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			bVar14 = 5f;
			break;
		case 1:
			fVar13 = 2.75f;
			bVar14 = 7.5f;
			break;
		default:
			fVar13 = 2.5f;
			bVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_39(fParam2->f_34) != 0)
	{
		iVar17 = 3;
		fParam2->f_6 = 9999.9f;
		fParam2->f_7 = 9999.9f;
		fParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = UNK_0x8529439EA7EEBA65(*iParam0, (iVar0 * iVar17), &uVar4, &fVar9, bVar5, fVar13, bVar14);
		if (UNK_0x5DD62183BBF151CD(iVar8))
		{
			UNK_0x8502D8EBA9E78216(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412474.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { vVar1 };
			if (((fParam2->f_10 || fParam2->f_33 > 0) || !UNK_0x5B33870CBB8B6AC1(iVar8)) || UNK_0xD9DC3EBC8290FF92(iVar8))
			{
				UNK_0x968116EE0D84C042(vVar1, &uVar6, &iVar7);
				if (SYSTEM::VDIST(vVar1, fParam2->f_35) > fParam2->f_4)
				{
					if (!func_114(&vVar1, 0))
					{
						if ((fParam2->f_13 || iVar7 & 64 == 0) || fParam2->f_33 == 1)
						{
							if (fParam2->f_14 || iVar7 & 16 == 0)
							{
								if ((iVar7 & 128 == 0 && iVar7 & 256 == 0) && iVar7 & 512 == 0)
								{
									if (!func_165(vVar1))
									{
										vVar1 = { func_161(vVar1, &uVar4, fVar9, fParam2->f_9, *fParam2, bVar10, fParam2->f_11, fParam2->f_34, &bVar11, bVar12, 1, fParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_33(vVar1, 5f))
											{
												if (vVar1.z >= (fParam2->f_35.f_2 - fParam2->f_7) || fParam2->f_33 >= 2)
												{
													if (vVar1.z <= (fParam2->f_35.f_2 + fParam2->f_6) || fParam2->f_33 >= 2)
													{
														if (func_160(vVar1, fParam2))
														{
															if ((fParam2->f_48 && !func_166(&vVar1, 0)) || fParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((fParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, fParam2->f_35, fParam2->f_35.f_1, 0f) < fParam2->f_5) || fParam2->f_5 <= 0f) || fParam2->f_33 >= 2)
																	{
																		if ((fParam2->f_12 && !func_156(vVar1, uVar4, fParam2->f_34, UNK_0xD803B885F5E47A62(), 0, fParam2->f_56)) || !fParam2->f_12)
																		{
																			if (!fParam2->f_15 || !func_45(fParam2->f_35, &vVar1, &(fParam2->f_38), &(fParam2->f_45), 0, 1))
																			{
																				if (fParam2->f_8)
																				{
																					bVar19 = fParam2->f_31;
																					iVar20 = 1;
																					bVar21 = true;
																					bVar22 = fParam2->f_49;
																					if (!fParam2->f_55)
																					{
																						bVar19 = false;
																						iVar20 = 0;
																						bVar21 = false;
																						bVar22 = 1f;
																					}
																					else if (fParam2->f_17)
																					{
																						bVar19 = false;
																						iVar20 = 0;
																						bVar21 = false;
																						if (fParam2->f_33 == 1)
																						{
																							bVar22 = (bVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						iVar20 = 1;
																						bVar21 = true;
																						if (fParam2->f_28)
																						{
																							if (fParam2->f_33 == 1)
																							{
																								bVar22 = (bVar22 * 0.375f);
																							}
																						}
																					}
																					bVar23 = false;
																					if (!func_155(vVar1, uVar4, fParam2->f_34))
																					{
																						if (fParam2->f_3 > 7f)
																						{
																							if (func_172(vVar1, 6f, 1f, 1f, 5f, bVar19, iVar20, bVar21, bVar22, fParam2->f_58, -1, 1, fParam2->f_3, 0, 0, 0, 0))
																							{
																								bVar23 = true;
																							}
																						}
																						else if (func_172(vVar1, 6f, 1f, 1f, 5f, bVar19, iVar20, bVar21, bVar22, fParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(vVar1, uVar4, fParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							bVar23 = true;
																						}
																					}
																					if (bVar23 || fParam2->f_33 >= 2)
																					{
																						if (((fParam2->f_29 || fParam2->f_30) || fParam2->f_52) || fParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (fParam2->f_52)
																							{
																								iVar24 = func_152(vVar1, fParam2->f_54, &fVar25);
																							}
																							if (!fParam2->f_52 || (fParam2->f_52 && iVar24 <= fParam2->f_53))
																							{
																								if (fParam2->f_52)
																								{
																									if (iVar24 < fParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										fParam2->f_53 = iVar24;
																									}
																								}
																								if (fParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0 /*3*/] = { vVar1 };
																										Global_2412474.f_121[0] = uVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, fParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar16 /*3*/], fParam2->f_35))
																												{
																													func_151(vVar1, uVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162 /*3*/] = { vVar1 };
																									Global_2412474.f_121[Global_2412474.f_162] = uVar4;
																									Global_2412474.f_162++;
																									if (func_160(vVar1, fParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*iParam0 = { vVar1 };
																							*uParam1 = uVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*iParam0 = { vVar1 };
																					*uParam1 = uVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!fParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((fParam2->f_29 || fParam2->f_30) || fParam2->f_33 >= 2))
				{
					if (fParam2->f_30)
					{
						*iParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_149(0, fParam2);
						}
						iVar26 = UNK_0x09AC81E49EA267F7(false, Global_2412474.f_162);
						if (fParam2->f_18 && fParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412474[0 /*3*/] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0 /*3*/] = { Global_2412474[iVar26 /*3*/] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26 /*3*/] = { vVar27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*iParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					fParam2->f_33++;
					if (fParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_148(iVar15, *iParam0, &iVar0, &vVar1, &uVar4, fParam2, bVar10, fVar9, bVar5, fVar13, bVar14, bVar11);
						vVar31 = { vVar1 };
						uVar34 = uVar4;
						if (!fParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_45(fParam2->f_35, &vVar31, &(fParam2->f_38), &(fParam2->f_45), bVar35, 1) || func_166(&vVar31, bVar35))
						{
							if (!fParam2->f_50)
							{
								fParam2->f_33 = 0;
								fParam2->f_50 = 1;
								*iParam0 = { vVar31 };
								*uParam1 = uVar34;
								fParam2->f_6 = 9999.9f;
								fParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*iParam0 = { vVar31 };
								*uParam1 = uVar34;
								return 1;
							}
						}
						else
						{
							*iParam0 = { vVar31 };
							*uParam1 = uVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			fParam2->f_33++;
			if (fParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_147(&Global_1312061, iParam0, uParam1, *iParam0);
				if (fParam2->f_11)
				{
					fParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar8;
	}
	return 0;
}

void func_147(var uParam0, int iParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_118(*(uParam0[iVar2 /*4*/]), 5f, UNK_0xD803B885F5E47A62(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*iParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_148(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = UNK_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		UNK_0x4A13F7D4B1E239A0(vParam1, *iParam4, fParam5, bParam6, &fParam9, bParam10, bParam11, bParam12);
		*fParam5 = { func_161(*fParam5, bParam6, fParam9, fParam7->f_9, *fParam7, bParam8, fParam7->f_11, fParam7->f_34, &bParam13, 0, 0, fParam7->f_51) };
		if (!func_165(*fParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_149(int iParam0, float fParam1)
{
	if (!func_160(Global_2412474[iParam0 /*3*/], fParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_150(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_149(iParam0, fParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_149(iParam0 + 1, fParam1);
	}
}

void func_150(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0 /*3*/] = { Global_2412474[iParam0 + 1 /*3*/] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_151(vector3 vParam0, var uParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { Global_2412474[iParam4 /*3*/] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4 /*3*/] = { vParam0 };
	Global_2412474.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_151(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_152(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	float fVar6;
	float fVar7;

	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar5 = iVar0;
		if (func_80(bVar5))
		{
			vVar1 = { func_79(bVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

bool func_153(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam9 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || iParam9 == 0)
		{
			if (func_26(bVar1, bParam5, bParam6))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam8 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_75(bVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam10) && bParam7) && func_81(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								fVar2 = 0.1f;
								if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bVar1), 0))
								{
									bVar3 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bVar1), 0);
									if (UNK_0xC844350D5D58C99A(bVar3) && !UNK_0x437347B10A200C4B(bVar3, 0))
									{
										iVar4 = UNK_0x134B62B726CEC8E6(bVar3);
										vVar5 = { UNK_0x68F4C0EC296D3901(bVar3, false) };
										bVar8 = UNK_0xD9522BA9E27E1349(bVar3);
										if (func_154(vParam0, iParam3, iParam4, vVar5, bVar8, iVar4, 0))
										{
											return true;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_79(bVar1), vParam0, iParam3, iParam4, fVar2))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_154(vector3 vParam0, bool bParam3, bool bParam4, vector3 vParam5, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;

	if (func_34(vParam0, vParam5, bParam8, iParam9, 1036831949 /* Float: 0.1f */))
	{
		return true;
	}
	func_36(bParam4, &vVar14, &vVar17, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar20 = { 0f, vVar17.y, 0f };
	func_20(&vVar20, 0f, 0f, bParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_20(&vVar23, 0f, 0f, bParam3);
	vVar26 = { (UNK_0x755FF954DAE327E1((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_20(&vVar26, 0f, 0f, bParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(vVar1[iVar0 /*3*/], vParam5, bParam8, iParam9, 1036831949 /* Float: 0.1f */))
		{
			return true;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_154(vParam5, bParam8, iParam9, vParam0, bParam3, bParam4, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_155(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;

	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	bVar1 = UNK_0x83C1D4B63BBD91F6(vParam0, 30f, false, iVar0);
	if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
	{
		iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
		vVar3 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
		bVar6 = UNK_0xD9522BA9E27E1349(bVar1);
		if (func_154(vParam0, iParam3, iParam4, vVar3, bVar6, iVar2, 0))
		{
			return true;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	bVar1 = UNK_0x83C1D4B63BBD91F6(vParam0, 30f, false, iVar0);
	if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
	{
		iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
		vVar3 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
		bVar6 = UNK_0xD9522BA9E27E1349(bVar1);
		if (func_154(vParam0, iParam3, iParam4, vVar3, bVar6, iVar2, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_156(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_159(vParam0, iParam3, iParam4, iParam5, iParam6) || func_157(vParam0, iParam3, iParam4, iParam5, iParam7))
	{
		return true;
	}
	return false;
}

int func_157(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_158(vParam0, iParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_154(vParam0, iParam3, iParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_26(bVar2, 0, 1) && func_26(bParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_158(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_41(bParam3, 1008981770 /* Float: 0.01f */);
	fVar1 = func_41(bParam7, 1008981770 /* Float: 0.01f */);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return true;
	}
	return false;
}

int func_159(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar1 = bVar0;
			if (func_26(bVar1, 0, 1) && func_26(bParam5, 0, 1))
			{
				if (Global_2417897.f_261[bVar0])
				{
					if (func_34(Global_2417897.f_131[bVar0 /*3*/], vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
				else if (func_34(func_79(bVar1), vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[bVar0])
			{
				if (func_34(Global_2417897.f_131[bVar0 /*3*/], vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return 1;
				}
			}
			else if (func_26(bVar1, 0, 0))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
				{
					if (func_34(func_79(bVar1), vParam0, bParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_160(vector3 vParam0, float fParam3)
{
	if (fParam3->f_18)
	{
		switch (fParam3->f_26)
		{
			case 0:
				if (func_144(vParam0, fParam3->f_19, fParam3->f_25, 0, 0))
				{
					return true;
				}
				break;
			case 1:
				if (func_60(vParam0, fParam3->f_19, fParam3->f_22, 0, 0))
				{
					return true;
				}
				break;
			case 2:
				if (UNK_0x0399732A9EBC368E(vParam0, fParam3->f_19, fParam3->f_22, fParam3->f_25, 0, true))
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

Vector3 func_161(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, vector3 vParam6, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;

	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_164(vParam0, *bParam3, vParam6))
			{
				*bParam3 = (*bParam3 + 180f);
			}
		}
		return vParam0;
	}
	UNK_0x968116EE0D84C042(vParam0, &uVar3, &iVar4);
	if (iVar4 & 1024 == 0 && !bParam10)
	{
		UNK_0xC05DA9D35DAF88FD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!iVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (UNK_0xAFB8495D36825275(bParam11) && func_163(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (bParam13 && *bParam12)
		{
			*bParam3 = (*bParam3 + 180f);
			if (*bParam3 > 360f)
			{
				*bParam3 = (*bParam3 + -360f);
			}
		}
		if (*bParam3 <= 90f || *bParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			bVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					bVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					bVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						bVar11 = (bVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					bVar11 = (bVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					bVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					bVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						bVar11 = (bVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					bVar11 = (bVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!iVar4 & 64 == 0)
			{
				bVar11 = (bVar11 + (0.95f * fVar10));
			}
			if (!iVar4 & 4 == 0 || !iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + -0.5f);
			}
			if ((!iVar4 & 32 == 0 && iVar4 & 4 == 0) && iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + -1f);
			}
			if (!bParam5 || !iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + (4.2f * -0.5f));
			}
			if (!bParam11 == 0)
			{
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_162(bParam11, 3.5f);
				}
				else
				{
					fVar14 = func_162(bParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					bVar11 = (bVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_164(vParam0, *bParam3, vParam6))
		{
			if (bParam5 || ((iVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*bParam3 = (*bParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (bVar11 < 0f)
	{
		bVar11 = 0f;
	}
	vVar0 = { UNK_0x8A5E176FF719A014(vParam0, *bParam3, bVar11, 0f, 0f) };
	if (bParam5)
	{
		if (UNK_0x2E466A8362971293(vParam0, *bParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!bParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_162(bParam11, 3.5f);
				}
				else
				{
					fVar14 = func_162(bParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_162(bool bParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;

	func_36(bParam0, &fVar0, &fVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

bool func_163(vector3 vParam0)
{
	float fVar0;

	if (UNK_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return true;
		}
	}
	return false;
}

bool func_164(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, bParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_16(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

bool func_165(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_32(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_31(vParam0, &(Global_2411478[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_31(vParam0, &(Global_2411478[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_166(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_144(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (func_60(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (UNK_0x0399732A9EBC368E(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*iParam0 = { func_21(*iParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949 /* Float: 0.1f */, 0) };
			}
		}
	}
	return bVar0;
}

int func_167(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;

	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(fParam2->f_35) > 0f)
		{
			fParam2->f_35 = { *iParam0 };
		}
		if (fParam2->f_15)
		{
			if (func_45(fParam2->f_35, iParam0, &(fParam2->f_38), &(fParam2->f_45), 1, 1))
			{
				fParam2->f_6 = 9999.9f;
				fParam2->f_7 = 9999.9f;
			}
		}
		if (fParam2->f_48)
		{
			if (func_166(iParam0, 1))
			{
				fParam2->f_6 = 9999.9f;
				fParam2->f_7 = 9999.9f;
			}
		}
		if (iParam0->f_2 < -80f)
		{
			fParam2->f_6 = 9999.9f;
			fParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_168(*iParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405072.f_1747[iVar1 /*4*/] };
				uVar5 = Global_2405072.f_1747[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((fParam2->f_57 && SYSTEM::VDIST(vVar2, fParam2->f_35) > fParam2->f_4) || fParam2->f_57 == 0)
					{
						if ((fParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, fParam2->f_35, fParam2->f_35.f_1, 0f) < fParam2->f_5) || fParam2->f_5 <= 0f)
						{
							if ((fParam2->f_12 && !func_156(vVar2, uVar5, fParam2->f_34, UNK_0xD803B885F5E47A62(), 0, fParam2->f_56)) || !fParam2->f_12)
							{
								if (!fParam2->f_15 || !func_45(fParam2->f_35, &vVar2, &(fParam2->f_38), &(fParam2->f_45), 0, 1))
								{
									if (fParam2->f_8)
									{
										bVar7 = fParam2->f_31;
										iVar8 = 1;
										bVar9 = true;
										bVar10 = fParam2->f_49;
										if (!fParam2->f_55)
										{
											bVar7 = false;
											iVar8 = 0;
											bVar9 = false;
											bVar10 = 1f;
										}
										else if (fParam2->f_17)
										{
											bVar7 = false;
											iVar8 = 0;
											bVar9 = false;
											if (fParam2->f_33 == 1)
											{
												bVar10 = (bVar10 * 0.375f);
											}
										}
										else
										{
											iVar8 = 1;
											bVar9 = true;
											if (fParam2->f_28)
											{
												if (fParam2->f_33 == 1)
												{
													bVar10 = (bVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_155(vVar2, uVar5, fParam2->f_34))
										{
											if (fParam2->f_3 > 7f)
											{
												if (func_172(vVar2, 6f, 1f, 1f, 5f, bVar7, iVar8, bVar9, bVar10, fParam2->f_58, -1, 1, fParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_172(vVar2, 6f, 1f, 1f, 5f, bVar7, iVar8, bVar9, bVar10, fParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(vVar2, uVar5, fParam2->f_34, 1, 1, 0, 0, fParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((fParam2->f_29 || fParam2->f_30) || fParam2->f_52)
											{
												fVar13 = 0f;
												if (fParam2->f_52)
												{
													iVar12 = func_152(vVar2, fParam2->f_54, &fVar13);
												}
												if (!fParam2->f_52 || (fParam2->f_52 && iVar12 <= fParam2->f_53))
												{
													if (fParam2->f_52)
													{
														if (iVar12 < fParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															fParam2->f_53 = iVar12;
														}
													}
													if (fParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0 /*3*/] = { vVar2 };
															Global_2412474.f_121[0] = uVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, fParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar6 /*3*/], fParam2->f_35))
																	{
																		func_151(vVar2, uVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162 /*3*/] = { vVar2 };
														Global_2412474.f_121[Global_2412474.f_162] = uVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*iParam0 = { vVar2 };
												*uParam1 = uVar5;
												return 1;
											}
										}
									}
									else
									{
										*iParam0 = { vVar2 };
										*uParam1 = uVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (fParam2->f_30)
			{
				*iParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_149(0, fParam2);
				}
				iVar14 = UNK_0x09AC81E49EA267F7(false, Global_2412474.f_162);
				vVar15 = { Global_2412474[0 /*3*/] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0 /*3*/] = { Global_2412474[iVar14 /*3*/] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14 /*3*/] = { vVar15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*iParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			fParam2->f_33++;
			if (fParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_168(vector3 vParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		iVar1 = func_169(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = iVar1;
		iVar2++;
	}
}

int func_169(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405072.f_1747[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_170(int iParam0)
{
	return iParam0 == 50;
}

void func_171(float fParam0, float fParam1)
{
	UNK_0x8A1BBF3B7D62C45F(fParam0, fParam1, 0.1f);
	Global_2405072.f_2466 = UNK_0x0D0A574C76D769AC();
	Global_2405072.f_2464 = 1;
	Global_2405072.f_2467 = UNK_0x2B6E0A53779D29EA();
}

bool func_172(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (bParam3 > 0f)
	{
		if (UNK_0x558ADED8B93EA0F6(vParam0, bParam3))
		{
			return false;
		}
	}
	if (bParam4 > 0f)
	{
		if (UNK_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), bParam4) || UNK_0xEA19D5D9230DBB67(vParam0, bParam4))
		{
			return false;
		}
	}
	if (bParam5 > 0f)
	{
		if (UNK_0x9DD97B5335E52CB9(vParam0, bParam5, iParam18))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (UNK_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0)
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_127(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_115(vParam0, fParam6, bParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

void func_173()
{
	func_178();
	func_177();
	func_176();
	func_175();
	func_174();
}

void func_174()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408006[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_175()
{
	struct<10> Var0;
	int iVar10;

	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405072.f_2483.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_176()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405072.f_2483.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_177()
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405072.f_2483.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_178()
{
	struct<6> Var0;

	Var0.f_3 = -1;
	Global_2405072.f_2483 = { Var0 };
}

void func_179()
{
	if (Global_2405072.f_2464)
	{
		if (UNK_0x0D0A574C76D769AC() == Global_2405072.f_2466)
		{
			UNK_0xDA46A23FFDBCF876();
		}
		else
		{
			UNK_0xDA46A23FFDBCF876();
		}
		Global_2405072.f_2464 = 0;
	}
}

int func_180(bool bParam0)
{
	if (UNK_0x757EF87A33649210())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_181(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	vector3 vVar62;

	if (iParam6->f_5 > (fParam3 - 20f))
	{
		iParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { vParam0 };
	Var34.f_3 = iParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_9(&Var34, iParam6, &Var0))
	{
		if ((iParam6->f_12 > 0f && iParam6->f_7) && iParam6->f_8)
		{
			vVar62 = { vParam0 - Var0[0 /*3*/] };
			if (vVar62.z > iParam6->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = iParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*bParam5 = Var0.f_16[0];
		return true;
	}
	return false;
}

bool func_182(var uParam0)
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

void func_183(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_184(uParam0, 0, 0);
		}
	}
}

void func_184(var uParam0, bool bParam1, bool bParam2)
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

void func_185()
{
	switch (vLocal_71[UNK_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0:
			func_210();
			func_208();
			if (func_197())
			{
				func_189();
				func_188();
				func_186(35);
				vLocal_71[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_188();
				vLocal_71[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			if (Local_60.f_8 >= 2)
			{
				vLocal_71[UNK_0x57270EE11514DC67() /*3*/].f_2 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_186(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_187() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_187()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_188()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_170))
	{
		UNK_0x142CC44DB769B57E(&iLocal_170);
	}
}

void func_189()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Global_2439138.f_3895, false))
	{
		UNK_0x5D96D8530B3D0904(&(Global_2439138.f_3895), false);
		func_190();
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_2439138.f_3895), true);
	}
}

void func_190()
{
	func_191(1188, -1);
}

void func_191(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_195(iParam0, func_196(iParam1), 0);
	bVar0++;
	if (!func_194(iParam0))
	{
		func_193(iParam0, bVar0, iParam1, 1, 0);
	}
	else
	{
		func_192(iParam0, bVar0, iParam1, 1);
	}
}

void func_192(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_196(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_196(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_196(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_196(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_196(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_196(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_196(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_196(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_196(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_196(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_196(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_196(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_196(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_196(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_196(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_196(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_196(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_196(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_196(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_196(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_196(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_196(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_196(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_196(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_196(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_196(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_196(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_196(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_196(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_196(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_196(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_196(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_196(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_196(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_196(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_196(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_196(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_196(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_196(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_196(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_196(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_196(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_196(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_196(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_196(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_196(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_196(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_196(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_196(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_196(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_196(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_196(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_196(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_196(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

void func_193(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_196(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

bool func_194(int iParam0)
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

int func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_196(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_143();
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

bool func_197()
{
	struct<14> Var0;

	if (UNK_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (UNK_0xE5DBF9B6126856CA(Local_60.f_2))
		{
			if (UNK_0x50B5F6F3C29E9380(UNK_0x09AD4CE7DA179533(Local_60.f_2), UNK_0x16F2683693E537C9()) && func_207(Local_60.f_2))
			{
				func_206(&(Local_60.f_2));
				if (UNK_0xE4EDC4B0E92C078B(iLocal_170))
				{
					UNK_0x142CC44DB769B57E(&iLocal_170);
				}
				if (!func_205(1))
				{
					func_200("ABB_BOXCT");
				}
				Var0.f_2 = -1894913652;
				Var0.f_10 = UNK_0xD803B885F5E47A62();
				Var0.f_3 = uLocal_169;
				func_198(Var0, func_199(1));
				UNK_0x5D96D8530B3D0904(&(vLocal_71[UNK_0x57270EE11514DC67() /*3*/].f_1), false);
				return true;
			}
		}
	}
	return false;
}

void func_198(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = UNK_0xD803B885F5E47A62();
	if (!bParam14 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Param0, 14, bParam14);
	}
}

bool func_199(bool bParam0)
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
			if (func_26(bVar2, 0, 0))
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

int func_200(bool bParam0)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_201(0, bParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_201(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_204() || !UNK_0xA14BB9332558B949()) || !func_141(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_202(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = iParam4;
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

int func_202(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_203(iVar0);
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

void func_203(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_204()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

bool func_205(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1626726 > 0;
		case 2:
			return Global_1626726.f_1 > 0;
		case 3:
			return Global_1626726.f_2 > 0;
		case 4:
			return Global_1626726.f_4 > 0;
		case 5:
			return Global_1626726.f_3 > 0;
		default:
			break;
	}
	return false;
}

void func_206(var uParam0)
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

bool func_207(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		UNK_0x8D30F6387EE75385(iParam0);
		return UNK_0x526BC32A660C89E6(iParam0);
	}
	return false;
}

void func_208()
{
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_170))
	{
		if (UNK_0xE9F78D191AD5EDBA(Local_60.f_2))
		{
			iLocal_170 = UNK_0x5C3B41825F6AC5A0(UNK_0x09AD4CE7DA179533(Local_60.f_2));
			if (func_209())
			{
				UNK_0x516E63E474722206(iLocal_170, 0.85f);
			}
			else
			{
				UNK_0x516E63E474722206(iLocal_170, 1.2f);
			}
			UNK_0xBC8E0A7390523199(iLocal_170, 403);
			UNK_0x61755AC17D8F538E(iLocal_170, 2);
			UNK_0xDC5B2F9D0CCE3A10(iLocal_170, "ABB_BLIPN");
		}
	}
}

bool func_209()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

void func_210()
{
	bool bVar0;

	if (!UNK_0xFEBC1E4EC9E001F0())
	{
		bVar0 = func_195(1190, -1, 0);
		if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 14))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 14);
			func_193(1190, bVar0, -1, 1, 0);
		}
	}
}

int func_211()
{
	return Local_60;
}

bool func_212()
{
	UNK_0x523BCC9DC80CD82F(joaat("PROP_DRUG_PACKAGE_02"));
	if (UNK_0xB87F6CF6E5628C67(joaat("PROP_DRUG_PACKAGE_02")))
	{
		return true;
	}
	return false;
}

int func_213(int iParam0)
{
	return vLocal_71[iParam0 /*3*/];
}

bool func_214()
{
	var uVar0;

	func_221(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_220())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_219())
	{
		return true;
	}
	if (func_218(159))
	{
		if (!func_217())
		{
			return true;
		}
	}
	if (func_218(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_215() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_215()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_215()
{
	switch (func_58())
	{
		case 0:
			return func_216();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_216()
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

bool func_217()
{
	return Global_2450632.f_598;
}

bool func_218(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_219()
{
	return Global_2460680;
}

bool func_220()
{
	return Global_2450632.f_593;
}

void func_221(var uParam0)
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
					func_222(iVar0);
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

void func_222(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_26(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_223(bVar4, &bVar5))
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

bool func_223(bool bParam0, bool bParam1)
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

void func_224()
{
	SYSTEM::WAIT(0);
}

int func_225(int iParam0)
{
	return Global_1590535[iParam0 /*876*/];
}

void func_226()
{
	Global_1388162 = -1;
	if (UNK_0xE4EDC4B0E92C078B(iLocal_170))
	{
		UNK_0x142CC44DB769B57E(&iLocal_170);
	}
	func_229();
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			if (UNK_0xE9F78D191AD5EDBA(Local_60.f_2) && UNK_0x526BC32A660C89E6(Local_60.f_2))
			{
				func_206(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_60.f_1, 8))
	{
		func_228();
	}
	func_227();
}

void func_227()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_228()
{
	Global_2537071.f_859 = 0;
	Global_2537071.f_859.f_1 = { 0f, 0f, 0f };
	Global_2537071.f_859.f_4 = 0f;
	Global_2537071.f_859.f_8 = 0;
	UNK_0x0674E58A79778E99(&(Global_2537071.f_859.f_7), false);
}

void func_229()
{
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_168, 4))
	{
		UNK_0x5BF70D3A674F3E1C(UNK_0xD803B885F5E47A62(), 0.72f);
		UNK_0xF7599E37AEBF26E7(UNK_0xD803B885F5E47A62(), 1f, 1);
		UNK_0x7EADCF510F11328E(UNK_0xD803B885F5E47A62(), 1f);
		UNK_0xD4455D6023C608A8(UNK_0xD803B885F5E47A62(), 1f);
		func_230(1);
		UNK_0x0674E58A79778E99(&bLocal_168, 5);
		UNK_0x0674E58A79778E99(&bLocal_168, 7);
		UNK_0x0674E58A79778E99(&bLocal_168, 4);
	}
}

void func_230(int iParam0)
{
	bool bVar0;

	bVar0 = func_231(iParam0, 0);
	UNK_0x9A1335ECD7BD117F(bVar0);
}

char* func_231(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

bool func_232(struct<21> Param0)
{
	func_236(func_237(Param0), Param0);
	UNK_0x3A4967AE7C71F999(1);
	func_234(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_60, 11);
	UNK_0x35B62793EAE9ADDF(&vLocal_71, 97);
	if (!func_233())
	{
		return false;
	}
	UNK_0x256D93AFAE851A7A(0);
	if (UNK_0xBFF81ED3B99522C7())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1388162 = Local_60.f_7;
		Local_60.f_3 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
		if (!func_4(Global_2537071.f_859.f_1))
		{
			UNK_0x5D96D8530B3D0904(&(Local_60.f_1), 8);
		}
	}
	iLocal_173 = UNK_0x09BE1E6DF7B80B43();
	vLocal_71[UNK_0x57270EE11514DC67() /*3*/] = 0;
	return true;
}

bool func_233()
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
		if (func_220())
		{
			return false;
		}
		if (func_218(157))
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

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_227();
			}
			else
			{
				return 0;
			}
		}
		if (!func_235())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_227();
					}
					else
					{
						return 0;
					}
				}
				if (func_220())
				{
					if (!bParam2)
					{
						func_227();
					}
					else
					{
						return 0;
					}
				}
				if (func_218(157))
				{
					if (!bParam2)
					{
						func_227();
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
					func_227();
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
				func_227();
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
			func_227();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_235()
{
	return Global_1312854;
}

void func_236(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_227();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_237(int iParam0)
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

