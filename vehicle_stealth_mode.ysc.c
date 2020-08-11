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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&uLocal_46))
	{
		while (!func_76())
		{
			func_64(&uLocal_46);
			if (func_54(&uLocal_46))
			{
			}
			else
			{
				func_14(&uLocal_46);
				SYSTEM::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	func_13();
	if (func_10())
	{
		UNK_0xA37A90C62806D848(1);
	}
	if (func_8(&uLocal_46))
	{
		func_4(&uLocal_46);
	}
	UNK_0x34D79252800B23FF(5);
	func_3();
	UNK_0x7126AEBCB4199143(UNK_0xD803B885F5E47A62(), 0);
	func_2();
}

void func_2()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_3()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852), 3);
}

void func_4(bool bParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(bParam0->f_6), 5);
}

void func_5(bool bParam0, bool bParam1)
{
	UNK_0x0674E58A79778E99(bParam0, bParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!UNK_0x1727A44C562FBED2(Global_2416079.f_1579) || Global_2416079.f_1579 == UNK_0x0D0A574C76D769AC()) || bParam2)
	{
		if (bParam0)
		{
			Global_2416079.f_1579 = UNK_0x0D0A574C76D769AC();
			Global_2416079.f_1580 = UNK_0x2B6E0A53779D29EA();
		}
		else
		{
			Global_2416079.f_1579 = -1;
		}
		Global_2416079.f_1582 = iParam1;
		Global_2416079.f_1584 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!UNK_0x1727A44C562FBED2(Global_2416079.f_1595) || Global_2416079.f_1595 == UNK_0x0D0A574C76D769AC()) || bParam1)
	{
		if (bParam0)
		{
			Global_2416079.f_1595 = UNK_0x0D0A574C76D769AC();
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_68.f_2), 23);
		}
		else
		{
			Global_2416079.f_1595 = -1;
			UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_68.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(bool bParam0)
{
	return func_9(&(bParam0->f_6), 5);
}

bool func_9(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, bParam1);
}

bool func_10()
{
	return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

bool func_11()
{
	return "STEALTH_WARN";
}

int func_12(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_13()
{
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852), true);
}

void func_14(bool bParam0)
{
	func_51(bParam0);
	func_50(bParam0);
	if (func_49(bParam0))
	{
		if (((func_48(bParam0) && !func_47(bParam0)) && UNK_0xAFE0D3608EDA7039(bParam0->f_1)) && !func_46())
		{
			func_45(bParam0, 1, 0);
			func_44(bParam0);
		}
		else if (func_9(&(bParam0->f_6), 6) && func_47(bParam0))
		{
			if (UNK_0xAFE0D3608EDA7039(bParam0->f_1) && !func_46())
			{
				func_45(bParam0, 0, 0);
				func_5(&(bParam0->f_6), 6);
				func_5(&(bParam0->f_6), 2);
			}
		}
	}
	if (func_43(bParam0))
	{
		UNK_0x7126AEBCB4199143(UNK_0xD803B885F5E47A62(), 1);
		func_42();
		func_41(bParam0);
	}
	else if (func_40(bParam0))
	{
		UNK_0x7126AEBCB4199143(UNK_0xD803B885F5E47A62(), 0);
		func_13();
		func_41(bParam0);
		func_39(bParam0, 5);
	}
	if (func_47(bParam0) && !func_48(bParam0))
	{
		func_37(bParam0);
		func_36();
		func_39(bParam0, 2);
		if (func_33(bParam0))
		{
			func_32();
		}
	}
	else
	{
		func_15(bParam0);
	}
	func_3();
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852), 4);
}

void func_15(bool bParam0)
{
	int iVar0;

	if (((((((!func_9(&(bParam0->f_6), 0) && !func_9(&(bParam0->f_6), 2)) && !UNK_0xFEBC1E4EC9E001F0()) && func_31(bParam0)) && !func_30(0)) && !func_29()) && func_27()) && UNK_0xC844350D5D58C99A(UNK_0xA30B8362589C124A(bParam0->f_1, -1, 0)))
	{
		func_21(bParam0, 1);
		func_20(&(bParam0->f_6), 3);
		iVar0 = func_19(bParam0->f_6.f_2, 3333, 10000);
		bParam0->f_6.f_2 = 0;
		func_17(func_18(bParam0), iVar0);
		func_16(bParam0);
		func_20(&(bParam0->f_6), 0);
	}
}

void func_16(bool bParam0)
{
	func_20(&(bParam0->f_6), 2);
}

