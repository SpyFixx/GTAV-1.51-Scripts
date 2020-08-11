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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = false;
	int iLocal_60 = 0;
	bool bLocal_61 = false;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<6> Local_84[165];
	struct<6> Local_1075[165];
	struct<8> Local_2066[19];
	bool bLocal_2219 = false;
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
		func_53();
	}
	func_46();
	Global_21871 = 0;
	Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
	Global_19663 = 0;
	func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_43();
	func_42();
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 7;
	}
	iLocal_65 = UNK_0x1C0640BA9A7327B3();
	Global_19490 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = UNK_0x1C0640BA9A7327B3();
			if ((iLocal_66 - iLocal_65) > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						if (Global_2547059 == 0)
						{
							func_37();
							func_33();
						}
					}
					break;
				case 8:
					if (Global_21871 == 1)
					{
						func_5();
						func_37();
					}
					break;
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					func_53();
				}
			}
			else if (func_3(2, Global_19454, 0) || UNK_0xEAE0D21A50E6C7F4(Global_7357, 12))
			{
				if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/]), "CELL_FINV"))
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
						func_53();
					}
					func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					func_43();
					func_42();
					if (Global_111638.f_14136[iLocal_58 /*104*/].f_29 > 0)
					{
						if (Global_111638.f_14136[iLocal_58 /*104*/].f_31 == 1)
						{
							Global_111638.f_14136[iLocal_58 /*104*/].f_29 = 4;
							Global_111638.f_14136[iLocal_58 /*104*/].f_24 = 1;
						}
						else
						{
							Global_111638.f_14136[iLocal_58 /*104*/].f_29 = 4;
							Global_111638.f_14136[iLocal_58 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
		{
			func_53();
		}
		if (func_1())
		{
			func_53();
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
	func_6();
}

void func_6()
{
	if (Global_111638.f_14136[iLocal_58 /*104*/].f_24 == 1)
	{
		if (Global_19464 == 0)
		{
			if (UNK_0xBFC0798A6E3417F9(2, Global_19457))
			{
				func_2();
				Global_19464 = 1;
				func_26();
				if (Global_111638.f_14136[iLocal_58 /*104*/].f_27 == 1)
				{
					Global_111638.f_14136[iLocal_58 /*104*/].f_99[0] = 0;
					Global_111638.f_14136[iLocal_58 /*104*/].f_99[1] = 0;
					Global_111638.f_14136[iLocal_58 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_111638.f_14136[iLocal_58 /*104*/].f_99[Global_19486] = 0;
				}
				if (func_25(iLocal_58))
				{
				}
				else
				{
					Global_111638.f_14136[iLocal_58 /*104*/].f_24 = 0;
					Global_111638.f_14136[iLocal_58 /*104*/].f_28 = 0;
				}
				UNK_0xD59AE843FA2C6B40(Global_111638.f_14136[iLocal_58 /*104*/].f_16);
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_43();
				if (iLocal_56 > 0)
				{
					iLocal_56 = (iLocal_56 - 1);
				}
				func_42();
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
			if (iLocal_60 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					StringCopy(&Global_73809, UNK_0x19C9F30A7697B43C(&Global_21846), 64);
					Global_73938 = 7;
					UNK_0x5D96D8530B3D0904(&Global_7357, 10);
					Global_19486.f_1 = 6;
				}
				func_53();
			}
		}
	}
	if (Global_111638.f_14136[iLocal_58 /*104*/].f_31 == 1)
	{
		if (Global_19464 == 0)
		{
			if (func_3(2, Global_19458, 0))
			{
				func_22();
				Global_19464 = 1;
				Global_111638.f_14136[iLocal_58 /*104*/].f_29 = 2;
				Global_111638.f_14136[iLocal_58 /*104*/].f_24 = 1;
				Global_111638.f_14136[iLocal_58 /*104*/].f_31 = 0;
				UNK_0x0674E58A79778E99(&Global_7356, 17);
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_43();
				func_42();
			}
		}
	}
	if (Global_19464 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_19455, 0))
		{
			Global_19464 = 1;
			if (Global_111638.f_14136[iLocal_58 /*104*/].f_29 > 0)
			{
				func_22();
				Global_111638.f_14136[iLocal_58 /*104*/].f_29 = 3;
				Global_111638.f_14136[iLocal_58 /*104*/].f_24 = 1;
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_43();
				func_42();
			}
			else if (Global_111638.f_14136[iLocal_58 /*104*/].f_30 == 1)
			{
				func_22();
				Global_6671 = 144;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 10;
					if (func_21() == 0)
					{
						func_19();
					}
				}
				func_18("appContacts");
				Global_19484 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				UNK_0x5E8C29AE121DF1C7("appContacts");
				Global_6671 = Global_111638.f_14136[iLocal_58 /*104*/].f_17;
				if (func_17(Global_6671, Global_19486) == 0)
				{
					func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_211", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_7();
				func_53();
			}
		}
	}
}

void func_7()
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
			func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_14(Global_7961);
			if (Global_7961 == 1)
			{
				func_45(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19490;
			}
			else
			{
				func_45(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				UNK_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_12();
				UNK_0x0674E58A79778E99(&Global_7358, 9);
				func_45(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			break;
		case 7:
			break;
		case 10:
			func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		case 9:
			if (Global_19485 == 1)
			{
				func_11();
				func_45(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (Global_20818)
				{
					UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(4);
					UNK_0x3CAEA85DA607305E(false);
					UNK_0x3CAEA85DA607305E(2);
					UNK_0x7ACC3006A87F8B39("CELL_CONDFON");
					UNK_0xD06AC7C87A34A6AD(&Global_20820);
					UNK_0x779B34565F4D71B1();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					UNK_0x7E60D21B163E9D56();
				}
				else if (func_17(Global_6671, Global_19486) == 0)
				{
					func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_45(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_11();
				if (Global_20818)
				{
					UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(4);
					UNK_0x3CAEA85DA607305E(false);
					UNK_0x3CAEA85DA607305E(2);
					UNK_0x7ACC3006A87F8B39("CELL_CONDFON");
					UNK_0xD06AC7C87A34A6AD(&Global_20820);
					UNK_0x779B34565F4D71B1();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
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
					if (func_17(Global_6671, Global_19486) == 0)
					{
						func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			func_8();
			break;
		default:
			break;
	}
}

void func_8()
{
	if (UNK_0x83D8570832F172A7(Global_19467))
	{
		func_9();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_76622)
	{
		func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x0674E58A79778E99(&Global_7356, 17);
	}
}

void func_10(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_11()
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

void func_12()
{
	if (Global_76622)
	{
		if (func_13() == 0)
		{
			return;
		}
		func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x5D96D8530B3D0904(&Global_7356, 17);
	}
}

int func_13()
{
	return 0;
}

void func_14(int iParam0)
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
		if (func_15(14))
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
								func_10(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_10(&(Global_7363[iVar1 /*15*/]));
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
								func_10(&(Global_7363[iVar1 /*15*/]));
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
								func_10(&(Global_7363[iVar1 /*15*/]));
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
								func_10(&(Global_7363[iVar1 /*15*/]));
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
								func_10(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_15(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_16(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_10(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_10(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_10(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_10(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_10(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_18(bool bParam0)
{
	UNK_0x92DCE5C81176D2B4(bParam0);
	while (!UNK_0x1FBF08B001C4788A(bParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_20() && UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0))
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

bool func_20()
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

int func_21()
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
		if (func_15(14))
		{
			return 0;
		}
		if (UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0))
		{
			return 0;
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (!UNK_0x00295B14470935CE())
			{
				if (UNK_0x70EED0761B82965E(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
				{
					return 0;
				}
			}
		}
		if (((UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9()) || UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9())) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4FB00DDF9C0D8114(UNK_0x16F2683693E537C9()))
		{
			return 0;
		}
		if (Global_110686)
		{
			return 0;
		}
	}
	if (Global_76622)
	{
		return 0;
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
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_23();
	}
}

void func_23()
{
	if (func_24())
	{
		UNK_0x5A963FB0365294C8(5);
	}
}

bool func_24()
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

bool func_25(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return true;
	}
	return false;
}

void func_26()
{
	if (func_15(14))
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
		Global_19486 = func_27();
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

var func_27()
{
	func_28();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_28()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_31(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_30(UNK_0x16F2683693E537C9());
			if (func_29(iVar0) && (!func_15(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_29(Global_111638.f_2358.f_539.f_4321))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_33()
{
	struct<16> Var0;
	bool bVar16;
	int iVar17;

	if (Global_19464 == 0)
	{
		if ((func_3(2, Global_19455, 0) || Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1) || Global_21865 == 1)
		{
			if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 0 && Global_21865 == 0)
			{
				func_22();
			}
			Global_19464 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_111638.f_14136[iLocal_58 /*104*/].f_24 != 0)
			{
				if (Global_19486.f_1 > 3)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					UNK_0x0674E58A79778E99(&Global_7356, 17);
					Global_19486.f_1 = 8;
				}
				if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1 || Global_21865 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1)
					{
					}
					Global_21865 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_62 = 0;
					UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
					iLocal_67 = UNK_0x7A8BB56B212464AC();
					while (!UNK_0xC95D7AEEDEF4946B(iLocal_67) && iLocal_62 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_62 = 1;
						}
					}
					if (iLocal_62 == 1)
					{
						iLocal_63 = 0;
					}
					else
					{
						iLocal_63 = UNK_0xA52833FE33F41C53(iLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_111638.f_14136[iLocal_58 /*104*/].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_21846, "NO_HYPERLINK", 64);
				Var0 = { Global_111638.f_14136[iLocal_58 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (UNK_0xEF07223F00EBE9C9(&Var0))
				{
					Global_21846 = { Var0 };
					iLocal_60 = 1;
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					UNK_0x5D96D8530B3D0904(&Global_7356, 17);
					Global_111638.f_14136[iLocal_58 /*104*/].f_26 = 1;
					Global_111638.f_14136[iLocal_58 /*104*/].f_24 = 2;
				}
				if (Global_111638.f_14136[iLocal_58 /*104*/].f_26 == 0)
				{
					Global_111638.f_14136[iLocal_58 /*104*/].f_24 = 1;
				}
				func_36();
				UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(7);
				UNK_0x3CAEA85DA607305E(false);
				if (Global_111638.f_14136[iLocal_58 /*104*/].f_17 == 145)
				{
					UNK_0x7ACC3006A87F8B39("CELL_2000");
					UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_50));
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					func_10(&(Global_1798[Global_111638.f_14136[iLocal_58 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_111638.f_14136[iLocal_58 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_111638.f_14136[iLocal_58 /*104*/]));
						break;
					case 1:
						UNK_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iLocal_58 /*104*/]));
						UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_33));
						if (Global_111638.f_14136[iLocal_58 /*104*/].f_66 == 1 && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67), "NULL"))
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67));
						}
						if ((Global_111638.f_14136[iLocal_58 /*104*/].f_66 == 2 && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67), "NULL")) && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (UNK_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67)))
							{
								UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67));
							}
							if (UNK_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iLocal_58 /*104*/].f_83)))
							{
								UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iLocal_58 /*104*/].f_83));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_83));
							}
						}
						UNK_0x779B34565F4D71B1();
						break;
					case 2:
						UNK_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iLocal_58 /*104*/]));
						UNK_0x6D99DF8263D35CE5(Global_111638.f_14136[iLocal_58 /*104*/].f_49);
						UNK_0x779B34565F4D71B1();
						break;
					case 3:
						UNK_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iLocal_58 /*104*/]));
						UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_33));
						UNK_0x6D99DF8263D35CE5(Global_111638.f_14136[iLocal_58 /*104*/].f_49);
						if (Global_111638.f_14136[iLocal_58 /*104*/].f_66 == 1 && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67), "NULL"))
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67));
						}
						if ((Global_111638.f_14136[iLocal_58 /*104*/].f_66 == 2 && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67), "NULL")) && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (UNK_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67)))
							{
								UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_67));
							}
							if (UNK_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iLocal_58 /*104*/].f_83)))
							{
								UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iLocal_58 /*104*/].f_83));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iLocal_58 /*104*/].f_83));
							}
						}
						UNK_0x779B34565F4D71B1();
						break;
					case 4:
						func_35(iLocal_58);
						break;
					case 5:
						func_35(iLocal_58);
						break;
					case 6:
						func_35(iLocal_58);
						break;
					case 7:
						func_35(iLocal_58);
						break;
					case 8:
						func_35(iLocal_58);
						break;
					case 9:
						func_35(iLocal_58);
						break;
					case 10:
						func_35(iLocal_58);
						break;
					case 11:
						func_35(iLocal_58);
						break;
				}
				if (Global_21874[iLocal_58] == 0)
				{
					if (Global_111638.f_14136[iLocal_58 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_1798[Global_111638.f_14136[iLocal_58 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (UNK_0x0E66AEE1894BB411(Global_21874[iLocal_58]))
					{
						if (UNK_0x0A53A8B5FA0B3F4D(Global_21874[iLocal_58]))
						{
							bVar16 = UNK_0x5283D58F79627134(Global_21874[iLocal_58]);
						}
						else
						{
							bVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						bVar16 = "CHAR_DEFAULT";
					}
					UNK_0x7ACC3006A87F8B39("CELL_2000");
					UNK_0xD06AC7C87A34A6AD(bVar16);
					UNK_0x779B34565F4D71B1();
				}
				UNK_0x7E60D21B163E9D56();
				Global_21871 = 1;
				func_45(Global_19467, "DISPLAY_VIEW", 7f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_34(Global_19467, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				UNK_0xD59AE843FA2C6B40(Global_111638.f_14136[iLocal_58 /*104*/].f_16);
				if (Global_111638.f_14136[iLocal_58 /*104*/].f_29 > 0)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_111638.f_14136[iLocal_58 /*104*/].f_30 == 1)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_111638.f_14136[iLocal_58 /*104*/].f_29 > 0)
				{
					if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/]), "CELL_FINV"))
					{
						if (Global_19474)
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_111638.f_14136[iLocal_58 /*104*/].f_24 == 2)
				{
					if (Global_111638.f_14136[iLocal_58 /*104*/].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_19474)
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						UNK_0x5D96D8530B3D0904(&Global_7356, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						UNK_0x0674E58A79778E99(&Global_7356, 17);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					UNK_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					UNK_0x5D96D8530B3D0904(&Global_7356, 17);
				}
				Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
				Global_111638.f_14046[Global_19486 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1 || Global_21865 == 1)
				{
					if (Global_21865)
					{
					}
					iVar17 = 1;
				}
				Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
				Global_111638.f_14046[Global_19486 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_19486.f_1 = 3;
				}
			}
		}
		if (Global_2547059 == 0)
		{
			if (Global_76622)
			{
				UNK_0x558EC149EB2BC0A2(0, Global_19458);
				if (func_3(2, Global_19458, 0))
				{
					Global_19464 = 1;
					Global_2547059 = 1;
				}
			}
		}
	}
}

