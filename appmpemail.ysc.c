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
	int iLocal_18 = 0;
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = false;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[128] = "";
	struct<6> Local_62[59];
	struct<16> Local_417[59];
	bool bLocal_1362 = false;
	vector3 vLocal_1363 = { 0f, 0f, 0f };
	vector3 vLocal_1366 = { 0f, 0f, 0f };
	bool bLocal_1369 = false;
	bool bLocal_1370 = false;
	bool bLocal_1371 = false;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	struct<314> Local_1374 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	UNK_0xB57F88F0123F4C38();
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
	{
		func_61();
	}
	func_60();
	Global_21871 = 0;
	Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
	Global_19663 = 0;
	func_59();
	func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_53();
	func_51();
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 7;
	}
	iLocal_43 = UNK_0x1C0640BA9A7327B3();
	Global_19490 = 0;
	UNK_0x1CFAC524932A967E(&vLocal_1366);
	vLocal_1363 = { vLocal_1366 };
	vLocal_1363.x = (vLocal_1363.x - 10f);
	vLocal_1363.f_1 = (vLocal_1363.y + 20f);
	Global_21838 = 0;
	Global_21839 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_21839 == 0 && Global_21838 == 1)
		{
			func_50();
		}
		if (Global_21839 == 1 && Global_21838 == 0)
		{
			func_45();
		}
		if (iLocal_42 == 0)
		{
			iLocal_44 = UNK_0x1C0640BA9A7327B3();
			if ((iLocal_44 - iLocal_43) > 500)
			{
				iLocal_42 = 1;
			}
		}
		if ((Global_19486.f_1 != 9 && Global_21839 == 0) && Global_21838 == 0)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						if (Global_2547059 == 0)
						{
							func_44();
							func_37();
						}
					}
					break;
				case 8:
					if (Global_21871 == 1)
					{
						func_11();
						func_5();
					}
					break;
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					Global_21838 = 1;
				}
			}
			else if (func_3(2, Global_19454, 0) || UNK_0xEAE0D21A50E6C7F4(Global_7357, 12))
			{
				if (UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					UNK_0x0674E58A79778E99(&Global_7357, 12);
					func_2();
					Global_19464 = 1;
					Global_21871 = 0;
					if (Global_19486.f_1 > 3)
					{
						Global_19486.f_1 = 7;
					}
					if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
					{
						func_61();
					}
					func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					func_53();
					func_51();
					if (Global_4268500[iLocal_36 /*104*/].f_29 > 0)
					{
						if (Global_4268500[iLocal_36 /*104*/].f_31 == 1)
						{
							Global_4268500[iLocal_36 /*104*/].f_29 = 4;
							Global_4268500[iLocal_36 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4268500[iLocal_36 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
		{
			func_61();
		}
		if (func_1())
		{
			func_61();
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
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

bool func_3(int iParam0, int iParam1, int iParam2)
{
	if (UNK_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 1 && UNK_0xD245978525608929(iParam0, iParam1)))
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			if (UNK_0xDAC65F45B0B2D176() == 0 || (UNK_0x4FD68D5821EE3E19() && UNK_0x91E3F625EF57450D(2)))
			{
				return false;
			}
		}
		if (UNK_0x798A3F1296751F46() || UNK_0xE57E602827E07C9D())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_4()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_5()
{
	if (bLocal_39)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_39 = false;
		}
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (bLocal_39 == 0)
	{
		if (func_3(2, Global_19462, 0))
		{
			func_9();
			bLocal_39 = true;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19463, 0))
		{
			func_6();
			bLocal_39 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_6()
{
	func_58(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_7();
}

void func_7()
{
	if (func_8())
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

bool func_8()
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

void func_9()
{
	func_58(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_10();
}

void func_10()
{
	if (func_8())
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

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4268500[iLocal_36 /*104*/].f_24 == 1)
	{
		if (Global_19464 == 0)
		{
			if (UNK_0x06F8112AA79C53D9(2, Global_19457))
			{
				func_2();
				Global_19464 = 1;
				func_30();
				if (Global_4268500[iLocal_36 /*104*/].f_27 == 1)
				{
					Global_4268500[iLocal_36 /*104*/].f_99[0] = 0;
					Global_4268500[iLocal_36 /*104*/].f_99[1] = 0;
					Global_4268500[iLocal_36 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4268500[iLocal_36 /*104*/].f_99[Global_19486] = 0;
				}
				if (func_29(iLocal_36))
				{
				}
				else
				{
					Global_4268500[iLocal_36 /*104*/].f_24 = 0;
					Global_4268500[iLocal_36 /*104*/].f_28 = 0;
				}
				UNK_0xD59AE843FA2C6B40(Global_4268500[iLocal_36 /*104*/].f_16);
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_53();
				if (iLocal_34 > 0)
				{
					iLocal_34 = (iLocal_34 - 1);
				}
				func_51();
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
					Global_21871 = 0;
				}
			}
		}
	}
	else if (Global_19464 == 0)
	{
		if (UNK_0x06F8112AA79C53D9(2, Global_19458))
		{
			if (iLocal_38 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					StringCopy(&Global_73809, UNK_0x19C9F30A7697B43C(&Global_21846), 64);
					if (UNK_0x7F8A39872A07D2CE(&Global_73809, "HARDCODED_4207156"))
					{
						Global_19486.f_1 = 3;
						Global_1694146 = 1;
					}
					else
					{
						Global_73938 = 7;
						UNK_0x5D96D8530B3D0904(&Global_7357, 10);
						Global_19486.f_1 = 6;
					}
				}
				func_61();
			}
		}
	}
	if (Global_4268500[iLocal_36 /*104*/].f_31 == 1)
	{
		if (Global_19464 == 0)
		{
			if (func_3(2, Global_19458, 0))
			{
				func_27();
				Global_19464 = 1;
				Global_4268500[iLocal_36 /*104*/].f_29 = 2;
				Global_4268500[iLocal_36 /*104*/].f_24 = 1;
				Global_4268500[iLocal_36 /*104*/].f_31 = 0;
				UNK_0x0674E58A79778E99(&Global_7356, 17);
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_53();
				func_51();
			}
		}
	}
	if (Global_19464 == 0 && iLocal_42 == 1)
	{
		if (func_3(2, Global_19455, 0))
		{
			Global_19464 = 1;
			if (Global_4268500[iLocal_36 /*104*/].f_29 > 0)
			{
				func_27();
				Global_4268500[iLocal_36 /*104*/].f_29 = 3;
				Global_4268500[iLocal_36 /*104*/].f_24 = 1;
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_53();
				func_51();
			}
			else if (Global_4268500[iLocal_36 /*104*/].f_30 == 1)
			{
				func_27();
				Global_6671 = 144;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 10;
					func_25();
				}
				func_24("appContacts");
				Global_19484 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				UNK_0x5E8C29AE121DF1C7("appContacts");
				Global_6671 = Global_4268500[iLocal_36 /*104*/].f_17;
				if (func_23(Global_6671, Global_19486) == 0)
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_211", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_13();
				func_61();
			}
		}
	}
}

void func_13()
{
	vector3 vVar0[24];

	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!UNK_0x83D8570832F172A7(Global_19467))
	{
		if (Global_76622)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_20(Global_7961);
			if (Global_7961 == 1)
			{
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19490;
			}
			else
			{
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				UNK_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_18();
				UNK_0x0674E58A79778E99(&Global_7358, 9);
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			break;
		case 7:
			break;
		case 10:
			func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		case 9:
			if (Global_19485 == 1)
			{
				func_17();
				func_58(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (Global_20818)
				{
					UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(4);
					UNK_0x3CAEA85DA607305E(false);
					UNK_0x3CAEA85DA607305E(2);
					UNK_0x7ACC3006A87F8B39("CELL_CONDFON");
					UNK_0xD06AC7C87A34A6AD(&Global_20820);
					UNK_0x779B34565F4D71B1();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					UNK_0x7E60D21B163E9D56();
				}
				else if (func_23(Global_6671, Global_19486) == 0)
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_58(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_17();
				if (Global_20818)
				{
					UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(4);
					UNK_0x3CAEA85DA607305E(false);
					UNK_0x3CAEA85DA607305E(2);
					UNK_0x7ACC3006A87F8B39("CELL_CONDFON");
					UNK_0xD06AC7C87A34A6AD(&Global_20820);
					UNK_0x779B34565F4D71B1();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_23(Global_6671, Global_19486) == 0)
					{
						func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			func_14();
			break;
		default:
			break;
	}
}

void func_14()
{
	if (UNK_0x83D8570832F172A7(Global_19467))
	{
		func_15();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_76622)
	{
		func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x0674E58A79778E99(&Global_7356, 17);
	}
}

void func_16(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_17()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 0);
					break;
				case 2:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 1);
					break;
				case 3:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 2);
					break;
				case 4:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 3);
					break;
				case 5:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 4);
					break;
				case 6:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 5);
					break;
				case 7:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 6);
					break;
				default:
					break;
			}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 6);
					break;
				case 2:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 0);
					break;
				case 3:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 1);
					break;
				case 4:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 2);
					break;
				case 5:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 3);
					break;
				case 6:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 4);
					break;
				case 7:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 5);
					break;
				default:
					break;
			}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 5);
					break;
				case 2:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 6);
					break;
				case 3:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 1);
					break;
				case 4:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 0);
					break;
				case 5:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 2);
					break;
				case 6:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 3);
					break;
				case 7:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 4);
					break;
				default:
					break;
			}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4270041)
			{
				case 1:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 0);
					break;
				case 2:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 1);
					break;
				case 3:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 2);
					break;
				case 4:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 3);
					break;
				case 5:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 4);
					break;
				case 6:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 5);
					break;
				case 7:
					UNK_0xB70BA516AA87BA2D(UNK_0xD803B885F5E47A62(), 6);
					break;
				default:
					break;
			}
		}
	}
}