void func_17(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_18(bool bParam0)
{
	if (func_49(bParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_20(bool bParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(bParam0, bParam1);
}

void func_21(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_49(bParam0))
	{
		switch (bParam0->f_2)
		{
			case joaat("AKULA"):
				bVar0 = (func_24(19004, -1, -1) + iParam1);
				if (bVar0 >= 0)
				{
					func_22(19004, bVar0, -1, 1);
				}
				break;
		}
	}
}

var func_22(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam2 == -1)
	{
		bParam2 = func_23();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, bParam2);
		iVar1 = ((iParam0 - 384) - UNK_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, bParam2);
		iVar1 = ((iParam0 - 457) - UNK_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, false);
		iVar1 = ((iParam0 - 1281) - UNK_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, false);
		iVar1 = ((iParam0 - 1305) - UNK_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1393), 0, 1, bParam2);
		iVar1 = ((iParam0 - 1393) - UNK_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1361), 0, 0, false);
		iVar1 = ((iParam0 - 1361) - UNK_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, bParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - UNK_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, false, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - UNK_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, bParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - UNK_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, bParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - UNK_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, bParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - UNK_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, bParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - UNK_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, bParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - UNK_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, bParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - UNK_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - UNK_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, bParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - UNK_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, bParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - UNK_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, bParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - UNK_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, bParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - UNK_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, bParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - UNK_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, bParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - UNK_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, bParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - UNK_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, false, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - UNK_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = UNK_0xB8E1F940D68B4FA6(iVar0, bParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_23()
{
	return Global_1312745;
}

int func_24(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 == -1)
	{
		bParam1 = func_23();
	}
	iVar0 = 0;
	iVar1 = func_26(iParam0, bParam1);
	iVar2 = func_25(iParam0);
	if (0 != iVar1)
	{
		if (!UNK_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_25(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - UNK_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - UNK_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - UNK_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - UNK_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - UNK_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - UNK_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - UNK_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - UNK_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - UNK_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - UNK_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - UNK_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - UNK_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - UNK_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - UNK_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - UNK_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - UNK_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - UNK_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - UNK_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - UNK_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - UNK_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - UNK_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - UNK_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - UNK_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, bParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, bParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, false);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, false);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1361), 0, 0, false);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1393), 0, 1, bParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, false, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, bParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, bParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, bParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, bParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, bParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, bParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, bParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, false, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, bParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, bParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, bParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, bParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, bParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, bParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, bParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

bool func_27()
{
	return (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852, 4) && !func_28());
}

bool func_28()
{
	return ((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) && Global_4456448.f_2 == 20);
}

bool func_29()
{
	return Global_73825;
}

bool func_30(int iParam0)
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

bool func_31(bool bParam0)
{
	if (func_49(bParam0))
	{
		switch (bParam0->f_2)
		{
			case joaat("AKULA"):
				return func_24(19004, -1, -1) < 3;
			default:
				break;
		}
	}
	return true;
}

void func_32()
{
	if (!UNK_0xFEBC1E4EC9E001F0())
	{
		func_17("STEALTH_WARN", 3000);
	}
}

bool func_33(bool bParam0)
{
	int iVar0;

	if (func_30(0) || func_29())
	{
		return false;
	}
	iVar0 = func_34(bParam0);
	switch (iVar0)
	{
		case 1:
			if ((UNK_0xD245978525608929(0, 114) || UNK_0xD245978525608929(0, 99)) || UNK_0xD245978525608929(0, 100))
			{
				return true;
			}
			break;
		case 0:
			if (UNK_0xD245978525608929(0, 114))
			{
				return true;
			}
			break;
		case 2:
			if (UNK_0xD245978525608929(0, 92))
			{
				return true;
			}
			break;
		case 3:
			if (UNK_0xD245978525608929(0, 68))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_34(bool bParam0)
{
	if (!func_35(bParam0))
	{
		return 4;
	}
	switch (bParam0->f_2)
	{
		case joaat("AKULA"):
			switch (bParam0->f_4)
			{
				case -1:
					return 1;
				case 0:
					return 2;
				default:
					break;
			}
			return 4;
		default:
			break;
	}
	return 4;
}

bool func_35(bool bParam0)
{
	return (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0));
}

void func_36()
{
	UNK_0x38C3A68D7861DCFD(0, 24, 1);
	UNK_0x38C3A68D7861DCFD(0, 66, 1);
	UNK_0x38C3A68D7861DCFD(0, 67, 1);
	UNK_0x38C3A68D7861DCFD(0, 68, 1);
	UNK_0x38C3A68D7861DCFD(0, 114, 1);
	UNK_0x38C3A68D7861DCFD(0, 69, 1);
	UNK_0x38C3A68D7861DCFD(0, 70, 1);
	UNK_0x38C3A68D7861DCFD(0, 91, 1);
	UNK_0x38C3A68D7861DCFD(0, 92, 1);
	UNK_0x38C3A68D7861DCFD(0, 99, 1);
	UNK_0x38C3A68D7861DCFD(0, 100, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
}

void func_37(bool bParam0)
{
	int iVar0;

	if (((((((!func_9(&(bParam0->f_6), 0) && !func_9(&(bParam0->f_6), 1)) && !UNK_0xFEBC1E4EC9E001F0()) && func_9(&(bParam0->f_6), 3)) && !func_30(0)) && !func_29()) && func_27()) && UNK_0xC844350D5D58C99A(UNK_0xA30B8362589C124A(bParam0->f_1, -1, 0)))
	{
		iVar0 = func_19(bParam0->f_6.f_2, 3333, 10000);
		bParam0->f_6.f_2 = 0;
		func_17(func_38(bParam0), iVar0);
		func_44(bParam0);
		func_20(&(bParam0->f_6), 0);
	}
}

bool func_38(bool bParam0)
{
	if (func_49(bParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_39(bool bParam0, int iParam1)
{
	if (func_48(bParam0))
	{
		return;
	}
	if (UNK_0x02A813E6E0380440() != iParam1)
	{
		UNK_0x34D79252800B23FF(iParam1);
	}
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > iParam1)
	{
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), iParam1, 0);
	}
}

bool func_40(bool bParam0)
{
	return (!func_9(bParam0, 0) && func_9(bParam0, 1));
}

void func_41(bool bParam0)
{
	func_5(&(bParam0->f_6), 0);
	if (func_10())
	{
		UNK_0xA37A90C62806D848(1);
	}
	if (!func_49(bParam0))
	{
		if (func_47(bParam0))
		{
			func_5(&(bParam0->f_6), 1);
		}
		else
		{
			func_5(&(bParam0->f_6), 2);
		}
	}
}

void func_42()
{
	UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852), true);
}

