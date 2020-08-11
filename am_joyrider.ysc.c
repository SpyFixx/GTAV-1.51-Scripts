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
	struct<11> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_72 = 0;
	vector3 vLocal_73[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_170 = false;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = false;
	int iLocal_178 = 0;
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
	iLocal_175 = 20;
	if (UNK_0x8CD06866876216F2() && func_71(UNK_0xD803B885F5E47A62(), 0, 1))
	{
		func_64(ScriptParam_0);
	}
	else
	{
		func_60();
	}
	while (true)
	{
		func_59();
		if (func_48() || func_44(9))
		{
			func_60();
		}
		if (UNK_0x09BE1E6DF7B80B43())
		{
			func_60();
		}
		switch (func_43(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_42() == 1)
				{
					func_41();
					vLocal_73[UNK_0x57270EE11514DC67() /*3*/] = 1;
				}
				else if (func_42() == 4)
				{
					vLocal_73[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			case 1:
				if (func_42() == 1)
				{
					func_39();
				}
				else if (func_42() == 4)
				{
					vLocal_73[UNK_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			case 3:
				func_37(&(Local_61.f_10));
				if (func_36(&(Local_61.f_10)))
				{
					vLocal_73[UNK_0x57270EE11514DC67() /*3*/] = 4;
				}
				break;
			case 2:
				vLocal_73[UNK_0x57270EE11514DC67() /*3*/] = 4;
			case 4:
				func_60();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_42())
			{
				case 0:
					if (func_35())
					{
						if (func_8())
						{
							Local_61 = 1;
						}
					}
					break;
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_61 = 4;
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
	if (Local_61.f_9 == 0)
	{
		if (!func_4(Local_61.f_2))
		{
			return true;
		}
		else if (func_3(Local_61.f_3))
		{
			return true;
		}
		else
		{
			if (iLocal_178 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_61.f_1, false))
				{
					return true;
				}
			}
			if (!UNK_0xC42A92762C58E1B9(UNK_0x1B50683925F00106(Local_61.f_3), UNK_0xB177666FAB6F4417(Local_61.f_2), 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_3(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(iParam0));
	}
	return true;
}

bool func_4(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_5(UNK_0xB177666FAB6F4417(iParam0));
	}
	return false;
}

bool func_5(bool bParam0)
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

void func_6()
{
	switch (Local_61.f_9)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bLocal_177 == 0)
	{
		iLocal_178 = 0;
		UNK_0x5D96D8530B3D0904(&(Local_61.f_1), false);
	}
	if (func_4(Local_61.f_2))
	{
		iVar0 = 1;
	}
	if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bLocal_177)))
	{
		bVar1 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bLocal_177));
		bVar2 = UNK_0x9539D44F3E4492F6(bVar1);
		if (func_71(bVar1, 1, 1))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_61.f_1, false))
			{
				if (iVar0 == 1)
				{
					if (UNK_0x12DE711B1C681E9E(bVar2, UNK_0xB177666FAB6F4417(Local_61.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						UNK_0x0674E58A79778E99(&(Local_61.f_1), false);
					}
				}
				else
				{
					UNK_0x0674E58A79778E99(&(Local_61.f_1), false);
				}
			}
		}
	}
	bLocal_177++;
	if (bLocal_177 == UNK_0x54EABC0DD106045B())
	{
		bLocal_177 = false;
		iLocal_178 = 1;
	}
}

bool func_8()
{
	if (UNK_0x2358623ECCDB11B3(true, 1, 0, 0))
	{
		if (func_34(Local_61.f_4) && func_34(Local_61.f_5))
		{
			if (func_12() && func_9())
			{
				return true;
			}
		}
	}
	return false;
}

