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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38[24] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	vector3 vLocal_44[24] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char cLocal_50[64] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	vector3 vLocal_66[24] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	bool bLocal_72 = false;
	vector3 vLocal_73[24] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	vector3 vLocal_85[24] = "";
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	bool bLocal_91 = false;
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
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_142[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_173[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_204[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_235 = false;
	int iLocal_236 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	UNK_0xB57F88F0123F4C38();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0xEAE0D21A50E6C7F4(Global_7357, true))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				if (UNK_0x1EE04CEA36EF313B())
				{
					if (Global_19474)
					{
						func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_19429)
						{
							func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					UNK_0x0674E58A79778E99(&Global_7357, true);
				}
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_19671, false))
		{
			if (!func_118())
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_19671, true))
				{
					UNK_0x5D96D8530B3D0904(&Global_19671, true);
					if (UNK_0x8CD06866876216F2())
					{
						iLocal_106 = UNK_0x2B6E0A53779D29EA();
					}
					else
					{
						iLocal_102 = UNK_0x1C0640BA9A7327B3();
					}
				}
				if (UNK_0x8CD06866876216F2())
				{
					iLocal_108 = UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_106);
				}
				else
				{
					iLocal_103 = UNK_0x1C0640BA9A7327B3();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_111(&Global_20259, &Global_20875, &Global_20795, Global_20808, Global_21790, Global_21791, 0))
					{
						Global_19671 = 0;
					}
				}
				else
				{
					Global_19671 = 0;
				}
			}
		}
		if (((!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_17, 4)) && !func_110()) && UNK_0x8A22C4C08282BF26(-1085924656) == 0)
		{
			if (Global_20805 != 0)
			{
				if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
				{
					func_109();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_105();
		}
		switch (Global_20805)
		{
			case 0:
				break;
			case 1:
				if (Global_20811)
				{
					if (Global_20801 == 0)
					{
						func_103();
					}
					else
					{
						func_102();
						func_103();
					}
				}
				else if (Global_20801 == 0)
				{
					func_92();
				}
				else
				{
					func_102();
					func_74();
				}
				break;
			case 2:
				func_68();
				break;
			case 3:
				func_64();
				break;
			case 4:
				if (Global_20811)
				{
					if (Global_20813)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			case 5:
				func_4();
				break;
			case 6:
				func_1();
				break;
			default:
				break;
		}
	}
}

void func_1()
{
	Global_20815 = 0;
	Global_19485 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_20816 = 0;
	Global_20817 = 0;
	Global_20818 = 0;
	Global_20819 = 0;
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
	Global_20809 = 0;
	Global_20810 = 0;
	Global_20852 = 0;
	Global_20853 = 0;
	Global_20856 = 0;
	Global_20858 = 0;
	Global_20857 = 0;
	Global_20860 = 0;
	Global_20859 = 0;
	Global_21822 = 0;
	Global_20862 = 0;
	if (Global_19486.f_1 == 10)
	{
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 11))
	{
		func_3();
	}
	Global_20811 = 0;
	Global_20812 = 0;
	Global_20813 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21795 = 0;
	Global_21802 = 0;
	Global_21801 = 0;
	Global_21798 = 0;
	Global_21797 = 0;
	Global_21799 = 0;
	Global_21800 = 0;
	Global_20801 = 0;
	Global_20802 = 0;
	Global_20803 = 0;
	Global_20804 = 0;
	Global_21063 = 0;
	Global_21826 = 5000;
	Global_19469 = 0;
	UNK_0x0674E58A79778E99(&Global_7356, 20);
	UNK_0x0674E58A79778E99(&Global_7356, 24);
	UNK_0x0674E58A79778E99(&Global_7357, 23);
	UNK_0x0674E58A79778E99(&Global_7358, false);
	UNK_0x0674E58A79778E99(&Global_7357, 9);
	UNK_0x0674E58A79778E99(&Global_7357, 31);
	UNK_0x0674E58A79778E99(&Global_7357, 17);
	UNK_0x0674E58A79778E99(&Global_7358, 5);
	Global_21789 = 0;
	Global_21788 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		Global_20805 = 4;
	}
	else
	{
		Global_20805 = 0;
		Global_21816 = 0;
		Global_21827 = UNK_0x1C0640BA9A7327B3();
	}
}

void func_3()
{
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 11))
			{
				if (!Global_19429)
				{
					UNK_0x8D4C354BB8991817(UNK_0x16F2683693E537C9(), 0, 1);
				}
				if (Global_76622)
				{
					UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 244, true);
					UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 243, true);
					UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 242, true);
				}
				UNK_0x0674E58A79778E99(&Global_7356, 11);
			}
		}
	}
}

void func_4()
{
	Global_20815 = 0;
	Global_19485 = 0;
	func_2();
}

void func_5()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
		{
			if (Global_20861 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_21797 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_21816 == 1)
			{
				UNK_0xFD81FDD5AE805B89(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_21816 == 0)
		{
			UNK_0x8BD0DC8EEFDC56D8();
			iLocal_31 = 0;
		}
	}
	else if (Global_21799 > 0)
	{
		iLocal_37 = UNK_0x1C0640BA9A7327B3();
		if ((iLocal_37 - iLocal_36) > Global_21799)
		{
			UNK_0x871665896C890C7F();
			Global_21797 = 0;
		}
	}
	if (Global_21816 == 0)
	{
		if (!UNK_0x25037C66EB32B076())
		{
			Global_20805 = 6;
		}
	}
}

