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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = UNK_0xB01F55A0FD1CFD49("mission_complete");
				iLocal_45 = 1;
				break;
			case 1:
				if (UNK_0x83D8570832F172A7(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			case 2:
				UNK_0x6A04A7E7A3017382(iLocal_46, "SET_MISSION_TITLE", ScriptParam_0, ScriptParam_0.f_1, 0, 0, 0);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (ScriptParam_0.f_5.f_1 != -1f && !UNK_0x2EBF5002C6B6A06C(ScriptParam_0.f_5.f_2))
				{
					UNK_0x4728AD8A6BE3AED3(iLocal_46, "SET_TOTAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				UNK_0x1FF2BF40EEFA5ABC(iLocal_46, "SET_MEDAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x1FF2BF40EEFA5ABC(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					UNK_0x7E60C62A7CE58FC8(iLocal_46, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(ScriptParam_0.f_9[iVar0 /*7*/]);
					UNK_0x3CAEA85DA607305E(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						UNK_0x3CAEA85DA607305E(2);
						UNK_0x3CAEA85DA607305E(false);
						UNK_0x3CAEA85DA607305E(false);
						UNK_0x7ACC3006A87F8B39("STRING");
						UNK_0x164431059FF80580(SYSTEM::FLOOR((ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						UNK_0x779B34565F4D71B1();
						if (!UNK_0x2EBF5002C6B6A06C(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!UNK_0x2EBF5002C6B6A06C(ScriptParam_0.f_9[iVar0 /*7*/].f_5) && !UNK_0x2EBF5002C6B6A06C(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							UNK_0x7ACC3006A87F8B39(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
							UNK_0xD06AC7C87A34A6AD(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
							UNK_0x779B34565F4D71B1();
						}
					}
					else
					{
						UNK_0x3CAEA85DA607305E(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							UNK_0x7C19E5E4784BD7CF(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							UNK_0x7ACC3006A87F8B39("NUMBER");
							UNK_0x21994591120B91F0(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
							UNK_0x779B34565F4D71B1();
						}
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							UNK_0x7C19E5E4784BD7CF(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							UNK_0x7ACC3006A87F8B39("NUMBER");
							UNK_0x21994591120B91F0(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
							UNK_0x779B34565F4D71B1();
						}
						if (!UNK_0x2EBF5002C6B6A06C(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
						if (!UNK_0x2EBF5002C6B6A06C(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						}
					}
					UNK_0x7E60D21B163E9D56();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !UNK_0x2EBF5002C6B6A06C(ScriptParam_0.f_5.f_2))
				{
					UNK_0x7E60C62A7CE58FC8(iLocal_46, "SET_TOTAL");
					UNK_0x3CAEA85DA607305E(ScriptParam_0.f_5);
					if (!UNK_0x2EBF5002C6B6A06C(ScriptParam_0.f_5.f_3))
					{
						func_18(ScriptParam_0.f_5.f_3);
					}
					else
					{
						UNK_0x7C19E5E4784BD7CF(ScriptParam_0.f_5.f_1);
					}
					func_18(ScriptParam_0.f_5.f_2);
					UNK_0x7E60D21B163E9D56();
				}
				UNK_0x7E60C62A7CE58FC8(iLocal_46, "DRAW_MENU_LIST");
				UNK_0x7E60D21B163E9D56();
				func_12(1);
				func_9(&uLocal_47);
				if (!func_8(Global_111638.f_19092, 4096))
				{
					func_6(&(Global_111638.f_19092), 4096);
				}
				iLocal_45 = 3;
				break;
			case 3:
				if (((func_2(&uLocal_47) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || UNK_0x757EF87A33649210()) || Global_30912)
				{
					func_19();
				}
				else
				{
					func_1(1);
					UNK_0xEF45C43067063F18(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (UNK_0x2F1FB0453B36C270(10))
					{
						UNK_0x3584F71E5CA29322(10);
					}
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		iVar2 = UNK_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_4(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, true);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(bool bParam0)
{
	if (!func_5(bParam0))
	{
		func_10(bParam0);
	}
}

void func_10(bool bParam0)
{
	func_11(bParam0, 0f);
}

void func_11(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_3(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_15(int iParam0)
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

bool func_16()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_17()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_18(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_19()
{
	UNK_0xE17FDF9E3068281B(&iLocal_46);
	Global_30912 = 0;
	func_1(0);
	UNK_0x10FAF14A60A0DBE1();
}