int func_9()
{
	int iVar0;

	if ((!UNK_0xE9F78D191AD5EDBA(Local_61.f_3) && func_34(Local_61.f_5)) && UNK_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		if (func_4(Local_61.f_2))
		{
			if (func_11(&(Local_61.f_3), Local_61.f_2, 22, Local_61.f_5, -1, 1, 1, 1))
			{
				UNK_0xC743BD39A24D0583(UNK_0x1B50683925F00106(Local_61.f_3), 0);
				if (func_10())
				{
					UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_61.f_3), Global_1575002);
				}
				else
				{
					UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_61.f_3), Global_1575005);
				}
				UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_61.f_3), true);
				if (func_10())
				{
					iVar0 = UNK_0x09AC81E49EA267F7(false, 10);
					if (iVar0 < 5)
					{
						UNK_0x8B25B8DC6068152D(UNK_0x1B50683925F00106(Local_61.f_3), joaat("WEAPON_PISTOL"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						UNK_0x8B25B8DC6068152D(UNK_0x1B50683925F00106(Local_61.f_3), joaat("WEAPON_MICROSMG"), 25000, func_10());
					}
					else
					{
						UNK_0x8B25B8DC6068152D(UNK_0x1B50683925F00106(Local_61.f_3), joaat("WEAPON_PUMPSHOTGUN"), 25000, func_10());
					}
				}
				iVar0 = UNK_0x09AC81E49EA267F7(false, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					UNK_0x083F03A847B640E9(UNK_0x1B50683925F00106(Local_61.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					UNK_0x083F03A847B640E9(UNK_0x1B50683925F00106(Local_61.f_3), 2);
				}
				else
				{
					UNK_0x083F03A847B640E9(UNK_0x1B50683925F00106(Local_61.f_3), 1);
				}
				iVar0 = UNK_0x09AC81E49EA267F7(false, 4);
				if (iVar0 == 0)
				{
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_61.f_3), 5, true);
				}
				else if (iVar0 == 1)
				{
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_61.f_3), 17, true);
				}
				else if (iVar0 == 2)
				{
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_61.f_3), 13, true);
				}
				if (func_10())
				{
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_61.f_3), 20, true);
				}
				if (func_10())
				{
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_61.f_3), 2, true);
				}
				iVar0 = UNK_0x09AC81E49EA267F7(false, 4);
				if (iVar0 == 0)
				{
					UNK_0x3CC33E4E9CE523F4(UNK_0x1B50683925F00106(Local_61.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					UNK_0x3CC33E4E9CE523F4(UNK_0x1B50683925F00106(Local_61.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					UNK_0x3CC33E4E9CE523F4(UNK_0x1B50683925F00106(Local_61.f_3), 3);
				}
				UNK_0x5B318B6EBD0A7F3E(UNK_0x1B50683925F00106(Local_61.f_3), 1);
				UNK_0x579B0182884711E5(UNK_0x1B50683925F00106(Local_61.f_3), 1);
				UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_61.f_3), 29, true);
				UNK_0x545E1397F38D9D5A(UNK_0x1B50683925F00106(Local_61.f_3), 3);
				UNK_0xD458AC1C1D29C3B4(UNK_0x1B50683925F00106(Local_61.f_3), SYSTEM::ROUND((200f * Global_262145.f_154)), false);
				UNK_0x0218D9089D75EFEE(UNK_0xB177666FAB6F4417(Local_61.f_2), 1);
				UNK_0xDC2C59BD0989562B(UNK_0xB177666FAB6F4417(Local_61.f_2), 1);
				func_41();
				UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_61.f_3), iLocal_171);
				UNK_0x71199B01895C6202(Local_61.f_5);
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(Local_61.f_3))
	{
		return 0;
	}
	return 1;
}

bool func_10()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_11(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_12()
{
	vector3 vVar0;
	var uVar3;

	if (!UNK_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		if (func_34(Local_61.f_4))
		{
			if (func_16(&vVar0, &uVar3))
			{
				if (func_13(&(Local_61.f_2), Local_61.f_4, vVar0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					UNK_0x56FDC9ADE35F7DB0(UNK_0xB177666FAB6F4417(Local_61.f_2), true, true, 0);
					UNK_0x71A357CDEB34742E(UNK_0xB177666FAB6F4417(Local_61.f_2), 1);
					UNK_0x750A9DEB80D6992C(UNK_0xB177666FAB6F4417(Local_61.f_2), true);
					UNK_0x2E1E5367A885F9B7(UNK_0xB177666FAB6F4417(Local_61.f_2), "JOYRIDER_GROUP", 0f);
					UNK_0x71199B01895C6202(Local_61.f_4);
				}
			}
		}
	}
	if (!UNK_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		return 0;
	}
	return 1;
}

bool func_13(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			func_14(vParam2, bParam5, bParam1, bVar1);
			return true;
		}
	}
	return false;
}