bool func_43(bool bParam0)
{
	return (func_9(bParam0, 0) && !func_9(bParam0, 1));
}

void func_44(bool bParam0)
{
	func_20(&(bParam0->f_6), 1);
}

void func_45(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0->f_2)
	{
		case joaat("AKULA"):
			UNK_0x14F219E1B81AE5CE(bParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_46()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852, 3);
}

bool func_47(bool bParam0)
{
	return func_9(bParam0, 0);
}

bool func_48(bool bParam0)
{
	return func_9(bParam0, 2);
}

bool func_49(bool bParam0)
{
	return ((func_35(bParam0) && bParam0->f_3 == UNK_0x16F2683693E537C9()) || UNK_0xA30B8362589C124A(bParam0->f_1, -1, 0) == UNK_0x16F2683693E537C9());
}

void func_50(bool bParam0)
{
	if (func_10() && (func_30(0) || func_29()))
	{
		bParam0->f_6.f_2 = 1;
		UNK_0xA37A90C62806D848(1);
		func_5(&(bParam0->f_6), 0);
		if (func_47(bParam0))
		{
			func_5(&(bParam0->f_6), 1);
		}
		else
		{
			func_5(&(bParam0->f_6), 2);
			if (func_49(bParam0))
			{
				func_21(bParam0, -1);
			}
		}
	}
}

void func_51(bool bParam0)
{
	if (func_47(bParam0))
	{
		if (func_8(bParam0))
		{
			if (func_53())
			{
				func_4(bParam0);
			}
		}
		else if (!func_53())
		{
			func_52(bParam0);
		}
	}
	else if (func_8(bParam0))
	{
		func_4(bParam0);
	}
	UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852), 2);
}

void func_52(bool bParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_20(&(bParam0->f_6), 5);
}

bool func_53()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852, 2);
}

