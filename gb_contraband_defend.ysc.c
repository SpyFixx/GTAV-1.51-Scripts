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
	bool bLocal_18 = false;
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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = -1;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<270> Local_116 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_386[32];
	bool bLocal_739 = false;
	bool bLocal_740 = false;
	bool bLocal_741 = false;
	bool bLocal_742 = false;
	bool bLocal_743 = false;
	bool bLocal_744 = false;
	bool bLocal_745 = false;
	bool bLocal_746 = false;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	struct<8> Local_758[10];
	var uLocal_839[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	bool bLocal_853 = false;
	var uLocal_854 = 0;
	int iLocal_855 = 0;
	bool bLocal_856 = false;
	var uLocal_857 = 16;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	bool bLocal_1023 = false;
	bool bLocal_1024 = false;
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
	bLocal_18 = "NULL";
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_742 = -2;
	bLocal_743 = -1;
	bLocal_856 = "";
	if (UNK_0x8CD06866876216F2() && func_1292(UNK_0xD803B885F5E47A62(), 0, 1))
	{
		func_1244(ScriptParam_0);
	}
	else
	{
		func_1189();
	}
	while (true)
	{
		func_1188();
		if (func_1180())
		{
			func_1189();
		}
		Global_1674356.f_2 = Local_116.f_267;
		Global_1674356.f_3 = Local_116.f_268;
		switch (func_1179(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (UNK_0xAE317D00A5A55DF6("ALARM_BELL_02", 0, -1))
				{
					if (func_1178() == 1)
					{
						if (func_1177())
						{
							func_1176();
							if (func_1175())
							{
								func_1158(169, 1, func_1173(), 0);
								func_1157();
								func_1155();
							}
							else
							{
								func_1158(169, 0, func_1173(), 0);
							}
							Local_386[UNK_0x57270EE11514DC67() /*11*/] = 1;
						}
					}
					else if (func_1178() == 4)
					{
						Local_386[UNK_0x57270EE11514DC67() /*11*/] = 3;
					}
				}
				break;
			case 1:
				if (func_1152(1))
				{
					Local_386[UNK_0x57270EE11514DC67() /*11*/] = 2;
				}
				if (func_1178() == 1)
				{
					func_1143();
					func_1059();
					func_448();
					func_432();
					if (!func_431())
					{
						if (func_1175() || func_429())
						{
							func_277(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
						}
					}
					else
					{
						func_272();
					}
					func_215();
					func_214();
				}
				else if (func_1178() == 4)
				{
					Local_386[UNK_0x57270EE11514DC67() /*11*/] = 3;
				}
				func_208();
				break;
			case 3:
				func_207(&(Local_116.f_224));
				if (func_206(&(Local_116.f_224)))
				{
					Local_386[UNK_0x57270EE11514DC67() /*11*/] = 4;
				}
				break;
			case 2:
				Local_386[UNK_0x57270EE11514DC67() /*11*/] = 4;
			case 4:
				func_1189();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_1178())
			{
				case 0:
					if (func_1173() > -1)
					{
						func_204();
						func_202();
						func_201();
						func_198();
						if (func_43())
						{
							UNK_0xCB466C2A425A9168(&(Local_116.f_267), &(Local_116.f_268));
							func_37();
							Local_116 = 1;
							Local_116.f_218 = UNK_0x57270EE11514DC67();
							Local_116.f_219 = UNK_0xD803B885F5E47A62();
							func_1158(169, 1, func_1173(), 0);
						}
					}
					break;
				case 1:
					func_29();
					func_198();
					func_22();
					func_4();
					if (func_2())
					{
						Local_116 = 4;
					}
					else if (func_1())
					{
						Local_116 = 4;
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
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return true;
	}
	return false;
}

bool func_2()
{
	if (func_3())
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 2))
	{
		return true;
	}
	return false;
}

bool func_3()
{
	return false;
}

void func_4()
{
	switch (Local_116.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_431())
			{
				func_15();
				func_5();
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, true))
			{
				Local_116.f_214 = 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 3))
			{
				Local_116.f_214 = 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4))
			{
				Local_116.f_214 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;

	if (Local_116.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!func_11(&(Local_116.f_228)))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 6))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 11))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 7))
				{
					func_10(&(Local_116.f_228), 0, 0);
				}
			}
		}
	}
	if (func_11(&(Local_116.f_228)))
	{
		if (Local_116.f_222 > 0)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 7))
			{
				func_9(&(Local_116.f_228));
				Local_116.f_222 = 255;
			}
			else
			{
				iVar0 = func_8();
				iVar1 = func_7();
				if (func_6(&(Local_116.f_228), iVar0, 0))
				{
					func_9(&(Local_116.f_228));
					Local_116.f_222 = (Local_116.f_222 - iVar1);
					if (Local_116.f_222 < 0)
					{
						Local_116.f_222 = 0;
					}
				}
			}
		}
		if (Local_116.f_222 <= 0)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 9))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 9);
			}
		}
	}
}

bool func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_10(uParam0, bParam2, 0);
	if (UNK_0x8CD06866876216F2() && !bParam2)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

int func_7()
{
	return 10;
}

int func_8()
{
	return 2000;
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
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

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

bool func_12()
{
	bool bVar0;

	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_116.f_2[0 /*10*/].f_2))
		{
			bVar0 = UNK_0xA30B8362589C124A(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), -1, 0);
			if (bVar0 != 0)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bVar0))
				{
					if (!UNK_0x34BFC6F0CB887BC2(bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_13(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_14(UNK_0xB177666FAB6F4417(iParam0));
	}
	return false;
}

bool func_14(bool bParam0)
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

void func_15()
{
	if (!func_431())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 6))
	{
		if (!func_11(&(Local_116.f_234)))
		{
			func_10(&(Local_116.f_234), 0, 0);
		}
		if (func_6(&(Local_116.f_234), func_16(), 0))
		{
			UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 6);
		}
	}
}

int func_16()
{
	return 60000;
}

void func_17()
{
	if (!func_431())
	{
		return;
	}
	if (!func_11(&(Local_116.f_238)))
	{
		func_10(&(Local_116.f_238), 0, 0);
	}
	else if (func_6(&(Local_116.f_238), func_18(), 0))
	{
		UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 15);
	}
}

int func_18()
{
	return 1800000;
}

void func_19()
{
	if (func_431())
	{
		return;
	}
	if (!func_11(&(Local_116.f_236)))
	{
		func_10(&(Local_116.f_236), 0, 0);
		return;
	}
	else if (!func_6(&(Local_116.f_236), func_21(), 0))
	{
		return;
	}
	if (!func_11(&(Local_116.f_226)))
	{
		func_10(&(Local_116.f_226), 0, 0);
	}
	else if (func_6(&(Local_116.f_226), func_20(), 0))
	{
		UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 3);
	}
}

int func_20()
{
	return Global_262145.f_16139;
}

int func_21()
{
	return Local_116.f_223;
}

void func_22()
{
	bool bVar0;
	bool bVar1;

	if (func_28())
	{
		return;
	}
	if (UNK_0xBFF81ED3B99522C7())
	{
		bVar1 = false;
		while (bVar1 < 10)
		{
			switch (Local_116.f_2[bVar1 /*10*/].f_9)
			{
				case 0:
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar1 /*10*/].f_1))
					{
						if (func_431())
						{
							Local_116.f_2[bVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_116.f_2[bVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				case 8:
					if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 6))
					{
						Local_116.f_2[bVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(bVar0, bVar1);
					}
					break;
				case 1:
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar1 /*10*/].f_1))
					{
						if (func_431())
						{
							func_25(bVar0, bVar1);
						}
					}
					break;
				case 2:
					break;
				case 3:
					if (func_431())
					{
						if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar1 /*10*/].f_1))
						{
							if (!func_24(Local_116.f_2[bVar1 /*10*/].f_1))
							{
								if (!UNK_0x0E0E6175453415CB(UNK_0x1B50683925F00106(Local_116.f_2[bVar1 /*10*/].f_1)))
								{
									Local_116.f_2[bVar1 /*10*/].f_9 = 7;
								}
							}
						}
					}
					break;
				case 5:
					break;
				case 4:
					break;
				case 6:
					break;
				case 7:
					func_23(bVar1);
					break;
			}
			bVar1++;
		}
	}
}

void func_23(bool bParam0)
{
	if (func_431())
	{
		if (bParam0 == 1)
		{
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bParam0 /*10*/].f_1))
			{
				if (!func_24(Local_116.f_2[bParam0 /*10*/].f_1))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1)))
					{
						if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_1))
						{
							if (func_24(Local_116.f_2[0 /*10*/].f_1))
							{
								Local_116.f_2[bParam0 /*10*/].f_9 = 3;
							}
						}
					}
				}
			}
		}
	}
}

bool func_24(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		return UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(iParam0));
	}
	return true;
}

void func_25(bool bParam0, bool bParam1)
{
	if (!func_24(Local_116.f_2[bParam1 /*10*/].f_1))
	{
		if (UNK_0x0E0E6175453415CB(UNK_0x1B50683925F00106(Local_116.f_2[bParam1 /*10*/].f_1)))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_205, bParam1))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_204), bParam1);
				bParam0 = UNK_0x1B50683925F00106(Local_116.f_2[bParam1 /*10*/].f_1);
				if (func_27(&bParam0))
				{
					Local_116.f_2[bParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_116.f_2[bParam1 /*10*/].f_9 = 7;
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_206, bParam1))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_204), bParam1);
				bParam0 = UNK_0x1B50683925F00106(Local_116.f_2[bParam1 /*10*/].f_1);
				if (func_27(&bParam0))
				{
					Local_116.f_2[bParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_116.f_2[bParam1 /*10*/].f_9 = 7;
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_207, bParam1))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_204), bParam1);
				bParam0 = UNK_0x1B50683925F00106(Local_116.f_2[bParam1 /*10*/].f_1);
				if (func_27(&bParam0))
				{
					Local_116.f_2[bParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_116.f_2[bParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_204), bParam1);
				bParam0 = UNK_0x1B50683925F00106(Local_116.f_2[bParam1 /*10*/].f_1);
				if (func_27(&bParam0))
				{
					Local_116.f_2[bParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_116.f_2[bParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(bParam1);
			}
		}
		else if (Local_116.f_2[bParam1 /*10*/].f_9 != 7)
		{
			Local_116.f_2[bParam1 /*10*/].f_9 = 7;
		}
	}
}

bool func_26()
{
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_1))
	{
		if (func_24(Local_116.f_2[0 /*10*/].f_1))
		{
			return true;
		}
	}
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[1 /*10*/].f_1))
	{
		if (func_24(Local_116.f_2[1 /*10*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_27(bool bParam0)
{
	if (UNK_0x405E212DDE472467(*bParam0, 0))
	{
		if (UNK_0xA30B8362589C124A(UNK_0x3C66DF04E6EA3587(*bParam0), -1, 0) == *bParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_28()
{
	return ((((((UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, true) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 3)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 5)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 8)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 9)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 15));
}

void func_29()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = 0;
	bVar1 = false;
	bVar2 = -1;
	bVar3 = false;
	bVar4 = true;
	if (Local_116 != 4)
	{
		bLocal_741 = false;
		while (bLocal_741 < UNK_0x54EABC0DD106045B())
		{
			if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bLocal_741)))
			{
				bVar5 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bLocal_741));
				if (!func_34(bVar5, 0))
				{
					if (func_1292(bVar5, 1, 1))
					{
					}
					func_33(bLocal_741);
					func_32(bLocal_741);
					if (func_431())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 8))
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 9))
							{
								UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 8);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 6))
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 7))
							{
								UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 6);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 11))
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 10))
							{
								UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 11);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_217, bLocal_741))
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 8))
							{
								UNK_0x5D96D8530B3D0904(&(Local_116.f_217), bLocal_741);
							}
						}
						else if (!UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 8))
						{
							UNK_0x0674E58A79778E99(&(Local_116.f_217), bLocal_741);
						}
						if (bVar2 == -1)
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 3))
							{
								bVar2 = bLocal_741;
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4))
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 2))
							{
								UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 4);
								Local_116.f_221 = Local_116.f_216;
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 17))
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 15))
							{
								UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 14))
								{
									bVar4 = false;
								}
							}
							else
							{
								bVar4 = false;
							}
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 13))
					{
						if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 11))
						{
							UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 13);
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 4))
								{
									bVar3 = true;
								}
							}
							else
							{
								bVar3 = true;
							}
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 16))
					{
						if (UNK_0xEAE0D21A50E6C7F4(Local_386[bLocal_741 /*11*/].f_1, 13))
						{
							UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 16);
						}
					}
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 5))
			{
				if (Local_116.f_218 > -1)
				{
					if (bLocal_741 == Local_116.f_218)
					{
						UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 5);
					}
				}
			}
			bLocal_741++;
		}
		func_31();
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_209, bVar1))
			{
				iVar0++;
			}
			bVar1++;
		}
		if (Local_116.f_213 != iVar0)
		{
			Local_116.f_213 = iVar0;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, true))
		{
			if (iVar0 >= func_30())
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_1), true);
			}
		}
		if (func_431())
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 7))
			{
				if (Local_116.f_217 != 0)
				{
					UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 7);
				}
			}
			else if (Local_116.f_217 == 0)
			{
				UNK_0x0674E58A79778E99(&(Local_116.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_116.f_215 != bVar2)
				{
					Local_116.f_215 = bVar2;
					if (Local_116.f_215 > -1)
					{
						iVar6 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(Local_116.f_215));
						Local_116.f_216 = iVar6;
					}
					else
					{
						Local_116.f_216 = -1;
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 18))
			{
				if (bVar4)
				{
					UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 18);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 2))
		{
			if (!bVar3)
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 2);
			}
		}
	}
}

int func_30()
{
	switch (Local_116.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 6;
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 20:
			return 8;
		case 7:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 21:
			return 10;
		default:
			break;
	}
	return 8;
}

void func_31()
{
	bool bVar0;

	if (func_431())
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar0 /*10*/].f_1))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_209, bVar0))
			{
				if (!func_11(&(Local_116.f_240[bVar0 /*2*/])))
				{
					if (func_24(Local_116.f_2[bVar0 /*10*/].f_1))
					{
						func_10(&(Local_116.f_240[bVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_116.f_240[bVar0 /*2*/]), 10000, 0))
				{
					UNK_0x5D96D8530B3D0904(&(Local_116.f_209), bVar0);
				}
			}
		}
		bVar0++;
	}
}

void func_32(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 10)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_205, bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_386[bParam0 /*11*/].f_5, bVar0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_205), bVar0);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_206, bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_386[bParam0 /*11*/].f_2, bVar0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_206), bVar0);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_208, bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_386[bParam0 /*11*/].f_3, bVar0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_208), bVar0);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_207, bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_386[bParam0 /*11*/].f_4, bVar0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_207), bVar0);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_209, bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_386[bParam0 /*11*/].f_6, bVar0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_209), bVar0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_386[bParam0 /*11*/].f_7, bVar0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_209), bVar0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_386[bParam0 /*11*/].f_8, bVar0))
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_209), bVar0);
			}
		}
		bVar0++;
	}
}

void func_33(bool bParam0)
{
	int iVar0;

	if (func_431())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_210, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[iVar0 /*10*/].f_2))
			{
				if (func_13(Local_116.f_2[iVar0 /*10*/].f_2))
				{
					UNK_0xF1259063ADD6A7AF(UNK_0xB177666FAB6F4417(Local_116.f_2[iVar0 /*10*/].f_2), UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bParam0)), 1);
					UNK_0x5D96D8530B3D0904(&(Local_116.f_210), bParam0);
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(Local_116.f_210), bParam0);
			}
			iVar0++;
		}
	}
}

bool func_34(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1312745;
}

void func_37()
{
	vector3 vVar0;

	vVar0 = { func_40() };
	if (!func_39(vVar0))
	{
		func_38(&(Local_116.f_269), vVar0, 1, 1103626240 /* Float: 25f */);
	}
}

void func_38(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	if (!UNK_0xE747DBC9E7A85AD6(*uParam0))
	{
		*uParam0 = UNK_0xA35B38143859ECFA(vParam1 - Vector(fParam5, fParam5, fParam5), vParam1 + Vector(fParam5, fParam5, fParam5), 1f, 0.25f, iParam4, 1);
	}
}

bool func_39(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_40()
{
	return func_41(Local_116.f_197 + 1);
}

Vector3 func_41(int iParam0)
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return vVar0;
	}
	switch (iParam0)
	{
		case 1:
			vVar0 = { 58.3f, -2560.8f, 5.0046f };
			break;
		case 2:
			vVar0 = { -1082.958f, -1254.855f, 4.4214f };
			break;
		case 3:
			vVar0 = { 900.0288f, -1029.762f, 33.9714f };
			break;
		case 4:
			vVar0 = { 247.7398f, -1950.657f, 22.0817f };
			break;
		case 5:
			vVar0 = { -404.5349f, 189.8157f, 80.518f };
			break;
		case 6:
			vVar0 = { -1048.123f, -2017.136f, 12.1616f };
			break;
		case 7:
			vVar0 = { -1267.888f, -818.313f, 16.0992f };
			break;
		case 8:
			vVar0 = { -879.1935f, -2731.856f, 12.8285f };
			break;
		case 9:
			vVar0 = { 274.4458f, -3004f, 4.6994f };
			break;
		case 10:
			vVar0 = { 1566.514f, -2137.776f, 76.6229f };
			break;
		case 11:
			vVar0 = { -314.3864f, -2721.792f, 5.0003f };
			break;
		case 12:
			vVar0 = { 497.1263f, -635.2617f, 23.8849f };
			break;
		case 13:
			vVar0 = { -546.1532f, -1775.258f, 20.6843f };
			break;
		case 14:
			vVar0 = { -307.6485f, -1364.914f, 30.2957f };
			break;
		case 15:
			vVar0 = { 366.4851f, 333.3937f, 102.4653f };
			break;
		case 16:
			vVar0 = { 921.407f, -1556.423f, 29.7756f };
			break;
		case 17:
			vVar0 = { 746.1452f, -882.8884f, 24.0639f };
			break;
		case 18:
			vVar0 = { 1042.462f, -2177.798f, 30.4457f };
			break;
		case 19:
			vVar0 = { 1013.842f, -2514.939f, 27.3049f };
			break;
		case 20:
			vVar0 = { -272.0028f, 193.3204f, 84.5697f };
			break;
		case 21:
			vVar0 = { 549.6728f, -1929.794f, 23.8145f };
			break;
		case 22:
			vVar0 = { 126.5327f, -2200.172f, 5.0333f };
			break;
	}
	return vVar0;
}

bool func_42(bool bParam0)
{
	if (bParam0 < 1 || bParam0 > 22)
	{
		return false;
	}
	return true;
}

bool func_43()
{
	bool bVar0;

	if (func_431())
	{
		func_66();
		if (!func_65())
		{
			return false;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < func_30())
		{
			func_44(bVar0);
			bVar0++;
		}
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < func_30())
		{
			if (!UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar0 /*10*/].f_1))
			{
				return false;
			}
			bVar0++;
		}
	}
	return true;
}

int func_44(bool bParam0)
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	float fVar5;
	bool bVar6;
	float fVar7;

	bVar0 = func_64();
	fVar5 = func_63();
	if (!UNK_0xE5DBF9B6126856CA(Local_116.f_2[bParam0 /*10*/].f_1))
	{
		if (UNK_0xA3FA8B6D2780D661(1))
		{
			if (func_62(bVar0))
			{
				if (func_61(Local_116.f_2[bParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(bParam0, &vVar1, &uVar4))
					{
						Local_116.f_2[bParam0 /*10*/].f_5 = { vVar1 };
						Local_116.f_2[bParam0 /*10*/].f_8 = uVar4;
					}
				}
				else if (func_46(&(Local_116.f_2[bParam0 /*10*/].f_1), 22, bVar0, Local_116.f_2[bParam0 /*10*/].f_5, Local_116.f_2[bParam0 /*10*/].f_8, 1, 1, 1))
				{
					UNK_0x7980D72D61BEF4D5(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), true);
					UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), true);
					UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), Global_1575003);
					UNK_0x1365063FA6365BE8(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), true);
					if ((bParam0 % 2) == 0)
					{
						bVar6 = UNK_0x7F6DC62EA9922664(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1));
						fVar7 = SYSTEM::TO_FLOAT(bVar6);
						if (fVar5 != 0f)
						{
							fVar7 = (fVar7 * fVar5);
						}
						bVar6 = SYSTEM::ROUND(fVar7);
						UNK_0x722454E43E496678(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), bVar6);
						UNK_0xD458AC1C1D29C3B4(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), bVar6, false);
						UNK_0x0B42C743EF171FF5(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 100);
						UNK_0x262EF6C6306BEA6C(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), joaat("WEAPON_ASSAULTRIFLE"), 9999999, false, true);
					}
					else
					{
						UNK_0x262EF6C6306BEA6C(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), joaat("WEAPON_ASSAULTRIFLE"), 9999999, false, true);
					}
					UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 281, true);
					UNK_0x3CC33E4E9CE523F4(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 1);
					UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 42, true);
					UNK_0xB8AFFA077E15E999(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 1);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 43, true);
					UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 44, true);
					UNK_0x26A6B1686E33113F(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 1);
					if (func_45(bParam0))
					{
						UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 0, false);
					}
					UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), 146, true);
					UNK_0xED253B8DDB3FFB77(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), Local_116.f_2[bParam0 /*10*/].f_5, 7f, 0, 0);
					UNK_0xFADC0A217229F6B5(UNK_0x1B50683925F00106(Local_116.f_2[bParam0 /*10*/].f_1), true);
					UNK_0x5D96D8530B3D0904(&(Local_116.f_203), bParam0);
				}
			}
		}
	}
	return 0;
}

bool func_45(bool bParam0)
{
	switch (Local_116.f_197)
	{
		case 1:
			if (bParam0 == 0 || bParam0 == 1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_46(var uParam0, int iParam1, bool bParam2, vector3 vParam3, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	bool bVar0;

	if (!UNK_0xA3FA8B6D2780D661(1))
	{
		return false;
	}
	bVar0 = UNK_0x36F2404464202779(iParam1, bParam2, vParam3, bParam6, iParam8, bParam7);
	*uParam0 = UNK_0xE8C9CB886096272A(bVar0);
	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		UNK_0x120A395B0ECB8EA5(bVar0, bParam9);
		if (UNK_0xECE0BE5313FD8BDA(bVar0))
		{
			if (bParam7)
			{
				UNK_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_47(bool bParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam0;
	if (!func_61(Local_116.f_103[bVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_116.f_103[bVar0 /*5*/].f_4)
		{
			if (func_48(Local_116.f_103[bVar0 /*5*/], 1f, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 0, 0, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_116.f_103[bVar0 /*5*/] };
				*uParam2 = Local_116.f_103[bVar0 /*5*/].f_3;
				Local_116.f_103[bVar0 /*5*/].f_4 = 1;
				return true;
			}
			else
			{
				if (UNK_0x558ADED8B93EA0F6(Local_116.f_103[bVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (UNK_0xEA19D5D9230DBB67(Local_116.f_103[bVar0 /*5*/], Local_116.f_103[bVar0 /*5*/].f_1, (Local_116.f_103[bVar0 /*5*/].f_2 + 1f), 1f) || UNK_0xEA19D5D9230DBB67(Local_116.f_103[bVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_212, bVar0))
					{
						UNK_0x536F1BE96C726C4B(Local_116.f_103[bVar0 /*5*/], 5f, 1, 0, 0, true);
						UNK_0x5D96D8530B3D0904(&(Local_116.f_212), bVar0);
					}
				}
			}
		}
	}
	return false;
}

bool func_48(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
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
		if (func_54(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_49(vParam0, fParam6, bParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

bool func_49(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_1292(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (!UNK_0x757EF87A33649210())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (UNK_0x0EB28750412C3A5A(func_51(UNK_0xD803B885F5E47A62()), vParam0, 1) <= (bVar2 + bParam3))
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
		if (func_1292(bVar1, 1, 1))
		{
			if (!func_34(bVar1, 0) && UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != UNK_0xD803B885F5E47A62()))
				{
					if ((func_50(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
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
								if (UNK_0x0EB28750412C3A5A(func_51(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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
							if (UNK_0x0EB28750412C3A5A(func_51(bVar1), vParam0, 1) <= (bVar2 + bParam3))
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

bool func_50(bool bParam0)
{
	if (UNK_0x62FA787159F264AC(UNK_0x9539D44F3E4492F6(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

Vector3 func_51(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_53() && Global_1590535[bVar0 /*876*/].f_847) && !func_39(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_52(bParam0);
}

Vector3 func_52(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_53()
{
	return Global_2450632.f_17;
}

bool func_54(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || bParam8 == 0)
		{
			if (func_1292(bVar1, bParam4, bParam5))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam7 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_50(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam9) && bParam6) && func_55(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								if (UNK_0x0EB28750412C3A5A(func_52(bVar1), vParam0, 1) < fParam3)
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

bool func_55(bool bParam0)
{
	if (func_60(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_59(bParam0) };
	if (UNK_0x04A104F429E6CBB0(&Global_2513218))
	{
		return true;
	}
	if (func_56(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_56(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_58(bParam0);
	if (!bVar0 == func_57())
	{
		if (bVar0 == func_58(bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_57()
{
	return -1;
}

bool func_58(bool bParam0)
{
	if (bParam0 != func_57())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_57();
}

struct<13> func_59(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_60(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_59(bParam0) };
		Global_2513231 = { func_59(bParam1) };
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

bool func_61(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_62(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

float func_63()
{
	return 2f;
}

int func_64()
{
	int iVar0;

	switch (Local_116.f_195)
	{
		case 0:
			iVar0 = joaat("G_M_M_ARMGOON_01");
			break;
		case 1:
			iVar0 = joaat("G_M_M_MEXBOSS_01");
			break;
		case 2:
			iVar0 = joaat("G_M_Y_KOREAN_02");
			break;
	}
	return iVar0;
}

bool func_65()
{
	if (!UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
	{
		return false;
	}
	if (!UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_1))
	{
		return false;
	}
	if (!UNK_0xE5DBF9B6126856CA(Local_116.f_2[1 /*10*/].f_1))
	{
		return false;
	}
	return true;
}

int func_66()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	struct<30> Var6;
	vector3 vVar36;

	bVar0 = func_197();
	bVar1 = func_64();
	if (!UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
	{
		if (UNK_0xE75B31D140F2F10B(1))
		{
			if (func_62(bVar0))
			{
				if (!func_61(Local_116.f_262, 0f, 0f, 0f, 0))
				{
					vVar2 = { Local_116.f_262 };
					uVar5 = Local_116.f_265;
					if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_211, false))
					{
						UNK_0x536F1BE96C726C4B(vVar2, 5f, 1, 0, 0, true);
						UNK_0x5D96D8530B3D0904(&(Local_116.f_211), false);
					}
					if (func_194(&(Local_116.f_2[0 /*10*/].f_2), bVar0, vVar2, uVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						UNK_0xC3BED1CE092AB15D(UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_2), 1);
						func_193(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2));
						UNK_0xA22F71BBC8173C39(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), false);
						UNK_0x9A8BCD43DBDDCDCA(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 0, 0);
						UNK_0x44A200C9B6E1CEA6(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), true);
						UNK_0x09C4C5C870748A1F(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 0);
						UNK_0xD5A0214B20BCBAD8(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 1);
						UNK_0x0F94CA38DF58080C(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 0.08f);
						UNK_0xD458AC1C1D29C3B4(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), Global_262145.f_15083, false);
						UNK_0x79E38224B223335B(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 1);
						UNK_0xA6B2C9FCA24AAC6F(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 1);
						UNK_0x443C9A6DC182DDD5(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 1);
						UNK_0x453A018B4CABC718(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 2, 2);
						UNK_0x453A018B4CABC718(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 3, 2);
					}
				}
				else
				{
					Var6.f_4 = 1125515264;
					Var6.f_5 = 1;
					Var6.f_6 = 1;
					Var6.f_8 = 1082130432;
					Var6.f_9 = 1176255488;
					Var6.f_10 = 1;
					Var6.f_13 = 1;
					Var6.f_15 = 2;
					Var6.f_22 = 2;
					Var6.f_25 = 1;
					Var6.f_26 = 1;
					Var6.f_29 = 1123024896;
					Var6 = 0f;
					Var6.f_1 = 0;
					Var6.f_4 = 200f;
					Var6.f_5 = 1;
					Var6.f_6 = 1;
					Var6.f_12 = 1;
					Var6.f_3 = 1;
					vVar36 = { func_191(Local_116.f_2[0 /*10*/].f_5, Local_116.f_2[0 /*10*/].f_8, 20f) };
					if (func_68(Local_116.f_2[0 /*10*/].f_5, vVar36, bVar0, 0, &(Local_116.f_262), &(Local_116.f_2[0 /*10*/].f_8), &Var6))
					{
						Local_116.f_265 = Local_116.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
	{
		if (!UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_1))
		{
			if (UNK_0xA3FA8B6D2780D661(1))
			{
				if (func_62(bVar1))
				{
					if (func_67(&(Local_116.f_2[0 /*10*/].f_1), Local_116.f_2[0 /*10*/].f_2, 22, bVar1, -1, 1, 1, 1))
					{
						UNK_0x7980D72D61BEF4D5(UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_1), true);
						UNK_0xE2F0767314863BD8(UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_1), 1, 0);
						UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_1), true);
						UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_1), Global_1575003);
						UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_1), 42, true);
						UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_1), 3, false);
						UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_1), 2, true);
					}
				}
			}
		}
	}
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_1))
	{
		if (!UNK_0xE5DBF9B6126856CA(Local_116.f_2[1 /*10*/].f_1))
		{
			if (UNK_0xA3FA8B6D2780D661(1))
			{
				if (func_62(bVar1))
				{
					if (func_67(&(Local_116.f_2[1 /*10*/].f_1), Local_116.f_2[0 /*10*/].f_2, 22, bVar1, 0, 1, 1, 1))
					{
						UNK_0x7980D72D61BEF4D5(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), true);
						UNK_0xE2F0767314863BD8(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), 1, 0);
						UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), true);
						UNK_0x6DF7BF67E86AAE86(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), Global_1575003);
						UNK_0x4E885A246A9D983A(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), 42, true);
						UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), 3, false);
						UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), 2, true);
						UNK_0xAFF39FB306F8E232(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), 5, true);
						UNK_0x262EF6C6306BEA6C(UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1), joaat("WEAPON_MICROSMG"), 9999999, false, true);
						Local_116.f_2[1 /*10*/].f_2 = Local_116.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

bool func_67(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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

bool func_68(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<58> Var5;
	struct<58> Var64;

	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!UNK_0x00A15D69BCAA5267() > 7 && !UNK_0x00A15D69BCAA5267() == 5)
		{
			return false;
		}
	}
	if (Global_2405072.f_514)
	{
		Global_2405072.f_514 = 0;
		return false;
	}
	if (!func_190(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!Global_2405072.f_600 == 0 && UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_605) < func_189(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_188();
			func_187();
		}
		return false;
	}
	if (!UNK_0x0D0A574C76D769AC() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_673) < func_189(0))
			{
				return false;
			}
			else
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	else
	{
		if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_671) > 30000)
		{
			Global_2405072.f_670 = 0;
		}
		if (!Global_2405072.f_670 == 0)
		{
			if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_673) > func_189(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_180(vParam0))
		{
			if (func_179(&vParam0, 1))
			{
			}
		}
	}
	if (!Global_2405072.f_670 == 0)
	{
		if (SYSTEM::VDIST(Global_2405072.f_688, vParam0) > 50f)
		{
			return false;
		}
	}
	UNK_0x10FEEAFF01E32639((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f));
	if (Global_2405072.f_670 == 0)
	{
		Global_2405072.f_675 = 0;
		Global_2405072.f_671 = UNK_0x6794171A1021C2D8();
		Global_2405072.f_669 = UNK_0x0D0A574C76D769AC();
		Global_2405072.f_673 = UNK_0x6794171A1021C2D8();
		Global_2405072.f_688 = { vParam0 };
		Global_2405072.f_674 = UNK_0x6794171A1021C2D8();
		Global_2405072.f_670 = 2;
		func_178();
		func_188();
		if (!uParam10->f_27 || (((((func_177(vParam0, 1, 1133903872 /* Float: 300f */) && !uParam10->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_158(vParam0, bParam6);
		}
		if (func_143(vParam0))
		{
			func_158(vParam0, bParam6);
		}
	}
	switch (Global_2405072.f_670)
	{
		case 2:
			if (UNK_0xD1B4D22E0BA9B0C8((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f)))
			{
				Global_2405072.f_676 = { vParam0 };
				Global_2405072.f_679 = 0f;
				if (Global_2537071.f_883)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					bVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					bVar4 = 1f;
				}
				if (((uParam10->f_3 && func_48(vParam0, fVar2, fVar3, bVar4, 1f, 0, 0, 0, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_141(vParam0, *uParam9, bParam6, UNK_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_676 = { vParam0 };
					Global_2405072.f_679 = *uParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("TAILGATER");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { vParam3 };
					Var5.f_12 = 1;
					Var5.f_34 = bParam6;
					Var5.f_31 = uParam10->f_13;
					Var5.f_30 = 1;
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_89(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_86(Global_2405072.f_676, Global_2405072.f_679, bParam6, &(Global_2405072.f_667));
				Global_2405072.f_665 = 0;
				Global_2405072.f_666 = 0;
				Global_2405072.f_675++;
				Global_2405072.f_672 = UNK_0x6794171A1021C2D8();
				Global_2405072.f_671 = UNK_0x6794171A1021C2D8();
				Global_2405072.f_670 = 3;
			}
			break;
		case 3:
			if (Global_2405072.f_665)
			{
				if (Global_2405072.f_667 == Global_2405072.f_668)
				{
					if (Global_2405072.f_666)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_85(Global_2405072.f_676, Global_2405072.f_679, bParam6, 1, 1036831949 /* Float: 0.1f */))
							{
								Global_2405072.f_670 = 4;
								Global_2405072.f_692 = UNK_0x6794171A1021C2D8();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_83(Global_2405072.f_676, 0);
						func_82(-1);
					}
				}
				else
				{
					Global_2405072.f_665 = 0;
					Global_2405072.f_666 = 0;
				}
			}
			else if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_672) > 3000)
			{
				func_82(-1);
			}
			break;
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_692) < 10000)
				{
					if (UNK_0x23002DD5E7B94FD7(Global_2405072.f_691))
					{
						if (UNK_0x9E6C7E283363593B(Global_2405072.f_691))
						{
							if (!UNK_0x6FE31D882B028E10(Global_2405072.f_691))
							{
								if (func_81(Global_2405072.f_676, Global_2405072.f_679, bParam6, UNK_0xD803B885F5E47A62(), 0) || func_70(Global_2405072.f_676, Global_2405072.f_679, bParam6, 1, 0, 0, 0, 1, 0))
								{
									func_83(Global_2405072.f_676, 0);
									func_82(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_83(Global_2405072.f_676, 0);
								func_82(-1);
							}
						}
					}
					else
					{
						func_82(-1);
					}
				}
				else
				{
					func_82(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2405072.f_676 = { vParam0 };
			Global_2405072.f_679 = 0f;
			Var64.f_6 = 1082130432;
			Var64.f_7 = 1176255488;
			Var64.f_8 = 1;
			Var64.f_10 = 1;
			Var64.f_13 = 1;
			Var64.f_15 = 1;
			Var64.f_16 = 1;
			Var64.f_31 = 1;
			Var64.f_34 = joaat("TAILGATER");
			Var64.f_38 = 2;
			Var64.f_45 = 2;
			Var64.f_49 = 1123024896;
			Var64.f_53 = 999;
			Var64.f_54 = 1176256410;
			Var64.f_55 = 1;
			Var64.f_56 = 1;
			Var64.f_57 = 1;
			Var64.f_9 = iParam7;
			Var64.f_3 = 3.5f;
			Var64.f_10 = uParam10->f_5;
			Var64.f_4 = *uParam10;
			Var64.f_12 = 1;
			Var64.f_13 = 0;
			Var64.f_15 = uParam10->f_6;
			Var64.f_11 = uParam10->f_7;
			Var64.f_6 = uParam10->f_8;
			Var64.f_7 = uParam10->f_9;
			Var64 = { vParam3 };
			Var64.f_34 = bParam6;
			Var64.f_31 = uParam10->f_13;
			Var64.f_30 = 1;
			Var64.f_48 = uParam10->f_14;
			Var64.f_56 = uParam10->f_25;
			Var64.f_57 = uParam10->f_26;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var64.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var64.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var64.f_49 = uParam10->f_29;
			func_89(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var64);
			Global_2405072.f_670 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405072.f_688 = { vParam0 };
	Global_2405072.f_673 = UNK_0x6794171A1021C2D8();
	if (bVar0)
	{
		Global_2405072.f_513 = 0;
		*uParam8 = { Global_2405072.f_676 };
		*uParam9 = Global_2405072.f_679;
		func_69(1);
		return true;
	}
	return false;
}

void func_69(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_178();
	func_188();
	if (bParam0)
	{
		func_187();
	}
}

bool func_70(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam9 == 1 && UNK_0xD803B885F5E47A62() != bVar1) || iParam9 == 0)
		{
			if (func_1292(bVar1, bParam5, bParam6))
			{
				if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bVar1))
				{
					if (!bParam8 || (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar1)) && func_50(bVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) != UNK_0x08067D4957B73C02(bVar1))) || UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
						{
							if (((UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1 && bParam10) && bParam7) && func_55(bVar1))
							{
							}
							else if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
							{
								fVar2 = 0.1f;
								if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bVar1), 0))
								{
									bVar3 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bVar1), 0);
									if (UNK_0xC844350D5D58C99A(bVar3) && !UNK_0x437347B10A200C4B(bVar3, 0))
									{
										iVar4 = UNK_0x134B62B726CEC8E6(bVar3);
										vVar5 = { UNK_0x68F4C0EC296D3901(bVar3, false) };
										bVar8 = UNK_0xD9522BA9E27E1349(bVar3);
										if (func_80(vParam0, iParam3, bParam4, vVar5, bVar8, iVar4, 0))
										{
											return true;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_71(func_52(bVar1), vParam0, iParam3, bParam4, fVar2))
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

bool func_71(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;

	if (SYSTEM::VDIST(vParam0, vParam3) < func_79(bParam7, 1008981770 /* Float: 0.01f */))
	{
		func_72(vParam3, bParam6, bParam7, &vVar0, &vVar3, &bVar6, iParam8);
		if (UNK_0x0399732A9EBC368E(vParam0, vVar0, vVar3, bVar6, 0, true))
		{
			return true;
		}
	}
	return false;
}

void func_72(vector3 vParam0, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	vVar0 = { 0f, 1f, 0f };
	func_78(&vVar0, 0f, 0f, bParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_73(bParam4, &vVar3, &vVar6, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.f_2 = (vVar9.z - ((0.5f * UNK_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.f_2 = (vVar12.z + ((0.5f * UNK_0x755FF954DAE327E1((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*iParam6 = { vVar12 };
	*bParam7 = UNK_0x755FF954DAE327E1((vVar6.x - vVar3.x));
}

void func_73(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	if (UNK_0x468C1AC3ABF95C57(bParam0))
	{
		UNK_0xA6B02C1DB14DDA13(bParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_76(bParam0);
		if (iVar0 != 0)
		{
			func_74(iVar0, fParam1, fParam2, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
			return;
		}
	}
	if (SYSTEM::VMAG(*fParam1) <= 0.01f || SYSTEM::VMAG(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_74(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	func_75(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (UNK_0x468C1AC3ABF95C57(Global_1315812[iVar0]))
		{
			UNK_0xA6B02C1DB14DDA13(Global_1315812[iVar0], &(Global_1315816[iVar0 /*3*/]), &(Global_1315823[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315816[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0 /*3*/] - Global_1315816[iVar0 /*3*/]);
		Global_1315833[iVar0] = (Global_1315823[iVar0 /*3*/].f_1 - Global_1315816[iVar0 /*3*/].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0 /*3*/].f_2 - Global_1315816[iVar0 /*3*/].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*fParam1 = { Global_1315841 };
	*fParam2 = { Global_1315844 };
}

void func_75(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_76(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_77(iVar1) == bParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_77(int iParam0)
{
	int iVar0;

	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_78(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_79(bool bParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (bParam0 == 0)
	{
		return 5f;
	}
	func_73(bParam0, &vVar0, &vVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

bool func_80(vector3 vParam0, bool bParam3, bool bParam4, vector3 vParam5, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;

	if (func_71(vParam0, vParam5, bParam8, bParam9, 1036831949 /* Float: 0.1f */))
	{
		return true;
	}
	func_73(bParam4, &vVar14, &vVar17, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar20 = { 0f, vVar17.y, 0f };
	func_78(&vVar20, 0f, 0f, bParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_78(&vVar23, 0f, 0f, bParam3);
	vVar26 = { (UNK_0x755FF954DAE327E1((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_78(&vVar26, 0f, 0f, bParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * UNK_0x755FF954DAE327E1((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_71(vVar1[iVar0 /*3*/], vParam5, bParam8, bParam9, 1036831949 /* Float: 0.1f */))
		{
			return true;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_80(vParam5, bParam8, bParam9, vParam0, bParam3, bParam4, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_81(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar1 = bVar0;
			if (func_1292(bVar1, 0, 1) && func_1292(bParam5, 0, 1))
			{
				if (Global_2417897.f_261[bVar0])
				{
					if (func_71(Global_2417897.f_131[bVar0 /*3*/], vParam0, bParam3, bParam4, 1036831949 /* Float: 0.1f */))
					{
						return true;
					}
				}
				else if (func_71(func_52(bVar1), vParam0, bParam3, bParam4, 1036831949 /* Float: 0.1f */))
				{
					return true;
				}
			}
			else if (Global_2417897.f_261[bVar0])
			{
				if (func_71(Global_2417897.f_131[bVar0 /*3*/], vParam0, bParam3, bParam4, 1036831949 /* Float: 0.1f */))
				{
					return true;
				}
			}
			else if (func_1292(bVar1, 0, 0))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bVar1)))
				{
					if (func_71(func_52(bVar1), vParam0, bParam3, bParam4, 1036831949 /* Float: 0.1f */))
					{
						return true;
					}
				}
			}
		}
		bVar0++;
	}
	return false;
}

void func_82(int iParam0)
{
	if (Global_2405072.f_675 < 20 && UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Global_2405072.f_674) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405072.f_675 < iParam0))
		{
			Global_2405072.f_670 = 2;
		}
		else
		{
			Global_2405072.f_670 = 5;
		}
	}
	else
	{
		Global_2405072.f_670 = 5;
	}
}

void func_83(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (iParam3 == 0 && func_84(vParam0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(vParam0) > 0f)
	{
		vVar0 = { Global_2405072.f_2728[iParam3 /*3*/] };
		Global_2405072.f_2728[iParam3 /*3*/] = { vParam0 };
		func_83(vVar0, iParam3 + 1);
	}
}

bool func_84(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405072.f_2728[iVar0 /*3*/]) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_85(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	int iVar7;
	float fVar8;

	if (!UNK_0xBFF81ED3B99522C7())
	{
		return false;
	}
	else
	{
		func_188();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405072.f_680[iVar7] == -1 && UNK_0xBFF81ED3B99522C7())
			{
				func_72(vParam0, iParam3, bParam4, &vVar0, &vVar3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = UNK_0x755FF954DAE327E1((vVar0.z - vVar3.z));
					vVar0.f_2 = (vVar0.z + ((fVar8 * 0.5f) - 2f));
					vVar3.f_2 = (vVar3.z + (fVar8 * 0.5f));
				}
				Global_2405072.f_680[iVar7] = UNK_0x3CED806443E1AA85(vVar0, vVar3, fParam6);
				Global_2405072.f_684[iVar7] = UNK_0x0D0A574C76D769AC();
				Global_2405072.f_691 = Global_2405072.f_680[iVar7];
				return true;
			}
			iVar7++;
		}
	}
	return false;
}

void func_86(vector3 vParam0, var uParam3, bool bParam4, var uParam5)
{
	struct<8> Var0;

	*uParam5 = func_88(&vParam0, &uParam3, &bParam4);
	Var0 = -1768581418;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = bParam4;
	Var0.f_7 = *uParam5;
	UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_87(1, 1));
}

var func_87(bool bParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar1);
		if (func_1292(bVar2, 0, 0))
		{
			if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
			{
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
				else if (!func_34(bVar2, 0))
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_88(var uParam0, var uParam1, bool bParam2)
{
	char cVar0[64];
	int iVar16;

	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *bParam2, 64);
	iVar16 = UNK_0x12AB0310C2281427(&cVar0);
	return iVar16;
}

void func_89(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_138(uParam0, uParam1, fParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			fParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_90(uParam0, uParam1, fParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_90(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	var uVar34;
	bool bVar35;

	iVar0 = 0;
	if (!SYSTEM::VMAG(fParam2->f_35) > 0f)
	{
		fParam2->f_35 = { *uParam0 };
	}
	if (fParam2->f_15)
	{
		if (func_134(fParam2->f_35, uParam0, &(fParam2->f_38), &(fParam2->f_45), 1, 1))
		{
			fParam2->f_6 = 9999.9f;
			fParam2->f_7 = 9999.9f;
		}
	}
	if (fParam2->f_51)
	{
		fParam2->f_6 = 9999.9f;
	}
	if (fParam2->f_48)
	{
		if (func_129(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		fParam2->f_6 = 9999.9f;
		fParam2->f_7 = 9999.9f;
	}
	bVar5 = false;
	bVar10 = true;
	if (fParam2->f_11)
	{
		bVar5 += 2;
		bVar5++;
		bVar10 = false;
	}
	else if (fParam2->f_10 == 0 || (fParam2->f_33 > 0 && fParam2->f_16))
	{
		bVar5++;
		bVar10 = false;
	}
	bVar5 += 4;
	fVar13 = 3f;
	bVar14 = 5f;
	switch (fParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			bVar14 = 5f;
			break;
		case 1:
			fVar13 = 2.75f;
			bVar14 = 7.5f;
			break;
		default:
			fVar13 = 2.5f;
			bVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_76(fParam2->f_34) != 0)
	{
		iVar17 = 3;
		fParam2->f_6 = 9999.9f;
		fParam2->f_7 = 9999.9f;
		fParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = UNK_0x8529439EA7EEBA65(*uParam0, (iVar0 * iVar17), &uVar4, &fVar9, bVar5, fVar13, bVar14);
		if (UNK_0x5DD62183BBF151CD(iVar8))
		{
			UNK_0x8502D8EBA9E78216(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412474.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { vVar1 };
			if (((fParam2->f_10 || fParam2->f_33 > 0) || !UNK_0x5B33870CBB8B6AC1(iVar8)) || UNK_0xD9DC3EBC8290FF92(iVar8))
			{
				UNK_0x968116EE0D84C042(vVar1, &uVar6, &iVar7);
				if (SYSTEM::VDIST(vVar1, fParam2->f_35) > fParam2->f_4)
				{
					if (!func_122(&vVar1, 0))
					{
						if ((fParam2->f_13 || iVar7 & 64 == 0) || fParam2->f_33 == 1)
						{
							if (fParam2->f_14 || iVar7 & 16 == 0)
							{
								if ((iVar7 & 128 == 0 && iVar7 & 256 == 0) && iVar7 & 512 == 0)
								{
									if (!func_119(vVar1))
									{
										vVar1 = { func_114(vVar1, &uVar4, fVar9, fParam2->f_9, *fParam2, bVar10, fParam2->f_11, fParam2->f_34, &bVar11, bVar12, 1, fParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_113(vVar1, 5f))
											{
												if (vVar1.z >= (fParam2->f_35.f_2 - fParam2->f_7) || fParam2->f_33 >= 2)
												{
													if (vVar1.z <= (fParam2->f_35.f_2 + fParam2->f_6) || fParam2->f_33 >= 2)
													{
														if (func_109(vVar1, fParam2))
														{
															if ((fParam2->f_48 && !func_129(&vVar1, 0)) || fParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((fParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, fParam2->f_35, fParam2->f_35.f_1, 0f) < fParam2->f_5) || fParam2->f_5 <= 0f) || fParam2->f_33 >= 2)
																	{
																		if ((fParam2->f_12 && !func_108(vVar1, uVar4, fParam2->f_34, UNK_0xD803B885F5E47A62(), 0, fParam2->f_56)) || !fParam2->f_12)
																		{
																			if (!fParam2->f_15 || !func_134(fParam2->f_35, &vVar1, &(fParam2->f_38), &(fParam2->f_45), 0, 1))
																			{
																				if (fParam2->f_8)
																				{
																					bVar19 = fParam2->f_31;
																					iVar20 = 1;
																					bVar21 = true;
																					bVar22 = fParam2->f_49;
																					if (!fParam2->f_55)
																					{
																						bVar19 = false;
																						iVar20 = 0;
																						bVar21 = false;
																						bVar22 = 1f;
																					}
																					else if (fParam2->f_17)
																					{
																						bVar19 = false;
																						iVar20 = 0;
																						bVar21 = false;
																						if (fParam2->f_33 == 1)
																						{
																							bVar22 = (bVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						iVar20 = 1;
																						bVar21 = true;
																						if (fParam2->f_28)
																						{
																							if (fParam2->f_33 == 1)
																							{
																								bVar22 = (bVar22 * 0.375f);
																							}
																						}
																					}
																					bVar23 = false;
																					if (!func_107(vVar1, uVar4, fParam2->f_34))
																					{
																						if (fParam2->f_3 > 7f)
																						{
																							if (func_48(vVar1, 6f, 1f, 1f, 5f, bVar19, iVar20, bVar21, bVar22, fParam2->f_58, -1, 1, fParam2->f_3, 0, 0, 0, 0))
																							{
																								bVar23 = true;
																							}
																						}
																						else if (func_48(vVar1, 6f, 1f, 1f, 5f, bVar19, iVar20, bVar21, bVar22, fParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_70(vVar1, uVar4, fParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							bVar23 = true;
																						}
																					}
																					if (bVar23 || fParam2->f_33 >= 2)
																					{
																						if (((fParam2->f_29 || fParam2->f_30) || fParam2->f_52) || fParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (fParam2->f_52)
																							{
																								iVar24 = func_99(vVar1, fParam2->f_54, &fVar25);
																							}
																							if (!fParam2->f_52 || (fParam2->f_52 && iVar24 <= fParam2->f_53))
																							{
																								if (fParam2->f_52)
																								{
																									if (iVar24 < fParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										fParam2->f_53 = iVar24;
																									}
																								}
																								if (fParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0 /*3*/] = { vVar1 };
																										Global_2412474.f_121[0] = uVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, fParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar16 /*3*/], fParam2->f_35))
																												{
																													func_98(vVar1, uVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162 /*3*/] = { vVar1 };
																									Global_2412474.f_121[Global_2412474.f_162] = uVar4;
																									Global_2412474.f_162++;
																									if (func_109(vVar1, fParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = uVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = uVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!fParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((fParam2->f_29 || fParam2->f_30) || fParam2->f_33 >= 2))
				{
					if (fParam2->f_30)
					{
						*uParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_96(0, fParam2);
						}
						iVar26 = UNK_0x09AC81E49EA267F7(false, Global_2412474.f_162);
						if (fParam2->f_18 && fParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412474[0 /*3*/] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0 /*3*/] = { Global_2412474[iVar26 /*3*/] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26 /*3*/] = { vVar27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					fParam2->f_33++;
					if (fParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_95(iVar15, *uParam0, &iVar0, &vVar1, &uVar4, fParam2, bVar10, fVar9, bVar5, fVar13, bVar14, bVar11);
						vVar31 = { vVar1 };
						uVar34 = uVar4;
						if (!fParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_134(fParam2->f_35, &vVar31, &(fParam2->f_38), &(fParam2->f_45), bVar35, 1) || func_129(&vVar31, bVar35))
						{
							if (!fParam2->f_50)
							{
								fParam2->f_33 = 0;
								fParam2->f_50 = 1;
								*uParam0 = { vVar31 };
								*uParam1 = uVar34;
								fParam2->f_6 = 9999.9f;
								fParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar31 };
								*uParam1 = uVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar31 };
							*uParam1 = uVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			fParam2->f_33++;
			if (fParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_91(&Global_1312061, uParam0, uParam1, *uParam0);
				if (fParam2->f_11)
				{
					fParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar8;
	}
	return 0;
}

void func_91(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_92(*(uParam0[iVar2 /*4*/]), 5f, UNK_0xD803B885F5E47A62(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

bool func_92(vector3 vParam0, float fParam3, int iParam4, float fParam5, int iParam6)
{
	if (func_94(vParam0, fParam3, iParam4, fParam5, 0) || func_93(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

int func_93(vector3 vParam0, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam3 == bVar0 || iParam4 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_71(vParam0, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949 /* Float: 0.1f */))
					{
						if (func_1292(bVar2, 0, 1) && func_1292(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_94(vector3 vParam0, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam4 == bVar0 || iParam5 == 1)
		{
			bVar1 = bVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1292(bVar1, 0, 1) && func_1292(bParam4, 0, 1))
				{
					if (UNK_0x08067D4957B73C02(bVar1) == UNK_0x08067D4957B73C02(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1292(bVar1, 0, 1) && func_1292(bParam4, 0, 1))
				{
					if (Global_2417897.f_261[bVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_52(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[bVar0])
				{
					if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1292(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_52(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void func_95(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = UNK_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		UNK_0x4A13F7D4B1E239A0(vParam1, *iParam4, fParam5, bParam6, &fParam9, bParam10, bParam11, bParam12);
		*fParam5 = { func_114(*fParam5, bParam6, fParam9, fParam7->f_9, *fParam7, bParam8, fParam7->f_11, fParam7->f_34, &bParam13, 0, 0, fParam7->f_51) };
		if (!func_119(*fParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_96(int iParam0, float fParam1)
{
	if (!func_109(Global_2412474[iParam0 /*3*/], fParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_97(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_96(iParam0, fParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_96(iParam0 + 1, fParam1);
	}
}

void func_97(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0 /*3*/] = { Global_2412474[iParam0 + 1 /*3*/] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_98(vector3 vParam0, var uParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { Global_2412474[iParam4 /*3*/] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4 /*3*/] = { vParam0 };
	Global_2412474.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_98(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_99(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	float fVar6;
	float fVar7;

	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar5 = iVar0;
		if (func_100(bVar5))
		{
			vVar1 = { func_52(bVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

bool func_100(bool bParam0)
{
	if (func_1292(bParam0, 0, 1))
	{
		if (!func_105(bParam0))
		{
			if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (!UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()))
				{
					if (func_102(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_101(UNK_0x08067D4957B73C02(bParam0), UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()), 0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
				else if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62()) == -1)
				{
					if (!func_102(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_55(bParam0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_101(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, false);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, true);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_102(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_103(bParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[bParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_103(bool bParam0)
{
	return func_104(bParam0);
}

bool func_104(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_13.f_1, false);
}

bool func_105(bool bParam0)
{
	if (func_34(bParam0, 0))
	{
		return true;
	}
	if (func_106())
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return true;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_106()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_107(vector3 vParam0, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;

	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	bVar1 = UNK_0x83C1D4B63BBD91F6(vParam0, 30f, false, iVar0);
	if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
	{
		iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
		vVar3 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
		bVar6 = UNK_0xD9522BA9E27E1349(bVar1);
		if (func_80(vParam0, iParam3, bParam4, vVar3, bVar6, iVar2, 0))
		{
			return true;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	bVar1 = UNK_0x83C1D4B63BBD91F6(vParam0, 30f, false, iVar0);
	if (UNK_0xC844350D5D58C99A(bVar1) && !UNK_0x437347B10A200C4B(bVar1, 0))
	{
		iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
		vVar3 = { UNK_0x68F4C0EC296D3901(bVar1, false) };
		bVar6 = UNK_0xD9522BA9E27E1349(bVar1);
		if (func_80(vParam0, iParam3, bParam4, vVar3, bVar6, iVar2, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_108(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_81(vParam0, iParam3, bParam4, bParam5, bParam6) || func_141(vParam0, iParam3, bParam4, bParam5, bParam7))
	{
		return true;
	}
	return false;
}

bool func_109(vector3 vParam0, float fParam3)
{
	if (fParam3->f_18)
	{
		switch (fParam3->f_26)
		{
			case 0:
				if (func_112(vParam0, fParam3->f_19, fParam3->f_25, 0, 0))
				{
					return true;
				}
				break;
			case 1:
				if (func_110(vParam0, fParam3->f_19, fParam3->f_22, 0, 0))
				{
					return true;
				}
				break;
			case 2:
				if (UNK_0x0399732A9EBC368E(vParam0, fParam3->f_19, fParam3->f_22, fParam3->f_25, 0, true))
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

bool func_110(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_111(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return false;
	}
	if (bParam9 && bParam10)
	{
		return true;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return true;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return true;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return true;
	}
	return false;
}

void func_111(bool bParam0, var uParam1)
{
	var uVar0;

	if (*bParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *bParam0;
		*bParam0 = uVar0;
	}
	if (bParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = bParam0->f_1;
		bParam0->f_1 = uVar0;
	}
	if (bParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = bParam0->f_2;
		bParam0->f_2 = uVar0;
	}
}

bool func_112(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (bParam6 + 0.01f);
}

bool func_113(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (func_102(UNK_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0 /*107*/].f_7 != 0)
				{
					if (func_71(vParam0, Global_4456448.f_91961[iVar0 /*107*/], Global_4456448.f_91961[iVar0 /*107*/].f_6, Global_4456448.f_91961[iVar0 /*107*/].f_7, iParam3))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0 /*266*/].f_15 != 0)
				{
					if (func_71(vParam0, Global_4456448.f_78242[iVar0 /*266*/], Global_4456448.f_78242[iVar0 /*266*/].f_3, Global_4456448.f_78242[iVar0 /*266*/].f_15, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0 /*325*/].f_12 != 0)
				{
					if (func_71(vParam0, Global_4456448.f_124065[iVar0 /*325*/], Global_4456448.f_124065[iVar0 /*325*/].f_3, Global_4456448.f_124065[iVar0 /*325*/].f_12, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_233[iVar0]) && !UNK_0x437347B10A200C4B(Global_969031.f_233[iVar0], 0))
				{
					if (func_71(vParam0, UNK_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], true), UNK_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), UNK_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (UNK_0xC844350D5D58C99A(Global_969031.f_119[iVar0]) && !UNK_0x437347B10A200C4B(Global_969031.f_119[iVar0], 0))
				{
					if (func_71(vParam0, UNK_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], true), UNK_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), UNK_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

Vector3 func_114(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, vector3 vParam6, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;

	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_117(vParam0, *bParam3, vParam6))
			{
				*bParam3 = (*bParam3 + 180f);
			}
		}
		return vParam0;
	}
	UNK_0x968116EE0D84C042(vParam0, &uVar3, &iVar4);
	if (iVar4 & 1024 == 0 && !bParam10)
	{
		UNK_0xC05DA9D35DAF88FD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!iVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (UNK_0xAFB8495D36825275(bParam11) && func_116(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (bParam13 && *bParam12)
		{
			*bParam3 = (*bParam3 + 180f);
			if (*bParam3 > 360f)
			{
				*bParam3 = (*bParam3 + -360f);
			}
		}
		if (*bParam3 <= 90f || *bParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			bVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					bVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					bVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						bVar11 = (bVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					bVar11 = (bVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					bVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					bVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						bVar11 = (bVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					bVar11 = (bVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!iVar4 & 64 == 0)
			{
				bVar11 = (bVar11 + (0.95f * fVar10));
			}
			if (!iVar4 & 4 == 0 || !iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + -0.5f);
			}
			if ((!iVar4 & 32 == 0 && iVar4 & 4 == 0) && iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + -1f);
			}
			if (!bParam5 || !iVar4 & 8 == 0)
			{
				bVar11 = (bVar11 + (4.2f * -0.5f));
			}
			if (!bParam11 == 0)
			{
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_115(bParam11, 3.5f);
				}
				else
				{
					fVar14 = func_115(bParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					bVar11 = (bVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_117(vParam0, *bParam3, vParam6))
		{
			if (bParam5 || ((iVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*bParam3 = (*bParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (bVar11 < 0f)
	{
		bVar11 = 0f;
	}
	vVar0 = { UNK_0x8A5E176FF719A014(vParam0, *bParam3, bVar11, 0f, 0f) };
	if (bParam5)
	{
		if (UNK_0x2E466A8362971293(vParam0, *bParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!bParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_115(bParam11, 3.5f);
				}
				else
				{
					fVar14 = func_115(bParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_115(bool bParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;

	func_73(bParam0, &fVar0, &fVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

bool func_116(vector3 vParam0)
{
	float fVar0;

	if (UNK_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return true;
		}
	}
	return false;
}

bool func_117(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 0f, 1f, 0f };
	func_78(&vVar0, 0f, 0f, bParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_118(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

float func_118(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_119(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_121(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_120(vParam0, &(Global_2411478[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_120(vParam0, &(Global_2411478[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_120(vector3 vParam0, var uParam3)
{
	return UNK_0x0399732A9EBC368E(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_121(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

bool func_122(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (func_128(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = UNK_0x79833B02DBD2A244(0.01f, 360f);
			func_127(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 0, fVar4);
			if (func_123(vVar1, &uVar0) || func_128(vVar1))
			{
				vVar1 = { *uParam0 };
				func_127(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return false;
}

bool func_123(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_126())
	{
		return false;
	}
	iVar1 = func_125();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_124(vParam0, &(Global_2405072.f_365[iVar0 /*12*/]), 1008981770 /* Float: 0.01f */, 0, 0))
			{
				*iParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_124(vector3 vParam0, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam3->f_10)
	{
		case 0:
			return func_112(vParam0, *iParam3, ((iParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * iParam3->f_8)), bParam5, bParam6);
		case 1:
			return func_110(vParam0, *iParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), iParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
		case 2:
			if (bParam5 && bParam6)
			{
				return UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false);
			}
			else if (bParam5)
			{
				if (UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false) && !(vParam0.z < iParam3->f_2 && vParam0.z < iParam3->f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (bParam6)
			{
				if (UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, false) && !(vParam0.z > iParam3->f_2 && vParam0.z > iParam3->f_3.f_2))
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
				return UNK_0x0399732A9EBC368E(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, 0, true);
			}
			break;
	}
	return false;
}

int func_125()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_126()
{
	return Global_1676377.f_474;
}

void func_127(var uParam0, vector3 vParam1, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { *uParam0 - vParam1 };
	vVar0.f_2 = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (bParam7 == 0f)
		{
			func_78(&vVar0, 0f, 0f, UNK_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_78(&vVar0, 0f, 0f, bParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((bParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar3.x;
	uParam0->f_1 = vVar3.y;
}

bool func_128(vector3 vParam0)
{
	float fVar0;

	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return true;
		}
	}
	return false;
}

bool func_129(var uParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_112(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (func_110(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (UNK_0x0399732A9EBC368E(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_130(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949 /* Float: 0.1f */, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_130(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam10)
	{
		case 0:
			func_127(&vParam0, vParam3, bParam9, fParam11, bParam12, 0);
			break;
		case 1:
			func_133(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		case 2:
			func_131(&vParam0, vParam3, vParam6, bParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		UNK_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_112(vVar1, vParam3, bParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			case 1:
				if (!func_110(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			case 2:
				if (!UNK_0x0399732A9EBC368E(vVar1, vParam3, vParam6, bParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

void func_131(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, float fParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;

	vVar0 = { vParam4 - vParam1 };
	vVar0.f_2 = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.f_2 = 0f;
	vVar6 = { func_132(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(UNK_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (bParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_118(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((bParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((bParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_118(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((bParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((bParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *uParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.f_2 = 0f;
		vVar6 = { func_132(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((bParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.f_2 = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.f_2 = 0f;
		vVar6 = { func_132(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(UNK_0x07AB02F3C4AE2B04(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_118(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_118(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *uParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar10 };
		}
		else
		{
			*uParam0 = { vVar13 };
		}
	}
}

Vector3 func_132(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_133(var uParam0, struct<2> Param1, float fParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { vVar0 };
}

bool func_134(vector3 vParam0, var uParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (func_180(vParam0))
	{
		if (func_137(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return true;
		}
	}
	if (func_135(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return true;
	}
	if (bParam7)
	{
		if (func_84(*uParam3, 1056964608 /* Float: 0.5f */))
		{
			return true;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *bParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(bParam4[iVar0 /*3*/])) < (*iParam5)[iVar0])
		{
			if (bParam6)
			{
				func_127(uParam3, *(bParam4[iVar0 /*3*/]), (*iParam5)[iVar0], 1036831949 /* Float: 0.1f */, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return true;
	}
	return false;
}

bool func_135(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_123(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_136(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 0, bParam2);
			if (func_123(vVar2, &uVar1) || func_128(vVar2))
			{
				vVar2 = { *uParam0 };
				func_136(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return true;
	}
	return false;
}

void func_136(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_130(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			case 1:
				*uParam0 = { func_130(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			case 2:
				*uParam0 = { func_130(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_127(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			case 1:
				func_133(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			case 2:
				func_131(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
		}
	}
}

bool func_137(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0 /*17*/].f_16))
			{
				if (func_124(*uParam0, &(Global_2409984[iVar0 /*17*/]), 1008981770 /* Float: 0.01f */, iParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409984[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_136(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 0, bParam3);
							if (func_137(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_136(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_138(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;

	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(fParam2->f_35) > 0f)
		{
			fParam2->f_35 = { *uParam0 };
		}
		if (fParam2->f_15)
		{
			if (func_134(fParam2->f_35, uParam0, &(fParam2->f_38), &(fParam2->f_45), 1, 1))
			{
				fParam2->f_6 = 9999.9f;
				fParam2->f_7 = 9999.9f;
			}
		}
		if (fParam2->f_48)
		{
			if (func_129(uParam0, 1))
			{
				fParam2->f_6 = 9999.9f;
				fParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			fParam2->f_6 = 9999.9f;
			fParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_139(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405072.f_1747[iVar1 /*4*/] };
				uVar5 = Global_2405072.f_1747[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((fParam2->f_57 && SYSTEM::VDIST(vVar2, fParam2->f_35) > fParam2->f_4) || fParam2->f_57 == 0)
					{
						if ((fParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, fParam2->f_35, fParam2->f_35.f_1, 0f) < fParam2->f_5) || fParam2->f_5 <= 0f)
						{
							if ((fParam2->f_12 && !func_108(vVar2, uVar5, fParam2->f_34, UNK_0xD803B885F5E47A62(), 0, fParam2->f_56)) || !fParam2->f_12)
							{
								if (!fParam2->f_15 || !func_134(fParam2->f_35, &vVar2, &(fParam2->f_38), &(fParam2->f_45), 0, 1))
								{
									if (fParam2->f_8)
									{
										bVar7 = fParam2->f_31;
										iVar8 = 1;
										bVar9 = true;
										bVar10 = fParam2->f_49;
										if (!fParam2->f_55)
										{
											bVar7 = false;
											iVar8 = 0;
											bVar9 = false;
											bVar10 = 1f;
										}
										else if (fParam2->f_17)
										{
											bVar7 = false;
											iVar8 = 0;
											bVar9 = false;
											if (fParam2->f_33 == 1)
											{
												bVar10 = (bVar10 * 0.375f);
											}
										}
										else
										{
											iVar8 = 1;
											bVar9 = true;
											if (fParam2->f_28)
											{
												if (fParam2->f_33 == 1)
												{
													bVar10 = (bVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_107(vVar2, uVar5, fParam2->f_34))
										{
											if (fParam2->f_3 > 7f)
											{
												if (func_48(vVar2, 6f, 1f, 1f, 5f, bVar7, iVar8, bVar9, bVar10, fParam2->f_58, -1, 1, fParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_48(vVar2, 6f, 1f, 1f, 5f, bVar7, iVar8, bVar9, bVar10, fParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_70(vVar2, uVar5, fParam2->f_34, 1, 1, 0, 0, fParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((fParam2->f_29 || fParam2->f_30) || fParam2->f_52)
											{
												fVar13 = 0f;
												if (fParam2->f_52)
												{
													iVar12 = func_99(vVar2, fParam2->f_54, &fVar13);
												}
												if (!fParam2->f_52 || (fParam2->f_52 && iVar12 <= fParam2->f_53))
												{
													if (fParam2->f_52)
													{
														if (iVar12 < fParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															fParam2->f_53 = iVar12;
														}
													}
													if (fParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0 /*3*/] = { vVar2 };
															Global_2412474.f_121[0] = uVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, fParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar6 /*3*/], fParam2->f_35))
																	{
																		func_98(vVar2, uVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162 /*3*/] = { vVar2 };
														Global_2412474.f_121[Global_2412474.f_162] = uVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((fParam2->f_52 && fParam2->f_53 == 0) || fParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = uVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = uVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (fParam2->f_30)
			{
				*uParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_96(0, fParam2);
				}
				iVar14 = UNK_0x09AC81E49EA267F7(false, Global_2412474.f_162);
				vVar15 = { Global_2412474[0 /*3*/] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0 /*3*/] = { Global_2412474[iVar14 /*3*/] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14 /*3*/] = { vVar15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			fParam2->f_33++;
			if (fParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_139(vector3 vParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		iVar1 = func_140(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = iVar1;
		iVar2++;
	}
}

int func_140(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405072.f_1747[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_141(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_142(vParam0, bParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_80(vParam0, bParam3, bParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1292(bVar2, 0, 1) && func_1292(bParam5, 0, 1))
						{
							return true;
						}
						else
						{
							return true;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return false;
}

bool func_142(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_79(bParam3, 1008981770 /* Float: 0.01f */);
	fVar1 = func_79(bParam7, 1008981770 /* Float: 0.01f */);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return true;
	}
	return false;
}

bool func_143(vector3 vParam0)
{
	var uVar0;

	if (Global_2537071.f_883 && func_144(vParam0, &uVar0))
	{
		return true;
	}
	return false;
}

bool func_144(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*uParam3 = -1;
	iVar2 = func_157(vParam0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_145(iVar1))
			{
				if (func_157(Global_1676377.f_488[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_145(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_156(iParam0);
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_264 == iVar0)
	{
		return true;
	}
	iVar1 = Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
	if (iVar1 != func_57())
	{
		if (Global_1590535[iVar1 /*876*/].f_274.f_264 == iVar0)
		{
			return true;
		}
	}
	if (Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_5 == iParam0)
	{
		return true;
	}
	if (func_155(UNK_0xD803B885F5E47A62(), 0) || (func_152(UNK_0xD803B885F5E47A62()) && func_150(func_151(UNK_0xD803B885F5E47A62())) == 12))
	{
		return true;
	}
	if (func_149(UNK_0xD803B885F5E47A62()) || (func_152(UNK_0xD803B885F5E47A62()) && func_150(func_151(UNK_0xD803B885F5E47A62())) == 8))
	{
		return true;
	}
	if (func_148(UNK_0xD803B885F5E47A62()) || (func_152(UNK_0xD803B885F5E47A62()) && func_150(func_151(UNK_0xD803B885F5E47A62())) == 5))
	{
		return true;
	}
	if (func_147(UNK_0xD803B885F5E47A62()) || (func_152(UNK_0xD803B885F5E47A62()) && func_150(func_151(UNK_0xD803B885F5E47A62())) == 10))
	{
		return true;
	}
	if (func_146(UNK_0xD803B885F5E47A62()) || (func_152(UNK_0xD803B885F5E47A62()) && func_150(func_151(UNK_0xD803B885F5E47A62())) == 6))
	{
		return true;
	}
	return false;
}

bool func_146(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 6;
			}
		}
	}
	return false;
}

bool func_147(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return false;
}

bool func_148(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_57())
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_149(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_57())
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

int func_150(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
	}
	return -1;
}

bool func_151(bool bParam0)
{
	if (bParam0 != func_57() && func_1292(bParam0, 1, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

bool func_152(bool bParam0)
{
	if (bParam0 != func_57() && func_1292(bParam0, 1, 1))
	{
		if (func_154(bParam0) && !func_153(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_153(bool bParam0)
{
	if (bParam0 != func_57() && func_1292(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 4);
	}
	return false;
}

bool func_154(bool bParam0)
{
	if (bParam0 != func_57() && func_1292(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

bool func_155(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TERBYTE"))
			{
				return true;
			}
		}
	}
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_57())
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
		case 84:
			return 2;
		case 85:
			return 3;
		case 86:
			return 4;
		case 87:
			return 5;
	}
	return 0;
}

int func_157(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_124(vParam0, &(Global_2409984[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_158(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];

	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_176())
	{
		if (bParam3 == 0)
		{
		}
		iVar1 = func_175(vParam0);
		if (iVar1 > -1)
		{
			func_187();
			switch (iVar1)
			{
				case 0:
					func_174(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_174(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_174(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_174(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_174(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_174(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_174(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_174(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_174(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				case 1:
					func_174(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_174(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_174(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_174(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				case 2:
					func_174(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_174(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_174(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_174(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				case 3:
					func_174(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_174(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_174(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_174(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				case 4:
					func_174(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_174(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_174(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_174(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				case 5:
					func_174(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_174(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_174(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_174(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				case 6:
					func_174(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_174(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_174(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_174(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				case 7:
					func_174(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_174(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_174(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_174(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				case 8:
					func_174(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_174(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_174(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_174(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				case 9:
					func_174(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_174(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_174(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_174(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_174(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_174(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_174(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_174(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_174(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_174(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_174(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_174(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				case 10:
					func_172(78);
					break;
				case 11:
					func_172(79);
					break;
				case 12:
					func_172(82);
					break;
				case 13:
					func_172(81);
					break;
				case 14:
					func_172(73);
					break;
				case 15:
					func_174(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_174(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_174(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_174(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				case 16:
					func_172(75);
					break;
				case 17:
					func_172(76);
					break;
				case 18:
					func_172(77);
					break;
				case 19:
					func_174(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_174(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_174(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_174(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				case 20:
					func_172(80);
					break;
				case 21:
				case 25:
					func_172(87);
					break;
				case 22:
				case 26:
					func_172(88);
					break;
				case 23:
				case 27:
					func_172(89);
					break;
				case 24:
				case 28:
					func_172(90);
					break;
				case 29:
				case 30:
					if (func_171(bParam3))
					{
						func_172(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28);
					}
					break;
				case 31:
					func_174(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_174(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_174(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_174(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_174(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_174(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_174(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_174(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_174(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_174(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_174(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_174(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_174(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_174(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_174(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_174(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_174(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_174(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_174(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_174(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_174(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_174(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_174(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_174(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_174(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_174(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_174(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_174(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_174(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_174(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_174(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_174(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_174(-194.254f, -2018.756f, 26.62f, 75f);
					func_174(-186.956f, -2031.369f, 26.62f, 338f);
					func_174(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_174(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_174(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_174(-233.372f, -2089.601f, 26.62f, 304f);
					func_174(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_174(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_174(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_174(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_174(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_174(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_174(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_174(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_174(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_174(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_174(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_174(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_174(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_174(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_174(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_174(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_168(vParam0, &iVar2, &iVar6) || (func_144(vParam0, &(iVar2[0])) && (UNK_0xC41A9202669A24C4(bParam3) || UNK_0xAFB8495D36825275(bParam3))))
		{
			func_187();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405072.f_513 = 1;
				}
				if (!iVar6[iVar0] && func_167(iVar2[iVar0], -1))
				{
					if (func_171(bParam3))
					{
						func_172(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_166(UNK_0x16F2683693E537C9()) || func_165(UNK_0x16F2683693E537C9())) && UNK_0xC41A9202669A24C4(bParam3)) || UNK_0xAFB8495D36825275(bParam3))
					{
						if (func_164(bParam3))
						{
							func_163(iVar2[iVar0]);
						}
						else if (func_162(bParam3))
						{
							func_161(iVar2[iVar0]);
							func_163(iVar2[iVar0]);
						}
						else
						{
							func_161(iVar2[iVar0]);
							func_163(iVar2[iVar0]);
						}
					}
					else
					{
						func_159(iVar2[iVar0], bParam3);
					}
				}
				else
				{
					func_172(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_159(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 23:
			func_174(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_174(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_174(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_174(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_174(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_174(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_174(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_174(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		case 26:
			func_174(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_174(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_174(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_174(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_174(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_174(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_174(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_174(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		case 24:
			func_174(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_174(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_174(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_174(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_174(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_174(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_174(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_174(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		case 25:
			func_174(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_174(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_174(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_174(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_174(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_174(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_174(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_174(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		case 22:
			func_174(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_174(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_174(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_174(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_174(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_174(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_174(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_174(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		case 28:
			func_174(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_174(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_174(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_174(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_174(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_174(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_174(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_174(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		case 31:
			func_174(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_174(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_174(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_174(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_174(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_174(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_174(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_174(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		case 29:
			func_174(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_174(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_174(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_174(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_174(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_174(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_174(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_174(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		case 30:
			func_174(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_174(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_174(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_174(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_174(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_174(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_174(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_174(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		case 27:
			func_174(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_174(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_174(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_174(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_174(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_174(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_174(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_174(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		case 33:
			func_174(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_174(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_174(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_174(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_174(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_174(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_174(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_174(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		case 36:
			func_174(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_174(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_174(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_174(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_174(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_174(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_174(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_174(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		case 34:
			func_174(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_174(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_174(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_174(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_174(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_174(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_174(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_174(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		case 35:
			func_174(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_174(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_174(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_174(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_174(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_174(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_174(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_174(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		case 32:
			func_174(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_174(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_174(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_174(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_174(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_174(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_174(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_174(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		case 38:
			func_174(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_174(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_174(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_174(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_174(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_174(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_174(142.7427f, -2536.147f, 5f, 205.0002f);
			func_174(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		case 41:
			func_174(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_174(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_174(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_174(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_174(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_174(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_174(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_174(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		case 39:
			func_174(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_174(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_174(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_174(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_174(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_174(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_174(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_174(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		case 40:
			func_174(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_174(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_174(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_174(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_174(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_174(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_174(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_174(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		case 37:
			func_174(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_174(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_174(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_174(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_174(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_174(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_174(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_174(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		case 83:
			func_174(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_174(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_174(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_174(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_174(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_174(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_174(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_174(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_174(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_174(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_174(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_174(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_174(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_174(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_174(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_174(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_174(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_174(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_174(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_174(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_174(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_174(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		case 84:
			func_174(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_174(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_174(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_174(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_174(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_174(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_174(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_174(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_174(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_174(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_174(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_174(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_174(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_174(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_174(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_174(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_174(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_174(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_174(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_174(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_174(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_174(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		case 85:
			func_174(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_174(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_174(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_174(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_174(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_174(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_174(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_174(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_174(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_174(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_174(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_174(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_174(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_174(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_174(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_174(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_174(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_174(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_174(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_174(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_174(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_174(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		case 86:
			func_174(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_174(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_174(-1823.414f, 3092.762f, 31.843f, 330f);
			func_174(-1819.045f, 3100.435f, 31.845f, 330f);
			func_174(-1833.313f, 3075.722f, 31.838f, 330f);
			func_174(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_174(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_174(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_174(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_174(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_174(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_174(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_174(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_174(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_174(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_174(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_174(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_174(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_174(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_174(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_174(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_174(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		case 87:
			func_174(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_174(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_174(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_174(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_174(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_174(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_174(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_174(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_174(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_174(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_174(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_174(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_174(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_174(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_174(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_174(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_174(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_174(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_174(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_174(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_174(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_174(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		case 89:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_174(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_174(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_174(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_174(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_174(1231.279f, 2910.881f, 43.3085f, 12f);
				func_174(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_174(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_174(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_174(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_174(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_174(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_174(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_174(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_174(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_174(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_174(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_174(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_174(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_174(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_174(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_174(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_174(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_174(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_174(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_174(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_174(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_174(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_174(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_174(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_174(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_174(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_174(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_174(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_174(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_174(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_174(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_174(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		case 90:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_174(3.855f, 2672.388f, 78.437f, 319.2f);
				func_174(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_174(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_174(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_174(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_174(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_174(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_174(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_174(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_174(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_174(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_174(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_174(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_174(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_174(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_174(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_174(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_174(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_174(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_174(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_174(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_174(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_174(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_174(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_174(102.851f, 2688.009f, 51.732f, 224f);
				func_174(109.815f, 2681.012f, 51.112f, 224f);
				func_174(116.355f, 2674.26f, 50.529f, 224f);
				func_174(125.138f, 2665.98f, 49.8f, 224f);
				func_174(132.228f, 2659.865f, 49.26f, 228.4f);
				func_174(139.354f, 2653.536f, 48.737f, 228.4f);
				func_174(88.512f, 2702.995f, 53.042f, 224.199f);
				func_174(81.565f, 2710.357f, 53.67f, 224.199f);
				func_174(75.156f, 2716.981f, 54.223f, 224.199f);
				func_174(68.442f, 2723.806f, 54.775f, 226.199f);
				func_174(61.449f, 2730.606f, 55.308f, 226.199f);
				func_174(53.702f, 2738.167f, 55.855f, 226.199f);
				func_174(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		case 91:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_174(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_174(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_174(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_174(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_174(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_174(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_174(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_174(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_174(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_174(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_174(2714.633f, 3918.283f, 42.938f, 16f);
				func_174(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_174(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_174(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_174(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_174(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_174(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_174(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_174(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_174(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_174(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_174(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_174(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_174(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_174(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_174(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_174(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_174(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_174(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_174(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_174(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_174(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_174(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_174(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_174(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_174(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_174(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		case 92:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_174(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_174(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_174(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_174(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_174(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_174(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_174(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_174(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_174(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_174(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_174(3374.923f, 5520.177f, 20.3207f, 86f);
				func_174(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_174(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_174(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_174(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_174(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_174(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_174(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_174(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_174(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_174(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_174(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_174(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_174(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_174(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_174(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_174(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_174(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_174(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_174(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_174(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_174(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_174(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_174(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_174(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_174(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_174(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		case 93:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(43.848f, 6845.657f, 13.379f, 247.2f);
				func_174(50.379f, 6861.146f, 15.105f, 247.2f);
				func_174(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_174(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_174(55.806f, 6875.081f, 14.824f, 247.2f);
				func_174(11.616f, 6877.079f, 11.466f, 247.2f);
				func_174(18.954f, 6891.633f, 11.37f, 247.2f);
				func_174(26.68f, 6907.587f, 11.869f, 247.2f);
				func_174(7.479f, 6907.895f, 12.024f, 247.2f);
				func_174(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_174(35.591f, 6836.608f, 13.288f, 274.4f);
				func_174(36.028f, 6830.135f, 13.801f, 270.8f);
				func_174(35.114f, 6823.884f, 14.527f, 260.8f);
				func_174(48.779f, 6838.693f, 14.337f, 273.6f);
				func_174(56.738f, 6821.8f, 15.244f, 244.8f);
				func_174(48.377f, 6825.895f, 14.656f, 249.8f);
				func_174(49.11f, 6831.439f, 13.991f, 274.8f);
				func_174(53.544f, 6818.275f, 16.342f, 243f);
				func_174(46.162f, 6821.945f, 15.483f, 249.8f);
				func_174(60.129f, 6836.8f, 15.605f, 269.6f);
				func_174(40.88f, 6802.952f, 20.113f, 242.6f);
				func_174(48.203f, 6799.134f, 20.897f, 244.4f);
				func_174(70.449f, 6809.271f, 16.846f, 243f);
				func_174(61.436f, 6814.266f, 16.71f, 244.2f);
				func_174(56.142f, 6793.458f, 19.806f, 242.6f);
				func_174(65.759f, 6791.12f, 18.433f, 276.4f);
				func_174(77.305f, 6805.391f, 18.558f, 245.6f);
				func_174(85.893f, 6800.243f, 18.535f, 249.8f);
				func_174(56.85f, 6780.582f, 18.822f, 297.999f);
				func_174(65.636f, 6784.669f, 18.789f, 293.799f);
				func_174(74.121f, 6788.498f, 18.739f, 293.799f);
				func_174(97.779f, 6796.32f, 19.02f, 276.799f);
				func_174(106.76f, 6796.983f, 18.914f, 272.599f);
				func_174(112.387f, 6802.858f, 18.994f, 210.599f);
				func_174(117.58f, 6802.644f, 18.663f, 209.399f);
				func_174(122.481f, 6802.693f, 18.468f, 209.399f);
				func_174(127.182f, 6802.686f, 18.218f, 209.399f);
				func_174(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		case 94:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_174(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_174(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_174(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_174(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_174(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_174(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_174(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_174(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_174(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_174(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_174(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_174(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_174(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_174(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_174(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_174(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_174(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_174(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_174(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_174(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_174(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_174(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_174(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_174(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_174(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_174(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_174(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_174(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_174(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_174(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_174(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_174(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_174(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_174(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_174(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_174(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_174(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		case 95:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_174(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_174(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_174(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_174(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_174(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_174(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_174(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_174(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_174(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_174(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_174(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_174(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_174(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_174(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_174(30.027f, 3292.351f, 38.604f, 140.199f);
				func_174(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_174(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_174(23.897f, 3283.152f, 39.381f, 145.399f);
				func_174(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_174(18.723f, 3274.025f, 40.054f, 155.799f);
				func_174(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_174(36.958f, 3298.847f, 38.001f, 127.799f);
				func_174(54.165f, 3311.582f, 36.517f, 303.799f);
				func_174(61.607f, 3317.105f, 35.916f, 306.999f);
				func_174(68.994f, 3323.129f, 35.364f, 308.199f);
				func_174(76.266f, 3329.467f, 34.805f, 311.399f);
				func_174(82.757f, 3335.915f, 34.344f, 316.598f);
				func_174(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_174(14.664f, 3263.688f, 40.931f, 160.398f);
				func_174(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_174(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_174(89.575f, 3343.311f, 33.932f, 318.398f);
				func_174(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_174(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_174(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_174(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_174(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		case 96:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_174(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_174(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_174(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_174(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_174(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_174(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_174(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_174(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_174(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_174(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_174(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_174(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_174(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_174(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_174(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_174(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_174(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_174(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_174(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_174(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_174(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_174(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_174(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_174(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_174(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_174(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_174(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_174(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_174(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_174(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_174(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_174(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_174(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_174(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_174(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_174(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_174(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		case 97:
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_174(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_174(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_174(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_174(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_174(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_174(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_174(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_174(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_174(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_174(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_174(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_174(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_174(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_174(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_174(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_174(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_174(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_174(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_174(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_174(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_174(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_174(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_174(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_174(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_174(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_174(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_174(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_174(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_174(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_174(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_174(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_174(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_174(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_174(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_174(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_174(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_174(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_174(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		case 123:
		case 124:
		case 125:
			func_160(896.357f, -3.23695f, 77.7645f, 147.3987f, bParam1, 0);
			func_160(899.759f, -5.54885f, 77.7645f, 147.3987f, bParam1, 0);
			func_160(903.021f, -7.62495f, 77.7645f, 147.3987f, bParam1, 0);
			func_160(906.474f, -9.70314f, 77.7645f, 147.3987f, bParam1, 0);
			func_160(909.884f, -11.888f, 77.7645f, 147.3987f, bParam1, 0);
			func_160(913.209f, -14.0965f, 77.7645f, 147.3987f, bParam1, 0);
			func_160(879.578f, 7.26725f, 77.7646f, 147.3987f, bParam1, 0);
			func_160(876.642f, 9.05555f, 77.7646f, 147.3987f, bParam1, 0);
			func_160(873.534f, 10.8622f, 77.7646f, 147.3987f, bParam1, 0);
			func_160(869.685f, -7.55887f, 77.7646f, 237.3985f, bParam1, 0);
			func_160(867.866f, -10.464f, 77.7646f, 237.3985f, bParam1, 0);
			func_160(866.077f, -13.4579f, 77.7646f, 237.3985f, bParam1, 0);
			func_160(864.322f, -16.4335f, 77.7646f, 237.3985f, bParam1, 0);
			func_160(862.534f, -19.2652f, 77.7644f, 237.3985f, bParam1, 0);
			func_160(887.524f, -18.7251f, 77.7647f, 237.3985f, bParam1, 0);
			func_160(885.594f, -21.7041f, 77.7647f, 237.3985f, bParam1, 0);
			func_160(883.691f, -24.7685f, 77.7647f, 237.3985f, bParam1, 0);
			func_160(881.827f, -27.7084f, 77.7644f, 237.3985f, bParam1, 0);
			func_160(880.013f, -30.5612f, 77.7644f, 237.3985f, bParam1, 0);
			func_160(884.931f, -17.2169f, 77.7646f, 57.5983f, bParam1, 0);
			func_160(883.043f, -20.1063f, 77.7646f, 57.5983f, bParam1, 0);
			func_160(881.118f, -22.9962f, 77.7644f, 57.5983f, bParam1, 0);
			func_160(879.345f, -25.9389f, 77.7644f, 57.5983f, bParam1, 0);
			func_160(877.631f, -28.8543f, 77.7644f, 57.5983f, bParam1, 0);
			func_160(903.231f, -28.6965f, 77.7647f, 57.5983f, bParam1, 0);
			func_160(901.368f, -31.6316f, 77.7647f, 57.5983f, bParam1, 0);
			func_160(899.552f, -34.4844f, 77.7647f, 57.5983f, bParam1, 0);
			func_160(897.669f, -37.4419f, 77.7647f, 57.5983f, bParam1, 0);
			func_160(895.831f, -40.3309f, 77.7647f, 57.5983f, bParam1, 0);
			func_160(932.842f, -25.6631f, 77.7647f, 147.798f, bParam1, 0);
			func_160(935.693f, -27.516f, 77.7647f, 147.798f, bParam1, 0);
			func_160(938.593f, -29.5809f, 77.7647f, 147.798f, bParam1, 0);
			break;
		default:
			break;
	}
}

void func_160(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;

	if (!bParam4 == 0)
	{
		func_73(bParam4, &Var0, &Var3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		vVar7 = { 0f, fVar6, 0f };
		vVar10 = { UNK_0x8A5E176FF719A014(vParam0, bParam3, vVar7) };
		func_174(vVar10, bParam3);
	}
	else
	{
		func_174(vParam0, bParam3);
	}
}

void func_161(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_174(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_174(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_174(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_174(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_174(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_174(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_174(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_174(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_174(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_174(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_174(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_174(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_174(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_174(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_174(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_174(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_174(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_174(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_174(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_174(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_174(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_174(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_174(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_174(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_174(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_174(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_174(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_174(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_174(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_174(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_174(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_174(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_174(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_174(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_174(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_174(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_174(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_174(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_174(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_174(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_174(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_174(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_174(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_174(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_174(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_174(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		case 84:
			func_174(-1356.991f, -3242.228f, 12.945f, 330f);
			func_174(-1369.313f, -3234.758f, 12.945f, 330f);
			func_174(-1381.751f, -3227.408f, 12.945f, 330f);
			func_174(-1394.302f, -3220.021f, 12.945f, 330f);
			func_174(-1354.339f, -3223.129f, 12.945f, 330f);
			func_174(-1366.302f, -3215.809f, 12.945f, 330f);
			func_174(-1378.492f, -3208.645f, 12.945f, 330f);
			func_174(-1350.322f, -3203.405f, 12.945f, 330f);
			func_174(-1362.684f, -3196.451f, 12.945f, 330f);
			func_174(-1347.089f, -3182.69f, 12.945f, 330f);
			func_174(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_174(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_174(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_174(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_174(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_174(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_174(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_174(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_174(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_174(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_174(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_174(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_174(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_174(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_174(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_174(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_174(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_174(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_174(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_174(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_174(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_174(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_174(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_174(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_174(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_174(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_174(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_174(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_174(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_174(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_174(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_174(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_174(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_174(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_174(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_174(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		case 85:
			func_174(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_174(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_174(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_174(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_174(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_174(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_174(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_174(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_174(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_174(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_174(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_174(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_174(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_174(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_174(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_174(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_174(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_174(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_174(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_174(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_174(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_174(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_174(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_174(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_174(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_174(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_174(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_174(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_174(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_174(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_174(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_174(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_174(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_174(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_174(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_174(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_174(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_174(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_174(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_174(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_174(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_174(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_174(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_174(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_174(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_174(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		case 86:
			func_174(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_174(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_174(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_174(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_174(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_174(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_174(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_174(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_174(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_174(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_174(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_174(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_174(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_174(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_174(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_174(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_174(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_174(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_174(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_174(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_174(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_174(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_174(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_174(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_174(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_174(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_174(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_174(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_174(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_174(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_174(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_174(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_174(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_174(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_174(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_174(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_174(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_174(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_174(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_174(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_174(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_174(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_174(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_174(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_174(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_174(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		case 87:
			func_174(-2484.323f, 3249.294f, 31.828f, 151f);
			func_174(-2495.313f, 3255.746f, 31.828f, 151f);
			func_174(-2472.644f, 3242.684f, 31.828f, 151f);
			func_174(-2506.313f, 3262.27f, 31.823f, 151f);
			func_174(-2461.494f, 3235.93f, 31.828f, 151f);
			func_174(-2505.602f, 3238.049f, 31.828f, 151f);
			func_174(-2481.937f, 3224.8f, 31.828f, 151f);
			func_174(-2516.813f, 3244.266f, 31.823f, 151f);
			func_174(-2470.03f, 3217.899f, 31.828f, 151f);
			func_174(-2493.933f, 3231.308f, 31.828f, 151f);
			func_174(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_174(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_174(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_174(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_174(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_174(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_174(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_174(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_174(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_174(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_174(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_174(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_174(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_174(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_174(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_174(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_174(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_174(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_174(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_174(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_174(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_174(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_174(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_174(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_174(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_174(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_174(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_174(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_174(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_174(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_174(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_174(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_174(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_174(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_174(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_174(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		default:
			break;
	}
}

bool func_162(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("MICROLIGHT"):
		case joaat("HAVOK"):
		case joaat("SEABREEZE"):
		case joaat("ROGUE"):
		case joaat("PYRO"):
		case joaat("BUZZARD"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("VOLATUS"):
		case joaat("CUBAN800"):
		case joaat("BESRA"):
		case joaat("DUSTER"):
		case joaat("STUNT"):
		case joaat("VELUM"):
		case joaat("VELUM2"):
		case joaat("VESTRA"):
		case joaat("LAZER"):
		case joaat("ALPHAZ1"):
		case joaat("HOWARD"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("STARLING"):
			return true;
		default:
			break;
	}
	return false;
}

void func_163(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_174(-947.712f, -3367.704f, 12.944f, 60f);
			func_174(-904.692f, -3293.072f, 12.944f, 60f);
			func_174(-863.71f, -3221.978f, 12.944f, 60f);
			func_174(-966.418f, -3162.773f, 12.944f, 60f);
			func_174(-1007.435f, -3233.93f, 12.944f, 60f);
			func_174(-1050.455f, -3308.559f, 12.944f, 60f);
			func_174(-1145.673f, -3253.456f, 12.944f, 60f);
			func_174(-1098.386f, -3181.428f, 12.944f, 60f);
			func_174(-1060.474f, -3108.903f, 12.944f, 60f);
			func_174(-1155.391f, -3053.632f, 12.944f, 60f);
			func_174(-1196.114f, -3125.146f, 12.948f, 60f);
			func_174(-1235.552f, -3201.86f, 12.944f, 60f);
			func_174(-1344.446f, -3139.177f, 12.944f, 60f);
			func_174(-1301.308f, -3064.341f, 12.944f, 60f);
			func_174(-1260.135f, -2992.912f, 12.944f, 60f);
			func_174(-1364.244f, -2932.9f, 12.98f, 60f);
			func_174(-1405.284f, -3004.108f, 12.96f, 60f);
			func_174(-1448.29f, -3078.72f, 12.95f, 60f);
			func_174(-1535.732f, -3028.318f, 12.945f, 60f);
			func_174(-1492.639f, -2953.558f, 12.945f, 60f);
			func_174(-1451.506f, -2882.2f, 12.944f, 60f);
			func_174(-1553.927f, -2823.12f, 13.002f, 60f);
			func_174(-1595.097f, -2894.571f, 12.944f, 60f);
			func_174(-1637.836f, -2968.714f, 12.945f, 60f);
			func_174(-1740.971f, -2911.484f, 12.944f, 330f);
			func_174(-1696.293f, -2833.978f, 12.944f, 330f);
			func_174(-1651.502f, -2756.273f, 12.945f, 330f);
			func_174(-1588.258f, -2647.575f, 12.944f, 330f);
			func_174(-1536.862f, -2681.378f, 12.945f, 330f);
			func_174(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		case 85:
		case 86:
		case 87:
			func_174(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_174(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_174(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_174(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_174(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_174(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_174(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_174(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_174(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_174(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_174(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_174(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_174(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_174(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_174(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_174(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_174(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_174(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_174(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_174(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_174(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_174(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_174(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_174(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_174(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_174(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_174(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_174(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_174(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_174(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		default:
			break;
	}
}

bool func_164(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("HYDRA"):
		case joaat("DODO"):
		case joaat("MAMMATUS"):
		case joaat("ANNIHILATOR"):
		case joaat("TULA"):
		case joaat("HUNTER"):
		case joaat("MOGUL"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("SHAMAL"):
		case joaat("SAVAGE"):
		case joaat("LUXOR"):
		case joaat("LUXOR2"):
		case joaat("NIMBUS"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("VALKYRIE"):
		case joaat("TITAN"):
		case joaat("SKYLIFT"):
		case joaat("MILJET"):
		case joaat("BOMBUSHKA"):
		case joaat("VOLATOL"):
			return true;
		default:
			break;
	}
	return false;
}

int func_165(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, true), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_166(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, true), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

bool func_167(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	return false;
}

bool func_168(struct<2> Param0, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *iParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1049922[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049922[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*iParam3)[iVar2] = iVar0;
					(*iParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 146)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_145(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_169(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *iParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0 /*3*/], Global_1676377.f_488[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*iParam3)[iVar2] = iVar0;
				(*iParam4)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return true;
	}
	return false;
}

bool func_169(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_170(iParam0);
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_271 == iVar0)
	{
		return true;
	}
	iVar1 = Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
	if (iVar1 != func_57())
	{
		if (Global_1590535[iVar1 /*876*/].f_274.f_271 == iVar0)
		{
			return true;
		}
	}
	if (Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_5 == iParam0)
	{
		return true;
	}
	return false;
}

int func_170(bool bParam0)
{
	switch (bParam0)
	{
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 3;
		case 92:
			return 4;
		case 93:
			return 5;
		case 94:
			return 6;
		case 95:
			return 7;
		case 96:
			return 8;
		case 97:
			return 9;
	}
	return 0;
}

bool func_171(bool bParam0)
{
	if ((UNK_0x7D8B2A8F9EA82DB7(bParam0) || UNK_0xD1CC995EE5EB1EC1(bParam0)) || UNK_0xAD09C9A4B56FA133(bParam0))
	{
		return true;
	}
	return false;
}

void func_172(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_174(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_174(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_174(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_174(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		case 79:
			func_174(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_174(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_174(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_174(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		case 82:
			func_174(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_174(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_174(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_174(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		case 81:
			func_174(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_174(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_174(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_174(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		case 73:
			func_174(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_174(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_174(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_174(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		case 75:
			func_174(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_174(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_174(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_174(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		case 76:
			func_174(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_174(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_174(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_174(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		case 77:
			func_174(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_174(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_174(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_174(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		case 80:
			func_174(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_174(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_174(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_174(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		case 87:
			if (func_173())
			{
				func_174(-1608.297f, -556.875f, 33.406f, 310f);
				func_174(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_174(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_174(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_174(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_174(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_174(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_174(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_174(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_174(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_174(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_174(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		case 88:
			if (func_173())
			{
				func_174(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_174(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_174(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_174(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_174(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_174(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_174(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_174(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_174(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_174(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_174(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_174(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		case 89:
			if (func_173())
			{
				func_174(-102.737f, -597.379f, 35.053f, 160.999f);
				func_174(-97.793f, -589.568f, 35.082f, 134.799f);
				func_174(-110.357f, -619.402f, 35.055f, 160.599f);
				func_174(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_174(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_174(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_174(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_174(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_174(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_174(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_174(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_174(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		case 90:
			if (func_173())
			{
				func_174(-59.349f, -779.238f, 43.134f, 228.398f);
				func_174(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_174(-65.212f, -772.66f, 43.151f, 219.398f);
				func_174(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_174(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_174(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_174(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_174(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_174(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_174(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_174(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_174(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		case 91:
			func_174(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_174(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_174(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_174(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_174(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_174(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_174(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_174(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		case 92:
			func_174(-1464.5f, -927.9f, 9f, 296.7991f);
			func_174(-1466f, -926.1f, 9f, 296.7991f);
			func_174(-1467.9f, -924.7f, 9f, 296.7991f);
			func_174(-1469.7f, -923.7f, 9f, 296.7991f);
			func_174(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_174(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_174(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_174(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		case 93:
			func_174(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_174(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_174(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_174(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_174(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_174(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_174(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_174(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		case 94:
			func_174(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_174(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_174(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_174(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_174(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_174(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_174(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_174(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		case 95:
			func_174(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_174(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_174(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_174(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_174(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_174(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_174(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_174(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		case 96:
			func_174(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_174(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_174(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_174(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_174(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_174(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_174(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_174(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		case 97:
			func_174(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_174(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_174(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_174(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_174(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_174(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_174(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_174(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		case 98:
			func_174(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_174(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_174(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_174(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_174(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_174(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_174(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_174(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		case 99:
			func_174(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_174(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_174(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_174(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_174(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_174(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_174(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_174(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		case 100:
			func_174(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_174(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_174(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_174(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_174(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_174(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_174(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_174(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		case 101:
			func_174(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_174(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_174(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_174(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_174(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_174(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_174(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_174(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		case 102:
			func_174(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_174(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_174(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_174(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_174(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_174(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_174(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_174(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		default:
			break;
	}
}

bool func_173()
{
	return Global_2450632.f_15;
}

void func_174(vector3 vParam0, bool bParam3)
{
	if (Global_2405072.f_1746 < 101)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_1747[Global_2405072.f_1746 /*4*/] = { vParam0 };
		Global_2405072.f_1747[Global_2405072.f_1746 /*4*/].f_3 = bParam3;
		Global_2405072.f_1746++;
	}
}

int func_175(vector3 vParam0)
{
	int iVar0;

	if (SYSTEM::VDIST(Global_2405072.f_2895, vParam0) < Global_2405072.f_2903)
	{
		return Global_2405072.f_2898;
	}
	Global_2405072.f_2895 = { vParam0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (vParam0.z <= 0f)
		{
			vParam0.f_2 = ((Global_2412235[iVar0 /*7*/].f_2 + Global_2412235[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_120(vParam0, &(Global_2412235[iVar0 /*7*/])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

bool func_176()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_13, false) && !Global_2451426.f_6285)
	{
		return false;
	}
	return false;
}

bool func_177(struct<2> Param0, int iParam2, bool bParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_145(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0 /*3*/], Global_1676377.f_488[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return true;
	}
	return false;
}

void func_178()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

bool func_179(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (vVar1.z <= 0f)
		{
			vVar1.f_2 = ((Global_2412191[iVar0 /*7*/].f_2 + Global_2412191[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_120(vVar1, &(Global_2412191[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_131(&vVar1, Global_2412191[iVar0 /*7*/], Global_2412191[iVar0 /*7*/].f_3, Global_2412191[iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*uParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_180(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_184(UNK_0xD803B885F5E47A62(), 1))
			{
				return true;
			}
			if (!func_183(vParam0, 1008981770 /* Float: 0.01f */))
			{
				if (!func_137(&vParam0, 0, 0, 0, 1))
				{
					return true;
				}
				else if (func_137(&vParam0, 0, 1, 0, 1))
				{
					return true;
				}
			}
			else
			{
				iVar0 = func_182(vParam0, 1008981770 /* Float: 0.01f */);
				if (iVar0 > -1)
				{
					vVar1 = { func_181(&(Global_2405072.f_45[iVar0 /*12*/])) };
					if (!func_137(&vVar1, 0, 0, 0, 1))
					{
						if (!func_137(&vParam0, 0, 0, 0, 1))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

Vector3 func_181(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
	}
	return *uParam0;
}

int func_182(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_124(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_183(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_124(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_184(bool bParam0, bool bParam1)
{
	if (func_186() != 0)
	{
		return func_185(bParam0) != 0;
	}
	return func_102(bParam0, bParam1, 0);
}

int func_185(bool bParam0)
{
	if (func_1292(bParam0, 0, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_1;
	}
	return 0;
}

int func_186()
{
	return Global_30768;
}

void func_187()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

void func_188()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0x1727A44C562FBED2(Global_2405072.f_684[iVar0]))
		{
			if (UNK_0x0D0A574C76D769AC() == Global_2405072.f_684[iVar0])
			{
				if (!Global_2405072.f_680[iVar0] == -1)
				{
					if (UNK_0x23002DD5E7B94FD7(Global_2405072.f_680[iVar0]))
					{
						UNK_0xBD63401BCCEC233B(Global_2405072.f_680[iVar0]);
						Global_2405072.f_680[iVar0] = -1;
					}
					else
					{
						Global_2405072.f_680[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405072.f_680[iVar0] == -1)
		{
			Global_2405072.f_680[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_189(bool bParam0)
{
	if (UNK_0x757EF87A33649210())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_190(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2439138.f_1, bParam0);
	}
	return true;
}

Vector3 func_191(vector3 vParam0, var uParam3, float fParam4)
{
	vector3 vVar0;

	vVar0 = { 0f, 1f, 0f };
	func_192(vVar0, uParam3);
	vVar0.x = (vVar0.x * fParam4);
	vVar0.f_1 = (vVar0.y * fParam4);
	vVar0.f_2 = (vVar0.z * fParam4);
	vVar0 = { vVar0 + vParam0 };
	return vVar0;
}

Vector3 func_192(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

void func_193(bool bParam0)
{
	if (!func_431())
	{
		switch (Local_116.f_195)
		{
			case 0:
				UNK_0xC6A6B4DDD6DC073A(bParam0, false);
				break;
			case 1:
				UNK_0xC6A6B4DDD6DC073A(bParam0, 2);
				break;
			case 2:
				break;
		}
	}
	else
	{
		UNK_0xC002508A277213DE(bParam0, 15, true);
		UNK_0x58A0C35FA7CA6162(bParam0, false, 156);
	}
}

bool func_194(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			func_195(vParam2, bParam5, bParam1, bVar1);
			return true;
		}
	}
	return false;
}

void func_195(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (func_196(UNK_0xD803B885F5E47A62(), vParam0, bParam4) > -1)
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

int func_196(int iParam0, vector3 vParam1, bool bParam4)
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

int func_197()
{
	int iVar0;

	switch (Local_116.f_195)
	{
		case 0:
			iVar0 = joaat("MULE");
			break;
		case 1:
			iVar0 = joaat("MULE");
			break;
		case 2:
			iVar0 = joaat("MULE");
			break;
	}
	return iVar0;
}

void func_198()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!UNK_0xBFF81ED3B99522C7())
	{
		return;
	}
	if (func_431())
	{
		return;
	}
	if (Local_116.f_209 != 0)
	{
		return;
	}
	if (!func_11(&(Local_116.f_230)))
	{
		func_10(&(Local_116.f_230), 0, 0);
	}
	bVar1 = func_200();
	if (!func_6(&(Local_116.f_230), 15000, 0))
	{
		bVar0 = false;
		while (bVar0 < func_199())
		{
			iVar2 = 0;
			if (!UNK_0xE5DBF9B6126856CA(Local_116.f_199[bVar0]))
			{
				if (UNK_0xE75B31D140F2F10B(1))
				{
					if (func_62(bVar1))
					{
						if (!func_61(Local_116.f_179[bVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_48(Local_116.f_179[bVar0 /*5*/], 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_211, bVar0))
								{
									UNK_0x536F1BE96C726C4B(Local_116.f_179[bVar0 /*5*/], 5f, 1, 0, 0, true);
									UNK_0x5D96D8530B3D0904(&(Local_116.f_211), bVar0);
								}
								if (func_194(&(Local_116.f_199[bVar0]), bVar1, Local_116.f_179[bVar0 /*5*/], Local_116.f_179[bVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									UNK_0xC4B4C89FC0D48108(UNK_0xB177666FAB6F4417(Local_116.f_199[bVar0]), 1);
									func_193(UNK_0xB177666FAB6F4417(Local_116.f_199[bVar0]));
								}
							}
							else
							{
								if (UNK_0x558ADED8B93EA0F6(Local_116.f_179[bVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (UNK_0xEA19D5D9230DBB67(Local_116.f_179[bVar0 /*5*/], Local_116.f_179[bVar0 /*5*/].f_1, (Local_116.f_179[bVar0 /*5*/].f_2 + 1f), 1f) || UNK_0xEA19D5D9230DBB67(Local_116.f_179[bVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_211, bVar0))
									{
										UNK_0x536F1BE96C726C4B(Local_116.f_179[bVar0 /*5*/], 6f, 1, 0, 0, true);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_211), bVar0);
									}
								}
							}
						}
					}
				}
			}
			bVar0++;
		}
	}
}

int func_199()
{
	switch (Local_116.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 2;
		default:
			break;
	}
	return 3;
}

int func_200()
{
	int iVar0;

	switch (Local_116.f_195)
	{
		case 0:
			iVar0 = joaat("SPEEDO");
			break;
		case 1:
			iVar0 = joaat("BURRITO3");
			break;
		case 2:
			iVar0 = joaat("GBURRITO2");
			break;
	}
	return iVar0;
}

void func_201()
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 12))
	{
		return;
	}
	switch (Local_116.f_197)
	{
		case 0:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(31.1862f, -2594.657f, -50f, 68.0247f, -2551.956f, 50f, 1, 1, 1, 1);
			break;
		case 1:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-1109.664f, -1297.61f, -50f, -1074.653f, -1223.725f, 50f, 1, 1, 1, 1);
			break;
		case 2:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(859.394f, -1082.382f, -50f, 914.3219f, -1008.526f, 50f, 1, 1, 1, 1);
			break;
		case 3:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(240.8218f, -1997.975f, -50f, 243.8696f, -1933.894f, 50f, 1, 1, 1, 1);
			break;
		case 4:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, 1, 1, 1, 1);
			break;
		case 5:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-1059.294f, -2044.054f, -50f, -1011.896f, -1884.057f, 140.3546f, 1, 1, 1, 1);
			break;
		case 6:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-1284.743f, -836.3273f, -50f, -1246.317f, -774.2995f, 50f, 1, 1, 1, 1);
			break;
		case 7:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-924.5807f, -2758.87f, -50.9462f, -789.014f, -2731.518f, 112.94f, 1, 1, 1, 1);
			break;
		case 8:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(253.779f, -3039.713f, -50f, 308.8536f, -2986.068f, 50f, 1, 1, 1, 1);
			break;
		case 9:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(1515.631f, -2191.266f, -50f, 1597.112f, -2059.625f, 150f, 1, 1, 1, 1);
			break;
		case 10:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.349f, 50.0003f, 1, 1, 1, 1);
			break;
		case 11:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, 1, 1, 1, 1);
			break;
		case 12:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-564.2241f, -1836.488f, -50f, -498.0586f, -1768.227f, 50f, 1, 1, 1, 1);
			break;
		case 13:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-357.3719f, -1413.902f, -50f, -287.5592f, -1320.63f, 50f, 1, 1, 1, 1);
			break;
		case 14:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, 1, 1, 1, 1);
			break;
		case 15:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(883.963f, -1600.535f, -50f, 980.0828f, -1532.579f, 50f, 1, 1, 1, 1);
			break;
		case 16:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, 1, 1, 1, 1);
			break;
		case 17:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(931.0925f, -2203.321f, -50f, 1054.687f, -2104.696f, 50f, 1, 1, 1, 1);
			break;
		case 18:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(909.5201f, -2548.777f, -50f, 1079.576f, -2480.221f, 50f, 1, 1, 1, 1);
			break;
		case 19:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, 1, 1, 1, 1);
			break;
		case 20:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(490.689f, -2005.857f, -50f, 557.8708f, -1886.362f, 124.4746f, 1, 1, 1, 1);
			break;
		case 21:
			Local_116.f_261 = UNK_0x7D6CA5F52B3748BF(88.2044f, -2235.053f, -50f, 199.7525f, -2183.485f, 50f, 1, 1, 1, 1);
			break;
	}
	UNK_0x5D96D8530B3D0904(&(Local_116.f_1), 12);
}

void func_202()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (Local_116.f_223 == 0)
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
		vVar3 = { func_203() };
		fVar6 = UNK_0x0EB28750412C3A5A(vVar0, vVar3, 0);
		if (fVar6 > 2500f)
		{
			Local_116.f_223 = Global_262145.f_16134;
		}
		else if (fVar6 > 2000f)
		{
			Local_116.f_223 = Global_262145.f_16135;
		}
		else if (fVar6 > 1500f)
		{
			Local_116.f_223 = Global_262145.f_16136;
		}
		else if (fVar6 > 1000f)
		{
			Local_116.f_223 = Global_262145.f_16137;
		}
		else
		{
			Local_116.f_223 = Global_262145.f_16138;
		}
	}
}

Vector3 func_203()
{
	switch (Local_116.f_197)
	{
		case 0:
			return 57.4898f, -2566.763f, 5.2753f;
		case 1:
			return -1080.198f, -1262.176f, 4.6922f;
		case 2:
			return 902.1754f, -1028.345f, 33.9666f;
		case 3:
			return 248.97f, -1955.611f, 22.1629f;
		case 4:
			return -420.2774f, 183.9635f, 79.5661f;
		case 5:
			return -1048.901f, -2013.738f, 12.1616f;
		case 6:
			return -1269.405f, -811.931f, 16.1114f;
		case 7:
			return -872.9662f, -2735.341f, 12.9538f;
		case 8:
			return 273.7365f, -3019.411f, 4.7024f;
		case 9:
			return 1561.409f, -2134.272f, 76.4751f;
		case 10:
			return -304.1417f, -2695.407f, 5.0003f;
		case 11:
			return 504.3576f, -651.182f, 23.7512f;
		case 12:
			return -529.7162f, -1779.501f, 20.3865f;
		case 13:
			return -297.2056f, -1362.507f, 30.2971f;
		case 14:
			return 346.6934f, 338.6926f, 104.2013f;
		case 15:
			return 962.1667f, -1557.684f, 29.8012f;
		case 16:
			return 749.9839f, -887.2051f, 24.0879f;
		case 17:
			return 1008.78f, -2144.658f, 29.5516f;
		case 18:
			return 1010.923f, -2523.426f, 27.3091f;
		case 19:
			return -259.173f, 200.7894f, 84.0941f;
		case 20:
			return 540.001f, -1945.595f, 23.9847f;
		case 21:
			return 95.5855f, -2215.18f, 5.1712f;
		default:
			break;
	}
	return 941.8403f, -1560.594f, 30.9244f;
}

void func_204()
{
	int iVar0;

	if (!func_61(Local_116.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_205();
	iVar0 = func_1173();
	switch (iVar0)
	{
		case 99:
			switch (Local_116.f_197)
			{
				case 0:
					Local_116.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.375f, 5f };
					Local_116.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				case 1:
					Local_116.f_2[0 /*10*/].f_5 = { -1065.693f, -1275.444f, 4.9818f };
					Local_116.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				case 2:
					Local_116.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.347f, 33.8966f };
					Local_116.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				case 3:
					Local_116.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.578f, 22.4437f };
					Local_116.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				case 4:
					Local_116.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_116.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				case 5:
					Local_116.f_2[0 /*10*/].f_5 = { -1086.639f, -2005.462f, 12.0063f };
					Local_116.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				case 6:
					Local_116.f_2[0 /*10*/].f_5 = { -1244.429f, -884.493f, 11.165f };
					Local_116.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				case 7:
					Local_116.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.999f, 12.9249f };
					Local_116.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				case 8:
					Local_116.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.953f, 4.9212f };
					Local_116.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				case 9:
					Local_116.f_2[0 /*10*/].f_5 = { 1413.249f, -1954.944f, 64.6238f };
					Local_116.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				case 10:
					Local_116.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.678f, 5.0502f };
					Local_116.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				case 11:
					Local_116.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_116.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				case 12:
					Local_116.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.964f, 20.3834f };
					Local_116.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				case 13:
					Local_116.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.238f, 30.3043f };
					Local_116.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				case 14:
					Local_116.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_116.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				case 15:
					Local_116.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_116.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				case 16:
					Local_116.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_116.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				case 17:
					Local_116.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.759f, 30.2136f };
					Local_116.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				case 18:
					Local_116.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.676f, 27.3773f };
					Local_116.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				case 19:
					Local_116.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_116.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				case 20:
					Local_116.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.892f, 23.6765f };
					Local_116.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				case 21:
					Local_116.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_116.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				default:
					Local_116.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_116.f_2[0 /*10*/].f_8 = 4.069f;
					break;
			}
			break;
		case 0:
			switch (Local_116.f_197)
			{
				case 0:
					Local_116.f_103[0 /*5*/] = { 48.6581f, -2562.141f, 5f };
					Local_116.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_116.f_103[1 /*5*/] = { 51.6031f, -2571.123f, 5.0046f };
					Local_116.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_116.f_103[2 /*5*/] = { 56.6838f, -2564.757f, 5.0641f };
					Local_116.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_116.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_116.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_116.f_103[4 /*5*/] = { 65.0669f, -2563.442f, 5f };
					Local_116.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_116.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_116.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_116.f_179[0 /*5*/] = { 61.478f, -2560.506f, 5f };
					Local_116.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_116.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_116.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				case 1:
					Local_116.f_103[0 /*5*/] = { -1078.744f, -1271.7f, 9.5625f };
					Local_116.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_116.f_103[1 /*5*/] = { -1087.233f, -1257.104f, 9.5625f };
					Local_116.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_116.f_103[2 /*5*/] = { -1072.724f, -1267.841f, 4.9577f };
					Local_116.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_116.f_103[3 /*5*/] = { -1085.99f, -1254.825f, 4.431f };
					Local_116.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_116.f_103[4 /*5*/] = { -1081.952f, -1259.029f, 4.5607f };
					Local_116.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_116.f_103[5 /*5*/] = { -1063.538f, -1257.842f, 5.0206f };
					Local_116.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_116.f_179[0 /*5*/] = { -1063.267f, -1260.492f, 5.0582f };
					Local_116.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_116.f_179[1 /*5*/] = { -1080.071f, -1255.526f, 4.4927f };
					Local_116.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				case 2:
					Local_116.f_103[0 /*5*/] = { 902.5689f, -1021.511f, 33.9664f };
					Local_116.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_116.f_103[1 /*5*/] = { 894.0451f, -1020.726f, 33.9665f };
					Local_116.f_103[1 /*5*/].f_3 = 303.745f;
					Local_116.f_103[2 /*5*/] = { 901.3245f, -1033.82f, 33.9661f };
					Local_116.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_116.f_103[3 /*5*/] = { 909.4354f, -1035.19f, 33.9662f };
					Local_116.f_103[3 /*5*/].f_3 = 175.276f;
					Local_116.f_103[4 /*5*/] = { 900.9361f, -1044.508f, 38.9808f };
					Local_116.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_116.f_103[5 /*5*/] = { 894.3841f, -1032.681f, 38.9808f };
					Local_116.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_116.f_179[0 /*5*/] = { 900.9302f, -1019.053f, 33.967f };
					Local_116.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_116.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_116.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				case 3:
					Local_116.f_103[0 /*5*/] = { 241.6933f, -1941.756f, 22.6063f };
					Local_116.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_116.f_103[1 /*5*/] = { 247.0794f, -1955.052f, 22.2033f };
					Local_116.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_116.f_103[2 /*5*/] = { 260.179f, -1959.165f, 22.0967f };
					Local_116.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_116.f_103[3 /*5*/] = { 258.183f, -1967.262f, 21.487f };
					Local_116.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_116.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_116.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_116.f_103[5 /*5*/] = { 233.8911f, -1946.98f, 27.2402f };
					Local_116.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_116.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_116.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_116.f_179[1 /*5*/] = { 241.5964f, -1944.464f, 22.3678f };
					Local_116.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				case 4:
					Local_116.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_116.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_116.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_116.f_103[1 /*5*/].f_3 = 228.321f;
					Local_116.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_116.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_116.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_116.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_116.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_116.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_116.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_116.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_116.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_116.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_116.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_116.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				case 5:
					Local_116.f_103[0 /*5*/] = { -1069.206f, -2014.558f, 12.1616f };
					Local_116.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_116.f_103[1 /*5*/] = { -1063.069f, -2014.715f, 12.1616f };
					Local_116.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_116.f_103[2 /*5*/] = { -1067.427f, -2023.773f, 12.2027f };
					Local_116.f_103[2 /*5*/].f_3 = 197.023f;
					Local_116.f_103[3 /*5*/] = { -1060.439f, -2024.766f, 12.1616f };
					Local_116.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_116.f_103[4 /*5*/] = { -1052.16f, -2022.239f, 12.1616f };
					Local_116.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_116.f_103[5 /*5*/] = { -1051.755f, -2029.141f, 12.1616f };
					Local_116.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_116.f_103[6 /*5*/] = { -1073.135f, -2011.029f, 12.6172f };
					Local_116.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_116.f_103[7 /*5*/] = { -1071.441f, -2002.931f, 14.7905f };
					Local_116.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_116.f_179[0 /*5*/] = { -1052.354f, -2025.611f, 12.1616f };
					Local_116.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_116.f_179[1 /*5*/] = { -1066.611f, -2016.299f, 12.1616f };
					Local_116.f_179[1 /*5*/].f_3 = 280.333f;
					Local_116.f_179[2 /*5*/] = { -1063.965f, -2024.623f, 12.1831f };
					Local_116.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				case 6:
					Local_116.f_103[0 /*5*/] = { -1280.076f, -805.8421f, 16.508f };
					Local_116.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_116.f_103[1 /*5*/] = { -1286.231f, -811.6383f, 16.4521f };
					Local_116.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_116.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_116.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_116.f_103[3 /*5*/] = { -1267.488f, -824.3138f, 16.0992f };
					Local_116.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_116.f_103[4 /*5*/] = { -1262.181f, -824.9617f, 16.0996f };
					Local_116.f_103[4 /*5*/].f_3 = 39.795f;
					Local_116.f_103[5 /*5*/] = { -1287.23f, -791.7753f, 16.5858f };
					Local_116.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_116.f_179[0 /*5*/] = { -1273.327f, -823.6479f, 16.0992f };
					Local_116.f_179[0 /*5*/].f_3 = 254.419f;
					Local_116.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_116.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				case 7:
					Local_116.f_103[0 /*5*/] = { -886.5272f, -2713.691f, 12.8285f };
					Local_116.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_116.f_103[1 /*5*/] = { -876.2014f, -2718.661f, 12.9446f };
					Local_116.f_103[1 /*5*/].f_3 = 335.853f;
					Local_116.f_103[2 /*5*/] = { -882.2947f, -2732.553f, 12.8285f };
					Local_116.f_103[2 /*5*/].f_3 = 33.564f;
					Local_116.f_103[3 /*5*/] = { -884.4581f, -2724.486f, 12.8285f };
					Local_116.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_116.f_103[4 /*5*/] = { -887.4197f, -2737.267f, 12.8285f };
					Local_116.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_116.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_116.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_116.f_103[6 /*5*/] = { -897.211f, -2750.013f, 12.9445f };
					Local_116.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_116.f_103[7 /*5*/] = { -882.6691f, -2745.853f, 12.9362f };
					Local_116.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_116.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_116.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_116.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_116.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_116.f_179[0 /*5*/] = { -882.8745f, -2713.687f, 12.8285f };
					Local_116.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_116.f_179[1 /*5*/] = { -883.874f, -2728.786f, 12.8285f };
					Local_116.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_116.f_179[2 /*5*/] = { -891.2535f, -2737.411f, 12.8285f };
					Local_116.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				case 8:
					Local_116.f_103[0 /*5*/] = { 258.4958f, -3019.888f, 4.7612f };
					Local_116.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_116.f_103[1 /*5*/] = { 273.9505f, -3013.159f, 4.7016f };
					Local_116.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_116.f_103[2 /*5*/] = { 273.0544f, -3016.924f, 4.7049f };
					Local_116.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_116.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_116.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_116.f_103[4 /*5*/] = { 277.7727f, -3020.606f, 10.5614f };
					Local_116.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_116.f_103[5 /*5*/] = { 277.1279f, -3034.719f, 10.5614f };
					Local_116.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_116.f_179[0 /*5*/] = { 266.3998f, -3022.136f, 4.7302f };
					Local_116.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_116.f_179[1 /*5*/] = { 270.9944f, -2999.383f, 4.7128f };
					Local_116.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				case 9:
					Local_116.f_103[0 /*5*/] = { 1546.335f, -2124.289f, 76.1382f };
					Local_116.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_116.f_103[1 /*5*/] = { 1554.385f, -2125.222f, 76.3125f };
					Local_116.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_116.f_103[2 /*5*/] = { 1558.224f, -2118.532f, 76.3765f };
					Local_116.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_116.f_103[3 /*5*/] = { 1547.75f, -2143.708f, 76.4844f };
					Local_116.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_116.f_103[4 /*5*/] = { 1552.05f, -2147.172f, 76.5383f };
					Local_116.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_116.f_103[5 /*5*/] = { 1563.341f, -2138.102f, 76.5841f };
					Local_116.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_116.f_103[6 /*5*/] = { 1561.244f, -2133.029f, 76.4828f };
					Local_116.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_116.f_103[7 /*5*/] = { 1569.277f, -2130.628f, 77.3351f };
					Local_116.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_116.f_179[0 /*5*/] = { 1550.601f, -2145.957f, 76.5271f };
					Local_116.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_116.f_179[1 /*5*/] = { 1563.138f, -2135.943f, 76.5206f };
					Local_116.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_116.f_179[2 /*5*/] = { 1550.38f, -2123.159f, 76.2165f };
					Local_116.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				case 10:
					Local_116.f_103[0 /*5*/] = { -307.7643f, -2684.145f, 5.0079f };
					Local_116.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_116.f_103[1 /*5*/] = { -298.4151f, -2685.329f, 5.1595f };
					Local_116.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_116.f_103[2 /*5*/] = { -309.9699f, -2692.377f, 5.1532f };
					Local_116.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_116.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_116.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_116.f_103[4 /*5*/] = { -307.4792f, -2699.072f, 5.0003f };
					Local_116.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_116.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_116.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_116.f_103[6 /*5*/] = { -306.5913f, -2707.836f, 5.1532f };
					Local_116.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_116.f_103[7 /*5*/] = { -303.2011f, -2711.413f, 5.0003f };
					Local_116.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_116.f_179[0 /*5*/] = { -304.9815f, -2709.62f, 5.0003f };
					Local_116.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_116.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_116.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_116.f_179[2 /*5*/] = { -303.8944f, -2685.304f, 5.0003f };
					Local_116.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				case 11:
					Local_116.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_116.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_116.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_116.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_116.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_116.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_116.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_116.f_103[3 /*5*/].f_3 = 303.125f;
					Local_116.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_116.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_116.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_116.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_116.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_116.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_116.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_116.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_116.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_116.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_116.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_116.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_116.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_116.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				case 12:
					Local_116.f_103[0 /*5*/] = { -546.3519f, -1769.694f, 20.5902f };
					Local_116.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_116.f_103[1 /*5*/] = { -541.7958f, -1776.458f, 20.5973f };
					Local_116.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_116.f_103[2 /*5*/] = { -534.571f, -1772.565f, 20.4432f };
					Local_116.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_116.f_103[3 /*5*/] = { -527.7571f, -1776.274f, 20.367f };
					Local_116.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_116.f_103[4 /*5*/] = { -531.6744f, -1781.516f, 20.4994f };
					Local_116.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_116.f_103[5 /*5*/] = { -555.2966f, -1799.182f, 21.5471f };
					Local_116.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_116.f_103[6 /*5*/] = { -549.1064f, -1786.567f, 21.012f };
					Local_116.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_116.f_103[7 /*5*/] = { -518.8139f, -1785.754f, 20.6425f };
					Local_116.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_116.f_179[0 /*5*/] = { -556.8245f, -1795.383f, 21.5195f };
					Local_116.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_116.f_179[1 /*5*/] = { -531.0875f, -1774.35f, 20.4042f };
					Local_116.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_116.f_179[2 /*5*/] = { -548.1949f, -1767.868f, 20.6224f };
					Local_116.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				case 13:
					Local_116.f_103[0 /*5*/] = { -295.7925f, -1366.301f, 30.3114f };
					Local_116.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_116.f_103[1 /*5*/] = { -294.7914f, -1361.439f, 30.3099f };
					Local_116.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_116.f_103[2 /*5*/] = { -294.8237f, -1355.167f, 30.3168f };
					Local_116.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_116.f_103[3 /*5*/] = { -291.4968f, -1352.201f, 30.2753f };
					Local_116.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_116.f_103[4 /*5*/] = { -294.7546f, -1345.713f, 30.3095f };
					Local_116.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_116.f_103[5 /*5*/] = { -291.2322f, -1339.262f, 30.2775f };
					Local_116.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_116.f_103[6 /*5*/] = { -295.7278f, -1331.49f, 30.3084f };
					Local_116.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_116.f_103[7 /*5*/] = { -293.849f, -1328.756f, 30.2182f };
					Local_116.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_116.f_179[0 /*5*/] = { -292.8152f, -1332.385f, 30.1537f };
					Local_116.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_116.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_116.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_116.f_179[2 /*5*/] = { -295.23f, -1364.201f, 30.3097f };
					Local_116.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				case 14:
					Local_116.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_116.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_116.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_116.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_116.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_116.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_116.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_116.f_103[3 /*5*/].f_3 = 257.871f;
					Local_116.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_116.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_116.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_116.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_116.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_116.f_103[6 /*5*/].f_3 = 201.951f;
					Local_116.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_116.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_116.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_116.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_116.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_116.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_116.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_116.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				case 15:
					Local_116.f_103[0 /*5*/] = { 962.8411f, -1572.776f, 29.5579f };
					Local_116.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_116.f_103[1 /*5*/] = { 958.9659f, -1572.392f, 29.6097f };
					Local_116.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_116.f_103[2 /*5*/] = { 974.9329f, -1566.858f, 29.5658f };
					Local_116.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_116.f_103[3 /*5*/] = { 977.1616f, -1563.333f, 29.6385f };
					Local_116.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_116.f_103[4 /*5*/] = { 961.7667f, -1559.233f, 29.8001f };
					Local_116.f_103[4 /*5*/].f_3 = 241.449f;
					Local_116.f_103[5 /*5*/] = { 961.8814f, -1556.363f, 29.807f };
					Local_116.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_116.f_103[6 /*5*/] = { 968.3688f, -1552.087f, 29.6598f };
					Local_116.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_116.f_103[7 /*5*/] = { 965.8116f, -1547.661f, 29.6223f };
					Local_116.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_116.f_103[8 /*5*/] = { 957.9225f, -1553.855f, 33.7974f };
					Local_116.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_116.f_103[9 /*5*/] = { 957.7077f, -1566.216f, 33.7974f };
					Local_116.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_116.f_179[0 /*5*/] = { 965.2025f, -1549.952f, 29.6078f };
					Local_116.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_116.f_179[1 /*5*/] = { 974.5963f, -1564.88f, 29.5937f };
					Local_116.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_116.f_179[2 /*5*/] = { 960.7539f, -1572.775f, 29.6016f };
					Local_116.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				case 16:
					Local_116.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_116.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_116.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_116.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_116.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_116.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_116.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_116.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_116.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_116.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_116.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_116.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_116.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_116.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_116.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_116.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_116.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_116.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_116.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_116.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_116.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_116.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_116.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_116.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_116.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_116.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				case 17:
					Local_116.f_103[0 /*5*/] = { 1003.053f, -2149.714f, 37.3448f };
					Local_116.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_116.f_103[1 /*5*/] = { 1010.169f, -2135.276f, 29.5516f };
					Local_116.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_116.f_103[2 /*5*/] = { 1011.614f, -2142.546f, 29.5516f };
					Local_116.f_103[2 /*5*/].f_3 = 2.675f;
					Local_116.f_103[3 /*5*/] = { 1018.429f, -2145.479f, 29.5994f };
					Local_116.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_116.f_103[4 /*5*/] = { 1020.569f, -2148.083f, 30.5334f };
					Local_116.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_116.f_103[5 /*5*/] = { 1011.448f, -2146.674f, 29.5516f };
					Local_116.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_116.f_103[6 /*5*/] = { 1013.688f, -2150.349f, 30.5334f };
					Local_116.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_116.f_103[7 /*5*/] = { 1011.563f, -2153.055f, 29.5516f };
					Local_116.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_116.f_103[8 /*5*/] = { 1008.21f, -2156.475f, 29.5516f };
					Local_116.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_116.f_103[9 /*5*/] = { 1007.324f, -2161.736f, 29.5516f };
					Local_116.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_116.f_179[0 /*5*/] = { 1007.872f, -2138.394f, 29.5516f };
					Local_116.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_116.f_179[1 /*5*/] = { 1013.982f, -2145.138f, 29.5516f };
					Local_116.f_179[1 /*5*/].f_3 = 259.47f;
					Local_116.f_179[2 /*5*/] = { 1008.767f, -2160.593f, 29.5516f };
					Local_116.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				case 18:
					Local_116.f_103[0 /*5*/] = { 1016.825f, -2498.752f, 27.3493f };
					Local_116.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_116.f_103[1 /*5*/] = { 996.0087f, -2540.799f, 27.3073f };
					Local_116.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_116.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_116.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_116.f_103[3 /*5*/] = { 1012.715f, -2506.288f, 27.302f };
					Local_116.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_116.f_103[4 /*5*/] = { 996.7639f, -2512.485f, 27.302f };
					Local_116.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_116.f_103[5 /*5*/] = { 1015.915f, -2514.646f, 27.3035f };
					Local_116.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_116.f_103[6 /*5*/] = { 1011.236f, -2524.491f, 27.3083f };
					Local_116.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_116.f_103[7 /*5*/] = { 1006.954f, -2527.826f, 27.3043f };
					Local_116.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_116.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_116.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_116.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_116.f_103[9 /*5*/].f_3 = 125.381f;
					Local_116.f_179[0 /*5*/] = { 1012.638f, -2502.169f, 27.302f };
					Local_116.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_116.f_179[1 /*5*/] = { 1013.986f, -2523.53f, 27.3055f };
					Local_116.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_116.f_179[2 /*5*/] = { 996.9083f, -2523.664f, 27.302f };
					Local_116.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				case 19:
					Local_116.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_116.f_103[0 /*5*/].f_3 = 121.811f;
					Local_116.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_116.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_116.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_116.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_116.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_116.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_116.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_116.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_116.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_116.f_103[5 /*5*/].f_3 = 103.808f;
					Local_116.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_116.f_103[6 /*5*/].f_3 = 262.768f;
					Local_116.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_116.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_116.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_116.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_116.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_116.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_116.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_116.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_116.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_116.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_116.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_116.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				case 20:
					Local_116.f_103[0 /*5*/] = { 534.4465f, -1941.385f, 30.2292f };
					Local_116.f_103[0 /*5*/].f_3 = 311.177f;
					Local_116.f_103[1 /*5*/] = { 558.1476f, -1927.909f, 23.7833f };
					Local_116.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_116.f_103[2 /*5*/] = { 546.3505f, -1928.6f, 23.8219f };
					Local_116.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_116.f_103[3 /*5*/] = { 547.1193f, -1947.377f, 23.9851f };
					Local_116.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_116.f_103[4 /*5*/] = { 572.5258f, -1930.575f, 23.7494f };
					Local_116.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_116.f_103[5 /*5*/] = { 539.3912f, -1923.777f, 23.9851f };
					Local_116.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_116.f_103[6 /*5*/] = { 563.26f, -1920.301f, 23.7598f };
					Local_116.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_116.f_103[7 /*5*/] = { 533.5303f, -1938.4f, 23.9851f };
					Local_116.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_116.f_179[0 /*5*/] = { 548.8199f, -1930.106f, 23.8175f };
					Local_116.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_116.f_179[1 /*5*/] = { 551.0328f, -1946.83f, 23.9851f };
					Local_116.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_116.f_179[2 /*5*/] = { 561.5193f, -1927.552f, 23.7627f };
					Local_116.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				case 21:
					Local_116.f_103[0 /*5*/] = { 110.1075f, -2228.434f, 5.1712f };
					Local_116.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_116.f_103[1 /*5*/] = { 109.2036f, -2234.949f, 5.0633f };
					Local_116.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_116.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_116.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_116.f_103[3 /*5*/] = { 89.8902f, -2221.848f, 5.0483f };
					Local_116.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_116.f_103[4 /*5*/] = { 119.3045f, -2188.549f, 4.9608f };
					Local_116.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_116.f_103[5 /*5*/] = { 135.5824f, -2185.041f, 5.0909f };
					Local_116.f_103[5 /*5*/].f_3 = 248.253f;
					Local_116.f_103[6 /*5*/] = { 102.5402f, -2183.203f, 4.953f };
					Local_116.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_116.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_116.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_116.f_103[8 /*5*/] = { 95.4634f, -2193.558f, 5.0313f };
					Local_116.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_116.f_103[9 /*5*/] = { 99.6321f, -2203.004f, 5.181f };
					Local_116.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_116.f_179[0 /*5*/] = { 95.909f, -2196.279f, 5.0431f };
					Local_116.f_179[0 /*5*/].f_3 = 139.258f;
					Local_116.f_179[1 /*5*/] = { 120.4857f, -2191.816f, 5.0209f };
					Local_116.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_116.f_179[2 /*5*/] = { 109.2645f, -2231.557f, 5.0333f };
					Local_116.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				default:
					Local_116.f_103[0 /*5*/] = { 968.5941f, -1557.899f, 29.6842f };
					Local_116.f_103[0 /*5*/].f_3 = 114.28f;
					Local_116.f_103[1 /*5*/] = { 965.9659f, -1571.214f, 29.5878f };
					Local_116.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_116.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_116.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_116.f_103[3 /*5*/] = { 939.3943f, -1575.787f, 29.345f };
					Local_116.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_116.f_103[4 /*5*/] = { 928.4522f, -1577.374f, 29.4239f };
					Local_116.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_116.f_103[5 /*5*/] = { 921.6147f, -1573.96f, 29.6373f };
					Local_116.f_103[5 /*5*/].f_3 = 337.606f;
					Local_116.f_103[6 /*5*/] = { 920.303f, -1564.142f, 29.7523f };
					Local_116.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_116.f_103[7 /*5*/] = { 918.5511f, -1552.143f, 29.7808f };
					Local_116.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_116.f_103[8 /*5*/] = { 922.5096f, -1543.686f, 29.8074f };
					Local_116.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_116.f_103[9 /*5*/] = { 910.6829f, -1547.757f, 29.6528f };
					Local_116.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_116.f_103[10 /*5*/] = { 910.2541f, -1557.902f, 29.7034f };
					Local_116.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_116.f_103[11 /*5*/] = { 909.9764f, -1572.07f, 29.791f };
					Local_116.f_103[11 /*5*/].f_3 = 287.341f;
					Local_116.f_179[0 /*5*/] = { 912.0468f, -1562.435f, 29.7522f };
					Local_116.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_116.f_179[1 /*5*/] = { 903.5677f, -1559.325f, 29.6796f };
					Local_116.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_116.f_179[2 /*5*/] = { 970.6998f, -1558.555f, 29.6813f };
					Local_116.f_179[2 /*5*/].f_3 = 43.0116f;
					break;
			}
			break;
	}
}

var func_205()
{
	if (Local_116.f_195 != -1)
	{
		return Local_116.f_195;
	}
	Local_116.f_195 = UNK_0x09AC81E49EA267F7(false, 3);
	return Local_116.f_195;
}

bool func_206(var uParam0)
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

void func_207(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_208()
{
	bool bVar0;

	func_213();
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_740, 9))
	{
		return;
	}
	if (func_1175())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, false))
		{
			UNK_0x7352ACF3368DF65F("DisableFlightMusic", 1);
			UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
			UNK_0x5D96D8530B3D0904(&bLocal_740, false);
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, true))
		{
			if (!func_431())
			{
				bVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				bVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (UNK_0xC92DB9682A650680(bVar0))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_740, true);
			}
		}
		if (!func_431())
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 3))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 13))
				{
					if (UNK_0xC92DB9682A650680("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_740, 3);
					}
				}
			}
		}
		if (!func_431())
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, true))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 4))
				{
					if (UNK_0xC92DB9682A650680("EXEC1_UNDER_ATTACK_STOP"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_740, 4);
					}
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 6))
		{
			if ((((UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 3) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 15)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 5)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 9)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 8))
			{
				if (UNK_0xC92DB9682A650680("EXEC1_UNDER_ATTACK_FAIL"))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_740, 6);
				}
			}
		}
		if (func_431())
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 16))
			{
				if (Local_116.f_215 == -1)
				{
					if (func_209("DCONTRA_OBJ4"))
					{
						if (UNK_0xC92DB9682A650680("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_740, 16);
						}
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 17))
			{
				if (Local_116.f_215 != -1)
				{
					if (UNK_0xC92DB9682A650680("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_740, 17);
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 18))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4))
				{
					if (UNK_0xC92DB9682A650680("EXEC1_DEFEND_FLEEING_STOP"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_740, 18);
					}
				}
			}
		}
	}
}

bool func_209(bool bParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (!func_212())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		if (UNK_0x7724E025FD444F45(bParam0) > 63)
		{
			return false;
		}
	}
	else if (UNK_0x7724E025FD444F45(bParam0) > 23)
	{
		return false;
	}
	return func_210(bParam0);
}

bool func_210(bool bParam0)
{
	if (!func_212())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_211(bParam0);
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_211(bool bParam0)
{
	if (!func_212())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

bool func_212()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

void func_213()
{
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_740, 8))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_740, 9))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 10))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_740, 11))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 12))
					{
						UNK_0xBEF52C1D400C0A44(1);
						UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 15))
				{
					if (UNK_0xC92DB9682A650680("APT_COUNTDOWN_30S_KILL"))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_740, 15);
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_740, 15))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 13))
					{
						if (UNK_0xC92DB9682A650680("APT_FADE_IN_RADIO"))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_740, 13);
						}
					}
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_740, 13))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_740, 10);
					}
				}
			}
		}
	}
}

void func_214()
{
	vector3 vVar0;
	float fVar3;

	if (!func_1175() && !func_429())
	{
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 15))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 16))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x02A813E6E0380440() == 0)
				{
					UNK_0x34D79252800B23FF(5);
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 2, 0);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
					UNK_0x5D96D8530B3D0904(&bLocal_739, 16);
				}
			}
		}
		return;
	}
	if (func_431())
	{
		if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), false) };
		}
	}
	else
	{
		vVar0 = { func_40() };
	}
	fVar3 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar0);
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 17))
	{
		if (fVar3 < 250000f)
		{
			UNK_0x34D79252800B23FF(0);
			UNK_0x5D96D8530B3D0904(&bLocal_739, 17);
		}
	}
	else if (fVar3 > 360000f)
	{
		UNK_0x34D79252800B23FF(5);
		UNK_0x0674E58A79778E99(&bLocal_739, 17);
	}
}

void func_215()
{
	vector3 vVar0;

	if (!func_1175() && !func_429())
	{
		return;
	}
	if (func_431())
	{
		if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), false) };
		}
	}
	else
	{
		vVar0 = { func_40() };
	}
	if (!func_61(vVar0, 0f, 0f, 0f, 0))
	{
		func_216(169, vVar0, &uLocal_854, 1140457472 /* Float: 500f */, 1144750080 /* Float: 750f */, 0);
	}
}

void func_216(int iParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;
	float fVar1;

	if ((((func_271(UNK_0xD803B885F5E47A62()) && !func_270(UNK_0xD803B885F5E47A62())) && !UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 8)) && (func_269(UNK_0xD803B885F5E47A62()) || func_268(UNK_0xD803B885F5E47A62()))) || func_39(vParam1))
	{
		return;
	}
	Global_1674347 = { vParam1 };
	fVar0 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vParam1);
	func_266(iParam0, fVar0);
	if (UNK_0x798A3F1296751F46() && UNK_0x8BB17FEBE0394018() == 15)
	{
		if (func_265(UNK_0xD803B885F5E47A62()) || func_263(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0x70305AA977EFE679(1344549371))
			{
				UNK_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (UNK_0x70305AA977EFE679(1344549371))
		{
			UNK_0x64366F76B4845277(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_262(UNK_0xD803B885F5E47A62(), 21) || func_262(UNK_0xD803B885F5E47A62(), 25)))
		{
			func_261(vParam1, 1, 0);
		}
		if (!*iParam4 && func_1292(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			*iParam4 = 1;
			if (func_260(iParam0))
			{
				UNK_0x51B096AAC60548C1(func_259(iParam0));
				if (func_258(iParam0, -1))
				{
					UNK_0x34D79252800B23FF(0);
					if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
					{
						UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 1);
						UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 1);
					}
					UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), false);
				}
			}
			if (func_257(iParam0))
			{
				fVar1 = func_256(iParam0);
				if (fVar1 != 1f)
				{
					func_253(fVar1);
					UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), true);
				}
			}
			if (!Global_2391045)
			{
				if (func_252(iParam0) && func_265(UNK_0xD803B885F5E47A62()))
				{
					func_250(1);
					func_249(2);
				}
			}
			func_248(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_247(UNK_0xD803B885F5E47A62(), 19))
			{
				func_246(19);
			}
		}
		if (*iParam4 && func_1292(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			*iParam4 = 0;
			if (func_260(iParam0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, false))
				{
					UNK_0x51B096AAC60548C1(1f);
					UNK_0x34D79252800B23FF(5);
					UNK_0x0674E58A79778E99(&(Global_1674347.f_3), false);
				}
			}
			if (func_257(iParam0))
			{
				func_245();
				UNK_0x0674E58A79778E99(&(Global_1674347.f_3), true);
			}
			if (bParam7 && !func_271(UNK_0xD803B885F5E47A62()))
			{
				if (func_243(UNK_0xD803B885F5E47A62()) != 152)
				{
					func_219();
				}
			}
			if (func_218(2))
			{
				func_250(0);
				func_217(2);
			}
		}
	}
}

void func_217(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_45), bParam0);
}

bool func_218(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_45, bParam0);
}

void func_219()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_24), &Global_2409327, 2);
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_26), &Global_2409329, 19);
	func_241();
	func_222(1, 1, 0);
	func_220();
}

void func_220()
{
	func_221(0, 0);
}

void func_221(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_222(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_240();
	}
	if (!bParam2)
	{
		func_225(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
	}
	func_224(0);
	func_223();
}

void func_223()
{
	struct<6> Var0;

	if (Global_2405072.f_487.f_1 == UNK_0x0D0A574C76D769AC())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_224(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_225(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_239())
		{
			func_238();
		}
		Global_2405072.f_706.f_518 = UNK_0x0D0A574C76D769AC();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_236();
		func_229(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_226();
	}
}

void func_226()
{
	if (func_239() && !func_228())
	{
		func_238();
	}
	if (func_228())
	{
		func_227();
	}
	else
	{
		func_236();
		func_229(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_227()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

bool func_228()
{
	if ((Global_2405072.f_1744 && !UNK_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && UNK_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return true;
	}
	return false;
}

void func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_57())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, false) && func_230())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = UNK_0x0D0A574C76D769AC();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

bool func_230()
{
	if ((((((func_243(UNK_0xD803B885F5E47A62()) == 229 || func_243(UNK_0xD803B885F5E47A62()) == 191) || func_235()) || func_234()) || func_233(UNK_0xD803B885F5E47A62())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_231(UNK_0xD803B885F5E47A62())))
	{
		return false;
	}
	return true;
}

int func_231(int iParam0)
{
	if (func_269(iParam0))
	{
		return 1;
	}
	if (func_232(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_232(bool bParam0)
{
	return func_247(bParam0, 20);
}

bool func_233(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("MP_M_FREEMODE_01") || iVar1 == joaat("MP_F_FREEMODE_01"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_234()
{
	return Global_1574405;
}

bool func_235()
{
	if (Global_4456448 == 6)
	{
		return true;
	}
	return false;
}

void func_236()
{
	if (func_239() && !func_228())
	{
		func_238();
	}
	func_237();
	Global_2405072.f_706 = 0;
}

void func_237()
{
	int iVar0;
	struct<5> Var1;

	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_238()
{
	if (func_228())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

bool func_239()
{
	if ((Global_2405072.f_1745 && !UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && UNK_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return true;
	}
	return false;
}

void func_240()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_241()
{
	func_242();
	Global_2405072.f_2254 = 0;
}

void func_242()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_243(bool bParam0)
{
	if (func_244(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_244(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

void func_245()
{
	if (UNK_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == UNK_0x0D0A574C76D769AC() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

void func_246(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_4), bParam0);
}

bool func_247(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_4, bParam1);
}

void func_248(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_4), bParam0);
}

void func_249(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_45), bParam0);
}

void func_250(int iParam0)
{
	if (func_251() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_251()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

bool func_252(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return true;
		default:
			break;
	}
	return false;
}

void func_253(float fParam0)
{
	bool bVar0;

	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_254())
	{
		return;
	}
	bVar0 = (Global_2537071.f_5119 - fParam0);
	if (UNK_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == UNK_0x0D0A574C76D769AC() && UNK_0x755FF954DAE327E1(bVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = UNK_0x0D0A574C76D769AC();
}

int func_254()
{
	switch (func_186())
	{
		case 0:
			return func_255();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_255()
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

float func_256(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		default:
			break;
	}
	return 1f;
}

bool func_257(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return true;
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return true;
			}
			break;
		case 170:
		case 166:
		case 173:
			return true;
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return true;
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return true;
			}
			break;
	}
	return false;
}

float func_259(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		case 144:
			return 0f;
		case 185:
			return 0f;
		default:
			break;
	}
	return 1f;
}

bool func_260(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

void func_261(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

bool func_262(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, bParam1);
}

bool func_263(bool bParam0)
{
	if (func_264(bParam0))
	{
		if (func_265(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_264(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_57())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_265(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_247(bParam0, 9);
	}
	return false;
}

void func_266(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_1155();
	}
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		case 142:
			return Global_262145.f_12510;
		case 157:
			return Global_262145.f_12477;
		case 159:
			return Global_262145.f_12460;
		case 162:
			return Global_262145.f_12571;
		case 173:
			return 100;
		case 170:
			return 100;
		default:
			break;
	}
	return -1;
}

bool func_268(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, false);
	}
	return false;
}

bool func_269(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, 7);
	}
	return false;
}

bool func_270(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 2);
}

bool func_271(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

void func_272()
{
	if (!func_431())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 18))
	{
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 17))
	{
		if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2) && UNK_0x526BC32A660C89E6(Local_116.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_116.f_2[0 /*10*/].f_2))
			{
				if (!UNK_0x4FC40AB0ECCE6E18(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2)))
				{
					func_276(&(Local_116.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 15))
	{
		return;
	}
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_116.f_2[0 /*10*/].f_2))
		{
			if (func_273(Local_116.f_2[0 /*10*/].f_2))
			{
				if (UNK_0x526BC32A660C89E6(Local_116.f_2[0 /*10*/].f_2))
				{
					UNK_0x4AE2D6991D4E4082(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 1, 1);
					UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 15);
				}
			}
		}
	}
}

bool func_273(int iParam0)
{
	if (UNK_0x83F012E6200426DB(iParam0))
	{
		return true;
	}
	if (func_274(iParam0))
	{
		return true;
	}
	return false;
}

bool func_274(int iParam0)
{
	if (!UNK_0xBFF81ED3B99522C7())
	{
		return false;
	}
	if (!UNK_0xE5DBF9B6126856CA(iParam0))
	{
		return false;
	}
	if (func_275(iParam0))
	{
		return true;
	}
	return false;
}

bool func_275(int iParam0)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		UNK_0x8D30F6387EE75385(iParam0);
		return UNK_0x526BC32A660C89E6(iParam0);
	}
	return false;
}

void func_276(var uParam0)
{
	bool bVar0;

	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!UNK_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
}

void func_277(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	var uVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	char cVar57[16];

	if (func_419(iParam2))
	{
		return;
	}
	bVar45 = -1f;
	bVar46 = -1;
	bVar47 = -1;
	bVar49 = false;
	bVar50 = false;
	uParam3->f_36 = 0;
	if (func_417() || iParam2 == 28)
	{
		if (func_363(iParam1, iParam2, uParam3, Global_1574185, 0, func_415(), bParam7))
		{
			func_362(1);
			if ((!func_360() && !func_358()) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true))
			{
				if (func_357())
				{
					func_352();
				}
				else
				{
					UNK_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_351(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_350(iParam1, 0, 0);
							if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
							{
								UNK_0x0674E58A79778E99(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							bVar52 = false;
							while (bVar52 < 32)
							{
								iVar1[bVar52] = -1;
								bVar52++;
							}
							bVar52 = false;
							while (bVar52 < 32)
							{
								if (func_1292(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar35 = UNK_0x117658E336116132(bVar52);
									if (!func_34(bVar35, 0))
									{
										if ((func_349(bVar35) || Global_2425662[bVar35 /*421*/].f_236 != -1) || func_348(bVar35))
										{
											bVar44 = bVar35;
											if (func_264(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_345(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								bVar52++;
							}
						}
						if (!func_342(UNK_0xD803B885F5E47A62(), 0) && func_243(UNK_0xD803B885F5E47A62()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							if (func_341())
							{
								if (func_1292(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar35 = UNK_0x117658E336116132(bVar52);
								}
								else
								{
									bVar35 = func_57();
								}
							}
							else
							{
								bVar35 = (uParam0[bVar52 /*42*/])->f_1;
							}
							if ((func_340(bVar35) && func_336(bVar35, iParam2)) && func_1292(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
								Var38 = { func_331(bVar35) };
								if (bVar35 == UNK_0xD803B885F5E47A62())
								{
									uParam3->f_35 = bVar53;
								}
								StringCopy(&(uParam3->f_1), UNK_0x6E524813889AECF8(bVar35), 64);
								*(uParam4[bVar52 /*13*/]) = { func_59(bVar35) };
								iVar37 = func_325(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = UNK_0x5283D58F79627134(iVar37);
								}
								Global_1574185++;
								if ((uParam0[bVar52 /*42*/])->f_22 != -1f)
								{
									bVar45 = (uParam0[bVar52 /*42*/])->f_22;
								}
								if ((uParam0[bVar52 /*42*/])->f_31 != -1)
								{
									bVar46 = (uParam0[bVar52 /*42*/])->f_31;
								}
								if ((uParam0[bVar52 /*42*/])->f_41 != -1)
								{
									bVar47 = (uParam0[bVar52 /*42*/])->f_41;
								}
								bVar43 = (uParam0[bVar52 /*42*/])->f_9;
								if (((uParam0[bVar52 /*42*/])->f_9 != -1 || (uParam0[bVar52 /*42*/])->f_22 != -1f) || (uParam0[bVar52 /*42*/])->f_31 != -1)
								{
									if (!func_341())
									{
										bVar50 = true;
									}
								}
								if (iParam5 != -1)
								{
									func_320(&bVar43, &bVar45, (uParam0[bVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_319(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									bVar48 = (uParam0[bVar52 /*42*/])->f_2 + 1;
									if (iVar54 != bVar48)
									{
										iVar54 = bVar48;
									}
									else
									{
										bVar48 = -2;
									}
								}
								bVar51 = func_314(bVar35, 0);
								if (bVar34)
								{
									if (func_313(bVar35, 1) && iVar1[bVar44] != -1)
									{
										bVar53 = iVar1[bVar44];
									}
									else
									{
										bVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = bVar53;
								if ((uParam0[bVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&cVar57, "UW_TM", 16);
									StringIntConCat(&cVar57, (uParam0[bVar52 /*42*/])->f_39, 16);
								}
								if (func_312(iParam5))
								{
									func_311(bVar35, iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar43, bVar51, bVar50, bVar45, bVar43, bVar47, &cVar57, (uParam0[bVar52 /*42*/])->f_40, bVar48, bParam6);
								}
								else
								{
									func_311(bVar35, iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar43, bVar51, bVar50, bVar45, bVar46, bVar47, &cVar57, (uParam0[bVar52 /*42*/])->f_40, bVar48, bParam6);
								}
								UNK_0x5D96D8530B3D0904(&bVar49, bVar35);
								bVar53++;
							}
							bVar52++;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							bVar35 = UNK_0x117658E336116132(bVar52);
							if (func_1292(bVar35, 0, 1) && !UNK_0xEAE0D21A50E6C7F4(bVar49, bVar35))
							{
								bVar35 = UNK_0x117658E336116132(bVar52);
							}
							else
							{
								bVar35 = func_57();
							}
							if (func_340(bVar35))
							{
								if (func_1292(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
									Var38 = { func_331(bVar35) };
									*(uParam4[bVar52 /*13*/]) = { func_59(bVar35) };
									iVar37 = func_325(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = UNK_0x5283D58F79627134(iVar37);
									}
									Global_1574185++;
									bVar51 = func_314(bVar35, 1);
									if (bVar34)
									{
										if (func_313(bVar35, 1))
										{
											bVar53 = iVar1[bVar52];
										}
										else
										{
											bVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = bVar53;
									func_290(bVar35, UNK_0x6E524813889AECF8(bVar35), iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar51, bVar50);
									bVar53++;
								}
							}
							bVar52++;
						}
						if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							func_287(uParam3, iParam1, iParam2);
						}
						func_9(&(uParam3->f_21));
						func_286();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
						{
							func_285(uParam3, iParam1);
							func_284(iParam1, 0, 1);
							UNK_0x5D96D8530B3D0904(&(uParam3->f_33), 7);
						}
						func_285(uParam3, iParam1);
						if (!UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							UNK_0x5D96D8530B3D0904(&(uParam3->f_33), 11);
						}
						if (func_280(uParam3))
						{
							Global_1574406 = 1;
						}
						func_278(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (UNK_0x83D8570832F172A7(*iParam1))
					{
						UNK_0xD9ACBBA59FD5A09E(7);
						UNK_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						UNK_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_286();
			func_351(0);
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
			{
				UNK_0x0674E58A79778E99(&(uParam3->f_33), 7);
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 10))
			{
				UNK_0x0674E58A79778E99(&(uParam3->f_33), 10);
			}
		}
	}
	UNK_0xD59EF13BB60323B9();
}

void func_278(var uParam0)
{
	if (!func_11(&(uParam0->f_21)))
	{
		func_10(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_9(&(uParam0->f_21));
		func_279(0);
	}
}

void func_279(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			case 1:
				break;
			case 2:
				break;
		}
	}
}

bool func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = UNK_0x117658E336116132(uParam0->f_37);
	if (bVar15 != func_57() && func_1292(bVar15, 0, 1))
	{
		Var2 = { func_59(bVar15) };
		iVar1 = func_283(uParam0, uParam0->f_37);
		if (func_282(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (UNK_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_281(uParam0, iVar0, 2);
						}
					}
					else if (UNK_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_281(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (!UNK_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_281(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_281(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (!UNK_0x74684D5E87B13DBD(&Var2))
						{
							iVar16 = 1;
							func_281(uParam0, iVar0, 0);
						}
					}
					else if (!UNK_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_281(uParam0, iVar0, 0);
					}
					break;
			}
		}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_282(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

int func_283(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_284(int iParam0, bool bParam1, int iParam2)
{
	if (UNK_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		UNK_0x1200CC973A2399C8(bParam1);
		UNK_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (UNK_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			UNK_0x7E60D21B163E9D56();
		}
	}
}

void func_285(var uParam0, int iParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 10))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		UNK_0x3CAEA85DA607305E(uParam0->f_35);
		UNK_0x7E60D21B163E9D56();
		UNK_0x5D96D8530B3D0904(&(uParam0->f_33), 10);
	}
}

void func_286()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_287(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar0);
		if (bVar2 != func_57())
		{
			if (func_1292(bVar2, 0, 1))
			{
				if (uParam0->f_38[bVar0 /*2*/].f_1 != -1)
				{
					bVar1 = func_289(uParam0->f_38[bVar0 /*2*/], 0, iParam2);
					func_288(iParam1, uParam0->f_38[bVar0 /*2*/].f_1, bVar1, Global_1590535[bVar0 /*876*/].f_211.f_6);
				}
			}
		}
		bVar0++;
	}
}

void func_288(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		if (UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_ICON"))
		{
			UNK_0x3CAEA85DA607305E(bParam1);
			UNK_0x3CAEA85DA607305E(bParam2);
			if (bParam2 == 65)
			{
				UNK_0x3CAEA85DA607305E(bParam3);
			}
			UNK_0x7E60D21B163E9D56();
		}
	}
}

int func_289(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		case 1:
			return 49;
		default:
			break;
	}
	return iVar0;
}

void func_290(bool bParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, var uParam5, char* sParam6, var uParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	char* sVar1;

	if (bParam4 >= func_310() && bParam4 < func_309())
	{
		bParam4 = (bParam4 % 16);
		iVar0 = bParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (UNK_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			UNK_0x3CAEA85DA607305E(bParam4);
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				UNK_0x3CAEA85DA607305E(bParam10);
			}
			func_308(bParam1);
			UNK_0x3CAEA85DA607305E(bParam11);
			if (uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				UNK_0x3CAEA85DA607305E(65);
			}
			UNK_0x3CAEA85DA607305E(-1);
			func_308("");
			if (uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				func_308(&uParam5);
			}
			func_295(uParam3, bParam0);
			UNK_0x024BC5F58A72410C(bParam9);
			UNK_0x024BC5F58A72410C(bParam9);
			if (func_294(uParam3))
			{
				func_293("DPAD_FRIEND");
			}
			else if (func_292(uParam3))
			{
				func_293("DPAD_FRIEND");
			}
			else if (func_291(uParam3))
			{
				func_293("DPAD_CREW");
			}
			else
			{
				func_293("");
			}
			UNK_0x7E60D21B163E9D56();
		}
	}
}

bool func_291(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 6);
}

bool func_292(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 5);
}

void func_293(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_294(var uParam0)
{
	if (func_292(uParam0) && func_291(uParam0))
	{
		return true;
	}
	return false;
}

void func_295(var uParam0, bool bParam1)
{
	if (func_307(bParam1))
	{
		UNK_0x3CAEA85DA607305E(121);
	}
	else if (func_299(bParam1))
	{
		UNK_0x3CAEA85DA607305E(122);
	}
	else if (((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam1 /*421*/].f_413, false))
	{
		UNK_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_296())
		{
			uParam0->f_36 = 0;
		}
		UNK_0x1200CC973A2399C8(uParam0->f_36);
	}
}

bool func_296()
{
	if (UNK_0xA14BB9332558B949())
	{
		if (func_297() || func_173())
		{
			return true;
		}
	}
	return false;
}

int func_297()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_173();
	}
	return func_298(Global_4456448.f_194990);
}

int func_298(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_299(bool bParam0)
{
	if ((func_1292(bParam0, 0, 1) && func_303()) && func_300(bParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_300(bool bParam0, bool bParam1)
{
	return func_301(bParam0, bParam1, 1);
}

int func_301(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (bParam0 == func_57())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_302(bParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (bVar0 != func_57() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_302(bool bParam0, int iParam1)
{
	if (bParam0 != func_57())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_57())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_303()
{
	if (func_271(UNK_0xD803B885F5E47A62()) || func_306())
	{
		if (!func_304(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

bool func_304(int iParam0)
{
	if (func_305(iParam0) == 236 || func_305(iParam0) == 150)
	{
		return func_269(iParam0);
	}
	return false;
}

int func_305(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

bool func_306()
{
	switch (func_243(UNK_0xD803B885F5E47A62()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return true;
		default:
			break;
	}
	return false;
}

bool func_307(bool bParam0)
{
	if (func_296())
	{
		if (func_1292(bParam0, 0, 1))
		{
			return func_264(bParam0);
		}
	}
	if ((func_1292(bParam0, 0, 1) && func_303()) && func_302(bParam0, 0))
	{
		return true;
	}
	return false;
}

void func_308(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_309()
{
	int iVar0;

	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

bool func_310()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_311(bool bParam0, int iParam1, var uParam2, bool bParam3, var uParam4, char* sParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	bool bVar0;
	char* sVar1;

	if (bParam3 >= func_310() && bParam3 < func_309())
	{
		bParam3 = (bParam3 % 16);
		bVar0 = bParam3 + 1;
		if (Global_1574187)
		{
			bVar0 += 16;
		}
		if (bParam19)
		{
			bVar0 = bParam18;
			if (bVar0 == -2)
			{
				bParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (UNK_0x83D8570832F172A7(*iParam1))
		{
			if (UNK_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				UNK_0x3CAEA85DA607305E(bParam3);
				if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					UNK_0x3CAEA85DA607305E(bParam9);
				}
				if (uParam2->f_108 == 6 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					func_293(bParam16);
				}
				else
				{
					func_308(&(uParam2->f_1));
				}
				UNK_0x3CAEA85DA607305E(bParam11);
				if (uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					UNK_0x3CAEA85DA607305E(65);
				}
				if (bParam12 == 1)
				{
					UNK_0x3CAEA85DA607305E(bVar0);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(-1);
				}
				if (func_341())
				{
					func_308("");
				}
				else if (uParam2->f_108 == 6 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 5 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 7 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 8 && !UNK_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (bParam13 != -1f)
					{
						UNK_0x21994591120B91F0(bParam13, 1);
					}
					if (bParam10 != -1)
					{
						UNK_0x6D99DF8263D35CE5(bParam10);
					}
					UNK_0x6B012227B3921E18(&(uParam2->f_104));
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 9)
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_CASH");
					UNK_0xCBD015EC7E4226BC(bParam10, 1);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 10)
				{
					if (bParam10 == 0)
					{
						UNK_0x7ACC3006A87F8B39("FM_AE_CASH");
						UNK_0xCBD015EC7E4226BC(bParam10, 1);
						UNK_0x779B34565F4D71B1();
					}
					else
					{
						UNK_0x7ACC3006A87F8B39("FM_NG_CASH");
						UNK_0xCBD015EC7E4226BC(bParam10, 1);
						UNK_0x779B34565F4D71B1();
					}
				}
				else if (bParam15 > -1)
				{
					if (bParam15 == 0 && !UNK_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
					{
						func_293(&(uParam2->f_104));
					}
					else
					{
						func_308("");
					}
				}
				else if (bParam14 != -1)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam14, 6);
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam13 != -1f)
				{
					UNK_0x7ACC3006A87F8B39("NUMBER");
					UNK_0x21994591120B91F0(bParam13, 1);
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam10 != -1)
				{
					UNK_0x3CAEA85DA607305E(bParam10);
				}
				else
				{
					func_308("");
				}
				if (uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					func_308(&uParam4);
				}
				func_295(uParam2, bParam0);
				if (bParam12 == 1 || UNK_0xEA6BC48857E0AC4C(bParam8))
				{
					func_308("");
					func_308("");
				}
				else
				{
					UNK_0x024BC5F58A72410C(bParam8);
					UNK_0x024BC5F58A72410C(bParam8);
				}
				if (func_294(uParam2))
				{
					func_293("DPAD_FRIEND");
				}
				else if (func_292(uParam2))
				{
					func_293("DPAD_FRIEND");
				}
				else if (func_291(uParam2))
				{
					func_293("DPAD_CREW");
				}
				else
				{
					func_293("");
				}
				UNK_0x7E60D21B163E9D56();
			}
		}
	}
}

bool func_312(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

bool func_313(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_264(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_57();
}

int func_314(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_271(bParam0)) && !func_232(bParam0))
	{
		iVar0 = func_318();
	}
	iVar1 = func_317(bParam0);
	if (!iVar1 == -1)
	{
		return func_315(iVar1);
	}
	return iVar0;
}

int func_315(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_316(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			case 1:
				return 193;
			case 2:
				return 194;
			case 3:
				return 195;
			case 4:
				return 196;
			case 5:
				return 197;
			case 6:
				return 198;
			case 7:
				return 199;
			case 8:
				return 200;
			case 9:
				return 201;
			case 10:
				return 202;
			case 11:
				return 203;
			case 12:
				return 204;
			case 13:
				return 205;
			case 14:
				return 206;
			default:
				break;
		}
	}
	return 1;
}

int func_316(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_317(bool bParam0)
{
	if (!bParam0 == func_57())
	{
		if (func_313(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_58(bParam0)];
		}
	}
	return -1;
}

int func_318()
{
	return 21;
}

char* func_319(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		case 2:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_320(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_324(iParam3))
	{
		*bParam1 = (func_321(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_312(iParam3))
	{
		*bParam1 = (func_321(iParam3, iParam2) / 1000f);
		return 1;
	}
	*bParam0 = iParam2;
	return 0;
}

float func_321(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_323(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_322(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_322(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_323(float fParam0)
{
	return (fParam0 / 0.3048f);
}

bool func_324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

int func_325(bool bParam0)
{
	int iVar0;

	iVar0 = func_328(bParam0);
	if (iVar0 == -1)
	{
		func_326(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_326(bool bParam0, bool bParam1)
{
	if (!func_1292(bParam0, 0, 1))
	{
		return;
	}
	if (func_328(bParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (bParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_327(bParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = bParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

bool func_327(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_328(bool bParam0)
{
	int iVar0;

	if (!func_1292(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == bParam0)
		{
			if (UNK_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && UNK_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_329(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_329(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (UNK_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, UNK_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			UNK_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		UNK_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_330(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_330(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_57();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

struct<4> func_331(bool bParam0)
{
	char cVar0[32];

	if (func_1292(bParam0, 0, 1))
	{
		Global_2513218 = { func_59(bParam0) };
		if (UNK_0xDC30EF462887322E())
		{
			if (func_282(Global_2513218))
			{
				if (!UNK_0x5B9BB2932920F9CD(&Global_2513218))
				{
					return cVar0;
				}
			}
		}
		else if (!UNK_0x4DEB7B48DD0AABA4(0))
		{
			return cVar0;
		}
		if (func_335(&Global_2513218))
		{
			Global_2513148 = { func_333(bParam0) };
			func_332(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_332(var uParam0, char* sParam1)
{
	UNK_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_333(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_334(bParam0))
	{
		return Global_1312909[UNK_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_59(bParam0) };
	UNK_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

bool func_334(bool bParam0)
{
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return true;
	}
	return false;
}

bool func_335(var uParam0)
{
	if (UNK_0x1963B11DE70153E0())
	{
		if (UNK_0x080E9D045AEE5605() && UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_336(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_270(bParam0) || func_339(bParam0)) || func_338(bParam0))
		{
			return false;
		}
	}
	if (!func_337(bParam0))
	{
		return false;
	}
	if ((!func_349(bParam0) && Global_2425662[bParam0 /*421*/].f_236 == -1) && !func_348(bParam0))
	{
		return false;
	}
	return true;
}

bool func_337(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_142, 22);
}

bool func_338(bool bParam0)
{
	if (func_270(bParam0))
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 8);
}

bool func_339(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 10) || UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 9));
	}
	return false;
}

bool func_340(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_57())
	{
		return false;
	}
	if (func_34(bParam0, 0))
	{
		return false;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bVar0 /*876*/].f_142, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_341()
{
	switch (func_243(UNK_0xD803B885F5E47A62()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return true;
		default:
			break;
	}
	switch (func_305(UNK_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
	}
	if (func_232(UNK_0xD803B885F5E47A62()))
	{
		switch (func_243(UNK_0xD803B885F5E47A62()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
		}
	}
	if (func_304(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_342(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_343(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return true;
	}
	if (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_343(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return true;
		}
	}
	return false;
}

bool func_343(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return true;
		default:
			break;
	}
	return func_344(iParam0, 0);
	return false;
}

bool func_344(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return true;
		default:
			break;
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return true;
			default:
				break;
		}
	}
	return false;
}

void func_345(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_1292(UNK_0x117658E336116132(bVar0), 0, 1))
		{
			bVar1 = UNK_0x117658E336116132(bVar0);
			if (!func_34(bVar1, 0))
			{
				if ((func_349(bVar1) || Global_2425662[bVar1 /*421*/].f_236 != -1) || func_348(bVar1))
				{
					if (func_346(bVar1, bParam1, 0))
					{
						(*iParam0)[bVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		bVar0++;
	}
}

bool func_346(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_57())
	{
		if (!bParam2)
		{
			if (func_347(bParam0, bParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_57())
		{
			return bParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_347(bool bParam0, bool bParam1)
{
	if (bParam1 != func_57())
	{
		if (bParam0 != func_57())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_57())
			{
				if (Global_1628237[bParam0 /*615*/].f_11 == bParam0)
				{
					return bParam1 == bParam0;
				}
			}
		}
	}
	return false;
}

bool func_348(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_349(bool bParam0)
{
	if (func_1292(bParam0, 0, 1))
	{
		if (func_1292(UNK_0xD803B885F5E47A62(), 0, 1))
		{
			if (UNK_0xF816C4B5324CB295(bParam0, UNK_0xD803B885F5E47A62()) || func_243(bParam0) == 233)
			{
				return true;
			}
		}
	}
	return false;
}

void func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x3CAEA85DA607305E(bParam2);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_351(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_352()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true))
	{
		if (func_356())
		{
			func_353();
		}
	}
}

void func_353()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_354(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_354(var uParam0, int iParam1)
{
	func_355(uParam0, iParam1);
}

void func_355(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_356()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

bool func_357()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, false) && func_356())
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true) && func_356())
	{
		return true;
	}
	return false;
}

bool func_358()
{
	if (func_356())
	{
		if (func_359(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_359(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return true;
		default:
			break;
	}
	return false;
}

bool func_360()
{
	if (func_356())
	{
		if (func_361(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_361(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return true;
		default:
			break;
	}
	return false;
}

void func_362(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

bool func_363(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;

	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_414(iParam1);
	fVar7 = func_413();
	bVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_412())
		{
			if (func_411() > 0 && Global_1574187)
			{
				UNK_0xB8E3919889462ACD();
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				UNK_0x3584F71E5CA29322(18);
				if (UNK_0xFEBC1E4EC9E001F0())
				{
					UNK_0xE19C2AAC820D8ED5();
				}
				UNK_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_397())
		{
			func_396(iParam0, uParam2, 1);
			return false;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
	{
		func_396(iParam0, uParam2, 1);
		return false;
	}
	if (!func_11(&(uParam2->f_19)))
	{
		if (func_411() == 1)
		{
			func_395(bVar6, iParam0, 0);
			func_10(&(uParam2->f_19), 0, 0);
			func_396(iParam0, uParam2, 0);
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_11(&(uParam2->f_19)) || bParam5)
	{
		if (UNK_0xFEBC1E4EC9E001F0())
		{
			UNK_0xE19C2AAC820D8ED5();
		}
		UNK_0x3584F71E5CA29322(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_411() == 0 && !bParam5))
		{
			func_396(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_394();
				if (iParam1 == 27 || iParam1 == 28)
				{
					UNK_0xB8E3919889462ACD();
				}
				UNK_0x3584F71E5CA29322(18);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, false))
			{
				if (bVar5 == 0)
				{
					func_394();
					if (iParam1 == 27 || iParam1 == 28)
					{
						UNK_0xB8E3919889462ACD();
					}
					UNK_0x3584F71E5CA29322(18);
				}
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				if (func_395(bVar6, iParam0, 0))
				{
					func_350(iParam0, 0, 0);
					bVar4 = func_392(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_390(iParam1) };
					if (bParam4)
					{
						func_387(iParam0, bVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_380(iParam0, func_384(uParam2), func_381(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						bVar9 = func_373(uParam2);
						if (!UNK_0xEA6BC48857E0AC4C(bParam6))
						{
							bVar9 = bParam6;
						}
						func_371(iParam0, bVar9, func_372(), -1);
					}
					else if (func_296())
					{
						uParam2->f_34 = Global_1574186;
						func_387(iParam0, bVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						bVar8 = func_364(iParam1);
						uParam2->f_34 = Global_1574186;
						func_387(iParam0, bVar4, "", 0, bVar8, Global_1574186, 1);
					}
					else
					{
						bVar8 = func_364(iParam1);
						func_387(iParam0, bVar4, &Var0, 1, bVar8, -1, 1);
					}
					UNK_0x5D96D8530B3D0904(&(uParam2->f_33), false);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, false))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						UNK_0x0674E58A79778E99(&(uParam2->f_33), false);
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_364(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_370())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 6;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 26:
			iVar0 = 21;
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 10;
			break;
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
		case 18:
			if (func_369(UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_368(UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_367(UNK_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_365())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_365()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_53();
	}
	return func_366(Global_4456448.f_194990);
}

int func_366(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_367(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_368(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_369(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_370()
{
	return Global_4456448.f_1 == 0;
}

void func_371(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_293(bParam1);
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		func_293("");
		if (bParam3 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam3);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_372()
{
	switch (func_243(UNK_0xD803B885F5E47A62()))
	{
		case 163:
			return "BD_SORT_1";
		case 160:
			return "BD_SORT_4";
		case 154:
			return "BD_SORT_3";
		case 155:
			return "BD_SORT_3";
	}
	return "";
}

char* func_373(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
		case 1:
			return "GR_DPD_F";
		case 2:
			return "GR_DPD_S";
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
		case 1:
			return "GR_DPD_B";
		case 2:
			return "GR_DPD_C";
		case 3:
			return "GR_DPD_D";
	}
	switch (func_243(UNK_0xD803B885F5E47A62()))
	{
		case 233:
			return "H2_DPAD_SET";
		case 180:
			return "GB_BIGUNLOAD_T";
		case 182:
			return "DEAL_DEALN";
		case 194:
			return "PI_BIK_13_0";
		case 189:
			return "PI_BIK_4_1";
		case 193:
			return "PI_BIK_13_1";
		case 205:
			return "PI_BIK_13_3";
		case 186:
			return "CELL_BIKER_CK";
		case 207:
			return "DV_SH_TITLE";
		case 208:
			return "BA_SH_TITLE";
		case 209:
			return "SHU_SH_TITLE";
		case 210:
			return "PI_BIK_13_4";
		case 183:
			return "CELL_BIKER_RESC";
		case 199:
			return "CELL_BIKER_SEAR";
		case 201:
			return "CELL_BIKER_STAN";
		case 142:
			return "PIM_MAGM210";
		case 163:
			return "PIM_MAGM608";
		case 160:
			return "PIM_MAGM604";
		case 154:
			return "PIM_MAGM602";
		case 155:
			return "PIM_MAGM603";
		case 148:
			if (func_376())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_375(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_375(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
		case 157:
			return "PIM_MAGM207";
		case 159:
			return "PIM_MAGM206";
		case 162:
			return "PIM_MAGM607";
		case 164:
			return "PIM_MAGM212";
		case 166:
			return "GB_DPAD_HEAD";
		case 167:
			return "GB_DPAD_BUY";
		case 168:
			return "GB_DPAD_SELL";
		case 169:
			return "GB_DPAD_DEF";
		case 170:
			return "GB_DPAD_AIR";
		case 171:
			return "GB_DPAD_CASH";
		case 172:
			return "GB_DPAD_SAL";
		case 173:
			return "GB_DPAD_FRA";
		case 178:
			return "VEX_TITLEa";
		case 188:
			return "VEX_TITLEb";
		case 218:
			return "FRT_MODE";
		case 217:
			return "FRT_TRNS";
		case 214:
			return "MODE_PLW";
		case 215:
			return "MODE_FUL";
		case 216:
			return "MODE_AA";
		case 219:
			return "MODE_VEL";
		case 220:
			return "MODE_RMP";
		case 221:
			return "MODE_STK";
		case 225:
			return "GR_TITLEL";
		case 226:
			return "GRS_TITLEL";
		case 227:
			return "GRD_TITLEL";
		case 195:
			return "GB_STEAL_T";
		case 198:
			return "SC_MENU_TITLE";
		case 190:
			return "GB_DPAD_BSEL";
		case 191:
			return "GB_DPAD_BDEF";
		case 185:
			return "GB_DPAD_GFH";
		case 197:
			return "GB_DPAD_JB";
		case 179:
			return "CELL_JOUST";
		case 200:
			return "CAG_BLIP";
		case 192:
			if (func_374(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

bool func_374(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

bool func_375(bool bParam0)
{
	return func_300(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_376()
{
	return (func_379() && func_377(func_378()));
}

bool func_377(bool bParam0)
{
	return func_302(bParam0, 1);
}

bool func_378()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_35;
}

bool func_379()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148;
}

void func_380(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_293(bParam1);
		}
		else if (func_305(UNK_0xD803B885F5E47A62()) == 133)
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		func_293("");
		if (bParam3 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam3);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_381(var uParam0)
{
	int iVar0;

	iVar0 = func_305(UNK_0xD803B885F5E47A62());
	if (func_383())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		case 132:
			return "FM_AE_SORT_5";
		case 133:
			switch (func_382())
			{
				case 0:
					return "FM_AE_SORT_2";
				case 1:
					return "FM_AE_SORT_2";
				case 2:
					return "FM_AE_SORT_3";
				case 3:
					return "FM_AE_SORT_2";
				case 4:
					return "FM_AE_SORT_2";
				case 5:
					return "FM_AE_SORT_2";
				case 6:
					return "FM_AE_SORT_2";
				case 7:
					return "FM_AE_SORT_13";
				case 8:
					return "FM_AE_SORT_4";
				case 9:
					return "FM_AE_SORT_2";
				case 10:
					return "FM_AE_SORT_2";
				case 11:
					return "FM_AE_SORT_2";
				case 12:
					return "FM_AE_SORT_2";
				case 13:
					return "FM_AE_SORT_2";
				case 14:
					return "FM_AE_SORT_5";
				case 15:
					return "FM_AE_SORT_9";
				case 16:
					return "FM_AE_SORT_9";
				case 17:
					return "FM_AE_SORT_9";
				case 18:
					return "FM_AE_SORT_9";
				default:
					break;
			}
			break;
		case 136:
			return "";
		case 138:
			return "";
		case 139:
			return "FM_AE_SORT_10";
		case 140:
			return "";
		case 141:
			return "FM_AE_SORT_5";
		case 144:
			return "FM_AE_SORT_1";
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_382()
{
	if (func_305(UNK_0xD803B885F5E47A62()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_383()
{
	return Global_1590408;
}

bool func_384(var uParam0)
{
	int iVar0;

	iVar0 = func_305(UNK_0xD803B885F5E47A62());
	if (func_383())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		case 132:
			if (func_386() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_386() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_382())
			{
				case 0:
					return "AMCH_0SLC";
				case 1:
					return "AMCH_1SLC";
				case 2:
					return "AMCH_2SLC";
				case 3:
					return "AMCH_3SLC";
				case 4:
					return "AMCH_4SLC";
				case 5:
					return "AMCH_5SLC";
				case 6:
					return "AMCH_6SLC";
				case 7:
					return "AMCH_7SLC";
				case 8:
					return "AMCH_8SLC";
				case 9:
					return "AMCH_12SLC";
				case 10:
					return "AMCH_13SLC";
				case 11:
					return "AMCH_15SLC";
				case 12:
					return "AMCH_16SLC";
				case 13:
					return "AMCH_23SLC";
				case 14:
					return "AMCH_9SLC";
				case 15:
					return "AMCH_19SLC";
				case 16:
					return "AMCH_20SLC";
				case 17:
					return "AMCH_21SLC";
				case 18:
					return "AMCH_22SLC";
				default:
					break;
			}
			Jump @569; //curOff = 489
			return "PIM_TA10";
			return "PIM_TA4";
			return "PIM_TA5";
			return "PIM_TA3";
			return "PIM_TA8";
			return "PIM_TA2";
			if (func_385() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			Jump @569; //curOff = 559
			return "PIM_TA6";
			return "";
		}

int func_385()
{
	return Global_2537071.f_5048;
}

int func_386()
{
	if (func_305(UNK_0xD803B885F5E47A62()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_387(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_308(bParam1);
		}
		else if (bParam5 != -1)
		{
			UNK_0x7ACC3006A87F8B39(bParam1);
			UNK_0x6D99DF8263D35CE5(bParam5);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			func_293(bParam1);
		}
		if (func_412() && bParam6)
		{
			if (func_389())
			{
				bVar0 = 2;
				bVar1 = 2;
			}
			else
			{
				bVar0 = true;
				bVar1 = 2;
			}
			UNK_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			UNK_0x6D99DF8263D35CE5(bVar0);
			UNK_0x6D99DF8263D35CE5(bVar1);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			func_293(bParam2);
		}
		if (bParam4 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam4);
			if (func_388(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x3CAEA85DA607305E(166);
			}
			else if (func_53())
			{
				UNK_0x3CAEA85DA607305E(220);
			}
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_388(int iParam0)
{
	if (func_369(iParam0) || func_368(iParam0))
	{
		return true;
	}
	return false;
}

bool func_389()
{
	return Global_1574187;
}

struct<4> func_390(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_391(UNK_0xD803B885F5E47A62()) || func_367(UNK_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_296() && UNK_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_391(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

bool func_392(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	if (iParam0 == 20 && (!func_296() || UNK_0xEA6BC48857E0AC4C(bParam1)))
	{
		sVar0 = func_393();
		return sVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return bParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
			case 1:
				return "HUD_LBD_TDM";
			case 5:
				return "HUD_LBD_GRCE";
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
			case 7:
				return "HUD_LBD_BRCE";
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
			case 3:
				return "HUD_LBD_HRD";
			case 22:
				return "HUD_LBD_SHOO";
		}
	}
	return bParam1;
}

char* func_393()
{
	if (UNK_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (UNK_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (UNK_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (UNK_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_394()
{
	Global_42351 = 1;
}

bool func_395(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return UNK_0x83D8570832F172A7(*iParam1);
}

void func_396(int iParam0, var uParam1, bool bParam2)
{
	UNK_0x0674E58A79778E99(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_286();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_11(&(uParam1->f_19)))
		{
			func_9(&(uParam1->f_19));
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4592), 5);
		}
	}
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0xE17FDF9E3068281B(iParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_33, false))
	{
		UNK_0x0674E58A79778E99(&(uParam1->f_33), false);
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
}

bool func_397()
{
	if (func_410())
	{
		return false;
	}
	if (func_409())
	{
		return false;
	}
	if (!func_407())
	{
		return false;
	}
	if (!func_405())
	{
		return false;
	}
	if (func_404(8, -1))
	{
		return false;
	}
	if (func_411() == 2)
	{
		return false;
	}
	if (Global_2537071.f_4543)
	{
		return false;
	}
	if (func_403())
	{
		return false;
	}
	else if (!func_102(UNK_0xD803B885F5E47A62(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_402(1) || func_400(1)) || Global_22211.f_124) || Global_22211)
	{
		return false;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (func_399() && Global_1695468 == 2)
	{
		return false;
	}
	if (func_105(UNK_0xD803B885F5E47A62()) && !func_399())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (Global_1662011)
	{
		return false;
	}
	if (func_218(0))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (Global_1370230)
	{
		return false;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return false;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return false;
	}
	if (func_398(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return false;
	}
	return true;
}

bool func_398(int iParam0)
{
	if (iParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_399()
{
	return (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && UNK_0xEAE0D21A50E6C7F4(Global_1695469, false));
}

bool func_400(bool bParam0)
{
	if (UNK_0xD6C3CB7DCE462DB4())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (func_401(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x06F8112AA79C53D9(0, 25) || UNK_0x06F8112AA79C53D9(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return false;
	}
	if (UNK_0x06F8112AA79C53D9(0, 19) || (!bParam0 && UNK_0x7FEE810EE9E768EB(0, 19)))
	{
		return true;
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (((UNK_0x06F8112AA79C53D9(0, 166) || UNK_0x06F8112AA79C53D9(0, 167)) || UNK_0x06F8112AA79C53D9(0, 168)) || UNK_0x06F8112AA79C53D9(0, 169))
		{
			return true;
		}
		if (!bParam0)
		{
			if (((UNK_0x7FEE810EE9E768EB(0, 166) || UNK_0x7FEE810EE9E768EB(0, 167)) || UNK_0x7FEE810EE9E768EB(0, 168)) || UNK_0x7FEE810EE9E768EB(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_401(bool bParam0)
{
	int iVar0;

	if (UNK_0x18AF0C72ABD5543B())
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_402(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_403()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

bool func_404(bool bParam0, int iParam1)
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

bool func_405()
{
	if (func_406() == 0)
	{
		return true;
	}
	return false;
}

int func_406()
{
	return Global_1312467.f_18;
}

bool func_407()
{
	if (func_408())
	{
		return true;
	}
	if (UNK_0x757EF87A33649210())
	{
		return false;
	}
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749())
	{
		return false;
	}
	if (UNK_0x06980BB66EBA4D95())
	{
		return false;
	}
	return true;
}

bool func_408()
{
	return Global_1312440;
}

bool func_409()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 5;
}

bool func_410()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_411()
{
	return Global_1377170.f_68;
}

bool func_412()
{
	if (Global_1574186 > 16)
	{
		return true;
	}
	return false;
}

float func_413()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - UNK_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_415()
{
	if (func_416(UNK_0xD803B885F5E47A62()))
	{
		return Global_1319101;
	}
	return false;
}

bool func_416(bool bParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
		if (func_34(bParam0, 0))
		{
			return UNK_0xB9BE6EF14AC6F8DE(bParam0);
		}
	}
	return false;
}

bool func_417()
{
	if (func_415())
	{
		return true;
	}
	if (func_338(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_383())
	{
		return true;
	}
	if (func_271(UNK_0xD803B885F5E47A62()))
	{
		switch (func_305(UNK_0xD803B885F5E47A62()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
			case 140:
				if (!func_418(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 129:
				if (!func_418(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 174:
				if (!func_418(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 175:
				return true;
		}
	}
	return false;
}

bool func_418(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 4);
}

bool func_419(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_271(UNK_0xD803B885F5E47A62()) && !func_232(UNK_0xD803B885F5E47A62())) && !func_304(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	if (iParam0 == 27)
	{
		if (func_244(UNK_0xD803B885F5E47A62(), 0) && func_232(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
		if (func_420(UNK_0xD803B885F5E47A62()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_420(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_271(bParam0) && !func_270(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 8));
	bVar2 = func_232(bParam0);
	bVar3 = func_428();
	bVar4 = func_422();
	if ((bVar1 && (func_269(bParam0) || func_268(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_265(bParam0)) && !func_421(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

bool func_421(bool bParam0)
{
	return func_247(bParam0, 19);
}

bool func_422()
{
	if ((func_247(UNK_0xD803B885F5E47A62(), 21) || func_247(UNK_0xD803B885F5E47A62(), 22)) || func_425())
	{
		return true;
	}
	if (func_423())
	{
		func_248(22);
		return true;
	}
	return false;
}

bool func_423()
{
	if (func_244(UNK_0xD803B885F5E47A62(), 0))
	{
		if (((func_428() && !func_424()) || func_262(UNK_0xD803B885F5E47A62(), 21)) || func_262(UNK_0xD803B885F5E47A62(), 25))
		{
			return true;
		}
		else
		{
			func_246(27);
		}
	}
	return false;
}

bool func_424()
{
	return Global_1312418.f_1;
}

bool func_425()
{
	return func_426(358, -1);
}

bool func_426(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_427(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

int func_427(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

bool func_428()
{
	return Global_1312418;
}

bool func_429()
{
	int iVar0;

	iVar0 = -1;
	if (!func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar0 = UNK_0x57270EE11514DC67();
	}
	else
	{
		iVar0 = func_430();
	}
	if (iVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Local_386[iVar0 /*11*/].f_1, true);
	}
	return false;
}

int func_430()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = -1;
	bVar1 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_740;
	if (UNK_0x40B8C182D63932FC(bVar1))
	{
		if (UNK_0xFB75B0F82CA525F6(bVar1))
		{
			iVar2 = UNK_0x7B9C1F53FE442D06(bVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

bool func_431()
{
	return Local_116.f_196 == 99;
}

void func_432()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_433(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_433(int iParam0)
{
	struct<6> Var0;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	struct<14> Var18;
	bool bVar32;
	bool bVar33;

	if (UNK_0x218F818E64020C17(1, iParam0, &Var0, 13))
	{
		bVar32 = false;
		while (bVar32 < 10)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_209, bVar32))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_6, bVar32))
				{
					if (UNK_0xC844350D5D58C99A(Var0))
					{
						if (UNK_0xE2F1E99DD161A861(Var0))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_205, bVar32))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_5, bVar32))
								{
									if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar32 /*10*/].f_2))
									{
										if (UNK_0xC844350D5D58C99A(UNK_0xB177666FAB6F4417(Local_116.f_2[bVar32 /*10*/].f_2)))
										{
											if (UNK_0x96A5FE5834B81CE7(Var0) == UNK_0xB177666FAB6F4417(Local_116.f_2[bVar32 /*10*/].f_2))
											{
												if (UNK_0xC844350D5D58C99A(Var0.f_1))
												{
													if (UNK_0xEC560E589DF8370E(Var0.f_1))
													{
														if (UNK_0x940C1429253D3B1B(Var0.f_1) == UNK_0x16F2683693E537C9())
														{
															if (func_1176() == Local_116.f_218)
															{
																UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_5), bVar32);
															}
														}
														else if (UNK_0x34BFC6F0CB887BC2(UNK_0x940C1429253D3B1B(Var0.f_1)))
														{
															bVar33 = UNK_0x83FACCC48B68F9D1(UNK_0x940C1429253D3B1B(Var0.f_1));
															if (!UNK_0xFB75B0F82CA525F6(bVar33))
															{
																UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_5), bVar32);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (UNK_0xEC560E589DF8370E(Var0))
						{
							bVar14 = UNK_0x940C1429253D3B1B(Var0);
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar32 /*10*/].f_1))
							{
								if (bVar14 == UNK_0x1B50683925F00106(Local_116.f_2[bVar32 /*10*/].f_1))
								{
									if (UNK_0xC844350D5D58C99A(Var0.f_1))
									{
										if (UNK_0xEC560E589DF8370E(Var0.f_1))
										{
											bVar13 = UNK_0x940C1429253D3B1B(Var0.f_1);
											if (UNK_0x34BFC6F0CB887BC2(bVar13))
											{
												bVar16 = UNK_0x83FACCC48B68F9D1(bVar13);
												if (UNK_0xFB75B0F82CA525F6(bVar16))
												{
													if (Var0.f_5)
													{
														if (bVar16 == UNK_0xD803B885F5E47A62())
														{
															UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_6), bVar32);
															if (!func_431())
															{
																Var18.f_2 = -16941049;
																Var18.f_10 = UNK_0xD803B885F5E47A62();
																func_446(Var18, func_447(0));
															}
														}
													}
												}
												else if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_7, bVar32))
												{
													if (Var0.f_5)
													{
														UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_7), bVar32);
													}
												}
											}
											else if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_8, bVar32))
											{
												if (Var0.f_5)
												{
													UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_8), bVar32);
												}
											}
										}
										else if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_8, bVar32))
										{
											if (Var0.f_5)
											{
												UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_8), bVar32);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			bVar32++;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 15))
		{
			if (UNK_0xC844350D5D58C99A(Var0))
			{
				if (UNK_0xEC560E589DF8370E(Var0))
				{
					bVar14 = UNK_0x940C1429253D3B1B(Var0);
					if (func_445(UNK_0x134B62B726CEC8E6(bVar14)))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_739, 15);
					}
				}
				else if (UNK_0xE2F1E99DD161A861(Var0))
				{
					if (func_444(UNK_0x134B62B726CEC8E6(Var0)))
					{
						if (!func_443(UNK_0x16F2683693E537C9(), UNK_0x96A5FE5834B81CE7(Var0), 0))
						{
							if (!func_442(UNK_0x96A5FE5834B81CE7(Var0), 0, 1))
							{
								UNK_0x5D96D8530B3D0904(&bLocal_739, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_429())
	{
		if (!func_247(UNK_0xD803B885F5E47A62(), 20))
		{
			if (UNK_0xC844350D5D58C99A(Var0))
			{
				if (UNK_0xEC560E589DF8370E(Var0))
				{
					bVar14 = UNK_0x940C1429253D3B1B(Var0);
					if (UNK_0x34BFC6F0CB887BC2(bVar14))
					{
						bVar15 = UNK_0x83FACCC48B68F9D1(bVar14);
						if (UNK_0xC844350D5D58C99A(Var0.f_1))
						{
							if (UNK_0xEC560E589DF8370E(Var0.f_1))
							{
								bVar13 = UNK_0x940C1429253D3B1B(Var0.f_1);
								if (UNK_0x34BFC6F0CB887BC2(bVar13))
								{
									bVar16 = UNK_0x83FACCC48B68F9D1(bVar13);
									if (bVar16 == UNK_0xD803B885F5E47A62())
									{
										if (UNK_0xFB75B0F82CA525F6(bVar15))
										{
											if (func_313(bVar15, 1))
											{
												if (Local_116.f_218 > -1)
												{
													bVar17 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(Local_116.f_218));
													if (func_346(bVar15, bVar17, 1))
													{
														func_434(0);
														func_1155();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_434(bool bParam0)
{
	if (!func_232(UNK_0xD803B885F5E47A62()))
	{
		if (bParam0 || func_420(UNK_0xD803B885F5E47A62()) != 0)
		{
			func_248(20);
			func_435(func_437());
			if (func_271(UNK_0xD803B885F5E47A62()))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 8))
				{
					UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 8);
				}
			}
		}
	}
}

void func_435(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_436() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_436()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

int func_437()
{
	int iVar0;

	iVar0 = func_243(UNK_0xD803B885F5E47A62());
	if (func_441(iVar0) == 0)
	{
		return -1;
	}
	if (func_440(iVar0))
	{
		return 65;
	}
	if (func_439(iVar0))
	{
		return 66;
	}
	if (func_438(iVar0))
	{
		return 63;
	}
	return 64;
}

bool func_438(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return true;
		default:
			break;
	}
	return false;
}

bool func_439(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return true;
		default:
			break;
	}
	return false;
}

bool func_440(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return true;
		default:
			break;
	}
	return false;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		case 148:
		case 179:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_442(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = UNK_0xD6DF381716822EFE(bParam0) + 1;
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!UNK_0xBBA8A868118C90ED(bParam0, (iVar0 - 1), 0))
			{
				bVar2 = UNK_0xA30B8362589C124A(bParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (UNK_0xC844350D5D58C99A(bVar2))
					{
						if (UNK_0x34BFC6F0CB887BC2(bVar2))
						{
							if (!bParam2 && func_56(UNK_0x83FACCC48B68F9D1(bVar2), UNK_0xD803B885F5E47A62()))
							{
							}
							else
							{
								return true;
							}
						}
					}
				}
				else if (!UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					if (UNK_0x34BFC6F0CB887BC2(bVar2))
					{
						if (!bParam2 && func_56(UNK_0x83FACCC48B68F9D1(bVar2), UNK_0xD803B885F5E47A62()))
						{
						}
						else
						{
							return true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_443(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0xC844350D5D58C99A(bParam0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0xC844350D5D58C99A(bParam1) && !UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (UNK_0xC42A92762C58E1B9(bParam0, bParam1, iParam2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_444(int iParam0)
{
	switch (iParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	}
	return false;
}

bool func_445(int iParam0)
{
	switch (iParam0)
	{
		case joaat("S_M_Y_COP_01"):
		case joaat("S_F_Y_COP_01"):
		case joaat("S_M_Y_SWAT_01"):
		case joaat("S_M_M_FIBOFFICE_01"):
		case joaat("S_M_Y_SHERIFF_01"):
		case joaat("S_F_Y_SHERIFF_01"):
		case joaat("S_M_Y_RANGER_01"):
		case joaat("S_F_Y_RANGER_01"):
		case joaat("S_M_Y_BLACKOPS_01"):
		case joaat("S_M_M_ARMOURED_01"):
		case joaat("S_M_Y_PILOT_01"):
		case joaat("S_M_M_FIBSEC_01"):
			return true;
	}
	return false;
}

void func_446(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = UNK_0xD803B885F5E47A62();
	if (!bParam14 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Param0, 14, bParam14);
	}
}

bool func_447(bool bParam0)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar1)))
		{
			bVar2 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar1));
			if (func_1292(bVar2, 0, 0))
			{
				if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar2);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

void func_448()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 10))
		{
			UNK_0x0674E58A79778E99(&bLocal_739, 10);
		}
		return;
	}
	bVar0 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_740;
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 10))
	{
		if (Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1 != 0)
		{
			Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1 = 0;
		}
		UNK_0x5D96D8530B3D0904(&bLocal_739, 10);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 11))
	{
		UNK_0x5D96D8530B3D0904(&bLocal_739, 11);
		func_1058();
	}
	if (UNK_0x40B8C182D63932FC(bVar0))
	{
		if (UNK_0xFB75B0F82CA525F6(bVar0))
		{
			iVar1 = UNK_0x7B9C1F53FE442D06(bVar0);
			iVar2 = iVar1;
			iVar3 = Local_386[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_926();
					func_911();
					func_902();
					func_449();
					break;
				case 2:
					func_449();
					break;
				case 3:
					func_1189();
					break;
			}
		}
	}
}

void func_449()
{
	struct<20> Var0;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	bool bVar27;

	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	bVar23 = func_57();
	iVar26 = UNK_0x57270EE11514DC67();
	bVar27 = UNK_0xD803B885F5E47A62();
	if (func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar26 = func_430();
		bVar27 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_740;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_386[iVar26 /*11*/].f_1, 4))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 3))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, true))
			{
				if (iVar26 == Local_116.f_218 || func_1176() == Local_116.f_218)
				{
					if (func_420(UNK_0xD803B885F5E47A62()) >= 2)
					{
						bVar24 = func_896(bVar27);
						iVar25 = func_895(bVar27);
						func_893(87, "BIGM_DEFENDED", "BIGM_CONTRAS", bVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
					if (bVar27 == UNK_0xD803B885F5E47A62())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 6))
						{
							func_781(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_739, 6);
						}
						func_619(169, 1, &Var0, 0);
						UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
					}
				}
				else if (func_429())
				{
				}
				iLocal_748 = func_20();
				iLocal_749 = (func_20() - func_618(&(Local_116.f_226), 0, 0));
				UNK_0x5D96D8530B3D0904(&bLocal_739, 3);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_386[iVar26 /*11*/].f_1, 14))
				{
					if (Local_116.f_221 >= 0)
					{
						bVar23 = UNK_0x117658E336116132(Local_116.f_221);
						if (bVar23 == bVar27)
						{
							func_581(87, "BIGM_SECURED", "BIGM_CONTRAYR", 1, -1, 2, 1, 0);
						}
						else if (func_420(bVar27) >= 2)
						{
							bVar24 = func_896(bVar27);
							iVar25 = func_895(bVar27);
							func_893(87, "BIGM_SECURED", "BIGM_CONTRAGR", bVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
					}
					if (bVar27 == UNK_0xD803B885F5E47A62())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 6))
						{
							func_781(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_739, 6);
						}
						func_619(169, 1, &Var0, 0);
						UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
					}
					iLocal_748 = func_20();
					iLocal_749 = (func_20() - func_618(&(Local_116.f_226), 0, 0));
					UNK_0x5D96D8530B3D0904(&bLocal_739, 3);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 3))
			{
				if (UNK_0x57270EE11514DC67() == Local_116.f_218 || func_1176() == Local_116.f_218)
				{
					if (func_420(bVar27) >= 2)
					{
						bVar24 = func_896(bVar27);
						iVar25 = func_895(UNK_0xD803B885F5E47A62());
						func_893(88, "BIGM_DCLOST", "BIGM_CONTRAFD", bVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
					if (bVar27 == UNK_0xD803B885F5E47A62())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 6))
						{
							func_781(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_739, 6);
						}
						func_619(169, 0, &Var0, 0);
					}
				}
				iLocal_748 = func_20();
				iLocal_749 = (func_20() - func_618(&(Local_116.f_226), 0, 0));
				UNK_0x5D96D8530B3D0904(&bLocal_739, 3);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 9))
			{
				if (func_539())
				{
					if (func_420(bVar27) >= 2)
					{
						bVar24 = func_896(bVar27);
						iVar25 = func_895(bVar27);
						func_893(88, "BIGM_DCLOST", "BIGM_CONTRALS", bVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
				}
				if (bVar27 == UNK_0xD803B885F5E47A62())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 6))
					{
						func_781(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_739, 6);
					}
					func_619(169, 0, &Var0, 0);
				}
				iLocal_748 = func_20();
				iLocal_749 = (func_20() - func_618(&(Local_116.f_226), 0, 0));
				UNK_0x5D96D8530B3D0904(&bLocal_739, 3);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 8))
			{
				if (func_539())
				{
					if (func_420(bVar27) >= 2)
					{
						bVar24 = func_896(bVar27);
						iVar25 = func_895(bVar27);
						func_893(88, "BIGM_DCLOST", "BIGM_CONTRALS", bVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
				}
				if (bVar27 == UNK_0xD803B885F5E47A62())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 6))
					{
						func_781(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_739, 6);
					}
					func_619(169, 0, &Var0, 0);
				}
				iLocal_748 = func_20();
				iLocal_749 = (func_20() - func_618(&(Local_116.f_226), 0, 0));
				UNK_0x5D96D8530B3D0904(&bLocal_739, 3);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 15))
			{
				if (func_539())
				{
					if (func_420(bVar27) >= 2)
					{
						bVar24 = func_896(bVar27);
						iVar25 = func_895(bVar27);
						func_893(88, "BIGM_DCLOST", "BIGM_CONTRALS", bVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
				}
				if (bVar27 == UNK_0xD803B885F5E47A62())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 6))
					{
						func_781(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_739, 6);
					}
					func_619(169, 0, &Var0, 0);
				}
				iLocal_748 = func_20();
				iLocal_749 = (func_20() - func_618(&(Local_116.f_226), 0, 0));
				UNK_0x5D96D8530B3D0904(&bLocal_739, 3);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 5))
			{
				if (func_539())
				{
					if (func_1175())
					{
						if (func_420(bVar27) >= 2)
						{
						}
					}
					else if (func_420(bVar27) >= 2)
					{
						func_581(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (bVar27 == UNK_0xD803B885F5E47A62())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 6))
					{
						func_781(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_739, 6);
					}
					func_619(169, 0, &Var0, 0);
				}
				UNK_0x5D96D8530B3D0904(&bLocal_739, 3);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 3))
		{
			func_1058();
			if (UNK_0x57270EE11514DC67() == Local_116.f_218)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 16) && !UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 13))
				{
					if ((((UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 15) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 8)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 3)) || func_11(&(Local_116.f_226))) || (func_431() && UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 9)))
					{
						func_482();
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 13);
						if (!func_481(38))
						{
							func_480(38);
						}
					}
					if (iLocal_750 == 2)
					{
						UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 13);
					}
					if (iLocal_750 == 3)
					{
						UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 13);
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 8))
			{
				func_478();
				func_476();
				UNK_0x5D96D8530B3D0904(&bLocal_740, 8);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 7))
			{
				if (Local_116.f_219 != -1)
				{
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 5))
					{
						if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(Local_116.f_219)))
						{
							func_474(UNK_0x117658E336116132(Local_116.f_219), 432, 0, 0);
							func_473(UNK_0x117658E336116132(Local_116.f_219), 1, 0, 0);
							func_472(UNK_0x117658E336116132(Local_116.f_219), 0, 0, 0);
							func_471(UNK_0x117658E336116132(Local_116.f_219), 0);
							func_468(UNK_0x117658E336116132(Local_116.f_219), Global_262145.f_12355, 0, 0);
							UNK_0x5D96D8530B3D0904(&bLocal_739, 7);
						}
					}
				}
			}
			if (func_450(&uLocal_751, 1, 0) && (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 16) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 5)))
			{
				if (iVar26 == UNK_0x57270EE11514DC67())
				{
					UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 4);
				}
			}
		}
	}
}

bool func_450(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	func_248(29);
	if ((*uParam0 > 0 && !func_356()) && func_420(UNK_0xD803B885F5E47A62()) != 0)
	{
		if (!func_466())
		{
			func_465();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_11(&(uParam0->f_3)))
			{
				func_10(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), 2);
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4588), false);
					func_10(&(uParam0->f_5), 0, 0);
				}
				func_10(&(uParam0->f_1), 0, 0);
				func_464(uParam0, 1);
			}
			break;
		case 1:
			if (func_11(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_457(bParam2);
				func_464(uParam0, 2);
			}
			break;
		case 2:
			func_457(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_451(func_452(0)))
				{
					UNK_0xA37A90C62806D848(1);
				}
				func_464(uParam0, 3);
			}
			break;
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), true);
				UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 2);
				func_464(uParam0, 4);
				return true;
			}
			break;
		case 4:
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), true);
			UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 2);
			return true;
	}
	return false;
}

bool func_451(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_452(bool bParam0)
{
	if (((func_455(UNK_0xD803B885F5E47A62()) || func_454(UNK_0xD803B885F5E47A62())) || func_376()) || bParam0)
	{
		if (func_454(UNK_0xD803B885F5E47A62()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_343(func_453()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_453()
{
	return Global_1650640;
}

bool func_454(bool bParam0)
{
	return func_344(func_243(bParam0), 0);
}

bool func_455(bool bParam0)
{
	return func_456(func_243(bParam0));
}

bool func_456(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148 && func_302(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_35, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return true;
	}
	return false;
}

void func_457(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, false))
	{
		if (((((((((((!UNK_0x0178C60FEA5C5A75() && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2)) && func_1292(UNK_0xD803B885F5E47A62(), 1, 1)) && !Global_73825) && !Global_58693) && !UNK_0x757EF87A33649210()) && !func_247(UNK_0xD803B885F5E47A62(), 22)) && func_420(UNK_0xD803B885F5E47A62()) != 0) && !func_462(func_463())) && !func_455(UNK_0xD803B885F5E47A62())) && !func_461(func_243(UNK_0xD803B885F5E47A62()))) && !func_460(func_243(UNK_0xD803B885F5E47A62())))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4588), true);
			func_459(func_452(bParam0), -1);
			func_458(1);
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), false);
		}
	}
}

void func_458(bool bParam0)
{
	bool bVar0;

	bVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_375(1))
	{
		bVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (bParam0 && !func_356())
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Boss_Message_Orange", bVar0, 0);
	}
}

void func_459(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

bool func_460(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_461(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return true;
		default:
			break;
	}
	return false;
}

bool func_462(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return true;
		default:
			break;
	}
	return false;
}

int func_463()
{
	bool bVar0;

	bVar0 = UNK_0xBB0808A181D4745C();
	if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_464(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_465()
{
	Global_2462222 = 1;
}

bool func_466()
{
	if (((((((func_243(UNK_0xD803B885F5E47A62()) == 170 || func_243(UNK_0xD803B885F5E47A62()) == 219) || func_243(UNK_0xD803B885F5E47A62()) == 221) || func_243(UNK_0xD803B885F5E47A62()) == 220) || func_243(UNK_0xD803B885F5E47A62()) == 216) || func_243(UNK_0xD803B885F5E47A62()) == 215) || func_243(UNK_0xD803B885F5E47A62()) == 214) || func_243(UNK_0xD803B885F5E47A62()) == 218)
	{
		return true;
	}
	if (func_467(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_467(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

void func_468(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_470(bParam0))
	{
		return;
	}
	if (func_469(&(Global_2416079.f_753[bParam0]), &(Global_2416079.f_1116[bParam0]), &(Global_2416079.f_392), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_555[bParam0] = uParam1;
		}
	}
}

bool func_469(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		if (!UNK_0x1727A44C562FBED2(*uParam1) || *uParam1 == UNK_0x0D0A574C76D769AC())
		{
			*uParam1 = UNK_0x0D0A574C76D769AC();
			*uParam0 = UNK_0x0D0A574C76D769AC();
		}
	}
	if (!UNK_0x1727A44C562FBED2(*uParam0) || *uParam0 == UNK_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam4))
			{
				*bParam6 = 1;
				UNK_0x5D96D8530B3D0904(bParam2, bParam4);
			}
			*uParam0 = UNK_0x0D0A574C76D769AC();
		}
		else
		{
			if (UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam4))
			{
				*bParam6 = 1;
				UNK_0x0674E58A79778E99(bParam2, bParam4);
			}
			if (*uParam1 == UNK_0x0D0A574C76D769AC())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return true;
	}
	else if (UNK_0x1727A44C562FBED2(*uParam1) && !*uParam1 == UNK_0x0D0A574C76D769AC())
	{
	}
	return false;
}

bool func_470(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return true;
	}
	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_254())
	{
		return true;
	}
	return false;
}

void func_471(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_2416079.f_368), bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_2416079.f_368), bParam0);
	}
	if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bParam0]))
	{
		if (bParam1)
		{
			UNK_0x6ABCCE651368DB93(Global_2416079[bParam0], false);
		}
		else
		{
			UNK_0x6ABCCE651368DB93(Global_2416079[bParam0], true);
		}
	}
}

void func_472(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_470(bParam0))
	{
		return;
	}
	if (func_469(&(Global_2416079.f_819[bParam0]), &(Global_2416079.f_1182[bParam0]), &(Global_2416079.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_471(bParam0, bParam2);
	}
}

void func_473(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_470(bParam0))
	{
		return;
	}
	if (func_469(&(Global_2416079.f_621[bParam0]), &(Global_2416079.f_984[bParam0]), &(Global_2416079.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[bParam0] = iParam1;
		}
	}
}

void func_474(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (func_470(bParam0))
	{
		return;
	}
	if (func_469(&(Global_2416079.f_588[bParam0]), &(Global_2416079.f_951[bParam0]), &(Global_2416079.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_475();
		}
	}
}

void func_475()
{
	Global_2416079.f_1614 = 1;
}

void func_476()
{
	bool bVar0;
	bool bVar1;

	if (!func_431())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 9))
	{
		UNK_0x5D96D8530B3D0904(&bLocal_739, 9);
		bVar0 = false;
		while (bVar0 < 32)
		{
			bVar1 = UNK_0x117658E336116132(bVar0);
			if (UNK_0x40B8C182D63932FC(bVar1))
			{
				if (bVar1 != UNK_0xD803B885F5E47A62())
				{
					func_474(bVar1, 478, 0, 0);
					func_473(bVar1, func_477(bLocal_853), 0, 0);
				}
			}
			bVar0++;
		}
	}
}

int func_477(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (bParam0)
	{
		case 1:
			return 4;
		case 0:
			return 4;
		case 6:
			return 59;
		case 18:
			return 2;
		case 13:
			return 5;
		case 116:
			return 38;
		case 28:
			return 6;
		case 29:
			return 7;
		case 30:
			return 8;
		case 31:
			return 9;
		case 32:
			return 10;
		case 33:
			return 11;
		case 34:
			return 12;
		case 35:
			return 13;
		case 36:
			return 14;
		case 37:
			return 15;
		case 38:
			return 16;
		case 39:
			return 17;
		case 40:
			return 18;
		case 41:
			return 19;
		case 42:
			return 20;
		case 43:
			return 21;
		case 44:
			return 22;
		case 45:
			return 23;
		case 46:
			return 24;
		case 47:
			return 25;
		case 48:
			return 26;
		case 49:
			return 27;
		case 50:
			return 28;
		case 51:
			return 29;
		case 52:
			return 30;
		case 53:
			return 31;
		case 54:
			return 32;
		case 55:
			return 33;
		case 56:
			return 34;
		case 57:
			return 35;
		case 58:
			return 36;
		case 59:
			return 37;
		case 9:
			return 57;
		case 10:
			return 53;
		case 118:
			return 57;
		case 14:
			return 56;
		case 3:
			return 55;
		case 21:
			return 50;
		case 15:
			return 51;
		case 20:
			return 52;
		case 11:
			return 54;
		case 23:
			return 58;
		case 12:
			return 60;
		case 24:
			return 61;
		case 4:
			return 62;
		default:
			break;
	}
	UNK_0xA402F6C87C08815C(bParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_478()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (UNK_0xE4EDC4B0E92C078B(uLocal_839[iVar0]))
		{
			UNK_0x142CC44DB769B57E(&(uLocal_839[iVar0]));
		}
		iVar0++;
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_852))
	{
		UNK_0x142CC44DB769B57E(&iLocal_852);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_850))
	{
		UNK_0x142CC44DB769B57E(&iLocal_850);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_851))
	{
		UNK_0x142CC44DB769B57E(&iLocal_851);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 12))
	{
		UNK_0x55D0A2DB35045A35(iLocal_747);
		UNK_0x42740B44BA8D7B43("ALARM_BELL_02");
		UNK_0x0674E58A79778E99(&bLocal_739, 12);
	}
	if (((func_451("DCONTRA_HLP1") || func_451("DCONTRA_HLP2")) || func_451("DCONTRA_HLPVCR")) || func_451("DCONTRA_HLPCR"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	func_479();
}

void func_479()
{
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 14))
	{
		func_236();
		func_225(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
		UNK_0x0674E58A79778E99(&bLocal_739, 14);
	}
}

void func_480(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

bool func_481(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_7[iVar0], bVar1);
}

void func_482()
{
	float fVar0;

	if (func_431())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 9) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 8))
		{
			func_483(func_538());
			if (!func_481(36))
			{
				func_480(36);
			}
		}
	}
	else if (func_11(&(Local_116.f_226)))
	{
		if (iLocal_749 <= 0)
		{
			func_483(func_538());
			if (!func_481(36))
			{
				func_480(36);
			}
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT((iLocal_748 - iLocal_749)) / SYSTEM::TO_FLOAT(iLocal_748));
			fVar0 = (fVar0 * 0.5f);
			func_483(fVar0);
			if (!func_481(37))
			{
				func_480(37);
			}
		}
	}
}

void func_483(float fParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = Local_116.f_197 + 1;
	iVar1 = func_537(iVar0);
	if (iVar1 > 0)
	{
		bVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * fParam0));
		if (SYSTEM::TO_FLOAT(bVar2) > (SYSTEM::TO_FLOAT(iVar1) / 2f))
		{
			bVar2 = (bVar2 - 1);
		}
		func_484(iVar0, bVar2, 0, 0, &iLocal_750, 0);
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 13);
	}
}

void func_484(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (bParam1 <= 0)
	{
		if (bParam1 == 0)
		{
		}
		*iParam4 = 3;
		return;
	}
	if (*iParam4 != 0 && *iParam4 != 1)
	{
		*iParam4 = 0;
	}
	bVar0 = func_537(iParam0);
	iVar1 = func_536(iParam0);
	if (!func_535())
	{
		if (iVar1 >= 0 && bVar0 >= bParam1)
		{
			bVar2 = (func_537(iParam0) - bParam1);
			bVar3 = false;
			if (bParam5)
			{
				bVar3 = bParam1;
			}
			func_521(iParam0, iVar1, bVar2, bVar3, 0, 11);
			func_519(func_520(iVar1), bVar2, -1, 1);
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar1 /*3*/].f_1 = bVar2;
			if (bVar3 != 0)
			{
				func_515(iParam0, bVar3);
				func_511(iParam0, bVar3);
			}
			if (UNK_0xA14BB9332558B949())
			{
				UNK_0xD1EA5FF05F650AD7(10);
			}
			func_508(1490700264, 10, 0);
			*iParam4 = 2;
		}
		else
		{
			*iParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && bVar0 >= bParam1)
	{
		bVar4 = (func_537(iParam0) - bParam1);
		bVar5 = false;
		if (bParam5)
		{
			bVar5 = bParam1;
		}
		if (func_485(iVar1, bParam1, bVar5, bParam2, iParam3, iParam4, Global_2537071.f_5124.f_382))
		{
			if (*iParam4 == 2)
			{
				func_521(iParam0, iVar1, bVar4, bVar5, 0, 11);
				func_519(func_520(iVar1), bVar4, -1, 1);
				Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar1 /*3*/].f_1 = bVar4;
				if (bVar5 != 0)
				{
					func_511(iParam0, bVar5);
				}
				if (UNK_0xA14BB9332558B949())
				{
					UNK_0xD1EA5FF05F650AD7(10);
				}
				func_508(1490700264, 10, 0);
				*iParam4 = 2;
			}
			else if (*iParam4 == 3)
			{
				*iParam4 = 3;
			}
		}
	}
	else
	{
		*iParam4 = 3;
	}
}

bool func_485(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (*iParam5 != 0 && *iParam5 != 1)
	{
		*iParam5 = 0;
	}
	switch (*iParam5)
	{
		case 0:
			iVar0 = func_507(iParam0);
			iVar1 = func_505(0, bParam1, 0, -1);
			iVar2 = func_504(iParam0);
			iVar3 = func_503(iParam0);
			switch (iParam4)
			{
				case 0:
					iVar4 = -1003644442;
					break;
				case 1:
					iVar4 = 402112378;
					break;
				case 2:
					iVar4 = 1283718111;
					break;
				case 3:
					iVar4 = 1783677420;
					break;
			}
			if (iParam4 == 0 || func_499(78225582, -1799524201, iVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_499(78225582, 69656641, iVar2, -788753717, bParam1, 0, 1, 4, 0, 3))
				{
					if (bParam2 == 0 || func_499(78225582, 69656641, iVar3, -788753717, bParam2, 0, 1, 4, 0, 3))
					{
						if (func_499(78225582, -739932302, iVar4, -788753717, 1, bParam3, 0, 4, iVar2, 3))
						{
							*iParam5 = 1;
						}
						else
						{
							*iParam5 = 3;
						}
					}
					else
					{
						*iParam5 = 3;
					}
				}
				else
				{
					*iParam5 = 3;
				}
			}
			else
			{
				*iParam5 = 3;
			}
			if (*iParam5 == 1 && func_494())
			{
			}
			else
			{
				*iParam5 = 3;
				func_489(func_493());
			}
			break;
		case 1:
			if (func_488(func_493()))
			{
				if (func_487(func_493()) == 2)
				{
					if (bParam3 > 0)
					{
						UNK_0x7A87D9FAFCB10ADC(func_486(func_493()));
						UNK_0x114C796E8DF14FB1(bParam3, iParam6);
					}
					*iParam5 = 2;
					func_489(func_493());
				}
				else
				{
					*iParam5 = 3;
					func_489(func_493());
				}
			}
			break;
	}
	return *iParam5 != 1;
}

int func_486(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_487(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

bool func_488(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return false;
}

void func_489(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_535())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_492(iParam0))
		{
			if (!bVar0)
			{
				UNK_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			UNK_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_490(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_490(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_491(&(uParam0->f_14));
	func_491(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_491(var uParam0)
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

bool func_492(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

int func_493()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_486(iVar0) != 2147483647)
		{
			if (func_492(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_494()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = false;
	if (!func_535())
	{
		bVar0 = true;
	}
	bVar1 = true;
	iVar2 = func_493();
	if (iVar2 == -1)
	{
		return false;
	}
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_36()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			if (func_498(Global_4263954[iVar2 /*85*/].f_66.f_6, Global_4263954[iVar2 /*85*/].f_66.f_4, Global_4263954[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return false;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return false;
			}
		}
	}
	iVar3 = func_486(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar3))
		{
			Global_4263954[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4263954[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar2 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_4263954[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4263954[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4263954[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || bVar1)
			{
				func_495(Global_4263954[iVar2 /*85*/], iVar2);
			}
			Global_4264521 = 1;
			return true;
		}
	}
	return false;
}

void func_495(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	bool bVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.f_1 = UNK_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	bVar36 = func_497(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_496();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_496()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_497(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

int func_498(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			case 1982688246:
				return 0;
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
			default:
				return 0;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			case 1775876058:
				return 2;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

bool func_499(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;

	bVar0 = false;
	if (!func_535())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_36()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return false;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return false;
			}
		}
	}
	if (iParam2 == 0)
	{
		return false;
	}
	iVar1 = func_493();
	if (iVar1 == -1)
	{
		if (!func_501(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return false;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_500(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = bParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = bParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4263954[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || UNK_0x54B75246B42BE23E(&Var2, bParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_500(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return true;
	}
	return false;
}

bool func_501(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar0 = false;
	if (!func_535())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_36()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return false;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return false;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return false;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return false;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (UNK_0x9D14F555AB486471())
		{
			UNK_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || UNK_0xA28E08E034174728(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_502(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, iParam5, 0, bVar0);
		return true;
	}
	return false;
}

int func_502(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_535())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = bParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = iParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_495(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_503(int iParam0)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE1_v0", 64);
			break;
		case 2:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE2_v0", 64);
			break;
		case 3:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE3_v0", 64);
			break;
		case 4:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (UNK_0xEA6BC48857E0AC4C(&cVar0))
	{
		return -1;
	}
	return UNK_0x12AB0310C2281427(&cVar0);
}

int func_504(int iParam0)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE1_v0", 64);
			break;
		case 2:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE2_v0", 64);
			break;
		case 3:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE3_v0", 64);
			break;
		case 4:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (UNK_0xEA6BC48857E0AC4C(&cVar0))
	{
		return -1;
	}
	return UNK_0x12AB0310C2281427(&cVar0);
}

int func_505(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	var uVar0;

	func_506(&uVar0, bParam0, bParam1, bParam2, iParam3);
	return UNK_0x12AB0310C2281427(&uVar0);
}

void func_506(char* sParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (bParam1)
	{
		if (bParam2 == -1)
		{
			StringCopy(sParam0, "CB_NONE_0_t0_v0", 64);
		}
		else if (bParam3)
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, bParam2, 64);
			StringConCat(sParam0, "_t1_v", 64);
			StringIntConCat(sParam0, iParam4, 64);
		}
		else
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, bParam2, 64);
			StringConCat(sParam0, "_t0_v0", 64);
		}
	}
	else
	{
		StringCopy(sParam0, "CB_SELL_0_t0_v0", 64);
	}
}

int func_507(int iParam0)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE1_v0", 64);
			break;
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE2_v0", 64);
			break;
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE3_v0", 64);
			break;
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE4_v0", 64);
			break;
	}
	if (UNK_0xEA6BC48857E0AC4C(&cVar0))
	{
		return -1;
	}
	return UNK_0x12AB0310C2281427(&cVar0);
}

void func_508(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_510(iParam1, bParam2))
	{
		iVar0 = func_509();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_509()
{
	int iVar0;
	int iVar1;

	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_510(int iParam0, bool bParam1)
{
	if (Global_1312865)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((bParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_511(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar0 = 5;
	while (iVar0 >= 0)
	{
		if (iVar1 < bParam1)
		{
			if (Global_1676094[iVar0] == iParam0)
			{
				Global_1676087[iVar0] = 0;
				Global_1676094[iVar0] = 0;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1676094[iVar0] == 0)
		{
			if (iVar2 == -1)
			{
				iVar2 = 0;
			}
		}
		else if (iVar2 != -1)
		{
			Global_1676087[iVar2] = Global_1676087[iVar0];
			Global_1676094[iVar2] = Global_1676094[iVar0];
			Global_1676087[iVar0] = 0;
			Global_1676094[iVar0] = 0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_513(func_514(iVar0), Global_1676087[iVar0], -1, 1);
		func_513(func_512(iVar0), Global_1676094[iVar0], -1, 1);
		iVar0++;
	}
}

int func_512(int iParam0)
{
	if (iParam0 == 0)
	{
		return 7648;
	}
	else if (iParam0 == 1)
	{
		return 7649;
	}
	else if (iParam0 == 2)
	{
		return 7650;
	}
	else if (iParam0 == 3)
	{
		return 7651;
	}
	else if (iParam0 == 4)
	{
		return 7652;
	}
	else if (iParam0 == 5)
	{
		return 7653;
	}
	return 7648;
}

var func_513(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam2 == -1)
	{
		bParam2 = func_36();
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

int func_514(int iParam0)
{
	if (iParam0 == 0)
	{
		return 7642;
	}
	else if (iParam0 == 1)
	{
		return 7643;
	}
	else if (iParam0 == 2)
	{
		return 7644;
	}
	else if (iParam0 == 3)
	{
		return 7645;
	}
	else if (iParam0 == 4)
	{
		return 7646;
	}
	else if (iParam0 == 5)
	{
		return 7647;
	}
	return 7642;
}

void func_515(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_518(func_536(iParam0));
	iVar1 = func_517(iVar0, -1, 0);
	if (iVar1 >= bParam1)
	{
		func_516(iVar0, (iVar1 - bParam1), -1, 1, 0);
	}
}

void func_516(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_427(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_517(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_427(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

void func_519(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_427(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_427(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_427(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_427(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_427(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_427(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_427(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_427(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_427(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_427(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_427(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_427(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_427(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_427(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_427(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_427(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_427(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_427(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_427(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_427(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_427(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_427(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_427(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_427(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_427(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_427(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_427(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_427(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_427(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_427(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_427(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_427(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_427(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_427(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_427(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_427(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_427(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_427(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_427(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_427(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_427(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_427(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_427(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_427(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_427(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_427(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_427(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_427(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_427(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_427(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_427(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_427(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_427(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_427(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3641;
		case 1:
			return 3642;
		case 2:
			return 3643;
		case 3:
			return 3644;
		case 4:
			return 3645;
		default:
			break;
	}
	return 11511;
}

void func_521(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;

	if (bParam4)
	{
		bVar0 = func_537(iParam0);
		while (bVar0 <= (bParam2 - 1))
		{
			if (bVar0 < func_534(iParam0))
			{
				if (iVar2 < bParam3)
				{
					if (func_532(func_533(iParam0), bVar0))
					{
						iVar3 = func_531(iParam5);
						func_529(iParam1, bVar0, func_530(iVar3), 1, -1);
						iVar2++;
					}
					else
					{
						iVar4 = 0;
						while (iVar4 <= (bParam2 - 1))
						{
							if (func_532(func_533(iParam0), iVar4))
							{
								if (!func_526(func_527(func_528(iParam1, iVar4, -1, -1))))
								{
									bVar5 = func_528(iParam1, iVar4, -1, -1);
									iVar6 = func_531(iParam5);
									func_529(iParam1, iVar4, func_530(iVar6), 1, -1);
									func_529(iParam1, (bParam2 - 1), bVar5, 1, -1);
									iVar2++;
									return;
								}
							}
							iVar4++;
						}
					}
				}
				else
				{
					iVar7 = 0;
					iVar8 = func_523(iParam0, bVar0, iParam5);
					if (bVar0 > 0 && !func_522(func_533(iParam0), bVar0))
					{
						while (iVar8 == func_527(func_528(iParam1, (bVar0 - 1), -1, -1)) && iVar7 < 10)
						{
							iVar8 = func_523(iParam0, bVar0, iParam5);
							iVar7++;
						}
					}
					if (iVar8 != 0)
					{
						if (func_528(iParam1, bVar0, -1, -1) == 0)
						{
							func_529(iParam1, bVar0, func_530(iVar8), 1, -1);
						}
					}
				}
			}
			bVar0++;
		}
	}
	else
	{
		bVar0 = bParam2;
		while (bVar0 <= (func_537(iParam0) - 1))
		{
			if (bVar0 < func_534(iParam0))
			{
				if (bParam3 > 0)
				{
					bVar1 = false;
					while (bVar1 <= (func_537(iParam0) - 1))
					{
						if (func_526(func_527(func_528(iParam1, bVar1, -1, -1))))
						{
							if (!func_526(func_527(func_528(iParam1, bVar0, -1, -1))))
							{
								bVar10 = func_528(iParam1, bVar1, -1, -1);
								func_529(iParam1, bVar1, func_528(iParam1, bVar0, -1, -1), 1, -1);
								func_529(iParam1, bVar0, bVar10, 1, -1);
							}
						}
						bVar1++;
					}
				}
				else if (func_526(func_527(func_528(iParam1, bVar0, -1, -1))))
				{
					bVar9 = false;
					bVar1 = false;
					while (bVar1 <= 5)
					{
						if (!bVar9)
						{
							if (bParam2 >= bVar1)
							{
								if (func_532(func_533(iParam0), bVar1))
								{
									if (!func_526(func_527(func_528(iParam1, bVar1, -1, -1))))
									{
										bVar11 = func_528(iParam1, bVar1, -1, -1);
										func_529(iParam1, bVar1, func_528(iParam1, bVar0, -1, -1), 1, -1);
										func_529(iParam1, bVar0, bVar11, 1, -1);
										bVar9 = true;
									}
								}
							}
						}
						bVar1++;
					}
				}
			}
			bVar0++;
		}
		bVar0 = bParam2;
		while (bVar0 <= (func_537(iParam0) - 1))
		{
			if (bVar0 < func_534(iParam0))
			{
				func_529(iParam1, bVar0, func_530(0), 1, -1);
			}
			bVar0++;
		}
	}
	Global_1676217 = 0;
	bVar0 = false;
	while (bVar0 <= 2)
	{
		Global_1676213[bVar0] = 0;
		bVar0++;
	}
}

bool func_522(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return false;
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_523(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 2);
	if (func_522(func_533(iParam0), iParam1))
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	iVar2 = func_525(func_533(iParam0), iParam1);
	return func_524(iParam2, iVar2, bVar1);
}

int func_524(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 2);
	iVar1 = iParam0;
	iVar2 = iParam1;
	if (bParam2)
	{
		switch (iVar1)
		{
			case 0:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("EX_PROP_CRATE_CLOSED_SC");
							case 1:
								return joaat("EX_PROP_CRATE_CLOSED_MS");
							default:
								break;
						}
						break;
					case 1:
						return joaat("EX_PROP_CRATE_CLOSED_BC");
				}
				break;
			case 1:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("EX_PROP_CRATE_CLOSED_SC");
							case 1:
								return -1958;
							default:
								break;
						}
						break;
					case 1:
						return joaat("EX_PROP_CRATE_CLOSED_BC");
				}
				break;
			case 4:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("EX_PROP_CRATE_CLOSED_SC");
							case 1:
								return joaat("EX_PROP_CRATE_CLOSED_MW");
							default:
								break;
						}
						break;
					case 1:
						return joaat("EX_PROP_CRATE_CLOSED_BC");
				}
				break;
		}
	}
	switch (iVar1)
	{
		case 0:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_MED_SC");
						case 1:
							return joaat("EX_PROP_CRATE_BIOHAZARD_SC");
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_MED_BC");
						case 1:
							return joaat("EX_PROP_CRATE_BIOHAZARD_BC");
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iVar2)
			{
				case 0:
					return joaat("EX_PROP_CRATE_TOB_SC");
				case 1:
					return joaat("EX_PROP_CRATE_TOB_BC");
				default:
					break;
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_ART_SC");
						case 1:
							return joaat("EX_PROP_CRATE_ART_02_SC");
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_ART_BC");
						case 1:
							return joaat("EX_PROP_CRATE_ART_02_BC");
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iVar2)
			{
				case 0:
					return joaat("EX_PROP_CRATE_ELEC_SC");
				case 1:
					return joaat("EX_PROP_CRATE_ELEC_BC");
				default:
					break;
			}
			break;
		case 4:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_AMMO_SC");
						case 1:
							return joaat("EX_PROP_CRATE_EXPL_SC");
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_AMMO_BC");
						case 1:
							return joaat("EX_PROP_CRATE_EXPL_BC");
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			iVar0 = UNK_0x09AC81E49EA267F7(false, 3);
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_NARC_SC");
						case 1:
							return joaat("EX_PROP_CRATE_PHARMA_SC");
						case 2:
							return joaat("EX_PROP_CRATE_HIGHEND_PHARMA_SC");
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_NARC_BC");
						case 1:
							return joaat("EX_PROP_CRATE_PHARMA_BC");
						case 2:
							return joaat("EX_PROP_CRATE_HIGHEND_PHARMA_BC");
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (iVar2)
			{
				case 0:
					return joaat("EX_PROP_CRATE_GEMS_SC");
				case 1:
					return joaat("EX_PROP_CRATE_GEMS_BC");
				default:
					break;
			}
			break;
		case 7:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_WLIFE_SC");
						case 1:
							return joaat("EX_PROP_CRATE_FURJACKET_SC");
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_WLIFE_BC");
						case 1:
							return joaat("EX_PROP_CRATE_FURJACKET_BC");
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_MONEY_SC");
						case 1:
							return joaat("EX_PROP_CRATE_CLOTHING_SC");
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_MONEY_BC");
						case 1:
							return joaat("EX_PROP_CRATE_CLOTHING_BC");
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_JEWELS_SC");
						case 1:
							return joaat("EX_PROP_CRATE_JEWELS_RACKS_SC");
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("EX_PROP_CRATE_JEWELS_BC");
						case 1:
							return joaat("EX_PROP_CRATE_JEWELS_RACKS_BC");
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iVar2)
			{
				case 0:
					return joaat("EX_PROP_CRATE_BULL_SC_02");
				case 1:
					return joaat("EX_PROP_CRATE_BULL_BC_02");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_525(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return UNK_0x09AC81E49EA267F7(false, 2);
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return UNK_0x09AC81E49EA267F7(false, 2);
			}
			break;
	}
	return -1;
}

bool func_526(int iParam0)
{
	switch (iParam0)
	{
		case joaat("EX_PROP_CRATE_OEGG"):
		case joaat("EX_PROP_CRATE_MINIG"):
		case joaat("EX_PROP_CRATE_XLDIAM"):
		case joaat("EX_PROP_CRATE_SHIDE"):
		case joaat("EX_PROP_CRATE_FREEL"):
		case joaat("EX_PROP_CRATE_WATCH"):
			return true;
		default:
			break;
	}
	return false;
}

int func_527(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 0;
		case 1:
			return joaat("EX_PROP_CRATE_CLOSED_SC");
		case 2:
			return joaat("EX_PROP_CRATE_MED_SC");
		case 3:
			return joaat("EX_PROP_CRATE_TOB_SC");
		case 4:
			return joaat("EX_PROP_CRATE_ART_SC");
		case 5:
			return joaat("EX_PROP_CRATE_ELEC_SC");
		case 6:
			return joaat("EX_PROP_CRATE_AMMO_SC");
		case 7:
			return joaat("EX_PROP_CRATE_NARC_SC");
		case 8:
			return joaat("EX_PROP_CRATE_GEMS_SC");
		case 9:
			return joaat("EX_PROP_CRATE_WLIFE_SC");
		case 10:
			return joaat("EX_PROP_CRATE_JEWELS_SC");
		case 11:
			return joaat("EX_PROP_CRATE_BULL_SC_02");
		case 12:
			return joaat("EX_PROP_CRATE_CLOSED_BC");
		case 13:
			return joaat("EX_PROP_CRATE_MED_BC");
		case 14:
			return joaat("EX_PROP_CRATE_TOB_BC");
		case 15:
			return joaat("EX_PROP_CRATE_ART_BC");
		case 16:
			return joaat("EX_PROP_CRATE_ELEC_BC");
		case 17:
			return joaat("EX_PROP_CRATE_AMMO_BC");
		case 18:
			return joaat("EX_PROP_CRATE_NARC_BC");
		case 19:
			return joaat("EX_PROP_CRATE_GEMS_BC");
		case 20:
			return joaat("EX_PROP_CRATE_WLIFE_BC");
		case 21:
			return joaat("EX_PROP_CRATE_JEWELS_BC");
		case 22:
			return joaat("EX_PROP_CRATE_BULL_BC_02");
		case 23:
			return joaat("EX_PROP_CRATE_OEGG");
		case 24:
			return joaat("EX_PROP_CRATE_MINIG");
		case 25:
			return joaat("EX_PROP_CRATE_XLDIAM");
		case 26:
			return joaat("EX_PROP_CRATE_SHIDE");
		case 27:
			return joaat("EX_PROP_CRATE_FREEL");
		case 28:
			return joaat("EX_PROP_CRATE_WATCH");
		case 29:
			return joaat("EX_PROP_CRATE_EXPL_SC");
		case 30:
			return joaat("EX_PROP_CRATE_EXPL_BC");
		case 31:
			return joaat("EX_PROP_CRATE_JEWELS_RACKS_SC");
		case 32:
			return joaat("EX_PROP_CRATE_JEWELS_RACKS_BC");
		case 33:
			return joaat("EX_PROP_CRATE_FURJACKET_SC");
		case 34:
			return joaat("EX_PROP_CRATE_FURJACKET_BC");
		case 35:
			return joaat("EX_PROP_CRATE_PHARMA_SC");
		case 36:
			return joaat("EX_PROP_CRATE_PHARMA_BC");
		case 37:
			return joaat("EX_PROP_CRATE_HIGHEND_PHARMA_SC");
		case 38:
			return joaat("EX_PROP_CRATE_HIGHEND_PHARMA_BC");
		case 39:
			return joaat("EX_PROP_CRATE_BIOHAZARD_SC");
		case 40:
			return joaat("EX_PROP_CRATE_BIOHAZARD_BC");
		case 41:
			return joaat("EX_PROP_CRATE_CLOTHING_SC");
		case 42:
			return joaat("EX_PROP_CRATE_CLOTHING_BC");
		case 43:
			return joaat("EX_PROP_CRATE_MONEY_SC");
		case 44:
			return joaat("EX_PROP_CRATE_MONEY_BC");
		case 45:
			return joaat("EX_PROP_CRATE_CLOSED_MS");
		case 46:
			return -1958;
		case 47:
			return joaat("EX_PROP_CRATE_CLOSED_MW");
		case 48:
			return joaat("EX_PROP_CRATE_ART_02_BC");
		case 49:
			return joaat("EX_PROP_CRATE_ART_02_SC");
		default:
			break;
	}
	return 0;
}

bool func_528(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	int iVar18;
	int iVar19;

	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			bParam1 += 111;
			break;
		case 2:
			bParam1 += 222;
			break;
		case 3:
			bParam1 += 333;
			break;
		case 4:
			bParam1 += 444;
			break;
	}
	iVar0 = 0;
	iVar1 = func_36();
	if (iParam3 > -1)
	{
		iVar1 = iParam3;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (bParam1 / 8), 64);
	iVar18 = UNK_0x12AB0310C2281427(&cVar2);
	iVar19 = (8 * (bParam1 % 8));
	if (0 != iVar18)
	{
		if (!UNK_0x6D37612C090B9DC5(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_529(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	char cVar2[64];
	int iVar18;
	int iVar19;

	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			bParam1 += 111;
			break;
		case 2:
			bParam1 += 222;
			break;
		case 3:
			bParam1 += 333;
			break;
		case 4:
			bParam1 += 444;
			break;
	}
	iVar1 = func_36();
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (bParam1 / 8), 64);
	iVar18 = UNK_0x12AB0310C2281427(&cVar2);
	iVar19 = (8 * (bParam1 % 8));
	if (bParam2 < 0)
	{
		bParam2 = 255;
	}
	if (0 != iVar18)
	{
		uVar0 = UNK_0xB8E1F940D68B4FA6(iVar18, bParam2, iVar19, 8, iParam3);
	}
	return uVar0;
}

bool func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case joaat("EX_PROP_CRATE_CLOSED_SC"):
			return true;
		case joaat("EX_PROP_CRATE_MED_SC"):
			return 2;
		case joaat("EX_PROP_CRATE_TOB_SC"):
			return 3;
		case joaat("EX_PROP_CRATE_ART_SC"):
			return 4;
		case joaat("EX_PROP_CRATE_ELEC_SC"):
			return 5;
		case joaat("EX_PROP_CRATE_AMMO_SC"):
			return 6;
		case joaat("EX_PROP_CRATE_NARC_SC"):
			return 7;
		case joaat("EX_PROP_CRATE_GEMS_SC"):
			return 8;
		case joaat("EX_PROP_CRATE_WLIFE_SC"):
			return 9;
		case joaat("EX_PROP_CRATE_JEWELS_SC"):
			return 10;
		case joaat("EX_PROP_CRATE_BULL_SC_02"):
			return 11;
		case joaat("EX_PROP_CRATE_CLOSED_BC"):
			return 12;
		case joaat("EX_PROP_CRATE_MED_BC"):
			return 13;
		case joaat("EX_PROP_CRATE_TOB_BC"):
			return 14;
		case joaat("EX_PROP_CRATE_ART_BC"):
			return 15;
		case joaat("EX_PROP_CRATE_ELEC_BC"):
			return 16;
		case joaat("EX_PROP_CRATE_AMMO_BC"):
			return 17;
		case joaat("EX_PROP_CRATE_NARC_BC"):
			return 18;
		case joaat("EX_PROP_CRATE_GEMS_BC"):
			return 19;
		case joaat("EX_PROP_CRATE_WLIFE_BC"):
			return 20;
		case joaat("EX_PROP_CRATE_JEWELS_BC"):
			return 21;
		case joaat("EX_PROP_CRATE_BULL_BC_02"):
			return 22;
		case joaat("EX_PROP_CRATE_OEGG"):
			return 23;
		case joaat("EX_PROP_CRATE_MINIG"):
			return 24;
		case joaat("EX_PROP_CRATE_XLDIAM"):
			return 25;
		case joaat("EX_PROP_CRATE_SHIDE"):
			return 26;
		case joaat("EX_PROP_CRATE_FREEL"):
			return 27;
		case joaat("EX_PROP_CRATE_WATCH"):
			return 28;
		case joaat("EX_PROP_CRATE_EXPL_SC"):
			return 29;
		case joaat("EX_PROP_CRATE_EXPL_BC"):
			return 30;
		case joaat("EX_PROP_CRATE_JEWELS_RACKS_SC"):
			return 31;
		case joaat("EX_PROP_CRATE_JEWELS_RACKS_BC"):
			return 32;
		case joaat("EX_PROP_CRATE_FURJACKET_SC"):
			return 33;
		case joaat("EX_PROP_CRATE_FURJACKET_BC"):
			return 34;
		case joaat("EX_PROP_CRATE_PHARMA_SC"):
			return 35;
		case joaat("EX_PROP_CRATE_PHARMA_BC"):
			return 36;
		case joaat("EX_PROP_CRATE_HIGHEND_PHARMA_SC"):
			return 37;
		case joaat("EX_PROP_CRATE_HIGHEND_PHARMA_BC"):
			return 38;
		case joaat("EX_PROP_CRATE_BIOHAZARD_SC"):
			return 39;
		case joaat("EX_PROP_CRATE_BIOHAZARD_BC"):
			return 40;
		case joaat("EX_PROP_CRATE_CLOTHING_SC"):
			return 41;
		case joaat("EX_PROP_CRATE_CLOTHING_BC"):
			return 42;
		case joaat("EX_PROP_CRATE_MONEY_SC"):
			return 43;
		case joaat("EX_PROP_CRATE_MONEY_BC"):
			return 44;
		case joaat("EX_PROP_CRATE_CLOSED_MS"):
			return 45;
		case joaat("EX_PROP_CRATE_CLOSED_RW"):
			return 46;
		case joaat("EX_PROP_CRATE_CLOSED_MW"):
			return 47;
		case joaat("EX_PROP_CRATE_ART_02_BC"):
			return 48;
		case joaat("EX_PROP_CRATE_ART_02_SC"):
			return 49;
		default:
			break;
	}
	return false;
}

int func_531(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 2:
			return joaat("EX_PROP_CRATE_OEGG");
		case 4:
			return joaat("EX_PROP_CRATE_MINIG");
		case 6:
			return joaat("EX_PROP_CRATE_XLDIAM");
		case 7:
			return joaat("EX_PROP_CRATE_SHIDE");
		case 8:
			return joaat("EX_PROP_CRATE_FREEL");
		case 9:
			return joaat("EX_PROP_CRATE_WATCH");
		default:
			break;
	}
	return 0;
}

bool func_532(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return true;
		case 2:
			if ((((((bParam1 < 7 || (bParam1 > 20 && bParam1 < 28)) || (bParam1 > 41 && bParam1 < 49)) || (bParam1 > 62 && bParam1 < 70)) || (bParam1 > 83 && bParam1 < 87)) || (bParam1 > 92 && bParam1 < 96)) || (bParam1 > 101 && bParam1 < 105))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_533(int iParam0)
{
	if (func_42(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			default:
				break;
		}
	}
	return 3;
}

int func_534(int iParam0)
{
	int iVar0;

	if (func_42(iParam0))
	{
		iVar0 = func_533(iParam0);
		if (iVar0 == 0)
		{
			return 16;
		}
		else if (iVar0 == 1)
		{
			return 42;
		}
		else
		{
			return 111;
		}
	}
	return 0;
}

bool func_535()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

int func_536(int iParam0)
{
	int iVar0;

	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_537(int iParam0)
{
	int iVar0;

	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/])
			{
				return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_538()
{
	if (!func_431())
	{
		return (SYSTEM::TO_FLOAT(Global_262145.f_16132) * 0.01f);
	}
	return (SYSTEM::TO_FLOAT(Global_262145.f_16133) * 0.01f);
}

bool func_539()
{
	int iVar0;

	if (!func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		if (!func_540(1, 1, 1, 0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 12))
			{
				UNK_0x0674E58A79778E99(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 12);
			}
			return false;
		}
		if (func_422())
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 12))
			{
				UNK_0x0674E58A79778E99(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 12);
			}
			return false;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 12))
		{
			UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = func_430();
		if (iVar0 == -1)
		{
			return false;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_386[iVar0 /*11*/].f_1, 12))
		{
			return false;
		}
	}
	return true;
}

bool func_540(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_580(UNK_0xD803B885F5E47A62(), 29))
	{
		return false;
	}
	if (func_262(UNK_0xD803B885F5E47A62(), 21))
	{
		return false;
	}
	if (func_262(UNK_0xD803B885F5E47A62(), 25))
	{
		return false;
	}
	if (bParam2)
	{
		if (UNK_0x09BE1E6DF7B80B43())
		{
			return false;
		}
	}
	if (!func_337(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (bParam0)
	{
		if (UNK_0xF929B1A0A409FF93())
		{
			return false;
		}
	}
	if (func_579(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_578())
	{
		return false;
	}
	if (func_409())
	{
		return false;
	}
	if (func_577())
	{
		return false;
	}
	if (func_403())
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	if (func_103(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!func_405())
	{
		return false;
	}
	if (func_262(UNK_0xD803B885F5E47A62(), 0) || func_262(UNK_0xD803B885F5E47A62(), 3))
	{
		return false;
	}
	if ((func_262(UNK_0xD803B885F5E47A62(), 12) || func_262(UNK_0xD803B885F5E47A62(), 14)) || func_262(UNK_0xD803B885F5E47A62(), 13))
	{
		return false;
	}
	if (func_571(UNK_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_548())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (func_547())
		{
			return false;
		}
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_546(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_545())
	{
		return false;
	}
	if (func_544(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if ((func_154(UNK_0xD803B885F5E47A62()) && func_151(UNK_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return false;
	}
	if (func_543())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (func_542(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_233(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!func_232(UNK_0xD803B885F5E47A62()))
	{
		if (func_541(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

bool func_541(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_542(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return true;
	}
	return false;
}

bool func_543()
{
	return Global_1676377.f_4303 != -1;
}

bool func_544(int iParam0)
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

bool func_545()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_546(bool bParam0)
{
	if (!func_1292(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_547()
{
	return Global_98796.f_346 > 0;
}

bool func_548()
{
	int iVar0;

	iVar0 = func_243(UNK_0xD803B885F5E47A62());
	if (((func_570(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_28) || func_569(UNK_0xD803B885F5E47A62())) || func_568(UNK_0xD803B885F5E47A62())) || func_563(UNK_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return true;
		}
	}
	if (func_562(UNK_0xD803B885F5E47A62()))
	{
		if (func_439(iVar0) || func_561(iVar0))
		{
			return true;
		}
	}
	if (func_467(UNK_0xD803B885F5E47A62()))
	{
		if (func_561(iVar0))
		{
			return true;
		}
	}
	if (func_560(UNK_0xD803B885F5E47A62()))
	{
		if (func_559(iVar0))
		{
			return true;
		}
	}
	if (func_558(UNK_0xD803B885F5E47A62()))
	{
		if (func_557(iVar0))
		{
			return true;
		}
	}
	if (func_556(UNK_0xD803B885F5E47A62()))
	{
		if (func_555(iVar0))
		{
			return true;
		}
	}
	if (func_554(UNK_0xD803B885F5E47A62()))
	{
		if (func_553(iVar0))
		{
			return true;
		}
	}
	if (func_155(UNK_0xD803B885F5E47A62(), 0))
	{
		if (func_438(iVar0))
		{
			if (func_551(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
		}
	}
	if (func_550(UNK_0xD803B885F5E47A62()))
	{
		if (func_549(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_549(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return true;
		default:
			break;
	}
	return false;
}

bool func_550(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_551(bool bParam0)
{
	if (func_552(bParam0) != func_57())
	{
		return func_552(bParam0) == func_58(bParam0);
	}
	return false;
}

bool func_552(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

bool func_553(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_554(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_555(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return true;
		default:
			break;
	}
	return false;
}

bool func_556(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_557(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return true;
		default:
			break;
	}
	return false;
}

bool func_558(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_559(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return true;
		default:
			break;
	}
	return false;
}

bool func_560(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_561(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return true;
		default:
			break;
	}
	return false;
}

bool func_562(int iParam0)
{
	if (func_167(Global_1590535[iParam0 /*876*/].f_274.f_28, -1))
	{
		return true;
	}
	return false;
}

bool func_563(int iParam0)
{
	if (func_564(Global_1590535[iParam0 /*876*/].f_274.f_28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_564(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_565(UNK_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_565(UNK_0xD803B885F5E47A62(), 0))
		{
			return false;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}
	return false;
}

bool func_565(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_57())
	{
		if (!func_567(Global_1590373))
		{
			return false;
		}
		if (bParam1)
		{
			if (UNK_0xD803B885F5E47A62() != Global_1590373)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_566(Global_1590373))
				{
					return true;
				}
			}
		}
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 24);
}

bool func_566(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return false;
}

bool func_567(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return false;
}

bool func_568(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_569(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

bool func_570(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}
	return false;
}

bool func_571(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if (func_569(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_467(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_568(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_560(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_558(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_556(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_149(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_554(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_576(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_155(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_575(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_550(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_574(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_573(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_572(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_572(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

bool func_573(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_574(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_575(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_576(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_150(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_577()
{
	return Global_1312877;
}

bool func_578()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, false);
}

bool func_579(bool bParam0)
{
	if (func_102(bParam0, 1, 0))
	{
		if (Global_1590535[bParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_580(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_5, bParam1);
}

int func_581(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_617(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_354(&(Var0.f_69), iParam7);
	}
	return func_582(&Var0);
}

int func_582(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_593(uParam0, uParam0->f_17);
	func_592(uParam0);
	if (func_53())
	{
		func_592(uParam0);
	}
	if (func_591(uParam0->f_1))
	{
		func_584();
		if (Global_2439138.f_2723[0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0 /*80*/].f_1 == 13 || Global_2439138.f_2723[0 /*80*/].f_1 == 53) || Global_2439138.f_2723[0 /*80*/].f_1 == 54) || Global_2439138.f_2723[0 /*80*/].f_1 == 58)
		{
			Global_2439138.f_2723[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1 /*80*/] = { Global_2439138.f_2723[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_584();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_354(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_583(uParam0->f_69, 128))
			{
				if (func_359(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_354(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_583(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_584()
{
	bool bVar0;

	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_585();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_585()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_589(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_586(&(Global_2439138.f_3047.f_1));
}

void func_586(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
		}
		UNK_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		UNK_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!UNK_0x131F22FE6F47A65D(UNK_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (UNK_0x757EF87A33649210() && !func_588(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_587(0);
}

void func_587(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_588(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_589(var uParam0)
{
	func_590(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_590(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

bool func_591(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return true;
	}
	return false;
}

void func_592(var uParam0)
{
	if (func_361(uParam0->f_1))
	{
		uParam0->f_72 = func_318();
	}
}

void func_593(var uParam0, bool bParam1)
{
	if (func_361(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_57() || !func_1292(bParam1, 0, 1))
	{
		return;
	}
	if (func_359(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_594(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_594(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (func_105(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_105(UNK_0xD803B885F5E47A62()) || (func_616() && func_615())) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		bVar1 = func_614();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bVar1))
			{
				if (UNK_0x83FACCC48B68F9D1(bVar1) != -1)
				{
					if (func_1292(UNK_0x83FACCC48B68F9D1(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_612(iParam1, bParam0, 0);
							}
							else
							{
								return func_606(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_606(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_612(iParam1, bParam0, 0);
				}
				else
				{
					return func_595(0, -1, 0);
				}
			}
			else
			{
				return func_595(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_612(iParam1, bParam0, 0);
		}
		else
		{
			return func_606(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_606(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_595(bool bParam0, int iParam1, bool bParam2)
{
	return func_596(UNK_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_596(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!UNK_0x40B8C182D63932FC(bParam0))
	{
		return 3;
	}
	iVar0 = UNK_0x08067D4957B73C02(bParam0);
	if ((func_605() || (func_604() && func_602())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_601(iParam2, iVar0);
		}
		else
		{
			return func_601(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_101(iVar0, iParam2, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_600(1);
				}
				else
				{
					return func_600(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_597(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_597(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_600(1);
	}
	return func_600(0);
}

int func_597(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_599(iParam0, iParam1, iParam3);
	if (func_598(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			case 3:
				return 31;
			case 4:
				return 32;
			case 5:
				return 33;
			case 6:
				return 34;
			case 7:
				return 35;
			case 8:
				return 36;
			case 9:
				return 37;
			case 10:
				return 38;
			case 11:
				return 39;
			case 12:
				return 40;
			case 13:
				return 41;
			case 14:
				return 42;
			case 15:
				return 43;
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			default:
				break;
		}
	}
	return 28;
}

bool func_598(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return true;
		}
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_599(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_101(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_600(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_601(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_599(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		default:
			break;
	}
	return 28;
}

bool func_602()
{
	if (func_603())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_603()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_604()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_605()
{
	if (func_603() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

int func_606(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (iParam2 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1590535[bVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_609())
			{
				iVar3 = func_317(bParam0);
				if (!iVar3 == -1)
				{
					return func_315(iVar3);
				}
			}
			if ((func_608(bParam1, bParam0, iVar0, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_101(UNK_0x08067D4957B73C02(bParam1), UNK_0x08067D4957B73C02(bParam0), 0) && UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_600(1);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_607(1);
			}
			else
			{
				return func_596(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_600(1);
			}
			else
			{
				return func_596(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_317(bParam0);
	if (!iVar4 == -1)
	{
		return func_315(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_607(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_608(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(bParam1) == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == iParam2;
	}
	return UNK_0x08067D4957B73C02(bParam0) == iParam2;
}

bool func_609()
{
	if (((func_173() || func_611()) || func_53()) || func_610())
	{
		return true;
	}
	return false;
}

bool func_610()
{
	return Global_2450632.f_19;
}

bool func_611()
{
	return Global_2450632.f_16;
}

int func_612(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_609())
	{
		iVar2 = func_317(bParam1);
		if (!iVar2 == -1)
		{
			return func_315(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_57())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_596(bParam1, !bParam2, iParam0, 0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_613(iParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_101(iParam0, UNK_0x08067D4957B73C02(bParam1), 0))
		{
			iVar0 = func_607(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_613(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
			break;
	}
	return 2;
}

bool func_614()
{
	return Global_2359302.f_2;
}

bool func_615()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_616()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

void func_617(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_57();
	uParam1->f_18 = func_57();
	uParam1->f_19 = func_57();
	uParam1->f_20 = func_57();
	uParam1->f_1 = iParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_618(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0);
}

void func_619(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;

	func_779(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		bVar0 = (bVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_778(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = (bVar0 + func_777(iParam0, bParam3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		bVar0 = (bVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_775(iParam0))
	{
		if (bParam1)
		{
			if (func_774(UNK_0xD803B885F5E47A62()) > 0)
			{
				func_773();
			}
			else
			{
				func_772();
			}
		}
		else
		{
			func_771();
		}
	}
	func_758(iParam0, bParam1, uParam2, &bVar0, &iVar4);
	func_756(iParam0, uParam2, &bVar0, &iVar5);
	func_732(iParam0, uParam2, &bVar0, &iVar5);
	func_729(iParam0, uParam2, &bVar0, &iVar5, &iVar7);
	func_712(iParam0, uParam2, &bVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2537071.f_5124.f_382 = iVar4;
	}
	else
	{
		Global_2537071.f_5124.f_382 = iVar5;
	}
	bVar8 = func_378();
	if (bVar8 != func_57() && iParam0 != 148)
	{
		if (func_313(UNK_0xD803B885F5E47A62(), 0))
		{
			if (!func_346(UNK_0xD803B885F5E47A62(), bVar8, 1))
			{
				func_698(&bVar0, 1);
			}
		}
	}
	func_694(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	bVar0 = (bVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674356.f_10 = iVar1;
		func_693();
		func_654(0, UNK_0x16F2683693E537C9(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (bVar0 > 0)
	{
		Global_1674356.f_9 = bVar0;
		func_637(iParam0, bVar0, iVar7, iVar4, iVar5, uParam2);
		func_636(iParam0, bVar0);
		if (func_635(iParam0))
		{
			if (func_634(iParam0) > -1)
			{
				func_633(func_634(iParam0), bVar0);
			}
		}
		Global_2462880 = bVar0;
		func_632(&Global_2461144, 0, 0);
	}
	if (func_265(UNK_0xD803B885F5E47A62()) || func_232(UNK_0xD803B885F5E47A62()))
	{
		func_626(iParam0);
	}
	if (func_456(iParam0))
	{
		Global_1674374.f_13 = bVar0;
		Global_1674374.f_14 = iVar1;
	}
	if (func_461(iParam0))
	{
		Global_1674428.f_13 = bVar0;
		Global_1674428.f_14 = iVar1;
	}
	if (func_559(iParam0))
	{
		Global_1674491.f_12 = bVar0;
		Global_1674491.f_13 = iVar1;
	}
	if (func_557(iParam0))
	{
		Global_1674535.f_12 = bVar0;
		Global_1674535.f_13 = iVar1;
	}
	if (func_555(iParam0))
	{
		Global_1674589.f_12 = bVar0;
		Global_1674589.f_13 = iVar1;
	}
	if (func_460(iParam0))
	{
		if (func_625(iParam0))
		{
			Global_1674671.f_12 = bVar0;
			Global_1674671.f_13 = iVar1;
		}
		else if (func_621(iParam0))
		{
			Global_1674725.f_12 = bVar0;
			Global_1674725.f_13 = iVar1;
		}
	}
	if (func_620(iParam0))
	{
		Global_1674809.f_12 = bVar0;
		Global_1674809.f_13 = iVar1;
	}
	if (func_549(iParam0))
	{
		Global_1674884.f_16 = bVar0;
		Global_1674884.f_17 = iVar1;
	}
}

bool func_620(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return true;
		default:
			break;
	}
	return false;
}

bool func_621(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_622(func_623(UNK_0xD803B885F5E47A62()))))
	{
		return true;
	}
	return false;
}

bool func_622(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

int func_623(bool bParam0)
{
	if (func_243(bParam0) == 237 || func_243(bParam0) == 250)
	{
		return func_624(bParam0);
	}
	return -1;
}

int func_624(bool bParam0)
{
	if (func_244(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_625(int iParam0)
{
	if (iParam0 == 237)
	{
		return true;
	}
	return false;
}

void func_626(int iParam0)
{
	if (func_631(UNK_0xD803B885F5E47A62()) && func_630())
	{
		if (func_439(iParam0))
		{
			func_628(10146, -1);
		}
		else if (func_440(iParam0))
		{
			func_628(10148, -1);
		}
		else if (func_344(iParam0, 1))
		{
			func_628(10149, -1);
		}
		else if (func_627(iParam0))
		{
			func_628(10150, -1);
		}
	}
}

bool func_627(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return true;
		default:
			break;
	}
	return false;
}

void func_628(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_517(iParam0, func_427(iParam1), 0);
	bVar0++;
	if (!func_629(iParam0))
	{
		func_516(iParam0, bVar0, iParam1, 1, 0);
	}
	else
	{
		func_519(iParam0, bVar0, iParam1, 1);
	}
}

bool func_629(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return true;
		}
	}
	return false;
}

bool func_630()
{
	return func_377(UNK_0xD803B885F5E47A62());
}

bool func_631(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_123, 14);
}

void func_632(var uParam0, bool bParam1, bool bParam2)
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

void func_633(int iParam0, bool bParam1)
{
	if (bParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!UNK_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (bParam1 > Global_262145.f_6584)
				{
					bParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = bParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

int func_634(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		case 157:
			return 22;
		case 159:
			return 21;
		case 151:
			return 33;
		case 148:
			return 23;
		case 164:
			return 24;
		case 152:
			return 26;
		case 153:
			return 30;
		case 154:
			return 32;
		case 155:
			return 28;
		case 160:
			return 29;
		case 162:
			return 31;
		case 163:
			return 27;
		case 166:
			return 38;
		case 170:
			return 34;
		case 171:
			return 35;
		case 172:
			return 36;
		case 173:
			return 37;
		case 179:
			return 23;
		default:
			break;
	}
	return 0;
}

bool func_635(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		case 169:
			iVar0 = 0;
			break;
		case 168:
			iVar0 = 0;
			break;
		case 166:
			iVar0 = 0;
			break;
		case 190:
			iVar0 = 0;
			break;
		case 191:
			iVar0 = 0;
			break;
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_636(int iParam0, bool bParam1)
{
	if (func_631(UNK_0xD803B885F5E47A62()) && func_630())
	{
		if (func_439(iParam0) && bParam1 > 0)
		{
			func_516(10147, (func_517(10147, -1, 0) + bParam1), -1, 1, 0);
		}
	}
}

void func_637(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<2> Var7;

	bVar5 = func_653();
	if (bVar5 != func_57())
	{
		func_652(bVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_651(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_535())
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam3);
			}
			break;
		case 190:
			if (func_630())
			{
				if (!func_535())
				{
					Var7 = { func_650() };
					UNK_0x52E03D7A828118C8(bParam1, UNK_0x12AB0310C2281427(func_649(Var7)), func_648(Var7), iParam4);
				}
			}
			else if (func_535())
			{
				func_644(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 226:
			if (func_643())
			{
				if (!func_535())
				{
					UNK_0x52E03D7A828118C8(bParam1, UNK_0x12AB0310C2281427(func_649(func_642(UNK_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_535())
			{
				func_644(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 230:
			if (func_643())
			{
				if (!func_535())
				{
					iVar2 = func_638(uParam5->f_16, iParam4);
					bVar3 = bParam1;
					if (iVar2 > 0)
					{
						bVar3 = (bVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						bVar3 = (bVar3 - iParam2);
					}
					UNK_0x13A30CD1AD15553C(bVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_535())
			{
				func_644(463142405, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x3CF6953686BFBF61(uVar0, uVar1, bParam1, bVar6);
			}
			break;
		case 233:
			if (func_535())
			{
				func_644(1407278493, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x53D560AAF6BF3D4E(bParam1);
			}
			break;
		case 237:
			if (func_643())
			{
				if (!func_535())
				{
					UNK_0x5D421B9474B610E6(bParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_535())
			{
				func_644(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x114C796E8DF14FB1(bParam1, iParam4);
			}
			break;
		case 250:
			if (func_535())
			{
				func_644(-961034881, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0xA106C1682C790290(bParam1);
			}
			break;
		case 249:
			if (func_535())
			{
				func_644(1135468152, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x546613D1293DBF87(bParam1);
			}
			break;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_535())
			{
				func_644(-634726636, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x163F1C05711ACF77(bParam1);
			}
			break;
		case 243:
			if (func_535())
			{
				func_644(1698417709, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0xA8C1B24657FB32B3(bParam1);
			}
			break;
		case 158:
			if (uParam5->f_22)
			{
				if (func_535())
				{
					func_644(1668610896, bParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					UNK_0xB0E03FD240577D6C(bParam1, 0, false, 1, bParam1, 0, false);
				}
			}
			else if (func_535())
			{
				func_644(-2032529561, bParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				UNK_0xB0E03FD240577D6C(bParam1, 1, bParam1, 0, false, 0, false);
			}
			break;
		default:
			if (func_535())
			{
				func_644(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = uVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0x0C06D61FE6218C43(uVar0, uVar1, bParam1, bVar6);
			}
			break;
	}
}

int func_638(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_641(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_639(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_639(int iParam0, int iParam1)
{
	return (func_640(iParam0) * iParam1);
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		case 0:
			return Global_262145.f_22307;
		case 1:
			return Global_262145.f_22308;
		case 2:
			return Global_262145.f_22309;
		case 3:
			return Global_262145.f_22310;
		case 4:
			return Global_262145.f_22311;
		case 5:
			return Global_262145.f_22312;
		case 6:
			return Global_262145.f_22313;
		case 7:
			return Global_262145.f_22314;
		default:
			break;
	}
	return 0;
}

float func_641(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_642(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return 0;
	}
	return Global_1590535[bParam0 /*876*/].f_274.f_183[5 /*12*/];
}

bool func_643()
{
	return func_264(UNK_0xD803B885F5E47A62());
}

void func_644(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_535())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_645(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
			}
			break;
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_645(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_645(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
			}
			break;
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_645(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_645(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_535())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_36()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*iParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || UNK_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar4))
		{
			*iParam0 = func_502(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_4263954[*iParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*iParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_647(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_646(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_646(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_489(iParam0);
	}
}

void func_647(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 4;
		case 9:
			return 2;
		case 10:
			return 0;
		case 11:
			return 3;
		case 12:
			return 1;
		case 13:
			return 4;
		case 14:
			return 2;
		case 15:
			return 0;
		case 16:
			return 3;
		case 17:
			return 1;
		case 18:
			return 4;
		case 19:
			return 2;
		case 20:
			return 0;
		case 21:
			return 5;
		case 22:
			return 5;
		case 23:
			return 5;
		case 24:
			return 5;
		case 25:
			return 5;
		case 26:
			return 5;
		case 27:
			return 5;
		case 28:
			return 5;
		case 29:
			return 5;
		case 30:
			return 5;
		case 31:
			return 5;
		default:
			break;
	}
	return -1;
}

char* func_649(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_650()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_193;
}

bool func_651(bool bParam0)
{
	return func_313(UNK_0xD803B885F5E47A62(), bParam0);
}

void func_652(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628237[bParam0 /*615*/].f_11.f_8[0];
	*uParam2 = Global_1628237[bParam0 /*615*/].f_11.f_8[1];
}

bool func_653()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_654(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_655(iParam0, bParam1, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

bool func_655(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_665(iParam0, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xEC560E589DF8370E(bParam1))
			{
				bVar1 = UNK_0x940C1429253D3B1B(bParam1);
				func_661(UNK_0x64430C979F516F7A(bVar1, 31086, 0f, 0f, 0f), bVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_656(bParam1, bVar0, iParam8, iParam10);
	}
	return bVar0;
}

void func_656(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_659(bParam0, 1) };
	if (bParam0 == func_658(UNK_0x16F2683693E537C9()))
	{
		func_657(1);
	}
	func_661(vVar0, bParam1, 0, bParam2, iParam3);
}

void func_657(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_658(int iParam0)
{
	return iParam0;
}

Vector3 func_659(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (UNK_0x19C7D1907D1DDDAB())
	{
		vVar3 = { UNK_0x3B276DB863622D2E(2) };
	}
	if (bParam0 == func_660(UNK_0x16F2683693E537C9()) && UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { UNK_0x68E4ADDDDCD7BDDE(bParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	bVar6 = 0f;
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		bVar6 = UNK_0xD9522BA9E27E1349(bParam0);
		if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
		{
			bVar6 = vVar3.z;
		}
	}
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { UNK_0x8A5E176FF719A014(vVar0, bVar6, 0f, 0f, fVar13) };
	return vVar0;
}

bool func_660(int iParam0)
{
	return iParam0;
}

void func_661(vector3 vParam0, bool bParam3, int iParam4, char* sParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (bParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1 /*30*/] = { vParam0 };
			Global_2439138.f_1290[iVar1 /*30*/].f_6 = 1;
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_664(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = UNK_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = bParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_663();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_662();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam6);
		}
	}
}

int func_662()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_663()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_664(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x07DAF5424BC6779A(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

bool func_665(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;

	bVar0 = func_666(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, bParam2, iParam3, bParam7);
	return bVar0;
}

bool func_666(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_692(UNK_0xD803B885F5E47A62()) || func_691(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_365() || func_690(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_689(bParam2))
	{
	}
	if (func_688())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_686(bVar1);
		fVar3 = (SYSTEM::TO_FLOAT(bVar1) * Global_262145.f_1);
		bVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			bVar1 = func_685(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_683(0, &bVar1);
					break;
				case 3:
					func_683(1, &bVar1);
					break;
				case 1:
					func_681(&bVar1);
					break;
			}
		}
		if (bVar1 > Global_1686714)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					bVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					bVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_680(1164, bVar1, -1);
			if (iParam1 == 0)
			{
				func_676((func_679(UNK_0xD803B885F5E47A62()) + bVar1), iParam9, 0);
				if (bParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				UNK_0x189A6F4108CDFDD6(bVar1, bParam8, iParam9);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_680(1165, bVar1, -1);
				}
				func_671(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_667((func_669(UNK_0xD803B885F5E47A62()) + bVar1));
			}
			else
			{
				func_667((func_669(UNK_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_667(bool bParam0)
{
	if (func_688())
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_5 = bParam0;
		func_668(joaat("MPPLY_GLOBALXP"), bParam0);
	}
}

void func_668(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

int func_669(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_1292(bParam0, 0, 1))
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return func_670(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_670(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_670(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_671(bool bParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_59(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_674(func_675(&Var0));
			if (iVar13 == 0)
			{
				func_673(&Global_1387915, bParam0);
				func_672(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_673(&Global_1387916, bParam0);
				func_672(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_673(&Global_1387917, bParam0);
				func_672(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_673(&Global_1387918, bParam0);
				func_672(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_673(&Global_1387919, bParam0);
				func_672(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_672(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1387910 = bParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1387913 = bParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1387914 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1387915 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1387916 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1387917 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1387918 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1387919 = bParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1387920 = bParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1387921 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1387922 = bParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1387923 = bParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1387924 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1387925 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1387926 = bParam1;
			break;
		default:
			break;
	}
}

void func_673(var uParam0, bool bParam1)
{
	*uParam0 = (*uParam0 + bParam1);
}

int func_674(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_675(var uParam0)
{
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_676(bool bParam0, int iParam1, int iParam2)
{
	if (func_688())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1388060[func_427(-1)])
				{
					UNK_0x189A6F4108CDFDD6(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1388060[func_427(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 == 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 < 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_190(UNK_0xD803B885F5E47A62()))
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_1 = bParam0;
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_677(bParam0, 1);
		}
		func_519(639, bParam0, -1, 1);
		func_516(640, func_677(bParam0, 1), -1, 1, 0);
		Global_1388060[func_427(-1)] = bParam0;
		func_508(-1109644434, 7, 0);
	}
}

int func_677(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_678(bParam0, 0);
}

int func_678(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == bParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < bParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_679(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_427(-1)];
			}
			else if (func_190(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_427(-1)];
	}
	return 0;
}

void func_680(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_517(iParam0, func_427(iParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_629(iParam0))
	{
		func_516(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_519(iParam0, bVar0, iParam2, 1);
	}
}

void func_681(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		bVar4 = UNK_0xF4FB3A22FC4991C8(bVar0);
		if (UNK_0x81A93C8315C28F58(bVar4))
		{
			bVar5 = UNK_0x4B2BFE4A3BC248ED(bVar4);
			if (UNK_0x08067D4957B73C02(bVar5) != -1)
			{
				if (UNK_0x08067D4957B73C02(bVar5) == iVar1 || func_101(UNK_0x08067D4957B73C02(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != UNK_0xD803B885F5E47A62())
					{
						if (func_60(UNK_0xD803B885F5E47A62(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_682(*bParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_682(*bParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_682(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_683(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x54EABC0DD106045B())
		{
			bVar3 = iVar0;
			if (UNK_0x81A93C8315C28F58(bVar3))
			{
				bVar4 = UNK_0x4B2BFE4A3BC248ED(bVar3);
				if (func_1292(bVar4, 0, 1))
				{
					if (bVar4 != UNK_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_60(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_1292(bVar4, 1, 1))
			{
				if (bVar4 != UNK_0xD803B885F5E47A62())
				{
					if (func_684(UNK_0xD803B885F5E47A62(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_60(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_682(*bParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_682(*bParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_684(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_52(bParam0), func_52(bParam1));
	return 0f;
}

bool func_685(bool bParam0)
{
	int iVar0;

	if (UNK_0xA0501A3E65437842() != 3)
	{
		return *bParam0;
	}
	iVar0 = SYSTEM::ROUND((func_682(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

bool func_686(bool bParam0)
{
	if (bParam0 < 0)
	{
		if (UNK_0x51D1D19912234EA0(bParam0) > func_679(UNK_0xD803B885F5E47A62()))
		{
			bParam0 = -func_679(UNK_0xD803B885F5E47A62());
		}
	}
	if (func_687(8000, 0, 0) > 0)
	{
		if (func_687(8000, 0, 0) < (bParam0 + func_679(UNK_0xD803B885F5E47A62())))
		{
			bParam0 = (func_687(8000, 0, 0) - func_679(UNK_0xD803B885F5E47A62()));
		}
	}
	return bParam0;
}

int func_687(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

bool func_688()
{
	return true;
}

bool func_689(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

bool func_690(bool bParam0)
{
	return func_555(func_243(bParam0));
}

bool func_691(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_692(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_693()
{
	Global_2462221 = 1;
}

void func_694(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*iParam1 = 0;
	*iParam2 = 0;
	if (!func_218(7))
	{
		return;
	}
	iVar0 = func_697(iParam0);
	iVar1 = func_696(iParam0);
	iVar2 = UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(Global_2537071.f_5124.f_265, UNK_0x2B6E0A53779D29EA()));
	if (func_695(iParam0) != -1)
	{
		if (iVar2 > func_695(iParam0))
		{
			iVar2 = func_695(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*iParam1 = (iVar3 * iVar1);
	*iParam2 = (iVar3 * iVar0);
}

int func_695(int iParam0)
{
	if (func_344(iParam0, 0) || func_440(iParam0))
	{
		return Global_262145.f_18487;
	}
	if (func_439(iParam0))
	{
		return Global_262145.f_18486;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18483;
		case 191:
			return Global_262145.f_18485;
		case 190:
			return Global_262145.f_18484;
		case 227:
			return Global_262145.f_21043;
		case 226:
			return Global_262145.f_21031;
		case 225:
			return Global_262145.f_21051;
		case 230:
			return Global_262145.f_22303;
		case 229:
			return Global_262145.f_22207;
		case 233:
			return Global_262145.f_22779;
		case 237:
			return Global_262145.f_23942;
		case 238:
			return Global_262145.f_24053;
		case 249:
			return Global_262145.f_24069;
		case 243:
			return Global_262145.f_26301;
		default:
			break;
	}
	return -1;
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		case 152:
			return Global_262145.f_12521;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12509;
		case 157:
			return Global_262145.f_12476;
		case 159:
			return Global_262145.f_12459;
		case 164:
			return Global_262145.f_12499;
		case 160:
			return Global_262145.f_12549;
		case 162:
			return Global_262145.f_12569;
		case 163:
			return Global_262145.f_12534;
		case 154:
			return Global_262145.f_12604;
		case 155:
			return Global_262145.f_12594;
		case 153:
			return Global_262145.f_12558;
		case 170:
			return Global_262145.f_14995;
		case 171:
			return Global_262145.f_15054;
		case 172:
			return Global_262145.f_15072;
		case 173:
			return Global_262145.f_15013;
		case 166:
			return Global_262145.f_15028;
		case 167:
			return Global_262145.f_15119;
		case 169:
			return Global_262145.f_15091;
		case 168:
			return Global_262145.f_15084;
		case 179:
			return Global_262145.f_18366;
		case 180:
			return Global_262145.f_18144;
		case 182:
			return Global_262145.f_18144;
		case 183:
			return Global_262145.f_18144;
		case 185:
			return Global_262145.f_18144;
		case 186:
			return Global_262145.f_18144;
		case 189:
			return Global_262145.f_18366;
		case 190:
			return Global_262145.f_18020;
		case 191:
			return Global_262145.f_18111;
		case 192:
			return Global_262145.f_17905;
		case 193:
			return Global_262145.f_18366;
		case 194:
			return Global_262145.f_18366;
		case 195:
			return Global_262145.f_18144;
		case 197:
			return Global_262145.f_18144;
		case 198:
			return Global_262145.f_18144;
		case 199:
			return Global_262145.f_18366;
		case 200:
			return Global_262145.f_18366;
		case 201:
			return Global_262145.f_18366;
		case 205:
			return Global_262145.f_18366;
		case 207:
			return Global_262145.f_18144;
		case 208:
			return Global_262145.f_18144;
		case 209:
			return Global_262145.f_18144;
		case 210:
			return Global_262145.f_18366;
		case 211:
			return Global_262145.f_18366;
		case 214:
			return Global_262145.f_19216;
		case 215:
			return Global_262145.f_19218;
		case 216:
			return Global_262145.f_19220;
		case 217:
			return Global_262145.f_19222;
		case 218:
			return Global_262145.f_19224;
		case 219:
			return Global_262145.f_19226;
		case 220:
			return Global_262145.f_19228;
		case 221:
			return Global_262145.f_19230;
		case 225:
			if (!func_643())
			{
				return Global_262145.f_21053;
			}
			break;
		case 226:
			if (!func_643())
			{
				return Global_262145.f_21033;
			}
			break;
		case 227:
			if (!func_643())
			{
				return Global_262145.f_21045;
			}
			break;
		case 229:
			if (!func_643())
			{
				return Global_262145.f_22209;
			}
			break;
		case 230:
			if (!func_643())
			{
				return Global_262145.f_22305;
			}
			break;
		case 233:
			if (!func_643())
			{
				return Global_262145.f_22778;
			}
			break;
		case 241:
			return 100;
		case 242:
			return 100;
		case 244:
			return 100;
		case 248:
			return 100;
		case 239:
			return 100;
		case 240:
			return 100;
		case 250:
			return 100;
		case 237:
			if (!func_643())
			{
				return Global_262145.f_23944;
			}
			break;
		case 238:
			if (!func_643())
			{
				return Global_262145.f_24055;
			}
			break;
		case 249:
			if (!func_643())
			{
				return Global_262145.f_24071;
			}
			break;
		case 243:
			if (!func_643())
			{
				return Global_262145.f_26304;
			}
			break;
		case 158:
			if (!func_643())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		case 152:
			return Global_262145.f_12520;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12508;
		case 157:
			return Global_262145.f_12475;
		case 159:
			return Global_262145.f_12458;
		case 164:
			return Global_262145.f_12498;
		case 160:
			return Global_262145.f_12548;
		case 162:
			return Global_262145.f_12568;
		case 163:
			return Global_262145.f_12533;
		case 154:
			return Global_262145.f_12603;
		case 155:
			return Global_262145.f_12593;
		case 153:
			return Global_262145.f_12557;
		case 170:
			return Global_262145.f_14994;
		case 171:
			return Global_262145.f_15053;
		case 172:
			return Global_262145.f_15071;
		case 173:
			return Global_262145.f_15012;
		case 166:
			return Global_262145.f_15027;
		case 179:
			return Global_262145.f_18365;
		case 180:
			return Global_262145.f_18143;
		case 182:
			return Global_262145.f_18143;
		case 183:
			return Global_262145.f_18143;
		case 185:
			return Global_262145.f_18143;
		case 186:
			return Global_262145.f_18143;
		case 189:
			return Global_262145.f_18365;
		case 193:
			return Global_262145.f_18365;
		case 194:
			return Global_262145.f_18365;
		case 195:
			return Global_262145.f_18143;
		case 197:
			return Global_262145.f_18143;
		case 198:
			return Global_262145.f_18143;
		case 199:
			return Global_262145.f_18365;
		case 200:
			return Global_262145.f_18365;
		case 201:
			return Global_262145.f_18365;
		case 205:
			return Global_262145.f_18365;
		case 207:
			return Global_262145.f_18143;
		case 208:
			return Global_262145.f_18143;
		case 209:
			return Global_262145.f_18143;
		case 210:
			return Global_262145.f_18365;
		case 211:
			return Global_262145.f_18365;
		case 190:
			if (func_375(0))
			{
				return Global_262145.f_18019;
			}
			else
			{
				return 0;
			}
			break;
		case 191:
			if (func_375(0))
			{
				return Global_262145.f_18110;
			}
			else
			{
				return 0;
			}
			break;
		case 192:
			if (func_375(0))
			{
				return Global_262145.f_17904;
			}
			else
			{
				return 0;
			}
			break;
		case 214:
			return Global_262145.f_19215;
		case 215:
			return Global_262145.f_19217;
		case 216:
			return Global_262145.f_19219;
		case 217:
			return Global_262145.f_19221;
		case 218:
			return Global_262145.f_19223;
		case 219:
			return Global_262145.f_19225;
		case 220:
			return Global_262145.f_19227;
		case 221:
			return Global_262145.f_19229;
		case 225:
			if (func_375(0))
			{
				return Global_262145.f_21052;
			}
			break;
		case 226:
			if (func_375(0))
			{
				return Global_262145.f_21032;
			}
			break;
		case 227:
			if (func_375(0))
			{
				return Global_262145.f_21044;
			}
			break;
		case 229:
			if (func_375(0))
			{
				return Global_262145.f_22208;
			}
			break;
		case 230:
			if (func_375(0))
			{
				return Global_262145.f_22304;
			}
			break;
		case 233:
			if (func_375(0))
			{
				return Global_262145.f_22780;
			}
			break;
		case 241:
			return 500;
		case 242:
			return 500;
		case 244:
			return 500;
		case 248:
			return 500;
		case 239:
			return 500;
		case 240:
			return 500;
		case 250:
			return 500;
		case 237:
			if (func_375(0))
			{
				return Global_262145.f_23943;
			}
			break;
		case 238:
			if (func_375(0))
			{
				return Global_262145.f_24054;
			}
			break;
		case 249:
			if (func_375(0))
			{
				return Global_262145.f_24070;
			}
			break;
		case 243:
			return Global_262145.f_26300;
		case 158:
			if (func_375(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_698(bool bParam0, int iParam1)
{
	bool bVar0;

	if (*bParam0 > 0)
	{
		if (!func_643())
		{
			if (func_651(0))
			{
				if (!func_375(0))
				{
					if (UNK_0x40B8C182D63932FC(func_653()))
					{
						if (func_711() == 100)
						{
							bVar0 = *bParam0;
							*bParam0 = 0;
						}
						else
						{
							bVar0 = ((*bParam0 / 100) * func_711());
							*bParam0 = (*bParam0 - bVar0);
						}
						func_709(&bVar0, 0);
						if (iParam1 == 1)
						{
							func_702("GB_BCUT_TICK1", func_653(), bVar0, 0, 0, 1);
						}
						func_480(20);
						func_699(func_653(), bVar0, 1);
					}
				}
			}
		}
	}
}

void func_699(bool bParam0, bool bParam1, int iParam2)
{
	struct<8> Var0;

	if (func_1292(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = UNK_0xD803B885F5E47A62();
		Var0.f_2 = bParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_701(bParam0);
		func_700(&(Var0.f_6), &(Var0.f_7));
		UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_497(bParam0));
	}
}

void func_700(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_701(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

int func_702(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	char cVar1[64];

	iVar0 = -1;
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam5)
	{
		if (!bParam4)
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&cVar1))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		UNK_0x3A820E495A7BA3E5(func_594(bParam1, -2, 1, 0, 0));
		UNK_0xD06AC7C87A34A6AD(func_707(&cVar1));
		if (!bParam3 == 0)
		{
			UNK_0x3A820E495A7BA3E5(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam2);
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		func_703(27, bParam0, 1, &cVar1, bParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_703(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_706() || !UNK_0xA14BB9332558B949()) || !func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_704(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = bParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_704(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_705(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_705(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_706()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

var func_707(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_708(&cVar0);
}

char[] func_708(char[4] cParam0)
{
	return cParam0;
}

void func_709(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_710(1);
	}
	else
	{
		iVar1 = func_710(0);
	}
	iVar0 = ((*bParam0 / 100) * iVar1);
	*bParam0 = (*bParam0 - iVar0);
}

int func_710(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_711()
{
	return Global_262145.f_12389;
}

void func_712(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;

	bVar18 = func_375(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_643())
		{
			bVar17 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar17 = func_653();
		}
		bVar11 = bVar17;
		if (bVar11 != -1)
		{
			iVar0 = Global_1590535[bVar11 /*876*/].f_854.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*iParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590535[bVar11 /*876*/].f_854.f_2;
			}
			else
			{
				iVar2 = func_728(Global_1590535[bVar11 /*876*/].f_854, *iParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*bParam2 = (*bParam2 + iVar2);
			bVar10 = func_727(*bParam2);
			if (bVar10 > 0)
			{
				if (bVar17 == UNK_0xD803B885F5E47A62())
				{
					func_726("TICK_TCUT", bVar10);
				}
				*bParam2 = (*bParam2 - bVar10);
			}
			Global_1674671.f_49 = *iParam3;
			if (bVar17 == UNK_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_725(iVar2);
				}
				if (*iParam3 > 0)
				{
					func_723(*iParam3);
				}
				iVar6 = func_722(&uVar5);
				iVar7 = Global_262145.f_23973;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23972));
				iVar8 = ((*bParam2 / 100) * iVar9);
				*bParam2 = (*bParam2 + iVar8);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_480(140);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < UNK_0x54EABC0DD106045B())
						{
							bVar22 = iVar21;
							if (UNK_0x81A93C8315C28F58(bVar22))
							{
								bVar23 = UNK_0x4B2BFE4A3BC248ED(bVar22);
								if (func_721(bVar23))
								{
									func_713(bVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23945;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar16));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_23946;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_480(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_713(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_715(bParam0);
	func_714(bParam0, iVar0, iParam1, iParam2);
}

void func_714(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<8> Var0;

	Var0 = -601653676;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_3 = iParam3;
	Var0.f_5 = func_701(bParam0);
	func_700(&(Var0.f_6), &(Var0.f_7));
	if (bParam0 != func_57())
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_497(bParam0));
		}
	}
}

int func_715(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_720();
	iVar0 = func_718(bParam0, iVar0);
	iVar1 = Global_1628237[func_653() /*615*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14955));
	if (iVar0 < func_717())
	{
		iVar0 = func_717();
	}
	if (iVar0 > func_716())
	{
		iVar0 = func_716();
	}
	return iVar0;
}

int func_716()
{
	return Global_262145.f_14956;
}

int func_717()
{
	return Global_262145.f_16131;
}

int func_718(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = (func_774(bParam0) * func_719());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_719()
{
	return Global_262145.f_16130;
}

int func_720()
{
	return Global_262145.f_12381;
}

bool func_721(bool bParam0)
{
	if (UNK_0x40B8C182D63932FC(bParam0))
	{
		if (bParam0 != UNK_0xD803B885F5E47A62())
		{
			if (func_346(bParam0, UNK_0xD803B885F5E47A62(), 0))
			{
				if (!func_247(bParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_722(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(bVar0)))
		{
			bVar2 = UNK_0x117658E336116132(bVar0);
			if (!func_34(bVar2, 0) && !func_346(bVar2, UNK_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_34(bVar2, 0))
			{
				*uParam0++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void func_723(int iParam0)
{
	func_724(iParam0, 7236);
}

void func_724(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_517(iParam1, -1, 0);
	func_516(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_725(int iParam0)
{
	func_724(iParam0, 7231);
}

int func_726(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_703(3, bParam0, 1, "", bParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_727(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23974);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_728(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_729(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;

	*iParam4 = 0;
	bVar16 = func_375(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_643())
		{
			bVar15 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar15 = func_653();
		}
		if (bVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_639(uParam1->f_16, *iParam3);
			*bParam2 = (*bParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_638(uParam1->f_16, *iParam3);
				if (iVar9 > 0)
				{
					*bParam2 = (*bParam2 + iVar9);
				}
			}
			if (func_731(*bParam2) > 0)
			{
				if (bVar15 == UNK_0xD803B885F5E47A62())
				{
					func_726("SMTICK_RONCUT", func_731(*bParam2));
				}
				*bParam2 = (*bParam2 - func_731(*bParam2));
			}
			if (bVar15 == UNK_0xD803B885F5E47A62())
			{
				func_730(iVar2, iVar9);
				iVar6 = func_722(&uVar5);
				iVar7 = Global_262145.f_22322;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22321));
				*iParam4 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + *iParam4);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_480(44);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < UNK_0x54EABC0DD106045B())
						{
							bVar19 = iVar18;
							if (UNK_0x81A93C8315C28F58(bVar19))
							{
								bVar20 = UNK_0x4B2BFE4A3BC248ED(bVar19);
								if (func_721(bVar20))
								{
									func_713(bVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22255;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_22256;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_480(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_730(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_724(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_724(iParam1, 6117);
	}
}

bool func_731(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22289);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22290))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22290);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_732(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;

	bVar17 = func_375(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_643())
		{
			bVar15 = UNK_0xD803B885F5E47A62();
		}
		else
		{
			bVar15 = func_653();
		}
		if (bVar15 != -1)
		{
			iVar16 = func_642(bVar15);
			iVar0 = (func_755(bVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_751(bVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21035));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21034));
			}
			*bParam2 = (*bParam2 + iVar2);
			if (bVar15 == UNK_0xD803B885F5E47A62())
			{
				func_746(iVar16, iVar2);
				if (func_742(iVar16) >= Global_262145.f_20583 || iVar2 >= Global_262145.f_20583)
				{
					func_733(5);
				}
				iVar6 = func_722(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21037);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21036));
				iVar9 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + iVar9);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_480(108);
					}
					else
					{
						func_480(110);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < UNK_0x54EABC0DD106045B())
						{
							bVar19 = iVar18;
							if (UNK_0x81A93C8315C28F58(bVar19))
							{
								bVar20 = UNK_0x4B2BFE4A3BC248ED(bVar19);
								if (func_721(bVar20))
								{
									func_713(bVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21038;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_21039;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_480(112);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_733(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20571)
			{
				if (func_735(Global_262145.f_20572))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		case 1:
			if (Global_262145.f_20573)
			{
				if (func_735(Global_262145.f_20574))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		case 2:
			if (Global_262145.f_20575)
			{
				if (func_735(Global_262145.f_20576))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		case 3:
			if (Global_262145.f_20577)
			{
				if (func_735(Global_262145.f_20578))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		case 4:
			if (Global_262145.f_20579)
			{
				if (func_735(Global_262145.f_20580))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		case 5:
			if (Global_262145.f_20581)
			{
				if (func_735(Global_262145.f_20582))
				{
					func_726("CLOTHAWDSTRAP3", Global_262145.f_20583);
				}
			}
			break;
		case 6:
			if (Global_262145.f_20584)
			{
				if (func_735(Global_262145.f_20585))
				{
					func_726("CLOTHAWDSTRAP5", Global_262145.f_20717);
				}
			}
			break;
		case 7:
			if (Global_262145.f_20587)
			{
				if (func_735(Global_262145.f_20588))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		case 8:
			if (Global_262145.f_20589)
			{
				if (func_735(Global_262145.f_20590))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		case 9:
			if (Global_262145.f_20591)
			{
				if (func_735(Global_262145.f_20592))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		case 10:
			if (Global_262145.f_20593)
			{
				if (func_735(Global_262145.f_20594))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		case 11:
			if (Global_262145.f_20595)
			{
				if (func_735(Global_262145.f_20596))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		case 12:
			if (Global_262145.f_20597)
			{
				if (func_735(Global_262145.f_20598))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		case 13:
			if (Global_262145.f_20599)
			{
				if (func_735(Global_262145.f_20600))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		case 14:
			if (Global_262145.f_20601)
			{
				if (func_735(Global_262145.f_20602))
				{
					func_734("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_734(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	if (!bParam2 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam2);
	}
	if (!bParam3 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam3);
	}
	UNK_0x6B012227B3921E18(bParam1);
	if (!bParam4)
	{
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	}
	else
	{
		Global_2513218 = { func_59(UNK_0xD803B885F5E47A62()) };
		if (UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
		{
			iVar1 = 0;
			if (UNK_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2513148.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = UNK_0x0D020422A92A2236(iVar2, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar1, 0, Global_2513148, UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), Global_1314034, Global_1314035, Global_1314036);
		}
		else
		{
			iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		}
	}
	func_703(8, bParam0, 1, bParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_735(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case joaat("CLO_GRM_U_19_0"):
		case joaat("CLO_GRF_U_25_0"):
			if (!func_739(15417, -1, -1))
			{
				func_738(15417, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case joaat("CLO_GRM_U_19_1"):
		case joaat("CLO_GRF_U_25_1"):
			if (!func_739(15418, -1, -1))
			{
				func_738(15418, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case joaat("CLO_GRF_U_26_0"):
			if (!func_739(15425, -1, -1))
			{
				func_738(15425, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case joaat("CLO_GRM_DECL_19"):
		case joaat("CLO_GRF_DECL_19"):
			if (!func_739(15405, -1, -1))
			{
				func_738(15405, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case joaat("CLO_GRF_DECL_20"):
			if (!func_739(15393, -1, -1))
			{
				func_738(15393, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case joaat("CLO_GRF_DECL_21"):
			if (!func_739(15409, -1, -1))
			{
				func_738(15409, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case joaat("CLO_GRM_DECL_22"):
		case joaat("CLO_GRF_DECL_22"):
			if (!func_739(15396, -1, -1))
			{
				func_738(15396, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case joaat("CLO_GRF_DECL_23"):
			if (!func_739(15412, -1, -1))
			{
				func_738(15412, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case joaat("CLO_GRM_DECL_24"):
		case joaat("CLO_GRF_DECL_24"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case joaat("CLO_GRF_DECL_25"):
			if (!func_739(15403, -1, -1))
			{
				func_738(15403, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case joaat("CLO_GRM_DECL_26"):
		case joaat("CLO_GRF_DECL_26"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case joaat("CLO_GRF_DECL_27"):
			if (!func_739(15389, -1, -1))
			{
				func_738(15389, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case joaat("CLO_GRM_DECL_28"):
		case joaat("CLO_GRF_DECL_28"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case joaat("CLO_GRF_DECL_29"):
			if (!func_739(15398, -1, -1))
			{
				func_738(15398, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case joaat("CLO_GRM_PH_6_0"):
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_739(15400, -1, -1))
			{
				func_738(15400, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case joaat("CLO_GRM_PH_6_1"):
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case joaat("CLO_GRM_PH_6_2"):
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_739(15408, -1, -1))
			{
				func_738(15408, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case joaat("CLO_GRM_PH_6_3"):
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case joaat("CLO_GRM_PH_6_4"):
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_739(15411, -1, -1))
			{
				func_738(15411, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case joaat("CLO_GRM_PH_6_5"):
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_739(15397, -1, -1))
			{
				func_738(15397, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case joaat("CLO_GRM_PH_6_6"):
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_739(15413, -1, -1))
			{
				func_738(15413, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case joaat("CLO_GRM_PH_6_7"):
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_739(15391, -1, -1))
			{
				func_738(15391, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case joaat("CLO_GRF_PH_6_8"):
			if (!func_739(15388, -1, -1))
			{
				func_738(15388, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case joaat("CLO_GRM_PH_6_9"):
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case joaat("CLO_GRF_PH_6_10"):
			if (!func_739(15401, -1, -1))
			{
				func_738(15401, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_000_M"):
		case joaat("MP_GUNRUNNING_AWARD_000_F"):
		case joaat("CLO_GRM_DECL_0"):
		case joaat("CLO_GRF_DECL_0"):
			if (!func_739(15394, -1, -1))
			{
				func_738(15394, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_001_M"):
		case joaat("MP_GUNRUNNING_AWARD_001_F"):
		case joaat("CLO_GRM_DECL_1"):
		case joaat("CLO_GRF_DECL_1"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_002_M"):
		case joaat("MP_GUNRUNNING_AWARD_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case joaat("CLO_GRF_DECL_2"):
			if (!func_739(15406, -1, -1))
			{
				func_738(15406, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_003_M"):
		case joaat("MP_GUNRUNNING_AWARD_003_F"):
		case joaat("CLO_GRM_DECL_3"):
		case joaat("CLO_GRF_DECL_3"):
			if (!func_739(15395, -1, -1))
			{
				func_738(15395, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_004_M"):
		case joaat("MP_GUNRUNNING_AWARD_004_F"):
		case joaat("CLO_GRM_DECL_4"):
		case joaat("CLO_GRF_DECL_4"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_005_M"):
		case joaat("MP_GUNRUNNING_AWARD_005_F"):
		case joaat("CLO_GRM_DECL_5"):
		case joaat("CLO_GRF_DECL_5"):
			if (!func_739(15410, -1, -1))
			{
				func_738(15410, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_006_M"):
		case joaat("MP_GUNRUNNING_AWARD_006_F"):
		case joaat("CLO_GRM_DECL_6"):
		case joaat("CLO_GRF_DECL_6"):
			if (!func_739(15407, -1, -1))
			{
				func_738(15407, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_007_M"):
		case joaat("MP_GUNRUNNING_AWARD_007_F"):
		case joaat("CLO_GRM_DECL_7"):
		case joaat("CLO_GRF_DECL_7"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_008_M"):
		case joaat("MP_GUNRUNNING_AWARD_008_F"):
		case joaat("CLO_GRM_DECL_8"):
		case joaat("CLO_GRF_DECL_8"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_009_M"):
		case joaat("MP_GUNRUNNING_AWARD_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case joaat("CLO_GRF_DECL_9"):
			if (!func_739(15414, -1, -1))
			{
				func_738(15414, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_010_M"):
		case joaat("MP_GUNRUNNING_AWARD_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case joaat("CLO_GRF_DECL_10"):
			if (!func_739(15415, -1, -1))
			{
				func_738(15415, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_011_M"):
		case joaat("MP_GUNRUNNING_AWARD_011_F"):
		case joaat("CLO_GRM_DECL_11"):
		case joaat("CLO_GRF_DECL_11"):
			if (!func_739(15399, -1, -1))
			{
				func_738(15399, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_012_M"):
		case joaat("MP_GUNRUNNING_AWARD_012_F"):
		case joaat("CLO_GRM_DECL_12"):
		case joaat("CLO_GRF_DECL_12"):
			if (!func_739(15404, -1, -1))
			{
				func_738(15404, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_013_M"):
		case joaat("MP_GUNRUNNING_AWARD_013_F"):
		case joaat("CLO_GRM_DECL_13"):
		case joaat("CLO_GRF_DECL_13"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_014_M"):
		case joaat("MP_GUNRUNNING_AWARD_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case joaat("CLO_GRF_DECL_14"):
			if (!func_739(15392, -1, -1))
			{
				func_738(15392, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_015_M"):
		case joaat("MP_GUNRUNNING_AWARD_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case joaat("CLO_GRF_DECL_15"):
			if (!func_739(15390, -1, -1))
			{
				func_738(15390, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_016_M"):
		case joaat("MP_GUNRUNNING_AWARD_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case joaat("CLO_GRF_DECL_16"):
			if (!func_739(15402, -1, -1))
			{
				func_738(15402, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_017_M"):
		case joaat("MP_GUNRUNNING_AWARD_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case joaat("CLO_GRF_DECL_17"):
			if (!func_739(15416, -1, -1))
			{
				func_738(15416, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_018_M"):
		case joaat("MP_GUNRUNNING_AWARD_018_F"):
		case joaat("CLO_GRM_DECL_18"):
		case joaat("CLO_GRF_DECL_18"):
			if (!func_426(209, -1))
			{
				func_736(209, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_019_M"):
		case joaat("MP_GUNRUNNING_AWARD_025_F"):
		case joaat("CLO_GRM_DECL_30"):
		case joaat("CLO_GRF_DECL_30"):
			if (!func_739(15426, -1, -1))
			{
				func_738(15426, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M"):
		case joaat("MP_GUNRUNNING_AWARD_020_F"):
		case joaat("CLO_GRM_DECL_31"):
		case joaat("CLO_GRF_DECL_31"):
			if (!func_739(15422, -1, -1))
			{
				func_738(15422, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M_ALT"):
		case joaat("MP_GUNRUNNING_AWARD_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_739(15423, -1, -1))
			{
				func_738(15423, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_021_M"):
		case joaat("MP_GUNRUNNING_AWARD_021_F"):
		case joaat("CLO_GRM_DECL_33"):
		case joaat("CLO_GRF_DECL_33"):
			if (!func_739(15421, -1, -1))
			{
				func_738(15421, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_022_M"):
		case joaat("MP_GUNRUNNING_AWARD_026_F"):
		case joaat("CLO_GRM_DECL_34"):
		case joaat("CLO_GRF_DECL_34"):
			if (!func_739(15427, -1, -1))
			{
				func_738(15427, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_023_M"):
		case joaat("MP_GUNRUNNING_AWARD_023_F"):
		case joaat("CLO_GRM_DECL_35"):
		case joaat("CLO_GRF_DECL_35"):
			if (!func_739(15419, -1, -1))
			{
				func_738(15419, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_024_M"):
		case joaat("MP_GUNRUNNING_AWARD_024_F"):
		case joaat("CLO_GRM_DECL_36"):
		case joaat("CLO_GRF_DECL_36"):
			if (!func_739(15420, -1, -1))
			{
				func_738(15420, 1, -1, 1);
				return true;
			}
			break;
	}
	return false;
}

void func_736(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_737())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_427(iParam2)];
		if (iVar0 != 0)
		{
			UNK_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

bool func_737()
{
	return true;
	return false;
}

int func_738(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (bParam2 == -1)
	{
		bParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam2);
		iVar1 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam2);
		iVar1 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
		iVar1 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
		iVar1 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam2);
		iVar1 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
		iVar1 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

bool func_739(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_36();
	}
	iVar1 = func_741(iParam0, bParam1);
	iVar2 = func_740(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_740(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_741(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_742(int iParam0)
{
	int iVar0;

	iVar0 = func_744(iParam0);
	return func_517(func_743(iVar0), -1, 0);
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		case 1:
			return 3952;
		case 2:
			return 3953;
		case 3:
			return 3954;
		case 4:
			return 3955;
		case 5:
			return 5456;
		default:
			break;
	}
	return 3951;
}

int func_744(int iParam0)
{
	int iVar0;

	if (func_745(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_745(bool bParam0)
{
	if (bParam0 == 32 || bParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_746(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = func_744(iParam0);
	iVar1 = func_743(iVar0);
	bVar2 = (func_517(iVar1, -1, 0) + iParam1);
	func_516(iVar1, bVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_748(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_743(iVar0);
				iVar3 = (iVar3 + func_517(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_747(iVar4))
			{
				bVar5 = iVar4;
			}
			iVar4++;
		}
		func_513(9357, bVar5, -1, 1);
	}
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
		case 2:
			return 300000;
		case 3:
			return 500000;
	}
	return 0;
}

int func_748(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 == -1)
	{
		bParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_750(iParam0, bParam1);
	iVar2 = func_749(iParam0);
	if (0 != iVar1)
	{
		if (!UNK_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_749(int iParam0)
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

int func_750(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_36();
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

int func_751(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_648(iParam1);
	if (func_745(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_752(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_752(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_752(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_752(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_752(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_752(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_752(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_752(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_752(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_752(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_752(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_752(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
		}
	}
	return iVar0;
}

bool func_752(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_754(bParam0, iParam1))
	{
		iVar0 = func_753(bParam0, iParam1);
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_5, bParam2);
	}
	return false;
}

int func_753(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_745(bParam1) && bParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == bParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_754(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_745(bParam1) && bParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == bParam1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_755(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_57())
	{
		return 0;
	}
	if (func_745(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_756(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;

	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_630())
			{
				Var0 = { func_650() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*iParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_751(UNK_0xD803B885F5E47A62(), Var0, *iParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18595);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18594);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*bParam2 = (*bParam2 + iVar7);
				iVar11 = func_722(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18585);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18584));
				iVar14 = ((*bParam2 / 100) * iVar13);
				*bParam2 = (*bParam2 + iVar14);
				if (uParam1->f_6)
				{
					*bParam2 = (*bParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_480(86);
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (func_375(0))
			{
				Var15 = { func_757(func_653()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*iParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_751(func_653(), Var15, *iParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18595));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18594));
				}
				*bParam2 = (*bParam2 + iVar22);
				fVar23 = Global_262145.f_18634;
				iVar24 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar23));
				*bParam2 = iVar24;
				iVar25 = Global_262145.f_18635;
				if (*bParam2 > iVar25)
				{
					*bParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_757(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_193;
}

void func_758(int iParam0, bool bParam1, var uParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	if (iParam0 == 167)
	{
		if (func_264(UNK_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_770();
			}
			func_769();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_264(UNK_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*bParam3 = (*bParam3 + func_764(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_182));
				}
				else
				{
					*iParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*iParam4 = (*iParam4 + uParam2->f_8);
					}
					iVar0 = func_763(*iParam4);
					iVar1 = (iVar0 * *iParam4);
					*bParam3 = (*bParam3 + iVar1);
					iVar3 = func_722(&uVar2);
					iVar4 = Global_262145.f_16141;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15350));
					iVar6 = ((*bParam3 / 100) * iVar5);
					*bParam3 = (*bParam3 + iVar6);
					if (uParam2->f_6)
					{
						*bParam3 = (*bParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_480(44);
					}
				}
				func_761(*bParam3);
				func_760();
				Global_2537071.f_5124.f_381 = *bParam3;
				iVar7 = 0;
				while (iVar7 < UNK_0x54EABC0DD106045B())
				{
					bVar8 = iVar7;
					if (UNK_0x81A93C8315C28F58(bVar8))
					{
						bVar9 = UNK_0x4B2BFE4A3BC248ED(bVar8);
						if (func_721(bVar9))
						{
							func_713(bVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_264(UNK_0xD803B885F5E47A62()))
		{
			func_759();
		}
	}
}

void func_759()
{
	bool bVar0;

	bVar0 = Global_2586255[func_36()];
	bVar0++;
	func_519(3667, bVar0, -1, 1);
}

void func_760()
{
	bool bVar0;

	bVar0 = Global_2586261[func_36()];
	bVar0++;
	func_519(3666, bVar0, -1, 1);
}

void func_761(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = Global_2586264[func_36()];
	bVar0 = (bVar0 + iParam0);
	func_519(3668, bVar0, -1, 1);
	if (func_748(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (bVar0 >= func_762(iVar1))
			{
				bVar2 = iVar1;
			}
			iVar1++;
		}
		func_513(7666, bVar2, -1, 1);
	}
}

int func_762(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16274;
		case 2:
			return Global_262145.f_16275;
		case 3:
			return Global_262145.f_16276;
		case 4:
			return Global_262145.f_16277;
		case 5:
			return Global_262145.f_16278;
		case 6:
			return Global_262145.f_16279;
		case 7:
			return Global_262145.f_16280;
		case 8:
			return Global_262145.f_16281;
		case 9:
			return Global_262145.f_16282;
		case 10:
			return Global_262145.f_16283;
		case 11:
			return Global_262145.f_16284;
		case 12:
			return Global_262145.f_16285;
		case 13:
			return Global_262145.f_16286;
		case 14:
			return Global_262145.f_16287;
		case 15:
			return Global_262145.f_16288;
		case 16:
			return Global_262145.f_16289;
		case 17:
			return Global_262145.f_16290;
		case 18:
			return Global_262145.f_16291;
		case 19:
			return Global_262145.f_16292;
		case 20:
			return Global_262145.f_16293;
		case 21:
			return Global_262145.f_16294;
		case 22:
			return Global_262145.f_16295;
		case 23:
			return Global_262145.f_16296;
		case 24:
			return Global_262145.f_16297;
	}
	return 0;
}

int func_763(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_768(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_767(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_766(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_765(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_765(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_766(UNK_0x09AC81E49EA267F7(true, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_765(int iParam0)
{
	int iVar0;

	if (func_42(iParam0))
	{
		iVar0 = func_518(func_536(iParam0));
		return func_517(iVar0, -1, 0);
	}
	return 0;
}

int func_766(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

bool func_767(int iParam0, int iParam1)
{
	int iVar0;

	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_768(int iParam0)
{
	int iVar0;

	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_769()
{
	bool bVar0;

	bVar0 = Global_2586252[func_36()];
	bVar0++;
	Global_2586252[func_36()] = bVar0;
	func_519(3665, bVar0, -1, 1);
}

void func_770()
{
	bool bVar0;
	bool bVar1;

	bVar0 = Global_2586249[func_36()];
	bVar1 = Global_2586258[func_36()];
	bVar0++;
	bVar1++;
	Global_2586249[func_36()] = bVar0;
	Global_2586258[func_36()] = bVar1;
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_128 = bVar1;
	func_519(3663, bVar0, -1, 1);
	func_519(3664, bVar1, -1, 1);
}

void func_771()
{
	if (func_643())
	{
		Global_2451426.f_3074.f_134 = 0;
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
	}
}

void func_772()
{
	if (func_643())
	{
		if (Global_2451426.f_3074.f_134 < 10)
		{
			Global_2451426.f_3074.f_134++;
			Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

void func_773()
{
	if (func_643())
	{
		if (Global_2451426.f_3074.f_134 > 0)
		{
			Global_2451426.f_3074.f_134 = (Global_2451426.f_3074.f_134 - 1);
			Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

int func_774(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_28;
}

bool func_775(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return true;
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_651(1) && !func_375(1))
			{
				if (func_776(func_653()))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_776(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 26);
}

int func_777(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18281;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		case 170:
			return 0;
		case 171:
			return Global_262145.f_15051;
		case 172:
			return Global_262145.f_15067;
		case 173:
			return Global_262145.f_15010;
		case 166:
			return 0;
		case 179:
			return Global_262145.f_18289;
		case 180:
			return Global_262145.f_18164;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18172;
		case 185:
			return Global_262145.f_18181;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18377;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18394;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18241;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18425;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18303;
		case 205:
			return Global_262145.f_18412;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18270;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18407;
		case 211:
			return Global_262145.f_18371;
		case 214:
			return Global_262145.f_18965;
		case 215:
			return Global_262145.f_18975;
		case 216:
			return Global_262145.f_18985;
		case 217:
			return Global_262145.f_18994;
		case 218:
			return Global_262145.f_19003;
		case 219:
			return Global_262145.f_19019;
		case 241:
			return Global_262145.f_24090;
		case 242:
			return Global_262145.f_24086;
		case 248:
			return Global_262145.f_24089;
		case 244:
			return Global_262145.f_24087;
		case 239:
			return Global_262145.f_24091;
		case 240:
			return Global_262145.f_24092;
		case 243:
			return Global_262145.f_26299;
		default:
			break;
	}
	return 0;
}

int func_778(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18282;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		case 170:
			return Global_262145.f_14993;
		case 171:
			return Global_262145.f_15052;
		case 172:
			return Global_262145.f_15068;
		case 173:
			return Global_262145.f_15011;
		case 166:
			return 0;
		case 167:
			return Global_262145.f_17090;
		case 168:
			return Global_262145.f_17089;
		case 179:
			return Global_262145.f_18290;
		case 180:
			return Global_262145.f_18165;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18173;
		case 185:
			return Global_262145.f_18182;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18378;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18395;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18242;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18426;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18304;
		case 205:
			return Global_262145.f_18413;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18271;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18408;
		case 211:
			return Global_262145.f_18372;
		case 214:
			return Global_262145.f_18966;
		case 215:
			return Global_262145.f_18976;
		case 216:
			return Global_262145.f_18986;
		case 217:
			return Global_262145.f_18995;
		case 218:
			return Global_262145.f_19004;
		case 219:
			return Global_262145.f_19020;
		case 178:
			if (func_643())
			{
				return Global_262145.f_18843;
			}
			else if (bParam1)
			{
				return Global_262145.f_18844;
			}
			break;
		case 188:
			if (func_643())
			{
				return Global_262145.f_18927;
			}
			else if (bParam1)
			{
				return Global_262145.f_18928;
			}
			break;
		case 225:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21048;
				}
				else
				{
					return Global_262145.f_21049;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_21050;
			}
			break;
		case 226:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_21030;
			}
			break;
		case 227:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_21040;
				}
				else
				{
					return Global_262145.f_21041;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_21042;
			}
			break;
		case 229:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22204;
				}
				else
				{
					return Global_262145.f_22205;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_22206;
			}
			break;
		case 230:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22300;
				}
				else
				{
					return Global_262145.f_22301;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_22302;
			}
			break;
		case 233:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_22776;
				}
				else
				{
					return Global_262145.f_22777;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_22775;
			}
			break;
		case 241:
			return Global_262145.f_24097;
		case 242:
			return Global_262145.f_24093;
		case 244:
			return Global_262145.f_24094;
		case 248:
			return Global_262145.f_24096;
		case 239:
			return Global_262145.f_24098;
		case 240:
			return Global_262145.f_24099;
		case 237:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_23939;
				}
				else
				{
					return Global_262145.f_23940;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_23941;
			}
			break;
		case 238:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24050;
				}
				else
				{
					return Global_262145.f_24051;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_24052;
			}
			break;
		case 249:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_24066;
				}
				else
				{
					return Global_262145.f_24067;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_24068;
			}
			break;
		case 243:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return Global_262145.f_26302;
				}
				else
				{
					return Global_262145.f_26303;
				}
			}
			else if (func_630())
			{
				return Global_262145.f_26302;
			}
			break;
		case 158:
			if (func_643() && !func_630())
			{
				if (func_776(UNK_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_630())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_779(int iParam0, float fParam1, float fParam2)
{
	bool bVar0;

	if (iParam0 == 157)
	{
		*fParam1 = 1f;
		*fParam2 = 1f;
		return;
	}
	if (func_780(iParam0))
	{
		if (!func_643())
		{
			*fParam1 = 1f;
			*fParam2 = Global_262145.f_12400;
		}
		else
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
		return;
	}
	if (func_313(UNK_0xD803B885F5E47A62(), 1))
	{
		if (func_456(iParam0))
		{
			*fParam1 = (Global_262145.f_18141 / 100f);
			*fParam2 = (Global_262145.f_18141 / 100f);
		}
		else if (iParam0 == 242)
		{
			*fParam1 = Global_262145.f_24100;
			*fParam2 = Global_262145.f_24100;
		}
		else if (iParam0 == 244)
		{
			*fParam1 = Global_262145.f_24101;
			*fParam2 = Global_262145.f_24101;
		}
		else if (iParam0 == 248)
		{
			*fParam1 = Global_262145.f_24103;
			*fParam2 = Global_262145.f_24103;
		}
		else if (iParam0 == 241)
		{
			*fParam1 = Global_262145.f_24104;
			*fParam2 = Global_262145.f_24104;
		}
		else if (iParam0 == 239)
		{
			*fParam1 = Global_262145.f_24105;
			*fParam2 = Global_262145.f_24105;
		}
		else if (iParam0 == 240)
		{
			*fParam1 = Global_262145.f_24106;
			*fParam2 = Global_262145.f_24106;
		}
		else
		{
			*fParam1 = Global_262145.f_12397;
			*fParam2 = Global_262145.f_12396;
		}
	}
	else if (func_456(iParam0))
	{
		*fParam1 = (Global_262145.f_18142 / 100f);
		*fParam2 = (Global_262145.f_18142 / 100f);
	}
	else if (iParam0 == 242)
	{
		*fParam1 = Global_262145.f_24107;
		*fParam2 = Global_262145.f_24107;
	}
	else if (iParam0 == 244)
	{
		*fParam1 = Global_262145.f_24108;
		*fParam2 = Global_262145.f_24108;
	}
	else if (iParam0 == 248)
	{
		*fParam1 = Global_262145.f_24110;
		*fParam2 = Global_262145.f_24110;
	}
	else if (iParam0 == 241)
	{
		*fParam1 = Global_262145.f_24111;
		*fParam2 = Global_262145.f_24111;
	}
	else if (iParam0 == 239)
	{
		*fParam1 = Global_262145.f_24112;
		*fParam2 = Global_262145.f_24112;
	}
	else if (iParam0 == 240)
	{
		*fParam1 = Global_262145.f_24113;
		*fParam2 = Global_262145.f_24113;
	}
	else
	{
		*fParam1 = Global_262145.f_12399;
		*fParam2 = Global_262145.f_12398;
	}
	bVar0 = func_378();
	if (bVar0 != func_57())
	{
		if (func_346(UNK_0xD803B885F5E47A62(), bVar0, 1))
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
	}
}

bool func_780(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return true;
		default:
			break;
	}
	return false;
}

void func_781(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_305(UNK_0xD803B885F5E47A62());
		Global_1674635.f_4 = func_892();
		Global_1674635.f_5 = func_891();
		if (func_268(UNK_0xD803B885F5E47A62()) || func_269(UNK_0xD803B885F5E47A62()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_885(bParam9);
		Global_1674635.f_8 = UNK_0xDD0E7998AE8AD485();
		Global_1674635.f_9 = func_884(bParam0);
		Global_1674635.f_10 = iParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_883();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_313(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_884(func_375(1));
		}
		Global_1674635.f_24 = func_882(UNK_0xD803B885F5E47A62());
		Global_1674635.f_28 = func_881(UNK_0xD803B885F5E47A62());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_879(iVar0);
	}
	else
	{
		iVar0 = func_243(UNK_0xD803B885F5E47A62());
	}
	if (func_456(iVar0))
	{
		Global_1674374.f_2 = func_892();
		Global_1674374.f_3 = func_891();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = UNK_0xDD0E7998AE8AD485();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = iParam1;
		Global_1674374.f_19 = func_875(iVar0, bParam0, func_878(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
		{
			Global_1674374.f_8 = 1;
		}
		else
		{
			Global_1674374.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674374.f_43 = 0;
			Global_1674374.f_45 = func_874(func_653(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_873(func_653(), iParam2);
		}
		func_871(iVar0);
	}
	else if (func_461(iVar0))
	{
		Global_1674428.f_2 = func_892();
		Global_1674428.f_3 = func_891();
		Global_1674428.f_10 = UNK_0xDD0E7998AE8AD485();
		Global_1674428.f_19 = (Global_1674428.f_10 - Global_1674428.f_9);
		Global_1674428.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674428.f_11 = 1;
		}
		else
		{
			Global_1674428.f_11 = 0;
		}
		if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_869(iVar0);
	}
	else if (func_559(iVar0))
	{
		Global_1674491.f_2 = func_892();
		Global_1674491.f_3 = func_891();
		Global_1674491.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = iParam1;
		Global_1674491.f_7 = func_883();
		Global_1674491.f_42 = func_867(func_36(), 5);
		bVar1 = UNK_0xD803B885F5E47A62();
		iVar2 = func_642(bVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_884((func_866(bVar1) || func_865(bVar1)));
		Global_1674491.f_30 = func_884(func_864(bVar1));
		Global_1674491.f_32 = func_884(func_863(bVar1));
		Global_1674491.f_33 = func_884(func_862(bVar1));
		Global_1674491.f_34 = func_884(func_861(bVar1));
		Global_1674491.f_35 = func_884(func_860(0, bVar1) == 1);
		Global_1674491.f_36 = func_884(func_859(bVar1));
		Global_1674491.f_37 = func_884(func_858(bVar1));
		Global_1674491.f_38 = func_884(func_857(bVar1));
		Global_1674491.f_39 = func_884(func_752(bVar1, iVar2, 0));
		Global_1674491.f_40 = func_884(func_752(bVar1, iVar2, 2));
		Global_1674491.f_41 = func_884(func_752(bVar1, iVar2, 1));
		if (func_856(bVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_855(bVar1))
		{
			Global_1674491.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674491.f_10 = 1;
		}
		else
		{
			Global_1674491.f_10 = 0;
		}
		if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_853(iVar0);
	}
	else if (func_557(iVar0))
	{
		Global_1674535.f_2 = func_892();
		Global_1674535.f_3 = func_891();
		if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674535.f_10 = func_884(bParam0);
		Global_1674535.f_11 = iParam1;
		Global_1674535.f_17 = func_852(func_378());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_851();
		Global_1674535.f_29 = func_517(6107, -1, 0);
		Global_1674535.f_30 = func_517(6103, -1, 0);
		Global_1674535.f_31 = func_517(6104, -1, 0);
		Global_1674535.f_32 = func_517(6106, -1, 0);
		Global_1674535.f_33 = func_517(6105, -1, 0);
		Global_1674535.f_34 = func_517(6108, -1, 0);
		Global_1674535.f_36 = func_884(func_375(1));
		Global_1674535.f_37 = func_849();
		func_835();
		func_833(iVar0);
	}
	else if (func_555(iVar0))
	{
		Global_1674589.f_2 = func_892();
		Global_1674589.f_3 = func_891();
		if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674589.f_10 = func_884(bParam0);
		Global_1674589.f_11 = iParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_517(6157, -1, 0);
		Global_1674589.f_25 = func_517(6162, -1, 0);
		Global_1674589.f_26 = func_517(6163, -1, 0);
		Global_1674589.f_27 = func_884((((func_832() || func_831()) || func_830()) || func_829(UNK_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_517(6164, -1, 0);
		Global_1674589.f_29 = func_884(func_828());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_892();
		Global_1674589.f_42 = func_884(func_375(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_826(iVar0);
	}
	else if (func_621(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_892();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_891();
		}
		if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_885(0);
		Global_1674725.f_7 = func_883();
		Global_1674725.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674725.f_10 = func_884(bParam0);
		Global_1674725.f_11 = iParam1;
		if (func_653() != -1)
		{
			Global_1674725.f_17 = func_825(func_653());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_881(UNK_0xD803B885F5E47A62());
		Global_1674725.f_29 = func_884(func_824(UNK_0xD803B885F5E47A62()));
		Global_1674725.f_30 = func_884(func_823(UNK_0xD803B885F5E47A62()));
		Global_1674725.f_31 = func_822(UNK_0xD803B885F5E47A62());
		if (func_313(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_884(func_375(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_820(iVar0);
	}
	else if (func_625(iVar0))
	{
		Global_1674671.f_2 = func_892();
		Global_1674671.f_3 = func_891();
		if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_885(0);
		Global_1674671.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674671.f_10 = func_884(bParam0);
		Global_1674671.f_11 = iParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_881(UNK_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_819(UNK_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_803(UNK_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_822(UNK_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_884(func_802(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_884(func_801(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_884(func_800(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_884(func_799(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_798(UNK_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_797(UNK_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_796(UNK_0xD803B885F5E47A62());
		if (func_313(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_884(func_375(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_794(iVar0);
	}
	else if (func_620(iVar0))
	{
		Global_1674809.f_2 = func_892();
		Global_1674809.f_3 = func_891();
		Global_1674809.f_4 = func_793(func_653());
		Global_1674809.f_5 = func_792(func_653());
		if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_883();
		Global_1674809.f_9 = UNK_0xDD0E7998AE8AD485();
		Global_1674809.f_10 = func_884(bParam0);
		Global_1674809.f_11 = iParam1;
		if (func_378() != -1)
		{
			Global_1674809.f_17 = func_825(func_378());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_791(UNK_0xD803B885F5E47A62());
		Global_1674809.f_27 = func_884(func_790(UNK_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_787(21, -1);
		Global_1674809.f_29 = func_884(func_786(UNK_0xD803B885F5E47A62()));
		func_784(iVar0);
	}
	else if (func_549(iVar0))
	{
		Global_1674884.f_6 = func_793(func_653());
		Global_1674884.f_7 = func_792(func_653());
		if (func_313(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_884(func_375(1));
		}
		Global_1674884.f_10 = func_883();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (UNK_0xDD0E7998AE8AD485() - Global_1702973);
		Global_1674884.f_14 = iParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_782(iVar0);
	}
	else
	{
		Global_1674356.f_6 = UNK_0xDD0E7998AE8AD485();
		if (bParam0)
		{
			Global_1674356.f_7 = 1;
		}
		else
		{
			Global_1674356.f_7 = 0;
		}
		Global_1674356.f_8 = iParam1;
		if (Global_1674356.f_4 == 0)
		{
			if ((func_265(UNK_0xD803B885F5E47A62()) || func_421(UNK_0xD803B885F5E47A62())) || func_232(UNK_0xD803B885F5E47A62()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_782(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x9CA4259CC8E87599(&Global_1674884);
	func_783();
}

void func_783()
{
	struct<36> Var0;

	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

void func_784(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x62CC3DEF90BBBB82(&Global_1674809);
	func_785();
}

void func_785()
{
	struct<31> Var0;

	Global_1674809 = { Var0 };
}

bool func_786(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_2, 6);
	}
	return false;
}

int func_787(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_789(iParam0);
		if (iVar1 == 0 && func_517(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_788(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_881(UNK_0xD803B885F5E47A62()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_788(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return false;
	}
	return func_517(7207, iParam0, 0) != 0;
}

int func_789(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

bool func_790(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
	}
	return false;
}

int func_791(bool bParam0)
{
	if (func_243(bParam0) == 243)
	{
		return func_624(bParam0);
	}
	return -1;
}

int func_792(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return -1;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_8[1];
}

int func_793(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return -1;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_8[0];
}

void func_794(int iParam0)
{
	UNK_0x26ABE31DF89E0806(&Global_1674671);
	func_795();
}

void func_795()
{
	struct<54> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1674671 = { Var0 };
}

bool func_796(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 12);
	}
	return false;
}

bool func_797(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 10);
	}
	return false;
}

bool func_798(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 11);
	}
	return false;
}

bool func_799(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 4);
}

bool func_800(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 3);
}

bool func_801(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 2);
}

bool func_802(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, true);
}

bool func_803(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == func_57() || !func_818(iParam1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			return func_813(bParam0, iParam2);
		case 1:
			return func_811(bParam0, iParam2);
		case 3:
			return func_810(bParam0);
		case 2:
			return func_805(bParam0, iParam2);
		case 4:
			return func_804(bParam0);
		default:
			break;
	}
	return false;
}

bool func_804(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 6);
}

bool func_805(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_809(bParam0);
		case 11:
			return func_808(bParam0);
		case 12:
			return func_807(bParam0);
		case 13:
			return func_806(bParam0);
		default:
			break;
	}
	return false;
}

bool func_806(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 15);
}

bool func_807(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 14);
}

bool func_808(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 13);
}

bool func_809(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 12);
}

bool func_810(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 5);
}

bool func_811(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_812(bParam0);
		case 6:
			return func_802(bParam0);
		case 7:
			return func_801(bParam0);
		case 8:
			return func_800(bParam0);
		case 9:
			return func_799(bParam0);
		default:
			break;
	}
	return false;
}

bool func_812(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, false);
}

bool func_813(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_817(bParam0);
		case 1:
			return func_816(bParam0);
		case 2:
			return func_815(bParam0);
		case 3:
			return func_814(bParam0);
		case 4:
			return func_822(bParam0);
		default:
			break;
	}
	return false;
}

bool func_814(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 10);
}

bool func_815(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 9);
}

bool func_816(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 8);
}

bool func_817(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 7);
}

bool func_818(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_819(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_803(bParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_803(bParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_803(bParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_803(bParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_820(int iParam0)
{
	UNK_0xEB3BD00621D19C22(&Global_1674725);
	func_821();
}

void func_821()
{
	struct<39> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1674725 = { Var0 };
}

bool func_822(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 31);
}

bool func_823(int iParam0)
{
	if (iParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, false);
}

bool func_824(int iParam0)
{
	if (iParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 19);
}

var func_825(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_211.f_6;
}

void func_826(int iParam0)
{
	UNK_0xD620402A9DD91217(&Global_1674589);
	func_827();
}

void func_827()
{
	struct<46> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1674589 = { Var0 };
	Global_1674589.f_16 = 0;
}

bool func_828()
{
	return func_517(6156, -1, 0) != 0;
}

bool func_829(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271 != 0;
	}
	return false;
}

bool func_830()
{
	return func_517(6164, -1, 0) == 3;
}

bool func_831()
{
	return func_517(6164, -1, 0) == 2;
}

bool func_832()
{
	return func_517(6164, -1, 0) == 1;
}

void func_833(int iParam0)
{
	UNK_0x51EB431C1612B9CA(&Global_1674535);
	func_834();
}

void func_834()
{
	struct<54> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674535 = { Var0 };
	Global_1674535.f_23 = 0;
	Global_1674535.f_24 = 0;
	Global_1674535.f_16 = 0;
}

void func_835()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_846(12));
		func_845(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1 /*141*/].f_66 != 0 && func_837(Global_1323615[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_836(Global_1323615[iVar1 /*141*/].f_66))
					{
						if (Global_1323615[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323615[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1674535.f_38 = iVar3;
								break;
							case 1:
								Global_1674535.f_39 = iVar3;
								break;
							case 2:
								Global_1674535.f_40 = iVar3;
								break;
							case 3:
								Global_1674535.f_41 = iVar3;
								break;
							case 4:
								Global_1674535.f_42 = iVar3;
								break;
							case 5:
								Global_1674535.f_43 = iVar3;
								break;
							case 6:
								Global_1674535.f_44 = iVar3;
								break;
							case 7:
								Global_1674535.f_45 = iVar3;
								break;
							case 8:
								Global_1674535.f_46 = iVar3;
								break;
							case 9:
								Global_1674535.f_47 = iVar3;
								break;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_836(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("ANNIHILATOR"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
			return true;
		default:
			break;
	}
	if (iParam0 == joaat("STRIKEFORCE"))
	{
		return true;
	}
	return false;
}

bool func_837(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam0 == 0)
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(bParam0))
	{
		return false;
	}
	if (((((bParam0 == joaat("DOMINATOR2") && !UNK_0x8CD06866876216F2()) || (bParam0 == joaat("BUFFALO3") && !UNK_0x8CD06866876216F2())) || (bParam0 == joaat("GAUNTLET2") && !UNK_0x8CD06866876216F2())) || bParam0 == joaat("BLIMP2")) || (bParam0 == joaat("STALION2") && !UNK_0x8CD06866876216F2()))
	{
		if (!func_844())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x6C7B93D0F54679BE())
		{
			if (UNK_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (UNK_0x232048AB4B0E0259(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("BLIMP"))
	{
		if ((((!func_843() && !func_842()) && !func_841()) && !func_840()) && !func_844())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_841())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_839(bParam0))
		{
			return false;
		}
	}
	if (!func_838(bParam0))
	{
		return false;
	}
	return true;
}

bool func_838(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_535())
	{
		return true;
	}
	UNK_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (bParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		default:
			return true;
	}
	if (!UNK_0x437ABF4F514F6471(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_839(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = UNK_0xDD0E7998AE8AD485();
	if (bParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIRGO3") || bParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MONSTER3"))
	{
	}
	else if (bParam0 == joaat("CERBERUS"))
	{
	}
	else if (bParam0 == joaat("CERBERUS2"))
	{
	}
	else if (bParam0 == joaat("CERBERUS3"))
	{
	}
	else if (bParam0 == joaat("BRUTUS"))
	{
	}
	else if (bParam0 == joaat("BRUTUS2"))
	{
	}
	else if (bParam0 == joaat("BRUTUS3"))
	{
	}
	else if (bParam0 == joaat("SCARAB"))
	{
	}
	else if (bParam0 == joaat("SCARAB2"))
	{
	}
	else if (bParam0 == joaat("SCARAB3"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (bParam0 == joaat("ZR380"))
	{
	}
	else if (bParam0 == joaat("ZR3802"))
	{
	}
	else if (bParam0 == joaat("ZR3803"))
	{
	}
	else if (bParam0 == joaat("IMPALER"))
	{
	}
	else if (bParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_840()
{
	return false;
}

bool func_841()
{
	return true;
}

bool func_842()
{
	return true;
}

bool func_843()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_844()
{
	bool bVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0x5CD8D2FE4603C900())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				UNK_0x5D96D8530B3D0904(&bVar0, 2);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 6);
				UNK_0x5D96D8530B3D0904(&Global_25, 2);
				UNK_0x5D96D8530B3D0904(&Global_25, 4);
				UNK_0x5D96D8530B3D0904(&Global_25, 6);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar0 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar0, false);
					UNK_0x9F2BE984EBF8A0F4(bVar0);
				}
				return true;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return true;
	}
	else if (Global_150472 == 3)
	{
		return false;
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return true;
		}
	}
	return false;
}

void func_845(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((UNK_0xF4CCC8CB6DE7F1AE() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_846(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 88;
		case 9:
			return 108;
		case 10:
			return 128;
		case 11:
			return 148;
		case 6:
			return 65;
		case 7:
			return 75;
		case 5:
			return -1;
		case 12:
			return 159;
		case 13:
			return 179;
		case 14:
			return 191;
		case 15:
			return 192;
		case 16:
			return 202;
		case 17:
			return 212;
		case 18:
			return 227;
		case 19:
			return 237;
		case 20:
			return 247;
		case 21:
			return 258;
		case 22:
			return 268;
		case 23:
			return 281;
		case 24:
			return 294;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_789(iParam0);
		return func_848(iVar0);
	}
	return (func_847(iParam0, -1) * iParam0);
}

int func_847(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_564(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_570(iParam1))
			{
				return 0;
			}
			else if (func_167(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
		case 5:
			return 0;
		case 6:
			return 10;
		case 8:
		case 9:
		case 10:
			return 20;
		case 11:
			return 8;
		case 12:
			return 20;
		case 13:
			return 7;
		case 14:
			return 1;
		case 15:
		case 16:
		case 17:
			return 10;
		case 18:
		case 19:
		case 20:
			return 10;
		case 21:
			return 10;
		case 22:
			return 10;
	}
	return 0;
}

int func_848(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		case 2:
			return 223;
		case 1:
			return 224;
		default:
			break;
	}
	return -1;
}

int func_849()
{
	int iVar0;

	iVar0 = func_850();
	if (!func_643())
	{
		if (func_653() != func_57())
		{
			iVar0 = func_882(func_653()) + 1;
		}
	}
	return iVar0;
}

int func_850()
{
	return func_882(UNK_0xD803B885F5E47A62()) + 1;
}

int func_851()
{
	return func_517(6113, -1, 0);
}

int func_852(bool bParam0)
{
	if (func_313(bParam0, 1))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_451;
	}
	return -1;
}

void func_853(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x09B65A782EA88A3D(&Global_1674491);
	func_854();
}

void func_854()
{
	struct<44> Var0;

	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_855(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 12);
}

bool func_856(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 13);
}

bool func_857(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 12) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 13)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 14))
		{
			return true;
		}
	}
	return false;
}

bool func_858(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

bool func_859(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (((((UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 5)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, false)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

int func_860(int iParam0, bool bParam1)
{
	if (bParam1 == func_57())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, false))
			{
				return 3;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		case 1:
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, true))
			{
				return 3;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam1 /*876*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_861(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 6) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 7)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_259, 8))
		{
			return true;
		}
	}
	return false;
}

bool func_862(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 8);
}

bool func_863(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 7);
}

bool func_864(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 9);
}

bool func_865(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 11);
}

bool func_866(bool bParam0)
{
	if (bParam0 == func_57())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_351, 10);
}

int func_867(int iParam0, int iParam1)
{
	return func_517(func_868(iParam1), iParam0, 0);
}

int func_868(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		case 1:
			return 3927;
		case 2:
			return 3931;
		case 3:
			return 3935;
		case 4:
			return 3939;
		case 5:
			return 5450;
		default:
			break;
	}
	return 3898;
}

void func_869(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x3315867670EACADD(&Global_1674428);
	func_870();
}

void func_870()
{
	struct<63> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

void func_871(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x9D44809E7CAF1A79(&Global_1674374);
	func_872();
}

void func_872()
{
	struct<54> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

int func_873(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_752(bParam0, iParam1, 2);
	bVar1 = func_752(bParam0, iParam1, 1);
	bVar2 = func_752(bParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_874(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_57())
	{
		return 0;
	}
	if (func_745(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_875(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (func_439(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 19;
	}
	else if (func_561(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_344(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_456(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		UNK_0xF9647457141B11A7(func_793(func_653()), func_792(func_653()), func_892(), func_891(), iVar1, iVar0);
	}
	func_877(iVar0);
	func_876(iVar0);
	return iVar0;
}

void func_876(int iParam0)
{
	bool bVar0;

	bVar0 = func_517(3968, -1, 0);
	bVar0 = (bVar0 + iParam0);
	if (bVar0 < 0)
	{
		bVar0 = false;
	}
	if (bVar0 > 9999)
	{
		bVar0 = 9999;
	}
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_490 = bVar0;
	func_516(3968, bVar0, -1, 1, 0);
}

void func_877(int iParam0)
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	Global_1628237[iVar0 /*615*/].f_11.f_489 = (Global_1628237[iVar0 /*615*/].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0 /*615*/].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0 /*615*/].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
}

bool func_878(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (func_265(UNK_0xD803B885F5E47A62()) || func_232(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

void func_879(int iParam0)
{
	UNK_0xC56A8C7E94A60EE3(&Global_1674635);
	func_880();
}

void func_880()
{
	struct<36> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1674635 = { Var0 };
}

bool func_881(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return false;
}

int func_882(bool bParam0)
{
	if (func_58(bParam0) == func_57())
	{
		return 0;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_19;
}

int func_883()
{
	int iVar0;

	if (func_630())
	{
		return 4;
	}
	else if (func_643())
	{
		if (func_776(UNK_0xD803B885F5E47A62()))
		{
			return 8;
		}
		return 6;
	}
	if (func_375(1))
	{
		iVar0 = func_852(UNK_0xD803B885F5E47A62());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_651(1))
	{
		if (func_776(func_653()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_884(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_885(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_305(UNK_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_243(UNK_0xD803B885F5E47A62());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_890(UNK_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		case 150:
			iVar2 = func_888(UNK_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		case 237:
			iVar2 = func_887(UNK_0xD803B885F5E47A62());
			if (func_622(func_623(UNK_0xD803B885F5E47A62())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		case 250:
			iVar2 = func_887(UNK_0xD803B885F5E47A62());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		case 238:
			iVar2 = func_886(UNK_0xD803B885F5E47A62());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		case 249:
			iVar2 = func_886(UNK_0xD803B885F5E47A62());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		case 239:
			iVar1 = 600;
			break;
		case 240:
			iVar1 = 700;
			break;
		case 241:
			iVar1 = 800;
			break;
		case 242:
			iVar1 = 900;
			break;
		case 244:
			iVar1 = 1100;
			break;
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_886(int iParam0)
{
	if (func_243(UNK_0xD803B885F5E47A62()) == 238 || func_243(UNK_0xD803B885F5E47A62()) == 249)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_499;
	}
	return -1;
}

int func_887(int iParam0)
{
	if (func_243(UNK_0xD803B885F5E47A62()) == 237 || func_243(UNK_0xD803B885F5E47A62()) == 250)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_498;
	}
	return -1;
}

int func_888(int iParam0)
{
	return func_889(iParam0, 150);
}

int func_889(int iParam0, int iParam1)
{
	if (func_305(iParam0) == iParam1)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_496;
	}
	return -1;
}

int func_890(int iParam0)
{
	return func_889(iParam0, 236);
}

int func_891()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_892()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_893(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_57();
	bVar1 = func_57();
	bVar2 = func_57();
	return func_894(iParam0, sParam1, sParam2, bParam3, iParam4, bVar0, bVar1, bVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_894(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_617(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = bParam5;
	Var0.f_18 = bParam6;
	Var0.f_19 = bParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = iParam4;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_354(&(Var0.f_69), 4);
	return func_582(&Var0);
}

int func_895(bool bParam0)
{
	int iVar0;

	iVar0 = func_317(bParam0);
	if (iVar0 != -1)
	{
		return func_315(iVar0);
	}
	return 1;
}

bool func_896(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_901(&(Global_1628237[bParam0 /*615*/].f_11.f_104));
		return bVar0;
	}
	if (Global_1628237[bParam0 /*615*/].f_11.f_120 != Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_120)
	{
		bVar0 = func_899(bParam0, 0);
		return bVar0;
	}
	if (((func_247(bParam0, 28) || func_247(UNK_0xD803B885F5E47A62(), 28)) || func_898(bParam0)) && !func_897(bParam0))
	{
		return func_899(bParam0, 0);
	}
	bVar1 = func_58(bParam0);
	if (bVar1 != func_57())
	{
		if (bVar1 != UNK_0xD803B885F5E47A62())
		{
			if (!UNK_0xDC30EF462887322E() && !UNK_0x05449BDA851F5199(0, -1, 1))
			{
				return func_899(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_57())
	{
		bVar0 = func_901(&(Global_1628237[bVar1 /*615*/].f_11.f_104));
		if (UNK_0xEA6BC48857E0AC4C(bVar0))
		{
			return func_899(bVar1, 0);
		}
		else
		{
			return bVar0;
		}
	}
	return "";
}

bool func_897(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_59(bParam0) };
	if (UNK_0xDC30EF462887322E())
	{
		if (UNK_0x4DEB7B48DD0AABA4(0))
		{
			if (UNK_0x5B9BB2932920F9CD(&Var0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_898(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_57())
	{
		Var0 = { func_59(bParam0) };
		if (UNK_0x33A494591F2C1975() || UNK_0x0EFF6B4415DAF4A1())
		{
			if (UNK_0x4DEB7B48DD0AABA4(0))
			{
				return false;
			}
		}
		else if (UNK_0xDC30EF462887322E())
		{
			if (UNK_0x4DEB7B48DD0AABA4(0))
			{
				if (UNK_0x5B9BB2932920F9CD(&Var0))
				{
					return false;
				}
			}
		}
	}
	return true;
}

char* func_899(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_300(bParam0, 1))
		{
			return func_900();
		}
	}
	return UNK_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_900()
{
	return UNK_0x19C9F30A7697B43C("GB_REST_ACCM");
}

char* func_901(var uParam0)
{
	return uParam0;
}

void func_902()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (func_28())
	{
		return;
	}
	if (func_431())
	{
		if (func_11(&(Local_116.f_238)))
		{
			iVar1 = (func_18() - 300000);
			bVar0 = func_6(&(Local_116.f_238), iVar1, 0);
			if (bVar0)
			{
				func_910();
				if ((func_18() - func_618(&(Local_116.f_238), 0, 0)) > 0)
				{
					if ((func_18() - func_618(&(Local_116.f_238), 0, 0)) > 30000)
					{
						func_909((func_18() - func_618(&(Local_116.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, -1);
					}
					else
					{
						func_909((func_18() - func_618(&(Local_116.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
				else
				{
					func_909(0, "GB_WORK_END", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
		}
		return;
	}
	if (!func_1175() && !func_429())
	{
		return;
	}
	if (!func_539())
	{
		return;
	}
	bVar2 = UNK_0xD803B885F5E47A62();
	if (func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		bVar2 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_740;
	}
	iVar3 = func_420(bVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_116.f_213);
	if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 13))
	{
		func_906(iVar4, "DCONTRA_HUD1", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (func_11(&(Local_116.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - func_618(&(Local_116.f_226), 0, 0));
		func_903(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 1, -1);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		func_903(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 1, -1);
	}
}

void func_903(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_905(0, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_904(0, bVar0);
		Global_1378678.f_1135[bVar0] = iParam0;
		Global_1378678.f_1135.f_11[bVar0] = iParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[bVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_1135.f_194[bVar0] = iParam3;
		Global_1378678.f_1135.f_183[bVar0] = iParam4;
		Global_1378678.f_1135.f_216[bVar0] = iParam5;
		Global_1378678.f_1135.f_227[bVar0 /*3*/] = iParam6;
		Global_1378678.f_1135.f_227[bVar0 /*3*/].f_1 = iParam7;
		Global_1378678.f_1135.f_258[bVar0] = iParam8;
		Global_1378678.f_1135.f_269[bVar0] = iParam9;
		Global_1378678.f_1135.f_312[bVar0] = iParam10;
		Global_1378678.f_1135.f_323[bVar0] = iParam11;
		Global_1378678.f_1135.f_334[bVar0] = iParam12;
		Global_1378678.f_1135.f_345[bVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[bVar0] = iParam14;
		Global_1378678.f_1135.f_367[bVar0] = iParam15;
		Global_1378678.f_1135.f_378[bVar0] = iParam16;
		Global_1378678.f_1135.f_389[bVar0] = iParam17;
		Global_1378678.f_1135.f_400[bVar0] = iParam18;
		Global_1378678.f_1135.f_411[bVar0] = iParam19;
		Global_1378678.f_1135.f_422[bVar0] = iParam20;
		Global_1378678.f_1135.f_433[bVar0] = iParam21;
		Global_1378678.f_1135.f_444[bVar0] = iParam22;
		Global_1378678.f_1135.f_455[bVar0] = iParam23;
		Global_1378678.f_1135.f_466[bVar0] = iParam24;
		Global_1378678.f_1135.f_205[bVar0] = iParam25;
		Global_1378678.f_1135.f_477[bVar0] = iParam26;
		Global_1378678.f_1135.f_488[bVar0] = iParam27;
		Global_1378678.f_1135.f_499[bVar0] = iParam28;
		Global_1378678.f_1135.f_510[bVar0] = iParam29;
		Global_1378678.f_1135.f_521[bVar0] = iParam30;
		Global_1378678.f_1135.f_532[bVar0] = iParam31;
		Global_1378678.f_1135.f_543[bVar0] = iParam32;
		Global_1378678.f_1135.f_554[bVar0] = iParam33;
	}
}

void func_904(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_905(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

void func_906(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_905(6, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_904(6, bVar0);
		Global_1378678.f_3944[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[bVar0] = iParam3;
		Global_1378678.f_3944.f_172[bVar0] = iParam2;
		Global_1378678.f_3944.f_260[bVar0] = iParam4;
		Global_1378678.f_3944.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[bVar0] = iParam7;
		Global_1378678.f_3944.f_454[bVar0] = iParam8;
		Global_1378678.f_3944.f_497[bVar0] = iParam9;
		Global_1378678.f_3944.f_508[bVar0] = iParam10;
		Global_1378678.f_3944.f_205[bVar0] = iParam11;
		Global_1378678.f_3944.f_216[bVar0] = iParam12;
		Global_1378678.f_3944.f_227[bVar0] = iParam13;
		Global_1378678.f_3944.f_238[bVar0] = iParam14;
		Global_1378678.f_3944.f_249[bVar0] = iParam15;
		Global_1378678.f_3944.f_519[bVar0] = iParam16;
		Global_1378678.f_3944.f_530[bVar0] = iParam17;
		Global_1378678.f_3944.f_541[bVar0] = iParam18;
		Global_1378678.f_3944.f_552[bVar0] = iParam19;
		Global_1378678.f_3944.f_563[bVar0] = iParam20;
		Global_1378678.f_3944.f_574[bVar0] = iParam21;
		Global_1378678.f_3944.f_585[bVar0] = iParam22;
		Global_1378678.f_3944.f_596[bVar0] = iParam23;
		Global_1378678.f_3944.f_607[bVar0] = iParam24;
		Global_1378678.f_3944.f_194[bVar0] = iParam25;
		if (iParam15 == 5 && func_908())
		{
			Global_1378678.f_1130 = 1;
		}
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			bVar2 = false;
			UNK_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				bVar2 = true;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || bVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_907())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

bool func_907()
{
	int iVar0;
	var uVar1;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_908()
{
	if (((UNK_0xB3260A60545D3F11() == 8 || UNK_0xB3260A60545D3F11() == 9) || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 12)
	{
		return true;
	}
	return false;
}

void func_909(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_905(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_904(7, bVar0);
		Global_1378678.f_4562[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[bVar0] = iParam2;
		Global_1378678.f_4562.f_216[bVar0] = iParam3;
		Global_1378678.f_4562.f_183[bVar0] = iParam4;
		Global_1378678.f_4562.f_194[bVar0] = iParam5;
		Global_1378678.f_4562.f_249[bVar0] = iParam6;
		Global_1378678.f_4562.f_260[bVar0] = iParam7;
		Global_1378678.f_4562.f_205[bVar0] = iParam8;
		Global_1378678.f_4562.f_314[bVar0] = iParam9;
		Global_1378678.f_4562.f_325[bVar0] = iParam10;
		Global_1378678.f_4562.f_357[bVar0] = iParam11;
		Global_1378678.f_4562.f_238[bVar0] = iParam12;
		Global_1378678.f_4562.f_271[bVar0] = iParam13;
		Global_1378678.f_4562.f_368[bVar0] = iParam14;
		Global_1378678.f_4562.f_379[bVar0] = iParam15;
		Global_1378678.f_4562.f_390[bVar0] = iParam16;
		Global_1378678.f_4562.f_227[bVar0] = iParam17;
	}
}

void func_910()
{
	Global_1378678.f_1131 = 1;
}

void func_911()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = UNK_0xD803B885F5E47A62();
	iVar4 = UNK_0x57270EE11514DC67();
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, true))
	{
		return;
	}
	if (func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar4 = func_430();
		bVar3 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_740;
	}
	iVar5 = func_420(bVar3);
	if (!func_539())
	{
		if (func_209("DCONTRA_OBJ"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_OBJ2"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_OBJ3"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_OBJ4"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_TOBJ"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_TOBJ2"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_TOBJ3"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_WOBJ"))
		{
			func_1058();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (func_209("DCONTRA_OBJ"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_OBJ2"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_OBJ3"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_OBJ4"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_TOBJ"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_TOBJ2"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_TOBJ3"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_WOBJ"))
		{
			func_1058();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_431())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 13) && !UNK_0xEAE0D21A50E6C7F4(Local_386[iVar4 /*11*/].f_1, 11))
		{
			if (!func_209("DCONTRA_WOBJ"))
			{
				func_925("DCONTRA_WOBJ", 0);
			}
		}
		else if (iVar4 == Local_116.f_218)
		{
			if (!func_209("DCONTRA_OBJ"))
			{
				func_925("DCONTRA_OBJ", 0);
			}
		}
		else if (func_1176() == Local_116.f_218)
		{
			if (!func_209("DCONTRA_OBJ"))
			{
				func_925("DCONTRA_OBJ", 0);
			}
		}
	}
	else if (func_924())
	{
		if (iVar4 == Local_116.f_218)
		{
			if (!func_209("DCONTRA_OBJ2"))
			{
				func_925("DCONTRA_OBJ2", 0);
			}
		}
		else if (func_1176() == Local_116.f_218)
		{
			if (!func_209("DCONTRA_OBJ2"))
			{
				func_925("DCONTRA_OBJ2", 0);
			}
		}
	}
	else
	{
		if (func_209("DCONTRA_OBJ2"))
		{
			func_1058();
		}
		if (func_209("DCONTRA_TOBJ2"))
		{
			func_1058();
		}
		if (Local_116.f_216 < 0)
		{
			if (!func_209("DCONTRA_OBJ4"))
			{
				func_925("DCONTRA_OBJ4", 0);
			}
		}
		else
		{
			bVar2 = func_923();
			if (bVar2 != func_57())
			{
				if (UNK_0xFB75B0F82CA525F6(bVar2))
				{
					if (bVar2 == bVar3)
					{
						if (!func_209("DCONTRA_OBJ3"))
						{
							func_925("DCONTRA_OBJ3", 0);
						}
					}
					else if (!func_209("DCONTRA_TOBJ3"))
					{
						iVar0 = func_317(bVar2);
						if (iVar0 > -1)
						{
							iVar1 = func_315(iVar0);
							func_912("DCONTRA_TOBJ3", "DCONTRA_CBAND", iVar1, 0);
						}
					}
				}
			}
		}
	}
}

void func_912(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_913(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 19;
		Global_1312585.f_56 = iParam2;
	}
}

bool func_913(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam1))
	{
		return false;
	}
	if (func_922(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return false;
	}
	func_917();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_916();
	func_915(bParam2);
	func_914();
	return true;
}

void func_914()
{
	UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), true);
}

void func_915(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), false);
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_1312585.f_59), false);
}

void func_916()
{
	Global_1312585.f_10 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
}

void func_917()
{
	func_919();
	func_918(0);
}

void func_918(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = UNK_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_919()
{
	if (!func_921())
	{
	}
	if (func_212())
	{
		UNK_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_920();
		UNK_0x35F2C6537D10DAEB();
	}
}

void func_920()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		case 0:
			return;
		case 1:
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		case 2:
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_52);
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		case 3:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 4:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 5:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 6:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 7:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 8:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 9:
			UNK_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		case 10:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		case 12:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 13:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_57);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 11:
			UNK_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		case 14:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 15:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_57);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 17:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		case 16:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 19:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 18:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_48));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		default:
			break;
	}
}

bool func_921()
{
	if (!func_212())
	{
		return false;
	}
	UNK_0x18B60B994182620C(&(Global_1312585.f_12));
	func_920();
	return UNK_0xB165082A56EE6E7F();
}

bool func_922(bool bParam0, bool bParam1)
{
	if (!func_212())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return false;
	}
	if (!UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12)))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam1) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

bool func_923()
{
	bool bVar0;

	bVar0 = func_57();
	if (Local_116.f_216 > -1)
	{
		bVar0 = UNK_0x117658E336116132(Local_116.f_216);
	}
	return bVar0;
}

bool func_924()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_116.f_2[0 /*10*/].f_2))
		{
			bVar0 = UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2);
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_1))
			{
				if (!func_24(Local_116.f_2[0 /*10*/].f_1))
				{
					bVar1 = UNK_0x1B50683925F00106(Local_116.f_2[0 /*10*/].f_1);
					if (UNK_0xC42A92762C58E1B9(bVar1, bVar0, 0))
					{
						return true;
					}
				}
			}
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[1 /*10*/].f_1))
			{
				if (!func_24(Local_116.f_2[1 /*10*/].f_1))
				{
					bVar1 = UNK_0x1B50683925F00106(Local_116.f_2[1 /*10*/].f_1);
					if (UNK_0xC42A92762C58E1B9(bVar1, bVar0, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_925(char* sParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_210(sParam0))
	{
		return;
	}
	func_917();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_916();
	func_915(bParam1);
	func_914();
}

void func_926()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_1175() && !func_429())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 18))
	{
		iVar0 = func_420(UNK_0xD803B885F5E47A62());
		if (iVar0 >= 2)
		{
			UNK_0x5D96D8530B3D0904(&bLocal_739, 18);
			func_1035(-1, 0, 0, -1, 0, 0);
		}
	}
	if (!func_539())
	{
		return;
	}
	iVar1 = UNK_0x57270EE11514DC67();
	bVar2 = UNK_0xD803B885F5E47A62();
	if (func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar1 = func_430();
		bVar2 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_740;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, true))
	{
		iVar0 = func_420(bVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_116.f_218)
			{
				if (func_431())
				{
					if (func_954())
					{
						func_581(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2, 1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_739, true);
					}
				}
				else if (func_954())
				{
					func_581(86, "BIGM_DEFEND", "BIGM_DEFEND2", 1, -1, 2, 1, 0);
					UNK_0x5D96D8530B3D0904(&bLocal_739, true);
				}
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, true))
				{
					if (bVar2 == UNK_0xD803B885F5E47A62())
					{
						func_953(1);
					}
				}
			}
			else if (func_1176() == Local_116.f_218)
			{
				if (func_431())
				{
					if (func_927(func_948(1), "DCONTRA_TXT2", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_581(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2, 1, 0);
					}
				}
				else if (func_927(func_948(1), "DCONTRA_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_581(86, "BIGM_DEFEND", "BIGM_DEFEND4", 1, -1, 2, 1, 0);
				}
				if (bVar2 == UNK_0xD803B885F5E47A62())
				{
					func_953(1);
				}
				UNK_0x5D96D8530B3D0904(&bLocal_739, true);
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&bLocal_739, true);
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&bLocal_739, true);
		}
	}
}

bool func_927(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	UNK_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_929(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_928(bParam0) };
			Global_8043 = bParam0;
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return true;
	}
	return false;
}

struct<4> func_928(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_929(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_941();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
	}
	if (func_940() == 0)
	{
		func_938();
		return 0;
	}
	func_937(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/]), bParam1, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_17 = bParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111638.f_14136[Global_21872 /*104*/].f_26 = iParam8;
	Global_111638.f_14136[Global_21872 /*104*/].f_29 = iParam9;
	Global_111638.f_14136[Global_21872 /*104*/].f_30 = iParam12;
	Global_111638.f_14136[Global_21872 /*104*/].f_31 = iParam11;
	Global_111638.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_936(0);
		func_936(2);
		func_936(1);
	}
	else
	{
		func_941();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			case 0:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			case 2:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			case 1:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_936(0);
					Global_8062 = 0;
					break;
				case 1:
					func_936(1);
					Global_8062 = 1;
					break;
				case 2:
					func_936(2);
					Global_8062 = 2;
					break;
				case 3:
					func_936(3);
					Global_8062 = 3;
					break;
				default:
					Global_8062 = 4;
					break;
			}
		}
	}
	if (iParam7 == 1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 10))
		{
			Global_111638.f_14046[0 /*20*/].f_17 = 1;
			Global_111638.f_14046[1 /*20*/].f_17 = 1;
			Global_111638.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				case 0:
					Global_111638.f_14046[0 /*20*/].f_17 = 1;
					break;
				case 2:
					Global_111638.f_14046[2 /*20*/].f_17 = 1;
					break;
				case 1:
					Global_111638.f_14046[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_941();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
			}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_577())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_935(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_932(1);
			func_935(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_930(bParam0, bParam1);
	return 1;
}

void func_930(bool bParam0, bool bParam1)
{
	if (!func_931())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, 1654525105, UNK_0x12AB0310C2281427(bParam1), 0);
}

bool func_931()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_57())
	{
		return false;
	}
	if (func_232(UNK_0xD803B885F5E47A62()))
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

void func_932(int iParam0)
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
		if (func_934(14))
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
								func_293(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_933(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_933(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_933(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_933(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_933(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_293(&(Global_7363[iVar1 /*15*/]));
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
								func_293(&(Global_7363[iVar1 /*15*/]));
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
								func_293(&(Global_7363[iVar1 /*15*/]));
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
								func_293(&(Global_7363[iVar1 /*15*/]));
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
								func_293(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_933(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_933(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_933(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_293(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_293(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_293(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_293(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_293(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

bool func_934(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_935(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_936(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_937(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = UNK_0x4460E481B9E33ADA();
	iVar1 = UNK_0x8D199E381D262EEF();
	iVar2 = UNK_0xD8A54335F18763BA();
	iVar3 = UNK_0x972A296334C9D57B();
	uVar4 = UNK_0x118229AD063C3C1D() + 1;
	iVar5 = UNK_0x1A61A218F5C5EB02();
	Global_111638.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_938()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_939(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

bool func_939(struct<6> Param0, struct<6> Param6)
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

int func_940()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111638.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_939(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

void func_941()
{
	if (func_934(14))
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
		Global_19486 = func_942();
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

var func_942()
{
	func_943();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_943()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_946(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_945(UNK_0x16F2683693E537C9());
			if (func_944(iVar0) && (!func_934(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_944(Global_111638.f_2358.f_539.f_4321))
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

bool func_944(int iParam0)
{
	return iParam0 < 3;
}

int func_945(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_946(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_946(int iParam0)
{
	if (func_944(iParam0))
	{
		return func_947(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_947(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_948(bool bParam0)
{
	if (func_951(bParam0))
	{
		if (bParam0 && func_950())
		{
			func_949(22, Global_19486, 1);
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_950())
	{
		func_949(22, Global_19486, 1);
		return 22;
	}
	return 74;
}

void func_949(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

bool func_950()
{
	bool bVar0;

	bVar0 = func_58(UNK_0xD803B885F5E47A62());
	if (((bVar0 != UNK_0xD803B885F5E47A62() && bVar0 != func_57()) && UNK_0x40B8C182D63932FC(bVar0)) && bVar0 != -1)
	{
		return true;
	}
	return false;
}

bool func_951(bool bParam0)
{
	bool bVar0;

	if (bParam0)
	{
		bVar0 = func_58(UNK_0xD803B885F5E47A62());
		if (func_950())
		{
			if (func_952(bVar0))
			{
				return true;
			}
			return false;
		}
	}
	return func_517(3222, -1, 0) != 0;
}

bool func_952(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 29);
}

void func_953(bool bParam0)
{
	if (bParam0)
	{
		if (!func_247(UNK_0xD803B885F5E47A62(), 9))
		{
			if (func_420(UNK_0xD803B885F5E47A62()) != 0)
			{
				func_248(9);
			}
		}
	}
	else if (func_247(UNK_0xD803B885F5E47A62(), 9))
	{
		func_246(9);
	}
}

bool func_954()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_948(1);
	switch (iLocal_855)
	{
		case 0:
			bLocal_856 = func_1034();
			if (func_951(1))
			{
				func_1033(&uLocal_857, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				func_1033(&uLocal_857, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_855++;
			break;
		case 1:
			if (func_1027(0, 1, 0, 1))
			{
				UNK_0x5D96D8530B3D0904(&bVar1, 4);
				if (func_955(&uLocal_857, bVar0, "EXCALAU", bLocal_856, bVar1, 0))
				{
					iLocal_855++;
					return true;
				}
			}
			break;
		case 2:
			break;
	}
	return false;
}

int func_955(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_1025())
	{
		return 0;
	}
	if (func_1024())
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = -99;
	return func_956(uParam0, bParam1, bParam2, bParam3, 1, iParam5, bParam4, bVar0, bVar1, iVar2, bVar0, bVar0, -1);
}

int func_956(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(bParam2) > 7)
	{
		return 0;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(bParam3) > 15)
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
	iVar1 = func_1023(bParam2, bParam3);
	iVar2 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		iVar2 = UNK_0x12AB0310C2281427(bParam7);
	}
	if (func_1022(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_1017(bParam6))
	{
		return 0;
	}
	if (func_1014(iVar0, iVar1, iVar2))
	{
		if (func_1013())
		{
			return 0;
		}
		func_1012();
		return func_963(uParam0, bParam1, iParam12, bParam2, bParam3, iParam4, iParam5, bParam6, bParam7, bParam8, iParam9, bParam10, bParam11);
	}
	if (!func_962(iParam4))
	{
		return 0;
	}
	func_957(iVar0, iVar1, iVar2, bParam3, iParam4, iParam5, bParam6);
	return 0;
}

void func_957(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = bParam6;
	func_958(iParam4);
	func_1012();
	Global_1370527.f_40.f_13 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 7000);
}

void func_958(int iParam0)
{
	if (func_961(iParam0))
	{
		func_960();
		return;
	}
	func_959();
}

void func_959()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_960()
{
	Global_1370527.f_40.f_10 = 1;
}

bool func_961(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return true;
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

bool func_962(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_963(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12)
{
	char cVar0[16];

	func_1011();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_1008(uParam0, bParam3, bParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&cVar0, "CELL_226", 16);
		return func_1005(uParam0, bParam1, bParam3, bParam4, &cVar0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_1008(uParam0, bParam3, bParam4);
		}
		return func_988(uParam0, bParam1, bParam3, bParam4, bParam7);
	}
	if (iParam5 == 5)
	{
		return func_987(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 2)
	{
		return func_983(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 3)
	{
		return func_982(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 6)
	{
		return func_964(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	return 0;
}

int func_964(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_981();
	bVar0 = true;
	if (func_966(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_965(120000);
		return 1;
	}
	return 0;
}

void func_965(bool bParam0)
{
	Global_1370527.f_40.f_11 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam0);
	Global_1370527.f_40.f_12 = 1;
}

bool func_966(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	bVar0 = func_57();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_325(bVar0);
		if (iVar1 == 0)
		{
			if (UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return false;
			}
		}
	}
	else
	{
		bVar2 = "";
	}
	iVar3 = 0;
	bVar4 = func_980(bParam5, bParam6, &iVar3);
	iVar5 = func_978(iParam7, &iVar3);
	iVar6 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		iVar6++;
		if (!UNK_0xEA6BC48857E0AC4C(bParam9))
		{
			iVar6++;
		}
	}
	if (UNK_0x7F8A39872A07D2CE(bVar4, " "))
	{
		bVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !UNK_0xEA6BC48857E0AC4C(bVar2))
	{
		bVar12 = func_977(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_970(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_969();
	}
	func_981();
	func_968();
	func_967();
	return true;
}

void func_967()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_968()
{
	Global_1370527.f_40 = 3;
}

void func_969()
{
	UNK_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_970(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_971(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			UNK_0x5D96D8530B3D0904(&Global_4269765, false);
		}
		return 1;
	}
	return 0;
}

int func_971(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_941();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPEMAIL")) > 0)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPMPEMAIL")) > 0)
		{
			return 0;
		}
	}
	if (func_976() == 0)
	{
		func_974();
		return 0;
	}
	func_973(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/]), bParam1, 64);
	Global_4268500[Global_4269749 /*104*/].f_17 = bParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749 /*104*/].f_24 = iParam2;
	}
	Global_4268500[Global_4269749 /*104*/].f_25 = iParam7;
	Global_4268500[Global_4269749 /*104*/].f_26 = iParam8;
	Global_4268500[Global_4269749 /*104*/].f_29 = iParam9;
	Global_4268500[Global_4269749 /*104*/].f_30 = iParam12;
	Global_4268500[Global_4269749 /*104*/].f_31 = iParam11;
	Global_4268500[Global_4269749 /*104*/].f_28 = 0;
	Global_4268500[Global_4269749 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_33), sParam4, 64);
	Global_4268500[Global_4269749 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_50), sParam5, 64);
	Global_4268500[Global_4269749 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_83), sParam15, 64);
	func_941();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749 /*104*/].f_99[Global_19486] = 1;
			break;
		case 0:
			Global_4268500[Global_4269749 /*104*/].f_99[0] = 1;
			break;
		case 2:
			Global_4268500[Global_4269749 /*104*/].f_99[2] = 1;
			break;
		case 1:
			Global_4268500[Global_4269749 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_936(0);
				break;
			case 1:
				func_936(1);
				break;
			case 2:
				func_936(2);
				break;
			case 3:
				func_936(3);
				break;
			default:
				break;
		}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269750 = 1;
				break;
			case 0:
				Global_4269750 = 1;
				break;
			case 2:
				Global_4269750 = 1;
				break;
			case 1:
				Global_4269750 = 1;
				break;
		}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_941();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
			}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_577())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_935(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_932(1);
			func_935(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_972(bParam0, bParam1);
	return 1;
}

void func_972(bool bParam0, bool bParam1)
{
	if (!func_931())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, -1180597171, UNK_0x12AB0310C2281427(bParam1), 0);
}

void func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = UNK_0x4460E481B9E33ADA();
	iVar1 = UNK_0x8D199E381D262EEF();
	iVar2 = UNK_0xD8A54335F18763BA();
	iVar3 = UNK_0x972A296334C9D57B();
	uVar4 = UNK_0x118229AD063C3C1D() + 1;
	iVar5 = UNK_0x1A61A218F5C5EB02();
	Global_4268500[iParam0 /*104*/].f_18 = iVar0;
	Global_4268500[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268500[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268500[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268500[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268500[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_974()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_975(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

bool func_975(struct<6> Param0, struct<6> Param6)
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

int func_976()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0 || Global_4268500[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_975(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749 /*104*/].f_99[0] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[1] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[2] = 0;
	return 1;
}

int func_977(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			bParam15 = "NULL";
			bParam16 = "NULL";
			break;
		case 1:
			bParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	iVar0 = 3;
	if (func_971(bParam0, bParam1, iParam2, iParam6, bParam3, bParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			UNK_0x5D96D8530B3D0904(&Global_4269765, false);
		}
		return 1;
	}
	return 0;
}

int func_978(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_979(2, iParam1);
	return iParam0;
}

void func_979(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		case 2:
			bVar1 = true;
			break;
		default:
			return;
	}
	if (bVar0)
	{
		switch (*iParam1)
		{
			case 1:
			case 3:
				break;
			case 0:
				*iParam1 = 1;
				break;
			case 2:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*iParam1)
		{
			case 2:
			case 3:
				break;
			case 0:
				*iParam1 = 2;
				break;
			case 1:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
}

bool func_980(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return bLocal_18;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, bLocal_18))
	{
		return bLocal_18;
	}
	func_979(1, iParam2);
	if (bParam1)
	{
		return bParam0;
	}
	return UNK_0x19C9F30A7697B43C(bParam0);
}

void func_981()
{
	Global_1370527.f_40.f_9 = 4;
}

bool func_982(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_981();
	bVar0 = false;
	return func_966(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_983(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	bVar0 = false;
	return func_984(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_984(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	bVar0 = func_57();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_325(bVar0);
		if (iVar1 == 0)
		{
			if (UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return false;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		bVar2 = "";
	}
	iVar3 = 0;
	bVar4 = func_980(bParam5, bParam6, &iVar3);
	iVar5 = func_978(iParam7, &iVar3);
	iVar6 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		iVar6++;
		if (!UNK_0xEA6BC48857E0AC4C(bParam9))
		{
			iVar6++;
		}
	}
	if (UNK_0x7F8A39872A07D2CE(bVar4, " "))
	{
		bVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !UNK_0xEA6BC48857E0AC4C(bVar2))
	{
		bVar12 = func_986(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_927(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_969();
	}
	func_985();
	func_968();
	func_967();
	return true;
}

void func_985()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_986(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			bParam15 = "NULL";
			bParam16 = "NULL";
			break;
		case 1:
			bParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	UNK_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 3;
	if (func_929(bParam0, bParam1, iParam2, iParam6, bParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_928(bParam0) };
			Global_8043 = bParam0;
			StringCopy(&Global_8044, sParam5, 64);
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_987(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_985();
	bVar0 = true;
	if (func_984(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_965(120000);
		return 1;
	}
	return 0;
}

int func_988(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 7))
	{
		iVar1 = 9;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 4))
	{
		bVar0 = func_1004(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_994(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 3))
		{
			func_993(1);
		}
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 5))
		{
			func_992(1);
		}
		func_991();
		func_968();
		func_990();
		func_989();
		return 1;
	}
	return 0;
}

void func_989()
{
	Global_2546572 = 0;
}

void func_990()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_991()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_992(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7358, false);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7358, false);
	}
}

void func_993(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 20);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 20);
	}
}

int func_994(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_1003(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_995(bParam3, iParam4, bParam7);
}

int func_995(char* sParam0, int iParam1, bool bParam2)
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
					func_1002();
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
		if (func_404(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_1001();
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
				func_941();
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
				if (func_1000())
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
			if (func_999())
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
			func_998();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_997();
		func_996();
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
		func_1002();
	}
	return 0;
}

void func_996()
{
	if (!func_931())
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

void func_997()
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

void func_998()
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

bool func_999()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_1000()
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

void func_1001()
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

void func_1002()
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

void func_1003(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = bParam1;
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

int func_1004(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_1003(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_995(bParam3, iParam4, bParam7);
}

int func_1005(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_1007(uParam0, bParam1, bParam2, bParam3, 9, sParam4, 0, 0, 1))
	{
		func_1006();
		func_991();
		func_968();
		func_990();
		func_989();
		return 1;
	}
	return 0;
}

void func_1006()
{
	Global_21823 = 0;
}

int func_1007(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_1003(uParam0, bParam1, bParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_995(bParam3, iParam4, bParam8);
}

int func_1008(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1010(uParam0, bParam1, bParam2, 12, 0, 0, 0))
	{
		func_1009();
		func_968();
		func_990();
		return 1;
	}
	return 0;
}

void func_1009()
{
	Global_1370527.f_40.f_9 = 2;
}

int func_1010(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1003(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_995(bParam2, iParam3, 0);
}

void func_1011()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_1012()
{
	Global_1370527.f_40 = 1;
}

bool func_1013()
{
	return Global_1370527.f_40 == 1;
}

bool func_1014(int iParam0, int iParam1, int iParam2)
{
	if (!func_1015(iParam0))
	{
		return false;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return false;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_1015(int iParam0)
{
	if (!func_1016())
	{
		return false;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_1016()
{
	if (Global_1370527.f_40 == 0)
	{
		return false;
	}
	return true;
}

bool func_1017(bool bParam0)
{
	if (func_1021())
	{
		return false;
	}
	if (func_1020())
	{
		return false;
	}
	if (func_1019(0))
	{
		return false;
	}
	if (Global_1312467.f_18 != 0)
	{
		return false;
	}
	if (Global_1662006 || func_545())
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0, 6))
	{
		if (func_1018())
		{
			return false;
		}
	}
	return true;
}

bool func_1018()
{
	return UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1387714);
}

bool func_1019(int iParam0)
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

bool func_1020()
{
	return Global_1370527.f_40 == 3;
}

bool func_1021()
{
	return func_999();
}

bool func_1022(int iParam0, int iParam1, int iParam2)
{
	if (!func_1020())
	{
		return false;
	}
	return func_1014(iParam0, iParam1, iParam2);
}

int func_1023(char* sParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

bool func_1024()
{
	return Global_2543673.f_1;
}

int func_1025()
{
	if (Global_1370715.f_2)
	{
		return 1;
	}
	return func_1026();
}

bool func_1026()
{
	return func_1021();
}

bool func_1027(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && UNK_0xFEBC1E4EC9E001F0())
	{
		return false;
	}
	if (func_1032())
	{
		return false;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	if (func_410())
	{
		return false;
	}
	if (func_578())
	{
		return false;
	}
	if (bParam1)
	{
		if (func_102(UNK_0xD803B885F5E47A62(), 1, 0))
		{
			return false;
		}
	}
	if (bParam0)
	{
		if (func_1031(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (func_1030())
	{
		return false;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (bParam3)
	{
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (Global_1574184)
	{
		return false;
	}
	if (func_1029())
	{
		return false;
	}
	if (func_1028())
	{
		return false;
	}
	if (func_403())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (Global_2547056)
	{
		return false;
	}
	if (func_233(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_1028()
{
	return Global_2450632.f_591;
}

bool func_1029()
{
	return Global_2450632.f_744;
}

bool func_1030()
{
	return Global_2439138.f_3047.f_578;
}

bool func_1031(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return false;
	}
	return true;
}

bool func_1032()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_1033(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_1034()
{
	bool bVar0;
	int iVar1;

	bVar0 = !func_951(1);
	iVar1 = UNK_0x09AC81E49EA267F7(false, 3);
	if (!func_431())
	{
		if (bVar0)
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAF";
				case 1:
					return "EXCAL_ATTAF2";
				default:
					break;
			}
			return "EXCAL_ATTAF3";
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAM";
				case 1:
					return "EXCAL_ATTAM2";
				default:
					break;
			}
			return "EXCAL_ATTAM3";
		}
	}
	else if (bVar0)
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEF";
			case 1:
				return "EXCAL_STOLF2";
			default:
				break;
		}
		return "EXCAL_STOLF3";
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEM";
			case 1:
				return "EXCAL_STOLM2";
			default:
				break;
		}
		return "EXCAL_STOLM3";
	}
	return "";
}

void func_1035(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (bParam5)
	{
		iVar0 = func_305(UNK_0xD803B885F5E47A62());
		Global_1674635 = iVar0;
		Global_1674635.f_1 = iParam0;
		if (func_653() != func_57())
		{
			Global_1674635.f_2 = func_793(func_653());
			Global_1674635.f_3 = func_792(func_653());
		}
		if (func_378() != func_57())
		{
			func_652(func_378(), &(Global_1674635.f_2), &(Global_1674635.f_3));
		}
		Global_1674635.f_7 = UNK_0xDD0E7998AE8AD485();
		Global_1674635.f_28 = func_881(UNK_0xD803B885F5E47A62());
		Global_1674635.f_13 = 0;
		Global_1674635.f_14 = 0;
		if (func_313(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674635.f_23 = func_884(func_375(1));
		}
	}
	else
	{
		iVar0 = func_243(UNK_0xD803B885F5E47A62());
	}
	if (bParam2 || func_456(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674374 = iVar0;
		if (func_439(iVar0))
		{
			Global_1674374.f_1 = 4;
		}
		else if (func_561(iVar0))
		{
			Global_1674374.f_1 = 5;
		}
		else if (func_344(iVar0, 0))
		{
			Global_1674374.f_1 = 2;
			if (func_627(iVar0))
			{
				Global_1674374.f_1 = 3;
			}
		}
		else
		{
			Global_1674374.f_1 = 1;
		}
		if (func_653() != func_57())
		{
			Global_1674374.f_4 = func_793(func_653());
			Global_1674374.f_5 = func_792(func_653());
		}
		if (func_378() != func_57())
		{
			func_652(func_378(), &(Global_1674374.f_6), &(Global_1674374.f_7));
		}
		Global_1674374.f_9 = UNK_0xDD0E7998AE8AD485();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674374.f_27 = 1;
			Global_1674374.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674374.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674374.f_40 = func_648(iParam1);
			Global_1674374.f_41 = func_1057();
			Global_1674374.f_42 = func_755(UNK_0xD803B885F5E47A62(), iParam1);
			Global_1674374.f_44 = func_874(UNK_0xD803B885F5E47A62(), iParam1);
		}
		if (!func_643() || iVar0 != 192)
		{
			Global_1674374.f_53 = 0;
		}
	}
	else if (func_559(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674491 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674491 = iParam0 + 1;
		}
		else
		{
			Global_1674491 = func_1056(UNK_0xD803B885F5E47A62());
		}
		switch (iVar0)
		{
			case 225:
				if (func_624(UNK_0xD803B885F5E47A62()) == 0)
				{
					Global_1674491.f_1 = 0;
				}
				else
				{
					Global_1674491.f_1 = 1;
				}
				break;
			case 226:
				Global_1674491.f_1 = 2;
				break;
			case 227:
				Global_1674491.f_1 = 3;
				break;
		}
		Global_1674491.f_21 = 1;
		Global_1674491.f_22 = 1;
		if (func_653() != func_57())
		{
			Global_1674491.f_4 = func_793(func_653());
			Global_1674491.f_5 = func_792(func_653());
		}
		if (func_378() != func_57())
		{
			func_652(func_378(), &(Global_1674491.f_4), &(Global_1674491.f_5));
		}
		Global_1674491.f_8 = UNK_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674491.f_20 = iParam0;
		}
	}
	else if (func_461(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
		}
		Global_1674428 = iVar0;
		Global_1674374.f_1 = 1;
		if (func_653() != func_57())
		{
			Global_1674428.f_4 = func_793(func_653());
			Global_1674428.f_5 = func_792(func_653());
		}
		if (func_378() != func_57())
		{
			func_652(func_378(), &(Global_1674428.f_6), &(Global_1674428.f_7));
		}
		Global_1674428.f_9 = UNK_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674428.f_21 = iParam0;
		}
	}
	else if (func_557(iVar0))
	{
		Global_1674535 = iVar0;
		Global_1674535.f_1 = iParam0;
		Global_1674535.f_21 = 1;
		Global_1674535.f_22 = 1;
		if (func_653() != func_57())
		{
			Global_1674535.f_4 = func_793(func_653());
			Global_1674535.f_5 = func_792(func_653());
		}
		if (func_378() != func_57())
		{
			func_652(func_378(), &(Global_1674535.f_4), &(Global_1674535.f_5));
		}
		Global_1674535.f_8 = UNK_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674535.f_20 = iParam0;
		}
		Global_1674535.f_27 = func_867(func_36(), 5);
		Global_1674535.f_28 = func_884(func_1055(UNK_0xD803B885F5E47A62()));
		Global_1674535.f_29 = func_517(6107, -1, 0);
		Global_1674535.f_30 = func_517(6103, -1, 0);
		Global_1674535.f_31 = func_517(6104, -1, 0);
		Global_1674535.f_32 = func_517(6106, -1, 0);
		Global_1674535.f_33 = func_517(6105, -1, 0);
		Global_1674535.f_34 = func_517(6108, -1, 0);
		Global_1674535.f_7 = func_883();
		Global_1674535.f_51 = func_884(bParam4);
	}
	else if (func_555(iVar0))
	{
		Global_1674589 = iVar0;
		Global_1674589.f_1 = iParam0;
		Global_1674589.f_21 = 1;
		Global_1674589.f_22 = 1;
		if (func_653() != func_57())
		{
			Global_1674589.f_4 = func_793(func_653());
			Global_1674589.f_5 = func_792(func_653());
		}
		if (func_378() != func_57())
		{
			func_652(func_378(), &(Global_1674589.f_4), &(Global_1674589.f_5));
		}
		Global_1674589.f_8 = UNK_0xDD0E7998AE8AD485();
		if (iParam0 != -1)
		{
			Global_1674589.f_20 = iParam0;
		}
		Global_1674589.f_24 = func_517(6157, -1, 0);
		Global_1674589.f_25 = func_517(6162, -1, 0);
		Global_1674589.f_26 = func_517(6163, -1, 0);
		Global_1674589.f_27 = func_884((((func_832() || func_831()) || func_830()) || func_829(UNK_0xD803B885F5E47A62())));
		Global_1674589.f_28 = func_517(6164, -1, 0);
		Global_1674589.f_29 = func_884(func_828());
		Global_1674589.f_31 = 0;
		Global_1674589.f_30 = 0;
		Global_1674589.f_32 = 0;
		Global_1674589.f_33 = 0;
		Global_1674589.f_34 = 0;
		Global_1674589.f_16 = 0;
		Global_1674589.f_7 = func_883();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_622(func_623(UNK_0xD803B885F5E47A62()))))
	{
		Global_1674725 = iVar0;
		Global_1674725.f_1 = iParam0;
		Global_1674725.f_21 = 1;
		Global_1674725.f_22 = 1;
		Global_1674725.f_7 = func_883();
		if (func_653() != func_57())
		{
			Global_1674725.f_4 = func_793(func_653());
			Global_1674725.f_5 = func_792(func_653());
		}
		if (func_378() != func_57())
		{
			func_652(func_378(), &(Global_1674725.f_4), &(Global_1674725.f_5));
		}
		if (func_653() != -1)
		{
			Global_1674725.f_17 = func_825(func_653());
		}
		Global_1674725.f_8 = UNK_0xDD0E7998AE8AD485();
		Global_1674725.f_28 = func_881(UNK_0xD803B885F5E47A62());
		Global_1674725.f_16 = 0;
		Global_1674725.f_24 = 0;
		Global_1674725.f_23 = 0;
		if (func_313(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674725.f_33 = func_884(func_375(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1674671 = iVar0;
		Global_1674671.f_1 = iParam0;
		Global_1674671.f_21 = 1;
		Global_1674671.f_22 = 1;
		Global_1674671.f_7 = func_883();
		Global_1674671.f_24 = 0;
		Global_1674671.f_23 = 0;
		Global_1674671.f_16 = 0;
		if (func_653() != func_57())
		{
			Global_1674671.f_4 = func_793(func_653());
			Global_1674671.f_5 = func_792(func_653());
		}
		Global_1674671.f_28 = func_881(UNK_0xD803B885F5E47A62());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_819(UNK_0xD803B885F5E47A62());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_803(UNK_0xD803B885F5E47A62(), 4, -1);
		Global_1674671.f_31 = func_822(UNK_0xD803B885F5E47A62());
		Global_1674671.f_32 = func_884(func_802(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_33 = func_884(func_801(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_34 = func_884(func_800(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_35 = func_884(func_799(UNK_0xD803B885F5E47A62()));
		Global_1674671.f_36 = func_798(UNK_0xD803B885F5E47A62());
		Global_1674671.f_37 = func_797(UNK_0xD803B885F5E47A62());
		Global_1674671.f_39 = func_796(UNK_0xD803B885F5E47A62());
		if (func_313(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674671.f_41 = func_884(func_375(1));
		}
		if (func_378() != func_57())
		{
			func_652(func_378(), &(Global_1674671.f_4), &(Global_1674671.f_5));
		}
		Global_1674671.f_8 = UNK_0xDD0E7998AE8AD485();
		Global_1674671.f_28 = func_881(UNK_0xD803B885F5E47A62());
	}
	else if (func_620(iVar0))
	{
		Global_1674809 = iVar0;
		Global_1674809.f_1 = func_624(UNK_0xD803B885F5E47A62());
		Global_1674809.f_2 = func_892();
		Global_1674809.f_3 = func_891();
		Global_1674809.f_4 = func_793(func_653());
		Global_1674809.f_5 = func_792(func_653());
		Global_1674809.f_7 = func_883();
		Global_1674809.f_8 = UNK_0xDD0E7998AE8AD485();
		if (func_653() != -1)
		{
			Global_1674809.f_17 = func_825(func_653());
		}
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = iParam0;
		Global_1674809.f_27 = func_884(func_790(UNK_0xD803B885F5E47A62()));
		Global_1674809.f_28 = func_787(21, -1);
	}
	else if (func_549(iVar0))
	{
		Global_1674884 = Global_786547.f_1;
		Global_1674884.f_2 = Global_786547;
		Global_1674884.f_6 = func_793(func_653());
		Global_1674884.f_7 = func_792(func_653());
		if (func_313(UNK_0xD803B885F5E47A62(), 1))
		{
			Global_1674884.f_8 = func_884(func_375(1));
		}
		if (func_653() != -1)
		{
			Global_1674884.f_9 = func_825(func_653());
		}
		Global_1674884.f_10 = func_883();
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		Global_1674884.f_21 = 0;
		Global_1674884.f_22 = 0;
		Global_1674884.f_23 = 0;
		Global_1702973 = UNK_0xDD0E7998AE8AD485();
	}
	else
	{
		if (func_653() != func_57())
		{
			Global_1674356 = func_793(func_653());
			Global_1674356.f_1 = func_792(func_653());
		}
		Global_1674356.f_5 = UNK_0xDD0E7998AE8AD485();
		Global_1674356.f_13 = func_1054();
		Global_1674356.f_15 = 0;
		if (func_651(1))
		{
			if (func_378() == func_653())
			{
				Global_1674356.f_15 = 1;
			}
		}
		if (func_1053())
		{
			Global_1674491.f_28 = 1;
		}
		if (((((func_1052() || func_1051()) || func_1050()) || func_1049()) || func_1048()) || func_1047(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_30 = 1;
		}
		if (func_1045(func_1046(joaat("TRAILERSMALL2"))))
		{
			Global_1674491.f_32 = 1;
		}
		if (func_1039(func_1044(joaat("CADDY"))))
		{
			Global_1674491.f_31 = 1;
		}
		if (func_866(UNK_0xD803B885F5E47A62()) || func_865(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_29 = 1;
		}
		if (func_862(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_33 = 1;
			Global_1674491.f_34 = 1;
		}
		if (func_863(UNK_0xD803B885F5E47A62()))
		{
			Global_1674491.f_36 = 1;
		}
		if (func_860(0, UNK_0xD803B885F5E47A62()) == 1)
		{
			Global_1674491.f_35 = 1;
		}
		if (func_1038(UNK_0xD803B885F5E47A62(), 3, &uVar1))
		{
			Global_1674491.f_37 = 1;
		}
		if (func_1038(UNK_0xD803B885F5E47A62(), 7, &uVar1))
		{
			Global_1674491.f_38 = 1;
		}
		if (func_1037(UNK_0xD803B885F5E47A62()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_1036(UNK_0xD803B885F5E47A62(), iVar2);
				if (func_752(UNK_0xD803B885F5E47A62(), iVar3, 0))
				{
					Global_1674491.f_39 = 1;
				}
				if (func_752(UNK_0xD803B885F5E47A62(), iVar3, 2))
				{
					Global_1674491.f_40 = 1;
				}
				if (func_752(UNK_0xD803B885F5E47A62(), iVar3, 1))
				{
					Global_1674491.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_1036(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == func_57())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_745(Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

bool func_1037(int iParam0)
{
	int iVar0;

	if (iParam0 == func_57())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1038(bool bParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (bParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_860(iVar0, bParam0))
			{
				*uParam2 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1039(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_787(11, -1) == 0)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_846(11));
		func_845(iVar1, &iVar0, 1);
		iVar2 = func_787(func_1041(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_517(func_1040(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_1040(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				case 1:
					return 1636;
				case 2:
					return 1643;
				case 3:
					return 1650;
				case 4:
					return 1657;
				case 5:
					return 1664;
				case 6:
					return 1671;
				case 7:
					return 1678;
				case 8:
					return 1685;
				case 9:
					return 1692;
				case 10:
					return 1699;
				case 11:
					return 1705;
				case 12:
					return 1711;
				case 13:
					return 1717;
				case 14:
					return 1795;
				case 15:
					return 1802;
				case 16:
					return 1809;
				case 17:
					return 1816;
				case 18:
					return 1823;
				case 19:
					return 1830;
				case 20:
					return 1837;
				case 21:
					return 1844;
				case 22:
					return 1851;
				case 23:
					return 1858;
				case 24:
					return 1864;
				case 25:
					return 1870;
				case 26:
					return 2165;
				case 27:
					return 2172;
				case 28:
					return 2179;
				case 29:
					return 2186;
				case 30:
					return 2193;
				case 31:
					return 2200;
				case 32:
					return 2207;
				case 33:
					return 2214;
				case 34:
					return 2221;
				case 35:
					return 2228;
				case 36:
					return 2235;
				case 37:
					return 2241;
				case 38:
					return 2247;
				case 39:
					return 2828;
				case 40:
					return 2835;
				case 41:
					return 2842;
				case 42:
					return 2849;
				case 43:
					return 2856;
				case 44:
					return 2863;
				case 45:
					return 2870;
				case 46:
					return 2877;
				case 47:
					return 2884;
				case 48:
					return 2891;
				case 49:
					return 2898;
				case 50:
					return 2904;
				case 51:
					return 2910;
				case 52:
					return 2952;
				case 53:
					return 2959;
				case 54:
					return 2966;
				case 55:
					return 2973;
				case 56:
					return 2980;
				case 57:
					return 2987;
				case 58:
					return 2994;
				case 59:
					return 3001;
				case 60:
					return 3008;
				case 61:
					return 3015;
				case 62:
					return 3022;
				case 63:
					return 3028;
				case 64:
					return 3034;
				case 65:
					return 3235;
				case 66:
					return 3243;
				case 67:
					return 3251;
				case 68:
					return 3259;
				case 69:
					return 3267;
				case 70:
					return 3275;
				case 71:
					return 3283;
				case 72:
					return 3291;
				case 73:
					return 3299;
				case 74:
					return 3307;
				case 75:
					return 3315;
				case 76:
					return 3323;
				case 77:
					return 3331;
				case 78:
					return 3339;
				case 79:
					return 3347;
				case 80:
					return 3355;
				case 81:
					return 3363;
				case 82:
					return 3371;
				case 83:
					return 3379;
				case 84:
					return 3387;
				case 85:
					return 3395;
				case 86:
					return 3402;
				case 87:
					return 3409;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				case 89:
					return 4039;
				case 90:
					return 4047;
				case 91:
					return 4055;
				case 92:
					return 4063;
				case 93:
					return 4071;
				case 94:
					return 4079;
				case 95:
					return 4087;
				case 96:
					return 4095;
				case 97:
					return 4103;
				case 98:
					return 4111;
				case 99:
					return 4119;
				case 100:
					return 4127;
				case 101:
					return 4135;
				case 102:
					return 4143;
				case 103:
					return 4151;
				case 104:
					return 4159;
				case 105:
					return 4167;
				case 106:
					return 4175;
				case 107:
					return 4183;
				case 108:
					return 4191;
				case 109:
					return 4199;
				case 110:
					return 4207;
				case 111:
					return 4215;
				case 112:
					return 4223;
				case 113:
					return 4231;
				case 114:
					return 4239;
				case 115:
					return 4247;
				case 116:
					return 4255;
				case 117:
					return 4263;
				case 118:
					return 4271;
				case 119:
					return 4279;
				case 120:
					return 4287;
				case 121:
					return 4295;
				case 122:
					return 4303;
				case 123:
					return 4311;
				case 124:
					return 4319;
				case 125:
					return 4327;
				case 126:
					return 4335;
				case 127:
					return 4343;
				case 128:
					return 4351;
				case 129:
					return 4359;
				case 130:
					return 4367;
				case 131:
					return 4375;
				case 132:
					return 4383;
				case 133:
					return 4391;
				case 134:
					return 4399;
				case 135:
					return 4407;
				case 136:
					return 4415;
				case 137:
					return 4423;
				case 138:
					return 4431;
				case 139:
					return 4439;
				case 140:
					return 4447;
				case 141:
					return 4455;
				case 142:
					return 4463;
				case 143:
					return 4471;
				case 144:
					return 4479;
				case 145:
					return 4487;
				case 146:
					return 4495;
				case 147:
					return 4503;
				case 148:
					return 4511;
				case 149:
					return 4519;
				case 150:
					return 4527;
				case 151:
					return 4535;
				case 152:
					return 4543;
				case 153:
					return 4551;
				case 154:
					return 4559;
				case 155:
					return 4567;
				case 156:
					return 4575;
				case 157:
					return 4583;
				case 158:
					return 5476;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				case 160:
					return 5932;
				case 161:
					return 5939;
				case 162:
					return 5946;
				case 163:
					return 5953;
				case 164:
					return 5960;
				case 165:
					return 5967;
				case 166:
					return 5974;
				case 167:
					return 5981;
				case 168:
					return 5988;
				case 169:
					return 5995;
				case 170:
					return 6002;
				case 171:
					return 6009;
				case 172:
					return 6016;
				case 173:
					return 6023;
				case 174:
					return 6030;
				case 175:
					return 6037;
				case 176:
					return 6044;
				case 177:
					return 6051;
				case 178:
					return 6058;
				case 179:
					return 6065;
				case 180:
					return 6072;
				case 181:
					return 6079;
				case 182:
					return 6086;
				case 183:
					return 6093;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				case 185:
					return 6177;
				case 186:
					return 6184;
				case 187:
					return 6191;
				case 188:
					return 6198;
				case 189:
					return 6205;
				case 190:
					return 6212;
				case 191:
					return 6219;
				case 192:
					return 6226;
				case 193:
					return 6233;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				case 195:
					return 6574;
				case 196:
					return 6581;
				case 197:
					return 6588;
				case 198:
					return 6595;
				case 199:
					return 6602;
				case 200:
					return 6609;
				case 201:
					return 6616;
				case 202:
					return 6623;
				case 203:
					return 6630;
				case 204:
					return 6637;
				case 205:
					return 6644;
				case 206:
					return 6651;
				case 207:
					return 6658;
				case 208:
					return 6665;
				case 209:
					return 6672;
				case 210:
					return 6679;
				case 211:
					return 6686;
				case 212:
					return 6693;
				case 213:
					return 6700;
				case 214:
					return 6707;
				case 215:
					return 6714;
				case 216:
					return 6721;
				case 217:
					return 6728;
				case 218:
					return 6735;
				case 219:
					return 6742;
				case 220:
					return 6749;
				case 221:
					return 6756;
				case 222:
					return 6763;
				case 223:
					return 6770;
				case 224:
					return 6777;
				case 225:
					return 6784;
				case 226:
					return 6791;
				case 227:
					return 6798;
				case 228:
					return 6805;
				case 229:
					return 6812;
				case 230:
					return 6819;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				case 232:
					return 7296;
				case 233:
					return 7303;
				case 234:
					return 7310;
				case 235:
					return 7317;
				case 236:
					return 7324;
				case 237:
					return 7331;
				case 238:
					return 7338;
				case 239:
					return 7345;
				case 240:
					return 7352;
				case 241:
					return 7359;
				case 242:
					return 7366;
				case 243:
					return 7373;
				case 244:
					return 7380;
				case 245:
					return 7387;
				case 246:
					return 7394;
				case 247:
					return 7401;
				case 248:
					return 7408;
				case 249:
					return 7415;
				case 250:
					return 7422;
				case 251:
					return 7429;
				case 252:
					return 7436;
				case 253:
					return 7443;
				case 254:
					return 7450;
				case 255:
					return 7457;
				case 256:
					return 7464;
				case 257:
					return 7471;
				case 258:
					return 7478;
				case 259:
					return 7485;
				case 260:
					return 7492;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				case 262:
					return 8019;
				case 263:
					return 8026;
				case 264:
					return 8033;
				case 265:
					return 8040;
				case 266:
					return 8047;
				case 267:
					return 8054;
				case 268:
					return 8061;
				case 269:
					return 8068;
				case 270:
					return 8075;
				case 271:
					return 8536;
				case 272:
					return 8543;
				case 273:
					return 8550;
				case 274:
					return 8557;
				case 275:
					return 8564;
				case 276:
					return 8571;
				case 277:
					return 8578;
				case 278:
					return 8585;
				case 279:
					return 8592;
				case 280:
					return 8599;
				case 281:
					return 8981;
				case 282:
					return 8988;
				case 283:
					return 8995;
				case 284:
					return 9002;
				case 285:
					return 9009;
				case 286:
					return 9016;
				case 287:
					return 9023;
				case 288:
					return 9030;
				case 289:
					return 9037;
				case 290:
					return 9044;
				case 291:
					return 9051;
				case 292:
					return 9057;
				case 293:
					return 9063;
				case 294:
					return 9069;
				case 295:
					return 9076;
				case 296:
					return 9083;
				case 297:
					return 9090;
				case 298:
					return 9097;
				case 299:
					return 9104;
				case 300:
					return 9111;
				case 301:
					return 9118;
				case 302:
					return 9125;
				case 303:
					return 9132;
				case 304:
					return 9139;
				case 305:
					return 9145;
				case 306:
					return 9151;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				case 1:
					return 1637;
				case 2:
					return 1644;
				case 3:
					return 1651;
				case 4:
					return 1658;
				case 5:
					return 1665;
				case 6:
					return 1672;
				case 7:
					return 1679;
				case 8:
					return 1686;
				case 9:
					return 1693;
				case 10:
					return 1700;
				case 11:
					return 1706;
				case 12:
					return 1712;
				case 13:
					return 1718;
				case 14:
					return 1796;
				case 15:
					return 1803;
				case 16:
					return 1810;
				case 17:
					return 1817;
				case 18:
					return 1824;
				case 19:
					return 1831;
				case 20:
					return 1838;
				case 21:
					return 1845;
				case 22:
					return 1852;
				case 23:
					return 1859;
				case 24:
					return 1865;
				case 25:
					return 1871;
				case 26:
					return 2166;
				case 27:
					return 2173;
				case 28:
					return 2180;
				case 29:
					return 2187;
				case 30:
					return 2194;
				case 31:
					return 2201;
				case 32:
					return 2208;
				case 33:
					return 2215;
				case 34:
					return 2222;
				case 35:
					return 2229;
				case 36:
					return 2236;
				case 37:
					return 2242;
				case 38:
					return 2248;
				case 39:
					return 2829;
				case 40:
					return 2836;
				case 41:
					return 2843;
				case 42:
					return 2850;
				case 43:
					return 2857;
				case 44:
					return 2864;
				case 45:
					return 2871;
				case 46:
					return 2878;
				case 47:
					return 2885;
				case 48:
					return 2892;
				case 49:
					return 2899;
				case 50:
					return 2905;
				case 51:
					return 2911;
				case 52:
					return 2953;
				case 53:
					return 2960;
				case 54:
					return 2967;
				case 55:
					return 2974;
				case 56:
					return 2981;
				case 57:
					return 2988;
				case 58:
					return 2995;
				case 59:
					return 3002;
				case 60:
					return 3009;
				case 61:
					return 3016;
				case 62:
					return 3023;
				case 63:
					return 3029;
				case 64:
					return 3035;
				case 65:
					return 3236;
				case 66:
					return 3244;
				case 67:
					return 3252;
				case 68:
					return 3260;
				case 69:
					return 3268;
				case 70:
					return 3276;
				case 71:
					return 3284;
				case 72:
					return 3292;
				case 73:
					return 3300;
				case 74:
					return 3308;
				case 75:
					return 3316;
				case 76:
					return 3324;
				case 77:
					return 3332;
				case 78:
					return 3340;
				case 79:
					return 3348;
				case 80:
					return 3356;
				case 81:
					return 3364;
				case 82:
					return 3372;
				case 83:
					return 3380;
				case 84:
					return 3388;
				case 85:
					return 3396;
				case 86:
					return 3403;
				case 87:
					return 3410;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				case 89:
					return 4040;
				case 90:
					return 4048;
				case 91:
					return 4056;
				case 92:
					return 4064;
				case 93:
					return 4072;
				case 94:
					return 4080;
				case 95:
					return 4088;
				case 96:
					return 4096;
				case 97:
					return 4104;
				case 98:
					return 4112;
				case 99:
					return 4120;
				case 100:
					return 4128;
				case 101:
					return 4136;
				case 102:
					return 4144;
				case 103:
					return 4152;
				case 104:
					return 4160;
				case 105:
					return 4168;
				case 106:
					return 4176;
				case 107:
					return 4184;
				case 108:
					return 4192;
				case 109:
					return 4200;
				case 110:
					return 4208;
				case 111:
					return 4216;
				case 112:
					return 4224;
				case 113:
					return 4232;
				case 114:
					return 4240;
				case 115:
					return 4248;
				case 116:
					return 4256;
				case 117:
					return 4264;
				case 118:
					return 4272;
				case 119:
					return 4280;
				case 120:
					return 4288;
				case 121:
					return 4296;
				case 122:
					return 4304;
				case 123:
					return 4312;
				case 124:
					return 4320;
				case 125:
					return 4328;
				case 126:
					return 4336;
				case 127:
					return 4344;
				case 128:
					return 4352;
				case 129:
					return 4360;
				case 130:
					return 4368;
				case 131:
					return 4376;
				case 132:
					return 4384;
				case 133:
					return 4392;
				case 134:
					return 4400;
				case 135:
					return 4408;
				case 136:
					return 4416;
				case 137:
					return 4424;
				case 138:
					return 4432;
				case 139:
					return 4440;
				case 140:
					return 4448;
				case 141:
					return 4456;
				case 142:
					return 4464;
				case 143:
					return 4472;
				case 144:
					return 4480;
				case 145:
					return 4488;
				case 146:
					return 4496;
				case 147:
					return 4504;
				case 148:
					return 4512;
				case 149:
					return 4520;
				case 150:
					return 4528;
				case 151:
					return 4536;
				case 152:
					return 4544;
				case 153:
					return 4552;
				case 154:
					return 4560;
				case 155:
					return 4568;
				case 156:
					return 4576;
				case 157:
					return 4584;
				case 158:
					return 5477;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				case 160:
					return 5933;
				case 161:
					return 5940;
				case 162:
					return 5947;
				case 163:
					return 5954;
				case 164:
					return 5961;
				case 165:
					return 5968;
				case 166:
					return 5975;
				case 167:
					return 5982;
				case 168:
					return 5989;
				case 169:
					return 5996;
				case 170:
					return 6003;
				case 171:
					return 6010;
				case 172:
					return 6017;
				case 173:
					return 6024;
				case 174:
					return 6031;
				case 175:
					return 6038;
				case 176:
					return 6045;
				case 177:
					return 6052;
				case 178:
					return 6059;
				case 179:
					return 6066;
				case 180:
					return 6073;
				case 181:
					return 6080;
				case 182:
					return 6087;
				case 183:
					return 6094;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				case 185:
					return 6178;
				case 186:
					return 6185;
				case 187:
					return 6192;
				case 188:
					return 6199;
				case 189:
					return 6206;
				case 190:
					return 6213;
				case 191:
					return 6220;
				case 192:
					return 6227;
				case 193:
					return 6234;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				case 195:
					return 6575;
				case 196:
					return 6582;
				case 197:
					return 6589;
				case 198:
					return 6596;
				case 199:
					return 6603;
				case 200:
					return 6610;
				case 201:
					return 6617;
				case 202:
					return 6624;
				case 203:
					return 6631;
				case 204:
					return 6638;
				case 205:
					return 6645;
				case 206:
					return 6652;
				case 207:
					return 6659;
				case 208:
					return 6666;
				case 209:
					return 6673;
				case 210:
					return 6680;
				case 211:
					return 6687;
				case 212:
					return 6694;
				case 213:
					return 6701;
				case 214:
					return 6708;
				case 215:
					return 6715;
				case 216:
					return 6722;
				case 217:
					return 6729;
				case 218:
					return 6736;
				case 219:
					return 6743;
				case 220:
					return 6750;
				case 221:
					return 6757;
				case 222:
					return 6764;
				case 223:
					return 6771;
				case 224:
					return 6778;
				case 225:
					return 6785;
				case 226:
					return 6792;
				case 227:
					return 6799;
				case 228:
					return 6806;
				case 229:
					return 6813;
				case 230:
					return 6820;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				case 232:
					return 7297;
				case 233:
					return 7304;
				case 234:
					return 7311;
				case 235:
					return 7318;
				case 236:
					return 7325;
				case 237:
					return 7332;
				case 238:
					return 7339;
				case 239:
					return 7346;
				case 240:
					return 7353;
				case 241:
					return 7360;
				case 242:
					return 7367;
				case 243:
					return 7374;
				case 244:
					return 7381;
				case 245:
					return 7388;
				case 246:
					return 7395;
				case 247:
					return 7402;
				case 248:
					return 7409;
				case 249:
					return 7416;
				case 250:
					return 7423;
				case 251:
					return 7430;
				case 252:
					return 7437;
				case 253:
					return 7444;
				case 254:
					return 7451;
				case 255:
					return 7458;
				case 256:
					return 7465;
				case 257:
					return 7472;
				case 258:
					return 7479;
				case 259:
					return 7486;
				case 260:
					return 7493;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				case 262:
					return 8020;
				case 263:
					return 8027;
				case 264:
					return 8034;
				case 265:
					return 8041;
				case 266:
					return 8048;
				case 267:
					return 8055;
				case 268:
					return 8062;
				case 269:
					return 8069;
				case 270:
					return 8076;
				case 271:
					return 8537;
				case 272:
					return 8544;
				case 273:
					return 8551;
				case 274:
					return 8558;
				case 275:
					return 8565;
				case 276:
					return 8572;
				case 277:
					return 8579;
				case 278:
					return 8586;
				case 279:
					return 8593;
				case 280:
					return 8600;
				case 281:
					return 8982;
				case 282:
					return 8989;
				case 283:
					return 8996;
				case 284:
					return 9003;
				case 285:
					return 9010;
				case 286:
					return 9017;
				case 287:
					return 9024;
				case 288:
					return 9031;
				case 289:
					return 9038;
				case 290:
					return 9045;
				case 291:
					return 9052;
				case 292:
					return 9058;
				case 293:
					return 9064;
				case 294:
					return 9070;
				case 295:
					return 9077;
				case 296:
					return 9084;
				case 297:
					return 9091;
				case 298:
					return 9098;
				case 299:
					return 9105;
				case 300:
					return 9112;
				case 301:
					return 9119;
				case 302:
					return 9126;
				case 303:
					return 9133;
				case 304:
					return 9140;
				case 305:
					return 9146;
				case 306:
					return 9152;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				case 1:
					return 1638;
				case 2:
					return 1645;
				case 3:
					return 1652;
				case 4:
					return 1659;
				case 5:
					return 1666;
				case 6:
					return 1673;
				case 7:
					return 1680;
				case 8:
					return 1687;
				case 9:
					return 1694;
				case 10:
					return 1701;
				case 11:
					return 1707;
				case 12:
					return 1713;
				case 13:
					return 1719;
				case 14:
					return 1797;
				case 15:
					return 1804;
				case 16:
					return 1811;
				case 17:
					return 1818;
				case 18:
					return 1825;
				case 19:
					return 1832;
				case 20:
					return 1839;
				case 21:
					return 1846;
				case 22:
					return 1853;
				case 23:
					return 1860;
				case 24:
					return 1866;
				case 25:
					return 1872;
				case 26:
					return 2167;
				case 27:
					return 2174;
				case 28:
					return 2181;
				case 29:
					return 2188;
				case 30:
					return 2195;
				case 31:
					return 2202;
				case 32:
					return 2209;
				case 33:
					return 2216;
				case 34:
					return 2223;
				case 35:
					return 2230;
				case 36:
					return 2237;
				case 37:
					return 2243;
				case 38:
					return 2249;
				case 39:
					return 2830;
				case 40:
					return 2837;
				case 41:
					return 2844;
				case 42:
					return 2851;
				case 43:
					return 2858;
				case 44:
					return 2865;
				case 45:
					return 2872;
				case 46:
					return 2879;
				case 47:
					return 2886;
				case 48:
					return 2893;
				case 49:
					return 2900;
				case 50:
					return 2906;
				case 51:
					return 2912;
				case 52:
					return 2954;
				case 53:
					return 2961;
				case 54:
					return 2968;
				case 55:
					return 2975;
				case 56:
					return 2982;
				case 57:
					return 2989;
				case 58:
					return 2996;
				case 59:
					return 3003;
				case 60:
					return 3010;
				case 61:
					return 3017;
				case 62:
					return 3024;
				case 63:
					return 3030;
				case 64:
					return 3036;
				case 65:
					return 3237;
				case 66:
					return 3245;
				case 67:
					return 3253;
				case 68:
					return 3261;
				case 69:
					return 3269;
				case 70:
					return 3277;
				case 71:
					return 3285;
				case 72:
					return 3293;
				case 73:
					return 3301;
				case 74:
					return 3309;
				case 75:
					return 3317;
				case 76:
					return 3325;
				case 77:
					return 3333;
				case 78:
					return 3341;
				case 79:
					return 3349;
				case 80:
					return 3357;
				case 81:
					return 3365;
				case 82:
					return 3373;
				case 83:
					return 3381;
				case 84:
					return 3389;
				case 85:
					return 3397;
				case 86:
					return 3404;
				case 87:
					return 3411;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				case 89:
					return 4041;
				case 90:
					return 4049;
				case 91:
					return 4057;
				case 92:
					return 4065;
				case 93:
					return 4073;
				case 94:
					return 4081;
				case 95:
					return 4089;
				case 96:
					return 4097;
				case 97:
					return 4105;
				case 98:
					return 4113;
				case 99:
					return 4121;
				case 100:
					return 4129;
				case 101:
					return 4137;
				case 102:
					return 4145;
				case 103:
					return 4153;
				case 104:
					return 4161;
				case 105:
					return 4169;
				case 106:
					return 4177;
				case 107:
					return 4185;
				case 108:
					return 4193;
				case 109:
					return 4201;
				case 110:
					return 4209;
				case 111:
					return 4217;
				case 112:
					return 4225;
				case 113:
					return 4233;
				case 114:
					return 4241;
				case 115:
					return 4249;
				case 116:
					return 4257;
				case 117:
					return 4265;
				case 118:
					return 4273;
				case 119:
					return 4281;
				case 120:
					return 4289;
				case 121:
					return 4297;
				case 122:
					return 4305;
				case 123:
					return 4313;
				case 124:
					return 4321;
				case 125:
					return 4329;
				case 126:
					return 4337;
				case 127:
					return 4345;
				case 128:
					return 4353;
				case 129:
					return 4361;
				case 130:
					return 4369;
				case 131:
					return 4377;
				case 132:
					return 4385;
				case 133:
					return 4393;
				case 134:
					return 4401;
				case 135:
					return 4409;
				case 136:
					return 4417;
				case 137:
					return 4425;
				case 138:
					return 4433;
				case 139:
					return 4441;
				case 140:
					return 4449;
				case 141:
					return 4457;
				case 142:
					return 4465;
				case 143:
					return 4473;
				case 144:
					return 4481;
				case 145:
					return 4489;
				case 146:
					return 4497;
				case 147:
					return 4505;
				case 148:
					return 4513;
				case 149:
					return 4521;
				case 150:
					return 4529;
				case 151:
					return 4537;
				case 152:
					return 4545;
				case 153:
					return 4553;
				case 154:
					return 4561;
				case 155:
					return 4569;
				case 156:
					return 4577;
				case 157:
					return 4585;
				case 158:
					return 5478;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				case 160:
					return 5934;
				case 161:
					return 5941;
				case 162:
					return 5948;
				case 163:
					return 5955;
				case 164:
					return 5962;
				case 165:
					return 5969;
				case 166:
					return 5976;
				case 167:
					return 5983;
				case 168:
					return 5990;
				case 169:
					return 5997;
				case 170:
					return 6004;
				case 171:
					return 6011;
				case 172:
					return 6018;
				case 173:
					return 6025;
				case 174:
					return 6032;
				case 175:
					return 6039;
				case 176:
					return 6046;
				case 177:
					return 6053;
				case 178:
					return 6060;
				case 179:
					return 6067;
				case 180:
					return 6074;
				case 181:
					return 6081;
				case 182:
					return 6088;
				case 183:
					return 6095;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				case 185:
					return 6179;
				case 186:
					return 6186;
				case 187:
					return 6193;
				case 188:
					return 6200;
				case 189:
					return 6207;
				case 190:
					return 6214;
				case 191:
					return 6221;
				case 192:
					return 6228;
				case 193:
					return 6235;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				case 195:
					return 6576;
				case 196:
					return 6583;
				case 197:
					return 6590;
				case 198:
					return 6597;
				case 199:
					return 6604;
				case 200:
					return 6611;
				case 201:
					return 6618;
				case 202:
					return 6625;
				case 203:
					return 6632;
				case 204:
					return 6639;
				case 205:
					return 6646;
				case 206:
					return 6653;
				case 207:
					return 6660;
				case 208:
					return 6667;
				case 209:
					return 6674;
				case 210:
					return 6681;
				case 211:
					return 6688;
				case 212:
					return 6695;
				case 213:
					return 6702;
				case 214:
					return 6709;
				case 215:
					return 6716;
				case 216:
					return 6723;
				case 217:
					return 6730;
				case 218:
					return 6737;
				case 219:
					return 6744;
				case 220:
					return 6751;
				case 221:
					return 6758;
				case 222:
					return 6765;
				case 223:
					return 6772;
				case 224:
					return 6779;
				case 225:
					return 6786;
				case 226:
					return 6793;
				case 227:
					return 6800;
				case 228:
					return 6807;
				case 229:
					return 6814;
				case 230:
					return 6821;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				case 232:
					return 7298;
				case 233:
					return 7305;
				case 234:
					return 7312;
				case 235:
					return 7319;
				case 236:
					return 7326;
				case 237:
					return 7333;
				case 238:
					return 7340;
				case 239:
					return 7347;
				case 240:
					return 7354;
				case 241:
					return 7361;
				case 242:
					return 7368;
				case 243:
					return 7375;
				case 244:
					return 7382;
				case 245:
					return 7389;
				case 246:
					return 7396;
				case 247:
					return 7403;
				case 248:
					return 7410;
				case 249:
					return 7417;
				case 250:
					return 7424;
				case 251:
					return 7431;
				case 252:
					return 7438;
				case 253:
					return 7445;
				case 254:
					return 7452;
				case 255:
					return 7459;
				case 256:
					return 7466;
				case 257:
					return 7473;
				case 258:
					return 7480;
				case 259:
					return 7487;
				case 260:
					return 7494;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				case 262:
					return 8021;
				case 263:
					return 8028;
				case 264:
					return 8035;
				case 265:
					return 8042;
				case 266:
					return 8049;
				case 267:
					return 8056;
				case 268:
					return 8063;
				case 269:
					return 8070;
				case 270:
					return 8077;
				case 271:
					return 8538;
				case 272:
					return 8545;
				case 273:
					return 8552;
				case 274:
					return 8559;
				case 275:
					return 8566;
				case 276:
					return 8573;
				case 277:
					return 8580;
				case 278:
					return 8587;
				case 279:
					return 8594;
				case 280:
					return 8601;
				case 281:
					return 8983;
				case 282:
					return 8990;
				case 283:
					return 8997;
				case 284:
					return 9004;
				case 285:
					return 9011;
				case 286:
					return 9018;
				case 287:
					return 9025;
				case 288:
					return 9032;
				case 289:
					return 9039;
				case 290:
					return 9046;
				case 291:
					return 9053;
				case 292:
					return 9059;
				case 293:
					return 9065;
				case 294:
					return 9071;
				case 295:
					return 9078;
				case 296:
					return 9085;
				case 297:
					return 9092;
				case 298:
					return 9099;
				case 299:
					return 9106;
				case 300:
					return 9113;
				case 301:
					return 9120;
				case 302:
					return 9127;
				case 303:
					return 9134;
				case 304:
					return 9141;
				case 305:
					return 9147;
				case 306:
					return 9153;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				case 1:
					return 1639;
				case 2:
					return 1646;
				case 3:
					return 1653;
				case 4:
					return 1660;
				case 5:
					return 1667;
				case 6:
					return 1674;
				case 7:
					return 1681;
				case 8:
					return 1688;
				case 9:
					return 1695;
				case 10:
					return 1702;
				case 11:
					return 1708;
				case 12:
					return 1714;
				case 13:
					return 1720;
				case 14:
					return 1798;
				case 15:
					return 1805;
				case 16:
					return 1812;
				case 17:
					return 1819;
				case 18:
					return 1826;
				case 19:
					return 1833;
				case 20:
					return 1840;
				case 21:
					return 1847;
				case 22:
					return 1854;
				case 23:
					return 1861;
				case 24:
					return 1867;
				case 25:
					return 1873;
				case 26:
					return 2168;
				case 27:
					return 2175;
				case 28:
					return 2182;
				case 29:
					return 2189;
				case 30:
					return 2196;
				case 31:
					return 2203;
				case 32:
					return 2210;
				case 33:
					return 2217;
				case 34:
					return 2224;
				case 35:
					return 2231;
				case 36:
					return 2238;
				case 37:
					return 2244;
				case 38:
					return 2250;
				case 39:
					return 2831;
				case 40:
					return 2838;
				case 41:
					return 2845;
				case 42:
					return 2852;
				case 43:
					return 2859;
				case 44:
					return 2866;
				case 45:
					return 2873;
				case 46:
					return 2880;
				case 47:
					return 2887;
				case 48:
					return 2894;
				case 49:
					return 2901;
				case 50:
					return 2907;
				case 51:
					return 2913;
				case 52:
					return 2955;
				case 53:
					return 2962;
				case 54:
					return 2969;
				case 55:
					return 2976;
				case 56:
					return 2983;
				case 57:
					return 2990;
				case 58:
					return 2997;
				case 59:
					return 3004;
				case 60:
					return 3011;
				case 61:
					return 3018;
				case 62:
					return 3025;
				case 63:
					return 3031;
				case 64:
					return 3037;
				case 65:
					return 3238;
				case 66:
					return 3246;
				case 67:
					return 3254;
				case 68:
					return 3262;
				case 69:
					return 3270;
				case 70:
					return 3278;
				case 71:
					return 3286;
				case 72:
					return 3294;
				case 73:
					return 3302;
				case 74:
					return 3310;
				case 75:
					return 3318;
				case 76:
					return 3326;
				case 77:
					return 3334;
				case 78:
					return 3342;
				case 79:
					return 3350;
				case 80:
					return 3358;
				case 81:
					return 3366;
				case 82:
					return 3374;
				case 83:
					return 3382;
				case 84:
					return 3390;
				case 85:
					return 3398;
				case 86:
					return 3405;
				case 87:
					return 3412;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				case 89:
					return 4042;
				case 90:
					return 4050;
				case 91:
					return 4058;
				case 92:
					return 4066;
				case 93:
					return 4074;
				case 94:
					return 4082;
				case 95:
					return 4090;
				case 96:
					return 4098;
				case 97:
					return 4106;
				case 98:
					return 4114;
				case 99:
					return 4122;
				case 100:
					return 4130;
				case 101:
					return 4138;
				case 102:
					return 4146;
				case 103:
					return 4154;
				case 104:
					return 4162;
				case 105:
					return 4170;
				case 106:
					return 4178;
				case 107:
					return 4186;
				case 108:
					return 4194;
				case 109:
					return 4202;
				case 110:
					return 4210;
				case 111:
					return 4218;
				case 112:
					return 4226;
				case 113:
					return 4234;
				case 114:
					return 4242;
				case 115:
					return 4250;
				case 116:
					return 4258;
				case 117:
					return 4266;
				case 118:
					return 4274;
				case 119:
					return 4282;
				case 120:
					return 4290;
				case 121:
					return 4298;
				case 122:
					return 4306;
				case 123:
					return 4314;
				case 124:
					return 4322;
				case 125:
					return 4330;
				case 126:
					return 4338;
				case 127:
					return 4346;
				case 128:
					return 4354;
				case 129:
					return 4362;
				case 130:
					return 4370;
				case 131:
					return 4378;
				case 132:
					return 4386;
				case 133:
					return 4394;
				case 134:
					return 4402;
				case 135:
					return 4410;
				case 136:
					return 4418;
				case 137:
					return 4426;
				case 138:
					return 4434;
				case 139:
					return 4442;
				case 140:
					return 4450;
				case 141:
					return 4458;
				case 142:
					return 4466;
				case 143:
					return 4474;
				case 144:
					return 4482;
				case 145:
					return 4490;
				case 146:
					return 4498;
				case 147:
					return 4506;
				case 148:
					return 4514;
				case 149:
					return 4522;
				case 150:
					return 4530;
				case 151:
					return 4538;
				case 152:
					return 4546;
				case 153:
					return 4554;
				case 154:
					return 4562;
				case 155:
					return 4570;
				case 156:
					return 4578;
				case 157:
					return 4586;
				case 158:
					return 5479;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				case 160:
					return 5935;
				case 161:
					return 5942;
				case 162:
					return 5949;
				case 163:
					return 5956;
				case 164:
					return 5963;
				case 165:
					return 5970;
				case 166:
					return 5977;
				case 167:
					return 5984;
				case 168:
					return 5991;
				case 169:
					return 5998;
				case 170:
					return 6005;
				case 171:
					return 6012;
				case 172:
					return 6019;
				case 173:
					return 6026;
				case 174:
					return 6033;
				case 175:
					return 6040;
				case 176:
					return 6047;
				case 177:
					return 6054;
				case 178:
					return 6061;
				case 179:
					return 6068;
				case 180:
					return 6075;
				case 181:
					return 6082;
				case 182:
					return 6089;
				case 183:
					return 6096;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				case 185:
					return 6180;
				case 186:
					return 6187;
				case 187:
					return 6194;
				case 188:
					return 6201;
				case 189:
					return 6208;
				case 190:
					return 6215;
				case 191:
					return 6222;
				case 192:
					return 6229;
				case 193:
					return 6236;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				case 195:
					return 6577;
				case 196:
					return 6584;
				case 197:
					return 6591;
				case 198:
					return 6598;
				case 199:
					return 6605;
				case 200:
					return 6612;
				case 201:
					return 6619;
				case 202:
					return 6626;
				case 203:
					return 6633;
				case 204:
					return 6640;
				case 205:
					return 6647;
				case 206:
					return 6654;
				case 207:
					return 6661;
				case 208:
					return 6668;
				case 209:
					return 6675;
				case 210:
					return 6682;
				case 211:
					return 6689;
				case 212:
					return 6696;
				case 213:
					return 6703;
				case 214:
					return 6710;
				case 215:
					return 6717;
				case 216:
					return 6724;
				case 217:
					return 6731;
				case 218:
					return 6738;
				case 219:
					return 6745;
				case 220:
					return 6752;
				case 221:
					return 6759;
				case 222:
					return 6766;
				case 223:
					return 6773;
				case 224:
					return 6780;
				case 225:
					return 6787;
				case 226:
					return 6794;
				case 227:
					return 6801;
				case 228:
					return 6808;
				case 229:
					return 6815;
				case 230:
					return 6822;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				case 232:
					return 7299;
				case 233:
					return 7306;
				case 234:
					return 7313;
				case 235:
					return 7320;
				case 236:
					return 7327;
				case 237:
					return 7334;
				case 238:
					return 7341;
				case 239:
					return 7348;
				case 240:
					return 7355;
				case 241:
					return 7362;
				case 242:
					return 7369;
				case 243:
					return 7376;
				case 244:
					return 7383;
				case 245:
					return 7390;
				case 246:
					return 7397;
				case 247:
					return 7404;
				case 248:
					return 7411;
				case 249:
					return 7418;
				case 250:
					return 7425;
				case 251:
					return 7432;
				case 252:
					return 7439;
				case 253:
					return 7446;
				case 254:
					return 7453;
				case 255:
					return 7460;
				case 256:
					return 7467;
				case 257:
					return 7474;
				case 258:
					return 7481;
				case 259:
					return 7488;
				case 260:
					return 7495;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				case 262:
					return 8022;
				case 263:
					return 8029;
				case 264:
					return 8036;
				case 265:
					return 8043;
				case 266:
					return 8050;
				case 267:
					return 8057;
				case 268:
					return 8064;
				case 269:
					return 8071;
				case 270:
					return 8078;
				case 271:
					return 8539;
				case 272:
					return 8546;
				case 273:
					return 8553;
				case 274:
					return 8560;
				case 275:
					return 8567;
				case 276:
					return 8574;
				case 277:
					return 8581;
				case 278:
					return 8588;
				case 279:
					return 8595;
				case 280:
					return 8602;
				case 281:
					return 8984;
				case 282:
					return 8991;
				case 283:
					return 8998;
				case 284:
					return 9005;
				case 285:
					return 9012;
				case 286:
					return 9019;
				case 287:
					return 9026;
				case 288:
					return 9033;
				case 289:
					return 9040;
				case 290:
					return 9047;
				case 291:
					return 9054;
				case 292:
					return 9060;
				case 293:
					return 9066;
				case 294:
					return 9072;
				case 295:
					return 9079;
				case 296:
					return 9086;
				case 297:
					return 9093;
				case 298:
					return 9100;
				case 299:
					return 9107;
				case 300:
					return 9114;
				case 301:
					return 9121;
				case 302:
					return 9128;
				case 303:
					return 9135;
				case 304:
					return 9142;
				case 305:
					return 9148;
				case 306:
					return 9154;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				case 1:
					return 1640;
				case 2:
					return 1647;
				case 3:
					return 1654;
				case 4:
					return 1661;
				case 5:
					return 1668;
				case 6:
					return 1675;
				case 7:
					return 1682;
				case 8:
					return 1689;
				case 9:
					return 1696;
				case 10:
					return 1703;
				case 11:
					return 1709;
				case 12:
					return 1715;
				case 13:
					return 1721;
				case 14:
					return 1799;
				case 15:
					return 1806;
				case 16:
					return 1813;
				case 17:
					return 1820;
				case 18:
					return 1827;
				case 19:
					return 1834;
				case 20:
					return 1841;
				case 21:
					return 1848;
				case 22:
					return 1855;
				case 23:
					return 1862;
				case 24:
					return 1868;
				case 25:
					return 1874;
				case 26:
					return 2169;
				case 27:
					return 2176;
				case 28:
					return 2183;
				case 29:
					return 2190;
				case 30:
					return 2197;
				case 31:
					return 2204;
				case 32:
					return 2211;
				case 33:
					return 2218;
				case 34:
					return 2225;
				case 35:
					return 2232;
				case 36:
					return 2239;
				case 37:
					return 2245;
				case 38:
					return 2251;
				case 39:
					return 2832;
				case 40:
					return 2839;
				case 41:
					return 2846;
				case 42:
					return 2853;
				case 43:
					return 2860;
				case 44:
					return 2867;
				case 45:
					return 2874;
				case 46:
					return 2881;
				case 47:
					return 2888;
				case 48:
					return 2895;
				case 49:
					return 2902;
				case 50:
					return 2908;
				case 51:
					return 2914;
				case 52:
					return 2956;
				case 53:
					return 2963;
				case 54:
					return 2970;
				case 55:
					return 2977;
				case 56:
					return 2984;
				case 57:
					return 2991;
				case 58:
					return 2998;
				case 59:
					return 3005;
				case 60:
					return 3012;
				case 61:
					return 3019;
				case 62:
					return 3026;
				case 63:
					return 3032;
				case 64:
					return 3038;
				case 65:
					return 3239;
				case 66:
					return 3247;
				case 67:
					return 3255;
				case 68:
					return 3263;
				case 69:
					return 3271;
				case 70:
					return 3279;
				case 71:
					return 3287;
				case 72:
					return 3295;
				case 73:
					return 3303;
				case 74:
					return 3311;
				case 75:
					return 3319;
				case 76:
					return 3327;
				case 77:
					return 3335;
				case 78:
					return 3343;
				case 79:
					return 3351;
				case 80:
					return 3359;
				case 81:
					return 3367;
				case 82:
					return 3375;
				case 83:
					return 3383;
				case 84:
					return 3391;
				case 85:
					return 3399;
				case 86:
					return 3406;
				case 87:
					return 3413;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				case 89:
					return 4043;
				case 90:
					return 4051;
				case 91:
					return 4059;
				case 92:
					return 4067;
				case 93:
					return 4075;
				case 94:
					return 4083;
				case 95:
					return 4091;
				case 96:
					return 4099;
				case 97:
					return 4107;
				case 98:
					return 4115;
				case 99:
					return 4123;
				case 100:
					return 4131;
				case 101:
					return 4139;
				case 102:
					return 4147;
				case 103:
					return 4155;
				case 104:
					return 4163;
				case 105:
					return 4171;
				case 106:
					return 4179;
				case 107:
					return 4187;
				case 108:
					return 4195;
				case 109:
					return 4203;
				case 110:
					return 4211;
				case 111:
					return 4219;
				case 112:
					return 4227;
				case 113:
					return 4235;
				case 114:
					return 4243;
				case 115:
					return 4251;
				case 116:
					return 4259;
				case 117:
					return 4267;
				case 118:
					return 4275;
				case 119:
					return 4283;
				case 120:
					return 4291;
				case 121:
					return 4299;
				case 122:
					return 4307;
				case 123:
					return 4315;
				case 124:
					return 4323;
				case 125:
					return 4331;
				case 126:
					return 4339;
				case 127:
					return 4347;
				case 128:
					return 4355;
				case 129:
					return 4363;
				case 130:
					return 4371;
				case 131:
					return 4379;
				case 132:
					return 4387;
				case 133:
					return 4395;
				case 134:
					return 4403;
				case 135:
					return 4411;
				case 136:
					return 4419;
				case 137:
					return 4427;
				case 138:
					return 4435;
				case 139:
					return 4443;
				case 140:
					return 4451;
				case 141:
					return 4459;
				case 142:
					return 4467;
				case 143:
					return 4475;
				case 144:
					return 4483;
				case 145:
					return 4491;
				case 146:
					return 4499;
				case 147:
					return 4507;
				case 148:
					return 4515;
				case 149:
					return 4523;
				case 150:
					return 4531;
				case 151:
					return 4539;
				case 152:
					return 4547;
				case 153:
					return 4555;
				case 154:
					return 4563;
				case 155:
					return 4571;
				case 156:
					return 4579;
				case 157:
					return 4587;
				case 158:
					return 5480;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				case 160:
					return 5936;
				case 161:
					return 5943;
				case 162:
					return 5950;
				case 163:
					return 5957;
				case 164:
					return 5964;
				case 165:
					return 5971;
				case 166:
					return 5978;
				case 167:
					return 5985;
				case 168:
					return 5992;
				case 169:
					return 5999;
				case 170:
					return 6006;
				case 171:
					return 6013;
				case 172:
					return 6020;
				case 173:
					return 6027;
				case 174:
					return 6034;
				case 175:
					return 6041;
				case 176:
					return 6048;
				case 177:
					return 6055;
				case 178:
					return 6062;
				case 179:
					return 6069;
				case 180:
					return 6076;
				case 181:
					return 6083;
				case 182:
					return 6090;
				case 183:
					return 6097;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				case 185:
					return 6181;
				case 186:
					return 6188;
				case 187:
					return 6195;
				case 188:
					return 6202;
				case 189:
					return 6209;
				case 190:
					return 6216;
				case 191:
					return 6223;
				case 192:
					return 6230;
				case 193:
					return 6237;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				case 195:
					return 6578;
				case 196:
					return 6585;
				case 197:
					return 6592;
				case 198:
					return 6599;
				case 199:
					return 6606;
				case 200:
					return 6613;
				case 201:
					return 6620;
				case 202:
					return 6627;
				case 203:
					return 6634;
				case 204:
					return 6641;
				case 205:
					return 6648;
				case 206:
					return 6655;
				case 207:
					return 6662;
				case 208:
					return 6669;
				case 209:
					return 6676;
				case 210:
					return 6683;
				case 211:
					return 6690;
				case 212:
					return 6697;
				case 213:
					return 6704;
				case 214:
					return 6711;
				case 215:
					return 6718;
				case 216:
					return 6725;
				case 217:
					return 6732;
				case 218:
					return 6739;
				case 219:
					return 6746;
				case 220:
					return 6753;
				case 221:
					return 6760;
				case 222:
					return 6767;
				case 223:
					return 6774;
				case 224:
					return 6781;
				case 225:
					return 6788;
				case 226:
					return 6795;
				case 227:
					return 6802;
				case 228:
					return 6809;
				case 229:
					return 6816;
				case 230:
					return 6823;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				case 232:
					return 7300;
				case 233:
					return 7307;
				case 234:
					return 7314;
				case 235:
					return 7321;
				case 236:
					return 7328;
				case 237:
					return 7335;
				case 238:
					return 7342;
				case 239:
					return 7349;
				case 240:
					return 7356;
				case 241:
					return 7363;
				case 242:
					return 7370;
				case 243:
					return 7377;
				case 244:
					return 7384;
				case 245:
					return 7391;
				case 246:
					return 7398;
				case 247:
					return 7405;
				case 248:
					return 7412;
				case 249:
					return 7419;
				case 250:
					return 7426;
				case 251:
					return 7433;
				case 252:
					return 7440;
				case 253:
					return 7447;
				case 254:
					return 7454;
				case 255:
					return 7461;
				case 256:
					return 7468;
				case 257:
					return 7475;
				case 258:
					return 7482;
				case 259:
					return 7489;
				case 260:
					return 7496;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				case 262:
					return 8023;
				case 263:
					return 8030;
				case 264:
					return 8037;
				case 265:
					return 8044;
				case 266:
					return 8051;
				case 267:
					return 8058;
				case 268:
					return 8065;
				case 269:
					return 8072;
				case 270:
					return 8079;
				case 271:
					return 8540;
				case 272:
					return 8547;
				case 273:
					return 8554;
				case 274:
					return 8561;
				case 275:
					return 8568;
				case 276:
					return 8575;
				case 277:
					return 8582;
				case 278:
					return 8589;
				case 279:
					return 8596;
				case 280:
					return 8603;
				case 281:
					return 8985;
				case 282:
					return 8992;
				case 283:
					return 8999;
				case 284:
					return 9006;
				case 285:
					return 9013;
				case 286:
					return 9020;
				case 287:
					return 9027;
				case 288:
					return 9034;
				case 289:
					return 9041;
				case 290:
					return 9048;
				case 291:
					return 9055;
				case 292:
					return 9061;
				case 293:
					return 9067;
				case 294:
					return 9073;
				case 295:
					return 9080;
				case 296:
					return 9087;
				case 297:
					return 9094;
				case 298:
					return 9101;
				case 299:
					return 9108;
				case 300:
					return 9115;
				case 301:
					return 9122;
				case 302:
					return 9129;
				case 303:
					return 9136;
				case 304:
					return 9143;
				case 305:
					return 9149;
				case 306:
					return 9155;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				case 1:
					return 1642;
				case 2:
					return 1649;
				case 3:
					return 1656;
				case 4:
					return 1663;
				case 5:
					return 1670;
				case 6:
					return 1677;
				case 7:
					return 1684;
				case 8:
					return 1691;
				case 9:
					return 1698;
				case 13:
					return 1723;
				case 14:
					return 1801;
				case 15:
					return 1808;
				case 16:
					return 1815;
				case 17:
					return 1822;
				case 18:
					return 1829;
				case 19:
					return 1836;
				case 20:
					return 1843;
				case 21:
					return 1850;
				case 22:
					return 1857;
				case 26:
					return 2171;
				case 27:
					return 2178;
				case 28:
					return 2185;
				case 29:
					return 2192;
				case 30:
					return 2199;
				case 31:
					return 2206;
				case 32:
					return 2213;
				case 33:
					return 2220;
				case 34:
					return 2227;
				case 35:
					return 2234;
				case 39:
					return 2834;
				case 40:
					return 2841;
				case 41:
					return 2848;
				case 42:
					return 2855;
				case 43:
					return 2862;
				case 44:
					return 2869;
				case 45:
					return 2876;
				case 46:
					return 2883;
				case 47:
					return 2890;
				case 48:
					return 2897;
				case 52:
					return 2958;
				case 53:
					return 2965;
				case 54:
					return 2972;
				case 55:
					return 2979;
				case 56:
					return 2986;
				case 57:
					return 2993;
				case 58:
					return 3000;
				case 59:
					return 3007;
				case 60:
					return 3014;
				case 61:
					return 3021;
				case 65:
					return 3242;
				case 66:
					return 3250;
				case 67:
					return 3258;
				case 68:
					return 3266;
				case 69:
					return 3274;
				case 70:
					return 3282;
				case 71:
					return 3290;
				case 72:
					return 3298;
				case 73:
					return 3306;
				case 74:
					return 3314;
				case 75:
					return 3322;
				case 76:
					return 3330;
				case 77:
					return 3338;
				case 78:
					return 3346;
				case 79:
					return 3354;
				case 80:
					return 3362;
				case 81:
					return 3370;
				case 82:
					return 3378;
				case 83:
					return 3386;
				case 84:
					return 3394;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				case 89:
					return 4046;
				case 90:
					return 4054;
				case 91:
					return 4062;
				case 92:
					return 4070;
				case 93:
					return 4078;
				case 94:
					return 4086;
				case 95:
					return 4094;
				case 96:
					return 4102;
				case 97:
					return 4110;
				case 98:
					return 4118;
				case 99:
					return 4126;
				case 100:
					return 4134;
				case 101:
					return 4142;
				case 102:
					return 4150;
				case 103:
					return 4158;
				case 104:
					return 4166;
				case 105:
					return 4174;
				case 106:
					return 4182;
				case 107:
					return 4190;
				case 108:
					return 4198;
				case 109:
					return 4206;
				case 110:
					return 4214;
				case 111:
					return 4222;
				case 112:
					return 4230;
				case 113:
					return 4238;
				case 114:
					return 4246;
				case 115:
					return 4254;
				case 116:
					return 4262;
				case 117:
					return 4270;
				case 118:
					return 4278;
				case 119:
					return 4286;
				case 120:
					return 4294;
				case 121:
					return 4302;
				case 122:
					return 4310;
				case 123:
					return 4318;
				case 124:
					return 4326;
				case 125:
					return 4334;
				case 126:
					return 4342;
				case 127:
					return 4350;
				case 128:
					return 4358;
				case 129:
					return 4366;
				case 130:
					return 4374;
				case 131:
					return 4382;
				case 132:
					return 4390;
				case 133:
					return 4398;
				case 134:
					return 4406;
				case 135:
					return 4414;
				case 136:
					return 4422;
				case 137:
					return 4430;
				case 138:
					return 4438;
				case 139:
					return 4446;
				case 140:
					return 4454;
				case 141:
					return 4462;
				case 142:
					return 4470;
				case 143:
					return 4478;
				case 144:
					return 4486;
				case 145:
					return 4494;
				case 146:
					return 4502;
				case 147:
					return 4510;
				case 148:
					return 4518;
				case 149:
					return 4526;
				case 150:
					return 4534;
				case 151:
					return 4542;
				case 152:
					return 4550;
				case 153:
					return 4558;
				case 154:
					return 4566;
				case 155:
					return 4574;
				case 156:
					return 4582;
				case 157:
					return 4590;
				case 158:
					return 5483;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				case 160:
					return 5938;
				case 161:
					return 5945;
				case 162:
					return 5952;
				case 163:
					return 5959;
				case 164:
					return 5966;
				case 165:
					return 5973;
				case 166:
					return 5980;
				case 167:
					return 5987;
				case 168:
					return 5994;
				case 169:
					return 6001;
				case 170:
					return 6008;
				case 171:
					return 6015;
				case 172:
					return 6022;
				case 173:
					return 6029;
				case 174:
					return 6036;
				case 175:
					return 6043;
				case 176:
					return 6050;
				case 177:
					return 6057;
				case 178:
					return 6064;
				case 179:
					return 6071;
				case 180:
					return 6078;
				case 181:
					return 6085;
				case 182:
					return 6092;
				case 183:
					return 6099;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				case 185:
					return 6183;
				case 186:
					return 6190;
				case 187:
					return 6197;
				case 188:
					return 6204;
				case 189:
					return 6211;
				case 190:
					return 6218;
				case 191:
					return 6225;
				case 192:
					return 6232;
				case 193:
					return 6239;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				case 195:
					return 6580;
				case 196:
					return 6587;
				case 197:
					return 6594;
				case 198:
					return 6601;
				case 199:
					return 6608;
				case 200:
					return 6615;
				case 201:
					return 6622;
				case 202:
					return 6629;
				case 203:
					return 6636;
				case 204:
					return 6643;
				case 205:
					return 6650;
				case 206:
					return 6657;
				case 207:
					return 6664;
				case 208:
					return 6671;
				case 209:
					return 6678;
				case 210:
					return 6685;
				case 211:
					return 6692;
				case 212:
					return 6699;
				case 213:
					return 6706;
				case 214:
					return 6713;
				case 215:
					return 6720;
				case 216:
					return 6727;
				case 217:
					return 6734;
				case 218:
					return 6741;
				case 219:
					return 6748;
				case 220:
					return 6755;
				case 221:
					return 6762;
				case 222:
					return 6769;
				case 223:
					return 6776;
				case 224:
					return 6783;
				case 225:
					return 6790;
				case 226:
					return 6797;
				case 227:
					return 6804;
				case 228:
					return 6811;
				case 229:
					return 6818;
				case 230:
					return 6825;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				case 232:
					return 7302;
				case 233:
					return 7309;
				case 234:
					return 7316;
				case 235:
					return 7323;
				case 236:
					return 7330;
				case 237:
					return 7337;
				case 238:
					return 7344;
				case 239:
					return 7351;
				case 240:
					return 7358;
				case 241:
					return 7365;
				case 242:
					return 7372;
				case 243:
					return 7379 /* GXTEntry: "1100000" */;
				case 244:
					return 7386;
				case 245:
					return 7393;
				case 246:
					return 7400;
				case 247:
					return 7407;
				case 248:
					return 7414;
				case 249:
					return 7421;
				case 250:
					return 7428;
				case 251:
					return 7435;
				case 252:
					return 7442;
				case 253:
					return 7449;
				case 254:
					return 7456;
				case 255:
					return 7463;
				case 256:
					return 7470;
				case 257:
					return 7477;
				case 258:
					return 7484;
				case 259:
					return 7491;
				case 260:
					return 7498;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				case 262:
					return 8025;
				case 263:
					return 8032;
				case 264:
					return 8039;
				case 265:
					return 8046;
				case 266:
					return 8053;
				case 267:
					return 8060;
				case 268:
					return 8067;
				case 269:
					return 8074;
				case 270:
					return 8081;
				case 271:
					return 8542;
				case 272:
					return 8549;
				case 273:
					return 8556;
				case 274:
					return 8563;
				case 275:
					return 8570;
				case 276:
					return 8577;
				case 277:
					return 8584;
				case 278:
					return 8591;
				case 279:
					return 8598;
				case 280:
					return 8605;
				case 281:
					return 8987;
				case 282:
					return 8994;
				case 283:
					return 9001;
				case 284:
					return 9008;
				case 285:
					return 9015;
				case 286:
					return 9022;
				case 287:
					return 9029;
				case 288:
					return 9036;
				case 289:
					return 9043;
				case 290:
					return 9050;
				case 294:
					return 9075;
				case 295:
					return 9082;
				case 296:
					return 9089;
				case 297:
					return 9096;
				case 298:
					return 9103;
				case 299:
					return 9110;
				case 300:
					return 9117;
				case 301:
					return 9124;
				case 302:
					return 9131;
				case 303:
					return 9138;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				case 1:
					return 1641;
				case 2:
					return 1648;
				case 3:
					return 1655;
				case 4:
					return 1662;
				case 5:
					return 1669;
				case 6:
					return 1676;
				case 7:
					return 1683;
				case 8:
					return 1690;
				case 9:
					return 1697;
				case 10:
					return 1704;
				case 11:
					return 1710;
				case 12:
					return 1716;
				case 13:
					return 1722;
				case 14:
					return 1800;
				case 15:
					return 1807;
				case 16:
					return 1814;
				case 17:
					return 1821;
				case 18:
					return 1828;
				case 19:
					return 1835;
				case 20:
					return 1842;
				case 21:
					return 1849;
				case 22:
					return 1856;
				case 23:
					return 1863;
				case 24:
					return 1869;
				case 25:
					return 1875;
				case 26:
					return 2170;
				case 27:
					return 2177;
				case 28:
					return 2184;
				case 29:
					return 2191;
				case 30:
					return 2198;
				case 31:
					return 2205;
				case 32:
					return 2212;
				case 33:
					return 2219;
				case 34:
					return 2226;
				case 35:
					return 2233;
				case 36:
					return 2240;
				case 37:
					return 2246;
				case 38:
					return 2252;
				case 39:
					return 2833;
				case 40:
					return 2840;
				case 41:
					return 2847;
				case 42:
					return 2854;
				case 43:
					return 2861;
				case 44:
					return 2868;
				case 45:
					return 2875;
				case 46:
					return 2882;
				case 47:
					return 2889;
				case 48:
					return 2896;
				case 49:
					return 2903;
				case 50:
					return 2909;
				case 51:
					return 2915;
				case 52:
					return 2957;
				case 53:
					return 2964;
				case 54:
					return 2971;
				case 55:
					return 2978;
				case 56:
					return 2985;
				case 57:
					return 2992;
				case 58:
					return 2999;
				case 59:
					return 3006;
				case 60:
					return 3013;
				case 61:
					return 3020;
				case 62:
					return 3027;
				case 63:
					return 3033;
				case 64:
					return 3039;
				case 65:
					return 3240;
				case 66:
					return 3248;
				case 67:
					return 3256;
				case 68:
					return 3264;
				case 69:
					return 3272;
				case 70:
					return 3280;
				case 71:
					return 3288;
				case 72:
					return 3296;
				case 73:
					return 3304;
				case 74:
					return 3312;
				case 75:
					return 3320;
				case 76:
					return 3328;
				case 77:
					return 3337;
				case 78:
					return 3345;
				case 79:
					return 3352;
				case 80:
					return 3360;
				case 81:
					return 3368;
				case 82:
					return 3376;
				case 83:
					return 3384;
				case 84:
					return 3392;
				case 85:
					return 3400;
				case 86:
					return 3407;
				case 87:
					return 3414;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				case 89:
					return 4044;
				case 90:
					return 4052;
				case 91:
					return 4060;
				case 92:
					return 4068;
				case 93:
					return 4076;
				case 94:
					return 4084;
				case 95:
					return 4092;
				case 96:
					return 4100;
				case 97:
					return 4108;
				case 98:
					return 4116;
				case 99:
					return 4124;
				case 100:
					return 4133;
				case 101:
					return 4141;
				case 102:
					return 4148;
				case 103:
					return 4156;
				case 104:
					return 4164;
				case 105:
					return 4172;
				case 106:
					return 4180;
				case 107:
					return 4188;
				case 108:
					return 4196;
				case 109:
					return 4204;
				case 110:
					return 4212;
				case 111:
					return 4220;
				case 112:
					return 4228;
				case 113:
					return 4236;
				case 114:
					return 4244;
				case 115:
					return 4252;
				case 116:
					return 4260;
				case 117:
					return 4268;
				case 118:
					return 4276;
				case 119:
					return 4284;
				case 120:
					return 4293;
				case 121:
					return 4301;
				case 122:
					return 4308;
				case 123:
					return 4316;
				case 124:
					return 4324;
				case 125:
					return 4332;
				case 126:
					return 4340;
				case 127:
					return 4348;
				case 128:
					return 4356;
				case 129:
					return 4364;
				case 130:
					return 4372;
				case 131:
					return 4380;
				case 132:
					return 4388;
				case 133:
					return 4396;
				case 134:
					return 4404;
				case 135:
					return 4412;
				case 136:
					return 4420;
				case 137:
					return 4428;
				case 138:
					return 4436;
				case 139:
					return 4444;
				case 140:
					return 4453;
				case 141:
					return 4461;
				case 142:
					return 4468;
				case 143:
					return 4476;
				case 144:
					return 4484;
				case 145:
					return 4492;
				case 146:
					return 4500;
				case 147:
					return 4508;
				case 148:
					return 4516;
				case 149:
					return 4524;
				case 150:
					return 4532;
				case 151:
					return 4540;
				case 152:
					return 4548;
				case 153:
					return 4556;
				case 154:
					return 4564;
				case 155:
					return 4572;
				case 156:
					return 4580;
				case 157:
					return 4588;
				case 158:
					return 5481;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				case 160:
					return 5937;
				case 161:
					return 5944;
				case 162:
					return 5951;
				case 163:
					return 5958;
				case 164:
					return 5965;
				case 165:
					return 5972;
				case 166:
					return 5979;
				case 167:
					return 5986;
				case 168:
					return 5993;
				case 169:
					return 6000;
				case 170:
					return 6007;
				case 171:
					return 6014;
				case 172:
					return 6021;
				case 173:
					return 6028;
				case 174:
					return 6035;
				case 175:
					return 6042;
				case 176:
					return 6049;
				case 177:
					return 6056;
				case 178:
					return 6063;
				case 179:
					return 6070;
				case 180:
					return 6077;
				case 181:
					return 6084;
				case 182:
					return 6091;
				case 183:
					return 6098;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				case 185:
					return 6182;
				case 186:
					return 6189;
				case 187:
					return 6196;
				case 188:
					return 6203;
				case 189:
					return 6210;
				case 190:
					return 6217;
				case 191:
					return 6224;
				case 192:
					return 6231;
				case 193:
					return 6238;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				case 195:
					return 6579;
				case 196:
					return 6586;
				case 197:
					return 6593;
				case 198:
					return 6600;
				case 199:
					return 6607;
				case 200:
					return 6614;
				case 201:
					return 6621;
				case 202:
					return 6628;
				case 203:
					return 6635;
				case 204:
					return 6642;
				case 205:
					return 6649;
				case 206:
					return 6656;
				case 207:
					return 6663;
				case 208:
					return 6670;
				case 209:
					return 6677;
				case 210:
					return 6684;
				case 211:
					return 6691;
				case 212:
					return 6698;
				case 213:
					return 6705;
				case 214:
					return 6712;
				case 215:
					return 6719;
				case 216:
					return 6726;
				case 217:
					return 6733;
				case 218:
					return 6740;
				case 219:
					return 6747;
				case 220:
					return 6754;
				case 221:
					return 6761;
				case 222:
					return 6768;
				case 223:
					return 6775;
				case 224:
					return 6782;
				case 225:
					return 6789;
				case 226:
					return 6796;
				case 227:
					return 6803;
				case 228:
					return 6810;
				case 229:
					return 6817;
				case 230:
					return 6824;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				case 232:
					return 7301;
				case 233:
					return 7308;
				case 234:
					return 7315;
				case 235:
					return 7322;
				case 236:
					return 7329;
				case 237:
					return 7336;
				case 238:
					return 7343;
				case 239:
					return 7350;
				case 240:
					return 7357;
				case 241:
					return 7364;
				case 242:
					return 7371;
				case 243:
					return 7378;
				case 244:
					return 7385;
				case 245:
					return 7392;
				case 246:
					return 7399;
				case 247:
					return 7406;
				case 248:
					return 7413;
				case 249:
					return 7420;
				case 250:
					return 7427;
				case 251:
					return 7434;
				case 252:
					return 7441;
				case 253:
					return 7448;
				case 254:
					return 7455;
				case 255:
					return 7462;
				case 256:
					return 7469;
				case 257:
					return 7476;
				case 258:
					return 7483;
				case 259:
					return 7490;
				case 260:
					return 7497;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				case 262:
					return 8024;
				case 263:
					return 8031;
				case 264:
					return 8038;
				case 265:
					return 8045;
				case 266:
					return 8052;
				case 267:
					return 8059;
				case 268:
					return 8066;
				case 269:
					return 8073;
				case 270:
					return 8080;
				case 271:
					return 8541;
				case 272:
					return 8548;
				case 273:
					return 8555;
				case 274:
					return 8562;
				case 275:
					return 8569;
				case 276:
					return 8576;
				case 277:
					return 8583;
				case 278:
					return 8590;
				case 279:
					return 8597;
				case 280:
					return 8604;
				case 281:
					return 8986;
				case 282:
					return 8993;
				case 283:
					return 9000;
				case 284:
					return 9007;
				case 285:
					return 9014;
				case 286:
					return 9021;
				case 287:
					return 9028;
				case 288:
					return 9035;
				case 289:
					return 9042;
				case 290:
					return 9049;
				case 291:
					return 9056;
				case 292:
					return 9062;
				case 293:
					return 9068;
				case 294:
					return 9074;
				case 295:
					return 9081;
				case 296:
					return 9088;
				case 297:
					return 9095;
				case 298:
					return 9102;
				case 299:
					return 9109;
				case 300:
					return 9116;
				case 301:
					return 9123;
				case 302:
					return 9130;
				case 303:
					return 9137;
				case 304:
					return 9144;
				case 305:
					return 9150;
				case 306:
					return 9156;
				default:
					break;
			}
			break;
	}
	return 1629;
}

int func_1041(int iParam0)
{
	int iVar0;

	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_846(iVar0) && iParam0 < func_1042(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1042(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 108;
		case 9:
			return 128;
		case 10:
			return 148;
		case 11:
			return 156;
		case 6:
			return 75;
		case 7:
			return 88;
		case 5:
			return -1;
		case 12:
			return 179;
		case 13:
			return 186;
		case 14:
			return 192;
		case 15:
			return 202;
		case 16:
			return 212;
		case 17:
			return 222;
		case 18:
			return 236;
		case 19:
			return 246;
		case 20:
			return 256;
		case 21:
			return 268;
		case 22:
			return 278;
		case 23:
			return 294;
		case 24:
			return 307;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_789(iParam0);
		return func_1043(iVar0);
	}
	return (func_847(iParam0, -1) * iParam0 + 1);
}

int func_1043(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		case 2:
			return 224;
		case 1:
			return 227;
		default:
			break;
	}
	return -1;
}

int func_1044(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
		case joaat("BOXVILLE5"):
			return 1;
		case joaat("WASTELANDER"):
			return 2;
		case joaat("PHANTOM2"):
			return 3;
		case joaat("VOLTIC2"):
			return 4;
		case joaat("DUNE4"):
			return 5;
		case joaat("DUNE5"):
			return 5;
		case joaat("RUINER2"):
			return 6;
		case joaat("BLAZER5"):
			return 7;
	}
	return -1;
}

bool func_1045(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_845(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_517(func_1040(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TRAILERSMALL2"):
			return 0;
	}
	return -1;
}

bool func_1047(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_339 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1048()
{
	return func_517(6542, -1, 0) != 0;
}

bool func_1049()
{
	return func_517(6163, -1, 0) != 0;
}

bool func_1050()
{
	return func_517(5380, -1, 0) != 0;
}

bool func_1051()
{
	return func_517(3828, -1, 0) != 0;
}

bool func_1052()
{
	return func_517(3223, -1, 0) != 0;
}

bool func_1053()
{
	return func_517(5379, -1, 0) != 0;
}

int func_1054()
{
	bool bVar0;

	bVar0 = func_653();
	if (bVar0 != func_57())
	{
		return Global_1628237[bVar0 /*615*/].f_11.f_98;
	}
	return 0;
}

bool func_1055(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264 != 0;
	}
	return false;
}

int func_1056(bool bParam0)
{
	if (func_243(bParam0) == 225 || func_243(bParam0) == 226)
	{
		return func_624(bParam0);
	}
	return -1;
}

var func_1057()
{
	bool bVar0;
	var uVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_754(UNK_0xD803B885F5E47A62(), bVar0))
		{
			UNK_0x5D96D8530B3D0904(&uVar1, bVar0);
		}
		bVar0++;
	}
	return uVar1;
}

void func_1058()
{
	if (!func_212())
	{
		return;
	}
	if (!UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_917();
}

void func_1059()
{
	if (func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	switch (Local_386[UNK_0x57270EE11514DC67() /*11*/].f_9)
	{
		case 0:
			func_1113();
			func_449();
			if (Local_116.f_214 == 2)
			{
				Local_386[UNK_0x57270EE11514DC67() /*11*/].f_9 = 2;
			}
			else if (Local_116.f_214 == 3)
			{
				Local_386[UNK_0x57270EE11514DC67() /*11*/].f_9 = 3;
			}
			break;
		case 2:
			func_1060();
			func_449();
			if (Local_116.f_214 == 3)
			{
				Local_386[UNK_0x57270EE11514DC67() /*11*/].f_9 = 3;
			}
			break;
		case 3:
			func_1189();
			break;
	}
}

void func_1060()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = UNK_0x57270EE11514DC67();
	iVar1 = Local_116.f_197 + 1;
	if (func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar0 = func_430();
	}
	if (!func_431())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_386[iVar0 /*11*/].f_1, 14))
		{
			UNK_0x5D96D8530B3D0904(&(Local_386[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_1111())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_386[iVar0 /*11*/].f_1, 14))
		{
			UNK_0x5D96D8530B3D0904(&(Local_386[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_116.f_2[0 /*10*/].f_2))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 0))
			{
				return;
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_386[iVar0 /*11*/].f_1, 14))
	{
		if (!func_1075(iVar1, UNK_0x57270EE11514DC67()))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 13))
			{
				if (func_1073(UNK_0xD803B885F5E47A62(), iVar1))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_739, 13);
				}
			}
			else
			{
				bVar4 = true;
				bVar2 = false;
				while (bVar2 < UNK_0x54EABC0DD106045B())
				{
					if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar2)))
					{
						bVar3 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar2));
						if (func_1073(bVar3, iVar1))
						{
							if (!func_1068(bVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					bVar2++;
				}
				if (bVar4)
				{
					func_1061();
				}
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&(Local_386[iVar0 /*11*/].f_1), 14);
		}
	}
}

void func_1061()
{
	func_1062();
}

void func_1062()
{
	bool bVar0;

	if (func_1067(UNK_0xD803B885F5E47A62()))
	{
		bVar0 = func_1066(UNK_0xD803B885F5E47A62());
		if (!func_1065(3, bVar0))
		{
			func_1063(3, bVar0);
		}
	}
}

void func_1063(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	func_1064(bParam1, &iVar0, &bVar1);
	switch (iParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_2392[iVar0]), bVar1);
			return;
		case 1:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_2398[iVar0]), bVar1);
			return;
		case 2:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_2404[iVar0]), bVar1);
			return;
		case 3:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_2996[iVar0]), bVar1);
			return;
		case 4:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3002[iVar0]), bVar1);
			return;
		case 5:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3268[iVar0]), bVar1);
			return;
		case 6:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3274[iVar0]), bVar1);
			return;
		case 7:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3280[iVar0]), bVar1);
			return;
		case 8:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3300[iVar0]), bVar1);
			return;
		case 9:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3306[iVar0]), bVar1);
			return;
		case 10:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3008[iVar0]), bVar1);
			return;
		case 11:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3286[iVar0]), bVar1);
			return;
		case 12:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3292[iVar0]), bVar1);
			return;
		case 13:
			UNK_0x5D96D8530B3D0904(&(Global_1676377.f_3017[iVar0]), bVar1);
			return;
	}
}

void func_1064(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0 == -1)
	{
		return;
	}
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(bParam0) / 32f));
	*bParam2 = (bParam0 - *iParam1 * 32);
}

bool func_1065(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	func_1064(bParam1, &iVar0, &bVar1);
	switch (iParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2392[iVar0], bVar1);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2398[iVar0], bVar1);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2404[iVar0], bVar1);
		case 3:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2996[iVar0], bVar1);
		case 4:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3002[iVar0], bVar1);
		case 5:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3268[iVar0], bVar1);
		case 6:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3274[iVar0], bVar1);
		case 7:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3280[iVar0], bVar1);
		case 8:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3300[iVar0], bVar1);
		case 9:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3306[iVar0], bVar1);
		case 10:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3008[iVar0], bVar1);
		case 11:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3286[iVar0], bVar1);
		case 12:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3292[iVar0], bVar1);
		case 13:
			return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3017[iVar0], bVar1);
	}
	return false;
}

int func_1066(bool bParam0)
{
	if (bParam0 != func_57())
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_13;
	}
	return -1;
}

bool func_1067(bool bParam0)
{
	bool bVar0;

	if (bParam0 != func_57() && (func_1292(bParam0, 1, 1) || Global_2405072.f_2671))
	{
		bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, true);
		return bVar0;
	}
	return false;
}

int func_1068(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1071(iParam1);
	return func_1069(bParam0, iVar0);
}

int func_1069(bool bParam0, int iParam1)
{
	if (bParam0 != func_57() && func_1292(bParam0, 1, 1))
	{
		if (func_1067(bParam0))
		{
			if (func_1066(bParam0) == iParam1)
			{
				if (func_1070(bParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_1070(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 2);
}

int func_1071(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_1072(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 7;
		case 7:
			return 8;
		case 8:
			return 9;
		case 9:
			return 10;
		case 10:
			return 11;
		case 11:
			return 12;
		case 12:
			return 13;
		case 13:
			return 14;
		case 14:
			return 15;
		case 15:
			return 16;
		case 16:
			return 17;
		case 17:
			return 18;
		case 18:
			return 19;
		case 19:
			return 20;
		case 20:
			return 21;
		case 21:
			return 22;
	}
	return 0;
}

int func_1073(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1071(iParam1);
	return func_1074(bParam0, iVar0);
}

int func_1074(bool bParam0, int iParam1)
{
	if (bParam0 != func_57() && func_1292(bParam0, 1, 1))
	{
		if (func_1067(bParam0))
		{
			if (func_1066(bParam0) == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_1075(int iParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	bVar0 = func_1071(iParam0);
	if (func_1065(4, bVar0))
	{
		return true;
	}
	else if (!func_1110(bVar0))
	{
		if (func_1109(iParam0, iParam1, &vVar1, &iVar4))
		{
			func_1076(bVar0, 1, 1, vVar1, iVar4, 0, 0, 0);
		}
		else
		{
			func_1076(bVar0, 1, 0, vVar1, 0, 0, 0, 0);
		}
	}
	return false;
}

int func_1076(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bParam7 = true;
	if (func_1067(UNK_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!bParam7)
	{
		if (!(func_1108(bParam0) || func_1082(bParam0, 0, 1)))
		{
			func_1080(bParam0);
			return 0;
		}
	}
	else
	{
		func_1063(2, bParam0);
	}
	if (func_1065(0, bParam0))
	{
		return 0;
	}
	func_1063(0, bParam0);
	func_1079(4, bParam0);
	func_1078(bParam0);
	if (bParam2)
	{
		func_1063(1, bParam0);
		Global_1676377.f_2410[bParam0 /*3*/] = { vParam3 };
		Global_1676377.f_2849[bParam0] = iParam6;
	}
	else
	{
		func_1079(1, bParam0);
		Global_1676377.f_2410[bParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1676377.f_2849[bParam0] = 0f;
	}
	if (bParam1)
	{
		func_1079(3, bParam0);
	}
	else
	{
		func_1063(3, bParam0);
	}
	func_1079(10, bParam0);
	if (bParam8)
	{
		func_1063(10, bParam0);
	}
	func_1079(13, bParam0);
	if (bParam9)
	{
		func_1063(13, bParam0);
	}
	func_1077(1, bParam0);
	return 1;
}

void func_1077(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310, true))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310), true);
			UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310), 2);
			Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_13 = bParam1;
			func_632(&(Global_1676377.f_3024), 0, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310), true);
		func_1063(4, bParam1);
		Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_13 = -1;
		func_9(&(Global_1676377.f_3024));
	}
}

void func_1078(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
	if (bVar0 != 0)
	{
		if (!UNK_0x437347B10A200C4B(bVar0, 0) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
			{
				Global_1676377.f_3093 = bParam0;
				Global_1676377.f_3094 = bVar0;
				func_632(&(Global_1676377.f_3095), 0, 0);
				Global_1676377.f_3097 = 0;
			}
		}
	}
}

void func_1079(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	func_1064(bParam1, &iVar0, &bVar1);
	switch (iParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_2392[iVar0]), bVar1);
			return;
		case 1:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_2398[iVar0]), bVar1);
			return;
		case 2:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_2404[iVar0]), bVar1);
			return;
		case 3:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_2996[iVar0]), bVar1);
			return;
		case 4:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3002[iVar0]), bVar1);
			return;
		case 5:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3268[iVar0]), bVar1);
			return;
		case 6:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3274[iVar0]), bVar1);
			return;
		case 7:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3280[iVar0]), bVar1);
			return;
		case 8:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3300[iVar0]), bVar1);
			return;
		case 9:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3306[iVar0]), bVar1);
			return;
		case 10:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3008[iVar0]), bVar1);
			return;
		case 11:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3286[iVar0]), bVar1);
			return;
		case 12:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3292[iVar0]), bVar1);
			return;
		case 13:
			UNK_0x0674E58A79778E99(&(Global_1676377.f_3017[iVar0]), bVar1);
			return;
	}
}

void func_1080(bool bParam0)
{
	if (!func_1081(bParam0))
	{
		return;
	}
	func_1079(0, bParam0);
	func_1079(1, bParam0);
	func_1079(2, bParam0);
	func_1079(3, bParam0);
	func_1079(4, bParam0);
	func_1079(10, bParam0);
	Global_1676377.f_2410[bParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1676377.f_2849[bParam0] = 0f;
	if (Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_13 == bParam0)
	{
		Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_13 = -1;
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310), 2);
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310), true);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_1, 22))
	{
		UNK_0x0674E58A79778E99(&(Global_1676377.f_1), 22);
	}
	UNK_0x0674E58A79778E99(&(Global_1676377.f_6), 9);
}

bool func_1081(bool bParam0)
{
	if (bParam0 > -1 && bParam0 < 146)
	{
		return true;
	}
	return false;
}

int func_1082(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if ((func_1292(UNK_0xD803B885F5E47A62(), 1, 1) || Global_2405072.f_2671) && (!func_1107() || func_1100()))
	{
		if (func_1098(bParam0))
		{
			return 0;
		}
		if (Global_1676377.f_3335 == bParam0)
		{
			return 0;
		}
		if (func_150(bParam0) == 5)
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (func_1097())
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310, 5))
					{
						return 1;
					}
				}
			}
			if (func_560(UNK_0xD803B885F5E47A62()))
			{
				if (func_1100())
				{
					return 1;
				}
			}
		}
		if (func_150(bParam0) == 4)
		{
			if (func_148(UNK_0xD803B885F5E47A62()) || (func_1096() && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)))
			{
				if (func_1100())
				{
					if (func_1093(Global_1590374) == bParam0)
					{
						return 1;
					}
				}
			}
		}
		if (func_150(bParam0) == 8)
		{
			if (func_556(UNK_0xD803B885F5E47A62()))
			{
				if (func_1100())
				{
					return 1;
				}
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (func_1097())
				{
					bVar0 = UNK_0xA30B8362589C124A(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), -1, 0);
					if (UNK_0xC844350D5D58C99A(bVar0))
					{
						if (func_1292(UNK_0x83FACCC48B68F9D1(bVar0), 1, 1))
						{
							if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0x83FACCC48B68F9D1(bVar0) /*421*/].f_310, 5) && func_1092(UNK_0x83FACCC48B68F9D1(bVar0)))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		if (func_150(bParam0) == 9)
		{
			if (func_149(UNK_0xD803B885F5E47A62()) || (func_1091() && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)))
			{
				if (func_1100())
				{
					if (func_1089(func_1090(Global_1590379)) == bParam0)
					{
						return 1;
					}
				}
			}
		}
		if (bParam0 == 122 && Global_2451426.f_6469)
		{
			return 0;
		}
		if (bParam2 && func_1084(bParam0))
		{
			return 1;
		}
		else if (bParam1 && func_1083(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1083(bool bParam0)
{
	if (func_1110(bParam0))
	{
		return func_1065(2, bParam0);
	}
	return false;
}

bool func_1084(bool bParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 210;
	if (func_1085(bParam0))
	{
		iVar0 = 150;
	}
	vVar1 = { Global_1676377.f_927[bParam0 /*3*/] };
	if (!func_39(vVar1))
	{
		return UNK_0x0EB28750412C3A5A(func_52(UNK_0xD803B885F5E47A62()), vVar1, 1) <= IntToFloat(iVar0);
	}
	return false;
}

bool func_1085(bool bParam0)
{
	if (func_1292(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		switch (bParam0)
		{
			case 81:
				if (func_1088(UNK_0xD803B885F5E47A62()))
				{
					if (!func_1087(UNK_0xD803B885F5E47A62()))
					{
						return true;
					}
				}
				break;
			case 117:
				if (func_1086(UNK_0xD803B885F5E47A62()))
				{
					if (!func_1087(UNK_0xD803B885F5E47A62()))
					{
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_1086(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_3, 4);
	}
	return false;
}

bool func_1087(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_1292(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_1292(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_1088(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 6);
	}
	return false;
}

bool func_1089(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 146)
	{
		if (func_150(bVar0) == 9)
		{
			if (func_170(bVar0) == iParam0)
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	return -1;
}

int func_1090(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_271;
}

bool func_1091()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 10);
}

bool func_1092(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_2, 7);
	}
	return false;
}

int func_1093(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_57())
	{
		return -1;
	}
	iVar0 = func_642(bParam0);
	if (!iVar0 == 0)
	{
		return func_1094(iVar0);
	}
	return -1;
}

int func_1094(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_1095(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1095(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
		case 23:
			return 2;
		case 24:
			return 3;
		case 25:
			return 4;
		case 26:
			return 5;
		case 27:
			return 6;
		case 28:
			return 7;
		case 29:
			return 8;
		case 30:
			return 9;
		case 31:
			return 10;
		case 32:
			return 11;
		case 33:
			return 12;
		case 34:
			return 13;
		case 35:
			return 14;
		case 36:
			return 15;
		case 37:
			return 16;
		case 38:
			return 17;
		case 39:
			return 18;
		case 40:
			return 19;
		case 41:
			return 20;
		case 70:
			return 21;
		case 71:
			return 22;
		case 72:
			return 23;
		case 73:
			return 24;
		case 74:
			return 25;
		case 75:
			return 26;
		case 76:
			return 27;
		case 77:
			return 28;
		case 78:
			return 29;
		case 79:
			return 30;
		case 80:
			return 31;
	}
	return 0;
}

bool func_1096()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377, 17);
}

bool func_1097()
{
	if (func_1292(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0xA30B8362589C124A(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), -1, 0) != UNK_0x16F2683693E537C9())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1098(bool bParam0)
{
	if (UNK_0xA14BB9332558B949() && !func_1099(bParam0))
	{
		return true;
	}
	return false;
}

bool func_1099(bool bParam0)
{
	if (Global_1676377.f_3353)
	{
		if (((((func_150(bParam0) == 6 || func_150(bParam0) == 10) || func_150(bParam0) == 9) || func_150(bParam0) == 14) || func_150(bParam0) == 17) || func_150(bParam0) == 11)
		{
			return true;
		}
	}
	return false;
}

bool func_1100()
{
	if (func_1292(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (func_560(UNK_0xD803B885F5E47A62()))
		{
			if (Global_1590375 != func_57())
			{
				if (func_863(Global_1590375))
				{
					if ((func_1088(Global_1590375) && !func_1106()) && !func_1105())
					{
						return true;
					}
				}
			}
		}
		else if (func_148(UNK_0xD803B885F5E47A62()) || (func_1096() && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)))
		{
			if (Global_1590374 != func_57())
			{
				if (func_863(Global_1590374))
				{
					if ((func_1088(Global_1590374) && !func_1105()) && !func_1106())
					{
						return true;
					}
				}
			}
		}
		else if (func_556(UNK_0xD803B885F5E47A62()))
		{
			if (Global_1590380 != func_57())
			{
				if (func_1104(Global_1590380))
				{
					if ((func_1103(Global_1590380) && !func_1102()) && !func_1101())
					{
						return true;
					}
				}
			}
		}
		else if (func_149(UNK_0xD803B885F5E47A62()) || (func_1091() && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)))
		{
			if (Global_1590379 != func_57())
			{
				if (func_1104(Global_1590379))
				{
					if ((func_1103(Global_1590379) && !func_1101()) && !func_1102())
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1101()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 3);
}

bool func_1102()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 4);
}

bool func_1103(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_2, 6);
	}
	return false;
}

bool func_1104(int iParam0)
{
	if (iParam0 != func_57())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_270, true);
	}
	return false;
}

bool func_1105()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377, 30);
}

bool func_1106()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377, 31);
}

bool func_1107()
{
	int iVar0;

	iVar0 = UNK_0x8A22C4C08282BF26(joaat("AM_MP_SMPL_INTERIOR_INT"));
	return iVar0 > 0;
}

int func_1108(bool bParam0)
{
	if ((UNK_0xFD3325C97D6EC829(UNK_0xD803B885F5E47A62(), "AM_MP_SMPL_INTERIOR_EXT", bParam0) || UNK_0xADC2AA9A68E522A1("AM_MP_SMPL_INTERIOR_EXT", bParam0, 1, 0)) || func_1065(12, bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1109(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_533(iParam0))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -4.3114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return true;
				case 1:
					*uParam2 = { -4.3114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return true;
				case 2:
					*uParam2 = { -2.8114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return true;
				case 3:
					*uParam2 = { -2.8114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return true;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -6.1997f, 8.7449f, 0.0001f };
					*uParam3 = 260f;
					return true;
				case 1:
					*uParam2 = { -6.6f, 7.345f, 0.0001f };
					*uParam3 = 270f;
					return true;
				case 2:
					*uParam2 = { -6.6f, 5.7449f, 0.0001f };
					*uParam3 = 270f;
					return true;
				case 3:
					*uParam2 = { -6.1997f, 4.2449f, 0.0001f };
					*uParam3 = 280f;
					return true;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -7.6002f, 5.7561f, 0.0001f };
					*uParam3 = 270f;
					return true;
				case 1:
					*uParam2 = { -7.6002f, 3.7561f, 0.0001f };
					*uParam3 = 270f;
					return true;
				case 2:
					*uParam2 = { -7.6002f, 1.7561f, 0.0001f };
					*uParam3 = 270f;
					return true;
				case 3:
					*uParam2 = { -7.6002f, -0.2439f, 0.0001f };
					*uParam3 = 270f;
					return true;
			}
			break;
	}
	return false;
}

bool func_1110(bool bParam0)
{
	return func_1065(0, bParam0);
}

bool func_1111()
{
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 13))
	{
		return true;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), func_1112(Local_116.f_197 + 1), 1) > 100f)
	{
		return false;
	}
	return true;
}

Vector3 func_1112(int iParam0)
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return vVar0;
	}
	switch (iParam0)
	{
		case 1:
			vVar0 = { 50.9205f, -2560.01f, 6f };
			break;
		case 2:
			vVar0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		case 3:
			vVar0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		case 4:
			vVar0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		case 5:
			vVar0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		case 6:
			vVar0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		case 7:
			vVar0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		case 8:
			vVar0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		case 9:
			vVar0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		case 10:
			vVar0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		case 11:
			vVar0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		case 12:
			vVar0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		case 13:
			vVar0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		case 14:
			vVar0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		case 15:
			vVar0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		case 16:
			vVar0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		case 17:
			vVar0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		case 18:
			vVar0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		case 19:
			vVar0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		case 20:
			vVar0 = { -263.138f, 194.3424f, 85.184f };
			break;
		case 21:
			vVar0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		case 22:
			vVar0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return vVar0;
}

void func_1113()
{
	func_1142();
	func_926();
	func_1141();
	func_1138();
	func_911();
	func_1135();
	func_1119();
	func_1115();
	func_902();
	func_1114();
}

void func_1114()
{
}

void func_1115()
{
	vector3 vVar0;
	float fVar3;

	if (func_431())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	vVar0 = { func_1112(Local_116.f_197 + 1) };
	fVar3 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar0);
	if (fVar3 < 62500f)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 14))
		{
			func_225(1, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
			func_1116();
			UNK_0x5D96D8530B3D0904(&bLocal_739, 14);
		}
	}
	else if (fVar3 > 250000f)
	{
		func_479();
	}
}

void func_1116()
{
	int iVar0;

	if (func_431())
	{
		return;
	}
	iVar0 = Local_116.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			func_1117(93.9801f, -2532.177f, 5.0778f, 124.1404f, 1065353216 /* Float: 1f */);
			func_1117(96.7817f, -2536.936f, 5f, 121.982f, 1065353216 /* Float: 1f */);
			func_1117(106.1278f, -2539.717f, 5.0003f, 111.4201f, 1065353216 /* Float: 1f */);
			func_1117(7.7245f, -2598.042f, 5.0075f, 283.2584f, 1065353216 /* Float: 1f */);
			func_1117(13.7512f, -2602.234f, 5.0069f, 290.8908f, 1065353216 /* Float: 1f */);
			func_1117(113.3588f, -2586.112f, 5.0121f, 88.5573f, 1065353216 /* Float: 1f */);
			func_1117(111.6119f, -2592.456f, 5.0229f, 78.4188f, 1065353216 /* Float: 1f */);
			func_1117(8.5363f, -2518.204f, 5.0163f, 213.3867f, 1065353216 /* Float: 1f */);
			break;
		case 2:
			func_1117(-1150.759f, -1273.248f, 5.7478f, 282.4241f, 1065353216 /* Float: 1f */);
			func_1117(-1019.696f, -1323.524f, 4.9009f, 45.7692f, 1065353216 /* Float: 1f */);
			func_1117(-1012.756f, -1319.543f, 4.9001f, 43.138f, 1065353216 /* Float: 1f */);
			func_1117(-1005.033f, -1315.236f, 4.941f, 58.4519f, 1065353216 /* Float: 1f */);
			func_1117(-1014.173f, -1307.516f, 5.2364f, 52.7034f, 1065353216 /* Float: 1f */);
			func_1117(-1022.801f, -1245.642f, 5.014f, 106.8874f, 1065353216 /* Float: 1f */);
			func_1117(-1112.947f, -1296.568f, 4.258f, 298.12f, 1065353216 /* Float: 1f */);
			func_1117(-1118.264f, -1218.13f, 1.5169f, 188.9163f, 1065353216 /* Float: 1f */);
			break;
		case 3:
			func_1117(856.3708f, -1013.008f, 28.4203f, 271.5768f, 1065353216 /* Float: 1f */);
			func_1117(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216 /* Float: 1f */);
			func_1117(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216 /* Float: 1f */);
			func_1117(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216 /* Float: 1f */);
			func_1117(867.5297f, -1076.188f, 27.7798f, 268.1065f, 1065353216 /* Float: 1f */);
			func_1117(868.5233f, -1092.591f, 27.7269f, 302.3375f, 1065353216 /* Float: 1f */);
			func_1117(927.5185f, -1092.741f, 33.1574f, 50.444f, 1065353216 /* Float: 1f */);
			func_1117(936.7908f, -1078.382f, 34.7149f, 77.3112f, 1065353216 /* Float: 1f */);
			break;
		case 4:
			func_1117(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216 /* Float: 1f */);
			func_1117(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216 /* Float: 1f */);
			func_1117(171.7093f, -1951.986f, 18.7677f, 286.1576f, 1065353216 /* Float: 1f */);
			func_1117(186.7918f, -1911.818f, 21.7781f, 235.4626f, 1065353216 /* Float: 1f */);
			func_1117(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216 /* Float: 1f */);
			func_1117(223.3617f, -1889.273f, 24.4098f, 178.0541f, 1065353216 /* Float: 1f */);
			func_1117(260.1144f, -1909.984f, 24.8323f, 142.8378f, 1065353216 /* Float: 1f */);
			func_1117(289.037f, -1933.327f, 24.3999f, 148.1186f, 1065353216 /* Float: 1f */);
			break;
		case 5:
			func_1117(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216 /* Float: 1f */);
			func_1117(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216 /* Float: 1f */);
			func_1117(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216 /* Float: 1f */);
			func_1117(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216 /* Float: 1f */);
			func_1117(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216 /* Float: 1f */);
			func_1117(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216 /* Float: 1f */);
			func_1117(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216 /* Float: 1f */);
			func_1117(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216 /* Float: 1f */);
			break;
		case 6:
			func_1117(-1119.86f, -2022.411f, 12.2297f, 292.6461f, 1065353216 /* Float: 1f */);
			func_1117(-1102.049f, -1983.884f, 12.1406f, 223.9062f, 1065353216 /* Float: 1f */);
			func_1117(-1084.243f, -1968.423f, 12.1514f, 204.0761f, 1065353216 /* Float: 1f */);
			func_1117(-1033.419f, -2068.45f, 12.4615f, 33.9101f, 1065353216 /* Float: 1f */);
			func_1117(-1037.025f, -2088.586f, 12.6459f, 21.4939f, 1065353216 /* Float: 1f */);
			func_1117(-1056.915f, -2088.188f, 12.2919f, 8.2791f, 1065353216 /* Float: 1f */);
			func_1117(-1020.213f, -2077.749f, 12.7601f, 40.6275f, 1065353216 /* Float: 1f */);
			func_1117(-1032.6f, -2101.71f, 12.6309f, 20.9321f, 1065353216 /* Float: 1f */);
			break;
		case 7:
			func_1117(-1323.561f, -801.4799f, 16.5991f, 309.0983f, 1065353216 /* Float: 1f */);
			func_1117(-1334.537f, -788.2323f, 18.9061f, 263.1596f, 1065353216 /* Float: 1f */);
			func_1117(-1333.08f, -758.4105f, 19.367f, 226.0109f, 1065353216 /* Float: 1f */);
			func_1117(-1326.314f, -754.1177f, 19.367f, 215.8053f, 1065353216 /* Float: 1f */);
			func_1117(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216 /* Float: 1f */);
			func_1117(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216 /* Float: 1f */);
			func_1117(-1234.714f, -903.713f, 11.0757f, 22.5172f, 1065353216 /* Float: 1f */);
			func_1117(-1274.141f, -860.0457f, 11.2177f, 313.1372f, 1065353216 /* Float: 1f */);
			break;
		case 8:
			func_1117(-954.9498f, -2765.854f, 12.9446f, 300.864f, 1065353216 /* Float: 1f */);
			func_1117(-967.7481f, -2758.093f, 12.8166f, 282.6459f, 1065353216 /* Float: 1f */);
			func_1117(-974.1952f, -2721.633f, 12.7566f, 258.5829f, 1065353216 /* Float: 1f */);
			func_1117(-956.0557f, -2704.292f, 12.831f, 242.288f, 1065353216 /* Float: 1f */);
			func_1117(-900.7191f, -2652.238f, 12.7618f, 177.695f, 1065353216 /* Float: 1f */);
			func_1117(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216 /* Float: 1f */);
			func_1117(-837.4813f, -2697.67f, 12.8121f, 98.2582f, 1065353216 /* Float: 1f */);
			func_1117(-830.3173f, -2716.68f, 12.9445f, 57.01767f, 1065353216 /* Float: 1f */);
			break;
		case 9:
			func_1117(246.686f, -2954.608f, 4.8465f, 201.0552f, 1065353216 /* Float: 1f */);
			func_1117(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216 /* Float: 1f */);
			func_1117(278.0732f, -2933.848f, 4.6858f, 173.7103f, 1065353216 /* Float: 1f */);
			func_1117(305.2663f, -2953.124f, 4.9916f, 152.1779f, 1065353216 /* Float: 1f */);
			func_1117(306.9686f, -3051.72f, 4.8569f, 73.9139f, 1065353216 /* Float: 1f */);
			func_1117(290.1032f, -3067.022f, 4.9168f, 22.2414f, 1065353216 /* Float: 1f */);
			func_1117(248.4644f, -3081.733f, 4.8082f, 5.7888f, 1065353216 /* Float: 1f */);
			func_1117(213.5583f, -3006.335f, 4.8585f, 281.9704f, 1065353216 /* Float: 1f */);
			break;
		case 10:
			func_1117(1533.422f, -2207.716f, 76.5674f, 341.3423f, 1065353216 /* Float: 1f */);
			func_1117(1518.683f, -2197.165f, 76.0905f, 323.85f, 1065353216 /* Float: 1f */);
			func_1117(1505.83f, -2149.169f, 76.2134f, 287.7332f, 1065353216 /* Float: 1f */);
			func_1117(1517.668f, -2071.069f, 76.2881f, 218.4776f, 1065353216 /* Float: 1f */);
			func_1117(1513.971f, -2047.472f, 76.3438f, 229.7462f, 1065353216 /* Float: 1f */);
			func_1117(1562.546f, -2050.737f, 76.4175f, 158.5163f, 1065353216 /* Float: 1f */);
			func_1117(1571.823f, -2065.519f, 76.0999f, 139.3434f, 1065353216 /* Float: 1f */);
			func_1117(1559.668f, -2212.969f, 77.2272f, 30.3786f, 1065353216 /* Float: 1f */);
			break;
		case 11:
			func_1117(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216 /* Float: 1f */);
			func_1117(-247.8431f, -2669.538f, 5.0003f, 137.3239f, 1065353216 /* Float: 1f */);
			func_1117(-273.936f, -2646.584f, 5.1595f, 138.4986f, 1065353216 /* Float: 1f */);
			func_1117(-283.7866f, -2643.465f, 5.1536f, 145.8487f, 1065353216 /* Float: 1f */);
			func_1117(-338.5266f, -2716.292f, 5.0016f, 353.4592f, 1065353216 /* Float: 1f */);
			func_1117(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216 /* Float: 1f */);
			func_1117(-284.5308f, -2623.301f, 5.0382f, 150.473f, 1065353216 /* Float: 1f */);
			func_1117(-257.3565f, -2632.506f, 5.0221f, 131.679f, 1065353216 /* Float: 1f */);
			break;
		case 12:
			func_1117(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216 /* Float: 1f */);
			func_1117(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216 /* Float: 1f */);
			func_1117(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216 /* Float: 1f */);
			func_1117(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216 /* Float: 1f */);
			func_1117(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216 /* Float: 1f */);
			func_1117(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216 /* Float: 1f */);
			func_1117(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216 /* Float: 1f */);
			func_1117(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216 /* Float: 1f */);
			break;
		case 13:
			func_1117(-518.2458f, -1828.47f, 21.5839f, 6.9263f, 1065353216 /* Float: 1f */);
			func_1117(-493.7525f, -1823.626f, 21.8486f, 29.4302f, 1065353216 /* Float: 1f */);
			func_1117(-450.3873f, -1794.818f, 20.7743f, 85.0772f, 1065353216 /* Float: 1f */);
			func_1117(-597.9962f, -1729.797f, 22.139f, 232.3263f, 1065353216 /* Float: 1f */);
			func_1117(-581.0703f, -1718.014f, 21.9858f, 214.5117f, 1065353216 /* Float: 1f */);
			func_1117(-449.3808f, -1766.115f, 19.5349f, 112.1522f, 1065353216 /* Float: 1f */);
			func_1117(-541.6173f, -1821.735f, 21.9225f, 317.0811f, 1065353216 /* Float: 1f */);
			func_1117(-618.6395f, -1711.974f, 23.0683f, 235.603f, 1065353216 /* Float: 1f */);
			break;
		case 14:
			func_1117(-291.3686f, -1274.791f, 29.4583f, 184.0252f, 1065353216 /* Float: 1f */);
			func_1117(-260.6114f, -1286.958f, 30.0291f, 148.6145f, 1065353216 /* Float: 1f */);
			func_1117(-245.4854f, -1358.204f, 30.606f, 97.9413f, 1065353216 /* Float: 1f */);
			func_1117(-258.2249f, -1408.08f, 30.2904f, 46.1851f, 1065353216 /* Float: 1f */);
			func_1117(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216 /* Float: 1f */);
			func_1117(-335.4179f, -1371.286f, 30.2957f, 304.5049f, 1065353216 /* Float: 1f */);
			func_1117(-337.6552f, -1333.524f, 30.3008f, 289.5995f, 1065353216 /* Float: 1f */);
			func_1117(-339.4502f, -1311.185f, 30.2086f, 224.0032f, 1065353216 /* Float: 1f */);
			break;
		case 15:
			func_1117(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216 /* Float: 1f */);
			func_1117(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216 /* Float: 1f */);
			func_1117(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216 /* Float: 1f */);
			func_1117(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216 /* Float: 1f */);
			func_1117(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216 /* Float: 1f */);
			func_1117(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216 /* Float: 1f */);
			func_1117(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216 /* Float: 1f */);
			func_1117(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216 /* Float: 1f */);
			break;
		case 16:
			func_1117(983.1635f, -1507.116f, 30.4318f, 115.3138f, 1065353216 /* Float: 1f */);
			func_1117(976.6813f, -1462.792f, 30.4421f, 170.1272f, 1065353216 /* Float: 1f */);
			func_1117(965.1019f, -1457.18f, 30.1302f, 187.7104f, 1065353216 /* Float: 1f */);
			func_1117(954.3276f, -1500.289f, 29.9441f, 234.0993f, 1065353216 /* Float: 1f */);
			func_1117(967.4816f, -1632.333f, 29.1107f, 353.4453f, 1065353216 /* Float: 1f */);
			func_1117(890.0863f, -1572.723f, 29.84f, 281.6886f, 1065353216 /* Float: 1f */);
			func_1117(905.2548f, -1543.512f, 29.5311f, 219.2688f, 1065353216 /* Float: 1f */);
			func_1117(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216 /* Float: 1f */);
			break;
		case 17:
			func_1117(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216 /* Float: 1f */);
			func_1117(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216 /* Float: 1f */);
			func_1117(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216 /* Float: 1f */);
			func_1117(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216 /* Float: 1f */);
			func_1117(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216 /* Float: 1f */);
			func_1117(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216 /* Float: 1f */);
			func_1117(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216 /* Float: 1f */);
			func_1117(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216 /* Float: 1f */);
			break;
		case 18:
			func_1117(1021.727f, -2096.922f, 29.9949f, 131.5094f, 1065353216 /* Float: 1f */);
			func_1117(1004.22f, -2097.619f, 30.1617f, 218.0245f, 1065353216 /* Float: 1f */);
			func_1117(1048.305f, -2162.876f, 31.0285f, 17.1583f, 1065353216 /* Float: 1f */);
			func_1117(1053.165f, -2138.979f, 31.6269f, 138.5871f, 1065353216 /* Float: 1f */);
			func_1117(992.7523f, -2239.598f, 29.5519f, 335.4291f, 1065353216 /* Float: 1f */);
			func_1117(975.8146f, -2201.123f, 29.5516f, 290.5504f, 1065353216 /* Float: 1f */);
			func_1117(1035.371f, -2203.133f, 30.8934f, 77.8725f, 1065353216 /* Float: 1f */);
			func_1117(1040.114f, -2203.875f, 30.8934f, 62.6027f, 1065353216 /* Float: 1f */);
			break;
		case 19:
			func_1117(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216 /* Float: 1f */);
			func_1117(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216 /* Float: 1f */);
			func_1117(945.7234f, -2497.031f, 27.453f, 256.6793f, 1065353216 /* Float: 1f */);
			func_1117(946.9409f, -2478.706f, 27.3433f, 233.4717f, 1065353216 /* Float: 1f */);
			func_1117(932.4327f, -2534.006f, 27.3027f, 231.8695f, 1065353216 /* Float: 1f */);
			func_1117(900.2678f, -2552.213f, 27.4211f, 283.9405f, 1065353216 /* Float: 1f */);
			func_1117(1028.407f, -2477.004f, 27.5034f, 91.0284f, 1065353216 /* Float: 1f */);
			func_1117(1021.066f, -2459.521f, 27.5462f, 131.3309f, 1065353216 /* Float: 1f */);
			break;
		case 20:
			func_1117(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216 /* Float: 1f */);
			func_1117(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216 /* Float: 1f */);
			func_1117(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216 /* Float: 1f */);
			func_1117(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216 /* Float: 1f */);
			func_1117(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216 /* Float: 1f */);
			func_1117(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216 /* Float: 1f */);
			func_1117(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216 /* Float: 1f */);
			func_1117(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216 /* Float: 1f */);
			break;
		case 21:
			func_1117(578.9037f, -1883.818f, 24.4357f, 190.9878f, 1065353216 /* Float: 1f */);
			func_1117(601.1657f, -1872.286f, 23.7783f, 136.6622f, 1065353216 /* Float: 1f */);
			func_1117(573.7683f, -1869.375f, 24.1791f, 138.5911f, 1065353216 /* Float: 1f */);
			func_1117(531.532f, -1858.341f, 24.332f, 211.7805f, 1065353216 /* Float: 1f */);
			func_1117(542.208f, -1844.02f, 24.332f, 187.9743f, 1065353216 /* Float: 1f */);
			func_1117(502.1498f, -1917.516f, 24.3684f, 289.8235f, 1065353216 /* Float: 1f */);
			func_1117(512.4601f, -1985.896f, 23.9851f, 299.9174f, 1065353216 /* Float: 1f */);
			func_1117(479.1975f, -1908.422f, 24.2436f, 282.8994f, 1065353216 /* Float: 1f */);
			break;
		case 22:
			func_1117(172.8245f, -2183.052f, 5.0294f, 116.2516f, 1065353216 /* Float: 1f */);
			func_1117(173.7597f, -2198.917f, 5.171f, 72.2949f, 1065353216 /* Float: 1f */);
			func_1117(173.7982f, -2224.849f, 5.171f, 126.6793f, 1065353216 /* Float: 1f */);
			func_1117(181.6316f, -2238.538f, 5.0035f, 61.6889f, 1065353216 /* Float: 1f */);
			func_1117(147.6168f, -2252.883f, 5.0856f, 63.8371f, 1065353216 /* Float: 1f */);
			func_1117(147.2348f, -2244.339f, 5.0856f, 70.1362f, 1065353216 /* Float: 1f */);
			func_1117(178.0549f, -2206.273f, 5.0238f, 38.9746f, 1065353216 /* Float: 1f */);
			func_1117(176.9219f, -2223.301f, 5.0329f, 133.7211f, 1065353216 /* Float: 1f */);
			break;
	}
}

void func_1117(vector3 vParam0, float fParam3, int iParam4)
{
	func_1118(vParam0, fParam3, iParam4);
}

void func_1118(vector3 vParam0, float fParam3, int iParam4)
{
	if (!Global_2405072.f_1745)
	{
	}
	if (Global_2405072.f_706 < 100)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_706.f_1[Global_2405072.f_706 /*5*/] = { vParam0 };
		Global_2405072.f_706.f_1[Global_2405072.f_706 /*5*/].f_3 = fParam3;
		Global_2405072.f_706.f_1[Global_2405072.f_706 /*5*/].f_4 = iParam4;
		Global_2405072.f_706++;
	}
}

void func_1119()
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;

	if (!func_431())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 19))
	{
		if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_116.f_2[0 /*10*/].f_2))
			{
				UNK_0x1F85B199848ECF4E(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), false, 0);
				UNK_0x5D96D8530B3D0904(&bLocal_739, 19);
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 8))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 9))
		{
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
			{
				if (!func_13(Local_116.f_2[0 /*10*/].f_2))
				{
					UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 6))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 7))
		{
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
			{
				vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), false) };
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar1) < 90000f)
				{
					UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (bLocal_742 == -2)
	{
		if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_116.f_2[0 /*10*/].f_2))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 8))
				{
					if (func_1134(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2)))
					{
						UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 8);
					}
				}
				else if (!func_1134(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2)))
				{
					UNK_0x0674E58A79778E99(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 2) && !UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4))
	{
		if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
		{
			bVar0 = UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) == bVar0)
						{
							if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 3))
								{
									UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 3);
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 3))
							{
								UNK_0x0674E58A79778E99(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 3);
							}
						}
						else if (UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 3))
						{
							UNK_0x0674E58A79778E99(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 3);
						}
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 3))
					{
						UNK_0x0674E58A79778E99(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 3);
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 3))
				{
					UNK_0x0674E58A79778E99(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 3);
				}
			}
		}
	}
	bVar4 = func_57();
	bVar5 = func_57();
	if (bLocal_742 != Local_116.f_215)
	{
		if (!func_28())
		{
			if (!func_924())
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_852))
				{
					UNK_0x142CC44DB769B57E(&iLocal_852);
				}
				if (Local_116.f_215 == UNK_0x57270EE11514DC67())
				{
					func_1133(1);
				}
				else if (Local_116.f_215 > -1)
				{
					bVar4 = func_1132();
					if (bVar4 != func_57())
					{
						if (func_651(1))
						{
							bVar5 = func_653();
							if (bVar5 != func_57())
							{
								if (func_346(bVar4, bVar5, 1))
								{
									func_474(bVar4, 478, 1, 0);
									func_473(bVar4, func_477(bLocal_853), 1, 0);
									func_1133(1);
								}
							}
						}
						func_1130("DCONTRA_TCKV", bVar4, 0, 0, 0, 1, 0);
					}
				}
				else if (Local_116.f_215 == -1)
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_850))
					{
						UNK_0x142CC44DB769B57E(&iLocal_850);
					}
					bVar4 = func_1129();
					if (bVar4 != func_57())
					{
						func_474(bVar4, 478, 0, 0);
						func_473(bVar4, func_477(bLocal_853), 0, 0);
					}
					func_1128(3, 1);
				}
				bLocal_742 = Local_116.f_215;
			}
			else
			{
				func_1128(1, 0);
			}
		}
	}
	func_1127();
	func_1125(0);
	func_1120();
}

void func_1120()
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;

	bVar0 = func_1132();
	vVar1 = { func_40() };
	if (UNK_0xE4EDC4B0E92C078B(iLocal_850))
	{
		UNK_0xA402F6C87C08815C(12, &bVar4, &bVar5, &bVar6, &uVar7);
		UNK_0x922D0EFFF8F2403B(1, vVar1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, bVar4, bVar5, bVar6, 100, 0, 0, 2, false, false, false, false);
	}
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
	{
		if (UNK_0x526BC32A660C89E6(Local_116.f_2[0 /*10*/].f_2))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 2))
			{
				if (bVar0 == UNK_0xD803B885F5E47A62())
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x9539D44F3E4492F6(bVar0)))
					{
						if (UNK_0x5A91F08DF773C39D(UNK_0x9539D44F3E4492F6(bVar0), vVar1, 6f, 6f, 2f, false, true, 0))
						{
							func_1121(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), &uLocal_1022, 0, 1);
							if (UNK_0xAFE0D3608EDA7039(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2)))
							{
								UNK_0xC4B4C89FC0D48108(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2), 1);
							}
							UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

int func_1121(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;

	if (!func_1123(bParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam1)) > 1000)
		{
			bVar0 = false;
			while (bVar0 < 32)
			{
				bVar1 = UNK_0x117658E336116132(bVar0);
				if (func_1292(bVar1, 0, 1))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x9539D44F3E4492F6(bVar1), bParam0, 0))
					{
						func_1122(func_497(bVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				bVar0++;
			}
			*uParam1 = UNK_0x2B6E0A53779D29EA();
		}
	}
	else if (!UNK_0xAFE0D3608EDA7039(bParam0))
	{
		UNK_0x0C8A454B494DAA0D(bParam0);
	}
	else
	{
		if (bParam3)
		{
			UNK_0xC4B4C89FC0D48108(bParam0, 1);
		}
		UNK_0x1E9649458B15960F(bParam0, false);
		if (bParam2)
		{
			UNK_0xE121AE1BBF90E186(bParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_1122(bool bParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;

	Var0 = -130330100;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = UNK_0xF4CCC8CB6DE7F1AE();
	if (!bParam0 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Var0, 9, bParam0);
	}
}

bool func_1123(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar1 = UNK_0xD6DF381716822EFE(bParam0) + 1;
	if (bParam4 || !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			bVar2 = func_1124(bParam0, (iVar0 - 1), bParam6, iParam7);
			if (UNK_0xC844350D5D58C99A(bVar2))
			{
				if (bParam3 && bVar2 == UNK_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (UNK_0x34BFC6F0CB887BC2(bVar2))
					{
						bVar3 = UNK_0x83FACCC48B68F9D1(bVar2);
						if (((!UNK_0xEB6A8945D1AC98A1(bVar2) && bVar3 != func_57()) && func_1292(bVar3, 1, 1)) || bParam8)
						{
							if (UNK_0x179932739160BA96(UNK_0x83FACCC48B68F9D1(bVar2)) == 0)
							{
								if (!bParam5)
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else if (!UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_1124(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	if (!UNK_0xBBA8A868118C90ED(bParam0, bParam1, iParam3))
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, bParam1, iParam3);
	}
	if (bParam2)
	{
		if (!UNK_0xC844350D5D58C99A(bVar0) && !UNK_0x437347B10A200C4B(bParam0, 0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, bParam1);
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xD1960163A3042274(bVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || UNK_0xD1960163A3042274(bVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, false), UNK_0x68F4C0EC296D3901(bVar0, false)) < 10f)
					{
						return bVar0;
					}
				}
			}
			bVar0 = -1;
		}
	}
	return bVar0;
}

void func_1125(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;

	if (func_2())
	{
		return;
	}
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_116.f_2[iParam0 /*10*/].f_2))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_852))
			{
				if (Local_116.f_216 > -1)
				{
					UNK_0xA402F6C87C08815C(9, &bVar0, &bVar1, &bVar2, &uVar3);
				}
				else if (bLocal_742 == -2)
				{
					UNK_0xA402F6C87C08815C(6, &bVar0, &bVar1, &bVar2, &uVar3);
				}
				else
				{
					UNK_0xA402F6C87C08815C(9, &bVar0, &bVar1, &bVar2, &uVar3);
				}
				func_1126(UNK_0xB177666FAB6F4417(Local_116.f_2[iParam0 /*10*/].f_2), bVar0, bVar1, bVar2, 0);
			}
		}
	}
}

void func_1126(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;

	fVar6 = 0.5f;
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &vVar0, &vVar3);
	fVar7 = ((vVar3.z - vVar0.z) / 2f);
	fVar8 = (vVar3.z - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	UNK_0x922D0EFFF8F2403B(2, UNK_0x68F4C0EC296D3901(bParam0, true) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, bParam1, bParam2, bParam3, 100, 1, 1, 2, false, false, false, false);
}

void func_1127()
{
	if (bLocal_742 == -2)
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_852))
		{
			if (bLocal_743 != Local_116.f_222)
			{
				bLocal_743 = Local_116.f_222;
				UNK_0x7F010F50CE03A8AF(iLocal_852, bLocal_743);
			}
		}
	}
	else if (bLocal_743 != 255)
	{
		bLocal_743 = 255;
	}
}

void func_1128(bool bParam0, bool bParam1)
{
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_852))
	{
		if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_116.f_2[0 /*10*/].f_2))
			{
				iLocal_852 = UNK_0x5C3B41825F6AC5A0(UNK_0xB177666FAB6F4417(Local_116.f_2[0 /*10*/].f_2));
				UNK_0x2A065371C9D96655(iLocal_852, 12);
				UNK_0xBC8E0A7390523199(iLocal_852, 478);
				UNK_0x61755AC17D8F538E(iLocal_852, bParam0);
				if (bParam1)
				{
					UNK_0x661342B9651D16E2(iLocal_852, true);
				}
			}
		}
	}
}

bool func_1129()
{
	bool bVar0;

	bVar0 = func_57();
	if (bLocal_742 < 0)
	{
		return bVar0;
	}
	if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(bLocal_742)))
	{
		bVar0 = UNK_0x117658E336116132(bLocal_742);
	}
	return bVar0;
}

int func_1130(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;

	iVar0 = -1;
	iVar1 = UNK_0x08067D4957B73C02(bParam1);
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&Var2, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		if ((iVar1 != -1 && UNK_0xA14BB9332558B949()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				UNK_0x3A820E495A7BA3E5(func_612(iVar1, bParam1, 0));
			}
			else
			{
				UNK_0x3A820E495A7BA3E5(func_594(bParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			UNK_0x3A820E495A7BA3E5(func_594(bParam1, -2, 1, 0, 0));
		}
		UNK_0xD06AC7C87A34A6AD(func_707(&Var2));
		if (!bParam4)
		{
			iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_59(bParam1) };
			if (UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
			{
				iVar18 = 0;
				if (UNK_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_1131(&Var2) };
					}
					iVar0 = UNK_0x0D020422A92A2236(iVar19, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = UNK_0xDCEBC63DB246F9AE(iVar19, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_703(14, bParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_1131(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

bool func_1132()
{
	bool bVar0;

	bVar0 = func_57();
	if (Local_116.f_216 > -1)
	{
		if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(Local_116.f_216)))
		{
			bVar0 = UNK_0x117658E336116132(Local_116.f_216);
		}
	}
	return bVar0;
}

void func_1133(bool bParam0)
{
	vector3 vVar0;

	if (!UNK_0xE4EDC4B0E92C078B(iLocal_850))
	{
		vVar0 = { func_40() };
		iLocal_850 = UNK_0x6CC513A908911CF0(vVar0);
		if (bParam0)
		{
			UNK_0x661342B9651D16E2(iLocal_850, true);
		}
	}
}

bool func_1134(bool bParam0)
{
	vector3 vVar0;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar0, 0) < 50f)
	{
		return true;
	}
	if (UNK_0x0A059E0DB9253280(bParam0))
	{
		if (UNK_0x8E28E832BEAC3DCE(vVar0, 1f))
		{
			if (UNK_0xF649DD3BF44195C7(UNK_0x16F2683693E537C9(), bParam0, 17))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1135()
{
	int iVar0;

	if (!func_539())
	{
		if (func_451("DCONTRA_HLP1"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_451("DCONTRA_HLP2"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_451("DCONTRA_HLPCR"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_451("DCONTRA_HLPVCR"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return;
	}
	iVar0 = func_420(UNK_0xD803B885F5E47A62());
	if (iVar0 < 2)
	{
		if (func_451("DCONTRA_HLP1"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_451("DCONTRA_HLP2"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_451("DCONTRA_HLPVCR"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_451("DCONTRA_HLPCR"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, true))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 2))
	{
		if (!func_1137(86))
		{
			if (func_1027(0, 1, 1, 1))
			{
				if (UNK_0x57270EE11514DC67() == Local_116.f_218)
				{
					if (func_431())
					{
						func_459("DCONTRA_HLP3", -1);
					}
					else
					{
						func_459("DCONTRA_HLP1", -1);
					}
					func_458(1);
					UNK_0x5D96D8530B3D0904(&bLocal_739, 2);
				}
				else if (func_1176() == Local_116.f_218)
				{
					if (func_431())
					{
						func_459("DCONTRA_HLP4", -1);
					}
					else
					{
						func_459("DCONTRA_HLP2", -1);
					}
					func_458(1);
					UNK_0x5D96D8530B3D0904(&bLocal_739, 2);
				}
			}
		}
	}
	else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 8))
	{
		if (!func_431())
		{
			if (func_1027(0, 1, 1, 1))
			{
				if (func_643())
				{
					func_459("DCONTRA_HLPVCR", -1);
				}
				else
				{
					func_459("DCONTRA_HLPCR", -1);
				}
				func_458(1);
				UNK_0x5D96D8530B3D0904(&bLocal_739, 8);
			}
		}
	}
	if (func_431())
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 2))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 4))
			{
				if (func_1027(0, 1, 1, 1))
				{
					func_1136("DCONTRA_HLPLS", "DCONTRA_VBLP", -1);
					func_458(1);
					UNK_0x5D96D8530B3D0904(&bLocal_739, 4);
					UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_1136(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, false, iParam2);
}

bool func_1137(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

void func_1138()
{
	vector3 vVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 12))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar0 = { func_1139(func_1071(Local_116.f_197 + 1)) };
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar0, 1) <= 200f)
			{
				iLocal_747 = UNK_0xD68EA767274B7444();
				UNK_0xEB819BD1E585E9CB(iLocal_747, "Bell_02", vVar0, "ALARMS_SOUNDSET", false, 0, 0);
				UNK_0x5D96D8530B3D0904(&bLocal_739, 12);
			}
		}
	}
}

Vector3 func_1139(int iParam0)
{
	vector3 vVar0;

	func_1140(iParam0, &vVar0);
	return vVar0;
}

void func_1140(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

void func_1141()
{
	vector3 vVar0;

	if (func_431())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, true))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 13))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, 11))
		{
			vVar0 = { func_40() };
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar0) < 22500f)
			{
				UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), 11);
			}
		}
		if (func_539())
		{
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_851))
			{
				iLocal_851 = UNK_0x6CC513A908911CF0(func_40());
				UNK_0x661342B9651D16E2(iLocal_851, true);
			}
		}
		else if (UNK_0xE4EDC4B0E92C078B(iLocal_851))
		{
			UNK_0x142CC44DB769B57E(&iLocal_851);
		}
	}
	else if (UNK_0xE4EDC4B0E92C078B(iLocal_851))
	{
		UNK_0x142CC44DB769B57E(&iLocal_851);
	}
}

void func_1142()
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1, true))
	{
		if (!func_1175())
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 6))
			{
				func_250(1);
				UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_1), true);
			}
		}
	}
}

void func_1143()
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	bool bVar5;

	if (func_28())
	{
		return;
	}
	bVar3 = false;
	while (bVar3 < 10)
	{
		if (func_431())
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_2, bVar3))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_206, bVar3))
				{
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_1))
					{
						if (!func_24(Local_116.f_2[bVar3 /*10*/].f_1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								if (func_1176() == Local_116.f_218)
								{
									if (func_1150(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1)))
									{
										UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_2), bVar3);
									}
								}
							}
						}
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_3, bVar3))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_208, bVar3))
				{
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_2))
					{
						if (func_1149(bVar3))
						{
							UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_3), bVar3);
						}
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_4, bVar3))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_207, bVar3))
				{
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_1))
					{
						if (!func_24(Local_116.f_2[bVar3 /*10*/].f_1))
						{
							if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), true), 10f, true))
							{
								UNK_0x5D96D8530B3D0904(&(Local_386[UNK_0x57270EE11514DC67() /*11*/].f_4), bVar3);
							}
						}
					}
				}
			}
		}
		if (func_539())
		{
			if (!func_431())
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 13))
				{
					func_1145(Local_116.f_2[bVar3 /*10*/].f_1, &(Local_758[bVar3 /*8*/]), -1082130432 /* Float: -1f */, 0, 1, 0, 0, -1, -1, 1);
				}
			}
			else if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_1))
			{
				if (!func_24(Local_116.f_2[bVar3 /*10*/].f_1))
				{
					if (!UNK_0x405E212DDE472467(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), 0))
					{
						func_1145(Local_116.f_2[bVar3 /*10*/].f_1, &(Local_758[bVar3 /*8*/]), -1082130432 /* Float: -1f */, 0, 0, 0, 0, -1, -1, 1);
					}
				}
				else
				{
					func_1145(Local_116.f_2[bVar3 /*10*/].f_1, &(Local_758[bVar3 /*8*/]), -1082130432 /* Float: -1f */, 0, 0, 0, 0, -1, -1, 1);
				}
			}
		}
		switch (Local_116.f_2[bVar3 /*10*/].f_9)
		{
			case 1:
				if (UNK_0xBFF81ED3B99522C7())
				{
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_2))
					{
						if (func_13(Local_116.f_2[bVar3 /*10*/].f_2))
						{
							if (!func_24(Local_116.f_2[bVar3 /*10*/].f_1))
							{
								if (UNK_0x82CCEAB29E9451DD(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), UNK_0xB177666FAB6F4417(Local_116.f_2[bVar3 /*10*/].f_2)))
								{
									bVar5 = UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1);
									if (func_27(&bVar5))
									{
										if (UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), -258271821) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), -258271821) != 0)
										{
											UNK_0xE072601B4380E9DF(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), UNK_0xB177666FAB6F4417(Local_116.f_2[bVar3 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			case 2:
				if (UNK_0xBFF81ED3B99522C7())
				{
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_2))
					{
						if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_1))
						{
							if (func_13(Local_116.f_2[bVar3 /*10*/].f_2))
							{
								if (!func_24(Local_116.f_2[bVar3 /*10*/].f_1))
								{
									if (UNK_0x82CCEAB29E9451DD(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), UNK_0xB177666FAB6F4417(Local_116.f_2[bVar3 /*10*/].f_2)))
									{
										if ((UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), -258271821) != 1 && UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), -258271821) != 0) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_204, bVar3))
										{
											UNK_0xE072601B4380E9DF(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), UNK_0xB177666FAB6F4417(Local_116.f_2[bVar3 /*10*/].f_2), 30f, 786469);
											if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_204, bVar3))
											{
												UNK_0x0674E58A79778E99(&(Local_116.f_204), bVar3);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			case 3:
				if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_1))
				{
					if (!func_24(Local_116.f_2[bVar3 /*10*/].f_1))
					{
						iVar4 = UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), -828834893);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_273(Local_116.f_2[bVar3 /*10*/].f_1))
							{
								UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), true);
								UNK_0x75CDA8644CD3B5F5(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), 0, 0);
							}
						}
					}
				}
				break;
			case 5:
				break;
			case 4:
				break;
			case 7:
				if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_1))
				{
					if (!func_24(Local_116.f_2[bVar3 /*10*/].f_1))
					{
						iVar4 = UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), -1442466670);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_273(Local_116.f_2[bVar3 /*10*/].f_1))
							{
								if (UNK_0x526BC32A660C89E6(Local_116.f_2[bVar3 /*10*/].f_1))
								{
									UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), false);
									UNK_0x7C8478BF70C1E072(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			case 6:
				if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bVar3 /*10*/].f_1))
				{
					if (!func_24(Local_116.f_2[bVar3 /*10*/].f_1))
					{
						iVar4 = UNK_0xD1960163A3042274(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), 1120685857);
						if (iVar4 != 1 && iVar4 != 0)
						{
							UNK_0x11AD11297DC58CC7(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), false);
							vVar0 = { func_203() };
							UNK_0xA6EE5A339B240656(UNK_0x1B50683925F00106(Local_116.f_2[bVar3 /*10*/].f_1), vVar0, 250f, 0);
						}
					}
				}
				break;
		}
		bVar3++;
	}
	func_1144();
}

void func_1144()
{
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bLocal_1024 /*10*/].f_1))
	{
		if (!func_24(Local_116.f_2[bLocal_1024 /*10*/].f_1))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_1023, bLocal_1024))
			{
				UNK_0x4A13379C8009DF6F(Local_116.f_2[bLocal_1024 /*10*/].f_1, 1);
				UNK_0x5D96D8530B3D0904(&bLocal_1023, bLocal_1024);
			}
		}
	}
	bLocal_1024++;
	if (bLocal_1024 == 10)
	{
		bLocal_1024 = false;
	}
}

void func_1145(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (UNK_0xE9F78D191AD5EDBA(iParam0))
	{
		if (func_1148())
		{
			Global_2439138 = UNK_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_1147(UNK_0x1B50683925F00106(iParam0), bParam1, 1, Global_2439138, bParam4, bParam5, fParam2, bParam6, bParam7, iParam8, bParam9);
		}
		else
		{
			func_1147(UNK_0x1B50683925F00106(iParam0), bParam1, -1, Global_2439138, bParam4, bParam5, fParam2, bParam6, bParam7, iParam8, bParam9);
		}
	}
	else if (UNK_0xE4EDC4B0E92C078B(*bParam1))
	{
		func_1146(bParam1);
	}
}

void func_1146(bool bParam0)
{
	bool bVar0;
	struct<8> Var1;

	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
		bVar0 = true;
	}
	if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1))
	{
		UNK_0x142CC44DB769B57E(&(bParam0->f_1));
		bVar0 = true;
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_7))
	{
		if (!UNK_0x437347B10A200C4B(bParam0->f_7, 0))
		{
			if (UNK_0x3C583F939C836C5C(bParam0->f_7))
			{
				UNK_0xA29E145196B9739D(bParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*bParam0 = { Var1 };
	}
}

int func_1147(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = UNK_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0x3C583F939C836C5C(bParam0))
		{
			if (bParam8 == -1)
			{
				UNK_0xA29E145196B9739D(bParam0, 1);
			}
			else
			{
				UNK_0xE23B4401F4442A7E(bParam0, 1, bParam8);
			}
			bParam1->f_7 = bParam0;
			UNK_0x03E7282D82C7B3B6(bParam0, iParam2);
			UNK_0xF8BE15A7B963DB56(bParam0, fParam6);
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				UNK_0x2A065371C9D96655(*bParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			UNK_0xFABCB9076292E3BA(bParam0, iParam9);
		}
		UNK_0xF947FFD8DA795A7F(bParam0, bParam4);
		UNK_0xB46A36D2F28E60DE(bParam0, bParam5);
		*bParam1 = UNK_0x380B922C6BB1F223(bParam0);
		if (!iParam9 == -1)
		{
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				if (!bParam8 == -1)
				{
					UNK_0x61755AC17D8F538E(*bParam1, bParam8);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					UNK_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						UNK_0xD06AC7C87A34A6AD(bParam7);
					}
					else
					{
						UNK_0x6B012227B3921E18(bParam7);
					}
					UNK_0x4FA118D51B4F2476(*bParam1);
				}
				UNK_0x2A065371C9D96655(*bParam1, 7);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bParam1->f_6, 2))
		{
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				UNK_0x5D96D8530B3D0904(&(bParam1->f_6), 2);
			}
		}
		if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			bParam1->f_1 = UNK_0x498C79575FE5BBCE(bParam0);
			if (!UNK_0xEAE0D21A50E6C7F4(bParam1->f_6, 3))
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam1->f_1))
				{
					if (!bParam8 == -1)
					{
						UNK_0x61755AC17D8F538E(bParam1->f_1, bParam8);
					}
					if (!UNK_0xEA6BC48857E0AC4C(bParam7))
					{
						UNK_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							UNK_0xD06AC7C87A34A6AD(bParam7);
						}
						else
						{
							UNK_0x6B012227B3921E18(bParam7);
						}
						UNK_0x4FA118D51B4F2476(bParam1->f_1);
					}
					UNK_0x2A065371C9D96655(bParam1->f_1, 7);
					UNK_0x5D96D8530B3D0904(&(bParam1->f_6), 3);
				}
			}
			else if (!UNK_0xE4EDC4B0E92C078B(bParam1->f_1))
			{
				bParam1->f_1 = 0;
				UNK_0x0674E58A79778E99(&(bParam1->f_6), 3);
			}
		}
		else if (UNK_0xE4EDC4B0E92C078B(bParam1->f_1))
		{
			bParam1->f_1 = 0;
			UNK_0x0674E58A79778E99(&(bParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1148()
{
	return Global_1312854;
}

bool func_1149(bool bParam0)
{
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_2[bParam0 /*10*/].f_2))
	{
		if (func_13(Local_116.f_2[bParam0 /*10*/].f_2))
		{
			if (UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_116.f_2[bParam0 /*10*/].f_2), 0, 7000) || UNK_0x7B5606C651AB51B5(UNK_0xB177666FAB6F4417(Local_116.f_2[bParam0 /*10*/].f_2), 1, 40000))
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

bool func_1150(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	if (func_1151())
	{
		if (UNK_0x38AF5DD0BDDE9545(UNK_0xD803B885F5E47A62(), &bVar0))
		{
			if (UNK_0xEC560E589DF8370E(bVar0))
			{
				bVar1 = UNK_0x940C1429253D3B1B(bVar0);
				if (UNK_0xC844350D5D58C99A(bVar1))
				{
					if (!UNK_0x437347B10A200C4B(bVar1, 0))
					{
						if (UNK_0x405E212DDE472467(bVar1, 0))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_1151()
{
	return Global_1574404;
}

bool func_1152(bool bParam0)
{
	if (func_1154(1))
	{
		return true;
	}
	if (Global_2537071.f_5124.f_41)
	{
		Global_2537071.f_5124.f_41 = 0;
		return true;
	}
	if (bParam0)
	{
		if (func_378() == func_57() || !func_1292(func_378(), 0, 1))
		{
			return true;
		}
	}
	if (!func_551(UNK_0xD803B885F5E47A62()))
	{
		if (func_153(UNK_0xD803B885F5E47A62()) && func_1153())
		{
			return true;
		}
	}
	return false;
}

bool func_1153()
{
	switch (func_150(func_151(UNK_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1154(bool bParam0)
{
	bool bVar0;

	if (!func_651(1))
	{
		bVar0 = false;
		if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 != func_57())
		{
			if (func_1292(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 4 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 8) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_441(func_243(UNK_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_480(31);
				if (func_456(func_243(UNK_0xD803B885F5E47A62())))
				{
					func_480(81);
				}
				if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 != func_57() && UNK_0x40B8C182D63932FC(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57))
				{
					Global_1626725 = func_594(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_377(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57))
					{
						func_480(88);
					}
				}
				else
				{
					Global_1626725 = 1;
				}
				Global_1626709 = { Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_104 };
			}
			return true;
		}
	}
	return false;
}

void func_1155()
{
	if (!func_1156(UNK_0xD803B885F5E47A62()))
	{
		func_248(25);
	}
}

bool func_1156(bool bParam0)
{
	return func_247(bParam0, 25);
}

void func_1157()
{
	int iVar0;

	iVar0 = func_317(UNK_0xD803B885F5E47A62());
	bLocal_853 = func_315(iVar0);
}

void func_1158(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	float fVar0;

	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 != iParam0)
	{
		func_1172(-1);
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 = iParam0;
		if (func_1171() != -1)
		{
			func_1170(-1);
		}
		if (func_1169() != -1)
		{
			func_1168(-1);
		}
		func_1167(iParam2);
		func_1165(iParam0);
		if (!func_257(iParam0))
		{
			fVar0 = func_256(iParam0);
			if (fVar0 != 1f)
			{
				func_253(fVar0);
				UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), true);
			}
		}
		if (!func_260(iParam0) || bParam3)
		{
			if (func_258(iParam0, iParam2) && bParam3 == 1)
			{
				UNK_0x34D79252800B23FF(0);
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
				}
				UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), false);
			}
			else if (UNK_0x02A813E6E0380440() < 5)
			{
				UNK_0x51B096AAC60548C1(1f);
				UNK_0x34D79252800B23FF(5);
			}
		}
		if (func_428())
		{
			func_248(27);
		}
		if (bParam1)
		{
			if (!func_422())
			{
				func_250(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, true) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, false))
			{
				func_480(6);
			}
			func_1164();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			UNK_0x15EA7F4313456B1D(3, false);
			UNK_0x15EA7F4313456B1D(5, false);
		}
		if (func_271(UNK_0xD803B885F5E47A62()) && func_265(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 8);
		}
		func_1160();
		if (func_1159(iParam0))
		{
			UNK_0x15EA7F4313456B1D(3, false);
			UNK_0x15EA7F4313456B1D(5, false);
			UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), 6);
		}
		Global_2537071.f_6579 = 0;
	}
}

bool func_1159(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return true;
		default:
			break;
	}
	return false;
}

void func_1160()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_1163();
	bVar2 = func_58(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < 32)
	{
		bVar1 = UNK_0x117658E336116132(bVar0);
		if (UNK_0x40B8C182D63932FC(bVar1))
		{
			if (func_346(bVar1, bVar2, 1) || func_1161(bVar1, UNK_0xD803B885F5E47A62()))
			{
				UNK_0xD463D0CE3DC66332(UNK_0xD803B885F5E47A62(), bVar1, bVar3);
				UNK_0xD463D0CE3DC66332(bVar1, UNK_0xD803B885F5E47A62(), bVar3);
			}
		}
		bVar0++;
	}
}

bool func_1161(bool bParam0, bool bParam1)
{
	if (func_313(bParam0, 1) && func_313(bParam1, 1))
	{
		return (func_1162(bParam0) == func_58(bParam1) || func_1162(bParam1) == func_58(bParam0));
	}
	return false;
}

bool func_1162(bool bParam0)
{
	if (func_313(bParam0, 1))
	{
		return Global_1628237[func_58(bParam0) /*615*/].f_11.f_484;
	}
	return func_57();
}

bool func_1163()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_653();
	if (bVar0 != func_57())
	{
		if (func_1292(bVar0, 0, 1))
		{
			bVar1 = bVar0;
			if (bVar1 != -1)
			{
				return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar1 /*615*/].f_1, 16);
			}
		}
	}
	return false;
}

void func_1164()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, true))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), true);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 4))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 4);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 6))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 6);
	}
	UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), false);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_4555), 2);
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		UNK_0x34D79252800B23FF(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

void func_1165(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_517(3791, -1, 0);
	bVar1 = func_1166(iParam0);
	if (bVar1 != -1)
	{
		UNK_0x5D96D8530B3D0904(&bVar0, bVar1);
		func_516(3791, bVar0, -1, 1, 0);
	}
}

int func_1166(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		case 166:
			return 1;
		case 171:
			return 2;
		case 172:
			return 3;
		case 173:
			return 4;
		case 214:
			return 5;
		case 215:
			return 6;
		case 216:
			return 7;
		case 217:
			return 8;
		case 218:
			return 9;
		case 219:
			return 10;
		case 220:
			return 11;
		case 221:
			return 12;
		default:
			break;
	}
	return -1;
}

void func_1167(int iParam0)
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	if (Global_1628237[iVar0 /*615*/].f_11.f_181 != iParam0)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_181 = iParam0;
	}
}

void func_1168(int iParam0)
{
	if (Global_2537071.f_5124.f_340 != iParam0)
	{
		Global_2537071.f_5124.f_340 = iParam0;
	}
}

int func_1169()
{
	return Global_2537071.f_5124.f_340;
}

void func_1170(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_1171()
{
	return Global_2537071.f_5124.f_339;
}

void func_1172(int iParam0)
{
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_32 = iParam0;
}

int func_1173()
{
	struct<4> Var0;
	int iVar4;

	if (Local_116.f_196 != -1)
	{
		return Local_116.f_196;
	}
	Var0 = { func_1174() };
	Local_116.f_198 = func_537(Var0);
	Local_116.f_197 = (Var0 - 1);
	if (Local_116.f_197 < 0)
	{
		Local_116.f_197 = 0;
	}
	if (Local_116.f_196 == -1)
	{
		iVar4 = UNK_0x09AC81E49EA267F7(false, 10);
		if (iVar4 > 7)
		{
			Local_116.f_196 = 99;
		}
		else
		{
			Local_116.f_196 = 0;
		}
		if (Global_262145.f_15219 && Local_116.f_196 == 0)
		{
			Local_116.f_196 = 99;
		}
		else if (Global_262145.f_15218 && Local_116.f_196 == 99)
		{
			Local_116.f_196 = 0;
		}
	}
	return Local_116.f_196;
}

struct<4> func_1174()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_182;
}

bool func_1175()
{
	int iVar0;

	iVar0 = func_1176();
	if (iVar0 > -1)
	{
		if (Local_116.f_218 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_1176()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = UNK_0x57270EE11514DC67();
	bVar1 = UNK_0xD803B885F5E47A62();
	if (func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar0 = func_430();
		bVar1 = Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_740;
	}
	if (Local_386[iVar0 /*11*/].f_10 != -1)
	{
		return Local_386[iVar0 /*11*/].f_10;
	}
	if (func_264(bVar1))
	{
		Local_386[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_116.f_218)
		{
			func_953(1);
		}
	}
	else if (func_313(bVar1, 1))
	{
		bVar2 = func_653();
		if (bVar2 != func_57())
		{
			if (UNK_0xFB75B0F82CA525F6(bVar2))
			{
				Local_386[iVar0 /*11*/].f_10 = UNK_0x7B9C1F53FE442D06(bVar2);
			}
		}
	}
	return Local_386[iVar0 /*11*/].f_10;
}

bool func_1177()
{
	if (func_431())
	{
		if (!func_65())
		{
			return false;
		}
	}
	return true;
}

int func_1178()
{
	return Local_116;
}

int func_1179(int iParam0)
{
	return Local_386[iParam0 /*11*/];
}

bool func_1180()
{
	var uVar0;

	func_1185(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_1184())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_1183())
	{
		return true;
	}
	if (func_1182(159))
	{
		if (!func_1181())
		{
			return true;
		}
	}
	if (func_1182(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_254() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_254()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1181()
{
	return Global_2450632.f_598;
}

bool func_1182(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1183()
{
	return Global_2460680;
}

bool func_1184()
{
	return Global_2450632.f_593;
}

void func_1185(var uParam0)
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
					func_1186(iVar0);
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

void func_1186(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_1292(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_1187(bVar4, &bVar5))
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

bool func_1187(bool bParam0, bool bParam1)
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

void func_1188()
{
	SYSTEM::WAIT(0);
}

void func_1189()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 18))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_739, 6))
			{
				if (UNK_0x8CD06866876216F2())
				{
					if (func_1175() || func_429())
					{
						func_781(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_739, 6);
					}
				}
			}
			uVar0 = Local_116.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_116.f_197 + 1;
			iVar4 = Local_116.f_198;
			iVar5 = -1;
			bVar6 = !func_431();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_116.f_213;
			if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, true) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 3) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 9)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 15)) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_1, 5))
			{
				iVar7 = 0;
			}
			if (UNK_0x8CD06866876216F2())
			{
				Global_1674356.f_2 = Local_116.f_267;
				Global_1674356.f_3 = Local_116.f_268;
				func_1236(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_479();
	if (UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9()) == bLocal_744)
	{
		UNK_0x6DF7BF67E86AAE86(UNK_0x16F2683693E537C9(), bLocal_746);
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			UNK_0x2952D66A502EA873(Local_116.f_261, 1);
		}
		func_476();
	}
	func_1235();
	if (Local_116.f_219 != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_739, 5))
		{
			if (UNK_0x40B8C182D63932FC(UNK_0x117658E336116132(Local_116.f_219)))
			{
				func_474(UNK_0x117658E336116132(Local_116.f_219), 432, 0, 0);
				func_473(UNK_0x117658E336116132(Local_116.f_219), 1, 0, 0);
				func_472(UNK_0x117658E336116132(Local_116.f_219), 0, 0, 0);
				func_471(UNK_0x117658E336116132(Local_116.f_219), 0);
				func_468(UNK_0x117658E336116132(Local_116.f_219), Global_262145.f_12355, 0, 0);
			}
		}
	}
	if (func_218(0))
	{
		func_217(0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_740, false))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_740, 2))
		{
			UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
			UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
		}
	}
	UNK_0x5D96D8530B3D0904(&bLocal_740, 8);
	func_213();
	UNK_0x74ECD24F904DEAD4(1);
	func_953(0);
	func_1234(&(Local_116.f_269), 1);
	func_1191(1, 0);
	if (!func_34(UNK_0xD803B885F5E47A62(), 0))
	{
		UNK_0x34D79252800B23FF(5);
	}
	func_1190();
}

void func_1190()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_1191(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1366905.f_1.f_108 != 0)
	{
		Global_1366905.f_1.f_108 = 0;
	}
	Global_1366905.f_1.f_109 = -1;
	Global_1366905.f_1.f_110 = -1;
	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 167 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 168)
	{
		func_1232();
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 4);
	}
	if ((func_630() && iParam1 != 0) && Global_262145.f_16981)
	{
		if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 190 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 192)
		{
			func_1214(UNK_0xD803B885F5E47A62(), iParam1, 1, 0);
		}
	}
	if (((Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 164 || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 208) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 250) || Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 == 237)
	{
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
	}
	if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 != -1)
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33 = -1;
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 14) && !func_271(UNK_0xD803B885F5E47A62()))
		{
			func_250(0);
		}
	}
	else if (func_1212(UNK_0xD803B885F5E47A62()) != -1)
	{
		func_1172(-1);
	}
	func_1211(func_57());
	if (func_218(16))
	{
		func_217(16);
	}
	func_1208(0);
	func_1167(-1);
	func_1207();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1206(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1204(iVar1);
		iVar1++;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, false))
	{
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x34D79252800B23FF(5);
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), false);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 5))
	{
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 5);
	}
	iVar2 = func_463();
	if ((func_343(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1203(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_439(iVar2))
	{
		func_1200(-1, 1);
	}
	else if (((((func_462(iVar2) || func_1199(iVar2)) || func_1198(iVar2)) || func_559(iVar2)) || func_557(iVar2)) || func_555(iVar2))
	{
	}
	else
	{
		func_1200(-1, 1);
	}
	func_246(19);
	func_246(20);
	func_246(21);
	func_246(22);
	func_246(27);
	func_217(3);
	func_217(4);
	func_217(7);
	func_1197();
	if (func_265(UNK_0xD803B885F5E47A62()))
	{
		func_953(0);
	}
	func_246(29);
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 = func_57();
	if (Global_2537071.f_5124.f_41 != 0)
	{
		Global_2537071.f_5124.f_41 = 0;
	}
	if (bParam0)
	{
		func_219();
	}
	if (!func_271(UNK_0xD803B885F5E47A62()))
	{
		func_245();
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), true);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 6))
	{
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 6);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 7))
	{
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 7);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 8))
	{
		func_1196("IMPEXP_SELFDES", 0);
		func_1194("IMPEXP_SELFDES");
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 8);
	}
	func_1192(iVar2, 0);
}

void func_1192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
		{
			UNK_0x8BC9595FD2792B5D(func_1193(iParam0));
			UNK_0x5D96D8530B3D0904(&(Global_1674347.f_3), 9);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, 9))
	{
		UNK_0x8910D3D58E0132B8(func_1193(iParam0));
		UNK_0x0674E58A79778E99(&(Global_1674347.f_3), 9);
	}
}

char* func_1193(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		default:
			break;
	}
	return "";
}

void func_1194(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!UNK_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), bParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_941();
					Global_111638.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_1195(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					UNK_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

bool func_1195(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return true;
	}
	return false;
}

void func_1196(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!UNK_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), bParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111638.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111638.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111638.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111638.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111638.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111638.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1197()
{
	if (func_1156(UNK_0xD803B885F5E47A62()))
	{
		func_246(25);
	}
}

bool func_1198(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1199(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return true;
	}
	return false;
}

void func_1200(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_463();
	}
	if (iParam0 > 0)
	{
		if (func_653() != func_57())
		{
			if (func_552(UNK_0xD803B885F5E47A62()) == UNK_0xD803B885F5E47A62())
			{
				Global_2514606.f_93[func_1202(iParam0)] = 1;
			}
		}
		iVar0 = func_1202(159);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(157);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(148);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(164);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(142);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(152);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(166);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(170);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(173);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(179);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(200);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(201);
		if (func_1201(iVar0, Global_262145.f_12606, bParam1))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(182);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(183);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(185);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(186);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(180);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(195);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(197);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(198);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(207);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(208);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(209);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(214);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(215);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(216);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(217);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(218);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(219);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(220);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(221);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_1201(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_247(UNK_0xD803B885F5E47A62(), 19) && !func_247(UNK_0xD803B885F5E47A62(), 20)) && !func_247(UNK_0xD803B885F5E47A62(), 9))
		{
			return false;
		}
	}
	if (Global_2514606.f_93[iParam0] == 1 && func_11(&(Global_2514606[iParam0 /*2*/])))
	{
		if (func_618(&(Global_2514606[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2514606.f_93[iParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_1202(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		case 157:
			return 12;
		case 148:
			return 13;
		case 164:
			return 14;
		case 142:
			return 15;
		case 152:
			return 16;
		case 163:
			return 17;
		case 155:
			return 18;
		case 160:
			return 19;
		case 153:
			return 20;
		case 162:
			return 21;
		case 154:
			return 22;
		case 166:
			return 8;
		case 170:
			return 9;
		case 173:
			return 10;
		case 171:
			return 23;
		case 172:
			return 24;
		case 179:
			return 25;
		case 189:
			return 26;
		case 193:
			return 27;
		case 194:
			return 28;
		case 199:
			return 29;
		case 201:
			return 30;
		case 200:
			return 31;
		case 205:
			return 32;
		case 210:
			return 33;
		case 182:
			return 34;
		case 183:
			return 35;
		case 185:
			return 36;
		case 186:
			return 37;
		case 180:
			return 38;
		case 195:
			return 39;
		case 197:
			return 40;
		case 198:
			return 41;
		case 207:
			return 42;
		case 208:
			return 43;
		case 209:
			return 44;
		case 211:
			return 45;
		case 214:
			return 0;
		case 215:
			return 1;
		case 216:
			return 2;
		case 217:
			return 3;
		case 218:
			return 4;
		case 219:
			return 5;
		case 220:
			return 6;
		case 221:
			return 7;
		default:
			break;
	}
	return -1;
}

void func_1203(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_463();
	}
	if (iParam0 > 0)
	{
		if (func_653() != func_57())
		{
			Global_2514606.f_93[func_1202(iParam0)] = 1;
		}
		iVar0 = func_1202(155);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(163);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(160);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(153);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(162);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(154);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(171);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(172);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(199);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(194);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(193);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(210);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(205);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(189);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1202(211);
		if (func_1201(iVar0, Global_262145.f_12607, 0))
		{
			func_9(&(Global_2514606[iVar0 /*2*/]));
			func_10(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1204(int iParam0)
{
	if (!func_61(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_337[iParam0 /*3*/], func_1205(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_337[iParam0 /*3*/] = { func_1205() };
	}
	if (!func_61(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_324[iParam0 /*3*/], func_1205(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_324[iParam0 /*3*/] = { func_1205() };
	}
}

Vector3 func_1205()
{
	vector3 vVar0;

	return vVar0;
}

void func_1206(int iParam0)
{
	if (!func_61(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_150[iParam0 /*3*/], func_1205(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_150[iParam0 /*3*/] = { func_1205() };
	}
	if (!func_61(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_125[iParam0 /*3*/], func_1205(), 0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_125[iParam0 /*3*/] = { func_1205() };
	}
}

void func_1207()
{
	struct<20> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573902 = { Var0 };
	Global_1573902.f_13 = func_57();
	if (UNK_0xEAE0D21A50E6C7F4(Global_1573344, 3))
	{
		UNK_0x0674E58A79778E99(&Global_1573344, 3);
	}
}

void func_1208(bool bParam0)
{
	if (bParam0)
	{
		if (!func_580(UNK_0xD803B885F5E47A62(), 14))
		{
			func_1210(14);
		}
	}
	else if (func_580(UNK_0xD803B885F5E47A62(), 14))
	{
		func_1209(14);
	}
}

void func_1209(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_5), bParam0);
}

void func_1210(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_5), bParam0);
}

void func_1211(bool bParam0)
{
	if (func_264(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xD803B885F5E47A62() != bParam0)
		{
			if (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_484 != bParam0)
			{
				Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_484 = bParam0;
				if (bParam0 != func_57())
				{
				}
			}
		}
	}
}

int func_1212(int iParam0)
{
	if (func_1213(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_32;
	}
	return -1;
}

bool func_1213(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_32 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_33 != -1))
	{
		return true;
	}
	return false;
}

void func_1214(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_754(bParam0, bParam1) && func_1231(bParam0, bParam1))
	{
		iVar0 = func_753(bParam0, bParam1);
		func_1218(iVar0, bParam2, bParam3);
		func_1215(iVar0, 1);
	}
}

void func_1215(int iParam0, bool bParam1)
{
	if (!func_1217(iParam0))
	{
		return;
	}
	func_738(func_1216(iParam0), bParam1, -1, 1);
	Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_1216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		case 1:
			return 7629;
		case 2:
			return 7630;
		case 3:
			return 7631;
		case 4:
			return 7632;
		case 5:
			return 15373;
		default:
			break;
	}
	return 7628;
}

bool func_1217(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1218(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	bVar1 = false;
	iVar2 = func_1036(UNK_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_1230(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_1229(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_1228(iParam0, 0, bParam2);
	}
	else if (func_1226(iParam0, bParam2))
	{
		iVar0 = func_1225(iVar2, 0);
		iVar3 = func_874(UNK_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_1224(iVar2, bParam2);
		iVar5 = func_1225(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1223(iVar2) && func_1222(UNK_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1230(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1221(UNK_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_1220(iParam0, (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_1224(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1225(iVar2, bParam2) / func_1221(UNK_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1223(iVar2) && func_1222(UNK_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1219(UNK_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_1219(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == func_57())
	{
		return;
	}
	if (func_745(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590535[iParam0 /*876*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1220(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1221(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_745(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1222(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_745(iParam1) && func_1223(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1223(int iParam0)
{
	return func_648(iParam0) == 5;
}

int func_1224(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = func_648(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16950;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16955;
			}
			break;
		case 3:
			uVar0 = Global_262145.f_16949;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16954;
			}
			break;
		case 4:
			uVar0 = Global_262145.f_16948;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16953;
			}
			break;
		case 0:
			uVar0 = Global_262145.f_16946;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16951;
			}
			break;
		case 2:
			uVar0 = Global_262145.f_16947;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16952;
			}
			break;
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21074;
				if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21075;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21058;
				if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21059;
				}
			}
			break;
	}
	return uVar0;
}

int func_1225(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_648(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16942);
			}
			break;
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21071;
			}
			else
			{
				iVar0 = Global_262145.f_21055;
			}
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21072);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21056);
				}
			}
			if (func_752(UNK_0xD803B885F5E47A62(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21073);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21057);
				}
			}
			if (func_1222(UNK_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1226(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_739(15384, -1, -1);
	}
	return func_739(func_1227(iParam0), -1, -1);
}

int func_1227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		case 1:
			return 9417;
		case 2:
			return 9418;
		case 3:
			return 9419;
		case 4:
			return 9420;
		case 5:
			return 15372;
		default:
			break;
	}
	return 9416;
}

void func_1228(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_738(15384, bParam1, -1, 1);
		return;
	}
	func_738(func_1227(iParam0), bParam1, -1, 1);
}

int func_1229(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_2513475[iParam0];
	iVar1 = func_1036(UNK_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_1223(iVar1))
	{
		if (func_1222(UNK_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1230(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

bool func_1231(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_754(bParam0, bParam1))
	{
		iVar0 = func_753(bParam0, bParam1);
		if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return true;
		}
	}
	return false;
}

void func_1232()
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 28);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 29);
	func_1233(24);
}

void func_1233(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

void func_1234(var uParam0, bool bParam1)
{
	if (UNK_0xE747DBC9E7A85AD6(*uParam0))
	{
		UNK_0xC192404B7F867164(*uParam0, bParam1);
	}
}

void func_1235()
{
	UNK_0x51732B934211201A(bLocal_745);
	UNK_0x51732B934211201A(bLocal_744);
}

void func_1236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bool bVar0;
	struct<24> Var1;
	bool bVar25;
	struct<25> Var26;
	struct<25> Var51;
	struct<26> Var76;

	bVar0 = UNK_0xBB0808A181D4745C();
	bVar25 = func_58(UNK_0xD803B885F5E47A62());
	Var1 = Global_1674356;
	Var1.f_1 = Global_1674356.f_1;
	Var1.f_4 = Global_1674356.f_4;
	Var1.f_5 = Global_1674356.f_5;
	Var1.f_6 = Global_1674356.f_6;
	Var1.f_7 = Global_1674356.f_7;
	Var1.f_8 = Global_1674356.f_8;
	Var1.f_9 = Global_1674356.f_9;
	Var1.f_10 = Global_1674356.f_10;
	Var1.f_2 = Global_1674356.f_2;
	Var1.f_3 = Global_1674356.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = iParam2;
	Var1.f_13 = uParam0;
	Var1.f_14 = func_1243();
	Var1.f_16 = iParam1;
	Var1.f_21 = iParam7;
	Var1.f_22 = iParam8;
	if (func_643())
	{
		Var1.f_23 = func_884(UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 4));
	}
	else
	{
		Var1.f_23 = 0;
	}
	if (bVar25 != func_57() && UNK_0x40B8C182D63932FC(bVar25))
	{
		Var1.f_17 = iParam4;
		Var1.f_18 = func_1242(bVar25, iParam3);
		Var1.f_19 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iParam4) / SYSTEM::TO_FLOAT(func_534(iParam3))) * 100f));
		Var1.f_20 = (100 - SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_1239(iParam3, bVar25)) / SYSTEM::TO_FLOAT(func_534(iParam3))) * 100f)));
		Var1.f_15 = func_1238(bVar25);
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_SELL"))
		{
			Var26 = { Var1 };
			Var26.f_24 = iParam5;
			UNK_0xB2C6F2D1ADA25EA2(&Var26);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_BUY"))
		{
			UNK_0x7573782929A248D5(&Var1);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (bParam9 == 1)
			{
				Var51 = { Var1 };
				Var51.f_24 = iParam5;
				UNK_0xD5112DBEED0795C6(&Var51);
			}
			else
			{
				Var76 = { Var1 };
				Var76.f_24 = iParam5;
				Var76.f_25 = iParam6;
				UNK_0xA38EDB80F9C720C6(&Var76);
			}
		}
	}
	func_1237();
}

void func_1237()
{
	struct<18> Var0;

	Global_1674356 = { Var0 };
}

int func_1238(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590535[bParam0 /*876*/].f_274.f_106[iVar0 /*3*/] > 0 && Global_1590535[bParam0 /*876*/].f_274.f_106[iVar0 /*3*/] <= 22)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1239(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_1241(bParam1, iParam0))
	{
		iVar0 = func_1240(iParam0, bParam1);
		iVar1 = func_533(iParam0);
		if (iVar1 == 2)
		{
			return (111 - iVar0);
		}
		else if (iVar1 == 1)
		{
			return (42 - iVar0);
		}
		else
		{
			return (16 - iVar0);
		}
	}
	return 0;
}

int func_1240(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1590535[bParam1 /*876*/].f_274.f_106[iVar0 /*3*/])
			{
				return Global_1590535[bParam1 /*876*/].f_274.f_106[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1241(bool bParam0, bool bParam1)
{
	int iVar0;

	if (bParam0 == func_57())
	{
		return false;
	}
	if (func_42(bParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_106[iVar0 /*3*/] == bParam1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_1242(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1590535[bParam0 /*876*/].f_274.f_106[iVar0 /*3*/])
			{
				return Global_1590535[bParam0 /*876*/].f_274.f_106[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_1243()
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar2 = func_58(UNK_0xD803B885F5E47A62());
	if (bVar2 != func_57())
	{
		bVar1 = true;
		while (bVar1 <= 22)
		{
			if (func_1241(bVar2, bVar1))
			{
				UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
			}
			bVar1++;
		}
	}
	return uVar0;
}

void func_1244(struct<21> Param0)
{
	func_1290(func_1291(Param0), Param0);
	UNK_0x0BEC04ECA8485A3A(10);
	UNK_0x28E5F00F131890E3(3);
	func_1289(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_116, 270);
	UNK_0x35B62793EAE9ADDF(&Local_386, 353);
	if (!func_1288())
	{
		func_1189();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x256D93AFAE851A7A(0);
		if (UNK_0xBFF81ED3B99522C7())
		{
		}
		func_1285();
		func_1245(0, 0, 0);
		Local_386[UNK_0x57270EE11514DC67() /*11*/] = 0;
	}
	else
	{
		func_1189();
	}
}

void func_1245(int iParam0, bool bParam1, bool bParam2)
{
	func_1284();
	if (func_551(UNK_0xD803B885F5E47A62()))
	{
		func_1248(1);
	}
	if ((iParam0 != 0 && UNK_0x40B8C182D63932FC(bParam1)) && func_1247(bParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				UNK_0x5D96D8530B3D0904(&Global_1674342, false);
				break;
		}
	}
	if (!func_643() && !func_313(UNK_0xD803B885F5E47A62(), 1))
	{
		if (func_425())
		{
			func_249(3);
		}
	}
	func_249(4);
	if (func_651(0))
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_57 = func_653();
	}
	if (func_456(iParam0))
	{
		func_872();
		Global_1674374.f_18 = func_852(func_378());
	}
	else if (func_461(func_1212(UNK_0xD803B885F5E47A62())))
	{
		func_870();
		Global_1674428.f_18 = func_852(func_378());
	}
	if (bParam2)
	{
		if (!func_422())
		{
			func_250(1);
		}
	}
	func_1246();
}

void func_1246()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366905.f_534[iVar0 /*42*/].f_1 = func_57();
		Global_1366905.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

bool func_1247(bool bParam0, bool bParam1)
{
	return func_346(UNK_0xD803B885F5E47A62(), bParam0, bParam1);
}

void func_1248(bool bParam0)
{
	int iVar0;

	func_1233(33);
	func_1233(34);
	func_1233(35);
	func_1233(36);
	func_1233(37);
	func_1233(38);
	func_1233(39);
	func_1233(40);
	func_1233(43);
	func_1233(41);
	func_1233(54);
	func_1233(42);
	func_1233(47);
	func_1283(23);
	func_1283(24);
	func_1233(92);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_1737), 2);
	func_1282();
	func_1277();
	func_1272();
	func_1267();
	func_1258();
	func_1254();
	func_1250();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1249(3))
	{
		func_1283(3);
	}
	else if (func_1249(4))
	{
		func_1283(4);
	}
	else if (func_1249(5))
	{
		func_1283(5);
	}
	else if (func_1249(6))
	{
		func_1283(6);
	}
	else if (func_1249(7))
	{
		func_1283(7);
	}
	else if (((((((((((((((((func_1249(0) || func_1249(1)) || func_1249(2)) || func_1249(8)) || func_1249(9)) || func_1249(10)) || func_1249(11)) || func_1249(12)) || func_1249(13)) || func_1249(14)) || func_1249(15)) || func_1249(16)) || func_1249(17)) || func_1249(18)) || func_1249(19)) || func_1249(20)) || func_1249(21)) || func_1249(22))
	{
		func_1283(8);
		func_1283(0);
		func_1283(1);
		func_1283(2);
		func_1283(9);
		func_1283(10);
		func_1283(11);
		func_1283(12);
		func_1283(13);
		func_1283(14);
		func_1283(15);
		func_1283(16);
		func_1283(17);
		func_1283(18);
		func_1283(19);
		func_1283(20);
		func_1283(21);
		func_1283(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1249(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_14[iVar0], bVar1);
}

void func_1250()
{
	if (func_1252())
	{
		func_1251(0);
		func_1251(1);
		func_1251(2);
		func_1251(3);
	}
}

void func_1251(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_33[iVar0]), bVar1);
}

bool func_1252()
{
	if (((func_1253(0) || func_1253(1)) || func_1253(2)) || func_1253(3))
	{
		return true;
	}
	return false;
}

bool func_1253(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_33[iVar0], bVar1);
}

void func_1254()
{
	if (func_1256())
	{
		func_1255(4);
		func_1255(5);
		func_1255(6);
		func_1255(7);
	}
}

void func_1255(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_31[iVar0]), bVar1);
}

bool func_1256()
{
	if (((func_1257(4) || func_1257(5)) || func_1257(6)) || func_1257(7))
	{
		return true;
	}
	return false;
}

bool func_1257(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_31[iVar0], bVar1);
}

void func_1258()
{
	bool bVar0;

	if (func_1266())
	{
		func_1265(8);
		func_1265(9);
		func_1265(10);
		func_1265(12);
		func_1265(13);
		func_1265(14);
		func_1265(19);
		func_1265(20);
		func_1265(21);
		func_1265(22);
		func_1265(23);
		func_1265(24);
		func_1265(25);
		func_1265(26);
		func_1265(15);
		func_1265(16);
		func_1265(17);
		func_1265(18);
		func_1265(35);
		func_1265(45);
		func_1265(46);
		if (func_1264(11))
		{
			func_1265(11);
			bVar0 = func_517(7226, -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, 2);
			func_516(7226, bVar0, -1, 1, 0);
		}
	}
	if (func_1264(48))
	{
		if (func_1262(151, 3))
		{
			func_1260(151, 3);
		}
		func_1265(48);
	}
	if (func_1264(49))
	{
		if (func_1262(152, 3))
		{
			func_1260(152, 3);
		}
		func_1265(49);
	}
	if (func_1264(50))
	{
		if (func_1262(153, 3))
		{
			func_1260(153, 3);
		}
		func_1265(50);
	}
	if (func_1264(51))
	{
		if (func_1262(func_1259(), 3))
		{
			func_1260(func_1259(), 3);
		}
		func_1265(51);
	}
}

int func_1259()
{
	if (func_950())
	{
		func_949(154, Global_19486, 1);
	}
	return 154;
}

void func_1260(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1261(iParam0, iVar0, 0);
			func_949(iParam0, iVar0, 0);
		}
	}
}

void func_1261(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

bool func_1262(int iParam0, int iParam1)
{
	if (func_1263(iParam0, iParam1) == 1)
	{
		return true;
	}
	return false;
}

int func_1263(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_1264(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_26[iVar0], bVar1);
}

void func_1265(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_26[iVar0]), bVar1);
}

bool func_1266()
{
	if (((((((((((((((((((((func_1264(8) || func_1264(9)) || func_1264(10)) || func_1264(12)) || func_1264(11)) || func_1264(13)) || func_1264(14)) || func_1264(19)) || func_1264(20)) || func_1264(21)) || func_1264(22)) || func_1264(23)) || func_1264(24)) || func_1264(25)) || func_1264(26)) || func_1264(15)) || func_1264(16)) || func_1264(17)) || func_1264(18)) || func_1264(35)) || func_1264(45)) || func_1264(46))
	{
		return true;
	}
	return false;
}

void func_1267()
{
	if (func_1271())
	{
		func_1270(0);
		func_1270(1);
		func_1270(2);
		func_1270(3);
		func_1270(4);
		func_1270(5);
		if (func_1269(32))
		{
			if (func_1262(func_1268(), 3))
			{
				func_1260(func_1268(), 3);
			}
			func_1270(32);
		}
	}
}

int func_1268()
{
	if (func_950())
	{
		func_949(12, Global_19486, 1);
	}
	return 12;
}

bool func_1269(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_23[iVar0], bVar1);
}

void func_1270(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_23[iVar0]), bVar1);
}

bool func_1271()
{
	if ((((func_1269(1) || func_1269(0)) || func_1269(2)) || func_1269(4)) || func_1269(5))
	{
		return true;
	}
	return false;
}

void func_1272()
{
	if (func_1276())
	{
		func_1275(0);
		func_1275(1);
		func_1275(2);
		func_1275(3);
		func_1275(4);
		func_1275(5);
		func_1275(6);
		func_1275(7);
		if (func_1274(8))
		{
			func_1275(8);
		}
		if (func_1274(15))
		{
			if (func_1262(func_1273(), 3))
			{
				func_1260(func_1273(), 3);
			}
			func_1275(15);
		}
	}
}

int func_1273()
{
	if (func_950())
	{
		func_949(20, Global_19486, 1);
	}
	return 20;
}

bool func_1274(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_21[iVar0], bVar1);
}

void func_1275(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_21[iVar0]), bVar1);
}

bool func_1276()
{
	if ((((((((func_1274(0) || func_1274(1)) || func_1274(2)) || func_1274(3)) || func_1274(4)) || func_1274(5)) || func_1274(6)) || func_1274(7)) || func_1274(8))
	{
		return true;
	}
	return false;
}

void func_1277()
{
	if (func_1281())
	{
		func_1280(0);
		func_1280(1);
		func_1280(2);
		func_1280(3);
		func_1280(4);
		func_1280(5);
		func_1280(6);
		func_1280(7);
		func_1280(8);
		func_1280(9);
		func_1280(10);
		func_1280(11);
		func_1280(12);
		if (func_1279(13))
		{
			if (func_1262(func_1278(), 3))
			{
				func_1260(func_1278(), 3);
			}
			func_1280(13);
		}
	}
}

int func_1278()
{
	if (func_950())
	{
		func_949(76, Global_19486, 1);
	}
	return 76;
}

bool func_1279(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_19[iVar0], bVar1);
}

void func_1280(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_19[iVar0]), bVar1);
}

bool func_1281()
{
	if ((((((((((((func_1279(0) || func_1279(1)) || func_1279(2)) || func_1279(3)) || func_1279(4)) || func_1279(5)) || func_1279(6)) || func_1279(7)) || func_1279(8)) || func_1279(9)) || func_1279(10)) || func_1279(11)) || func_1279(12))
	{
		return true;
	}
	return false;
}

void func_1282()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2537071.f_5124.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1283(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x0674E58A79778E99(&(Global_2537071.f_5124.f_14[iVar0]), bVar1);
}

void func_1284()
{
	struct<14> Var0;

	Global_1674356 = { Var0 };
	Global_1674356.f_14 = 0;
	Global_1674356.f_15 = 0;
}

void func_1285()
{
	int iVar0;

	UNK_0xF63400DBE3303D26("relDefendPlayer", &bLocal_744);
	UNK_0xF63400DBE3303D26("relDefendAI", &bLocal_745);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		UNK_0x0E2400AB9174FA81(1, Global_1574967[iVar0], bLocal_744);
		UNK_0x0E2400AB9174FA81(1, bLocal_744, Global_1574967[iVar0]);
		UNK_0x0E2400AB9174FA81(1, Global_1574967[iVar0], bLocal_745);
		UNK_0x0E2400AB9174FA81(1, bLocal_745, Global_1574967[iVar0]);
		UNK_0x0E2400AB9174FA81(1, bLocal_744, joaat("COP"));
		UNK_0x0E2400AB9174FA81(1, joaat("COP"), bLocal_744);
		UNK_0x0E2400AB9174FA81(1, bLocal_744, Global_1575015[5]);
		UNK_0x0E2400AB9174FA81(1, Global_1575015[5], bLocal_744);
		UNK_0x0E2400AB9174FA81(1, bLocal_744, Global_1575000);
		UNK_0x0E2400AB9174FA81(1, Global_1575000, bLocal_744);
		iVar0++;
	}
	UNK_0x0E2400AB9174FA81(5, bLocal_744, bLocal_745);
	UNK_0x0E2400AB9174FA81(5, bLocal_745, bLocal_744);
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_CULT"), bLocal_745);
	UNK_0x0E2400AB9174FA81(5, joaat("AMBIENT_GANG_CULT"), bLocal_744);
	func_1287(1, &bLocal_745);
	func_1286(&bLocal_745);
	func_1286(&bLocal_744);
}

void func_1286(bool bParam0)
{
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_LOST"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_LOST"));
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_MEXICAN"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_MEXICAN"));
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_FAMILY"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_FAMILY"));
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_MARABUNTE"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_MARABUNTE"));
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_CULT"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_CULT"));
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_SALVA"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_SALVA"));
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_WEICHENG"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_WEICHENG"));
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_BALLAS"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_BALLAS"));
	UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_HILLBILLY"), *bParam0);
	UNK_0x0E2400AB9174FA81(1, *bParam0, joaat("AMBIENT_GANG_HILLBILLY"));
}

void func_1287(int iParam0, bool bParam1)
{
	UNK_0x0E2400AB9174FA81(iParam0, joaat("COP"), *bParam1);
	UNK_0x0E2400AB9174FA81(iParam0, *bParam1, joaat("COP"));
	UNK_0x0E2400AB9174FA81(iParam0, joaat("ARMY"), *bParam1);
	UNK_0x0E2400AB9174FA81(iParam0, *bParam1, joaat("ARMY"));
	UNK_0x0E2400AB9174FA81(iParam0, joaat("SECURITY_GUARD"), *bParam1);
	UNK_0x0E2400AB9174FA81(iParam0, *bParam1, joaat("SECURITY_GUARD"));
}

bool func_1288()
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
		if (func_1184())
		{
			return false;
		}
		if (func_1182(157))
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

int func_1289(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1190();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1148())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_1190();
					}
					else
					{
						return 0;
					}
				}
				if (func_1184())
				{
					if (!bParam2)
					{
						func_1190();
					}
					else
					{
						return 0;
					}
				}
				if (func_1182(157))
				{
					if (!bParam2)
					{
						func_1190();
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
					func_1190();
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
				func_1190();
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
			func_1190();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1290(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_1190();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_1291(int iParam0)
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

bool func_1292(bool bParam0, bool bParam1, bool bParam2)
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