void func_14(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (func_15(UNK_0xD803B885F5E47A62(), vParam0, bParam4) > -1)
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

int func_15(int iParam0, vector3 vParam1, bool bParam4)
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

bool func_16(float fParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (!bVar0)
	{
		if (UNK_0x8F91E660145F47FF(&(Local_61.f_6), fParam0, &uVar2, 0f, 180f, 40f, false, 1, 1))
		{
			UNK_0x4A13F7D4B1E239A0(*fParam0, 1, fParam0, bParam1, &iVar1, 4, 1077936128, false);
			if (iVar1 >= 1 || UNK_0x20EED0F7126363D7(*fParam0) == joaat("CITY"))
			{
				if (UNK_0x0EB28750412C3A5A(-1367.557f, -3220.598f, 12.9448f, Local_61.f_6, 1) >= 600f && UNK_0x0EB28750412C3A5A(750f, -3200f, 6f, Local_61.f_6, 1) >= 700f)
				{
					if (UNK_0x0EB28750412C3A5A(func_33(UNK_0xD803B885F5E47A62()), *fParam0, 1) <= (250f - 50f))
					{
						if (iLocal_176 <= 5)
						{
							if (func_17(*fParam0, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_61 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_175 += 4;
		if (iLocal_175 >= 80)
		{
			iLocal_175 = 20;
			iLocal_176++;
		}
	}
	return bVar0;
}

bool func_17(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
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
		if (func_26(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_18(vParam0, fParam6, iParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

bool func_18(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_71(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (UNK_0x0EB28750412C3A5A(func_23(UNK_0xD803B885F5E47A62()), vParam0, 1) <= (bVar2 + bParam3))
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
		if (func_71(bVar1, 1, 1))
		{
			if (!func_20(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if ((func_19(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
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
								if (UNK_0x0EB28750412C3A5A(func_23(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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
							if (UNK_0x0EB28750412C3A5A(func_23(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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

bool func_19(bool bParam0)
{
	if (UNK_0x62FA787159F264AC(UNK_0x9539D44F3E4492F6(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

bool func_20(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_21(-1, 0) == 8;
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

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1312745;
}

Vector3 func_23(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_25() && Global_1590535[bVar0 /*876*/].f_847) && !func_24(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_33(bParam0);
}

bool func_24(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_25()
{
	return Global_2450632.f_17;
}

bool func_26(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || bParam8 == 0)
		{
			if (func_71(bVar1, bParam4, bParam5))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam7 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_19(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam9) && bParam6) && func_27(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								if (UNK_0x0EB28750412C3A5A(func_33(bVar1), vParam0, 1) < fParam3)
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

bool func_27(bool bParam0)
{
	if (func_32(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_31(bParam0) };
	if (UNK_0x04A104F429E6CBB0(&Global_2513218))
	{
		return true;
	}
	if (func_28(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_28(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_30(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_30(bParam1))
		{
			return true;
		}
	}
	return false;
}

int func_29()
{
	return -1;
}

int func_30(bool bParam0)
{
	if (bParam0 != func_29())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_29();
}

struct<13> func_31(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_32(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_31(bParam0) };
		Global_2513231 = { func_31(bParam1) };
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

Vector3 func_33(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_34(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

bool func_35()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_170, true))
	{
		if (UNK_0x4490D017C57827E9(func_33(UNK_0xD803B885F5E47A62()), iLocal_174, &(Local_61.f_6), 4, 3f, 0f))
		{
			UNK_0x5D96D8530B3D0904(&bLocal_170, true);
		}
		else
		{
			iLocal_174++;
		}
	}
	return UNK_0xEAE0D21A50E6C7F4(bLocal_170, true);
}

bool func_36(var uParam0)
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

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_38(uParam0, 0, 0);
		}
	}
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

void func_39()
{
	switch (vLocal_73[UNK_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0:
			func_41();
			func_40();
			if (Local_61.f_9 > 0)
			{
				vLocal_73[UNK_0x57270EE11514DC67() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			func_60();
			break;
	}
}

void func_40()
{
	int iVar0;
	float fVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(vLocal_73[UNK_0x57270EE11514DC67() /*3*/].f_1, false))
	{
		if (func_4(Local_61.f_2) && !func_3(Local_61.f_3))
		{
			iVar0 = UNK_0x7F6DC62EA9922664(UNK_0xB177666FAB6F4417(Local_61.f_2));
			fVar1 = UNK_0x9C66D99E63E8E24C(UNK_0xB177666FAB6F4417(Local_61.f_2));
			if (iVar0 < 200)
			{
				func_41();
				UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_61.f_3), iLocal_173);
				UNK_0x5D96D8530B3D0904(&(vLocal_73[UNK_0x57270EE11514DC67() /*3*/].f_1), false);
			}
			else if (fVar1 < 3f)
			{
				if ((((UNK_0x377BE9A1BF38C7CE(UNK_0xB177666FAB6F4417(Local_61.f_2)) || UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_61.f_2), 3, 10000)) || UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_61.f_2), 1, 10000)) || UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_61.f_2), 0, 10000)) || UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_61.f_2), 2, 10000))
				{
					func_41();
					UNK_0x78ADC381772E3D54(UNK_0x1B50683925F00106(Local_61.f_3), iLocal_172);
					UNK_0x5D96D8530B3D0904(&(vLocal_73[UNK_0x57270EE11514DC67() /*3*/].f_1), false);
				}
			}
		}
	}
}

void func_41()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_170, false))
	{
		if (func_4(Local_61.f_2))
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_171);
			UNK_0x132B85BCE016BCA0(false, UNK_0xB177666FAB6F4417(Local_61.f_2), Local_61.f_6, 14, 30f, 786468, 15f, 1f, 0);
			UNK_0xE072601B4380E9DF(false, UNK_0xB177666FAB6F4417(Local_61.f_2), 30f, 786468);
			UNK_0x75ABDC5F81978924(iLocal_171);
			UNK_0xDD353D0E9C789D0E(&iLocal_172);
			UNK_0x75CDA8644CD3B5F5(false, 0, 1);
			UNK_0x75ABDC5F81978924(iLocal_172);
			UNK_0xDD353D0E9C789D0E(&iLocal_173);
			UNK_0x132B85BCE016BCA0(false, UNK_0xB177666FAB6F4417(Local_61.f_2), Local_61.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			UNK_0x75CDA8644CD3B5F5(false, 0, 1);
			UNK_0x75ABDC5F81978924(iLocal_173);
			UNK_0x5D96D8530B3D0904(&bLocal_170, false);
		}
	}
}

int func_42()
{
	return Local_61;
}

int func_43(int iParam0)
{
	return vLocal_73[iParam0 /*3*/];
}

bool func_44(int iParam0)
{
	return !func_45(iParam0);
}

bool func_45(int iParam0)
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
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
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
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
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
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 15:
			if (func_46(4))
			{
				return false;
			}
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 17:
			if (func_46(4))
			{
				return false;
			}
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 16:
			if (func_46(4))
			{
				return false;
			}
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
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
			if (func_46(4))
			{
				return false;
			}
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 19:
			if (func_46(4))
			{
				return false;
			}
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			break;
		case 20:
			if (func_46(4))
			{
				return false;
			}
			if (func_47(UNK_0xD803B885F5E47A62(), 7))
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

bool func_46(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_71(UNK_0x117658E336116132(bVar0), 0, 1))
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

bool func_47(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, bParam1);
}

bool func_48()
{
	var uVar0;

	func_56(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_55())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_54())
	{
		return true;
	}
	if (func_53(159))
	{
		if (!func_52())
		{
			return true;
		}
	}
	if (func_53(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_49() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_49()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_49()
{
	switch (func_51())
	{
		case 0:
			return func_50();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_50()
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

int func_51()
{
	return Global_30768;
}

bool func_52()
{
	return Global_2450632.f_598;
}

bool func_53(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_54()
{
	return Global_2460680;
}

bool func_55()
{
	return Global_2450632.f_593;
}

void func_56(var uParam0)
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
					func_57(iVar0);
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

void func_57(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_71(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_58(bVar4, &bVar5))
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

bool func_58(bool bParam0, bool bParam1)
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

void func_59()
{
	SYSTEM::WAIT(0);
}

void func_60()
{
	func_63();
	if (func_42() == 4 && Local_61.f_4 != 0)
	{
		UNK_0xAB8E2DDC7AF955E0(Local_61.f_4, false);
	}
	if (func_4(Local_61.f_2))
	{
		UNK_0x06FF977AA95DCCE3(UNK_0xB177666FAB6F4417(Local_61.f_2), 0f);
	}
	UNK_0x8910D3D58E0132B8("JOYRIDER_RADIO_SCENE");
	func_62(9, 0);
	func_61();
}

void func_61()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_62(bool bParam0, bool bParam1)
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

void func_63()
{
	UNK_0xF82EA857DA10E0CD(&iLocal_171);
}

void func_64(struct<21> Param0)
{
	int iVar0;

	func_69(func_70(Param0), Param0);
	UNK_0x0BEC04ECA8485A3A(1);
	UNK_0x28E5F00F131890E3(1);
	func_67(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_61, 12);
	UNK_0x35B62793EAE9ADDF(&vLocal_73, 97);
	if (!func_66())
	{
		func_60();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x256D93AFAE851A7A(0);
		if (UNK_0xBFF81ED3B99522C7())
		{
			if (Global_2537071.f_4386 == 0)
			{
				iVar0 = UNK_0x09AC81E49EA267F7(false, 7);
				switch (iVar0)
				{
					case 0:
						Local_61.f_4 = joaat("STINGERGT");
						break;
					case 1:
						Local_61.f_4 = joaat("ENTITYXF");
						break;
					case 2:
						Local_61.f_4 = joaat("FELTZER2");
						break;
					case 3:
						Local_61.f_4 = joaat("MONROE");
						break;
					case 4:
						Local_61.f_4 = joaat("COGCABRIO");
						break;
					case 5:
						Local_61.f_4 = joaat("SUPERD");
						break;
					case 6:
						Local_61.f_4 = joaat("INFERNUS");
						break;
				}
			}
			else
			{
				Local_61.f_4 = Global_2537071.f_4386;
				Global_2537071.f_4386 = 0;
			}
			UNK_0xAB8E2DDC7AF955E0(Local_61.f_4, true);
			Local_61.f_5 = func_65(1);
		}
		func_62(9, 1);
		UNK_0x8BC9595FD2792B5D("JOYRIDER_RADIO_SCENE");
		vLocal_73[UNK_0x57270EE11514DC67() /*3*/] = 0;
	}
	else
	{
		func_60();
	}
}

int func_65(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("A_M_M_EASTSA_01");
			case 1:
				return joaat("A_M_M_BEVHILLS_01");
			case 2:
				return joaat("A_M_M_BEVHILLS_02");
			case 3:
				return joaat("A_M_M_BUSINESS_01");
			case 4:
				return joaat("A_M_M_MALIBU_01");
			case 5:
				return joaat("A_M_M_EASTSA_02");
			case 6:
				return joaat("A_M_M_HILLBILLY_01");
			case 7:
				return joaat("A_M_M_HILLBILLY_02");
			case 8:
				return joaat("A_M_M_OG_BOSS_01");
			case 9:
				return joaat("A_M_M_STLAT_02");
			case 10:
				return joaat("A_M_Y_BEACHVESP_01");
			case 11:
				return joaat("A_M_Y_EPSILON_01");
			case 12:
				return joaat("A_M_M_PROLHOST_01");
			case 13:
				return joaat("A_M_M_SALTON_01");
			case 14:
				return joaat("A_M_M_SKATER_01");
			case 15:
				return joaat("A_M_Y_SKATER_02");
			case 16:
				return joaat("A_M_Y_METHHEAD_01");
			case 17:
				return joaat("A_M_M_SKIDROW_01");
			case 18:
				return joaat("A_M_M_SOUCENT_01");
			case 19:
				return joaat("A_M_M_SOUCENT_02");
			case 20:
				return joaat("A_M_M_SOUCENT_03");
			case 21:
				return joaat("A_M_Y_GENSTREET_02");
			case 22:
				return joaat("A_M_Y_ROADCYC_01");
			case 23:
				return joaat("A_M_M_AFRIAMER_01");
			case 24:
				return joaat("A_M_M_BEACH_01");
			case 25:
				return joaat("A_M_M_FARMER_01");
			case 26:
				return joaat("A_M_M_FATLATIN_01");
			case 27:
				return joaat("A_M_M_GENFAT_01");
			case 28:
				return joaat("A_M_M_INDIAN_01");
			case 29:
				return joaat("A_M_M_KTOWN_01");
			case 30:
				return joaat("A_M_M_SOCENLAT_01");
			case 31:
				return joaat("A_M_M_MEXLABOR_01");
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("A_F_M_BEVHILLS_01");
			case 1:
				return joaat("A_F_M_BEVHILLS_02");
			case 2:
				return joaat("A_F_M_BEACH_01");
			case 3:
				return joaat("A_F_M_KTOWN_02");
			case 4:
				return joaat("A_F_M_PROLHOST_01");
			case 5:
				return joaat("A_F_M_BODYBUILD_01");
			case 6:
				return joaat("A_F_M_BUSINESS_02");
			case 7:
				return joaat("A_F_M_DOWNTOWN_01");
			case 8:
				return joaat("A_F_M_EASTSA_01");
			case 9:
				return joaat("A_F_M_EASTSA_02");
			case 10:
				return joaat("A_F_M_FATWHITE_01");
			case 11:
				return joaat("A_F_M_KTOWN_01");
			case 12:
				return joaat("A_F_M_KTOWN_02");
			case 13:
				return joaat("A_F_M_SALTON_01");
			case 14:
				return joaat("A_F_M_SKIDROW_01");
			case 15:
				return joaat("A_F_M_SOUCENT_01");
			case 16:
				return joaat("A_F_M_SOUCENT_02");
			case 17:
				return joaat("A_F_M_SOUCENTMC_01");
			case 18:
				return joaat("A_F_M_TRAMP_01");
			case 19:
				return joaat("A_F_M_TRAMPBEAC_01");
			case 20:
				return joaat("A_F_Y_YOGA_01");
			case 21:
				return joaat("A_F_Y_VINEWOOD_02");
			case 22:
				return joaat("A_F_Y_VINEWOOD_03");
			case 23:
				return joaat("A_F_Y_VINEWOOD_04");
			case 24:
				return joaat("A_F_Y_TENNIS_01");
			case 25:
				return joaat("A_F_Y_TOURIST_01");
			case 26:
				return joaat("A_F_Y_HIPSTER_01");
			case 27:
				return joaat("A_F_Y_GOLFER_01");
			case 28:
				return joaat("A_F_Y_FITNESS_01");
			case 29:
				return joaat("A_F_Y_SCDRESSY_01");
			case 30:
				return joaat("A_F_Y_EPSILON_01");
			case 31:
				return joaat("A_F_Y_HIKER_01");
			default:
				break;
		}
	}
	return joaat("A_F_M_BEVHILLS_01");
}

bool func_66()
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
		if (func_55())
		{
			return false;
		}
		if (func_53(157))
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

int func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_61();
			}
			else
			{
				return 0;
			}
		}
		if (!func_68())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0;
					}
				}
				if (func_55())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0;
					}
				}
				if (func_53(157))
				{
					if (!bParam2)
					{
						func_61();
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
					func_61();
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
				func_61();
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
			func_61();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_68()
{
	return Global_1312854;
}

void func_69(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_61();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_70(int iParam0)
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

bool func_71(bool bParam0, bool bParam1, bool bParam2)
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

