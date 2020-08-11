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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	int iLocal_47 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	bLocal_41 = joaat("BLIMP");
	bLocal_44 = joaat("S_M_M_PILOT_02");
	bLocal_46 = joaat("BUZZARD");
	if (UNK_0x757EF87A33649210())
	{
		UNK_0x82E51BCA72537B6C(500);
	}
	if (UNK_0x2EBF608FFE6CA406(18))
	{
		func_18();
	}
	UNK_0x34D79252800B23FF(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		UNK_0x7178F32F6742C936(255, 255, 255, 255);
		UNK_0xD3539A877EC25E86(0.75f, 0.9f);
		UNK_0xF1F881BAAAFB43B1(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		UNK_0x7178F32F6742C936(255, 255, 255, 255);
		UNK_0xD3539A877EC25E86(0.4f, 0.45f);
		UNK_0xF1F881BAAAFB43B1(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	vector3 vVar0;

	if (UNK_0xC844350D5D58C99A(bLocal_40))
	{
		if ((UNK_0x437347B10A200C4B(bLocal_40, 0) || UNK_0x7F6DC62EA9922664(bLocal_40) <= 0) || UNK_0x6EE94F60DA2A2273(bLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
			if (UNK_0x20D6474D5F4B9FC6(bLocal_40))
			{
				UNK_0xC55F2A0377488064(bLocal_40);
			}
			if (iLocal_47 == 1)
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_40, false) };
				func_8(vVar0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&bLocal_43);
				func_4(&bLocal_40);
			}
			else
			{
				func_3(&bLocal_43, 1, 0, 1);
				func_2(&bLocal_40);
			}
		}
		else if (UNK_0x20D6474D5F4B9FC6(bLocal_40))
		{
			UNK_0xA9FBE21EB8701B34(bLocal_40, 0.25f);
		}
	}
}

void func_2(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0x437347B10A200C4B(*bParam0, 0);
		if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
		{
			UNK_0x046C362CF15F1935(bParam0);
		}
	}
}

void func_3(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

void func_4(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		if (func_6(*bParam0))
		{
			if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
			{
				if (func_5(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
					{
						UNK_0x046C362CF15F1935(bParam0);
						return;
					}
				}
				UNK_0xA954465BA6FDEFE2(bParam0);
			}
		}
		else
		{
			if (func_5(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					UNK_0x046C362CF15F1935(bParam0);
					return;
				}
			}
			UNK_0xA954465BA6FDEFE2(bParam0);
		}
	}
}

bool func_5(bool bParam0)
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

bool func_6(bool bParam0)
{
	if (func_5(bParam0))
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

void func_7(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0x437347B10A200C4B(*bParam0, 0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
		}
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		UNK_0xEBA53F35D0085654(bParam0);
	}
}

void func_8(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[12];

	iVar1 = 12;
	vVar2[0 /*3*/] = { 5f, 0f, 0f };
	vVar2[1 /*3*/] = { 0f, 5f, 0f };
	vVar2[2 /*3*/] = { 0f, 0f, 5f };
	vVar2[3 /*3*/] = { 5f, 5f, 0f };
	vVar2[4 /*3*/] = { 5f, 0f, 5f };
	vVar2[5 /*3*/] = { 0f, 5f, 5f };
	vVar2[6 /*3*/] = { 20f, 0f, 0f };
	vVar2[7 /*3*/] = { 0f, 20f, 0f };
	vVar2[8 /*3*/] = { 0f, 0f, 20f };
	vVar2[9 /*3*/] = { 20f, 20f, 0f };
	vVar2[10 /*3*/] = { 20f, 0f, 20f };
	vVar2[11 /*3*/] = { 0f, 20f, 20f };
	UNK_0xDA55CDFB97015579(vParam0, 8, 1f, 1, 0, 1f, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		UNK_0xDA55CDFB97015579(vParam0 + vVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1f, 0);
		iVar0++;
	}
}

void func_9(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

void func_10(float fParam0, float fParam1, bool bParam2, int iParam3)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&bLocal_45);
	UNK_0x523BCC9DC80CD82F(bLocal_46);
	while (!UNK_0xB87F6CF6E5628C67(bLocal_46))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(bLocal_40))
	{
		bLocal_45 = UNK_0x122AAB0B1D6F55AD(bLocal_46, UNK_0x68E4ADDDDCD7BDDE(bLocal_40, 50f, 0f, 15f), 0f, true, true, false);
		UNK_0x873BCADC75FF6D20(bLocal_45);
		func_12(bLocal_45, bLocal_40);
		if (func_5(UNK_0x16F2683693E537C9()))
		{
			UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bLocal_45, -1);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0x536F1BE96C726C4B(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 500f, 1, 0, 0, false);
		}
	}
	UNK_0x71199B01895C6202(bLocal_46);
}

