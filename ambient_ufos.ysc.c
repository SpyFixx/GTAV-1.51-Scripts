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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_67 = 0f;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	vector3 vLocal_78[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_85 = false;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	vLocal_64 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_67 = 200f;
	vLocal_68 = { 2490f, 3777f, 2402.879f };
	vLocal_71 = { -2052f, 3237f, 1450.078f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	bLocal_85 = true;
	fLocal_86 = 10f;
	fLocal_87 = 90f;
	fLocal_88 = 35f;
	fLocal_89 = 60f;
	fLocal_90 = 275f;
	iLocal_91 = 1500;
	iLocal_92 = -1;
	iLocal_94 = 3000;
	iLocal_95 = 708;
	iLocal_96 = 377;
	iLocal_97 = 1000;
	iLocal_98 = 2093;
	iLocal_101 = -1;
	iLocal_102 = -1;
	bLocal_103 = true;
	bLocal_104 = true;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_12();
	}
	while (UNK_0x757EF87A33649210())
	{
		SYSTEM::WAIT(0);
	}
	if (!UNK_0xBCFF5481C5F58C19("ufo"))
	{
		UNK_0x2404539258C5376B("ufo");
	}
	vLocal_78[0 /*3*/] = { vLocal_68 };
	vLocal_78[1 /*3*/] = { vLocal_71 };
	while (true)
	{
		func_11(UNK_0x16F2683693E537C9());
		if (Global_30772 == 1)
		{
			func_12();
		}
		if (bLocal_85)
		{
			if (!func_10(UNK_0x16F2683693E537C9(), vLocal_78[0 /*3*/], (290f + 50f)))
			{
				if (!func_10(UNK_0x16F2683693E537C9(), vLocal_78[1 /*3*/], (290f + 50f)))
				{
					func_12();
				}
			}
			if (iLocal_77 != 0)
			{
				if (!func_10(UNK_0x16F2683693E537C9(), vLocal_78[0 /*3*/], (fLocal_90 + 50f)))
				{
					if (!func_10(UNK_0x16F2683693E537C9(), vLocal_78[1 /*3*/], (fLocal_90 + 50f)))
					{
						UNK_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
						UNK_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_77 = 0;
						iLocal_76 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_77)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < vLocal_78.x)
				{
					if (func_10(UNK_0x16F2683693E537C9(), vLocal_78[iVar0 /*3*/], fLocal_90))
					{
						iLocal_76 = iVar0;
						iLocal_77 = 1;
						UNK_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 1, 1);
						UNK_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < vLocal_78.x)
				{
					if (func_10(UNK_0x16F2683693E537C9(), vLocal_78[iVar0 /*3*/], fLocal_87))
					{
						iLocal_76 = iVar0;
						iLocal_77 = 2;
					}
					iVar0++;
				}
				break;
			case 2:
				if (iLocal_76 == -1)
				{
					iLocal_77 = 1;
				}
				else
				{
					iLocal_74 = UNK_0x1C0640BA9A7327B3();
					iLocal_75 = 0;
					iLocal_77 = 3;
				}
				break;
			case 3:
				if (func_10(UNK_0x16F2683693E537C9(), vLocal_78[iLocal_76 /*3*/], fLocal_87))
				{
					iLocal_75 = (UNK_0x1C0640BA9A7327B3() - iLocal_74);
					if (iLocal_75 >= iLocal_91)
					{
						iLocal_77 = 4;
						iLocal_92 = UNK_0xD68EA767274B7444();
						iLocal_93 = UNK_0x1C0640BA9A7327B3();
						if (iLocal_76 == 0)
						{
							UNK_0xEB819BD1E585E9CB(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY", vLocal_78[iLocal_76 /*3*/], false, false, 0, 0);
						}
						else
						{
							UNK_0xEB819BD1E585E9CB(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY_3", vLocal_78[iLocal_76 /*3*/], false, false, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_77 = 1;
				}
				break;
			case 4:
				func_5();
				func_7();
				func_6();
				if (UNK_0x1C0640BA9A7327B3() > (iLocal_93 + iLocal_94))
				{
					func_4(&iLocal_92);
				}
				if (!func_10(UNK_0x16F2683693E537C9(), vLocal_78[iLocal_76 /*3*/], fLocal_90))
				{
					func_1();
					iLocal_76 = -1;
					iLocal_77 = 0;
					func_4(&iLocal_102);
					func_4(&iLocal_101);
					UNK_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
					UNK_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	bool bVar0;

	if (func_11(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (func_2(bVar0))
			{
				UNK_0x56FDC9ADE35F7DB0(bVar0, true, false, 0);
			}
		}
	}
}

bool func_2(bool bParam0)
{
	if (func_3(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_3(bool bParam0)
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

void func_4(int iParam0)
{
	if (*iParam0 != -1)
	{
		UNK_0x55D0A2DB35045A35(*iParam0);
		UNK_0x43A06902454A1172(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_2(bVar0))
		{
			UNK_0x56FDC9ADE35F7DB0(bVar0, false, false, 0);
			UNK_0xDFC6BA855748EB10(bVar0, 2, 0f, 0f, -fLocal_86, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()
{
	if (bLocal_104)
	{
		if (UNK_0x1C0640BA9A7327B3() > iLocal_99)
		{
			if (iLocal_101 != -1)
			{
				func_4(&iLocal_101);
				iLocal_99 = (UNK_0x1C0640BA9A7327B3() + iLocal_98);
			}
			else
			{
				iLocal_101 = UNK_0xD68EA767274B7444();
				UNK_0x22293E611B2408F1(iLocal_101, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_99 = (UNK_0x1C0640BA9A7327B3() + iLocal_96);
			}
		}
	}
}

void func_7()
{
	if (bLocal_103)
	{
		if (UNK_0x1C0640BA9A7327B3() > iLocal_100)
		{
			if (iLocal_102 != -1)
			{
				func_4(&iLocal_102);
				iLocal_100 = (UNK_0x1C0640BA9A7327B3() + iLocal_97);
			}
			else
			{
				iLocal_102 = UNK_0xD68EA767274B7444();
				UNK_0x22293E611B2408F1(iLocal_102, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_100 = (UNK_0x1C0640BA9A7327B3() + iLocal_95);
			}
		}
	}
}

void func_8()
{
	vector3 vVar0;

	if (iLocal_76 == -1)
	{
		return;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return;
	}
	if (!func_10(UNK_0x16F2683693E537C9(), vLocal_78[iLocal_76 /*3*/], fLocal_88))
	{
		return;
	}
	vVar0 = { func_9(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - vLocal_78[iLocal_76 /*3*/]) * Vector(fLocal_89, fLocal_89, fLocal_89) };
	UNK_0xDFC6BA855748EB10(UNK_0x16F2683693E537C9(), 2, vVar0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 func_9(vector3 vParam0)
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

bool func_10(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

bool func_11(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

void func_12()
{
	if (UNK_0xBCFF5481C5F58C19("ufo"))
	{
		UNK_0x81CF20E10AAD5FD5("ufo");
	}
	func_4(&iLocal_102);
	func_4(&iLocal_101);
	func_4(&iLocal_92);
	UNK_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
	UNK_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	UNK_0x10FAF14A60A0DBE1();
}