void func_6()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0x1EE04CEA36EF313B())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 11))
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (Global_76622 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
			{
				if (Global_76622 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_76622 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_21816 == 1)
		{
			if (Global_21817 == 1)
			{
				UNK_0xFD81FDD5AE805B89(1);
				iLocal_31 = 1;
				Global_21817 = 0;
			}
		}
	}
	else if (Global_21816 == 0)
	{
		if (Global_21817 == 1)
		{
			UNK_0x8BD0DC8EEFDC56D8();
			iLocal_31 = 0;
			Global_21817 = 0;
		}
	}
	if (Global_20858 == 0)
	{
		if (!Global_20818)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_7357, 31))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_7357, 27))
				{
					if (func_54())
					{
						if (Global_19486.f_1 > 6)
						{
							UNK_0x5D96D8530B3D0904(&Global_7357, 24);
							UNK_0x5D96D8530B3D0904(&Global_7357, 27);
							UNK_0x0674E58A79778E99(&Global_7357, 26);
							UNK_0x0674E58A79778E99(&Global_7357, 25);
						}
					}
				}
			}
		}
	}
	if (UNK_0x1EE04CEA36EF313B() == 0 && Global_20818 == 0)
	{
		if (Global_20858 == 1)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 23);
		}
		else
		{
			UNK_0x0674E58A79778E99(&Global_7357, 23);
		}
		if (Global_20862)
		{
			if (Global_20858 == 0)
			{
				Global_20424 = { Global_20863 };
				Global_20881 = { Global_20869 };
				Global_20815 = 0;
				Global_21822 = 6;
				func_53();
				return;
			}
		}
		if (!Global_20860)
		{
			while (Global_20858 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_19486.f_1 < 6)
				{
					Global_20858 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_20860)
						{
							iLocal_30 = 1;
							Global_21820 = 1;
							func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
							func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							if (Global_19474)
							{
								func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								UNK_0x5D96D8530B3D0904(&Global_7356, 17);
								func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								UNK_0x5D96D8530B3D0904(&Global_7356, 17);
								func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_21818 = 1;
							if (func_50(Global_6671, Global_19486) == 0)
							{
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, "CELL_300", &(Global_117[Global_6671 /*10*/].f_4), "CELL_195", 0);
								func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							}
							else
							{
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
								func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							}
							if (Global_19474)
							{
								func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							UNK_0x0674E58A79778E99(&Global_7356, 17);
						}
					}
					if (func_49(2, Global_19455, 0))
					{
						func_47();
						Global_19412 = 0.19f;
						Global_20858 = 0;
						func_45();
						if (Global_20860)
						{
							Global_20424 = { Global_20941 };
							Global_21822 = 5;
						}
						else if (Global_20803 > 0)
						{
							Global_21063 = 1;
							Global_20805 = 0;
							Global_21826 = 0;
							if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_21789 + 1)
								{
									uLocal_111[iVar0] = func_44(&(Global_21064[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_44(&(Global_21426[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_21789, &Global_20094, Global_6671, &Global_20881, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_20803 == 2)
							{
								func_25(&Global_20094, Global_6671, &Global_20881, &(Global_20959[0 /*6*/]), &(Global_21011[0 /*6*/]), &(Global_20959[1 /*6*/]), &(Global_21011[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_21822 = 1;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20424 = { Global_20899 };
							Global_21822 = 1;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19456, 0) || UNK_0xEAE0D21A50E6C7F4(Global_7356, 24))
					{
						func_47();
						Global_19412 = 0.19f;
						Global_20858 = 0;
						func_45();
						if (Global_20860)
						{
							Global_20424 = { Global_20935 };
							Global_21822 = 4;
						}
						else if (Global_20803 > 0)
						{
							Global_21063 = 1;
							Global_20805 = 0;
							Global_21826 = 0;
							if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_21788 + 1)
								{
									uLocal_173[iVar1] = func_44(&(Global_21245[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_44(&(Global_21607[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_21788, &Global_20094, Global_6671, &Global_20881, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_20803 == 2)
							{
								func_25(&Global_20094, Global_6671, &Global_20881, &(Global_20972[0 /*6*/]), &(Global_21024[0 /*6*/]), &(Global_20972[1 /*6*/]), &(Global_21024[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_21822 = 2;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20424 = { Global_20905 };
							Global_21822 = 2;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19458, 0))
					{
						if (Global_20860)
						{
							Global_19412 = 0.19f;
							Global_20858 = 0;
							func_45();
							func_47();
							Global_20424 = { Global_20929 };
							Global_21822 = 3;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_20858)
			{
				SYSTEM::WAIT(0);
				if (Global_19486.f_1 < 6)
				{
					Global_20858 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_19467, "DISPLAY_VIEW", 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_22(Global_19467, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_19474)
						{
							func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						UNK_0x0674E58A79778E99(&Global_7356, 17);
						bLocal_235 = false;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_19455, 0))
					{
						func_47();
						Global_20858 = 0;
						func_45();
						UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
						iLocal_236 = UNK_0x7A8BB56B212464AC();
						while (!UNK_0xC95D7AEEDEF4946B(iLocal_236))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = UNK_0xA52833FE33F41C53(iLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_20424 = { Global_20935 };
								Global_21822 = 4;
								break;
							case 1:
								Global_20424 = { Global_20929 };
								Global_21822 = 3;
								break;
							case 2:
								Global_20424 = { Global_20941 };
								Global_21822 = 5;
								break;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19456, 0))
					{
						Global_20858 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_20806 == 0)
		{
			UNK_0x5CEB4DB888A62073(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_19486.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_20805 = 6;
		}
		UNK_0x4D7F4CC43D4D0DE3(-1, "Hang_Up", &Global_19475, 1);
		func_15();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
	else if (Global_19664 == 0)
	{
		if (func_49(2, Global_19454, 0))
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
					{
					}
					else
					{
						Global_19464 = 1;
						func_45();
						UNK_0x5CEB4DB888A62073(false);
						Global_20854 = 1;
						Global_20855 = 1;
						Global_20805 = 6;
						func_15();
						Global_19486.f_1 = Global_19488;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
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
			func_51(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_13(Global_7961);
			if (Global_7961 == 1)
			{
				func_51(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19490;
			}
			else
			{
				func_51(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				UNK_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_11();
				UNK_0x0674E58A79778E99(&Global_7358, 9);
				func_51(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			break;
		case 7:
			break;
		case 10:
			func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		case 9:
			if (Global_19485 == 1)
			{
				func_10();
				func_51(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
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
				else if (func_50(Global_6671, Global_19486) == 0)
				{
					func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_51(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
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
					if (func_50(Global_6671, Global_19486) == 0)
					{
						func_51(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			func_23();
			break;
		default:
			break;
	}
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
		func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x5D96D8530B3D0904(&Global_7356, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
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
		if (func_14(14))
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
									func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_14(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_15()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return;
	}
	switch (Global_19488)
	{
		case 5:
			Global_19488 = 6;
			break;
		case 6:
			if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 5))
			{
				Global_19488 = 6;
				UNK_0x0674E58A79778E99(&Global_7357, 5);
			}
			else
			{
				Global_19488 = 3;
			}
			break;
		case 7:
			Global_19488 = 3;
			break;
		case 3:
			if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 5))
			{
				Global_19488 = 6;
				UNK_0x0674E58A79778E99(&Global_7357, 5);
			}
			else
			{
				Global_19488 = 3;
			}
			break;
		default:
			Global_19488 = 3;
			break;
	}
}

void func_16()
{
	if (bLocal_235)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_235 = false;
		}
	}
	if (bLocal_235 == 0)
	{
		if (func_49(2, Global_19462, 0) || UNK_0xBFC0798A6E3417F9(2, 181))
		{
			func_20();
			bLocal_235 = true;
			SYSTEM::SETTIMERA(0);
		}
		if (func_49(2, Global_19463, 0) || UNK_0xBFC0798A6E3417F9(2, 180))
		{
			func_17();
			bLocal_235 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()
{
	func_51(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_18();
}

void func_18()
{
	if (func_19())
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

bool func_19()
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

void func_20()
{
	func_51(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_21();
}

void func_21()
{
	if (func_19())
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

void func_22(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_23()
{
	if (UNK_0x83D8570832F172A7(Global_19467))
	{
		func_24();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_76622)
	{
		func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x0674E58A79778E99(&Global_7356, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;

	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_39(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar11, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					UNK_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_109();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_37();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0 /*6*/] = { Global_20985[0 /*6*/] };
			Global_20959[1 /*6*/] = { Global_20985[1 /*6*/] };
			Global_21011[0 /*6*/] = { Global_21037[0 /*6*/] };
			Global_21011[1 /*6*/] = { Global_21037[1 /*6*/] };
			Global_20972[0 /*6*/] = { Global_20998[0 /*6*/] };
			Global_20972[1 /*6*/] = { Global_20998[1 /*6*/] };
			Global_21024[0 /*6*/] = { Global_21050[0 /*6*/] };
			Global_21024[1 /*6*/] = { Global_21050[1 /*6*/] };
		}
		if (Global_20811)
		{
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam3)
			{
				func_30();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (Global_21063 == 0)
					{
						if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
						{
							return 0;
						}
						if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
						{
							return 0;
						}
						if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
						{
							return 0;
						}
						if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
			}
			func_27();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_53();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_109();
	}
	return 0;
}

void func_27()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	UNK_0x0674E58A79778E99(&Global_7357, 16);
}

bool func_28()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_29()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar1, 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (UNK_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1))
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

void func_30()
{
	if (func_14(14))
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
			if (func_33(iVar0) && (!func_14(14) || Global_110589))
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
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_38(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, bParam0);
}

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_40(int iParam0)
{
	Global_20802 = iParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_41()
{
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_20819 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_43(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	func_40(iParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		UNK_0x5A963FB0365294C8(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (!Global_19429)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

bool func_48()
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
		if (func_14(14))
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

bool func_49(int iParam0, int iParam1, int iParam2)
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

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_51(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_52()
{
	if (func_48())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (!Global_19429)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_53()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	UNK_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

bool func_54()
{
	if (UNK_0x8CD06866876216F2())
	{
		iLocal_108 = UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_107);
	}
	else
	{
		iLocal_105 = UNK_0x1C0640BA9A7327B3();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return false;
}

void func_55(int iParam0)
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
	if (!func_28())
	{
		Global_19486.f_1 = 3;
	}
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

void func_60()
{
	if (func_49(2, Global_19463, 0))
	{
		if (Global_21816 == 0)
		{
			if (Global_20811)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 17))
				{
				}
				else
				{
					UNK_0x5CFF55224BEC1BDF();
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_62() && UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0))
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

bool func_62()
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

void func_63()
{
	if (Global_76622 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_21818 = 1;
		if (func_50(Global_6671, Global_19486) == 0)
		{
			func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
			func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
		Global_19412 = 0.2f;
		if (Global_19474)
		{
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x0674E58A79778E99(&Global_7356, 17);
	}
	if (Global_20858 == 1)
	{
		if (Global_19486.f_1 < 6)
		{
			Global_20858 = 0;
		}
		else
		{
			if (Global_19426 == 0)
			{
				if (func_49(2, Global_19455, 0))
				{
					Global_19412 = 0.19f;
					Global_20858 = 0;
					func_45();
					Global_21823 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_19456, 0))
			{
				Global_19412 = 0.19f;
				Global_20858 = 0;
				func_45();
				Global_21823 = 2;
			}
		}
	}
	else if (Global_21823 == 2)
	{
		if (Global_20806 == 0)
		{
			UNK_0x5CEB4DB888A62073(false);
			Global_20805 = 6;
		}
		func_15();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
	else if (!UNK_0x1EE04CEA36EF313B())
	{
		iLocal_32 = 0;
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		UNK_0x4D7F4CC43D4D0DE3(-1, "Hang_Up", &Global_19475, 1);
		func_15();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
}

void func_64()
{
	if (Global_19672 == 1)
	{
		if (UNK_0x1EE04CEA36EF313B())
		{
			if (UNK_0x44BE52A7BCBABEE2())
			{
				Global_19672 = 0;
			}
		}
		if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			Global_19672 = 0;
			UNK_0x5CEB4DB888A62073(false);
			Global_20805 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_35)
	{
		if (Global_19672 == 1)
		{
			Global_19672 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_21826 || Global_19672 == 1)
	{
		if (func_49(2, Global_19454, 0))
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
					{
					}
					else
					{
						Global_19464 = 1;
						func_45();
						UNK_0x5CEB4DB888A62073(false);
						Global_20854 = 1;
						Global_20805 = 6;
						UNK_0x0674E58A79778E99(&Global_7356, 27);
						if (!Global_20816)
						{
							UNK_0x5D96D8530B3D0904(&Global_7357, 5);
						}
						func_15();
						Global_19486.f_1 = Global_19488;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 27);
		Global_20805 = 4;
		Global_20862 = 0;
		func_67();
		func_66();
		if (!Global_20818)
		{
			if (Global_21822 == 0)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_7358, 5))
				{
					UNK_0x871665896C890C7F();
				}
				UNK_0x0674E58A79778E99(&Global_7358, 5);
			}
			else
			{
				UNK_0x807CD22F2C5F12E8(Global_20424.f_368, Global_20424.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (UNK_0x8CD06866876216F2())
	{
		iLocal_107 = UNK_0x2B6E0A53779D29EA();
	}
	else
	{
		iLocal_104 = UNK_0x1C0640BA9A7327B3();
	}
}

void func_66()
{
	if (Global_20818)
	{
		if (Global_76622)
		{
			if (UNK_0x83D8570832F172A7(Global_19467))
			{
				if (!UNK_0x0EFF6B4415DAF4A1())
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1732), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (UNK_0x83D8570832F172A7(Global_19467))
	{
		if (!Global_20813)
		{
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
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
			else if (func_50(Global_6671, Global_19486) == 0)
			{
				func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_219", &(Global_1798[Global_6671 /*29*/].f_3), 0);
			}
		}
		func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
}

void func_68()
{
	if (UNK_0x8CD06866876216F2())
	{
		iLocal_109 = UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_95);
		iLocal_110 = UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_98);
	}
	else
	{
		iLocal_94 = UNK_0x1C0640BA9A7327B3();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = UNK_0x1C0640BA9A7327B3();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_20852 == 1)
	{
		if (func_48())
		{
			if (iLocal_109 > 4000)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14))
				{
					if (UNK_0x83D8570832F172A7(Global_19467))
					{
						func_45();
						Global_19485 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14))
			{
				if (UNK_0x83D8570832F172A7(Global_19467))
				{
					func_45();
					Global_19485 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_19485 = 3;
	}
	if (Global_19485 == 2)
	{
		iLocal_30 = 0;
		Global_20805 = 4;
		func_61();
		Global_20862 = 0;
		func_67();
		func_66();
		if (!Global_20818)
		{
			if (Global_21822 == 0)
			{
				UNK_0x871665896C890C7F();
			}
			else
			{
				UNK_0x807CD22F2C5F12E8(Global_20424.f_368, Global_20424.f_369);
			}
		}
		func_65();
		Global_21821 = 0;
	}
	if (Global_20852 == 0)
	{
		if (Global_19485 == 3)
		{
			if (Global_20818)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_21821 = 1;
				UNK_0x5CEB4DB888A62073(false);
				Global_20805 = 6;
				func_15();
				Global_19486.f_1 = Global_19488;
				func_8();
			}
		}
	}
	else if (Global_19485 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
{
	Global_2543673.f_2 = 1;
	Global_2543673.f_38 = 1;
	if (UNK_0x58424C49F8924842())
	{
		if (UNK_0xC8DB5FB7097EAC7E())
		{
			while (UNK_0x72B92E9113241B15())
			{
				SYSTEM::WAIT(0);
			}
			UNK_0xBE1F51E5568A1C6A();
			Global_2543673 = 0;
			Global_2543673.f_2 = 0;
		}
		else if (func_73(Global_2543673.f_20))
		{
			if (UNK_0x04A104F429E6CBB0(&(Global_2543673.f_20)))
			{
				if (!UNK_0xD9AF1D6157682D28(&(Global_2543673.f_20)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_2543673.f_37)
	{
		func_55(0);
	}
	Global_2543673.f_37 = 0;
	Global_2543673.f_3 = 0;
}

void func_71()
{
	Global_2543673.f_1 = 0;
	Global_2543673 = 0;
	Global_2543673.f_2 = 0;
	Global_2543673.f_33 = -1;
	Global_2543673.f_34 = -1;
	StringCopy(&(Global_2543673.f_4), "", 64);
	StringCopy(&(Global_2543673.f_39[0 /*16*/]), "", 64);
	Global_2543673.f_38 = 0;
	Global_2543673.f_56 = 0;
	Global_2543673.f_57 = 0;
	Global_2543673.f_58 = -2;
	Global_2543673.f_3 = 0;
	func_72(&(Global_2543673.f_20));
}

void func_72(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

void func_74()
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_20801)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_20424.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_19673[iVar2 /*6*/] = { Global_20424.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_19673[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_19673[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_19673[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (UNK_0xEF07223F00EBE9C9(&cLocal_38))
			{
				StringCopy(&cLocal_50, UNK_0x19C9F30A7697B43C(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				iVar5 = func_85(iVar13);
				iLocal_82 = func_84();
				iLocal_83 = func_83();
				iLocal_84 = func_82();
				iVar6 = func_81(iVar13);
				iVar7 = func_80(iVar13);
				iVar8 = func_79(iVar13);
				iVar12 = func_78(iVar13);
				iVar9 = func_77(iVar13);
				iVar10 = func_76(iVar13);
				iVar11 = func_75(iVar13);
				if (UNK_0xEF07223F00EBE9C9(&(Global_19673[iVar2 /*6*/])))
				{
					if (UNK_0x7F8A39872A07D2CE(&(Global_19673[iVar2 /*6*/]), &(Global_20424.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						UNK_0x76C580A465887CCA(iVar3, &cLocal_50, &(Global_19673[iVar2 /*6*/]), iVar4, iVar5, 0, iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (UNK_0xEF07223F00EBE9C9(&cLocal_44))
			{
				StringCopy(&cLocal_50, UNK_0x19C9F30A7697B43C(&cLocal_44), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				iVar5 = func_85(0);
				iLocal_82 = func_84();
				iLocal_83 = func_83();
				iLocal_84 = func_82();
				iVar6 = func_81(0);
				iVar7 = func_80(0);
				iVar8 = func_79(0);
				iVar12 = func_78(0);
				iVar9 = func_77(0);
				iVar10 = func_76(0);
				iVar11 = func_75(0);
				UNK_0x76C580A465887CCA(iVar3, &cLocal_50, &(Global_20424.f_6[iLocal_92 /*6*/]), iVar4, iVar5, 1, iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
				StringCopy(&(Global_19673[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_19673[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_20811 == 0)
	{
		UNK_0x3EEE48172FD56471(iLocal_83);
		UNK_0x28C8907966BB0A0C(iLocal_84);
		UNK_0xD9BF6EB05EEE865F(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, iLocal_82);
		Global_20805 = 4;
	}
}

int func_75(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 1;
	}
	if (UNK_0x7F8A39872A07D2CE(bVar0, "1"))
	{
		return 1;
	}
	if (UNK_0x7F8A39872A07D2CE(bVar0, "2"))
	{
		return 2;
	}
	if (UNK_0x7F8A39872A07D2CE(bVar0, "3"))
	{
		return 3;
	}
	if (UNK_0x7F8A39872A07D2CE(bVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), 2, 3);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), true, 2);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), false, true);
	if (UNK_0x7F8A39872A07D2CE(bVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(bVar0);
}

int func_86(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return 0;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "1"))
	{
		return 1;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "2"))
	{
		return 2;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "3"))
	{
		return 3;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "4"))
	{
		return 4;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "5"))
	{
		return 5;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "6"))
	{
		return 6;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "7"))
	{
		return 7;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "8"))
	{
		return 8;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "9"))
	{
		return 9;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "A"))
	{
		return 10;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "B"))
	{
		return 11;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "C"))
	{
		return 12;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "D"))
	{
		return 13;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "E"))
	{
		return 14;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "F"))
	{
		return 15;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "G"))
	{
		return 16;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "H"))
	{
		return 17;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "I"))
	{
		return 18;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "J"))
	{
		return 19;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "K"))
	{
		return 20;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "L"))
	{
		return 21;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "M"))
	{
		return 22;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "N"))
	{
		return 23;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "O"))
	{
		return 24;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "P"))
	{
		return 25;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "Q"))
	{
		return 26;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "R"))
	{
		return 27;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "S"))
	{
		return 28;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "T"))
	{
		return 29;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "U"))
	{
		return 30;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "V"))
	{
		return 31;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "W"))
	{
		return 32;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "X"))
	{
		return 33;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "Y"))
	{
		return 34;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "Z"))
	{
		return 35;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(bVar0);
}

int func_88(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(bVar0);
}

void func_89()
{
	cLocal_85 = { Global_20424.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (UNK_0xEF07223F00EBE9C9(&cLocal_85))
	{
		bLocal_91 = UNK_0x19C9F30A7697B43C(&cLocal_85);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_91))
		{
		}
	}
}

void func_90()
{
	cLocal_73 = { Global_20424.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (UNK_0xEF07223F00EBE9C9(&cLocal_73))
	{
		bLocal_79 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), false, true);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_79))
		{
		}
		bLocal_80 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), true, 2);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_80))
		{
		}
		bLocal_81 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), 2, 3);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_81))
		{
		}
	}
}

void func_91()
{
	cLocal_66 = { Global_20424.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (UNK_0xEF07223F00EBE9C9(&cLocal_66))
	{
		bLocal_72 = UNK_0x19C9F30A7697B43C(&cLocal_66);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_72))
		{
		}
	}
}

void func_92()
{
	func_93();
	UNK_0x3EEE48172FD56471(iLocal_83);
	UNK_0x28C8907966BB0A0C(iLocal_84);
	if (Global_21797)
	{
		UNK_0x810A743FEA9C279F(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, iLocal_82);
		iLocal_36 = UNK_0x1C0640BA9A7327B3();
	}
	else
	{
		UNK_0xD9BF6EB05EEE865F(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, iLocal_82);
	}
	Global_20805 = 4;
}

void func_93()
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (UNK_0x203AA5AD695C335D(&Global_20881))
	{
		if (UNK_0x7F8A39872A07D2CE(&Global_20881, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (UNK_0x33A494591F2C1975() || UNK_0xDC30EF462887322E())
		{
			if (Global_1573348 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_76622 || func_101())
		{
			if (Global_1573348 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(UNK_0x12AB0310C2281427(&Global_20881)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_20807 < 5 || Global_20807 == 10) || Global_20807 == 12) || Global_20807 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				UNK_0xD7992BEF7A9D109E(&Global_20881, 7);
				while (!UNK_0x67C1D9E5B91B2E37(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				UNK_0x23249A21DED9ADF1(&Global_20881, 15);
				while (!UNK_0x67C1D9E5B91B2E37(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			UNK_0xD7992BEF7A9D109E(&Global_20881, 6);
			while (!UNK_0x67C1D9E5B91B2E37(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			UNK_0x23249A21DED9ADF1(&Global_20881, 14);
			while (!UNK_0x67C1D9E5B91B2E37(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	UNK_0x354A7938830469D2();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_21815 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_20424 };
		StringConCat(&cLocal_44, "A", 24);
		Global_19673[iVar2 /*6*/] = { Global_20424 };
		StringConCat(&(Global_19673[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_19673[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_19673[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (UNK_0xEF07223F00EBE9C9(&cLocal_38))
		{
			StringCopy(&cLocal_50, UNK_0x19C9F30A7697B43C(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4269953 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			iVar5 = func_85(iVar2);
			iLocal_82 = func_84();
			iLocal_83 = func_83();
			iLocal_84 = func_82();
			iVar6 = func_81(iVar2);
			iVar7 = func_80(iVar2);
			iVar8 = func_79(iVar2);
			iVar12 = func_78(iVar2);
			iVar9 = func_77(iVar2);
			iVar10 = func_76(iVar2);
			iVar11 = func_75(iVar2);
			if (UNK_0xEF07223F00EBE9C9(&(Global_19673[iVar2 /*6*/])))
			{
				if (Global_21795 == 0 && Global_21801 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					UNK_0x76C580A465887CCA(iVar3, &cLocal_50, &(Global_19673[iVar2 /*6*/]), iVar4, iVar5, 0, iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
				}
				else if (UNK_0x7F8A39872A07D2CE(&(Global_19673[iVar2 /*6*/]), &Global_21803))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					UNK_0x76C580A465887CCA(iVar3, &cLocal_50, &(Global_19673[iVar2 /*6*/]), iVar4, iVar5, 0, iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
					Global_21815 = iVar2;
					if (Global_21801 == 1)
					{
						Global_21801 = 0;
					}
				}
			}
			else if (Global_21801 == 0 && Global_21795 == 0)
			{
				UNK_0x76C580A465887CCA(iVar3, &cLocal_50, &cLocal_50, iVar4, iVar5, 0, iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (UNK_0xEF07223F00EBE9C9(&cLocal_44))
			{
				StringCopy(&cLocal_50, UNK_0x19C9F30A7697B43C(&cLocal_44), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				iVar5 = func_85(iVar2);
				iLocal_82 = func_84();
				iLocal_83 = func_83();
				iLocal_84 = func_82();
				iVar6 = func_81(iVar2);
				iVar7 = func_80(iVar2);
				iVar8 = func_79(iVar2);
				iVar12 = func_78(iVar2);
				iVar9 = func_77(iVar2);
				iVar10 = func_76(iVar2);
				iVar11 = func_75(iVar2);
				UNK_0x76C580A465887CCA(iVar3, &cLocal_50, &Global_20424, iVar4, iVar5, 1, iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20094[iVar0 /*10*/].f_7 == 1)
		{
			if (UNK_0xC844350D5D58C99A(Global_20094[iVar0 /*10*/]) || Global_20094[iVar0 /*10*/] == 0)
			{
				UNK_0x0AB209C11DAA269B(iVar0, Global_20094[iVar0 /*10*/], &(Global_20094[iVar0 /*10*/].f_1));
			}
			if (Global_20094.f_161 == iVar0)
			{
				if ((Global_20094.f_162 != 0f && Global_20094.f_162.f_1 != 0f) && Global_20094.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					UNK_0x0E605A18BDCE8A6D(Global_20094.f_161, Global_20094.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4269953 == 1)
	{
		Global_4269953 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4269772[iVar0 /*9*/].f_7 == 1)
			{
				if (UNK_0xC844350D5D58C99A(Global_4269772[iVar0 /*9*/]) || Global_4269772[iVar0 /*9*/] == 0)
				{
					UNK_0x0AB209C11DAA269B(Global_4269772[iVar0 /*9*/].f_8, Global_4269772[iVar0 /*9*/], &(Global_4269772[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_85 = { Global_20424 };
	StringConCat(&cLocal_85, "LF", 24);
	if (UNK_0xEF07223F00EBE9C9(&cLocal_85))
	{
		bLocal_91 = UNK_0x19C9F30A7697B43C(&cLocal_85);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_91))
		{
		}
	}
}

void func_96()
{
	cLocal_73 = { Global_20424 };
	StringConCat(&cLocal_73, "IF", 24);
	if (UNK_0xEF07223F00EBE9C9(&cLocal_73))
	{
		bLocal_79 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), false, true);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_79))
		{
		}
		bLocal_80 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), true, 2);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_80))
		{
		}
		bLocal_81 = UNK_0xA739D71DFFCCC22C(UNK_0x19C9F30A7697B43C(&cLocal_73), 2, 3);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_81))
		{
		}
	}
}

void func_97()
{
	cLocal_66 = { Global_20424 };
	StringConCat(&cLocal_66, "SL", 24);
	if (UNK_0xEF07223F00EBE9C9(&cLocal_66))
	{
		bLocal_72 = UNK_0x19C9F30A7697B43C(&cLocal_66);
		if (UNK_0x2EBF5002C6B6A06C(bLocal_72))
		{
		}
	}
}

bool func_98(int iParam0)
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case -360992886:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
		case -556967217:
		case 510894735:
		case -96774198:
		case 1931750438:
		case 962651001:
		case -805815803:
		case -1396474296:
		case 188331744:
		case -667145730:
		case 1027410289:
		case -190066836:
		case 5422313:
		case -591754196:
		case 1414208944:
		case -657203993:
		case 365230037:
		case joaat("CASBKAU"):
		case 1751613877:
		case 502358067:
		case -701873518:
		case -387856564:
		case -342942601:
		case -450026770:
		case -2121613853:
		case 1192484316:
		case -839727634:
		case 700260812:
		case -1133857112:
			return true;
		default:
			break;
	}
	return false;
}

bool func_99()
{
	if (Global_2621550)
	{
		if (func_14(0))
		{
			if (Global_3145728 || func_100(0))
			{
				return true;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_14(0))
		{
			if (Global_3670016 || func_100(0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_100(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

var func_101()
{
	return Global_1312854;
}

void func_102()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (UNK_0x33A494591F2C1975() || UNK_0xDC30EF462887322E())
	{
		if (Global_1573348 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_76622)
	{
		if (Global_1573348 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (UNK_0x203AA5AD695C335D(&Global_20881))
	{
		if (UNK_0x7F8A39872A07D2CE(&Global_20881, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_98(UNK_0x12AB0310C2281427(&Global_20881)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_20807 < 5 || Global_20807 == 10) || Global_20807 == 12) || Global_20807 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			UNK_0xD7992BEF7A9D109E(&Global_20881, 7);
			while (!UNK_0x67C1D9E5B91B2E37(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			UNK_0x23249A21DED9ADF1(&Global_20881, 15);
			while (!UNK_0x67C1D9E5B91B2E37(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		UNK_0xD7992BEF7A9D109E(&Global_20881, 6);
		while (!UNK_0x67C1D9E5B91B2E37(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		UNK_0x23249A21DED9ADF1(&Global_20881, 14);
		while (!UNK_0x67C1D9E5B91B2E37(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	UNK_0x354A7938830469D2();
	func_94();
}

void func_103()
{
	while (Global_19469 == 1 && UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_19469 = 0;
	if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, true);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7357, true);
	}
	Global_19470 = 0;
	if (Global_20801 == 0)
	{
		if (!Global_20818)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_19672 = 0;
	if (Global_20815)
	{
		if (Global_21822 == 0)
		{
			if (Global_20818 == 0)
			{
				iLocal_34 = 5000;
				UNK_0x18D4904EFBCA423F(Global_20424.f_368, Global_20424.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_19672 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_19672 == 1 && Global_20805 == 1) && SYSTEM::TIMERB() < iLocal_34)
		{
			SYSTEM::WAIT(0);
			if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				Global_19672 = 0;
				UNK_0x5CEB4DB888A62073(false);
				Global_20805 = 6;
			}
			if (UNK_0x1EE04CEA36EF313B())
			{
				if (UNK_0x44BE52A7BCBABEE2())
				{
					Global_19672 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_34)
		{
		}
		if (Global_20805 != 1)
		{
		}
		if (Global_19672 == 0)
		{
		}
	}
	Global_19672 = 0;
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 0) || Global_20805 != 1) || Global_19452 == 1)
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
	else
	{
		if (Global_20813)
		{
			Global_21823 = 0;
			iLocal_32 = 0;
		}
		if (Global_20815 == 0)
		{
			if (Global_20856 == 0)
			{
				Global_19488 = Global_19486.f_1;
				Global_20856 = 1;
			}
			iLocal_30 = 0;
			if (Global_21822 == 0)
			{
				UNK_0x18D4904EFBCA423F(Global_20424.f_368, Global_20424.f_369);
				SYSTEM::WAIT(0);
				Global_20805 = 3;
				Global_19672 = 1;
				SYSTEM::SETTIMERB(0);
				UNK_0x5D96D8530B3D0904(&Global_7356, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_19672 = 0;
				Global_20805 = 4;
			}
			Global_19485 = 0;
			if (Global_20816 == 1)
			{
				if (Global_19486.f_1 == 10)
				{
				}
				if (!Global_19486.f_1 == 9)
				{
					if (Global_19486.f_1 > 4)
					{
						if (Global_19469 == 0)
						{
							Global_19486.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_19486.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_19486.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_19672 == 1)
					{
						if (UNK_0x1EE04CEA36EF313B())
						{
							if (UNK_0x44BE52A7BCBABEE2())
							{
								Global_19672 = 0;
							}
						}
					}
				}
				if (Global_19486.f_1 == 6)
				{
				}
				if (Global_19486.f_1 == 10)
				{
				}
				if (Global_19486.f_1 == 3)
				{
					UNK_0x5CEB4DB888A62073(false);
					Global_20805 = 6;
					Global_19470 = 1;
					return;
				}
				Global_19486.f_1 = 9;
				func_8();
			}
			if (UNK_0x8CD06866876216F2())
			{
				iLocal_101 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				iLocal_99 = UNK_0x1C0640BA9A7327B3();
			}
			while (Global_19486.f_1 != 9 && Global_19469 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_19672 == 1)
				{
					if (UNK_0x1EE04CEA36EF313B())
					{
						if (UNK_0x44BE52A7BCBABEE2())
						{
							Global_19672 = 0;
						}
					}
				}
				if (UNK_0x8CD06866876216F2())
				{
					iLocal_108 = UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_101);
				}
				else
				{
					iLocal_100 = UNK_0x1C0640BA9A7327B3();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_21821 = 1;
						Global_19469 = 1;
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_19469 == 0)
			{
				if (!Global_21822 == 0)
				{
					Global_20862 = 0;
					func_67();
					func_66();
					if (!Global_20818)
					{
						if (Global_21822 == 0)
						{
							UNK_0x871665896C890C7F();
						}
						else
						{
							UNK_0x807CD22F2C5F12E8(Global_20424.f_368, Global_20424.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_104();
				Global_19470 = 1;
			}
		}
		else
		{
			Global_19485 = 1;
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (Global_19486.f_1 == 3)
					{
					}
				}
				else
				{
					UNK_0x0674E58A79778E99(&Global_7357, 21);
				}
			}
			if (Global_20856 == 0)
			{
				Global_19488 = Global_19486.f_1;
				Global_20856 = 1;
			}
			if (Global_19486.f_1 == 3)
			{
				Global_19486.f_1 = 4;
			}
			else
			{
				while (Global_19486.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_19486.f_1 == 6)
				{
				}
				Global_19486.f_1 = 9;
				func_8();
			}
			if (UNK_0x8CD06866876216F2())
			{
				iLocal_101 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				iLocal_99 = UNK_0x1C0640BA9A7327B3();
			}
			while (Global_19486.f_1 != 9 && Global_19469 == 0)
			{
				SYSTEM::WAIT(0);
				if (UNK_0x8CD06866876216F2())
				{
					iLocal_108 = UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_101);
				}
				else
				{
					iLocal_100 = UNK_0x1C0640BA9A7327B3();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_21821 = 1;
						Global_19469 = 1;
						UNK_0x0674E58A79778E99(&Global_7357, 21);
					}
				}
			}
			if (Global_19469 == 0)
			{
				Global_20805 = 2;
			}
			else
			{
				func_104();
				Global_19470 = 1;
			}
			if (UNK_0x8CD06866876216F2())
			{
				iLocal_95 = UNK_0x2B6E0A53779D29EA();
				iLocal_98 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				iLocal_93 = UNK_0x1C0640BA9A7327B3();
				iLocal_96 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
}

void func_104()
{
	Global_19671 = 0;
	func_109();
}

void func_105()
{
	float fVar0;

	fVar0 = func_106(Global_19439[Global_19431 /*3*/], Global_19432[Global_19431 /*3*/], Global_19446, Global_19417, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_21819 == 0)
		{
			UNK_0xBFE31971E49FA500(1);
		}
		iLocal_32 = 0;
	}
}

float func_106(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13)
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
	if (func_48() && Global_4270044 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = UNK_0x1C0640BA9A7327B3();
	}
	fVar3 = func_108((SYSTEM::TO_FLOAT((UNK_0x1C0640BA9A7327B3() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_19414 = { func_107(vParam0, vParam3, fVar4) };
		Global_19417 = { func_107(vParam6, vParam9, fVar4) };
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

Vector3 func_107(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_108(float fParam0, float fParam1, float fParam2)
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

void func_109()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((UNK_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

bool func_110()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

int func_111(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_112(sParam2, iParam3, 0);
}

int func_112(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					UNK_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_109();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_37();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam2)
			{
				func_30();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_53();
		func_113();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_109();
	}
	return 0;
}

void func_113()
{
	if (!func_114())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

bool func_114()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_117())
	{
		return false;
	}
	if (func_115(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	return true;
}

bool func_115(int iParam0)
{
	return func_116(iParam0, 20);
}

bool func_116(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_117()
{
	return -1;
}

bool func_118()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_119(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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