void func_18()
{
	if (Global_76622)
	{
		if (func_19() == 0)
		{
			return;
		}
		func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x5D96D8530B3D0904(&Global_7356, 17);
	}
}

int func_19()
{
	return 0;
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
		if (func_21(14))
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
								func_16(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_16(&(Global_7363[iVar1 /*15*/]));
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
								func_16(&(Global_7363[iVar1 /*15*/]));
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
								func_16(&(Global_7363[iVar1 /*15*/]));
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
								func_16(&(Global_7363[iVar1 /*15*/]));
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
								func_16(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_21(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_22(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_16(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_16(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_16(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_16(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_16(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_24(bool bParam0)
{
	UNK_0x92DCE5C81176D2B4(bParam0);
	while (!UNK_0x1FBF08B001C4788A(bParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_26() && UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && iVar1 == 0)
		{
			iVar2 = UNK_0x98F1B512A2CC07C5(UNK_0x16F2683693E537C9(), false);
			if (Global_76622)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || UNK_0xDCCE25EA1C1D1F76(UNK_0x16F2683693E537C9()))
				{
					iVar0 = 1;
				}
			}
			else if (UNK_0xDCCE25EA1C1D1F76(UNK_0x16F2683693E537C9()))
			{
				iVar0 = 1;
			}
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
						{
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
							}
							else
							{
								if (Global_76622)
								{
									UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 244, false);
									UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 243, false);
									UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 242, false);
								}
								UNK_0x5D96D8530B3D0904(&Global_7356, 11);
								UNK_0x8D4C354BB8991817(UNK_0x16F2683693E537C9(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

bool func_26()
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x5A0033B025D45F1B();
	iVar1 = UNK_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		return true;
	}
	return false;
}

void func_27()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_28();
	}
}

void func_28()
{
	if (func_8())
	{
		UNK_0x5A963FB0365294C8(5);
	}
}

bool func_29(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return true;
	}
	return false;
}

void func_30()
{
	if (func_21(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_31();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_31()
{
	func_32();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_32()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_35(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_34(UNK_0x16F2683693E537C9());
			if (func_33(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_33(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_37()
{
	struct<16> Var0;

	if (Global_19464 == 0)
	{
		if ((func_3(2, Global_19455, 0) || Global_4269750 == 1) || Global_21865 == 1)
		{
			if (Global_4269750 == 0 && Global_21865 == 0)
			{
				func_27();
			}
			Global_19464 = 1;
			iLocal_42 = 0;
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 8;
					Global_21871 = 1;
					iLocal_35 = iLocal_34;
					UNK_0x113A2E2F6779EEA3(iLocal_19[iLocal_34], &Local_1374);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_40 = 0;
				UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
				iLocal_45 = UNK_0x7A8BB56B212464AC();
				while (!UNK_0xC95D7AEEDEF4946B(iLocal_45) && iLocal_40 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_42();
				UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(9);
				UNK_0x3CAEA85DA607305E(false);
				func_16("CELL_1");
				UNK_0x7ACC3006A87F8B39("CELL_TO_FIELD");
				UNK_0xD06AC7C87A34A6AD(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()));
				UNK_0x779B34565F4D71B1();
				UNK_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_2));
				UNK_0x779B34565F4D71B1();
				UNK_0x7ACC3006A87F8B39("CELL_EMAIL_BCON");
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[0 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[1 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[2 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[3 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[4 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[5 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[6 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[7 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[8 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_56[9 /*16*/]));
				UNK_0x779B34565F4D71B1();
				UNK_0x7ACC3006A87F8B39("CELL_2000");
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_2));
				UNK_0x779B34565F4D71B1();
				switch (Local_1374.f_313)
				{
					case 0:
						break;
					case 1:
						break;
					case 2:
						UNK_0x024BC5F58A72410C("EmailAds_Dock_Tease");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 3:
						UNK_0x024BC5F58A72410C("EmailAds_Warstock");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 4:
						UNK_0x024BC5F58A72410C("EmailAds_Legendary_Motorsport");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 5:
						UNK_0x024BC5F58A72410C("EmailAds_LS_Customs");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 6:
						UNK_0x024BC5F58A72410C("EmailAds_Elitas_Travel");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 7:
						UNK_0x024BC5F58A72410C("EmailAds_LS_Tourist_Info");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 8:
						UNK_0x024BC5F58A72410C("emailads_dynasty8");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 9:
						UNK_0x024BC5F58A72410C("emailads_bennys");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 10:
						UNK_0x024BC5F58A72410C("emailads_ammunation");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 11:
						UNK_0x024BC5F58A72410C("emailads_SSSA");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 12:
						UNK_0x024BC5F58A72410C("emailads_maze_bank");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 13:
						UNK_0x024BC5F58A72410C("emailads_shark");
						UNK_0x1200CC973A2399C8(true);
						break;
					case 14:
						UNK_0x024BC5F58A72410C("emailads_RP");
						UNK_0x1200CC973A2399C8(true);
						break;
				}
				UNK_0x7E60D21B163E9D56();
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_58(Global_19467, "DISPLAY_VIEW", 9f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (iLocal_34 == iLocal_33)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 25))
					{
						UNK_0x0674E58A79778E99(&Global_4269765, 25);
					}
					if (Global_4268499 > 0)
					{
						func_39(9980, bLocal_1369, -1, 1, 0);
						if (Global_4268499 > 0)
						{
							Global_4268499 = 0;
						}
					}
				}
				return;
			}
			if (Global_4268500[iLocal_36 /*104*/].f_24 != 0)
			{
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 8;
				}
				if (Global_4269750 == 1 || Global_21865 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_4269750 == 1)
					{
					}
					Global_21865 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_40 = 0;
					UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
					iLocal_45 = UNK_0x7A8BB56B212464AC();
					while (!UNK_0xC95D7AEEDEF4946B(iLocal_45) && iLocal_40 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_40 = 1;
						}
					}
					if (iLocal_40 == 1)
					{
						iLocal_41 = 0;
					}
					else
					{
						iLocal_41 = UNK_0xA52833FE33F41C53(iLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_4268500[iLocal_36 /*104*/].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_21846, "NO_HYPERLINK", 64);
				Var0 = { Global_4268500[iLocal_36 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (UNK_0xEF07223F00EBE9C9(&Var0))
				{
					Global_21846 = { Var0 };
					iLocal_38 = 1;
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					UNK_0x5D96D8530B3D0904(&Global_7356, 17);
					Global_4268500[iLocal_36 /*104*/].f_26 = 1;
					Global_4268500[iLocal_36 /*104*/].f_24 = 2;
				}
				if (Global_4268500[iLocal_36 /*104*/].f_26 == 0)
				{
					Global_4268500[iLocal_36 /*104*/].f_24 = 1;
				}
				func_42();
				UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(9);
				UNK_0x3CAEA85DA607305E(false);
				func_16("CELL_1");
				UNK_0x7ACC3006A87F8B39("CELL_TO_FIELD");
				UNK_0xD06AC7C87A34A6AD(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()));
				UNK_0x779B34565F4D71B1();
				if (Global_4268500[iLocal_36 /*104*/].f_17 == 145)
				{
					UNK_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
					UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_50));
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
					UNK_0x6B012227B3921E18(&(Global_1798[Global_4268500[iLocal_36 /*104*/].f_17 /*29*/].f_3));
					UNK_0x779B34565F4D71B1();
				}
				switch (Global_4268500[iLocal_36 /*104*/].f_32)
				{
					case 0:
						func_16(&(Global_4268500[iLocal_36 /*104*/]));
						break;
					case 1:
						UNK_0x7ACC3006A87F8B39(&(Global_4268500[iLocal_36 /*104*/]));
						UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_33));
						if (Global_4268500[iLocal_36 /*104*/].f_66 == 1 && !UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/].f_67), "NULL"))
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4268500[iLocal_36 /*104*/].f_66 == 2 && !UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/].f_67), "NULL")) && !UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (UNK_0xEF07223F00EBE9C9(&(Global_4268500[iLocal_36 /*104*/].f_67)))
							{
								UNK_0x6B012227B3921E18(&(Global_4268500[iLocal_36 /*104*/].f_67));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_67));
							}
							if (UNK_0xEF07223F00EBE9C9(&(Global_4268500[iLocal_36 /*104*/].f_83)))
							{
								UNK_0x6B012227B3921E18(&(Global_4268500[iLocal_36 /*104*/].f_83));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_83));
							}
						}
						UNK_0x779B34565F4D71B1();
						break;
					case 2:
						UNK_0x7ACC3006A87F8B39(&(Global_4268500[iLocal_36 /*104*/]));
						UNK_0x6D99DF8263D35CE5(Global_4268500[iLocal_36 /*104*/].f_49);
						UNK_0x779B34565F4D71B1();
						break;
					case 3:
						UNK_0x7ACC3006A87F8B39(&(Global_4268500[iLocal_36 /*104*/]));
						UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_33));
						UNK_0x6D99DF8263D35CE5(Global_4268500[iLocal_36 /*104*/].f_49);
						if (Global_4268500[iLocal_36 /*104*/].f_66 == 1 && !UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/].f_67), "NULL"))
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4268500[iLocal_36 /*104*/].f_66 == 2 && !UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/].f_67), "NULL")) && !UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (UNK_0xEF07223F00EBE9C9(&(Global_4268500[iLocal_36 /*104*/].f_67)))
							{
								UNK_0x6B012227B3921E18(&(Global_4268500[iLocal_36 /*104*/].f_67));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_67));
							}
							if (UNK_0xEF07223F00EBE9C9(&(Global_4268500[iLocal_36 /*104*/].f_83)))
							{
								UNK_0x6B012227B3921E18(&(Global_4268500[iLocal_36 /*104*/].f_83));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_83));
							}
						}
						UNK_0x779B34565F4D71B1();
						break;
					case 4:
						func_38(iLocal_36);
						break;
					case 5:
						func_38(iLocal_36);
						break;
					case 6:
						func_38(iLocal_36);
						break;
					case 7:
						func_38(iLocal_36);
						break;
					case 8:
						func_38(iLocal_36);
						break;
					case 9:
						func_38(iLocal_36);
						break;
					case 10:
						func_38(iLocal_36);
						break;
					case 11:
						func_38(iLocal_36);
						break;
				}
				if (Global_4268500[iLocal_36 /*104*/].f_17 == 145)
				{
					UNK_0x7ACC3006A87F8B39("CELL_2000");
					UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iLocal_36 /*104*/].f_50));
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					func_16(&(Global_1798[Global_4268500[iLocal_36 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4268500[iLocal_36 /*104*/].f_17 == 149)
				{
					UNK_0x024BC5F58A72410C("emailads_maze_bank");
					UNK_0x1200CC973A2399C8(true);
				}
				if (Global_4268500[iLocal_36 /*104*/].f_17 == 140)
				{
					UNK_0x024BC5F58A72410C("EmailAds_Warstock");
					UNK_0x1200CC973A2399C8(true);
				}
				if (Global_4268500[iLocal_36 /*104*/].f_17 == 155)
				{
					UNK_0x024BC5F58A72410C("emailads_arena");
					UNK_0x1200CC973A2399C8(true);
				}
				if (Global_4268500[iLocal_36 /*104*/].f_17 == 160)
				{
					UNK_0x024BC5F58A72410C("emailads_diamond");
					UNK_0x1200CC973A2399C8(true);
				}
				UNK_0x7E60D21B163E9D56();
				Global_21871 = 1;
				func_58(Global_19467, "DISPLAY_VIEW", 9f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0xD59AE843FA2C6B40(Global_4268500[iLocal_36 /*104*/].f_16);
				if (Global_4268500[iLocal_36 /*104*/].f_29 > 0)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4268500[iLocal_36 /*104*/].f_30 == 1)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268500[iLocal_36 /*104*/].f_29 > 0)
				{
					if (UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/]), "CELL_FINV"))
					{
						if (Global_19474)
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268500[iLocal_36 /*104*/].f_24 == 2)
				{
					if (Global_4268500[iLocal_36 /*104*/].f_31 == 1)
					{
						iLocal_38 = 0;
						if (Global_19474)
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						UNK_0x5D96D8530B3D0904(&Global_7356, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						UNK_0x0674E58A79778E99(&Global_7356, 17);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					UNK_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					UNK_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
				Global_4269750 = 0;
			}
			else
			{
				Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
				Global_4269750 = 0;
			}
		}
		if (Global_2547059 == 0)
		{
			if (Global_76622)
			{
			}
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (Global_111638.f_14136[iParam0 /*104*/].f_49)
	{
		case 1:
			UNK_0x7ACC3006A87F8B39("CELL_CL01");
			break;
		case 2:
			UNK_0x7ACC3006A87F8B39("CELL_CL02");
			break;
		case 3:
			UNK_0x7ACC3006A87F8B39("CELL_CL03");
			break;
		case 4:
			UNK_0x7ACC3006A87F8B39("CELL_CL04");
			break;
		case 5:
			UNK_0x7ACC3006A87F8B39("CELL_CL05");
			break;
		case 6:
			UNK_0x7ACC3006A87F8B39("CELL_CL06");
			break;
		case 7:
			UNK_0x7ACC3006A87F8B39("CELL_CL07");
			break;
		case 8:
			UNK_0x7ACC3006A87F8B39("CELL_CL08");
			break;
		case 9:
			UNK_0x7ACC3006A87F8B39("CELL_CL09");
			break;
	}
	UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iParam0 /*104*/]));
	while (iVar0 < Global_111638.f_14136[iParam0 /*104*/].f_49)
	{
		switch (Global_111638.f_14136[iParam0 /*104*/].f_32)
		{
			case 4:
				UNK_0x6B012227B3921E18(&(Global_2537071.f_1662[iVar0 /*4*/]));
				break;
			case 5:
				UNK_0x6B012227B3921E18(&(Global_1662018[iVar0 /*4*/]));
				break;
			case 6:
				UNK_0x6B012227B3921E18(&(Global_1662059[iVar0 /*4*/]));
				break;
			case 7:
				UNK_0x6B012227B3921E18(&(Global_1662080[iVar0 /*4*/]));
				break;
			case 8:
				UNK_0x6B012227B3921E18(&(Global_1662097[iVar0 /*4*/]));
				break;
			case 9:
				UNK_0x6B012227B3921E18(&(Global_1662110[iVar0 /*4*/]));
				break;
			case 10:
				UNK_0x6B012227B3921E18(&(Global_1662123[iVar0 /*4*/]));
				break;
			case 11:
				UNK_0x6B012227B3921E18(&(Global_1662136[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	UNK_0x779B34565F4D71B1();
}

void func_39(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_40(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_41()
{
	return Global_1312745;
}

void func_42()
{
	int iVar0;

	if (bLocal_1362)
	{
		UNK_0xF5A41F3D3B38EFE3(&cLocal_46);
	}
	bLocal_1362 = false;
	if (Global_4268500[iLocal_36 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_4268500[iLocal_36 /*104*/]), &(Local_62[iVar0 /*6*/])))
			{
				if (func_43(&(Local_62[iVar0 /*6*/])))
				{
					StringCopy(&cLocal_46, "BAT_CASE_", 64);
					StringIntConCat(&cLocal_46, Global_1694138, 64);
				}
				else
				{
					cLocal_46 = { Local_417[iVar0 /*16*/] };
				}
				bLocal_1362 = true;
				UNK_0x0D3BE1DE0262A012(&cLocal_46, 0);
				while (!UNK_0x27117E2CDD4D67C3(&cLocal_46))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

bool func_43(bool bParam0)
{
	switch (UNK_0x12AB0310C2281427(bParam0))
	{
		case 368818696: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -242537573: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case 293851599: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case 1276417163: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -695052470: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -272335065: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case 1286719131: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -1417266496: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -469944288: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -687436221: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case 1989355620: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case 549480519: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case 1944388503: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -934641488: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -728564821: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case 1522380948: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -1256768569: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -320488889: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -539437394: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
		case -1801936221: /* GXTEntry: "~a~~a~~a~~nrt~ <img src" */
			return true;
		default:
			break;
	}
	return false;
}

void func_44()
{
	if (bLocal_39)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_39 = false;
		}
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
		}
	}
	if (bLocal_39 == 0)
	{
		if (func_3(2, Global_19462, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
			bLocal_39 = true;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19463, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
			bLocal_39 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_45()
{
	float fVar0;

	fVar0 = func_46(vLocal_1366, vLocal_1363, Global_19446, -90f, 0f, 90f, 350f, 0);
	UNK_0x2BF9F8AAD637763A((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_21839 = 0;
		iLocal_18 = 0;
	}
}

float func_46(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;

	if (Global_4270044 == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14) && Global_19486.f_1 < 4)
		{
			UNK_0x1CFAC524932A967E(&Var0);
			if (Global_19439[Global_19431 /*3*/].f_1 == Var0.f_1)
			{
				Global_4270044 = 1;
			}
		}
	}
	if (func_49() && Global_4270044 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = UNK_0x1C0640BA9A7327B3();
	}
	fVar3 = func_48((SYSTEM::TO_FLOAT((UNK_0x1C0640BA9A7327B3() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_19414 = { func_47(vParam0, vParam3, fVar4) };
		Global_19417 = { func_47(vParam6, vParam9, fVar4) };
	}
	else
	{
		Global_19414 = { vParam3 };
		Global_19417 = { vParam9 };
	}
	UNK_0x39F06A2B18483C68(Global_19414);
	UNK_0x44FE29702110D5C6(Global_19417, 0);
	return fVar3;
}

Vector3 func_47(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_48(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_21(14))
		{
			return false;
		}
		if (UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (!UNK_0x00295B14470935CE())
			{
				if (UNK_0x70EED0761B82965E(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
				{
					return false;
				}
			}
		}
		if (((UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9()) || UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9())) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4FB00DDF9C0D8114(UNK_0x16F2683693E537C9()))
		{
			return false;
		}
		if (Global_110686)
		{
			return false;
		}
	}
	if (Global_76622)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = UNK_0x5A0033B025D45F1B();
	iVar1 = UNK_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || UNK_0x00295B14470935CE()))
	{
		iVar2 = 1;
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar3 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if ((((((((UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bVar3)) || UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(bVar3))) || UNK_0xD1CC995EE5EB1EC1(UNK_0x134B62B726CEC8E6(bVar3))) || UNK_0x134B62B726CEC8E6(bVar3) == joaat("SEASHARK")) || UNK_0x134B62B726CEC8E6(bVar3) == joaat("SEASHARK2")) || UNK_0x134B62B726CEC8E6(bVar3) == joaat("RHINO")) || UNK_0x134B62B726CEC8E6(bVar3) == joaat("SUBMERSIBLE")) || UNK_0x134B62B726CEC8E6(bVar3) == joaat("SUBMERSIBLE2")) || UNK_0x134B62B726CEC8E6(bVar3) == joaat("TORO"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4270043 || iVar2 == 1)
	{
		if (UNK_0x8A22C4C08282BF26(joaat("APPTRACKIFY")) > 0 || Global_111638.f_14046.f_89)
		{
			if (UNK_0x8A22C4C08282BF26(joaat("MICHAEL2")) > 0)
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
			return true;
		}
	}
	return false;
}

void func_50()
{
	float fVar0;

	fVar0 = func_46(vLocal_1363, vLocal_1366, -90f, 0f, 90f, Global_19446, 350f, 0);
	UNK_0x2BF9F8AAD637763A((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_21838 = 0;
		func_61();
		iLocal_18 = 0;
	}
}

void func_51()
{
	if (Global_4269750 == 0)
	{
		if (iLocal_35 < 0)
		{
			iLocal_35 = 0;
		}
		func_52(Global_19467, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_58(Global_19467, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_35), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		if (Global_19474)
		{
			if (iLocal_32 > 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_76622)
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_52(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_16(bParam2);
	if (!UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		func_16(bParam3);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_16(bParam4);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam5))
	{
		func_16(bParam5);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam6))
	{
		func_16(bParam6);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_53()
{
	int iVar0[12];
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	char cVar17[64];
	int iVar33;
	int iVar34[10];
	int iVar45;

	iLocal_32 = 0;
	iLocal_33 = 0;
	func_30();
	bVar13 = false;
	iVar14 = 0;
	while (bVar13 < 11)
	{
		if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
		{
			func_61();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4268500[iVar16 /*104*/].f_18 = -1;
		Global_4268500[iVar16 /*104*/].f_18.f_1 = 0;
		Global_4268500[iVar16 /*104*/].f_18.f_2 = 0;
		Global_4268500[iVar16 /*104*/].f_18.f_3 = 0;
		Global_4268500[iVar16 /*104*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
			{
				func_61();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4268500[iVar15 /*104*/].f_24 != 0)
				{
					if (Global_4268500[iVar15 /*104*/].f_99[Global_19486] == 1)
					{
						if (func_57(Global_4268500[iVar15 /*104*/].f_18, Global_4268500[iVar16 /*104*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_4268500[iVar16 /*104*/].f_28 == 0)
							{
								bLocal_37 = false;
							}
							else
							{
								bLocal_37 = true;
							}
						}
					}
				}
			}
			iVar15++;
		}
		iLocal_19[bVar13] = iVar16;
		iVar0[iVar16] = 1;
		if (Global_4268500[iVar16 /*104*/].f_24 != 0)
		{
			if (Global_4268500[iVar16 /*104*/].f_99[Global_19486] == 1)
			{
				UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(8);
				UNK_0x3CAEA85DA607305E(bVar13);
				UNK_0x3CAEA85DA607305E(bLocal_37);
				UNK_0x1200CC973A2399C8(false);
				if (Global_4268500[iVar16 /*104*/].f_17 == 145)
				{
					UNK_0x7ACC3006A87F8B39("CELL_2000");
					UNK_0xD06AC7C87A34A6AD(&(Global_4268500[iVar16 /*104*/].f_50));
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					func_16(&(Global_1798[Global_4268500[iVar16 /*104*/].f_17 /*29*/].f_3));
				}
				cVar17 = { Global_4268500[iVar16 /*104*/] };
				if (func_43(&(Global_4268500[iVar16 /*104*/])))
				{
					iVar33 = func_54(7315, -1, -1);
					switch (iVar33)
					{
						case 0:
							StringCopy(&cVar17, "BONEMAIL_TXT_SUB", 64);
							break;
						case 1:
							StringCopy(&cVar17, "BONEMAIL2_TXT_SUB", 64);
							break;
						case 2:
							StringCopy(&cVar17, "BONEMAIL3_TXT_SUB", 64);
							break;
						case 3:
							StringCopy(&cVar17, "BONEMAIL4_TXT_SUB", 64);
							break;
						case 4:
							StringCopy(&cVar17, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&cVar17, "_SUB", 64);
				}
				func_16(&cVar17);
				UNK_0x7E60D21B163E9D56();
				iLocal_32++;
				iLocal_33++;
			}
		}
		bVar13++;
	}
	bVar13 = iLocal_32;
	iVar45 = 0;
	while (bVar13 < (iLocal_1373 + iLocal_32))
	{
		iVar14 = 0;
		iVar45 = 0;
		while (iVar14 < iLocal_1373 && iVar45 == 0)
		{
			UNK_0x113A2E2F6779EEA3(iVar14, &Local_1374);
			if (iVar34[iVar14] == 0)
			{
				UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(8);
				UNK_0x3CAEA85DA607305E(bVar13);
				if (bVar13 == 0)
				{
					if (Global_4268499 == 0)
					{
						UNK_0x3CAEA85DA607305E(true);
					}
					else
					{
						UNK_0x3CAEA85DA607305E(false);
					}
				}
				else
				{
					UNK_0x3CAEA85DA607305E(true);
				}
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7ACC3006A87F8B39("CELL_2000");
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_2));
				UNK_0x779B34565F4D71B1();
				UNK_0x7ACC3006A87F8B39("CELL_EMAIL_SUBJ");
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_23[0 /*16*/]));
				UNK_0xD06AC7C87A34A6AD(&(Local_1374.f_23[1 /*16*/]));
				UNK_0x779B34565F4D71B1();
				UNK_0x7E60D21B163E9D56();
				iVar34[iVar14] = 1;
				iLocal_19[bVar13] = iVar14;
				iVar45 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					bLocal_1369 = Local_1374.f_1;
				}
			}
			iVar14++;
		}
		bVar13++;
	}
}

int func_54(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 == -1)
	{
		bParam1 = func_41();
	}
	iVar0 = 0;
	iVar1 = func_56(iParam0, bParam1);
	iVar2 = func_55(iParam0);
	if (0 != iVar1)
	{
		if (!UNK_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_55(int iParam0)
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

int func_56(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_41();
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

bool func_57(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

void func_58(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_59()
{
	switch (UNK_0xB3260A60545D3F11())
	{
		case -1:
			UNK_0xE22E533456FE806D("gta5mkt_en");
			break;
		case 0:
			UNK_0xE22E533456FE806D("gta5mkt_en");
			break;
		case 1:
			UNK_0xE22E533456FE806D("gta5mkt_fr");
			break;
		case 2:
			UNK_0xE22E533456FE806D("gta5mkt_ge");
			break;
		case 3:
			UNK_0xE22E533456FE806D("gta5mkt_it");
			break;
		case 4:
			UNK_0xE22E533456FE806D("gta5mkt_sp");
			break;
		case 5:
			UNK_0xE22E533456FE806D("gta5mkt_pt");
			break;
		case 6:
			UNK_0xE22E533456FE806D("gta5mkt_pl");
			break;
		case 7:
			UNK_0xE22E533456FE806D("gta5mkt_ru");
			break;
		case 8:
			UNK_0xE22E533456FE806D("gta5mkt_ko");
			break;
		case 9:
			UNK_0xE22E533456FE806D("gta5mkt_ch");
			break;
		case 10:
			UNK_0xE22E533456FE806D("gta5mkt_ja");
			break;
		case 11:
			UNK_0xE22E533456FE806D("gta5mkt_me");
			break;
		case 12:
			UNK_0xE22E533456FE806D("gta5mkt_cn");
			break;
	}
	UNK_0xF51E39152845129E(0, 6);
	SYSTEM::WAIT(0);
	bLocal_1370 = true;
	bLocal_1371 = false;
	while (bLocal_1370 && Global_19486.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_1372 = UNK_0x449444B0F7CC649C();
		if (func_4())
		{
			Global_19486.f_1 = 3;
			bLocal_1370 = false;
			bLocal_1371 = false;
		}
		switch (iLocal_1372)
		{
			case 3:
				bLocal_1370 = false;
				bLocal_1371 = true;
				break;
			case 0:
				bLocal_1370 = false;
				bLocal_1371 = true;
				break;
			case 1:
				break;
			case 4:
				bLocal_1370 = false;
				bLocal_1371 = false;
				break;
			case 2:
				bLocal_1370 = false;
				bLocal_1371 = false;
				break;
		}
	}
	if (bLocal_1371)
	{
		iLocal_1373 = UNK_0xD86624A40067B84F();
	}
	else
	{
		iLocal_1373 = 0;
	}
}

void func_60()
{
	StringCopy(&(Local_62[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_417[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_417[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_417[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_417[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_62[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_417[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_62[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_417[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_62[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_417[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_417[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_417[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_417[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_417[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_417[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_417[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_62[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_417[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_62[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_417[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_62[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_417[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_417[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_417[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_417[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_62[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_417[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_62[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_417[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_62[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_417[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_62[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_417[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_62[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_417[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_62[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_417[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_62[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_417[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_62[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_417[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_62[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_417[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_62[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_417[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_62[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_417[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_62[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_417[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_62[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_417[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_62[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_417[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_62[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_417[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_62[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_417[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_62[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_417[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_62[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_417[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_62[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_417[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_62[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_417[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_62[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_417[39 /*16*/]), "", 64);
	StringCopy(&(Local_62[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_417[40 /*16*/]), "", 64);
	StringCopy(&(Local_62[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_417[41 /*16*/]), "", 64);
	StringCopy(&(Local_62[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_417[42 /*16*/]), "", 64);
	StringCopy(&(Local_62[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_417[43 /*16*/]), "", 64);
	StringCopy(&(Local_62[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_417[44 /*16*/]), "", 64);
	StringCopy(&(Local_62[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_417[45 /*16*/]), "", 64);
	StringCopy(&(Local_62[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_417[46 /*16*/]), "", 64);
	StringCopy(&(Local_62[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_417[47 /*16*/]), "", 64);
	StringCopy(&(Local_62[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_417[48 /*16*/]), "", 64);
	StringCopy(&(Local_62[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_417[49 /*16*/]), "", 64);
	StringCopy(&(Local_62[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_417[50 /*16*/]), "", 64);
	StringCopy(&(Local_62[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_417[51 /*16*/]), "", 64);
	StringCopy(&(Local_62[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_417[52 /*16*/]), "", 64);
	StringCopy(&(Local_62[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_417[53 /*16*/]), "", 64);
	StringCopy(&(Local_62[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_417[54 /*16*/]), "", 64);
	StringCopy(&(Local_62[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_417[55 /*16*/]), "", 64);
	StringCopy(&(Local_62[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_417[56 /*16*/]), "", 64);
	StringCopy(&(Local_62[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_417[57 /*16*/]), "", 64);
	StringCopy(&(Local_62[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_417[58 /*16*/]), "", 64);
}

void func_61()
{
	if (func_49() == 0)
	{
		UNK_0x39F06A2B18483C68(Global_19439[Global_19431 /*3*/]);
	}
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
	{
		func_62(0);
	}
	if (bLocal_1362)
	{
		UNK_0xF5A41F3D3B38EFE3(&cLocal_46);
	}
	Global_21839 = 0;
	Global_21838 = 0;
	UNK_0x10FAF14A60A0DBE1();
}

void func_62(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_66())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
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
	if (!func_63())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_63()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_65(0))
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

bool func_65(int iParam0)
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

bool func_66()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_67()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