bool func_54(bool bParam0)
{
	if (!func_35(bParam0))
	{
		return true;
	}
	if (!func_63(bParam0))
	{
		return true;
	}
	if (!func_62(bParam0->f_2))
	{
		return true;
	}
	if (func_61(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		return true;
	}
	if (func_60(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	if (func_57(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	if (func_55(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_55(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2425662[iParam0 /*421*/].f_236 > -1)
		{
			if (func_56(Global_2425662[iParam0 /*421*/].f_236) == 4)
			{
				return true;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 4))
		{
			return true;
		}
	}
	return false;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

bool func_57(bool bParam0)
{
	if (bParam0 != func_59() && func_58(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

bool func_58(bool bParam0, bool bParam1, bool bParam2)
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

int func_59()
{
	return -1;
}

bool func_60(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return true;
	}
	return false;
}

bool func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_59())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, false))
	{
		return true;
	}
	if (bParam1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, true))
		{
			return true;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AKULA"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_63(bool bParam0)
{
	return (UNK_0xC844350D5D58C99A(bParam0->f_1) && UNK_0xDF1306B443CD3D15(bParam0->f_1, 0));
}

void func_64(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_9(bParam0, 4);
	bVar1 = func_9(bParam0, 0);
	func_75(bParam0);
	if (bVar0)
	{
		func_20(bParam0, 3);
	}
	else
	{
		func_5(bParam0, 3);
	}
	if (bVar1)
	{
		func_20(bParam0, 1);
	}
	else
	{
		func_5(bParam0, 1);
	}
	if (func_35(bParam0))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bParam0->f_1 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
			if (func_63(bParam0))
			{
				bParam0->f_2 = UNK_0x134B62B726CEC8E6(bParam0->f_1);
				if (UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
				{
					func_20(bParam0, 2);
				}
			}
		}
	}
	if (func_63(bParam0))
	{
		if (!UNK_0xBBA8A868118C90ED(bParam0->f_1, -1, 0))
		{
			bVar2 = UNK_0xA30B8362589C124A(bParam0->f_1, -1, 0);
			if ((UNK_0xC844350D5D58C99A(bVar2) && !UNK_0x437347B10A200C4B(bVar2, 0)) && UNK_0x34BFC6F0CB887BC2(bVar2))
			{
				bParam0->f_3 = bVar2;
				if (bVar2 == UNK_0x16F2683693E537C9())
				{
					func_20(bParam0, 4);
					if (!func_9(bParam0, 3))
					{
						func_20(&(bParam0->f_6), 6);
					}
				}
			}
		}
		if (func_35(bParam0))
		{
			bParam0->f_4 = func_74(UNK_0x16F2683693E537C9(), 0);
		}
		if (func_49(bParam0))
		{
			if (func_73() && func_67(bParam0))
			{
				func_20(bParam0, 0);
			}
		}
		else
		{
			func_65(bParam0);
		}
	}
	if (func_43(bParam0))
	{
		bParam0->f_6.f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

void func_65(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0->f_3) && func_66(UNK_0x83FACCC48B68F9D1(bParam0->f_3)))
	{
		func_20(bParam0, 0);
	}
	else
	{
		func_5(bParam0, 0);
	}
}

bool func_66(int iParam0)
{
	return (iParam0 != -1 && UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_852, true));
}

bool func_67(bool bParam0)
{
	bool bVar0;

	bVar0 = func_72();
	if (UNK_0xAFE0D3608EDA7039(bParam0->f_1))
	{
		func_71(bParam0);
		switch (bParam0->f_2)
		{
			case joaat("AKULA"):
				bVar0 = !UNK_0xDE85FD29C72C3AA2(bParam0->f_1);
				break;
		}
	}
	else if (func_70(bParam0))
	{
		if (func_69(bParam0))
		{
			UNK_0x0C8A454B494DAA0D(bParam0->f_1);
		}
	}
	else
	{
		func_68(bParam0);
	}
	return bVar0;
}

void func_68(bool bParam0)
{
	func_20(&(bParam0->f_6), 4);
	bParam0->f_6.f_1 = UNK_0x1C0640BA9A7327B3();
}

bool func_69(bool bParam0)
{
	return (UNK_0x1C0640BA9A7327B3() - bParam0->f_6.f_1) >= 200;
}

bool func_70(bool bParam0)
{
	return func_9(&(bParam0->f_6), 4);
}

void func_71(bool bParam0)
{
	func_5(&(bParam0->f_6), 4);
}

bool func_72()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_852, true);
}

bool func_73()
{
	return !func_28();
}

bool func_74(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x405E212DDE472467(bParam0, iParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, iParam1);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				iVar1 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar0));
				if (iVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!UNK_0xBBA8A868118C90ED(bVar0, bVar3, 0))
					{
						if (UNK_0xA30B8362589C124A(bVar0, bVar3, 0) == bParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

bool func_76()
{
	if (func_77())
	{
		return true;
	}
	return false;
}

bool func_77()
{
	var uVar0;

	func_85(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_84())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_83())
	{
		return true;
	}
	if (func_82(159))
	{
		if (!func_81())
		{
			return true;
		}
	}
	if (func_82(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_78() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_78()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_78()
{
	switch (func_80())
	{
		case 0:
			return func_79();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_79()
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

int func_80()
{
	return Global_30768;
}

bool func_81()
{
	return Global_2450632.f_598;
}

bool func_82(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_83()
{
	return Global_2460680;
}

bool func_84()
{
	return Global_2450632.f_593;
}

void func_85(var uParam0)
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
					func_86(iVar0);
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

void func_86(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_58(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_87(bVar4, &bVar5))
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

bool func_87(bool bParam0, var uParam1)
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

bool func_88(bool bParam0)
{
	func_64(bParam0);
	if (func_63(bParam0))
	{
		if (func_49(bParam0))
		{
			if (UNK_0xAFE0D3608EDA7039(bParam0->f_1))
			{
				if (!func_46())
				{
					func_45(bParam0, 0, 0);
				}
				else
				{
					func_20(&(bParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_20(&(bParam0->f_6), 3);
		}
	}
	return true;
}

