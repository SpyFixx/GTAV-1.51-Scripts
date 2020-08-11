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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = false;
	bool bLocal_64 = false;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	bool bLocal_68 = false;
	char* sLocal_69 = NULL;
	float fLocal_70 = 0f;
	bool bLocal_71 = false;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_60 = -1;
	iLocal_61 = -1;
	fLocal_70 = 0f;
	bLocal_71 = true;
	if (Global_76622)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	UNK_0xB57F88F0123F4C38();
	iLocal_55 = func_78();
	UNK_0xD7992BEF7A9D109E("email", true);
	while (!UNK_0x67C1D9E5B91B2E37(true))
	{
		SYSTEM::WAIT(0);
	}
	Global_21838 = 0;
	Global_21839 = 0;
	Global_19486.f_1 = 8;
	Global_21839 = 1;
	Global_42605 = 1;
	if (Global_19468)
	{
		func_77(0);
		func_76(1);
		func_75(0);
	}
	SYSTEM::SETTIMERB(0);
	vLocal_47 = { Global_19439[Global_19431 /*3*/] };
	vLocal_50 = { vLocal_47 };
	vLocal_50.x = (vLocal_50.x - 10f);
	vLocal_50.f_1 = (vLocal_50.y + 20f);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19486.f_1 != 9)
		{
			if (Global_21839 && !Global_21838)
			{
				func_73();
			}
			else if (Global_21838)
			{
				func_68();
			}
			if (!bLocal_56)
			{
				bLocal_56 = true;
			}
			else if (Global_19468)
			{
				if (!bLocal_57)
				{
					bLocal_57 = true;
					func_66(Global_19467, iLocal_55);
					func_65(Global_19467, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_64(Global_19467, "DISPLAY_VIEW", 8f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (Global_42606)
					{
						Global_42606 = 0;
						bLocal_58 = true;
					}
					if (bLocal_58)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						if (iLocal_60 == -1)
						{
							if (bLocal_71)
							{
								bLocal_71 = false;
								fLocal_70 = 0f;
							}
							func_64(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							iVar0 = func_66(Global_19467, iLocal_55);
							func_65(Global_19467, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							bLocal_59 = false;
							if (iVar0 > 0)
							{
								func_77(1);
							}
							else
							{
								func_77(0);
							}
							func_76(1);
							func_75(0);
							func_64(Global_19467, "DISPLAY_VIEW", 8f, fLocal_70, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						else
						{
							func_64(Global_19467, "SET_DATA_SLOT_EMPTY", 21f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							SYSTEM::WAIT(0);
							func_64(Global_19467, "DISPLAY_VIEW", 21f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							SYSTEM::WAIT(0);
							func_76(1);
							func_63();
							if (iLocal_61 == -1)
							{
								func_61(iLocal_55, iLocal_60);
								func_56(Global_19467, iLocal_55, iLocal_60);
								Global_21865 = 0;
								bLocal_68 = func_54(iLocal_55, iLocal_60);
								if (bLocal_68)
								{
									sLocal_69 = func_51(iLocal_55, iLocal_60);
									if (!func_50(37))
									{
										switch (func_48("AM_H_FLINK"))
										{
											case 2:
												func_45("AM_H_FLINK", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											case 1:
												func_44(37);
												break;
										}
									}
									else if (UNK_0x0EFF6B4415DAF4A1())
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 17))
										{
											UNK_0x5D96D8530B3D0904(&Global_4269765, 17);
											func_43("AM_H_FLINK", -1);
										}
									}
									func_75(1);
								}
								else
								{
									if (!func_50(38))
									{
										switch (func_48("AM_H_SCROLL"))
										{
											case 2:
												func_45("AM_H_SCROLL", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											case 1:
												func_44(38);
												break;
										}
									}
									func_75(0);
								}
								func_64(Global_19467, "DISPLAY_VIEW", 9f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							}
							else
							{
								func_64(Global_19467, "SET_DATA_SLOT_EMPTY", 21f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
								SYSTEM::WAIT(0);
								func_64(Global_19467, "DISPLAY_VIEW", 21f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
								SYSTEM::WAIT(0);
								func_64(Global_19467, "SET_DATA_SLOT_EMPTY", 9f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
								func_40(Global_19467, iLocal_55, iLocal_60);
								func_64(Global_19467, "DISPLAY_VIEW", 9f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							}
						}
						bLocal_58 = false;
					}
					else
					{
						func_17();
					}
				}
			}
			if (!iLocal_55 == func_78())
			{
				Global_42605 = 0;
				func_4();
			}
		}
		if (func_3())
		{
			Global_21838 = 0;
			Global_21839 = 0;
			Global_42605 = 0;
			func_1(0);
			UNK_0x10FAF14A60A0DBE1();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			UNK_0x6470351B03D8DD60(1);
		}
		else if (Global_19486.f_1 > 3)
		{
			UNK_0x6470351B03D8DD60(0);
		}
	}
}

bool func_2()
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

bool func_3()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_4()
{
	if (Global_51914 != -1)
	{
		UNK_0xF5A41F3D3B38EFE3(func_16(Global_51914));
		Global_51914 = -1;
	}
	Global_42605 = 0;
	if (Global_19486.f_1 > 4)
	{
		Global_19486.f_1 = 6;
		func_5();
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_5()
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
			func_64(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_14(Global_7961);
			if (Global_7961 == 1)
			{
				func_64(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19490;
			}
			else
			{
				func_64(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_13(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_13(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				UNK_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_11();
				UNK_0x0674E58A79778E99(&Global_7358, 9);
				func_64(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			break;
		case 7:
			break;
		case 10:
			func_64(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_13(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		case 9:
			if (Global_19485 == 1)
			{
				func_10();
				func_64(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (Global_20818)
				{
					UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(4);
					UNK_0x3CAEA85DA607305E(false);
					UNK_0x3CAEA85DA607305E(2);
					UNK_0x7ACC3006A87F8B39("CELL_CONDFON");
					UNK_0xD06AC7C87A34A6AD(&Global_20820);
					UNK_0x779B34565F4D71B1();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					UNK_0x7E60D21B163E9D56();
				}
				else if (func_8(Global_6671, Global_19486) == 0)
				{
					func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_64(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_64(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_10();
				if (Global_20818)
				{
					UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(4);
					UNK_0x3CAEA85DA607305E(false);
					UNK_0x3CAEA85DA607305E(2);
					UNK_0x7ACC3006A87F8B39("CELL_CONDFON");
					UNK_0xD06AC7C87A34A6AD(&Global_20820);
					UNK_0x779B34565F4D71B1();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
					if (func_8(Global_6671, Global_19486) == 0)
					{
						func_64(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_64(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_64(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			func_6();
			break;
		default:
			break;
	}
}

void func_6()
{
	if (UNK_0x83D8570832F172A7(Global_19467))
	{
		func_7();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_13(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_7()
{
	if (Global_76622)
	{
		func_13(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x0674E58A79778E99(&Global_7356, 17);
	}
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_9(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_10()
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

void func_11()
{
	if (Global_76622)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_13(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x5D96D8530B3D0904(&Global_7356, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_9(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_9(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_9(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_9(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_9(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
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
								func_9(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_9(&(Global_7363[iVar1 /*15*/]));
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
								func_9(&(Global_7363[iVar1 /*15*/]));
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
								func_9(&(Global_7363[iVar1 /*15*/]));
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
								func_9(&(Global_7363[iVar1 /*15*/]));
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
								func_9(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

char* func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		case 1:
			return "Epsilon_Cars";
		case 2:
			return "Epsilon_Cars";
		case 3:
			return "Epsilon_Cars";
		case 4:
			return "Epsilon_Cars";
		case 5:
			return "Epsilon_Cars";
		case 6:
			return "Epsilon_Cars";
		case 12:
			return "Assassinations";
		case 13:
			return "Assassinations";
		case 14:
			return "Assassinations";
		case 15:
			return "Assassinations";
		case 64:
			return "BSPBadHacker";
		case 65:
			return "BPDGoodHacker";
		case 66:
			return "BPSMedHacker";
		case 75:
			return "email_quarry_bail_bond";
		case 76:
			return "email_abandonedfarm_bail_bond";
		case 77:
			return "email_mountain_bail_bond";
		case 78:
			return "email_hobocamp_bail_bond";
		case 80:
			return "email_quarry_bail_bond";
		case 81:
			return "email_abandonedfarm_bail_bond";
		case 82:
			return "email_mountain_bail_bond";
		case 83:
			return "email_hobocamp_bail_bond";
		case 205:
			return "hush_foxymama21";
		case 209:
			return "hush_alterego";
		case 212:
			return "hush_michael";
		case 238:
			return "hush_trevor";
		default:
			break;
	}
	return "NULL";
}

void func_17()
{
	bool bVar0;

	if (Global_21865)
	{
		iLocal_60 = 0;
		fLocal_70 = SYSTEM::TO_FLOAT(iLocal_60);
		if (func_39(iLocal_55) == 0)
		{
			iLocal_60 = -1;
		}
		if (!iLocal_60 == -1)
		{
			Global_19486.f_1 = 8;
			bLocal_58 = true;
			SYSTEM::SETTIMERB(0);
			func_37();
		}
		return;
	}
	if (func_36())
	{
		return;
	}
	if (Global_21838)
	{
		return;
	}
	if (!bLocal_64)
	{
		if (UNK_0xBFC0798A6E3417F9(2, 172) || UNK_0xBFC0798A6E3417F9(2, 181))
		{
			bLocal_64 = true;
			UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x7E60D21B163E9D56();
			UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
			SYSTEM::SETTIMERA(0);
			bLocal_71 = true;
		}
	}
	else if (UNK_0x06F8112AA79C53D9(2, 172) || UNK_0x06F8112AA79C53D9(2, 181))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_60 != -1)
		{
			UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x7E60D21B163E9D56();
			SYSTEM::SETTIMERA(0);
			bLocal_71 = true;
		}
	}
	else
	{
		bLocal_64 = false;
	}
	if (!bLocal_65)
	{
		if (UNK_0xBFC0798A6E3417F9(2, 173) || UNK_0xBFC0798A6E3417F9(2, 180))
		{
			bLocal_65 = true;
			UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(3);
			UNK_0x7E60D21B163E9D56();
			UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
			SYSTEM::SETTIMERB(0);
			bLocal_71 = true;
		}
	}
	else if (UNK_0x06F8112AA79C53D9(2, 173) || UNK_0x06F8112AA79C53D9(2, 180))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_60 != -1)
		{
			UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(3);
			UNK_0x7E60D21B163E9D56();
			SYSTEM::SETTIMERB(0);
			bLocal_71 = true;
		}
	}
	else
	{
		bLocal_65 = false;
	}
	if (!bLocal_66)
	{
		if (UNK_0x06F8112AA79C53D9(2, 174))
		{
			bLocal_66 = true;
			UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(4);
			UNK_0x7E60D21B163E9D56();
			UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
		}
	}
	else if (!UNK_0x06F8112AA79C53D9(2, 174))
	{
		bLocal_66 = false;
	}
	if (!bLocal_67)
	{
		if (UNK_0x06F8112AA79C53D9(2, 175))
		{
			bLocal_67 = true;
			UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(2);
			UNK_0x7E60D21B163E9D56();
			UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
		}
	}
	else if (!UNK_0x06F8112AA79C53D9(2, 175))
	{
		bLocal_67 = false;
	}
	if (!bLocal_63)
	{
		if (UNK_0x06F8112AA79C53D9(2, 176) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_60 == -1)
			{
				UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
				iLocal_53 = UNK_0x7A8BB56B212464AC();
				while (!UNK_0xC95D7AEEDEF4946B(iLocal_53))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_54 = UNK_0xA52833FE33F41C53(iLocal_53);
				iLocal_60 = iLocal_54;
				if (func_39(iLocal_55) == 0)
				{
					iLocal_60 = -1;
				}
				if (!iLocal_60 == -1)
				{
					if (bLocal_71 == 1)
					{
						fLocal_70 = SYSTEM::TO_FLOAT(iLocal_60);
						bLocal_71 = false;
					}
					Global_19486.f_1 = 8;
					bLocal_58 = true;
					SYSTEM::SETTIMERB(0);
					func_37();
				}
			}
			else if (iLocal_61 == -1)
			{
				if (func_34(iLocal_55, iLocal_60) && !bLocal_59)
				{
					iLocal_61 = 0;
					bLocal_58 = true;
					SYSTEM::SETTIMERB(0);
					func_37();
				}
			}
			else
			{
				iLocal_61 = 0;
				func_22(iLocal_55, iLocal_60, iLocal_61);
				bLocal_59 = true;
				iLocal_61 = -1;
				bLocal_58 = true;
				func_37();
				SYSTEM::SETTIMERB(0);
			}
			bLocal_63 = true;
		}
	}
	else
	{
		bLocal_63 = false;
	}
	if (SYSTEM::TIMERB() > 100)
	{
		if (UNK_0x06F8112AA79C53D9(2, 177))
		{
			bVar0 = false;
			if (iLocal_62 == 0)
			{
				if (!iLocal_60 == -1)
				{
					if (iLocal_61 == -1)
					{
						iLocal_60 = SYSTEM::ROUND(fLocal_70);
						bLocal_68 = false;
						SYSTEM::SETTIMERB(0);
						bVar0 = true;
						func_21();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_61 = -1;
						func_21();
					}
					bLocal_58 = true;
				}
				else
				{
					if (func_48("AM_H_FLINK") == 0)
					{
						func_44(37);
					}
					if (func_48("AM_H_SCROLL") == 0)
					{
						func_44(38);
					}
					if (Global_21839 == 0 && !Global_21838)
					{
						func_21();
						Global_21838 = 1;
						Global_42605 = 0;
					}
				}
				iLocal_62 = 1;
			}
			if (bVar0)
			{
				iLocal_60 = -1;
			}
		}
		else
		{
			iLocal_62 = 0;
		}
	}
	if (UNK_0x06F8112AA79C53D9(2, 179))
	{
		if (bLocal_68)
		{
			if (func_48("AM_H_FLINK") == 0)
			{
				func_44(37);
			}
			if (func_48("AM_H_SCROLL") == 0)
			{
				func_44(38);
			}
			StringCopy(&Global_73809, sLocal_69, 64);
			func_18(7, 0, 0);
			bLocal_68 = false;
			func_37();
		}
	}
}

int func_18(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	Global_73938 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_73938)
	{
		case 3:
			Global_73936 = 0;
			break;
		case 4:
			Global_73936 = 3;
			break;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("APPSECUROSERV")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (UNK_0x8A22C4C08282BF26(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (UNK_0x8A22C4C08282BF26(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("APPINTERNET")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_76622 && func_20())
	{
		return 0;
	}
	if (!Global_76622 && func_19())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!UNK_0x1FBF08B001C4788A("appSecuroServ"))
		{
			UNK_0x92DCE5C81176D2B4("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!UNK_0x1FBF08B001C4788A("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		UNK_0x5E8C29AE121DF1C7("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!UNK_0x1FBF08B001C4788A("appBikerBusiness"))
		{
			UNK_0x92DCE5C81176D2B4("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!UNK_0x1FBF08B001C4788A("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		UNK_0x5E8C29AE121DF1C7("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!UNK_0x1FBF08B001C4788A("appImportExport"))
		{
			UNK_0x92DCE5C81176D2B4("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!UNK_0x1FBF08B001C4788A("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		UNK_0x5E8C29AE121DF1C7("appImportExport");
		return 1;
	}
	if (!UNK_0x1FBF08B001C4788A("appInternet"))
	{
		UNK_0x92DCE5C81176D2B4("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!UNK_0x1FBF08B001C4788A("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	UNK_0x5E8C29AE121DF1C7("appInternet");
	return 1;
}

bool func_19()
{
	return Global_73826;
}

var func_20()
{
	return Global_1662476;
}

void func_21()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = ((Global_51553[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_51553[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_51553[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 122)
	{
		return;
	}
	iVar5 = Global_45940[iVar3 /*46*/].f_32[iVar4];
	if (Global_42615[iVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_51553[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_51553[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_23(iVar3, iParam2);
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!Global_45940[iParam0 /*46*/] && !Global_45940[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_45940[iParam0 /*46*/].f_42 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_45940[iParam0 /*46*/].f_32[iVar0];
	if (!iParam1 < Global_42615[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_42615[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;
	if (Global_45940[iParam0 /*46*/].f_31 < (Global_45940[iParam0 /*46*/].f_30 - 1))
	{
		iVar4 = Global_45940[iParam0 /*46*/].f_8[Global_45940[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4)
		{
			bVar3 = true;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_33(iParam0, iVar2);
			iVar5 = Global_45940[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_42615[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_27(Global_45940[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_42615[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_24(Global_42615[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_42615[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_45940[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_45940[iParam0 /*46*/].f_45 = Global_42615[iVar2 /*12*/].f_10;
		Global_45940[iParam0 /*46*/].f_43 = Global_42615[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_45940[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_45940[iParam0 /*46*/].f_43 < 30000)
	{
		Global_45940[iParam0 /*46*/].f_43 = 30000;
	}
}

void func_24(int iParam0, bool bParam1)
{
	Global_42606 = 1;
	if (!Global_45940[iParam0 /*46*/] && !Global_45940[iParam0 /*46*/].f_1)
	{
		Global_45940[iParam0 /*46*/] = 1;
		func_26(iParam0, bParam1);
	}
	else
	{
		func_25(iParam0);
		func_24(iParam0, bParam1);
	}
}

void func_25(int iParam0)
{
	Global_45940[iParam0 /*46*/] = 0;
	Global_45940[iParam0 /*46*/].f_31 = 0;
	Global_45940[iParam0 /*46*/].f_42 = 0;
	Global_45940[iParam0 /*46*/].f_45 = 0;
	Global_45940[iParam0 /*46*/].f_43 = 0;
	Global_45940[iParam0 /*46*/].f_1 = 0;
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!Global_45940[iParam0 /*46*/] && !Global_45940[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_45940[iParam0 /*46*/].f_31 == Global_45940[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_45940[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_42615[Global_45940[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_45940[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_45940[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_45940[iParam0 /*46*/].f_8[Global_45940[iParam0 /*46*/].f_31];
	Global_45940[iParam0 /*46*/].f_31++;
	func_33(iParam0, iVar1);
	Global_45940[iParam0 /*46*/].f_45 = Global_42615[iVar1 /*12*/].f_10;
	Global_45940[iParam0 /*46*/].f_43 = Global_42615[iVar1 /*12*/].f_11;
	iVar2 = Global_45940[iParam0 /*46*/].f_2;
	func_27(Global_42615[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_45940[iParam0 /*46*/].f_3[iVar3] != Global_42615[iVar1 /*12*/].f_2 && Global_45940[iParam0 /*46*/].f_3[iVar3] != Global_42615[iVar1 /*12*/].f_3)
		{
			func_27(Global_45940[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_45940[iParam0 /*46*/].f_31 == Global_45940[iParam0 /*46*/].f_30)
	{
		if (Global_42615[Global_45940[iParam0 /*46*/].f_32[(Global_45940[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_45940[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_27(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_45940[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_45940[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_32(Global_42615[iVar20 /*12*/].f_1) };
		if (Global_42615[iVar20 /*12*/].f_2 == iParam0 && !Global_42615[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_42615[iVar20 /*12*/].f_2;
		iVar0 = Global_51553[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_51553[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
				}
			}
		}
		Global_51553[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_51553[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_51553[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51553[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_51553[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_51553[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
				}
			}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_51915[iVar24 /*203*/].f_1 == iParam1 && Global_51915[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_51553[iParam0 /*120*/].f_18[iVar0] = Global_51915[iVar23 /*203*/].f_1;
		Global_51553[iParam0 /*120*/].f_1[iVar0] = (Global_51915[iVar23 /*203*/].f_9 - 1);
		Global_51553[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_51553[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51553[iParam0 /*120*/]++;
		iVar25 = Global_51553[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_51915[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_42615[iVar26 /*12*/].f_2;
		if (Global_51915[iVar23 /*203*/].f_10[(Global_51915[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_51915[iVar23 /*203*/].f_10[(Global_51915[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_32(Global_42615[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51553[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_28(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				case 1:
					if (iVar2 == 249)
					{
						func_28(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_28(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				case 2:
					func_28(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (UNK_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_78();
	bVar1 = false;
	StringCopy(&cVar2, func_31(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL1");
				break;
			case 73:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL3");
				break;
			case 74:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL2");
				break;
			default:
				UNK_0x1E64CE678ED5F61E(bParam3);
				if (!UNK_0xEA6BC48857E0AC4C(bParam4))
				{
					UNK_0x6B012227B3921E18(bParam4);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam5))
				{
					UNK_0x6B012227B3921E18(bParam5);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam6))
				{
					UNK_0x6B012227B3921E18(bParam6);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					UNK_0x6B012227B3921E18(bParam7);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam8))
				{
					UNK_0x6B012227B3921E18(bParam8);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam9))
				{
					UNK_0x6B012227B3921E18(bParam9);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam10))
				{
					UNK_0x6B012227B3921E18(bParam10);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam11))
				{
					UNK_0x6B012227B3921E18(bParam11);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam12))
				{
					UNK_0x6B012227B3921E18(bParam12);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam13))
				{
					UNK_0x6B012227B3921E18(bParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_29(UNK_0x1AEA174B291A9906(&cVar2, &cVar2, 0, 2, UNK_0x19C9F30A7697B43C(func_30(iParam1)), 0));
		}
		else
		{
			func_29(UNK_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, UNK_0x19C9F30A7697B43C(func_30(iParam1)), 0));
		}
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				Global_42607++;
				if (Global_42607 > 16)
				{
					Global_42607 = 16;
				}
				break;
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				Global_42609++;
				if (Global_42609 > 16)
				{
					Global_42609 = 16;
				}
				break;
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				Global_42608++;
				if (Global_42608 > 16)
				{
					Global_42608 = 16;
				}
				break;
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				break;
		}
		UNK_0x4D7F4CC43D4D0DE3(-1, "Notification", &Global_19475, 1);
	}
}

void func_29(int iParam0)
{
	Global_42610[Global_42614] = iParam0;
	Global_21863 = 1;
	Global_21862 = iParam0;
	Global_42614++;
	if (Global_42614 == 3)
	{
		Global_42614 = 0;
	}
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		case 3:
			return "EMSTR_3";
		case 1:
			return "EMSTR_6";
		case 2:
			return "EMSTR_9";
		case 4:
			return "EMSTR_12";
		case 5:
			return "EMSTR_29";
		case 6:
			return "EMSTR_36";
		case 7:
			return "EMSTR_39";
		case 8:
			return "EMSTR_52";
		case 9:
			return "EMSTR_55";
		case 10:
			return "EMSTR_58";
		case 11:
			return "EMSTR_78";
		case 12:
			return "EMSTR_81";
		case 13:
			return "EMSTR_84";
		case 14:
			return "EMSTR_87";
		case 15:
			return "EMSTR_106";
		case 16:
			return "EMSTR_114";
		case 17:
			return "EMSTR_142";
		case 18:
			return "EMSTR_145";
		case 19:
			return "EMSTR_152";
		case 20:
			return "EMSTR_157";
		case 21:
			return "EMSTR_163";
		case 22:
			return "EMSTR_182";
		case 23:
			return "EMSTR_187";
		case 24:
			return "EMSTR_190";
		case 25:
			return "EMSTR_206";
		case 26:
			return "EMSTR_219";
		case 27:
			return "EMSTR_226";
		case 28:
			return "EMSTR_233";
		case 29:
			return "EMSTR_242";
		case 30:
			return "EMSTR_249";
		case 31:
			return "EMSTR_262";
		case 32:
			return "EMSTR_269";
		case 33:
			return "EMSTR_319";
		case 34:
			return "EMSTR_340";
		case 35:
			return "EMSTR_348";
		case 36:
			return "EMSTR_182";
		case 37:
			return "EMSTR_357";
		case 38:
			return "EMSTR_360";
		case 39:
			return "EMSTR_369";
		case 40:
			return "EMSTR_376";
		case 41:
			return "EMSTR_379";
		case 42:
			return "EMSTR_382";
		case 43:
			return "EMSTR_384";
		case 44:
			return "EMSTR_387";
		case 45:
			return "EMSTR_390";
		case 46:
			return "EMSTR_393";
		case 47:
			return "EMSTR_396";
		case 48:
			return "EMSTR_399";
		case 49:
			return "EMSTR_402";
		case 50:
			return "EMSTR_405";
		case 51:
			return "EMSTR_408";
		case 52:
			return "EMSTR_411";
		case 53:
			return "EMSTR_414";
		case 54:
			return "EMSTR_465";
		case 55:
			return "EMSTR_468";
		case 56:
			return "EMSTR_489";
		case 57:
			return "EMSTR_492";
		case 58:
			return "EMSTR_495";
		case 59:
			return "EMSTR_498";
		case 60:
			return "EMSTR_501";
		case 61:
			return "EMSTR_504";
		case 62:
			return "EMSTR_507";
		case 63:
			return "EMSTR_640";
		case 64:
			return "EMSTR_643";
		case 65:
			return "EMSTR_652";
		default:
			break;
	}
	return "NULL";
}

char* func_31(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[0 /*29*/].f_7));
		case 1:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[1 /*29*/].f_7));
		case 2:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[2 /*29*/].f_7));
		case 7:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[12 /*29*/].f_7));
		case 4:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[60 /*29*/].f_7));
		case 6:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[62 /*29*/].f_7));
		case 3:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[14 /*29*/].f_7));
		case 16:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[97 /*29*/].f_7));
		case 19:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[99 /*29*/].f_7));
		case 15:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[96 /*29*/].f_7));
		case 63:
			return "CHAR_CARSITE2";
		case 64:
			return "CHAR_BOATSITE";
		case 8:
			return "CHAR_BANK_MAZE";
		case 9:
			return "CHAR_BANK_FLEECA";
		case 10:
			return "CHAR_BANK_BOL";
		case 21:
			return "CHAR_MINOTAUR";
		case 25:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[15 /*29*/].f_7));
		case 26:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[30 /*29*/].f_7));
		case 27:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[17 /*29*/].f_7));
		case 29:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[20 /*29*/].f_7));
		case 30:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[43 /*29*/].f_7));
		case 31:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[44 /*29*/].f_7));
		case 32:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[19 /*29*/].f_7));
		case 34:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[40 /*29*/].f_7));
		case 36:
			return UNK_0x19C9F30A7697B43C("CELL_E_381");
		case 38:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[64 /*29*/].f_7));
		case 5:
			return "CHAR_EPSILON";
		case 13:
			return "CHAR_MILSITE";
		case 11:
			return "CHAR_CARSITE";
		case 14:
			return "CHAR_BOATSITE";
		case 12:
			return "CHAR_PLANESITE";
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		case 55:
			return "CHAR_CARSITE2";
		case 54:
			return "CHAR_BIKESITE";
		case 39:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[122 /*29*/].f_7));
		case 40:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[125 /*29*/].f_7));
		case 41:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[113 /*29*/].f_7));
		case 42:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[126 /*29*/].f_7));
		case 43:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[127 /*29*/].f_7));
		case 44:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[124 /*29*/].f_7));
		case 45:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[114 /*29*/].f_7));
		case 46:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[115 /*29*/].f_7));
		case 47:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[116 /*29*/].f_7));
		case 48:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[123 /*29*/].f_7));
		case 49:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[117 /*29*/].f_7));
		case 50:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[118 /*29*/].f_7));
		case 51:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[119 /*29*/].f_7));
		case 52:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[120 /*29*/].f_7));
		case 53:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[121 /*29*/].f_7));
		default:
			break;
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_32(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;

	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_45940[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_45940[iParam0 /*46*/].f_32[Global_45940[iParam0 /*46*/].f_42] = iParam1;
	Global_45940[iParam0 /*46*/].f_42++;
	return 1;
}

bool func_34(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = ((Global_51553[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_51553[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_51553[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_51553[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_45940[iVar3 /*46*/].f_32[iVar4];
		if (Global_42615[iVar5 /*12*/].f_4 == 0)
		{
			return false;
		}
		if (Global_51553[iVar0 /*120*/].f_35[iVar2] == 1)
		{
			return false;
		}
		if (!func_35(iVar0, iVar2))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!iParam0 < 3)
	{
		return false;
	}
	iVar0 = Global_51553[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_51553[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_45940[iVar1 /*46*/] && !Global_45940[iVar1 /*46*/].f_1))
	{
		return false;
	}
	if (!iVar0 == (Global_45940[iVar1 /*46*/].f_42 - 1))
	{
		return false;
	}
	iVar2 = Global_45940[iVar1 /*46*/].f_32[(Global_45940[iVar1 /*46*/].f_42 - 1)];
	if (Global_42615[iVar2 /*12*/].f_4 > 0)
	{
		return true;
	}
	return false;
}

bool func_36()
{
	return Global_73825;
}

void func_37()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_38();
	}
}

void func_38()
{
	if (func_2())
	{
		UNK_0x5A963FB0365294C8(5);
	}
}

int func_39(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	return Global_51553[iVar0 /*120*/];
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<16> Var9;
	struct<16> Var25;

	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_51553[iVar0 /*120*/] - 1) - iParam2);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_51553[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_51553[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_51553[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_45940[iVar3 /*46*/].f_32[iVar4];
		if (Global_42615[iVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_42615[iVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_42615[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { func_32(Global_42615[iVar8 /*12*/].f_1) };
			Var25 = { func_32(Global_42615[iVar8 /*12*/].f_1) };
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x3CAEA85DA607305E(false);
			func_9("");
			func_9("");
			func_9("EM_RESPONSE_NEW");
			func_9(&Var25);
			func_9(func_42(Global_42615[iVar8 /*12*/].f_2));
			func_41(iVar8, Global_42615[iVar8 /*12*/].f_2);
			UNK_0x7E60D21B163E9D56();
			iVar6++;
		}
	}
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			UNK_0x024BC5F58A72410C("EmailAds_Elitas_Travel");
			UNK_0x1200CC973A2399C8(true);
			return;
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			UNK_0x024BC5F58A72410C("EmailAds_Dock_Tease");
			UNK_0x1200CC973A2399C8(true);
			return;
		case 34:
		case 35:
		case 36:
			UNK_0x024BC5F58A72410C("EmailAds_Warstock");
			UNK_0x1200CC973A2399C8(true);
			return;
		case 31:
		case 32:
		case 33:
			UNK_0x024BC5F58A72410C("EmailAds_Legendary_Motorsport");
			UNK_0x1200CC973A2399C8(true);
			return;
		default:
			break;
	}
	switch (iParam1)
	{
		case 13:
			UNK_0x024BC5F58A72410C("EmailAds_Warstock");
			UNK_0x1200CC973A2399C8(true);
			return;
		case 15:
			UNK_0x024BC5F58A72410C("EmailAds_LS_Customs");
			UNK_0x1200CC973A2399C8(true);
			return;
		case 19:
			UNK_0x024BC5F58A72410C("EmailAds_LS_Tourist_Info");
			UNK_0x1200CC973A2399C8(true);
			return;
		default:
			break;
	}
}

bool func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2";
		case 3:
			return "EMSTR_5";
		case 1:
			return "EMSTR_8";
		case 2:
			return "EMSTR_11";
		case 4:
			return "EMSTR_14";
		case 5:
			return "EMSTR_31";
		case 6:
			return "EMSTR_38";
		case 7:
			return "EMSTR_41";
		case 8:
			return "EMSTR_54";
		case 9:
			return "EMSTR_57";
		case 10:
			return "EMSTR_60";
		case 11:
			return "EMSTR_80";
		case 12:
			return "EMSTR_83";
		case 13:
			return "EMSTR_86";
		case 14:
			return "EMSTR_89";
		case 15:
			return "EMSTR_106";
		case 16:
			return "EMSTR_116";
		case 17:
			return "EMSTR_144";
		case 18:
			return "EMSTR_147";
		case 19:
			return "EMSTR_154";
		case 20:
			return "EMSTR_159";
		case 21:
			return "EMSTR_165";
		case 22:
			return "EMSTR_184";
		case 23:
			return "EMSTR_189";
		case 24:
			return "EMSTR_192";
		case 25:
			return "EMSTR_208";
		case 26:
			return "EMSTR_221";
		case 27:
			return "EMSTR_228";
		case 28:
			return "EMSTR_235";
		case 29:
			return "EMSTR_244";
		case 30:
			return "EMSTR_251";
		case 31:
			return "EMSTR_264";
		case 32:
			return "EMSTR_271";
		case 33:
			return "EMSTR_321";
		case 34:
			return "EMSTR_342";
		case 35:
			return "EMSTR_350";
		case 36:
			return "EMSTR_354";
		case 37:
			return "EMSTR_359";
		case 38:
			return "EMSTR_362";
		case 39:
			return "EMSTR_371";
		case 40:
			return "EMSTR_378";
		case 41:
			return "EMSTR_381";
		case 42:
			return "EMSTR_382";
		case 43:
			return "EMSTR_386";
		case 44:
			return "EMSTR_389";
		case 45:
			return "EMSTR_392";
		case 46:
			return "EMSTR_395";
		case 47:
			return "EMSTR_398";
		case 48:
			return "EMSTR_401";
		case 49:
			return "EMSTR_404";
		case 50:
			return "EMSTR_407";
		case 51:
			return "EMSTR_410";
		case 52:
			return "EMSTR_413";
		case 53:
			return "EMSTR_416";
		case 54:
			return "EMSTR_467";
		case 55:
			return "EMSTR_470";
		case 56:
			return "EMSTR_491";
		case 57:
			return "EMSTR_494";
		case 58:
			return "EMSTR_497";
		case 59:
			return "EMSTR_500";
		case 60:
			return "EMSTR_503";
		case 61:
			return "EMSTR_506";
		case 62:
			return "EMSTR_509";
		case 63:
			return "EMSTR_642";
		case 64:
			return "EMSTR_645";
		case 65:
			return "EMSTR_654";
		default:
			break;
	}
	return "NULL";
}

void func_43(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_44(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_20405.f_150[iVar1]), bVar0);
	}
}

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;

	if (UNK_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (UNK_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = iParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = iParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((UNK_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_47();
	}
}

void func_47()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, false))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, true))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_48(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, &Global_110281))
	{
		return 1;
	}
	if (func_49(bParam0))
	{
		return 0;
	}
	return 2;
}

bool func_49(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(bParam0, &(Global_111638.f_20405[iVar0 /*16*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_50(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], bVar0);
	}
	return false;
}

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return "";
	}
	iVar4 = func_53(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_51553[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_45940[iVar2 /*46*/].f_32[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_51915[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_51915[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}
	return func_52(iVar5);
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		case 18:
			return "WWW_FLEECA_COM";
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		case 24:
			return "WWW_FLEECA_COM";
		case 25:
			return "WWW_FLEECA_COM";
		case 26:
			return "WWW_FLEECA_COM";
		case 27:
			return "WWW_FLEECA_COM";
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		case 47:
			return "WWW_AMMUNATION_NET";
		case 48:
			return "WWW_AMMUNATION_NET";
		case 49:
			return "WWW_AMMUNATION_NET";
		case 50:
			return "WWW_AMMUNATION_NET";
		case 51:
			return "WWW_AMMUNATION_NET";
		case 52:
			return "WWW_AMMUNATION_NET";
		case 53:
			return "WWW_AMMUNATION_NET";
		case 54:
			return "WWW_AMMUNATION_NET";
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		case 56:
			return "WWW_DOCKTEASE_COM";
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		case 60:
			return "WWW_DOCKTEASE_COM";
		case 61:
			return "WWW_DOCKTEASE_COM";
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		case 68:
			return "WWW_AMMUNATION_NET";
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		case 194:
			return "WWW_HUSHSMUSH_COM";
		case 195:
			return "WWW_HUSHSMUSH_COM";
		case 196:
			return "WWW_HUSHSMUSH_COM";
		case 197:
			return "WWW_HUSHSMUSH_COM";
		case 198:
			return "WWW_HUSHSMUSH_COM";
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		case 270:
			return "WWW_AMMUNATION_NET";
		case 271:
			return "WWW_AMMUNATION_NET";
		case 272:
			return "WWW_AMMUNATION_NET";
		case 273:
			return "WWW_AMMUNATION_NET";
		case 274:
			return "WWW_AMMUNATION_NET";
		case 275:
			return "WWW_AMMUNATION_NET";
		case 276:
			return "WWW_AMMUNATION_NET";
		default:
			break;
	}
	return "NULL";
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = ((Global_51553[iParam0 /*120*/] - 1) - iParam1);
	while (iVar0 >= 16)
	{
		iVar0 = (iVar0 - 16);
	}
	iVar1 = iVar0;
	*iParam2 = Global_51553[iParam0 /*120*/].f_18[iVar1];
	*iParam3 = Global_51553[iParam0 /*120*/].f_1[iVar1];
	*bParam4 = Global_51553[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar4 = func_53(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_51553[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_45940[iVar1 /*46*/].f_32[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_51915[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_51915[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}
	return func_55(iVar5);
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var23;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	struct<16> Var47;
	struct<16> Var63;
	bool bVar79;
	int iVar80;

	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT_EMPTY");
	UNK_0x3CAEA85DA607305E(9);
	UNK_0x7E60D21B163E9D56();
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar4 = func_53(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_51553[iVar0 /*120*/].f_86[iVar4];
	if (!Global_51553[iVar0 /*120*/].f_69[iVar4])
	{
		func_60(-1);
	}
	Global_51553[iVar0 /*120*/].f_69[iVar4] = 1;
	if (!bVar5)
	{
		iVar6 = Global_45940[iVar2 /*46*/].f_32[iVar3];
		Var7 = { func_32(Global_42615[iVar6 /*12*/]) };
		Var23 = { func_32(Global_42615[iVar6 /*12*/].f_1) };
		UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
		UNK_0x3CAEA85DA607305E(9);
		UNK_0x3CAEA85DA607305E(false);
		func_9(func_59(Global_42615[iVar6 /*12*/].f_3));
		func_9(func_59(Global_42615[iVar6 /*12*/].f_2));
		func_9(&Var7);
		func_9(&Var23);
		func_9(func_42(Global_42615[iVar6 /*12*/].f_2));
		func_41(iVar6, Global_42615[iVar6 /*12*/].f_2);
		UNK_0x7E60D21B163E9D56();
		if (Global_42615[iVar6 /*12*/].f_4 == 0)
		{
			func_77(0);
		}
		else if (bVar1 || !func_35(iVar0, iVar4))
		{
			func_77(0);
		}
		else
		{
			func_77(1);
		}
		if (Global_45940[iVar2 /*46*/].f_42 > 1)
		{
			iVar39 = iVar3;
			iVar40 = (iVar3 - 1);
			iVar41 = 0;
			iVar41 = 0;
			while (iVar41 < iVar39)
			{
				iVar6 = Global_45940[iVar2 /*46*/].f_32[iVar40];
				Var7 = { func_32(Global_42615[iVar6 /*12*/]) };
				Var23 = { func_32(Global_42615[iVar6 /*12*/].f_1) };
				iVar42 = func_58(iParam1, Global_42615[iVar6 /*12*/].f_3);
				UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(9);
				UNK_0x3CAEA85DA607305E(iVar41 + 1);
				func_9(func_59(iVar42));
				func_9(func_59(Global_42615[iVar6 /*12*/].f_2));
				func_9(&Var7);
				func_9(&Var23);
				func_9(func_42(Global_42615[iVar6 /*12*/].f_2));
				func_41(iVar6, Global_42615[iVar6 /*12*/].f_2);
				UNK_0x7E60D21B163E9D56();
				iVar40 = (iVar40 - 1);
				iVar41++;
			}
		}
	}
	else
	{
		iVar43 = -1;
		iVar44 = 0;
		iVar44 = 0;
		while (iVar44 < 7)
		{
			if (Global_51915[iVar44 /*203*/].f_1 == iVar2)
			{
				iVar43 = iVar44;
			}
			iVar44++;
		}
		if (iVar43 == -1)
		{
			return;
		}
		else
		{
			iVar45 = Global_51915[iVar43 /*203*/].f_10[iVar3 /*48*/];
			iVar46 = Global_51915[iVar43 /*203*/].f_10[iVar3 /*48*/];
			Var47 = { func_32(Global_42615[iVar45 /*12*/]) };
			Var63 = { func_32(Global_42615[iVar45 /*12*/].f_1) };
			if (Global_51915[iVar43 /*203*/].f_10[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var63, {Global_51915[iVar43 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_42615[iVar45 /*12*/].f_4 == 0)
			{
				func_77(0);
			}
			else if (bVar1)
			{
				func_77(0);
			}
			else
			{
				func_77(1);
			}
			bVar79 = false;
			bVar79 = func_57(iParam0, Global_51915[iVar43 /*203*/].f_1, iVar3, iVar46);
			if (!bVar79)
			{
				UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(9);
				UNK_0x3CAEA85DA607305E(false);
				func_9(func_59(Global_42615[iVar45 /*12*/].f_3));
				func_9(func_59(Global_42615[iVar45 /*12*/].f_2));
				func_9(&Var47);
				if (Global_51915[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					UNK_0x7ACC3006A87F8B39(&Var63);
					iVar80 = 0;
					iVar80 = 0;
					while (iVar80 < Global_51915[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6)
					{
						UNK_0x6B012227B3921E18(&(Global_51915[iVar43 /*203*/].f_10[iVar3 /*48*/].f_7[iVar80 /*4*/]));
						iVar80++;
					}
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					func_9(&Var63);
				}
				func_9(func_42(Global_42615[iVar45 /*12*/].f_2));
				func_41(iVar45, Global_42615[iVar45 /*12*/].f_2);
				UNK_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_57(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<16> Var3;
	char cVar19[64];
	int iVar35;
	int iVar36;
	bool bVar37;
	bool bVar38;

	iVar0 = 0;
	iVar1 = uParam1;
	iVar1 = iParam2;
	iVar1 = iVar1;
	bVar2 = false;
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT_EMPTY");
	UNK_0x7E60D21B163E9D56();
	Var3 = { func_32(Global_42615[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 72:
			StringCopy(&cVar19, "PROPR_INCEMAIL1", 64);
			break;
		case 73:
			StringCopy(&cVar19, "PROPR_INCEMAIL3", 64);
			break;
		case 74:
			StringCopy(&cVar19, "PROPR_INCEMAIL2", 64);
			break;
	}
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(9);
	UNK_0x3CAEA85DA607305E(bVar2);
	func_9(func_59(Global_42615[iParam3 /*12*/].f_3));
	func_9(func_59(Global_42615[iParam3 /*12*/].f_2));
	func_9(&Var3);
	func_9(&cVar19);
	func_9(func_42(Global_42615[iParam3 /*12*/].f_2));
	func_9("");
	UNK_0x3CAEA85DA607305E(false);
	UNK_0x1200CC973A2399C8(true);
	UNK_0x7E60D21B163E9D56();
	bVar2++;
	iVar35 = 0;
	while (iVar35 < 16)
	{
		iVar36 = iVar35;
		bVar37 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_111638.f_24899[iVar36 /*4*/] == 0)
				{
					bVar37 = true;
				}
				break;
			case 73:
				if (Global_111638.f_24899[iVar36 /*4*/] == 1)
				{
					bVar37 = true;
				}
				break;
			case 74:
				if (Global_111638.f_24899[iVar36 /*4*/] == 2)
				{
					bVar37 = true;
				}
				break;
		}
		if (bVar37)
		{
			switch (iVar36)
			{
				case 0:
					bVar38 = "ACCNA_TOWING";
					break;
				case 1:
					bVar38 = "ACCNA_TAXI_LOT";
					break;
				case 2:
					bVar38 = "ACCNA_ARMS";
					break;
				case 3:
					bVar38 = "ACCNA_SONAR";
					break;
				case 4:
					bVar38 = "ACCNA_CARMOD";
					break;
				case 5:
					bVar38 = "ACCNA_VCINEMA";
					break;
				case 6:
					bVar38 = "ACCNA_DCINEMA";
					break;
				case 7:
					bVar38 = "ACCNA_MCINEMA";
					break;
				case 8:
					bVar38 = "ACCNA_GOLF";
					break;
				case 9:
					bVar38 = "ACCNA_CSCRAP";
					break;
				case 10:
					bVar38 = "ACCNA_SMOKE";
					break;
				case 11:
					bVar38 = "ACCNA_TEQUILA";
					break;
				case 12:
					bVar38 = "ACCNA_PITCHERS";
					break;
				case 13:
					bVar38 = "ACCNA_HEN";
					break;
				case 14:
					bVar38 = "ACCNA_HOOKIES";
					break;
				case 15:
					bVar38 = "ACCNA_STRP";
					break;
			}
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x3CAEA85DA607305E(bVar2);
			UNK_0x7ACC3006A87F8B39("PROPR_INCEMAIL4");
			UNK_0x6B012227B3921E18(bVar38);
			UNK_0x6D99DF8263D35CE5(Global_111638.f_24899[iVar36 /*4*/].f_3);
			UNK_0x779B34565F4D71B1();
			UNK_0x7E60D21B163E9D56();
			bVar2++;
			iVar0 = 1;
		}
		iVar35++;
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

bool func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1";
		case 3:
			return "EMSTR_4";
		case 1:
			return "EMSTR_7";
		case 2:
			return "EMSTR_10";
		case 4:
			return "EMSTR_13";
		case 5:
			return "EMSTR_30";
		case 6:
			return "EMSTR_37";
		case 7:
			return "EMSTR_40";
		case 8:
			return "EMSTR_53";
		case 9:
			return "EMSTR_56";
		case 10:
			return "EMSTR_59";
		case 11:
			return "EMSTR_79";
		case 12:
			return "EMSTR_82";
		case 13:
			return "EMSTR_85";
		case 14:
			return "EMSTR_88";
		case 15:
			return "EMSTR_107";
		case 16:
			return "EMSTR_115";
		case 17:
			return "EMSTR_143";
		case 18:
			return "EMSTR_146";
		case 19:
			return "EMSTR_153";
		case 20:
			return "EMSTR_158";
		case 21:
			return "EMSTR_164";
		case 22:
			return "EMSTR_183";
		case 23:
			return "EMSTR_188";
		case 24:
			return "EMSTR_191";
		case 25:
			return "EMSTR_207";
		case 26:
			return "EMSTR_220";
		case 27:
			return "EMSTR_227";
		case 28:
			return "EMSTR_234";
		case 29:
			return "EMSTR_243";
		case 30:
			return "EMSTR_250";
		case 31:
			return "EMSTR_263";
		case 32:
			return "EMSTR_270";
		case 33:
			return "EMSTR_320";
		case 34:
			return "EMSTR_341";
		case 35:
			return "EMSTR_349";
		case 36:
			return "EMSTR_353";
		case 37:
			return "EMSTR_358";
		case 38:
			return "EMSTR_361";
		case 39:
			return "EMSTR_370";
		case 40:
			return "EMSTR_377";
		case 41:
			return "EMSTR_380";
		case 42:
			return "EMSTR_383";
		case 43:
			return "EMSTR_385";
		case 44:
			return "EMSTR_388";
		case 45:
			return "EMSTR_391";
		case 46:
			return "EMSTR_394";
		case 47:
			return "EMSTR_397";
		case 48:
			return "EMSTR_400";
		case 49:
			return "EMSTR_403";
		case 50:
			return "EMSTR_406";
		case 51:
			return "EMSTR_409";
		case 52:
			return "EMSTR_412";
		case 53:
			return "EMSTR_415";
		case 54:
			return "EMSTR_466";
		case 55:
			return "EMSTR_469";
		case 56:
			return "EMSTR_490";
		case 57:
			return "EMSTR_493";
		case 58:
			return "EMSTR_496";
		case 59:
			return "EMSTR_499";
		case 60:
			return "EMSTR_502";
		case 61:
			return "EMSTR_505";
		case 62:
			return "EMSTR_508";
		case 63:
			return "EMSTR_641";
		case 64:
			return "EMSTR_644";
		case 65:
			return "EMSTR_653";
		default:
			break;
	}
	return "NULL";
}

void func_60(int iParam0)
{
	switch (func_78())
	{
		case 0:
			Global_42607 = (Global_42607 + iParam0);
			if (Global_42607 < 0)
			{
				Global_42607 = 0;
			}
			break;
		case 2:
			Global_42609 = (Global_42609 + iParam0);
			if (Global_42609 < 0)
			{
				Global_42609 = 0;
			}
			break;
		case 1:
			Global_42608 = (Global_42608 + iParam0);
			if (Global_42608 < 0)
			{
				Global_42608 = 0;
			}
			break;
		default:
			break;
	}
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_51553[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_51553[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_51553[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_51553[iVar0 /*120*/].f_86[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_45940[iVar3 /*46*/].f_32[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_51915[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_51915[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}
	if (!func_62(iVar5))
	{
		return;
	}
	if (Global_51914 != -1)
	{
		UNK_0xF5A41F3D3B38EFE3(func_16(Global_51914));
	}
	Global_51914 = iVar5;
	UNK_0x0D3BE1DE0262A012(func_16(iVar5), 0);
	while (!UNK_0x27117E2CDD4D67C3(func_16(iVar5)))
	{
		SYSTEM::WAIT(100);
	}
}

bool func_62(int iParam0)
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return true;
		default:
			break;
	}
	return false;
}

void func_63()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_42610[iVar0] != -1)
		{
			UNK_0xD59AE843FA2C6B40(Global_42610[iVar0]);
			Global_42610[iVar0] = -1;
		}
		iVar0++;
	}
	Global_42614 = 0;
}

void func_64(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_65(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_9(bParam2);
	if (!UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		func_9(bParam3);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_9(bParam4);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam5))
	{
		func_9(bParam5);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam6))
	{
		func_9(bParam6);
	}
	UNK_0x7E60D21B163E9D56();
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	var uVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<16> Var18;

	func_67(iParam1);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT_EMPTY");
	UNK_0x3CAEA85DA607305E(8);
	UNK_0x7E60D21B163E9D56();
	if (Global_51553[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = (Global_51553[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_51553[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	bVar3 = false;
	bVar3 = false;
	while (bVar3 < iVar2)
	{
		if (!Global_51553[iVar0 /*120*/].f_86[iVar1])
		{
			iVar4 = Global_51553[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_51553[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_45940[iVar4 /*46*/].f_32[iVar5];
			bVar7 = false;
			if (Global_51553[iVar0 /*120*/].f_69[iVar1])
			{
				bVar7 = true;
			}
			if (bVar7 == 1)
			{
				if (Global_42615[iVar6 /*12*/].f_4 > 0)
				{
					if (Global_51553[iVar0 /*120*/].f_35[iVar1] == 0)
					{
						bVar7 = 2;
					}
				}
			}
			MemCopy(&uVar8, {func_32(Global_42615[iVar6 /*12*/])}, 4);
			UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(8);
			UNK_0x3CAEA85DA607305E(bVar3);
			UNK_0x3CAEA85DA607305E(bVar7);
			UNK_0x3CAEA85DA607305E(false);
			func_9(func_59(Global_42615[iVar6 /*12*/].f_2));
			func_9(&uVar8);
			UNK_0x7E60D21B163E9D56();
		}
		else
		{
			iVar12 = Global_51553[iVar0 /*120*/].f_18[iVar1];
			iVar13 = -1;
			iVar14 = 0;
			iVar14 = 0;
			while (iVar14 < 7)
			{
				if (Global_51915[iVar14 /*203*/].f_1 == iVar12)
				{
					iVar13 = iVar14;
				}
				iVar14++;
			}
			if (iVar13 == -1)
			{
				return 1;
			}
			else
			{
				iVar15 = Global_51553[iVar0 /*120*/].f_1[iVar1];
				bVar16 = false;
				if (Global_51553[iVar0 /*120*/].f_69[iVar1])
				{
					bVar16 = true;
				}
				iVar17 = Global_51915[iVar13 /*203*/].f_10[iVar15 /*48*/];
				if (bVar16 == 1)
				{
					if (Global_42615[iVar17 /*12*/].f_4 > 0)
					{
						if (Global_51553[iVar0 /*120*/].f_35[iVar1] == 0)
						{
							bVar16 = 2;
						}
					}
				}
				Var18 = { func_32(Global_42615[iVar17 /*12*/]) };
				UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(8);
				UNK_0x3CAEA85DA607305E(bVar3);
				UNK_0x3CAEA85DA607305E(bVar16);
				UNK_0x3CAEA85DA607305E(false);
				func_9(func_59(Global_42615[iVar17 /*12*/].f_2));
				func_9(&Var18);
				UNK_0x7E60D21B163E9D56();
			}
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		bVar3++;
	}
	return iVar2;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar124;
	bool bVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;

	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51553[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = (Global_51553[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_51553[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 1));
	if (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar124 = 0;
	while (iVar124 < iVar2)
	{
		bVar125 = true;
		if (Global_51553[iVar0 /*120*/].f_103[iVar3])
		{
			bVar125 = false;
		}
		if (Global_51553[iVar0 /*120*/].f_86[iVar3])
		{
			iVar126 = Global_51553[iVar0 /*120*/].f_18[iVar3];
			iVar127 = -1;
			iVar128 = 0;
			iVar128 = 0;
			while (iVar128 < 7)
			{
				if (Global_51915[iVar128 /*203*/].f_1 == iVar126)
				{
					iVar127 = iVar128;
				}
				iVar128++;
			}
			if (iVar127 == -1)
			{
				bVar125 = false;
			}
		}
		if (bVar125)
		{
			iVar129 = Var4;
			Var4.f_1[iVar129] = Global_51553[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[iVar129] = Global_51553[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[iVar129] = Global_51553[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[iVar129] = Global_51553[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[iVar129] = Global_51553[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[iVar129] = Global_51553[iVar0 /*120*/].f_86[iVar3];
			Var4++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar124++;
	}
	Global_51553[iVar0 /*120*/] = Var4;
	iVar124 = 0;
	while (iVar124 < 16)
	{
		Global_51553[iVar0 /*120*/].f_103[iVar124] = 0;
		Global_51553[iVar0 /*120*/].f_1[iVar124] = Var4.f_1[iVar124];
		Global_51553[iVar0 /*120*/].f_18[iVar124] = Var4.f_18[iVar124];
		Global_51553[iVar0 /*120*/].f_35[iVar124] = Var4.f_35[iVar124];
		Global_51553[iVar0 /*120*/].f_52[iVar124] = Var4.f_52[iVar124];
		Global_51553[iVar0 /*120*/].f_69[iVar124] = Var4.f_69[iVar124];
		Global_51553[iVar0 /*120*/].f_86[iVar124] = Var4.f_86[iVar124];
		iVar124++;
	}
}

void func_68()
{
	float fVar0;

	fVar0 = func_69(vLocal_50, vLocal_47, -90f, 0f, 90f, Global_19446, 350f, 0);
	if (Global_8160 == 0)
	{
		UNK_0x2BF9F8AAD637763A((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_21838 = 0;
		func_1(0);
		func_4();
		iLocal_18 = 0;
	}
}

float func_69(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13)
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
	if (func_72() && Global_4270044 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = UNK_0x1C0640BA9A7327B3();
	}
	fVar3 = func_71((SYSTEM::TO_FLOAT((UNK_0x1C0640BA9A7327B3() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_19414 = { func_70(vParam0, vParam3, fVar4) };
		Global_19417 = { func_70(vParam6, vParam9, fVar4) };
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

Vector3 func_70(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_71(float fParam0, float fParam1, float fParam2)
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

bool func_72()
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

void func_73()
{
	float fVar0;

	fVar0 = func_69(vLocal_47, vLocal_50, Global_19446, -90f, 0f, 90f, 350f, 0);
	if (Global_8160 == 0)
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			if (!func_74())
			{
				UNK_0x2BF9F8AAD637763A((500f + (75f * fVar0)));
			}
		}
		else
		{
			UNK_0x2BF9F8AAD637763A((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_21839 = 0;
		iLocal_18 = 0;
	}
}

bool func_74()
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

void func_75(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		UNK_0xA402F6C87C08815C(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		UNK_0xA402F6C87C08815C(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_SOFT_KEYS");
		UNK_0x3CAEA85DA607305E(true);
		UNK_0x1200CC973A2399C8(true);
		UNK_0x3CAEA85DA607305E(16);
		UNK_0x7E60D21B163E9D56();
	}
	else
	{
		UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_SOFT_KEYS");
		UNK_0x3CAEA85DA607305E(true);
		UNK_0x1200CC973A2399C8(false);
		UNK_0x3CAEA85DA607305E(16);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_76(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		UNK_0xA402F6C87C08815C(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		UNK_0xA402F6C87C08815C(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_SOFT_KEYS");
		UNK_0x3CAEA85DA607305E(3);
		UNK_0x1200CC973A2399C8(true);
		UNK_0x3CAEA85DA607305E(4);
		UNK_0x7E60D21B163E9D56();
	}
	else
	{
		UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_SOFT_KEYS");
		UNK_0x3CAEA85DA607305E(3);
		UNK_0x1200CC973A2399C8(false);
		UNK_0x3CAEA85DA607305E(4);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_77(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		UNK_0xA402F6C87C08815C(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		UNK_0xA402F6C87C08815C(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_SOFT_KEYS");
		UNK_0x3CAEA85DA607305E(2);
		UNK_0x1200CC973A2399C8(true);
		UNK_0x3CAEA85DA607305E(2);
		UNK_0x7E60D21B163E9D56();
	}
	else
	{
		UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_SOFT_KEYS");
		UNK_0x3CAEA85DA607305E(2);
		UNK_0x1200CC973A2399C8(false);
		UNK_0x3CAEA85DA607305E(2);
		UNK_0x7E60D21B163E9D56();
	}
}

int func_78()
{
	func_79();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_79()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_82(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_81(UNK_0x16F2683693E537C9());
			if (func_80(iVar0) && (!func_15(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_80(Global_111638.f_2358.f_539.f_4321))
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

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