void func_34(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_10(bParam2);
	if (!UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		func_10(bParam3);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_10(bParam4);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam5))
	{
		func_10(bParam5);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam6))
	{
		func_10(bParam6);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_35(int iParam0)
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

void func_36()
{
	int iVar0;

	if (bLocal_2219)
	{
		UNK_0xF5A41F3D3B38EFE3(&uLocal_68);
	}
	bLocal_2219 = false;
	if (Global_111638.f_14136[iLocal_58 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iLocal_58 /*104*/]), &(Local_84[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_68, {Local_2066[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_68, {Local_1075[iVar0 /*6*/]}, 16);
				}
				bLocal_2219 = true;
				UNK_0x0D3BE1DE0262A012(&uLocal_68, 0);
				while (!UNK_0x27117E2CDD4D67C3(&uLocal_68))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_37()
{
	if (bLocal_61)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_61 = false;
		}
	}
	if (bLocal_61 == 0)
	{
		if (func_3(2, Global_19462, 0) || UNK_0xBFC0798A6E3417F9(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_40();
			bLocal_61 = true;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19463, 0) || UNK_0xBFC0798A6E3417F9(2, 180))
		{
			iLocal_56++;
			if (iLocal_56 == iLocal_55)
			{
				iLocal_56 = 0;
			}
			func_38();
			bLocal_61 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_38()
{
	func_45(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_39();
}

void func_39()
{
	if (func_24())
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

void func_40()
{
	func_45(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_41();
}

void func_41()
{
	if (func_24())
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

void func_42()
{
	if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_45(Global_19467, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_57), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_34(Global_19467, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_19474)
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_76622)
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
	}
	else
	{
		iLocal_57 = 0;
	}
}

void func_43()
{
	int iVar0[35];
	bool bVar36;
	int iVar37;
	int iVar38;

	iLocal_55 = 0;
	func_26();
	bVar36 = false;
	while (bVar36 < 34)
	{
		if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
		{
			func_53();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_111638.f_14136[iVar38 /*104*/].f_18 = -1;
		Global_111638.f_14136[iVar38 /*104*/].f_18.f_1 = 0;
		Global_111638.f_14136[iVar38 /*104*/].f_18.f_2 = 0;
		Global_111638.f_14136[iVar38 /*104*/].f_18.f_3 = 0;
		Global_111638.f_14136[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
			{
				func_53();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_111638.f_14136[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_111638.f_14136[iVar37 /*104*/].f_99[Global_19486] == 1)
					{
						if (func_44(Global_111638.f_14136[iVar37 /*104*/].f_18, Global_111638.f_14136[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_111638.f_14136[iVar38 /*104*/].f_28 == 0)
							{
								bLocal_59 = 33;
							}
							else
							{
								bLocal_59 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_19[bVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_111638.f_14136[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_111638.f_14136[iVar38 /*104*/].f_99[Global_19486] == 1)
			{
				UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(6);
				UNK_0x3CAEA85DA607305E(bVar36);
				UNK_0x3CAEA85DA607305E(Global_111638.f_14136[iVar38 /*104*/].f_18.f_2);
				UNK_0x3CAEA85DA607305E(Global_111638.f_14136[iVar38 /*104*/].f_18.f_1);
				UNK_0x3CAEA85DA607305E(bLocal_59);
				if (Global_111638.f_14136[iVar38 /*104*/].f_17 == 145)
				{
					UNK_0x7ACC3006A87F8B39("CELL_CONDFNH");
					UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_50));
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					func_10(&(Global_1798[Global_111638.f_14136[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_111638.f_14136[iVar38 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_111638.f_14136[iVar38 /*104*/]));
						break;
					case 1:
						UNK_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iVar38 /*104*/]));
						UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_33));
						if (Global_111638.f_14136[iVar38 /*104*/].f_66 == 1 && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38 /*104*/].f_67), "NULL"))
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_67));
						}
						if ((Global_111638.f_14136[iVar38 /*104*/].f_66 == 2 && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38 /*104*/].f_67), "NULL")) && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38 /*104*/].f_83), "NULL"))
						{
							if (UNK_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iVar38 /*104*/].f_67)))
							{
								UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iVar38 /*104*/].f_67));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_67));
							}
							if (UNK_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iVar38 /*104*/].f_83)))
							{
								UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iVar38 /*104*/].f_83));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_83));
							}
						}
						UNK_0x779B34565F4D71B1();
						break;
					case 2:
						UNK_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iVar38 /*104*/]));
						UNK_0x6D99DF8263D35CE5(Global_111638.f_14136[iVar38 /*104*/].f_49);
						UNK_0x779B34565F4D71B1();
						break;
					case 3:
						UNK_0x7ACC3006A87F8B39(&(Global_111638.f_14136[iVar38 /*104*/]));
						UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_33));
						UNK_0x6D99DF8263D35CE5(Global_111638.f_14136[iVar38 /*104*/].f_49);
						if (Global_111638.f_14136[iVar38 /*104*/].f_66 == 1 && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38 /*104*/].f_67), "NULL"))
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_67));
						}
						if ((Global_111638.f_14136[iVar38 /*104*/].f_66 == 2 && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38 /*104*/].f_67), "NULL")) && !UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar38 /*104*/].f_83), "NULL"))
						{
							if (UNK_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iVar38 /*104*/].f_67)))
							{
								UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iVar38 /*104*/].f_67));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_67));
							}
							if (UNK_0xEF07223F00EBE9C9(&(Global_111638.f_14136[iVar38 /*104*/].f_83)))
							{
								UNK_0x6B012227B3921E18(&(Global_111638.f_14136[iVar38 /*104*/].f_83));
							}
							else
							{
								UNK_0xD06AC7C87A34A6AD(&(Global_111638.f_14136[iVar38 /*104*/].f_83));
							}
						}
						UNK_0x779B34565F4D71B1();
						break;
					case 4:
						func_35(iVar38);
						break;
					case 5:
						func_35(iVar38);
						break;
					case 6:
						func_35(iVar38);
						break;
					case 7:
						func_35(iVar38);
						break;
					case 8:
						func_35(iVar38);
						break;
					case 9:
						func_35(iVar38);
						break;
					case 10:
						func_35(iVar38);
						break;
					case 11:
						func_35(iVar38);
						break;
				}
				UNK_0x7E60D21B163E9D56();
			}
		}
		if (Global_111638.f_14136[bVar36 /*104*/].f_24 != 0)
		{
			if (Global_111638.f_14136[bVar36 /*104*/].f_99[Global_19486] == 1)
			{
				iLocal_55++;
			}
		}
		bVar36++;
	}
}