void func_12(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_13(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(bParam1, true), 1);
	UNK_0xD8F6A53F4799FAFE(bParam0, bVar0);
}

float func_13(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = UNK_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&iLocal_42);
	if (func_6(bLocal_40))
	{
		iLocal_42 = func_15(bLocal_40, 1, 5);
	}
}

int func_15(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_5(bParam0))
	{
		iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
		UNK_0x321E019A46034F39(iVar0, bParam1);
		UNK_0x2A065371C9D96655(iVar0, iParam2);
		UNK_0x516E63E474722206(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	UNK_0x523BCC9DC80CD82F(bLocal_44);
	while (!UNK_0xB87F6CF6E5628C67(bLocal_44))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(bLocal_40))
	{
		bLocal_43 = UNK_0x852A19533F896693(bLocal_40, 26, bLocal_44, -1, 1, true);
		if (func_5(bLocal_43))
		{
			UNK_0x11AD11297DC58CC7(bLocal_43, true);
			UNK_0x4E885A246A9D983A(bLocal_43, 118, false);
			UNK_0x4E885A246A9D983A(bLocal_43, 29, false);
			UNK_0x4E885A246A9D983A(bLocal_43, 116, false);
		}
	}
	if (func_6(bLocal_40))
	{
		UNK_0x4D3C3C0B0DE2663E(bLocal_40, true, "Blimp_City", 1);
	}
	UNK_0x71199B01895C6202(bLocal_44);
}

void func_17()
{
	vector3 vVar0;

	if (func_6(bLocal_40) && UNK_0x20D6474D5F4B9FC6(bLocal_40))
	{
		UNK_0xC55F2A0377488064(bLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&bLocal_43);
	func_4(&bLocal_40);
	UNK_0x523BCC9DC80CD82F(bLocal_41);
	UNK_0x36187931D29E5BBE(true, "Blimp_City");
	while (!UNK_0xB87F6CF6E5628C67(bLocal_41) || !UNK_0x3DDA6C6A285628E4(true, "Blimp_City"))
	{
		SYSTEM::WAIT(0);
	}
	vVar0 = { UNK_0xCB4DF739E53AB68E(UNK_0x1A2511CB22B86C17(true, "Blimp_City"), 0f) };
	bLocal_40 = UNK_0x122AAB0B1D6F55AD(bLocal_41, UNK_0xAA8A22FF67DFFDCD(UNK_0x1A2511CB22B86C17(true, "Blimp_City"), 0f), vVar0.z, true, true, false);
	UNK_0x71199B01895C6202(bLocal_41);
}

void func_18()
{
	if (func_6(bLocal_40) && UNK_0x20D6474D5F4B9FC6(bLocal_40))
	{
		UNK_0xC55F2A0377488064(bLocal_40);
	}
	UNK_0xDB8844D4B7C60440(true, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&bLocal_43, 1, 0, 1);
	func_2(&bLocal_40);
	func_2(&bLocal_45);
	UNK_0x71199B01895C6202(bLocal_44);
	UNK_0x71199B01895C6202(bLocal_41);
	UNK_0x71199B01895C6202(bLocal_46);
	UNK_0x34D79252800B23FF(6);
	UNK_0x10FAF14A60A0DBE1();
}

