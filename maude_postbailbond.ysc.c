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
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar3;

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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_85 = -1;
	iLocal_86 = -1;
	if (UNK_0x2EBF608FFE6CA406(19))
	{
		func_56();
	}
	if (!func_52())
	{
		func_56();
	}
	if (!func_51(bLocal_82))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_83 = UNK_0x1C0640BA9A7327B3();
		iLocal_85 = func_49();
		iLocal_84 = 0;
		func_48(1, &uLocal_88);
	}
	while (true)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!func_51(bLocal_82))
			{
				func_56();
			}
			vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			vVar3 = { UNK_0x68F4C0EC296D3901(bLocal_82, true) };
			if (SYSTEM::VDIST2(vVar0, vVar3) >= (100f * 100f))
			{
				func_56();
			}
			switch (iLocal_87)
			{
				case 0:
					func_43(vVar3, vVar0, 18000, 1101004800 /* Float: 20f */);
					if (func_25(&bLocal_82, 0))
					{
						func_24();
						func_16(0);
						func_12(vVar3, vVar0);
						UNK_0x3F423BF5B8125A50(func_11());
						iLocal_87 = 1;
					}
					break;
				case 1:
					if (func_5(&bLocal_82, &bLocal_79, &iLocal_86))
					{
						iLocal_87 = 2;
					}
					break;
				case 2:
					if (!func_4(bLocal_82, 1805844857) && !UNK_0xE9FDA1035CFEA94F(bLocal_82))
					{
						if (!UNK_0xB4ECF989E2C1DAC8(bLocal_82, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_56();
					}
					break;
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (func_51(bLocal_82))
	{
		func_2(&bLocal_82);
		UNK_0xF3268524E9BE6D6E(bLocal_82, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
		UNK_0xFADC0A217229F6B5(bLocal_82, true);
	}
}

void func_2(bool bParam0)
{
	if (func_51(*bParam0))
	{
		UNK_0xBAFED2F6486F771A(*bParam0, 2, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 64, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 128, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 8, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 1, false);
		UNK_0xBAFED2F6486F771A(*bParam0, 32, false);
		UNK_0xAFF39FB306F8E232(*bParam0, 5, false);
		UNK_0xAFF39FB306F8E232(*bParam0, 17, true);
		UNK_0x4E885A246A9D983A(*bParam0, 118, true);
	}
}

char* func_3()
{
	return "female_Flee_Table_Left_Maude";
}

bool func_4(bool bParam0, int iParam1)
{
	if (func_51(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_5(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (func_51(*bParam0))
	{
		if (UNK_0xB4ECF989E2C1DAC8(*bParam0, func_10(), func_9(), 3))
		{
			if (!UNK_0x869EFD0BC0868856(*bParam0) || UNK_0xA48EBBEA418ADC94(*bParam0))
			{
				UNK_0x3F423BF5B8125A50(func_11());
				if (UNK_0xB4AE0788C1587752(func_11()))
				{
					*iParam2 = UNK_0xE9744DB7B8CA6965(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					UNK_0xC90224D9E95E5E3A(*iParam2, false);
					UNK_0xEFC3DF9D33E248D8(*iParam2, false);
					if (func_4(*bParam0, 1785177548))
					{
						UNK_0x1BF8B16C32704027(*bParam0, -1000f, 1);
					}
					UNK_0x915804B434753CBD(*bParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					UNK_0xF895E10BF4C72645(*bParam0, 0, 0);
					if (func_8(*bParam1))
					{
						if (UNK_0xB4ECF989E2C1DAC8(*bParam1, func_10(), func_7(), 3))
						{
							UNK_0x1BF8B16C32704027(*bParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						UNK_0xE14EC663EED44AD5(*bParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080 /* Float: 1000f */);
					}
					return true;
				}
			}
			else
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

char* func_6()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()
{
	return "base_chair";
}

bool func_8(bool bParam0)
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

char* func_9()
{
	return "base";
}

char* func_10()
{
	return "special_ped@maude@base";
}

char* func_11()
{
	return "special_ped@maude@exit_flee";
}

void func_12(vector3 vParam0, vector3 vParam3)
{
	if (func_51(bLocal_82))
	{
		if (!UNK_0x65636D4556D82155(bLocal_82))
		{
			if (SYSTEM::VDIST2(vParam3, vParam0) < (35f * 35f))
			{
				func_13(&bLocal_82, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	if (func_51(*bParam0))
	{
		bVar0 = UNK_0x9645CD1B04C4BFD3(*bParam0);
		if (bVar0)
		{
			UNK_0x33CE5A9E32EA10B2(*bParam0, 0);
		}
		func_14(*bParam0, bParam1, bParam2, iParam3);
		if (bVar0)
		{
			UNK_0x33CE5A9E32EA10B2(*bParam0, 1);
		}
	}
}

void func_14(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_15(iParam3), 0);
}

int func_15(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

void func_16(bool bParam0)
{
	struct<6> Var0;
	bool bVar6;

	if (func_23())
	{
		Var0 = { func_22() };
		bVar6 = func_21();
		if (UNK_0x7F8A39872A07D2CE(&Var0, bVar6))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	Global_19671 = 0;
	func_18();
}

void func_18()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_19()
{
	Global_19671 = 0;
	func_20();
}

void func_20()
{
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

char* func_21()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 3))
	{
		return "BB4_loiter";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 2))
	{
		return "BB3_loiter";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, true))
	{
		return "BB2_loiter";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, false))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_23()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_24()
{
	if (UNK_0xC844350D5D58C99A(bLocal_81))
	{
		UNK_0x1E9649458B15960F(bLocal_81, false);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_80))
	{
		UNK_0x1E9649458B15960F(bLocal_80, false);
	}
}

bool func_25(bool bParam0, bool bParam1)
{
	if (func_51(*bParam0))
	{
		if ((UNK_0x688A90832774AB83(*bParam0) || UNK_0xE147126C9AD09A60(*bParam0)) || UNK_0xD24FAF25ADC00F44(*bParam0))
		{
			return true;
		}
		if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), *bParam0))
			{
				return true;
			}
			if (UNK_0xC844350D5D58C99A(bLocal_79))
			{
				if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bLocal_79))
				{
					return true;
				}
			}
			if (UNK_0xC844350D5D58C99A(bLocal_80))
			{
				if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bLocal_80))
				{
					return true;
				}
			}
			if (UNK_0xC844350D5D58C99A(bLocal_81))
			{
				if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bLocal_81))
				{
					return true;
				}
			}
		}
		if (UNK_0xFA4CE147B4D9AEE0(*bParam0, 61))
		{
			return true;
		}
		if (UNK_0x869EFD0BC0868856(*bParam0))
		{
			if (UNK_0x12DE711B1C681E9E(*bParam0, UNK_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0))
			{
				return true;
			}
		}
		if (UNK_0xFA4CE147B4D9AEE0(*bParam0, 51))
		{
			return true;
		}
		if (func_33(*bParam0, 1126825984 /* Float: 170f */))
		{
			return true;
		}
		if (func_26(*bParam0, 1, 0, 0, 0))
		{
			return true;
		}
		if (UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(*bParam0, true), 15f))
		{
			return true;
		}
		if (UNK_0xFA4CE147B4D9AEE0(*bParam0, 73))
		{
			return true;
		}
		if (bParam1)
		{
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_26(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	fVar0 = 8f;
	bVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		bVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(UNK_0x16F2683693E537C9()) && func_8(bParam0))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			bVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(bParam0, bParam1, fVar0, bVar1))
			{
				return true;
			}
			if (func_27(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
		else
		{
			if (UNK_0x52AE17073D025311(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fVar0, true))
					{
						return true;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					bVar1 = 1.86f;
				}
				if (func_32(bParam0, bParam1, fVar0, bVar1))
				{
					return true;
				}
			}
			if (func_27(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_27(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - bParam1);
	vVar0.f_1 = (vVar0.y - bParam1);
	vVar0.f_2 = (vVar0.z - bParam1);
	vVar3.x = (vVar3.x + bParam1);
	vVar3.f_1 = (vVar3.y + bParam1);
	vVar3.f_2 = (vVar3.z + bParam1);
	if (bParam2)
	{
		if (((UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_GRENADE"), bParam1, 1) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_MOLOTOV"), bParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_SMOKEGRENADE"), bParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(bParam0, bParam1))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_28(bParam0, bParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (UNK_0x723EE7F83DF1497D(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_28(bool bParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;

	if ((((UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_GRENADE"), bParam1, &vVar1, &uVar0, 0) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_SMOKEGRENADE"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_BZGAS"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_STICKYBOMB"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_MOLOTOV"), bParam1, &vVar1, &uVar0, 0))
	{
		if (func_29(bParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_29(bool bParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_31(vParam1 - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_31(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_30(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return false;
	}
	return true;
}

float func_30(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_31(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_32(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (bParam1)
	{
		if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, bParam3, bParam3, bParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fParam2, true))
	{
		return true;
	}
	return false;
}

bool func_33(bool bParam0, float fParam1)
{
	bool bVar0;

	if (func_8(UNK_0x16F2683693E537C9()) && func_8(bParam0))
	{
		if (func_42(bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				bVar0 = 40f;
			}
			else
			{
				bVar0 = 3f;
			}
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, bVar0, bVar0, bVar0, 0, 1, 0))
			{
				if (func_34(bParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_34(bool bParam0, float fParam1)
{
	return func_35(bParam0, UNK_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_35(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_41(bParam0, bParam1);
	if (!func_8(bParam0) || !func_8(bParam1))
	{
		if (iVar4 != -1)
		{
			func_40(&(Local_37[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_39(bParam0, bParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_38();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_37[iVar4 /*4*/].f_1 = bParam0;
		Local_37[iVar4 /*4*/].f_2 = bParam1;
	}
	vVar1 = { UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f) };
	bVar0 = func_36(&(Local_37[iVar4 /*4*/]), vVar1, bParam1, &(Local_37[iVar4 /*4*/].f_3), bParam0, iParam5);
	return (bVar0 || (UNK_0x1C0640BA9A7327B3() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	int iVar8;

	bVar7 = false;
	if (!func_8(bParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_37(bParam4, iParam7) };
		*uParam0 = UNK_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, bParam6, 7);
		return 0;
	}
	iVar8 = UNK_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar4, &bVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (UNK_0xEC560E589DF8370E(bVar7))
	{
		func_8(bVar7);
		if (UNK_0x940C1429253D3B1B(bVar7) == bParam4)
		{
			if (bLocal_78)
			{
				UNK_0xBA5BBB3ADDA49094(vParam1, UNK_0x68F4C0EC296D3901(bParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*iParam5 = UNK_0x1C0640BA9A7327B3();
			return 1;
		}
		return 0;
	}
	if (UNK_0xE2F1E99DD161A861(bVar7))
	{
		func_8(bVar7);
		if (UNK_0x405E212DDE472467(bParam4, 0))
		{
			if (UNK_0x96A5FE5834B81CE7(bVar7) == UNK_0x6937EA2286828455(bParam4, 0))
			{
				if (bLocal_78)
				{
					UNK_0xBA5BBB3ADDA49094(vParam1, UNK_0x68F4C0EC296D3901(bParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*iParam5 = UNK_0x1C0640BA9A7327B3();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(bool bParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 7)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return UNK_0x68F4C0EC296D3901(bParam0, true);
	}
	else if (iParam1 == 1)
	{
		return UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return UNK_0x64430C979F516F7A(bParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return UNK_0x64430C979F516F7A(bParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return UNK_0x64430C979F516F7A(bParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return UNK_0x64430C979F516F7A(bParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return UNK_0x64430C979F516F7A(bParam0, 36864, 0f, 0f, 0f);
	}
	return UNK_0x68F4C0EC296D3901(bParam0, true);
}

int func_38()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_31(UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return true;
	}
	if (iParam3 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_31(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_30(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return false;
	}
	return true;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == bParam0 && Local_37[iVar0 /*4*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_42(bool bParam0)
{
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		return true;
	}
	return false;
}

int func_43(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7)
{
	var uVar0;
	char[] cVar165[8];
	char* sVar166;

	if (iLocal_84 < iLocal_85)
	{
		if (!func_23())
		{
			if (SYSTEM::VDIST2(vParam3, vParam0) < (fParam7 * fParam7))
			{
				if (UNK_0x1C0640BA9A7327B3() - iLocal_83) > (iParam6 + UNK_0x09AC81E49EA267F7(false, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, bLocal_82, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_83 = UNK_0x1C0640BA9A7327B3();
					iLocal_84++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_83 = UNK_0x1C0640BA9A7327B3();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	UNK_0x5D96D8530B3D0904(&Global_19671, false);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

char* func_46()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 3))
	{
		return "BB4AUD";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 2))
	{
		return "BB3AUD";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, true))
	{
		return "BB2AUD";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, false))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				UNK_0xA245D14CC59CDD36(bParam2, 0);
			}
			else
			{
				UNK_0xA245D14CC59CDD36(bParam2, 1);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				UNK_0x971EF1DE410C56CF(bParam2, 0);
			}
			else
			{
				UNK_0x971EF1DE410C56CF(bParam2, 1);
			}
		}
	}
}

void func_48(bool bParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 2711.198f, 4134.425f, 32.90168f };
	vVar3 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = UNK_0x7D6CA5F52B3748BF(vVar0, vVar3, 0, 1, 1, 1);
		UNK_0x10F3BFFADF2CE3DA(vVar0, vVar3);
		UNK_0xE342F209E49C5314(vVar0, vVar3, false, 1);
		UNK_0x21688103CC7F9B19(vVar0, vVar3, 0);
		UNK_0xF858EFDE1871B5F2(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, false, 1);
		UNK_0x536F1BE96C726C4B(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, false);
	}
	else
	{
		UNK_0x2952D66A502EA873(*uParam1, 0);
		UNK_0xEFED0CD6E25037B9();
		UNK_0xE342F209E49C5314(vVar0, vVar3, true, 1);
		UNK_0xF5894FEB702E7E76(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

int func_49()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 3))
	{
		return 4;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, 2))
	{
		return 4;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, true))
	{
		return 4;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, false))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	vector3 vVar0;

	if (func_51(bLocal_82))
	{
		if (!UNK_0xAF6690C489CC6203(bLocal_82))
		{
			UNK_0x73270B3C9CC833FD(bLocal_82, true, 0);
		}
		UNK_0x11AD11297DC58CC7(bLocal_82, true);
		UNK_0x6D80F1AEBA734886(bLocal_82, false);
		UNK_0x25C5402CC10F76CD(bLocal_82, false);
		UNK_0x6DF7BF67E86AAE86(bLocal_82, joaat("PLAYER"));
		UNK_0x8685456FA9090367(bLocal_82, 0);
		UNK_0xBB46CD6FAFB19C92(bLocal_82, 0);
		UNK_0x4E885A246A9D983A(bLocal_82, 118, false);
		vVar0 = { 2728.33f, 4145.6f, 43.89f };
		if (UNK_0xBF75E4DF4C367CD9(vVar0, 10f, joaat("PROP_TABLE_03B"), 0))
		{
			bLocal_80 = UNK_0x4B72871A3BE7B474(vVar0, 10f, joaat("PROP_TABLE_03B"), 1, 0, 1);
			if (func_8(bLocal_80))
			{
				UNK_0xA47B46945FF6DE74(bLocal_80, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_80, -92.17f);
				UNK_0x1E9649458B15960F(bLocal_80, true);
			}
		}
		if (UNK_0xBF75E4DF4C367CD9(vVar0, 10f, joaat("PROP_LAPTOP_01A"), 0))
		{
			bLocal_81 = UNK_0x4B72871A3BE7B474(vVar0, 10f, joaat("PROP_LAPTOP_01A"), 0, 0, 1);
			if (func_8(bLocal_81))
			{
				if (!UNK_0xAF6690C489CC6203(bLocal_81))
				{
					UNK_0x73270B3C9CC833FD(bLocal_81, true, 0);
				}
				UNK_0xA47B46945FF6DE74(bLocal_81, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_81, 71f);
				UNK_0x1E9649458B15960F(bLocal_81, true);
			}
		}
		if (UNK_0xBF75E4DF4C367CD9(vVar0, 10f, joaat("PROP_TABLE_03_CHR"), 0))
		{
			bLocal_79 = UNK_0x4B72871A3BE7B474(vVar0, 10f, joaat("PROP_TABLE_03_CHR"), 0, 0, 1);
			if (func_8(bLocal_79))
			{
				if (!UNK_0xAF6690C489CC6203(bLocal_79))
				{
					UNK_0x73270B3C9CC833FD(bLocal_79, true, 0);
				}
				UNK_0xA47B46945FF6DE74(bLocal_79, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_79, -91.28f);
			}
		}
	}
}

bool func_51(bool bParam0)
{
	if (func_8(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_52()
{
	int iVar0;
	int iVar1;
	var uVar2[32];

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		iVar0 = UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (UNK_0x134B62B726CEC8E6(uVar2[iVar1]) == func_53(62))
				{
					bLocal_82 = uVar2[iVar1];
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

int func_53(int iParam0)
{
	if (!func_55(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

void func_56()
{
	func_48(0, &uLocal_88);
	if (func_8(bLocal_81))
	{
		UNK_0x1E9649458B15960F(bLocal_81, false);
	}
	func_58(&bLocal_81, 0);
	if (func_8(bLocal_80))
	{
		UNK_0x1E9649458B15960F(bLocal_80, false);
	}
	func_58(&bLocal_80, 0);
	if (func_8(bLocal_79))
	{
		UNK_0x1E9649458B15960F(bLocal_79, false);
		if (UNK_0xB4ECF989E2C1DAC8(bLocal_79, "special_ped@maude@base", "base_chair", 3))
		{
			UNK_0x7720CBBC7DD82563(bLocal_79, "base_chair", "special_ped@maude@base", -1000f);
			UNK_0x1BF8B16C32704027(bLocal_79, -1000f, 1);
		}
		else if (UNK_0xB4ECF989E2C1DAC8(bLocal_79, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			UNK_0x7720CBBC7DD82563(bLocal_79, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			UNK_0x1BF8B16C32704027(bLocal_79, -1000f, 1);
		}
	}
	func_58(&bLocal_79, 0);
	if (func_51(bLocal_82))
	{
		UNK_0xFADC0A217229F6B5(bLocal_82, true);
		UNK_0x4E885A246A9D983A(bLocal_82, 118, true);
	}
	func_57(&bLocal_82, 1, 0, 1);
	UNK_0x8D17794CE3273D70(func_11());
	UNK_0x10FAF14A60A0DBE1();
}

void func_57(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				UNK_0x8FB4E06C94958F84(*bParam0);
			}
			UNK_0xFADC0A217229F6B5(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				UNK_0x11AD11297DC58CC7(*bParam0, false);
			}
		}
		UNK_0x6DAD7906B73F064D(bParam0);
	}
}

void func_58(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		if (!bParam1)
		{
			UNK_0xEEEE2E5FA6F78DF0(bParam0);
		}
		else
		{
			UNK_0xAA2AE6161CB0D2DC(*bParam0);
		}
	}
}