bool func_44(struct<6> Param0, struct<6> Param6)
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

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_46()
{
	StringCopy(&(Local_84[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_2066[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_2066[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_2066[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_2066[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_84[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_2066[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_84[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_2066[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_84[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_2066[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_2066[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_2066[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_2066[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_2066[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_2066[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_2066[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_84[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_2066[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_84[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_2066[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_84[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_2066[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_2066[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_2066[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_2066[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_84[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1075[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_84[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1075[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_84[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1075[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_84[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1075[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_84[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1075[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_84[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1075[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_84[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1075[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_84[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1075[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_84[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1075[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_84[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1075[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_84[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1075[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_84[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1075[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_84[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1075[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_84[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1075[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_84[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1075[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_84[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1075[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_84[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1075[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_84[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1075[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_84[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1075[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_84[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1075[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_84[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1075[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_84[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1075[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_84[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1075[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_84[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1075[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_84[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1075[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_84[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1075[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_84[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1075[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_84[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1075[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_84[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1075[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_84[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1075[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_84[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1075[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_84[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1075[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_84[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1075[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_84[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1075[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_84[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1075[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_84[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1075[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_84[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1075[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_84[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1075[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_84[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1075[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_84[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1075[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_84[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1075[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_84[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1075[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_84[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1075[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_84[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1075[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_84[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1075[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_84[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1075[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_84[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1075[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_84[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1075[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_84[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_1075[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_84[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_1075[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_84[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_1075[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_84[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1075[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_84[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1075[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_84[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1075[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_84[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1075[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_84[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1075[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_84[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1075[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_84[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1075[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_84[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1075[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_84[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1075[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_84[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1075[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_84[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1075[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_84[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1075[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_84[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1075[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_84[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1075[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_84[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1075[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_84[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1075[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_84[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1075[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_84[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1075[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_84[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1075[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_84[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1075[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_84[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1075[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_84[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1075[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_84[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1075[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_84[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1075[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_84[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1075[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_84[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1075[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_84[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1075[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_84[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1075[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_84[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1075[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_84[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1075[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_84[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1075[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_84[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1075[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_84[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1075[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_84[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1075[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_84[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1075[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_84[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1075[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_84[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1075[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_84[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1075[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_84[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1075[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_84[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1075[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_84[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1075[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_84[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1075[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_84[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1075[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_84[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1075[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_84[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1075[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_84[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1075[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_84[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1075[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_84[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1075[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_84[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1075[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_84[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1075[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_84[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1075[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_84[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1075[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_84[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1075[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_84[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1075[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_84[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1075[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_84[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1075[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_84[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1075[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_84[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1075[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_84[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1075[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_84[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1075[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_84[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1075[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_84[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1075[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_84[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1075[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_84[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1075[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_84[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1075[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_84[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1075[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_84[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1075[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_84[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1075[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_84[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1075[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_84[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1075[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_84[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1075[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_84[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1075[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_84[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1075[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_84[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1075[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_84[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1075[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_84[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1075[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_84[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1075[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_84[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1075[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_84[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1075[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_84[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1075[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_84[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1075[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_84[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1075[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_84[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1075[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_84[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1075[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_84[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_1075[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_84[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_1075[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_84[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_1075[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_84[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_1075[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_84[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_1075[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_84[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_1075[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_84[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1075[160 /*6*/]), "ib_aircon", 24);
	if (func_52(UNK_0xD803B885F5E47A62()) == 19)
	{
		StringCopy(&(Local_84[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_1075[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_1075[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_1075[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_1075[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_1075[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_1075[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_1075[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_1075[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_1075[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_1075[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_1075[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_1075[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_1075[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_1075[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_1075[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_1075[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_1075[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_1075[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_1075[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_1075[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_1075[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_1075[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_1075[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_1075[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_1075[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_1075[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_51(UNK_0xD803B885F5E47A62()) == 14)
	{
		StringCopy(&(Local_84[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_1075[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_1075[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_1075[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_1075[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_1075[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_1075[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_1075[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_1075[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_1075[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_1075[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_1075[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_1075[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_1075[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_1075[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_1075[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_1075[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_1075[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_1075[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_1075[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_1075[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_47(UNK_0xD803B885F5E47A62()) == 30)
	{
		StringCopy(&(Local_84[44 /*6*/]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_84[45 /*6*/]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_47(UNK_0xD803B885F5E47A62()) == 32)
	{
		StringCopy(&(Local_84[44 /*6*/]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_84[45 /*6*/]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_84[46 /*6*/]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_84[47 /*6*/]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "heist3_cashier4", 24);
	}
}

int func_47(int iParam0)
{
	if (func_50(iParam0) == 158)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_48(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_49(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_50(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_51(int iParam0)
{
	if (func_50(iParam0) == 243)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_52(int iParam0)
{
	if (func_50(iParam0) == 237 || func_50(iParam0) == 250)
	{
		return func_48(iParam0);
	}
	return -1;
}

void func_53()
{
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
	{
		func_54(0);
	}
	if (bLocal_2219)
	{
		UNK_0xF5A41F3D3B38EFE3(&uLocal_68);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_54(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_55())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_55()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

bool func_57(int iParam0)
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

bool func_58()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_59()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

