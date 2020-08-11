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
	bool bLocal_28 = false;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = false;
	struct<4> Local_38[10];
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	int iLocal_81 = 0;
	struct<27> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_109 = false;
	var uLocal_110 = 0;
	struct<11> Local_111[2];
	struct<25> Local_134[21];
	float fLocal_660 = 0f;
	int iLocal_661 = 0;
	bool bLocal_662 = false;
	bool bLocal_663 = false;
	bool bLocal_664 = false;
	bool bLocal_665 = false;
	bool bLocal_666 = false;
	vector3 vLocal_667 = { 0f, 0f, 0f };
	int iLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = -1;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 1000;
	var uLocal_681 = 1000;
	var uLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	bool bLocal_685 = false;
	bool bLocal_686 = false;
	var uLocal_687 = 0;
	struct<8> Local_688[3];
	var uLocal_713 = 15;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 15;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	int iLocal_817 = 0;
	bool bLocal_818 = false;
	bool bLocal_819 = false;
	int iLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	int iLocal_823 = 0;
	vector3 vLocal_824 = { 0f, 0f, 0f };
	vector3 vLocal_827 = { 0f, 0f, 0f };
	int iLocal_830 = 0;
	bool bLocal_831 = false;
	bool bLocal_832 = false;
	bool bLocal_833 = false;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	bool bLocal_837 = false;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	struct<14> Local_840 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_854 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_868 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_874 = false;
	bool bLocal_875 = false;
	var uLocal_876 = 0;
	bool bLocal_877 = false;
	char[] cLocal_878[8] = 0;
	var uLocal_879 = 16;
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
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	char[] cLocal_1044[8] = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	int iLocal_1048[3] = { 0, 0, 0 };
	int iLocal_1052 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_81 = 21;
	fLocal_660 = -1f;
	vLocal_667 = { 0f, 0f, 0f };
	iLocal_670 = -1;
	bLocal_819 = "FBIPRA";
	vLocal_824 = { 0f, 0f, 0f };
	vLocal_827 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_878 = "FIBP1AU";
	iLocal_1052 = -1;
	UNK_0x7798376279BB5369(1);
	if (UNK_0x2EBF608FFE6CA406(19))
	{
		bLocal_818 = false;
		func_387();
		func_375();
	}
	func_358();
	if (func_357())
	{
		func_356(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_342();
	while (true)
	{
		UNK_0x1A6DFFFEEC27BF4F("M_TrT", 0);
		if (func_341(UNK_0x16F2683693E537C9()))
		{
			func_337();
			func_333();
			UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
			UNK_0xD60411959D5D930B(0.8f);
			switch (iLocal_683)
			{
				case 0:
					func_270();
					break;
				case 1:
					func_239();
					break;
				case 2:
					func_221();
					break;
				case 3:
					func_108();
					break;
				case 4:
					func_39();
					break;
				case 5:
					func_1();
					break;
			}
			if (iLocal_683 != 5)
			{
				if (iLocal_683 >= 0 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	bool bVar0;

	switch (iLocal_684)
	{
		case 0:
			UNK_0x790015DC92C918E2();
			UNK_0xA37A90C62806D848(1);
			func_38();
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (func_37(bVar0) && UNK_0x134B62B726CEC8E6(bVar0) == joaat("TOWTRUCK"))
				{
					func_36(bVar0, 2);
				}
			}
			if (!UNK_0xEA6BC48857E0AC4C(bLocal_818))
			{
				func_34(bLocal_818);
			}
			else
			{
				func_18(0);
			}
			iLocal_684 = 1;
			break;
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				UNK_0x536F1BE96C726C4B(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 30f, 1, 0, 0, false);
				func_375();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_868);
	func_9(&bLocal_875);
	func_9(&bLocal_874);
	func_8(&Local_840);
	func_8(&Local_854);
	func_9(&uLocal_876);
	func_3();
}

void func_3()
{
	func_7(&(Local_111[0 /*11*/].f_4));
	func_7(&(Local_111[1 /*11*/].f_4));
	func_6(&bLocal_109);
	func_5(&(Local_111[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_111[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_134[iLocal_661 /*25*/].f_17), 0);
	UNK_0x51732B934211201A(bLocal_80);
	UNK_0x8D17794CE3273D70("missfbi4prepp1");
	UNK_0xDD465543E2028AEA("missfbi4prepp1_garbageman");
}

void func_4(bool bParam0, bool bParam1)
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

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

void func_6(bool bParam0)
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

void func_7(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

void func_8(bool bParam0)
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

void func_9(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		if (func_37(*bParam0))
		{
			if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
			{
				if (func_10(UNK_0x16F2683693E537C9()))
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
			if (func_10(UNK_0x16F2683693E537C9()))
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

bool func_10(bool bParam0)
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

void func_11()
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(vector3 vParam0, float fParam3)
{
	func_13(&(Global_105187.f_2890), vParam0, fParam3);
}

void func_13(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = fParam4;
}

void func_14(vector3 vParam0, float fParam3)
{
	if (func_15(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_15(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_16()
{
	if (Global_98744 == 7)
	{
		return true;
	}
	return false;
}

bool func_17()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return true;
	}
	return false;
}

void func_18(int iParam0)
{
	int iVar0;

	if (Global_111638.f_9080 || func_33(0))
	{
		iVar0 = func_32();
		if (!func_19(iVar0))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

bool func_19(int iParam0)
{
	int iVar0;
	int iVar1;

	func_24();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_20(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_89532[iVar1 /*34*/].f_15, true))
	{
		if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x67E5ECB8FD7F5018(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_22(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_21(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_9 = 0f;
				Global_96134[iVar0 /*29*/].f_12 = 0f;
				Global_96134[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_10 = 0f;
				Global_96134[iVar0 /*29*/].f_13 = 0f;
				Global_96134[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_11 = 0f;
				Global_96134[iVar0 /*29*/].f_14 = 0f;
				Global_96134[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_26 = 0f;
				Global_96134[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_27 = 0f;
				Global_96134[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)
{
	*uParam0 = -15;
}

bool func_22(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return true;
		case 9:
			return func_22(8, uParam1, fParam2);
		case 10:
			return func_22(8, uParam1, fParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

void func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 25);
	}
}

bool func_25()
{
	func_26();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_26()
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_30(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			bVar0 = func_29(UNK_0x16F2683693E537C9());
			if (func_28(bVar0) && (!func_27(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != bVar0 && func_28(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = bVar0;
				Global_111638.f_2358.f_539.f_4321 = bVar0;
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

bool func_27(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_28(bool bParam0)
{
	return bParam0 < 3;
}

int func_29(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(bool bParam0)
{
	if (func_28(bParam0))
	{
		return func_31(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

var func_31(bool bParam0)
{
	return Global_1798[bParam0 /*29*/];
}

int func_32()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_33(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_34(bool bParam0)
{
	func_35(bParam0);
	func_18(0);
}

void func_35(char* sParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		if (UNK_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (UNK_0x192DA571D9133D23())
			{
				UNK_0x32BB9995E509E19B();
			}
		}
	}
}

void func_36(bool bParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = bParam0;
}

bool func_37(bool bParam0)
{
	if (func_10(bParam0))
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

void func_38()
{
	func_7(&uLocal_821);
}

void func_39()
{
	bool bVar0;

	switch (iLocal_684)
	{
		case 0:
			iLocal_684 = 1;
			break;
		case 1:
			if (!func_107(UNK_0x16F2683693E537C9(), vLocal_827, 270f))
			{
				iLocal_684 = 2;
			}
			else if (!func_106("PRA_LEVAREA", 0, 0))
			{
				func_105("PRA_LEVAREA", 60000, 0);
			}
			break;
		case 2:
			bVar0 = func_25();
			if (func_106("PRA_LEVAREA", 0, 0))
			{
				UNK_0x790015DC92C918E2();
			}
			if (bVar0 == 0)
			{
				if (func_67(&uLocal_687, &cLocal_1044, &uLocal_879))
				{
					func_63();
					func_58();
				}
			}
			else
			{
				func_53(func_57(bVar0), -621899663, -621899663, 5, 0, bVar0, func_56(bVar0), 0, 6000, 6000, -1, 0, 0);
				func_63();
				func_58();
			}
			break;
		case 3:
			func_40(1, 1, 1);
			iLocal_684 = 2;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_42(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
		UNK_0x2FB9A57162E54BAB(0f);
	}
	if (iParam1 == 1)
	{
		func_41(500, 0);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
	{
		if (!UNK_0x7BCE0E6DD4A1F749())
		{
			UNK_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!UNK_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	UNK_0xBC03DF6093E8E71F(bVar0, 0);
	UNK_0x98E4DC66A651C9FA(bVar0, bParam3, false);
	func_43(0, 1, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
	}
	UNK_0xA37A90C62806D848(1);
	if (iParam0 == 1)
	{
		UNK_0x5413873D3F67BF93(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((bLocal_37 != 0 && bLocal_37 != joaat("OBJECT")) && bLocal_37 != joaat("GADGET_PARACHUTE"))
		{
			if (func_10(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), bLocal_37, 0))
				{
					UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), bLocal_37, false);
				}
			}
		}
	}
	if (func_341(UNK_0x16F2683693E537C9()))
	{
		UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
	}
}

void func_43(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_52(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_51())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_50(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_52(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_50(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_48(UNK_0xD803B885F5E47A62())) && !func_45(UNK_0xD803B885F5E47A62(), 0)) && !func_44()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_48(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_44()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_45(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_46(-1, 0) == 8;
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1312745;
}

bool func_48(bool bParam0)
{
	if (func_45(bParam0, 0))
	{
		return true;
	}
	if (func_49())
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

bool func_49()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_50(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xFA2492ED90D43443() != bParam0 && bParam2)
		{
			UNK_0xF3B6BD1C0DC44D29(bParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_51()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 13);
	}
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar15;

	if (func_33(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == bParam5)
	{
		return 0;
	}
	if (((bParam5 != 144 && bParam5 != 0) && bParam5 != 1) && bParam5 != 2)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		UNK_0x5D96D8530B3D0904(&iVar15, bParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		UNK_0x5D96D8530B3D0904(&(Var0.f_1), false);
		UNK_0x5D96D8530B3D0904(&(Var0.f_1), 13);
		UNK_0x0674E58A79778E99(&(Var0.f_1), true);
		if (iParam4 == 0)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136 /*15*/] = { Var0 };
		Global_111638.f_7683.f_136++;
		func_54(bParam5);
		return 1;
	}
	return 0;
}

void func_54(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_28(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_111638.f_7683[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[bParam0] = iVar1;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
		case 7:
			return 4;
		case 2:
			return 3;
		case 1:
			return 2;
		case 3:
			return 1;
		case 5:
		case 6:
			return 0;
	}
	return 7;
}

int func_56(bool bParam0)
{
	if (bParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_57(bool bParam0)
{
	if (bParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_58()
{
	UNK_0x790015DC92C918E2();
	func_61();
	func_59(0, 0);
	func_375();
}

void func_59(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_33(0) && Global_76868.f_1 == 1) && func_60(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_33(0))
	{
		iVar0 = func_32();
		iVar1 = Global_89496[iVar0 /*5*/];
		uVar2 = Global_76891.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 4);
		UNK_0x5D96D8530B3D0904(&Global_76870, true);
		Global_76886 = uVar2;
		Global_76887 = UNK_0x1C0640BA9A7327B3();
	}
}

bool func_60(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
		case 86:
			return true;
		case 91:
			return true;
		default:
			return false;
	}
	return false;
}

void func_61()
{
	Global_19671 = 0;
	func_62();
}

void func_62()
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

void func_63()
{
	func_66(0, -1);
	func_65(0, 318);
	func_64(1, 320);
}

void func_64(bool bParam0, int iParam1)
{
	int iVar0;

	if (Global_61520)
	{
	}
	Global_61520 = 0;
	if (bParam0)
	{
		Global_61521 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73608[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] > 0)
			{
				if (Global_73608[iVar0 /*9*/] == iParam1)
				{
					Global_73608[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_65(bool bParam0, int iParam1)
{
	int iVar0;

	Global_61525 = bParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0 /*9*/] == iParam1)
		{
			if (Global_73608[iVar0 /*9*/].f_6 != bParam0)
			{
				Global_73608[iVar0 /*9*/].f_6 = bParam0;
				Global_73608[iVar0 /*9*/].f_7 = 1;
				Global_73608[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_66(bool bParam0, int iParam1)
{
	Global_61523 = bParam0;
	Global_61524 = iParam1;
}

bool func_67(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_103())
			{
				if ((func_102(74) || func_102(75)) && func_101())
				{
					if (func_25() == 0)
					{
						func_100(1);
						func_99(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_81(1) };
							func_99(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_100(0);
					*uParam0 = 4;
				}
				else
				{
					func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_81(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_74();
				*uParam0 = 4;
			}
			break;
		case 1:
			if (func_73())
			{
				if (UNK_0x40EFDB96B3112BA7() >= 0)
				{
					func_72("FBIPRAU", sParam1);
					func_71(1);
					*uParam0 = 3;
				}
			}
			if (func_70())
			{
				*uParam0 = 3;
			}
			break;
		case 2:
			break;
		case 3:
			if (!func_73())
			{
				if (!func_69(0))
				{
					if (!func_102(3) && func_103())
					{
						func_68(50, 0);
					}
					return true;
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (UNK_0x1C0640BA9A7327B3() + iParam1);
}

bool func_69(int iParam0)
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

bool func_70()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return true;
	}
	return false;
}

void func_71(bool bParam0)
{
	UNK_0x5CEB4DB888A62073(bParam0);
	if (bParam0)
	{
	}
}

void func_72(char* sParam0, char* sParam1)
{
	if (UNK_0x1EE04CEA36EF313B())
	{
		Global_20862 = 1;
		StringCopy(&Global_20869, sParam0, 24);
		StringCopy(&Global_20863, sParam1, 24);
	}
}

bool func_73()
{
	if (Global_20805 == 4)
	{
		if (UNK_0x1EE04CEA36EF313B())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_74()
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 3)
	{
		bVar1 = func_79(bVar0);
		if (!UNK_0xEB6A8945D1AC98A1(bVar1))
		{
			if (func_78(bVar1, 0))
			{
				return;
			}
		}
		bVar0++;
	}
	func_75(func_76(), 0, func_25(), func_97(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_75(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;

	if (func_33(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		UNK_0x5D96D8530B3D0904(&iVar15, bParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		UNK_0x5D96D8530B3D0904(&(Var0.f_1), false);
		UNK_0x0674E58A79778E99(&(Var0.f_1), true);
		if (iParam1 == 0)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136 /*15*/] = { Var0 };
		Global_111638.f_7683.f_136++;
		func_54(bParam2);
		return 1;
	}
	return 0;
}

int func_76()
{
	switch (func_77())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
				case 1:
					return -714760066;
				case 2:
					return -1198055521;
			}
			break;
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
				case 1:
					return 530956160;
				case 2:
					return 240475766;
			}
			break;
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
				case 1:
					return 728176806;
				case 2:
					return 910240872;
			}
			break;
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
				case 1:
					return -1200353264;
				case 2:
					return 801340541;
			}
			break;
	}
	return -1;
}

int func_77()
{
	return Global_76884;
}

bool func_78(bool bParam0, int iParam1)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_29(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_79(bVar0) != bParam0)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				return false;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94597, bVar0))
		{
			return true;
		}
	}
	return false;
}

int func_79(bool bParam0)
{
	if (bParam0 > 3)
	{
		return 0;
	}
	if (bParam0 == func_25())
	{
		return UNK_0x16F2683693E537C9();
	}
	return Global_96222[func_80(bParam0)];
}

int func_80(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	else if (bParam0 == 2)
	{
		return 2;
	}
	else if (bParam0 == 1)
	{
		return 1;
	}
	else if (bParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_81(bool bParam0)
{
	struct<4> Var0;

	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
		}
	}
	return Var0;
}

int func_82(var uParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_95(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_6674 = bParam2;
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20819 = 0;
	Global_20810 = 1;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam6 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_83(sParam4, iParam5, bParam9);
}

int func_83(char* sParam0, int iParam1, bool bParam2)
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
					func_62();
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
		if (func_94(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_93();
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
				func_92();
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
				if (func_91())
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
			if (func_51())
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
			func_90();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_89();
		func_84();
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
		func_62();
	}
	return 0;
}

void func_84()
{
	if (!func_85())
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

bool func_85()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_88())
	{
		return false;
	}
	if (func_86(UNK_0xD803B885F5E47A62()))
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

bool func_86(int iParam0)
{
	return func_87(iParam0, 20);
}

bool func_87(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_88()
{
	return -1;
}

void func_89()
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

void func_90()
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

bool func_91()
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

void func_92()
{
	if (func_27(14))
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
		Global_19486 = func_25();
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

void func_93()
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

bool func_94(bool bParam0, int iParam1)
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

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_96()
{
	char* sVar0;

	switch (func_77())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_97()
{
	int iVar0;

	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		case 1:
			iVar0 = 9;
			break;
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_98(var uParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[bParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[bParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[bParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[bParam1 /*10*/])->f_7 = 1;
	(uParam0[bParam1 /*10*/])->f_8 = iParam4;
	(uParam0[bParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[bParam1 /*10*/])->f_8 == 0)
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
			if ((uParam0[bParam1 /*10*/])->f_9 == 0)
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

void func_99(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		func_75(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_102(3))
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

bool func_101()
{
	if ((func_102(41) && func_102(3)) && func_102(21))
	{
		return true;
	}
	return false;
}

bool func_102(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

bool func_103()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_102(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_104(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_104(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_105(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_106(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

bool func_107(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

void func_108()
{
	func_215(&bLocal_874, &bLocal_875, &bLocal_686, &uLocal_822, &uLocal_821, vLocal_827, Local_868, 0, 1090519040 /* Float: 8f */);
	func_214();
	func_155();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
				{
					if (func_37(bLocal_874))
					{
						if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_874, 0))
						{
							func_121("PRA_LEVVEH", &iLocal_820);
						}
					}
				}
				iLocal_684 = 1;
			}
			break;
		case 1:
			func_120(&uLocal_821, vLocal_827, &bLocal_685, bLocal_686, &iLocal_820, &iLocal_838);
			if (func_113(bLocal_874, vLocal_827, &uLocal_821, bLocal_686, bLocal_685, &iLocal_836, &iLocal_839, &iLocal_835, &iLocal_834, &iLocal_820, 1090519040 /* Float: 8f */))
			{
				if (!func_112())
				{
					if (func_67(&uLocal_687, &cLocal_1044, &uLocal_879))
					{
						func_63();
						func_58();
					}
				}
				else
				{
					func_99(46, 1);
					func_63();
					func_110(0);
				}
			}
			break;
		case 3:
			if (func_37(Local_868))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_868, 0))
				{
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_868, -1);
				}
				else
				{
					func_109(Local_868, vLocal_827, 126.0705f, 0, 1);
					func_40(1, 1, 1);
					iLocal_684 = 1;
				}
			}
			break;
	}
}

bool func_109(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_10(bParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = UNK_0xE82754C349C7B581(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.f_2 = fVar1;
			}
		}
		UNK_0xA47B46945FF6DE74(bParam0, vParam1, 1, 0, 0, iParam6);
		UNK_0xD8F6A53F4799FAFE(bParam0, bParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return true;
	}
	return false;
}

void func_110(bool bParam0)
{
	func_111(iLocal_683);
	iLocal_817 = iLocal_683;
	if (!bParam0)
	{
		iLocal_683 = iLocal_817 + 1;
	}
	else if (iLocal_817 > 0)
	{
		iLocal_683 = (iLocal_817 - 1);
	}
	iLocal_820 = 0;
	iLocal_684 = 0;
}

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

bool func_112()
{
	if (func_103())
	{
		if ((func_102(74) || func_102(75)) && func_101())
		{
			return true;
		}
	}
	return false;
}

bool func_113(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	float fVar0;

	if ((bParam5 == 1 || bParam5 == 2) || bParam5 == 3)
	{
		if (bParam6 == 0)
		{
			if (func_37(bParam0))
			{
				if (!UNK_0x377BE9A1BF38C7CE(bParam0))
				{
					func_121(func_119(func_77()), iParam11);
				}
			}
			if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, bParam12, bParam12, 2f, false, true, 2))
			{
				UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, bParam12, bParam12, 2f, true, true, 2);
				if (func_106(func_119(func_77()), 0, 0))
				{
					UNK_0x2F23E8033F1ADDD9(func_119(func_77()));
				}
				*iParam7 = 1;
				func_117(bParam4, vParam1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (bParam12 / 2f);
					if (func_107(UNK_0x16F2683693E537C9(), vParam1, fVar0))
					{
						*iParam7 = 0;
						func_116(1077936128 /* Float: 3f */, 1);
					}
				}
				func_7(bParam4);
			}
		}
	}
	else if (UNK_0x5A91F08DF773C39D(bParam0, vParam1, bParam12, bParam12, 2f, false, true, 2))
	{
		if (*iParam9 == -1)
		{
			UNK_0x71EDC33E5A423750(bParam0, 2);
			return true;
		}
		if (!*iParam10)
		{
			if (func_106(func_119(func_77()), 0, 0))
			{
				UNK_0x790015DC92C918E2();
			}
			*iParam9 = UNK_0x1C0640BA9A7327B3();
			*iParam10 = 1;
			UNK_0x71EDC33E5A423750(bParam0, 2);
		}
		else if ((UNK_0x1C0640BA9A7327B3() - *iParam9) > 3000)
		{
			return true;
		}
	}
	else
	{
		if (UNK_0x9C7B8DC16535B879(bParam0) == 2)
		{
			UNK_0x71EDC33E5A423750(bParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				UNK_0x2F23E8033F1ADDD9(func_115(func_77(), 0));
			}
			if (!func_106(func_114(func_77()), 0, 0))
			{
				func_105(func_114(func_77()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return false;
}

bool func_114(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

bool func_115(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

bool func_116(float fParam0, int iParam1)
{
	bool bVar0;

	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return true;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
		{
			if (!UNK_0x8B38C0DAEEDB5F9C(bVar0))
			{
				UNK_0xE0C0351D5B931E37(bVar0, fParam0, iParam1, 0);
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	if (UNK_0x4024663A44BC1535(UNK_0x16F2683693E537C9()))
	{
		return true;
	}
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		if (UNK_0x8B38C0DAEEDB5F9C(bVar0))
		{
			return true;
		}
	}
	return false;
}

void func_117(bool bParam0, vector3 vParam1, int iParam4)
{
	if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		*bParam0 = func_118(vParam1, 5, iParam4);
	}
}

int func_118(vector3 vParam0, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x2A065371C9D96655(iVar0, iParam3);
	UNK_0x516E63E474722206(iVar0, 1f);
	UNK_0x661342B9651D16E2(iVar0, bParam4);
	return iVar0;
}

bool func_119(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_120(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*bParam4)
	{
		case 0:
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				*bParam4 = 1;
			}
			break;
		case 1:
			func_7(bParam0);
			if ((bParam5 == 1 || bParam5 == 2) || bParam5 == 3)
			{
				UNK_0x790015DC92C918E2();
				func_105("LOSE_WANTED", 7500, 0);
				*bParam4 = 2;
			}
			break;
		case 2:
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				UNK_0x790015DC92C918E2();
				if ((bParam5 == 1 || bParam5 == 2) || bParam5 == 3)
				{
					func_121(func_115(func_77(), 0), iParam6);
					func_117(bParam0, vParam1, 1);
				}
				else if (bParam5 == 0 && !*iParam7)
				{
					func_105(func_114(func_77()), 7500, 0);
					*iParam7 = 1;
				}
				*bParam4 = 0;
			}
			break;
	}
}

void func_121(bool bParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_105(bParam0, 7500, 0);
		*iParam1 = 1;
	}
}

bool func_122(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_40(1, 1, 1);
			}
			else if (func_149(1, vLocal_824, 0))
			{
				if (func_148())
				{
					func_147(33);
					UNK_0xAB8E2DDC7AF955E0(joaat("TRASH"), true);
					UNK_0xAB8E2DDC7AF955E0(joaat("TOWTRUCK"), true);
					UNK_0xAB8E2DDC7AF955E0(joaat("S_M_Y_GARBAGE"), true);
					iLocal_683 = 2;
					func_7(&uLocal_821);
					func_145(&uLocal_671, 0, 0);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					func_142();
					UNK_0xCD7D80FD792F9954("DRIVE", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_ATTRACTOR", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", false);
					return true;
				}
				else if (((func_149(2, Local_868.f_1, Local_868.f_4) && func_149(3, Local_840.f_1, Local_840.f_4)) && func_149(4, Local_854.f_1, Local_854.f_4)) && func_141(0))
				{
					func_142();
					func_147(33);
					if (func_341(Local_840))
					{
						func_140(Local_840);
					}
					if (func_341(Local_854))
					{
						func_139(Local_854);
					}
					func_138(Local_868);
					if (func_341(Local_854) && func_341(Local_840))
					{
						func_127(iLocal_830, 1, 0, 1);
					}
					UNK_0xAB8E2DDC7AF955E0(joaat("TRASH"), true);
					UNK_0xAB8E2DDC7AF955E0(joaat("TOWTRUCK"), true);
					UNK_0xAB8E2DDC7AF955E0(joaat("S_M_Y_GARBAGE"), true);
					if (UNK_0xC0E5DA578D275A41(Local_868) != 0)
					{
						iVar0 = UNK_0xC0E5DA578D275A41(Local_868);
						UNK_0xCD816869CA451988(1);
						func_7(&iVar0);
						UNK_0xCD816869CA451988(0);
					}
					func_125(&uLocal_821, Local_868, 1);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					UNK_0xCD7D80FD792F9954("DRIVE", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_ATTRACTOR", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", false);
					return true;
				}
			}
			break;
		case 1:
			if (bParam1)
			{
				if ((func_149(2, Local_868.f_1, Local_868.f_4) && func_149(3, Local_840.f_1, Local_840.f_4)) && func_149(4, Local_854.f_1, Local_854.f_4))
				{
					func_124(UNK_0x16F2683693E537C9(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_123();
					bLocal_28 = false;
					UNK_0xCD7D80FD792F9954("DRIVE", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_ATTRACTOR", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", false);
					func_40(1, 1, 1);
				}
			}
			else
			{
				func_142();
				return true;
			}
			break;
		case 2:
			if (bParam1)
			{
				if (func_149(2, Local_868.f_1, Local_868.f_4))
				{
					func_123();
					func_142();
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_868, -1);
					bLocal_28 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (bParam1)
			{
				if (func_149(2, vLocal_827, Local_868.f_4))
				{
					func_123();
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_868, -1);
					func_142();
					bLocal_28 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_123()
{
	if (iLocal_683 == 1)
	{
		func_140(Local_840);
		func_139(Local_854);
		func_138(Local_868);
		func_127(iLocal_830, 1, 0, 1);
	}
	bLocal_877 = false;
	iLocal_838 = 0;
	iLocal_839 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
}

void func_124(bool bParam0, vector3 vParam1, float fParam4)
{
	if (func_341(bParam0))
	{
		UNK_0xA3BF0AA5A2608191(bParam0);
	}
	func_109(bParam0, vParam1, fParam4, 0, 1);
}

void func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		*bParam0 = func_126(bParam1, bParam2, 5);
	}
}

int func_126(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_10(bParam0))
	{
		iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
		UNK_0x321E019A46034F39(iVar0, bParam1);
		UNK_0x2A065371C9D96655(iVar0, iParam2);
		UNK_0x516E63E474722206(iVar0, 1f);
	}
	return iVar0;
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iLocal_81 = iParam0;
	bLocal_663 = iParam1;
	bLocal_662 = iParam2;
	bLocal_664 = iParam3;
	Local_111[0 /*11*/].f_1 = 0;
	Local_111[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_81 - 1))
	{
		Local_134[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_660 = 0f;
	func_129();
	Local_111[1 /*11*/].f_7 = 3;
	Local_111[1 /*11*/].f_5 = 0;
	Local_111[1 /*11*/].f_10 = 1;
	Local_111[1 /*11*/].f_2 = 1500;
	Local_111[1 /*11*/].f_3 = 500;
	Local_111[0 /*11*/].f_5 = 0;
	Local_111[0 /*11*/].f_10 = 0;
	Local_111[0 /*11*/].f_2 = 1000;
	Local_111[0 /*11*/].f_3 = 100;
	UNK_0xF63400DBE3303D26("Enemies", &bLocal_80);
	UNK_0x6DF7BF67E86AAE86(Local_111[0 /*11*/], bLocal_80);
	UNK_0x6DF7BF67E86AAE86(Local_111[1 /*11*/], bLocal_80);
	UNK_0xE2F0767314863BD8(Local_111[0 /*11*/], 1, 0);
	UNK_0xE2F0767314863BD8(Local_111[1 /*11*/], 1, 0);
	func_128(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_128(vector3 vParam0, vector3 vParam3)
{
	Local_82.f_8 = { vParam0 };
	Local_82.f_11 = { vParam3 };
	Local_82.f_1 = 4;
}

void func_129()
{
	if (!UNK_0xC42A92762C58E1B9(Local_111[0 /*11*/], bLocal_109, 0))
	{
		UNK_0x96167B03C5A77156(Local_111[0 /*11*/], UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(1)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
		Local_111[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_130(1);
	}
}

void func_130(bool bParam0)
{
	if (!UNK_0xBBA8A868118C90ED(bLocal_109, false, 0))
	{
		func_131(bParam0);
		if (iLocal_661 != (iLocal_81 - 1))
		{
			if (iLocal_661 == 4)
			{
				UNK_0xF613E1FD4A150FE0(Local_111[0 /*11*/], bLocal_109, Local_134[iLocal_661 /*25*/], 15f, 2883755, Local_134[iLocal_661 /*25*/].f_6);
			}
			else
			{
				UNK_0xE9362E4D600DD12A(Local_111[0 /*11*/], bLocal_109, Local_134[iLocal_661 /*25*/], 15f, 0, false, 2883755, Local_134[iLocal_661 /*25*/].f_6, Local_134[iLocal_661 /*25*/].f_7);
			}
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 4;
		}
		else
		{
			UNK_0xE072601B4380E9DF(Local_111[0 /*11*/], bLocal_109, 15f, 786599);
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
		Local_111[0 /*11*/].f_7 = 7;
	}
}

void func_131(bool bParam0)
{
	if (iLocal_661 != -1)
	{
		if (!func_136(Local_134[iLocal_661 /*25*/].f_11) && !func_136(Local_134[iLocal_661 /*25*/].f_14))
		{
			UNK_0xE342F209E49C5314(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, true, 1);
		}
	}
	if (!bParam0)
	{
		func_134();
	}
	else
	{
		iLocal_661 = func_132();
	}
	if (iLocal_661 != -1)
	{
		if (!func_136(Local_134[iLocal_661 /*25*/].f_11) && !func_136(Local_134[iLocal_661 /*25*/].f_14))
		{
			UNK_0xE342F209E49C5314(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, false, 1);
		}
	}
}

int func_132()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6[21];
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;

	if (func_37(bLocal_109))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(bLocal_109, true) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_81 - 1))
		{
			fVar28 = UNK_0x0EB28750412C3A5A(vVar1, Local_134[iVar4 /*25*/], 1);
			if (!func_136(Local_134[iVar4 /*25*/]) && fVar28 > 25f)
			{
				fVar6[iVar4] = fVar28;
			}
			else
			{
				fVar6[iVar4] = -1f;
			}
			iVar4++;
		}
		fVar29 = fVar6[0];
		iVar4 = 0;
		while (iVar4 <= (iLocal_81 - 1))
		{
			if (fVar6[iVar4] != -1f)
			{
				if (fVar6[iVar4] < fVar29)
				{
					fVar29 = fVar6[iVar4];
					iVar0 = iVar4;
				}
			}
			iVar4++;
		}
		fVar30 = func_133(Local_134[iVar0 /*25*/] - vVar1, UNK_0x08D89CE2E20AE305(bLocal_109));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			vVar1 = { UNK_0x68F4C0EC296D3901(bLocal_109, true) };
			fVar30 = func_133(Local_134[iVar5 /*25*/] - vVar1, UNK_0x08D89CE2E20AE305(bLocal_109));
			iVar31++;
		}
		if (iVar31 >= 40)
		{
			iVar5 = (iLocal_81 - 1);
		}
	}
	iVar0 = iVar5;
	return iVar0;
}

float func_133(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_134()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (bLocal_663)
	{
		while (Local_134[iLocal_661 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_661++;
			if (iLocal_661 >= (iLocal_81 - 1))
			{
				iVar0 = -1;
				iLocal_661 = (iLocal_81 - 1);
			}
		}
		if (iLocal_661 == (iLocal_81 - 1))
		{
			if (bLocal_662)
			{
				iLocal_661 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_81 - 1))
				{
					Local_134[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_661 = (iLocal_81 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_81 - 1))
		{
			if (Local_134[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_81 - 1))
		{
			iLocal_661 = (iLocal_81 - 1);
		}
		else if (iVar1 == iLocal_81)
		{
			if (bLocal_662)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_81 - 1))
				{
					Local_134[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_661 = func_135();
			}
			else
			{
				iLocal_661 = -1;
				return;
			}
		}
		else
		{
			iLocal_661 = func_135();
		}
	}
}

int func_135()
{
	int iVar0;

	iVar0 = UNK_0x09AC81E49EA267F7(false, (iLocal_81 - 1));
	while (Local_134[iVar0 /*25*/].f_18)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, (iLocal_81 - 1));
	}
	return iVar0;
}

bool func_136(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_137(bool bParam0)
{
	vector3 vVar0;
	bool bVar3;

	if (!bParam0)
	{
		bVar3 = UNK_0xF653B9B22DA806A9(bLocal_109, "wheel_rf");
	}
	else
	{
		bVar3 = UNK_0xF653B9B22DA806A9(bLocal_109, "wheel_lf");
	}
	vVar0 = { UNK_0xBF584557291FDD31(bLocal_109, bVar3) };
	vVar0 = { UNK_0x5293C88BD2F4DE13(bLocal_109, vVar0) };
	if (!bParam0)
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, -1f) };
	}
	return vVar0;
}

void func_138(bool bParam0)
{
	if (func_37(bParam0))
	{
		bLocal_109 = bParam0;
	}
}

void func_139(bool bParam0)
{
	if (func_341(bParam0))
	{
		Local_111[1 /*11*/] = bParam0;
	}
}

void func_140(bool bParam0)
{
	if (func_341(bParam0))
	{
		Local_111[0 /*11*/] = bParam0;
	}
}

bool func_141(bool bParam0)
{
	UNK_0x3F423BF5B8125A50("missfbi4prepp1");
	UNK_0x4942FBD1EF896E39("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!UNK_0xB4AE0788C1587752("missfbi4prepp1") && !UNK_0xDF3FDDA1EADEDD07("missfbi4prepp1_garbageman"))
		{
			SYSTEM::WAIT(0);
		}
		return true;
	}
	else if (UNK_0xB4AE0788C1587752("missfbi4prepp1") && UNK_0xDF3FDDA1EADEDD07("missfbi4prepp1_garbageman"))
	{
		return true;
	}
	return false;
}

void func_142()
{
	func_143(&uLocal_879);
}

void func_143(var uParam0)
{
	bool bVar0;
	char* sVar1;

	switch (func_25())
	{
		case 0:
			bVar0 = false;
			sVar1 = "MICHAEL";
			break;
		case 1:
			bVar0 = true;
			sVar1 = "FRANKLIN";
			break;
		case 2:
			bVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_98(uParam0, bVar0, UNK_0x16F2683693E537C9(), sVar1, 0, 1);
}

void func_144(int iParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((vParam1.x == Global_31146[iVar0 /*23*/][0 /*3*/] && vParam1.y == Global_31146[iVar0 /*23*/][0 /*3*/].f_1) && vParam1.z == Global_31146[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_31143 = 1;
	UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
	Global_31146[iVar0 /*23*/][0 /*3*/] = { vParam1 };
	Global_37196 = 1;
}

void func_145(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0x29D5132FBDCF2B1E(iParam2);
		UNK_0x9A1335ECD7BD117F("FocusIn");
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	UNK_0xF3039DE1FDB4F6FD(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	bVar0 = bParam1;
	if (UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_146(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_146(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_146(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_147(int iParam0)
{
	if (Global_95666 != -1)
	{
		if (iParam0 == Global_95666)
		{
			Global_95670 = 1;
			return;
		}
	}
}

bool func_148()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("TRASH")))
		{
			UNK_0x73270B3C9CC833FD(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), true, 0);
			bLocal_874 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (func_37(bLocal_874))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_149(int iParam0, vector3 vParam1, float fParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_154(vParam1, vLocal_824, 1056964608 /* Float: 0.5f */, 0) && fParam4 == 0f)
			{
				return true;
			}
			break;
		case 1:
			UNK_0xD7992BEF7A9D109E(bLocal_819, false);
			if (UNK_0x67C1D9E5B91B2E37(false))
			{
				return true;
			}
			break;
		case 2:
			if (func_37(Global_95241[0]))
			{
				UNK_0x73270B3C9CC833FD(Global_95241[0], true, 1);
				Local_868 = Global_95241[0];
				if (func_37(Local_868))
				{
					func_36(Local_868, 0);
					UNK_0x44A200C9B6E1CEA6(Local_868, true);
					UNK_0x120A395B0ECB8EA5(Local_868, true);
					return true;
				}
			}
			else if (func_153(&Local_868, Local_868.f_5, Local_868.f_1, Local_868.f_4, 1))
			{
				func_36(Local_868, 0);
				UNK_0x44A200C9B6E1CEA6(Local_868, true);
				UNK_0x120A395B0ECB8EA5(Local_868, true);
				return true;
			}
			break;
		case 3:
			if (UNK_0xC844350D5D58C99A(Global_95241.f_9[0]))
			{
				if (!UNK_0x28072FDD60CE3A6E(Global_95241.f_9[0], 1))
				{
					UNK_0x73270B3C9CC833FD(Global_95241.f_9[0], true, 1);
					Local_840 = Global_95241.f_9[0];
					if (func_341(Local_840))
					{
						UNK_0x11AD11297DC58CC7(Local_840, true);
						UNK_0x4E885A246A9D983A(Local_840, 170, false);
						UNK_0xBAFED2F6486F771A(Local_840, 65536, true);
						UNK_0xAFF39FB306F8E232(Local_840, 50, true);
						return true;
					}
				}
				else
				{
					return true;
				}
			}
			else if (func_150(&Local_840, Local_840.f_5, Local_840.f_1, Local_840.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_868))
				{
					UNK_0xF821F915BC24D246(Local_840, Local_868, -1);
					UNK_0x11AD11297DC58CC7(Local_840, true);
					UNK_0x4E885A246A9D983A(Local_840, 170, false);
					UNK_0xBAFED2F6486F771A(Local_840, 65536, true);
					UNK_0xAFF39FB306F8E232(Local_840, 50, true);
					return true;
				}
			}
			break;
		case 4:
			if (UNK_0xC844350D5D58C99A(Global_95241.f_9[1]))
			{
				if (!UNK_0x28072FDD60CE3A6E(Global_95241.f_9[1], 1))
				{
					UNK_0x73270B3C9CC833FD(Global_95241.f_9[1], true, 1);
					Local_854 = Global_95241.f_9[1];
					if (func_341(Local_854))
					{
						UNK_0x4E885A246A9D983A(Local_854, 170, false);
						UNK_0xBAFED2F6486F771A(Local_854, 65536, true);
						UNK_0xAFF39FB306F8E232(Local_854, 50, true);
						UNK_0x11AD11297DC58CC7(Local_854, true);
						UNK_0xE8832A9E16A57A1F(Local_854, true, 1);
						return true;
					}
				}
				else
				{
					return true;
				}
			}
			else if (func_150(&Local_854, Local_854.f_5, Local_854.f_1, Local_854.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_868))
				{
					UNK_0xF821F915BC24D246(Local_854, Local_868, false);
					UNK_0x4E885A246A9D983A(Local_854, 170, false);
					UNK_0xBAFED2F6486F771A(Local_854, 65536, true);
					UNK_0xAFF39FB306F8E232(Local_854, 50, true);
					UNK_0x11AD11297DC58CC7(Local_854, true);
					UNK_0xE8832A9E16A57A1F(Local_854, true, 1);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_150(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (func_152(bParam1, "Loading", 0))
		{
			*bParam0 = UNK_0x36F2404464202779(26, bParam1, vParam2, bParam5, 1, true);
			if (func_341(*bParam0))
			{
				if (bParam7)
				{
					UNK_0x1E9649458B15960F(*bParam0, true);
				}
				if (bParam8)
				{
					UNK_0x11AD11297DC58CC7(*bParam0, bParam8);
				}
				if (!bParam9)
				{
					UNK_0x25C5402CC10F76CD(*bParam0, bParam9);
				}
				if (bParam6)
				{
					func_151(bParam1, 1);
				}
				return true;
			}
		}
	}
	else if (func_341(*bParam0))
	{
		return true;
	}
	return false;
}

void func_151(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UNK_0xB87F6CF6E5628C67(bParam0))
		{
			UNK_0x71199B01895C6202(bParam0);
		}
	}
	else
	{
		UNK_0x71199B01895C6202(bParam0);
	}
}

bool func_152(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0x523BCC9DC80CD82F(bParam0);
	if (!UNK_0xEA6BC48857E0AC4C(bParam1) && iParam2 != -1)
	{
	}
	if (UNK_0xB87F6CF6E5628C67(bParam0))
	{
		return true;
	}
	return false;
}

bool func_153(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (func_152(bParam1, "Loading", 0))
		{
			*bParam0 = UNK_0x122AAB0B1D6F55AD(bParam1, vParam2, bParam5, true, true, false);
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				if (!UNK_0xAF6690C489CC6203(*bParam0))
				{
					UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
				}
				UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
				if (bParam6)
				{
					func_151(bParam1, 1);
				}
				return true;
			}
		}
	}
	else
	{
		if (func_37(*bParam0))
		{
			UNK_0xA47B46945FF6DE74(*bParam0, vParam2, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(*bParam0, bParam5);
		}
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_154(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (UNK_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_155()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_156(&(Local_111[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_156(bool bParam0, int iParam1)
{
	if (func_341(*bParam0))
	{
		func_202(bParam0, iParam1, 0);
		if (UNK_0xB4ECF989E2C1DAC8(*bParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (UNK_0x8CA9406E01C7EE58(*bParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_134[iLocal_661 /*25*/].f_17) && UNK_0xD59B17D2DFF98E26(Local_134[iLocal_661 /*25*/].f_17))
				{
					UNK_0x76D5D8AF296F50CE(*bParam0, 1048576000 /* Float: 0.25f */);
					UNK_0xAB690CF5866CB826(*bParam0);
					if (iLocal_661 <= 20 && iLocal_661 != -1)
					{
						Local_134[iLocal_661 /*25*/].f_18 = 1;
						bParam0->f_9 = 0;
					}
					UNK_0x15AFB6CBDE990FB6(Local_134[iLocal_661 /*25*/].f_17, 1, false);
					UNK_0xEF3C30F70D2ED135(Local_134[iLocal_661 /*25*/].f_17, 1, UNK_0x08D89CE2E20AE305(*bParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (bParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_199();
					func_198(bParam0);
				}
				func_185(bParam0);
				break;
			case 1:
				func_158(bParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_134[iLocal_661 /*25*/].f_17))
		{
			if (UNK_0xD59B17D2DFF98E26(Local_134[iLocal_661 /*25*/].f_17))
			{
				UNK_0x15AFB6CBDE990FB6(Local_134[iLocal_661 /*25*/].f_17, 1, false);
				UNK_0xEF3C30F70D2ED135(Local_134[iLocal_661 /*25*/].f_17, 1, UNK_0x08D89CE2E20AE305(*bParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(bParam0->f_4));
		if (UNK_0xC844350D5D58C99A(*bParam0))
		{
			if (!func_157(UNK_0x16F2683693E537C9(), *bParam0, 150f, 1) && !bLocal_665)
			{
				func_5(bParam0, 1, 0, 1);
			}
		}
	}
}

bool func_157(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, bParam3), UNK_0x68F4C0EC296D3901(bParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_158(bool bParam0)
{
	int iVar0;
	int iVar1;

	switch (bParam0->f_6)
	{
		case 5:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > bParam0->f_3)
			{
				if (func_184(*bParam0, 780511057))
				{
					UNK_0xA3BF0AA5A2608191(*bParam0);
				}
				UNK_0xF3268524E9BE6D6E(*bParam0, UNK_0x16F2683693E537C9(), 30f, -1, 0, 0);
				bParam0->f_6 = 6;
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			}
			break;
		case 21:
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				if (func_177(*bParam0, UNK_0x16F2683693E537C9(), 1126825984 /* Float: 170f */, 1, 250, 7))
				{
					func_176(bParam0, 1);
					return;
				}
			}
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > bParam0->f_3)
			{
				if (!UNK_0x405E212DDE472467(*bParam0, 0))
				{
					UNK_0x786028C6BB27BD7A(*bParam0, UNK_0x16F2683693E537C9(), 8f, -1f, 10f, 0);
				}
				else
				{
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0x75CDA8644CD3B5F5(false, 0, 0);
					UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(*bParam0, iVar0);
					UNK_0xF82EA857DA10E0CD(&iVar0);
				}
				if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_4))
				{
					bParam0->f_4 = func_173(*bParam0, 1, 145);
				}
				bParam0->f_6 = 22;
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			}
			break;
		case 10:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > bParam0->f_3)
			{
				if (UNK_0x405E212DDE472467(*bParam0, 0))
				{
					UNK_0x9DD8618CA5BF832D(*bParam0, 120, true);
					bParam0->f_6 = 12;
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
				else if (!func_184(*bParam0, 474215631))
				{
					if (func_184(*bParam0, 780511057))
					{
						UNK_0xA3BF0AA5A2608191(*bParam0);
					}
					UNK_0x8BE3D040D15AEA1D(*bParam0, -1);
					bParam0->f_6 = 12;
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > bParam0->f_3)
			{
				UNK_0x8D4C354BB8991817(*bParam0, 1, 1);
				UNK_0xF3268524E9BE6D6E(*bParam0, UNK_0x16F2683693E537C9(), 500f, -1, 0, 1);
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				bParam0->f_6 = 4;
				bParam0->f_5 = 1;
			}
			break;
		case 11:
			func_172(bParam0);
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > 5000)
			{
				if (!func_184(*bParam0, 713668775))
				{
					if (UNK_0xC844350D5D58C99A(Local_111[func_171(bParam0->f_10) /*11*/]))
					{
						UNK_0x96167B03C5A77156(*bParam0, vLocal_667, 1f, -1, 2f, 0, 1193033728);
					}
				}
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				bParam0->f_6 = 23;
				bParam0->f_5 = 1;
			}
			break;
		case 18:
			if (!func_184(*bParam0, -2017877118))
			{
				UNK_0xDD353D0E9C789D0E(&iVar1);
				if (func_170(UNK_0x68F4C0EC296D3901(*bParam0, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 1.5f)
				{
					UNK_0x796BDF31572BB055(false, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 0);
				}
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				UNK_0x75ABDC5F81978924(iVar1);
				UNK_0x78ADC381772E3D54(*bParam0, iVar1);
				UNK_0xF82EA857DA10E0CD(&iVar1);
				bParam0->f_5 = 1;
				bParam0->f_6 = 20;
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			}
			break;
		case 19:
			func_172(bParam0);
			if (!func_184(*bParam0, -2017877118))
			{
				UNK_0x509B8296EBA9B408(*bParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				bParam0->f_5 = 1;
				bParam0->f_6 = 20;
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			}
			break;
		case 1:
			if (!UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0))
			{
				func_168(bParam0);
			}
			break;
		case 2:
			if (!UNK_0x0E0E6175453415CB(*bParam0) && (UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > 3000)
			{
				func_168(bParam0);
			}
			break;
		case 4:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > 8000)
			{
				UNK_0xF3268524E9BE6D6E(*bParam0, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
				if (!bLocal_666)
				{
					if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
					{
						UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 2, 0);
						UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
						bLocal_666 = true;
					}
				}
				UNK_0x8D4C354BB8991817(*bParam0, 0, 1);
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				bParam0->f_6 = 8;
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 1)
			{
				UNK_0x8D4C354BB8991817(*bParam0, 0, 1);
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				bParam0->f_6 = 8;
			}
			break;
		case 6:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > bParam0->f_2)
			{
				if (!func_157(*bParam0, UNK_0x16F2683693E537C9(), 15f, 1))
				{
					func_7(&(bParam0->f_4));
					bParam0->f_6 = 7;
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
		case 7:
			if (UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 1))
			{
				if (bParam0->f_6 != 4 && bParam0->f_6 != 1)
				{
					if (func_166())
					{
						if (func_341(*bParam0))
						{
							UNK_0xA3BF0AA5A2608191(*bParam0);
							UNK_0xF3268524E9BE6D6E(*bParam0, UNK_0x16F2683693E537C9(), 500f, -1, 0, 1);
							bParam0->f_6 = 1;
						}
					}
				}
				if (!func_157(*bParam0, UNK_0x16F2683693E537C9(), 120f, 1))
				{
					func_5(bParam0, 1, 0, 1);
				}
			}
			else
			{
				func_168(bParam0);
			}
			break;
		case 8:
			if (!func_157(*bParam0, UNK_0x16F2683693E537C9(), 120f, 1))
			{
				func_5(bParam0, 1, 0, 1);
			}
			break;
		case 9:
			if (UNK_0x36646919F20EAFFC(*bParam0))
			{
				func_176(bParam0, 1);
				return;
			}
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) > bParam0->f_2 || !func_184(*bParam0, 2104565373))
			{
				func_163(bParam0);
			}
			break;
		case 12:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) >= bParam0->f_2)
			{
				UNK_0xF3268524E9BE6D6E(*bParam0, UNK_0x16F2683693E537C9(), 500f, -1, 0, 1);
				bParam0->f_6 = 5;
			}
			else
			{
				UNK_0x9DD8618CA5BF832D(*bParam0, 120, true);
			}
			break;
		case 13:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) >= bParam0->f_2)
			{
				if (!func_157(*bParam0, UNK_0x16F2683693E537C9(), 15f, 1))
				{
					func_163(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
				else if (func_177(Local_111[func_171(bParam0->f_10) /*11*/], *bParam0, 1126825984 /* Float: 170f */, 1, 250, 7))
				{
					func_176(bParam0, 0);
				}
				else
				{
					func_162(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
		case 15:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) >= bParam0->f_2)
			{
				if (!func_157(*bParam0, UNK_0x16F2683693E537C9(), 15f, 1))
				{
					func_163(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
				else if (func_177(Local_111[func_171(bParam0->f_10) /*11*/], *bParam0, 1126825984 /* Float: 170f */, 1, 250, 7))
				{
					func_176(bParam0, 0);
				}
				else
				{
					func_162(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
		case 16:
			if (UNK_0x36646919F20EAFFC(*bParam0))
			{
				func_176(bParam0, 1);
				return;
			}
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_670) >= 9000)
			{
				if (!func_161(bParam0))
				{
					func_163(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
				else
				{
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
					bParam0->f_5 = 1;
					bParam0->f_6 = 16;
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() - iLocal_670) >= 5000 && (UNK_0x1C0640BA9A7327B3() - iLocal_670) <= 5500)
			{
				if (UNK_0x405E212DDE472467(*bParam0, 0))
				{
					if (UNK_0x6B4464DA5794D055(*bParam0))
					{
						UNK_0x3F87249AEA7C74BC(*bParam0);
					}
				}
			}
			break;
		case 14:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) >= bParam0->f_2)
			{
				if (!func_157(*bParam0, UNK_0x16F2683693E537C9(), 15f, 1))
				{
					func_163(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
				else if (func_177(Local_111[func_171(bParam0->f_10) /*11*/], *bParam0, 1126825984 /* Float: 170f */, 1, 250, 7))
				{
					func_176(bParam0, 0);
				}
				else
				{
					func_162(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
		case 17:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) >= bParam0->f_2)
			{
				if (!func_157(*bParam0, UNK_0x16F2683693E537C9(), 15f, 1))
				{
					func_163(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
				else if (func_177(Local_111[func_171(bParam0->f_10) /*11*/], *bParam0, 1126825984 /* Float: 170f */, 1, 250, 7))
				{
					func_176(bParam0, 0);
				}
				else
				{
					func_162(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
		case 20:
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (func_177(*bParam0, UNK_0x16F2683693E537C9(), 1126825984 /* Float: 170f */, 1, 250, 7))
				{
					func_176(bParam0, 1);
					return;
				}
			}
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) >= 6000)
			{
				if (!UNK_0x3D1053F9EB43B7AD(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 5f, 0f, -2f), UNK_0x68F4C0EC296D3901(bLocal_109, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
				{
					func_163(bParam0);
				}
				else
				{
					func_168(bParam0);
					func_168(&(Local_111[func_171(bParam0->f_10) /*11*/]));
				}
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			}
			func_172(bParam0);
			break;
		case 22:
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				if (func_177(*bParam0, UNK_0x16F2683693E537C9(), 1126825984 /* Float: 170f */, 1, 250, 7))
				{
					func_176(bParam0, 1);
					return;
				}
			}
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_1) >= bParam0->f_2)
			{
				if (!func_157(*bParam0, UNK_0x16F2683693E537C9(), 15f, 1))
				{
					func_163(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
					return;
				}
				else
				{
					func_162(bParam0);
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
		case 23:
			func_202(bParam0, bParam0->f_10, 1);
			func_172(bParam0);
			if (func_107(*bParam0, vLocal_667, 2f))
			{
				if (func_159(*bParam0, vLocal_667, 1126825984 /* Float: 170f */, 0))
				{
					UNK_0xA3BF0AA5A2608191(*bParam0);
					bParam0->f_6 = 19;
					bParam0->f_5 = 1;
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
	}
}

bool func_159(bool bParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_160(vParam1 - UNK_0x68F4C0EC296D3901(bParam0, true)) };
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
		vVar3 = { func_160(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_133(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return false;
	}
	return true;
}

Vector3 func_160(vector3 vParam0)
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

bool func_161(bool bParam0)
{
	if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 0f, 10f, -2f), UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 0f, 3f, 2f), 5f, 0, true, 0) && UNK_0x4024663A44BC1535(*bParam0))
	{
		return true;
	}
	return false;
}

void func_162(bool bParam0)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_37(bVar0))
		{
			if (!UNK_0x3CAA763EEC01ADF7(*bParam0, bVar0, -1, 0, false))
			{
				bParam0->f_6 = 18;
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
}

void func_163(bool bParam0)
{
	UNK_0x0E2400AB9174FA81(2, bLocal_80, joaat("PLAYER"));
	switch (bParam0->f_8)
	{
		case 4:
			break;
		case 10:
			break;
		case 8:
			func_129();
			break;
		case 3:
			if (!func_184(*bParam0, 242628503))
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
				}
				if (!UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0))
				{
					if (bParam0->f_10 == 0)
					{
						UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(1)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						bParam0->f_7 = 1;
					}
					else
					{
						UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(0)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						bParam0->f_7 = 1;
					}
				}
			}
			break;
		case 2:
			if (!UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0))
			{
				if (bParam0->f_10 == 0)
				{
					UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(1)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					bParam0->f_7 = 1;
				}
				else
				{
					UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(0)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					bParam0->f_7 = 1;
				}
			}
			break;
		case 9:
			if (!Local_134[iLocal_661 /*25*/].f_18)
			{
				if (bParam0->f_9 == 1)
				{
					func_164(bParam0);
				}
				else if (bParam0->f_10 == 0)
				{
					UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(1)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					bParam0->f_7 = 1;
				}
				else
				{
					UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(0)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					bParam0->f_7 = 1;
				}
			}
			else if (!UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0))
			{
				if (bParam0->f_10 == 0)
				{
					UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(1)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					bParam0->f_7 = 1;
				}
				else
				{
					UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(0)), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					bParam0->f_7 = 1;
				}
			}
			break;
		default:
			break;
	}
	bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
	bParam0->f_5 = 0;
}

void func_164(bool bParam0)
{
	if (!func_184(*bParam0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
	{
		if (Local_134[iLocal_661 /*25*/].f_23 != 0)
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				UNK_0xDE7F7A4DA93201CF(*bParam0, Local_134[iLocal_661 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			UNK_0x96167B03C5A77156(*bParam0, Local_134[iLocal_661 /*25*/].f_19, 1f, 20000, -1f, 0, func_165(Local_134[iLocal_661 /*25*/].f_19, UNK_0x68F4C0EC296D3901(*bParam0, true), 1));
		}
		if (func_37(bLocal_109))
		{
			UNK_0x611DFA9294B339CA(bLocal_109, 5, 0, false);
		}
		bParam0->f_8 = bParam0->f_7;
		bParam0->f_7 = 9;
		bParam0->f_9 = 1;
	}
}

float func_165(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_166()
{
	if (func_37(bLocal_109) && func_341(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xB87D13D0C064E9D1(bLocal_109, UNK_0x16F2683693E537C9(), 1))
		{
			UNK_0xE910A68AA670B4AA(bLocal_109);
			if (func_167() || UNK_0x7F6DC62EA9922664(bLocal_109) < 851)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_167()
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 5)
	{
		if (UNK_0x464B3D84B739AE72(bLocal_109, bVar0, 0))
		{
			iVar1++;
		}
		bVar0++;
	}
	if (iVar1 >= 3)
	{
		return true;
	}
	return false;
}

void func_168(bool bParam0)
{
	if (bParam0->f_6 != 3 && bParam0->f_6 != 4)
	{
		func_169(bParam0);
		bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
		bParam0->f_6 = 3;
		bParam0->f_5 = 1;
	}
}

void func_169(bool bParam0)
{
	if (bParam0->f_7 == 9)
	{
		if (bParam0->f_9 >= 2)
		{
			if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
			{
				UNK_0x76D5D8AF296F50CE(*bParam0, 1048576000 /* Float: 0.25f */);
				UNK_0xAB690CF5866CB826(*bParam0);
				UNK_0xC6EB89C59F2AF6B8(*bParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, false, 0, 0, 0);
			}
		}
	}
}

float func_170(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_172(bool bParam0)
{
	if (func_37(bLocal_109) && (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_109, 0) && !UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0)))
	{
		if (UNK_0x9C66D99E63E8E24C(bLocal_109) > 0f)
		{
			bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			bParam0->f_8 = bParam0->f_7;
			bParam0->f_5 = 1;
			bParam0->f_6 = 21;
		}
	}
}

int func_173(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_174(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_174(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_175(UNK_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			UNK_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			UNK_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (UNK_0xEC560E589DF8370E(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_175(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_175(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_175(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_176(bool bParam0, bool bParam1)
{
	func_169(bParam0);
	if ((UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) || bParam1) || bParam0->f_6 == 23)
	{
		if (!func_157(UNK_0x16F2683693E537C9(), *bParam0, 10f, 1))
		{
			if (!func_184(*bParam0, 1805844857))
			{
				bParam0->f_6 = 5;
				bParam0->f_5 = 1;
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			bParam0->f_6 = 10;
			bParam0->f_5 = 1;
			bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
		}
	}
	else if (bParam0->f_5 != 1)
	{
		if (!func_184(*bParam0, 780511057) && !func_184(*bParam0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			bParam0->f_5 = 1;
			bParam0->f_6 = 21;
			bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
		}
	}
}

bool func_177(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_183(bParam0, bParam1);
	if (!func_10(bParam0) || !func_10(bParam1))
	{
		if (iVar4 != -1)
		{
			func_182(&(Local_38[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_181(bParam0, bParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_180();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_38[iVar4 /*4*/].f_1 = bParam0;
		Local_38[iVar4 /*4*/].f_2 = bParam1;
	}
	vVar1 = { UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f) };
	bVar0 = func_178(&(Local_38[iVar4 /*4*/]), vVar1, bParam1, &(Local_38[iVar4 /*4*/].f_3), bParam0, iParam5);
	return (bVar0 || (UNK_0x1C0640BA9A7327B3() - Local_38[iVar4 /*4*/].f_3) < iParam4);
}

int func_178(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	int iVar8;

	bVar7 = false;
	if (!func_10(bParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_179(bParam4, iParam7) };
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
		func_10(bVar7);
		if (UNK_0x940C1429253D3B1B(bVar7) == bParam4)
		{
			if (bLocal_79)
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
		func_10(bVar7);
		if (UNK_0x405E212DDE472467(bParam4, 0))
		{
			if (UNK_0x96A5FE5834B81CE7(bVar7) == UNK_0x6937EA2286828455(bParam4, 0))
			{
				if (bLocal_79)
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

Vector3 func_179(bool bParam0, int iParam1)
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

int func_180()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_181(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_160(UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true)) };
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
		vVar3 = { func_160(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_133(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return false;
	}
	return true;
}

void func_182(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_183(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == bParam0 && Local_38[iVar0 /*4*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_184(bool bParam0, int iParam1)
{
	if (func_341(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_185(bool bParam0)
{
	float fVar0;

	if (bParam0->f_9 == 0 && bParam0->f_10 == 1)
	{
	}
	switch (bParam0->f_7)
	{
		case 1:
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_109, 1))
			{
				func_176(bParam0, 0);
				return;
			}
			if (bParam0->f_10 == 0)
			{
				func_196(bParam0, 1);
			}
			else
			{
				func_196(bParam0, 0);
			}
			break;
		case 2:
			if (UNK_0x82CCEAB29E9451DD(*bParam0, bLocal_109))
			{
				if (!func_184(*bParam0, -1794415470))
				{
					if (bParam0->f_10 == 0)
					{
						func_130(0);
					}
					else
					{
						bParam0->f_7 = 3;
					}
				}
			}
			else if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_109, 1))
			{
				func_176(bParam0, 0);
				return;
			}
			break;
		case 3:
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_109, 1))
			{
				func_176(bParam0, 0);
				return;
			}
			if (bLocal_664)
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					if (!Local_134[iLocal_661 /*25*/].f_18)
					{
						if (func_107(*bParam0, Local_134[iLocal_661 /*25*/], 20f))
						{
							if (Local_134[iLocal_661 /*25*/].f_9 && UNK_0x8B38C0DAEEDB5F9C(bLocal_109))
							{
								func_195();
							}
						}
					}
				}
				else
				{
					bParam0->f_7 = 10;
				}
			}
			break;
		case 4:
			if (func_107(*bParam0, Local_134[iLocal_661 /*25*/], 25f))
			{
				if (Local_134[iLocal_661 /*25*/].f_9)
				{
					func_194(bParam0);
				}
				else
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
					func_130(0);
				}
			}
			break;
		case 5:
			if (func_37(bLocal_109))
			{
				UNK_0xE0C0351D5B931E37(bLocal_109, 25f, 10, 0);
				fVar0 = UNK_0x9C66D99E63E8E24C(bLocal_109);
				if (fVar0 < 8f)
				{
					func_194(bParam0);
				}
			}
			break;
		case 6:
			if (!func_184(*bParam0, 242628503) && UNK_0x8B38C0DAEEDB5F9C(bLocal_109))
			{
				if (bLocal_664)
				{
					bParam0->f_8 = bParam0->f_7;
					bParam0->f_7 = 7;
				}
				else
				{
					UNK_0x75CDA8644CD3B5F5(*bParam0, 0, 0);
					bParam0->f_8 = bParam0->f_7;
					bParam0->f_7 = 8;
				}
			}
			break;
		case 7:
			if (func_341(Local_111[1 /*11*/]))
			{
				if (UNK_0xC42A92762C58E1B9(Local_111[1 /*11*/], bLocal_109, 0) && Local_111[1 /*11*/].f_7 == 3)
				{
					func_130(0);
				}
			}
			break;
		case 8:
			if (!UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0))
			{
				func_164(bParam0);
			}
			break;
		case 9:
			func_186(bParam0);
			break;
	}
}

void func_186(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0->f_9 >= 1 && bParam0->f_9 != 0)
	{
	}
	switch (bParam0->f_9)
	{
		case 1:
			if (!func_184(*bParam0, -2015108952))
			{
				UNK_0xDD353D0E9C789D0E(&iVar0);
				if (func_170(UNK_0x68F4C0EC296D3901(*bParam0, true), Local_134[iLocal_661 /*25*/].f_19) > 1.5f)
				{
					UNK_0x796BDF31572BB055(false, Local_134[iLocal_661 /*25*/].f_19, 0);
				}
				UNK_0xC6EB89C59F2AF6B8(false, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iVar0);
				UNK_0x78ADC381772E3D54(*bParam0, iVar0);
				UNK_0xF82EA857DA10E0CD(&iVar0);
				bParam0->f_9 = 2;
			}
			else if (func_191(Local_134[iLocal_661 /*25*/].f_19, *bParam0, 1f, 1f, 8f))
			{
				func_190(bParam0);
				return;
			}
			UNK_0x7EB60BF335619074(*bParam0, 0.2f);
			break;
		case 2:
			if (func_184(*bParam0, 242628503))
			{
				if (UNK_0xB4ECF989E2C1DAC8(*bParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(*bParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						UNK_0x79C43E2BAC7C696F(*bParam0, "missfbi4prepp1_garbageman", 0f);
						UNK_0x9237814869823B3E(*bParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_134[iLocal_661 /*25*/].f_17) && !UNK_0xD59B17D2DFF98E26(Local_134[iLocal_661 /*25*/].f_17))
						{
							UNK_0x9F528B1B53FBC5D9(Local_134[iLocal_661 /*25*/].f_17, *bParam0, UNK_0x4A089F2B762B8D33(*bParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_191(Local_134[iLocal_661 /*25*/].f_19, *bParam0, 1f, 1f, 8f))
				{
					func_190(bParam0);
					return;
				}
			}
			else if (!func_184(*bParam0, 713668775))
			{
				if (func_37(bLocal_109))
				{
					UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, UNK_0xD9522BA9E27E1349(bLocal_109));
				}
				bParam0->f_9 = 3;
			}
			UNK_0x7EB60BF335619074(*bParam0, 0.2f);
			break;
		case 3:
			if (func_37(bLocal_109))
			{
				if (!func_191(UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 0f, -5.5f, 0f), bLocal_109, 1.9f, 1.9f, 8f))
				{
					if (UNK_0x5A91F08DF773C39D(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, false, true, 0))
					{
						if (!func_184(*bParam0, 713668775))
						{
							UNK_0xDD353D0E9C789D0E(&iVar1);
							if (func_170(UNK_0x68F4C0EC296D3901(*bParam0, true), UNK_0x68F4C0EC296D3901(bLocal_109, true)) > 3f)
							{
								UNK_0xE655C47E46F9A7E4(false, UNK_0xD9522BA9E27E1349(bLocal_109), 0);
							}
							UNK_0xC6EB89C59F2AF6B8(false, "missfbi4prepp1", "_bag_throw_garbage_man", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
							UNK_0x75ABDC5F81978924(iVar1);
							UNK_0x78ADC381772E3D54(*bParam0, iVar1);
							UNK_0xF82EA857DA10E0CD(&iVar1);
							bParam0->f_9 = 4;
						}
					}
					else if (!func_184(*bParam0, 713668775))
					{
						UNK_0x96167B03C5A77156(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, UNK_0xD9522BA9E27E1349(bLocal_109));
					}
				}
				else
				{
					func_188(bParam0);
				}
			}
			break;
		case 4:
			if (!func_191(UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 0f, -5.5f, 0f), *bParam0, 1.9f, 1.9f, 8f))
			{
				if (func_184(*bParam0, 242628503))
				{
					if (UNK_0xB4ECF989E2C1DAC8(*bParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (UNK_0x8CA9406E01C7EE58(*bParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_134[iLocal_661 /*25*/].f_17))
							{
								if (UNK_0xD59B17D2DFF98E26(Local_134[iLocal_661 /*25*/].f_17))
								{
									UNK_0x76D5D8AF296F50CE(*bParam0, 1048576000 /* Float: 0.25f */);
									UNK_0xAB690CF5866CB826(*bParam0);
									UNK_0x15AFB6CBDE990FB6(Local_134[iLocal_661 /*25*/].f_17, 1, false);
									UNK_0x6662F466071F8128(Local_134[iLocal_661 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
									UNK_0xEF3C30F70D2ED135(Local_134[iLocal_661 /*25*/].f_17, 1, UNK_0x08D89CE2E20AE305(*bParam0), 0, 1, 1, 0);
								}
								if (UNK_0x1B3D109B39CC2C89(Local_134[iLocal_661 /*25*/].f_17, bLocal_109))
								{
									func_187(&(Local_134[iLocal_661 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					bParam0->f_9 = 0;
					if (func_37(bLocal_109))
					{
						UNK_0x152BCACCF710B36E(bLocal_109, 5, 0);
						func_187(&(Local_134[iLocal_661 /*25*/].f_17));
					}
					func_163(bParam0);
				}
			}
			else
			{
				func_188(bParam0);
			}
			break;
		case 5:
			break;
	}
}

void func_187(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		UNK_0xF690C84DADBB3551(bParam0);
	}
}

void func_188(bool bParam0)
{
	int iVar0;
	int iVar1;

	UNK_0x0E2400AB9174FA81(5, bLocal_80, joaat("PLAYER"));
	func_169(bParam0);
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x405E212DDE472467(*bParam0, 0))
		{
			UNK_0x786028C6BB27BD7A(*bParam0, UNK_0x16F2683693E537C9(), 8f, -1f, 10f, 0);
		}
		else
		{
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x75CDA8644CD3B5F5(false, 0, 0);
			UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(*bParam0, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
	}
	else
	{
		UNK_0xDD353D0E9C789D0E(&iVar1);
		UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
		UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
		UNK_0x75ABDC5F81978924(iVar1);
		UNK_0x78ADC381772E3D54(*bParam0, iVar1);
		UNK_0xF82EA857DA10E0CD(&iVar1);
	}
	UNK_0x76D5D8AF296F50CE(*bParam0, 1048576000 /* Float: 0.25f */);
	UNK_0xAB690CF5866CB826(*bParam0);
	func_189();
	if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_4))
	{
		bParam0->f_4 = func_173(*bParam0, 1, 145);
	}
	bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
	bParam0->f_8 = bParam0->f_7;
	bParam0->f_5 = 1;
	bParam0->f_6 = 15;
}

void func_189()
{
	Local_82 = 0;
	Local_82.f_26 = 0;
	Local_82.f_18 = 0;
}

void func_190(bool bParam0)
{
	int iVar0;
	int iVar1;

	UNK_0x0E2400AB9174FA81(5, bLocal_80, joaat("PLAYER"));
	func_169(bParam0);
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x405E212DDE472467(*bParam0, 0))
		{
			UNK_0x786028C6BB27BD7A(*bParam0, UNK_0x16F2683693E537C9(), 8f, -1f, 10f, 0);
		}
		else
		{
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x75CDA8644CD3B5F5(false, 0, 0);
			UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(*bParam0, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
	}
	else
	{
		UNK_0xDD353D0E9C789D0E(&iVar1);
		UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
		UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
		UNK_0x75ABDC5F81978924(iVar1);
		UNK_0x78ADC381772E3D54(*bParam0, iVar1);
		UNK_0xF82EA857DA10E0CD(&iVar1);
	}
	UNK_0x76D5D8AF296F50CE(*bParam0, 1048576000 /* Float: 0.25f */);
	UNK_0xAB690CF5866CB826(*bParam0);
	func_189();
	if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_4))
	{
		bParam0->f_4 = func_173(*bParam0, 1, 145);
	}
	bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
	bParam0->f_8 = bParam0->f_7;
	bParam0->f_5 = 1;
	bParam0->f_6 = 14;
}

bool func_191(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	Local_82.f_2 = { vParam0 };
	Local_82.f_8 = { vParam4 };
	func_192(&Local_82, bParam3);
	if (Local_82.f_26)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0xE2F1E99DD161A861(Local_82.f_18))
			{
				if (func_10(Local_82.f_18))
				{
					if (UNK_0x96A5FE5834B81CE7(Local_82.f_18) == UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1))
					{
						return true;
					}
				}
			}
		}
		else if (UNK_0xEC560E589DF8370E(Local_82.f_18))
		{
			if (func_10(Local_82.f_18))
			{
				if (UNK_0x940C1429253D3B1B(Local_82.f_18) == UNK_0x16F2683693E537C9())
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_192(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x1EC301670B54C6DE(*iParam0, &iVar0, &(iParam0->f_20), &(iParam0->f_23), &(iParam0->f_18));
	iParam0->f_19 = 2 == iVar1;
	if (iParam0->f_19)
	{
		if (0 == iVar0)
		{
			iParam0->f_26 = 0;
		}
		else
		{
			iParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_193(iParam0, bParam1);
	}
}

void func_193(int iParam0, bool bParam1)
{
	switch (iParam0->f_1)
	{
		case 0:
			break;
		case 1:
			*iParam0 = UNK_0xCD02F8660C47B801(iParam0->f_2, iParam0->f_5, 511, bParam1, 7);
			break;
		case 2:
			*iParam0 = UNK_0x58D828B8F1B1B3BE(iParam0->f_17, 511, 4);
			break;
		case 3:
			*iParam0 = UNK_0xA85C558B4545D4FB(iParam0->f_17, 511, 4);
			break;
		case 4:
			*iParam0 = UNK_0xA50E81FC2F15181B(iParam0->f_2, iParam0->f_8, iParam0->f_11, iParam0->f_14, 6, bParam1, 4);
			break;
		case 5:
			*iParam0 = UNK_0x6D4C9F7CF124AE37(iParam0->f_2, iParam0->f_5, iParam0->f_15, 511, bParam1, 4);
			break;
	}
	iParam0->f_16 = *iParam0 != 0;
}

void func_194(bool bParam0)
{
	int iVar0;

	if (func_37(bLocal_109))
	{
		UNK_0xDD353D0E9C789D0E(&iVar0);
		UNK_0xE9362E4D600DD12A(false, bLocal_109, Local_134[iLocal_661 /*25*/].f_3, 8f, 0, joaat("TRASH"), 786469, 10f, 15f);
		UNK_0x27F3789FF35EEDF1(false, bLocal_109, Local_134[iLocal_661 /*25*/].f_3, Local_134[iLocal_661 /*25*/].f_8, Local_134[iLocal_661 /*25*/].f_10, 5f, 1);
		UNK_0x75ABDC5F81978924(iVar0);
		UNK_0x78ADC381772E3D54(*bParam0, iVar0);
		UNK_0xF82EA857DA10E0CD(&iVar0);
		bParam0->f_7 = 6;
	}
}

void func_195()
{
	func_164(&(Local_111[1 /*11*/]));
}

void func_196(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_191(UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(bParam1)), bLocal_109, 1.9f, 1.9f, 8f))
	{
		if (UNK_0x3D1053F9EB43B7AD(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 5f, 0f, -2f), UNK_0x68F4C0EC296D3901(bLocal_109, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 5f, 0f, -2f), UNK_0x68F4C0EC296D3901(bLocal_109, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
		{
			func_197(bParam0);
		}
		else if (!func_184(*bParam0, 1227113341) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(bLocal_109, 5f, 0f, -2f), UNK_0x68F4C0EC296D3901(bLocal_109, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
		{
			UNK_0xA3BF0AA5A2608191(*bParam0);
			UNK_0xE185F110925D87DB(*bParam0, UNK_0x16F2683693E537C9(), -1, 4f, 1f, 1073741824 /* Float: 2f */, 0);
		}
	}
	else if (func_107(*bParam0, UNK_0x68E4ADDDDCD7BDDE(bLocal_109, func_137(bParam1)), 5f))
	{
		bVar0 = -1;
		if (!bParam1)
		{
			bVar0 = false;
		}
		UNK_0x5B1D360B9C6F0A09(*bParam0, bLocal_109, -1, bVar0, 1f, 8388609, 0);
		bParam0->f_7 = 2;
	}
}

void func_197(bool bParam0)
{
	int iVar0;
	int iVar1;

	UNK_0x0E2400AB9174FA81(5, bLocal_80, joaat("PLAYER"));
	func_169(bParam0);
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x405E212DDE472467(*bParam0, 0))
		{
			UNK_0x786028C6BB27BD7A(*bParam0, UNK_0x16F2683693E537C9(), 8f, -1f, 10f, 0);
		}
		else
		{
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x75CDA8644CD3B5F5(false, 0, 0);
			UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(*bParam0, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
	}
	else
	{
		UNK_0xDD353D0E9C789D0E(&iVar1);
		UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
		UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
		UNK_0x75ABDC5F81978924(iVar1);
		UNK_0x78ADC381772E3D54(*bParam0, iVar1);
		UNK_0xF82EA857DA10E0CD(&iVar1);
	}
	UNK_0x76D5D8AF296F50CE(*bParam0, 1048576000 /* Float: 0.25f */);
	UNK_0xAB690CF5866CB826(*bParam0);
	func_189();
	bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
	bParam0->f_8 = bParam0->f_7;
	bParam0->f_5 = 1;
	bParam0->f_6 = 13;
}

void func_198(bool bParam0)
{
	if (bParam0->f_5 != 1)
	{
		if (func_37(bLocal_109) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (!func_184(*bParam0, 2104565373) && UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0))
			{
				if (func_157(UNK_0x16F2683693E537C9(), bLocal_109, 10f, 1))
				{
					if (UNK_0x1B3D109B39CC2C89(bLocal_109, UNK_0x16F2683693E537C9()))
					{
						UNK_0xFFDDE8CC59EB6D40(*bParam0, UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
						bParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_199()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iLocal_81 - 1))
	{
		if (Local_134[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_134[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_661 && func_10(Local_134[iVar0 /*25*/].f_17)) && func_201(Local_134[iVar0 /*25*/].f_17, UNK_0x16F2683693E537C9(), 1) > 200f)
				{
					UNK_0xF690C84DADBB3551(&(Local_134[iVar0 /*25*/].f_17));
					Local_134[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_134[iVar0 /*25*/].f_23 != 0)
			{
				if (func_107(UNK_0x16F2683693E537C9(), Local_134[iVar0 /*25*/], 100f) || func_107(Local_111[0 /*11*/], Local_134[iVar0 /*25*/], 120f))
				{
					Local_134[iVar0 /*25*/].f_24 = func_200(&(Local_134[iVar0 /*25*/].f_17), Local_134[iVar0 /*25*/].f_23, Local_134[iVar0 /*25*/].f_19, Local_134[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_200(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	if (!UNK_0xC844350D5D58C99A(*uParam0))
	{
		if (func_152(bParam1, "Loading", 0))
		{
			*uParam0 = UNK_0x7707E48765093646(bParam1, vParam2, true, true, false);
			if (UNK_0xC844350D5D58C99A(*uParam0))
			{
				UNK_0xD8F6A53F4799FAFE(*uParam0, bParam5);
				UNK_0xAC0C6241732E36F6(*uParam0);
				if (bParam6)
				{
					func_151(bParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_201(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	else
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

void func_202(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0->f_5 != 1 || bParam2)
	{
		if (!func_341(Local_111[func_171(iParam1) /*11*/]))
		{
			if (!bLocal_665)
			{
				if (UNK_0xC844350D5D58C99A(Local_111[func_171(iParam1) /*11*/]))
				{
					if (func_181(*bParam0, Local_111[func_171(iParam1) /*11*/], 140f, 0) || func_157(Local_111[func_171(iParam1) /*11*/], *bParam0, 3f, 1))
					{
						func_176(bParam0, 0);
						bLocal_665 = true;
						return;
					}
					else
					{
						vLocal_667 = { UNK_0x68F4C0EC296D3901(Local_111[func_171(iParam1) /*11*/], true) };
						bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
						bParam0->f_8 = bParam0->f_7;
						bParam0->f_5 = 1;
						bParam0->f_6 = 11;
					}
				}
				else
				{
					func_176(bParam0, 0);
				}
			}
		}
		else if (Local_111[func_171(iParam1) /*11*/].f_6 == 22)
		{
			if (func_181(*bParam0, Local_111[func_171(iParam1) /*11*/], 140f, 0) && func_157(Local_111[func_171(iParam1) /*11*/], UNK_0x16F2683693E537C9(), 15f, 1))
			{
				bParam0->f_5 = 1;
				bParam0->f_6 = 21;
			}
		}
		else if (Local_111[func_171(iParam1) /*11*/].f_6 == 5 || Local_111[func_171(iParam1) /*11*/].f_6 == 7)
		{
			if (func_157(Local_111[func_171(iParam1) /*11*/], *bParam0, 10f, 1))
			{
				func_176(bParam0, 0);
			}
		}
		if (func_213(*bParam0))
		{
			func_169(bParam0);
			bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
			bParam0->f_8 = bParam0->f_7;
			bParam0->f_5 = 1;
			bParam0->f_6 = 21;
		}
		if (bParam0->f_10 == 0 && bParam0->f_7 == 4)
		{
			if (func_161(bParam0))
			{
				if (UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0))
				{
					UNK_0xFFDDE8CC59EB6D40(*bParam0, UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					UNK_0x37C67519A5493B8D(bLocal_109, 2000f);
					iLocal_670 = UNK_0x1C0640BA9A7327B3();
					bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
					bParam0->f_6 = 16;
					bParam0->f_5 = 1;
				}
			}
		}
		if (func_204(*bParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_203(bParam0))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				if (func_37(bLocal_109))
				{
					if (UNK_0xC42A92762C58E1B9(*bParam0, bLocal_109, 0))
					{
						if (UNK_0x9C66D99E63E8E24C(bLocal_109) > 5f)
						{
							if (iParam1 == 0)
							{
								UNK_0x89258193691A7600(*bParam0, bLocal_109, UNK_0x16F2683693E537C9(), 8, 30f, 786469, 300f, 2f, 1);
								bParam0->f_6 = 7;
								UNK_0x8BE3D040D15AEA1D(Local_111[func_171(iParam1) /*11*/], -1);
								Local_111[func_171(iParam1) /*11*/].f_6 = 10;
								Local_111[func_171(iParam1) /*11*/].f_5 = 1;
								bParam0->f_5 = 1;
								bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
								Local_111[func_171(iParam1) /*11*/].f_1 = UNK_0x1C0640BA9A7327B3();
							}
							else
							{
								UNK_0x8BE3D040D15AEA1D(*bParam0, -1);
								bParam0->f_6 = 12;
								UNK_0x89258193691A7600(Local_111[func_171(iParam1) /*11*/], bLocal_109, UNK_0x16F2683693E537C9(), 8, 30f, 786469, 300f, 2f, 1);
								Local_111[func_171(iParam1) /*11*/].f_6 = 5;
								Local_111[func_171(iParam1) /*11*/].f_5 = 1;
								bParam0->f_5 = 1;
								bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
								Local_111[func_171(iParam1) /*11*/].f_1 = UNK_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_176(bParam0, 0);
							if (UNK_0xC844350D5D58C99A(Local_111[func_171(iParam1) /*11*/]))
							{
								if (func_181(Local_111[func_171(iParam1) /*11*/], UNK_0x16F2683693E537C9(), 1126825984 /* Float: 170f */, 0))
								{
									func_176(&(Local_111[func_171(iParam1) /*11*/]), 0);
								}
							}
						}
						UNK_0xE910A68AA670B4AA(*bParam0);
					}
					else
					{
						func_176(bParam0, 0);
						if (UNK_0xC844350D5D58C99A(Local_111[func_171(iParam1) /*11*/]))
						{
							if (func_177(Local_111[func_171(iParam1) /*11*/], *bParam0, 1126825984 /* Float: 170f */, 1, 250, 7))
							{
								func_176(&(Local_111[func_171(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				bParam0->f_8 = bParam0->f_7;
				bParam0->f_5 = 1;
				bParam0->f_6 = 21;
				UNK_0xE910A68AA670B4AA(*bParam0);
				if (func_177(Local_111[func_171(iParam1) /*11*/], *bParam0, 1126825984 /* Float: 170f */, 1, 250, 7))
				{
					Local_111[func_171(iParam1) /*11*/].f_1 = UNK_0x1C0640BA9A7327B3();
					Local_111[func_171(iParam1) /*11*/].f_8 = bParam0->f_7;
					Local_111[func_171(iParam1) /*11*/].f_5 = 1;
					Local_111[func_171(iParam1) /*11*/].f_6 = 21;
					UNK_0xE910A68AA670B4AA(Local_111[func_171(iParam1) /*11*/]);
				}
			}
			bParam0->f_5 = 1;
		}
		else if (UNK_0x36646919F20EAFFC(*bParam0))
		{
			func_169(bParam0);
			UNK_0xF3268524E9BE6D6E(*bParam0, UNK_0x16F2683693E537C9(), 500f, -1, 0, 1);
			bParam0->f_6 = 2;
			bParam0->f_5 = 1;
			bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
		}
		if (UNK_0x869EFD0BC0868856(*bParam0))
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				if (UNK_0xD59B17D2DFF98E26(Local_134[iLocal_661 /*25*/].f_17))
				{
					UNK_0x15AFB6CBDE990FB6(Local_134[iLocal_661 /*25*/].f_17, 1, false);
					UNK_0xEF3C30F70D2ED135(Local_134[iLocal_661 /*25*/].f_17, 1, UNK_0x08D89CE2E20AE305(*bParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (bParam0->f_5 != 1)
	{
		if (func_341(Local_111[func_171(iParam1) /*11*/]))
		{
			if (UNK_0x36646919F20EAFFC(Local_111[func_171(iParam1) /*11*/]))
			{
				func_169(bParam0);
				UNK_0xF3268524E9BE6D6E(*bParam0, UNK_0x16F2683693E537C9(), 120f, -1, 0, 0);
				bParam0->f_1 = UNK_0x1C0640BA9A7327B3();
				bParam0->f_6 = 7;
				bParam0->f_5 = 1;
			}
		}
	}
}

bool func_203(bool bParam0)
{
	if ((UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(*bParam0, 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6)) && UNK_0x5F596B0E13677FE9(UNK_0x16F2683693E537C9()))
	{
		return true;
	}
	return false;
}

bool func_204(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;

	if (func_10(UNK_0x16F2683693E537C9()) && func_10(bParam0))
	{
		if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		if (func_209(bParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return true;
		}
		if (!UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - UNK_0x68F4C0EC296D3901(bParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_208(UNK_0x16F2683693E537C9(), bParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return false;
		}
		else if (func_205(bParam0, fParam3))
		{
			return true;
		}
	}
	return false;
}

bool func_205(bool bParam0, float fParam1)
{
	bool bVar0;

	if (func_10(UNK_0x16F2683693E537C9()) && func_10(bParam0))
	{
		if (func_207(bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
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
				if (func_206(bParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_206(bool bParam0, float fParam1)
{
	return func_177(bParam0, UNK_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_207(bool bParam0)
{
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		return true;
	}
	return false;
}

bool func_208(bool bParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x08D89CE2E20AE305(bParam0) };
	vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / SYSTEM::VDIST(vVar3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

bool func_209(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_10(UNK_0x16F2683693E537C9()) && func_10(bParam0))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			bVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_212(bParam0, bParam1, fVar0, bVar1))
			{
				return true;
			}
			if (func_210(bParam0, bVar1, bParam3, bParam4))
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
				if (func_212(bParam0, bParam1, fVar0, bVar1))
				{
					return true;
				}
			}
			if (func_210(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_210(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
				if (func_211(bParam0, bParam1))
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
			if (func_211(bParam0, bParam1))
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

bool func_211(bool bParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;

	if ((((UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_GRENADE"), bParam1, &vVar1, &uVar0, 0) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_SMOKEGRENADE"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_BZGAS"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_STICKYBOMB"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_MOLOTOV"), bParam1, &vVar1, &uVar0, 0))
	{
		if (func_159(bParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_212(bool bParam0, bool bParam1, float fParam2, bool bParam3)
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

bool func_213(bool bParam0)
{
	if (func_157(bParam0, UNK_0x16F2683693E537C9(), 6f, 1))
	{
		if (!UNK_0x405E212DDE472467(bParam0, 0))
		{
			if (UNK_0x1B3D109B39CC2C89(bParam0, UNK_0x16F2683693E537C9()))
			{
				return true;
			}
		}
	}
	return false;
}

void func_214()
{
	if (func_37(Local_868))
	{
		if (func_157(UNK_0x16F2683693E537C9(), Local_868, 100f, 1) && !bLocal_837)
		{
			UNK_0xD4D331DFE794EACD(joaat("TRASH"), 3);
			if (!UNK_0x1F04E7FA44219580(joaat("TRASH")))
			{
				bLocal_837 = true;
			}
		}
		else if (!func_157(UNK_0x16F2683693E537C9(), Local_868, 120f, 1) && bLocal_837)
		{
			UNK_0x058E3033265DBA9A(joaat("TRASH"));
			bLocal_837 = false;
		}
	}
}

void func_215(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, bool bParam8, bool bParam9, bool bParam10)
{
	if (func_37(*bParam0))
	{
		switch (*bParam2)
		{
			case 0:
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					func_7(bParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9(func_114(func_77()));
					}
					if (*bParam0 == bParam8)
					{
						*bParam2 = 1;
					}
					else
					{
						*bParam2 = 2;
					}
				}
				else if (func_220(*bParam0) || func_219(*bParam0))
				{
					func_7(bParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9(func_114(func_77()));
					}
					*bParam2 = 3;
				}
				else
				{
					if (func_106(func_115(func_77(), bParam9), 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9(func_115(func_77(), bParam9));
					}
					if (func_77() != 33)
					{
						func_217(bParam0);
					}
					else
					{
						func_216(bParam0, bParam1);
					}
				}
				break;
			case 2:
			case 1:
				if ((!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0) && !func_220(*bParam0)) && !func_219(*bParam0))
				{
					func_7(bParam4);
					if (!UNK_0x5A91F08DF773C39D(*bParam0, vParam5, bParam10, bParam10, 2f, false, true, 2))
					{
						func_125(bParam3, *bParam0, 1);
					}
					*bParam2 = 0;
				}
				break;
			case 3:
				if (!func_220(*bParam0) && !func_219(*bParam0))
				{
					func_7(bParam4);
					if (!UNK_0x5A91F08DF773C39D(*bParam0, vParam5, bParam10, bParam10, 2f, false, true, 2))
					{
						func_125(bParam3, *bParam0, 1);
					}
					*bParam2 = 0;
				}
				break;
		}
	}
	else if (func_77() != 33)
	{
		func_217(bParam0);
	}
	else
	{
		func_216(bParam0, bParam1);
	}
}

void func_216(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!bLocal_28)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (bVar0 != *bParam0)
			{
				if (func_37(bVar0))
				{
					iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
					if (iVar1 == joaat("TRASH"))
					{
						*bParam1 = *bParam0;
						func_6(bParam0);
						*bParam0 = bVar0;
						func_36(*bParam0, 1);
						func_36(*bParam1, 3);
						if (!UNK_0xAF6690C489CC6203(*bParam0))
						{
							UNK_0x73270B3C9CC833FD(*bParam0, true, 1);
						}
					}
					else if (iVar1 == joaat("TOWTRUCK"))
					{
						bVar2 = UNK_0xC102CE429C03E382(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0));
						if (func_10(bVar2))
						{
							bVar0 = UNK_0x96A5FE5834B81CE7(bVar2);
							if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TRASH"))
							{
								*bParam1 = *bParam0;
								func_6(bParam0);
								*bParam0 = bVar0;
								func_36(*bParam0, 1);
								func_36(*bParam1, 3);
								if (!UNK_0xAF6690C489CC6203(*bParam0))
								{
									UNK_0x73270B3C9CC833FD(*bParam0, true, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_217(bool bParam0)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (bVar0 != *bParam0)
		{
			if (func_37(bVar0))
			{
				if (UNK_0x134B62B726CEC8E6(bVar0) == func_218(func_77()))
				{
					func_6(bParam0);
					*bParam0 = bVar0;
					func_36(*bParam0, 1);
					UNK_0x73270B3C9CC833FD(*bParam0, true, 1);
				}
			}
		}
	}
}

int func_218(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("TRASH");
			break;
		case 34:
			iVar0 = joaat("TOWTRUCK");
			break;
		case 78:
			iVar0 = 0;
			break;
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("GAUNTLET");
			break;
	}
	return iVar0;
}

bool func_219(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if ((func_341(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && func_37(bParam0))
	{
		bVar0 = UNK_0x728870EB733D12A1();
		if (func_37(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if ((iVar1 == joaat("CARGOBOB") || iVar1 == joaat("CARGOBOB2")) || iVar1 == joaat("CARGOBOB3"))
			{
				if (UNK_0x2709213DA9C091FF(bVar0))
				{
					if (UNK_0xED55EA714F84A53E(bVar0, bParam0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_220(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if ((func_341(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && func_37(bParam0))
	{
		bVar0 = UNK_0x728870EB733D12A1();
		if (func_37(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("TOWTRUCK") || iVar1 == joaat("TOWTRUCK2"))
			{
				if (UNK_0x6D18156F72BE0773(bVar0, bParam0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_221()
{
	func_215(&bLocal_874, &bLocal_875, &bLocal_686, &uLocal_822, &uLocal_821, vLocal_827, Local_868, 0, 1090519040 /* Float: 8f */);
	func_155();
	func_238();
	func_214();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0 && !func_237())
				{
					func_117(&uLocal_821, vLocal_827, 1);
					func_121("PRA_TAKBACK", &iLocal_820);
				}
				iLocal_684 = 1;
			}
			break;
		case 1:
			func_120(&uLocal_821, vLocal_827, &bLocal_685, bLocal_686, &iLocal_820, &iLocal_838);
			func_227();
			if (func_225(bLocal_874, vLocal_827, &uLocal_821, bLocal_685, bLocal_686, &iLocal_820, &iLocal_839, 0, 0, 1086324736 /* Float: 6f */))
			{
				UNK_0x8B4C4CA774181102(8f, 5f, 4);
				iLocal_684 = 2;
			}
			break;
		case 2:
			func_222();
			func_7(&uLocal_821);
			func_7(&uLocal_822);
			if (func_116(1077936128 /* Float: 3f */, 1))
			{
				func_110(0);
			}
			break;
		case 3:
			if (func_37(bLocal_874))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_874, 0))
				{
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bLocal_874, -1);
				}
				else
				{
					func_109(bLocal_874, vLocal_827, 146.5443f, 0, 1);
					func_40(1, 1, 1);
					iLocal_684 = 1;
				}
			}
			break;
	}
}

void func_222()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar1 = func_79(iVar0);
		if (!UNK_0xEB6A8945D1AC98A1(bVar1))
		{
			if (func_224(bVar1))
			{
				func_223(bVar1);
			}
		}
		iVar0++;
	}
}

int func_223(bool bParam0)
{
	bool bVar0;

	return 0;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_29(bParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_79(bVar0) != bParam0)
		{
			return 0;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return 0;
		}
		UNK_0x0674E58A79778E99(&Global_94598, bVar0);
		return 1;
	}
	return 0;
}

bool func_224(bool bParam0)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_29(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_79(bVar0) != bParam0)
		{
			return false;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_225(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if ((bParam6 == 1 || bParam6 == 2) || bParam6 == 3)
	{
		if (bParam5 == 0)
		{
			func_117(bParam4, vParam1, 1);
			if (!bParam10)
			{
				if (func_37(bParam0))
				{
					if (UNK_0x5A91F08DF773C39D(bParam0, vParam1, bParam11, bParam11, 2f, true, true, 0))
					{
						return true;
					}
				}
			}
			else if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, bParam11, bParam11, 2f, true, true, 2))
			{
				return true;
			}
			if (func_106(func_114(func_77()), 0, 0))
			{
				UNK_0x2F23E8033F1ADDD9(func_114(func_77()));
			}
			if (!func_226())
			{
				func_121(func_115(func_77(), bParam9), iParam7);
			}
		}
	}
	else if (bParam5 == 0)
	{
		if (!*iParam8)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				UNK_0x2F23E8033F1ADDD9(func_115(func_77(), 0));
			}
			func_105(func_114(func_77()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return false;
}

bool func_226()
{
	return Global_98796.f_345 > 0;
}

void func_227()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	bVar0 = false;
	while (bVar0 < 3)
	{
		bVar2 = func_79(bVar0);
		if (!UNK_0xEB6A8945D1AC98A1(bVar2))
		{
			if (func_78(bVar2, 0))
			{
				if (!bVar1)
				{
					if (func_157(UNK_0x16F2683693E537C9(), bVar2, 5f, 1))
					{
						if (!func_237())
						{
							func_232(bVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1048[bVar0])
				{
					if (bVar0 == 0)
					{
						func_98(&uLocal_879, bVar0, bVar2, "MICHAEL", 0, 1);
					}
					else if (bVar0 == 1)
					{
						func_98(&uLocal_879, bVar0, bVar2, "FRANKLIN", 0, 1);
					}
					else if (bVar0 == 2)
					{
						func_98(&uLocal_879, bVar0, bVar2, "TREVOR", 0, 1);
					}
					iLocal_1048[bVar0] = 1;
				}
			}
			if (!func_224(bVar2))
			{
				if (func_78(bVar2, 0))
				{
					if (func_231(bVar2) || func_229(bVar2))
					{
						if (func_228(bVar2, 0))
						{
							UNK_0x73270B3C9CC833FD(bVar2, true, 1);
							UNK_0x11AD11297DC58CC7(bVar2, true);
							UNK_0xA3BF0AA5A2608191(bVar2);
						}
					}
				}
			}
			else if (UNK_0x9C77D2D0559097F0(bVar2, 1))
			{
				if (func_231(bVar2))
				{
					if (UNK_0xD1960163A3042274(bVar2, -1273030092) != 1 && UNK_0xD1960163A3042274(bVar2, -1273030092) != 0)
					{
						if (UNK_0xD1B4D22E0BA9B0C8(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							UNK_0xE9362E4D600DD12A(bVar2, UNK_0x6937EA2286828455(bVar2, 0), vLocal_827, 20f, 0, false, 34340901, 2f, 10f);
						}
						else
						{
							UNK_0x10FEEAFF01E32639(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_229(bVar2))
				{
					if (func_37(Local_868))
					{
						if (!func_157(bVar2, Local_868, 17f, 1))
						{
							if (UNK_0xD1960163A3042274(bVar2, -1273030092) != 1 && UNK_0xD1960163A3042274(bVar2, -1273030092) != 0)
							{
								UNK_0x60274E99F9B27DEA(bVar2, UNK_0x6937EA2286828455(bVar2, 0), Local_868, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_223(bVar2);
				}
			}
		}
		bVar0++;
	}
}

bool func_228(bool bParam0, int iParam1)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_29(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_79(bVar0) != bParam0)
		{
			return false;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				return false;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94597, bVar0))
		{
			UNK_0xDAB3108F02A4255A(bParam0, 0, false);
			UNK_0xE8832A9E16A57A1F(bParam0, false, 1);
			UNK_0x5D96D8530B3D0904(&Global_94598, bVar0);
			return true;
		}
	}
	return false;
}

bool func_229(bool bParam0)
{
	bool bVar0;

	if (!func_230())
	{
		if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (func_37(bVar0))
			{
				if (UNK_0x4906F8A34E9F4814(bVar0, joaat("TRASH")))
				{
					return false;
				}
				if (UNK_0xC42A92762C58E1B9(bParam0, bVar0, 0) && UNK_0xA30B8362589C124A(bVar0, -1, 0) == bParam0)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_230()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_231(bool bParam0)
{
	if (!func_230())
	{
		if ((UNK_0xC844350D5D58C99A(Local_868) && UNK_0xDF1306B443CD3D15(Local_868, 0)) && !UNK_0x5A91F08DF773C39D(Local_868, vLocal_827, 2f, 2f, 2f, false, true, 0))
		{
			if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_868, 0)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				if (UNK_0xC42A92762C58E1B9(bParam0, Local_868, 0) && UNK_0xA30B8362589C124A(Local_868, -1, 0) == bParam0)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_232(bool bParam0)
{
	if (iLocal_683 > 1)
	{
		if (bLocal_685 > 0)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_688[bParam0 /*8*/].f_7, false) && bLocal_686 == 1)
			{
				if (!UNK_0xD17F06053799A7CA())
				{
					if (func_236(&uLocal_879, cLocal_878, Local_688[bParam0 /*8*/][0], 8, 0, 0, 0))
					{
						UNK_0x5D96D8530B3D0904(&(Local_688[bParam0 /*8*/].f_7), false);
					}
				}
			}
		}
		else
		{
			if ((UNK_0xEAE0D21A50E6C7F4(Local_688[bParam0 /*8*/].f_7, false) && !UNK_0xEAE0D21A50E6C7F4(Local_688[bParam0 /*8*/].f_7, true)) && bLocal_686 == 1)
			{
				if (!UNK_0xD17F06053799A7CA())
				{
					if (func_236(&uLocal_879, cLocal_878, Local_688[bParam0 /*8*/][1], 7, 0, 0, 0))
					{
						UNK_0x5D96D8530B3D0904(&(Local_688[bParam0 /*8*/].f_7), true);
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_688[bParam0 /*8*/].f_7, 5))
			{
				if (func_235(bLocal_874, vLocal_827, 1) < 15f && bLocal_686 == 1)
				{
					if (!UNK_0xD17F06053799A7CA())
					{
						if (func_236(&uLocal_879, cLocal_878, Local_688[bParam0 /*8*/][5], 7, 0, 0, 0))
						{
							UNK_0x5D96D8530B3D0904(&(Local_688[bParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(UNK_0x16F2683693E537C9()))
			{
				case 0:
					if (bParam0 == 1)
					{
						if (!func_234(2))
						{
							func_233(bParam0, 2);
						}
					}
					else if (bParam0 == 2)
					{
						if (!func_234(4))
						{
							func_233(bParam0, 4);
						}
					}
					break;
				case 1:
					if (bParam0 == 0)
					{
						if (!func_234(2))
						{
							func_233(bParam0, 2);
						}
					}
					else if (bParam0 == 2)
					{
						if (!func_234(3))
						{
							func_233(bParam0, 3);
						}
					}
					break;
				case 2:
					if (bParam0 == 1)
					{
						if (!func_234(3))
						{
							func_233(bParam0, 3);
						}
					}
					else if (bParam0 == 0)
					{
						if (!func_234(4))
						{
							func_233(bParam0, 4);
						}
					}
					break;
			}
		}
	}
}

void func_233(bool bParam0, bool bParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_688[bParam0 /*8*/].f_7, bParam1))
	{
		if (iLocal_1052 != -1)
		{
			if (!UNK_0xD17F06053799A7CA())
			{
				if (func_236(&uLocal_879, cLocal_878, Local_688[bParam0 /*8*/][bParam1], 7, 0, 0, 0))
				{
					UNK_0x5D96D8530B3D0904(&(Local_688[bParam0 /*8*/].f_7), bParam1);
				}
			}
		}
		else if (!func_237() && !UNK_0xD17F06053799A7CA())
		{
			iLocal_1052 = UNK_0x1C0640BA9A7327B3();
		}
		else
		{
			iLocal_1052 = -1;
		}
	}
}

bool func_234(bool bParam0)
{
	if ((UNK_0xEAE0D21A50E6C7F4(Local_688[0 /*8*/].f_7, bParam0) || UNK_0xEAE0D21A50E6C7F4(Local_688[1 /*8*/].f_7, bParam0)) || UNK_0xEAE0D21A50E6C7F4(Local_688[2 /*8*/].f_7, bParam0))
	{
		return true;
	}
	return false;
}

float func_235(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

int func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_95(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_83(sParam2, iParam3, 0);
}

bool func_237()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_238()
{
	if (func_107(UNK_0x16F2683693E537C9(), vLocal_827, 220f))
	{
		if (!bLocal_877 && !func_107(UNK_0x16F2683693E537C9(), vLocal_827, 100f))
		{
			bLocal_877 = func_153(&uLocal_876, joaat("CAVALCADE2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_107(UNK_0x16F2683693E537C9(), vLocal_827, 240f))
	{
		if (bLocal_877)
		{
			func_6(&uLocal_876);
			bLocal_877 = false;
		}
	}
}

void func_239()
{
	func_215(&bLocal_874, &bLocal_875, &bLocal_686, &uLocal_822, &uLocal_821, vLocal_827, Local_868, 0, 1090519040 /* Float: 8f */);
	func_214();
	func_155();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				func_125(&uLocal_821, Local_868, 1);
				func_121("PRA_GOVAN", &iLocal_820);
				iLocal_684 = 1;
			}
			break;
		case 1:
			func_227();
			if (func_37(Local_868))
			{
				func_242(&uLocal_671, Local_868, 0, 0, 1, 1, 1);
			}
			if (!bLocal_833)
			{
				if (func_341(Local_840) && UNK_0x36646919F20EAFFC(Local_840))
				{
					func_241();
				}
				if (func_341(Local_854) && UNK_0x36646919F20EAFFC(Local_854))
				{
					func_241();
				}
			}
			if (func_37(bLocal_874))
			{
				if ((bLocal_686 == 1 || bLocal_686 == 2) || bLocal_686 == 3)
				{
					UNK_0x8B4C4CA774181102(5f, 5f, 4);
					iLocal_684 = 2;
				}
			}
			break;
		case 2:
			func_7(&uLocal_821);
			func_145(&uLocal_671, 0, 0);
			func_110(0);
			break;
		case 3:
			func_8(&Local_840);
			func_8(&Local_854);
			if (func_37(Local_868))
			{
				UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_868, -1);
			}
			func_240(1);
			func_40(1, 1, 1);
			iLocal_684 = 1;
			break;
	}
}

void func_240(bool bParam0)
{
	UNK_0x15EA7F4313456B1D(1, bParam0);
	UNK_0x15EA7F4313456B1D(2, bParam0);
	UNK_0x15EA7F4313456B1D(3, bParam0);
	UNK_0x15EA7F4313456B1D(4, bParam0);
	UNK_0x15EA7F4313456B1D(5, bParam0);
	if (bParam0)
	{
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x34D79252800B23FF(5);
	}
	else
	{
		UNK_0x34D79252800B23FF(0);
		UNK_0x51B096AAC60548C1(0f);
	}
}

void func_241()
{
	char* sVar0;

	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_833 = func_236(&uLocal_879, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_833)
	{
		UNK_0x8B4C4CA774181102(8f, 8f, 4);
	}
}

void func_242(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	func_243(uParam0, bParam1, 0f, 0f, 0f, iParam2, iParam3, iParam4, iParam5, bParam6);
}

void func_243(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_244(uParam0, bParam1, vParam2, iParam5, iParam6, iParam7, iParam8, bParam9);
}

void func_244(var uParam0, bool bParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_145(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_245(uParam0, bParam1, vParam2, iParam5, iParam6, bParam7, iParam8, bParam9);
}

void func_245(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	bool bVar1;

	if (uParam0->f_1 && UNK_0x8C74DE122769E1BF())
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = bParam5;
	if (UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_146(bVar0))
	{
		func_269();
	}
	if (func_268(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
	{
		bVar1 = false;
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			UNK_0x4862370C9F046219(UNK_0x940C1429253D3B1B(bParam1));
			UNK_0xB9099320B5179E0A(UNK_0x940C1429253D3B1B(bParam1), 1);
			if (UNK_0x71313E3D03CEEB37(UNK_0x940C1429253D3B1B(bParam1)))
			{
				bVar1 = true;
			}
		}
		else if (UNK_0xE2F1E99DD161A861(bParam1))
		{
			UNK_0x00D1596840E78F77(UNK_0x96A5FE5834B81CE7(bParam1));
			if (UNK_0xC03F94FBD72F6D02(UNK_0x96A5FE5834B81CE7(bParam1)))
			{
				bVar1 = true;
			}
		}
		else if (UNK_0x6BC06B42AD71CD8B(bParam1))
		{
			UNK_0xFF7829816FC6D977(UNK_0x486F67509A82DB2D(bParam1));
			if (UNK_0x660643587812C91B(UNK_0x486F67509A82DB2D(bParam1)))
			{
				bVar1 = true;
			}
		}
		if (!UNK_0x8C74DE122769E1BF())
		{
			if (func_263(uParam0, bParam7, bParam9, 0))
			{
				func_260(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_250(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_146(bVar0))
							{
								func_249(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_248(1);
								}
							}
						}
					}
				}
			}
			else if (func_250(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_146(bVar0))
						{
							func_249(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_248(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!UNK_0x2EBF5002C6B6A06C(bParam5))
			{
				if (func_146(bParam5))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				if (UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(3) == 3 || UNK_0xA4FD7964FEE91ED8(3) == 4)
					{
						func_145(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_145(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_145(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_145(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_145(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_145(uParam0, bVar0, 1);
				}
			}
			if (!func_263(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_247(uParam0))
				{
					func_246(uParam0);
				}
			}
		}
	}
	else
	{
		func_145(uParam0, bVar0, 0);
	}
}

void func_246(var uParam0)
{
	if (func_268(UNK_0x16F2683693E537C9()))
	{
		UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0xF3039DE1FDB4F6FD(1);
		UNK_0x29D5132FBDCF2B1E(0);
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		UNK_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

bool func_247(var uParam0)
{
	int iVar0;

	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > UNK_0x1C0640BA9A7327B3()
		{
			return true;
		}
	}
	return false;
}

int func_248(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
		default:
			break;
	}
	return 3;
}

void func_249(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_250(bool bParam0)
{
	if (!func_251(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_146(bParam0)) || func_146("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_248(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_248(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_248(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_251(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (bParam0)
	{
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (bParam2)
	{
		return true;
	}
	if (UNK_0x991B1F0980C62628())
	{
		return false;
	}
	if (func_69(0))
	{
		return false;
	}
	if (func_259())
	{
		return false;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("APPINTERNET")) > 0)
	{
		return false;
	}
	if (Global_58693)
	{
		return false;
	}
	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
		{
			if (UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(3) == 3 || UNK_0xA4FD7964FEE91ED8(3) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
				{
					return false;
				}
			}
			else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
			{
				return false;
			}
			if (UNK_0xC4E6FF7CA2A185EA())
			{
				return false;
			}
		}
	}
	if ((func_258() || func_257(Global_4456448.f_232883)) || func_256())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_255(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_254(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_252(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_252(bool bParam0)
{
	if (bParam0 != func_88())
	{
		if (func_253(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_253(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_253(bool bParam0, bool bParam1, bool bParam2)
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

bool func_254(bool bParam0, int iParam1)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x40B3F576B41FA183(bParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
				default:
					if (UNK_0x461CAC843A21E4B6(bParam0, iParam1) > 0)
					{
						return true;
					}
					break;
			}
		}
	}
	return false;
}

bool func_255(bool bParam0, int iParam1)
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

bool func_256()
{
	return Global_2450632.f_17;
}

bool func_257(int iParam0)
{
	return iParam0 == 51;
}

bool func_258()
{
	return Global_2450632.f_16;
}

bool func_259()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_260(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1319117 == 1)
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(bParam1, 0))
	{
		func_145(uParam0, 0, 0);
	}
	if (func_15(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_261())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (UNK_0xCED082ADD3739B9F(bVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	UNK_0xF3039DE1FDB4F6FD(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (bParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	UNK_0xC0B0B9E466C0ED17(bParam1, vParam2, 1, -1, iVar1, iVar2, bParam5);
	iVar3 = 2048;
	iVar4 = 3;
	UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bParam1, -1, iVar3, iVar4);
	UNK_0x82A772610883F395("FocusIn", 0, 0);
	UNK_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	UNK_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_261()
{
	return func_262(UNK_0xD803B885F5E47A62());
}

int func_262(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_247(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (!func_267(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_266(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (func_265(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_247(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_251(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_269();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_264(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			if (UNK_0x9A01369A10646AFE(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_265(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		if (UNK_0x0F01D47446BE1FEB())
		{
			if (UNK_0x9A01369A10646AFE(0, 80))
			{
				UNK_0xF3039DE1FDB4F6FD(0);
				return true;
			}
		}
	}
	return false;
}

bool func_266(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			if (UNK_0x7FEE810EE9E768EB(0, 80) && UNK_0x1C0640BA9A7327B3() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_267(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		if (UNK_0x0F01D47446BE1FEB())
		{
			if (UNK_0x7FEE810EE9E768EB(0, 80) && UNK_0x1C0640BA9A7327B3() > Global_116)
			{
				UNK_0xF3039DE1FDB4F6FD(0);
				return true;
			}
		}
	}
	return false;
}

bool func_268(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xE2F1E99DD161A861(bParam0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam0), 0))
			{
				return true;
			}
		}
		else if (UNK_0xEC560E589DF8370E(bParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam0)))
			{
				return true;
			}
		}
		else if (UNK_0x6BC06B42AD71CD8B(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_269()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_270()
{
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, 0))
			{
				func_284();
				func_282(33);
				UNK_0x34D79252800B23FF(2);
				UNK_0x51B096AAC60548C1(0.1f);
				if (func_357())
				{
					func_279(0, -1, 1);
					func_41(500, 1);
					iLocal_684 = 2;
				}
				else
				{
					if (func_33(0))
					{
						func_124(UNK_0x16F2683693E537C9(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_272(1228.635f, -348.4277f, 68.0929f, 1112014848 /* Float: 50f */, 12, 5000, 0, 0);
						func_41(500, 1);
					}
					func_271();
					if (iLocal_683 == 2)
					{
						iLocal_684 = 0;
					}
					else
					{
						iLocal_684 = 2;
					}
				}
			}
			break;
		case 2:
			func_110(0);
			break;
	}
}

void func_271()
{
}

void func_272(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0xF0681B7E63456337(vParam0, iParam3, iParam4, 127);
	if (UNK_0xBD054C76E6F4158B(iVar0))
	{
		iVar1 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		while (!UNK_0x07441E56330B63E3(iVar0) && UNK_0x1C0640BA9A7327B3() < iVar1)
		{
			if (bParam7)
			{
				func_274(0);
			}
			if (bParam6)
			{
				func_273();
			}
			SYSTEM::WAIT(0);
		}
		if (UNK_0x1C0640BA9A7327B3() < iVar1)
		{
		}
		UNK_0x51F8DBE54C75AE47(iVar0);
	}
}

void func_273()
{
	Global_22211.f_6 = 1;
}

void func_274(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_69(0))
		{
			func_275(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_275(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_277())
		{
			func_276(1, 1);
		}
		else
		{
			func_276(0, 0);
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
	if (!func_51())
	{
		Global_19486.f_1 = 3;
	}
}

void func_276(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_69(0))
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

bool func_277()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_278()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_279(bool bParam0, bool bParam1, int iParam2)
{
	if (func_357() && func_281())
	{
		while (Global_98739 != 6)
		{
			SYSTEM::WAIT(0);
		}
		UNK_0x21387C9EECC2B220(false);
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xFE76348A7A0CEF66(UNK_0x16F2683693E537C9());
			}
		}
		if (bParam0 != 0)
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC844350D5D58C99A(bParam0))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0, 0))
					{
						if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam0, 0))
						{
							UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bParam0, bParam1);
							UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
							UNK_0x2FB9A57162E54BAB(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
		}
		UNK_0x17EFA7496495F972();
		func_280(0);
	}
}

void func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

bool func_281()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_282(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_283(2);
			func_283(4);
			break;
		case 73:
			func_283(0);
			func_283(1);
			func_283(7);
			break;
		case 92:
			func_283(10);
			func_283(9);
			func_283(13);
			func_283(6);
			break;
		case 68:
			func_283(11);
			break;
		case 78:
			func_283(14);
			break;
		case 79:
			func_283(3);
			break;
		default:
			break;
	}
}

void func_283(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&Global_94599, bParam0);
}

void func_284()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			func_285(bVar0, UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0xD9522BA9E27E1349(bVar0), 24, 0);
		}
	}
}

void func_285(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (UNK_0xC844350D5D58C99A(Global_75441.f_484[25]) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == bParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((UNK_0x56E1CD81AE700E98(bParam0) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_332(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_327(bParam0, &Var0);
		if (func_15(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			iParam4 = UNK_0xD9522BA9E27E1349(bParam0);
		}
		if (iParam5 == 24)
		{
			if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) != joaat("VEHICLE_GEN_CONTROLLER"))
			{
				Global_76429 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
			}
		}
		func_320(iParam5, &Var0, vParam1, iParam4, func_326(bParam0));
		func_286(iParam5, bParam0, 0);
	}
}

void func_286(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_317(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 12) && !UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75441.f_555[0 /*21*/].f_4 != UNK_0x134B62B726CEC8E6(bParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			if (!UNK_0xAF6690C489CC6203(bParam1))
			{
				UNK_0x73270B3C9CC833FD(bParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_306();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_305(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_287(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_287(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_288(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
		if (!UNK_0xC844350D5D58C99A(bVar0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, -1);
		}
		if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ZERO"))
			{
				iParam1 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ONE"))
			{
				iParam1 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_TWO"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = bParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_327(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_288(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_303(bParam0, 0, 0)) || func_303(bParam0, 1, 0)) || func_303(bParam0, 2, 0)) || func_326(bParam0) != 145) || func_302(bParam0)) || func_301(bParam0)) || func_300(bParam0)) || func_299(bParam0)) || !func_289(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_301(bParam0))
		{
		}
		if (func_301(bParam0))
		{
		}
		if (func_303(bParam0, 0, 0))
		{
		}
		if (func_303(bParam0, 1, 0))
		{
		}
		if (func_303(bParam0, 2, 0))
		{
		}
		if (func_326(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_289(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_290(bParam0, 0))
	{
		return false;
	}
	if (((UNK_0xA7082C42B8809BF2(bParam0) || UNK_0xC41A9202669A24C4(bParam0)) || UNK_0xAFB8495D36825275(bParam0)) || UNK_0xA7D7011F9888A365(bParam0))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return false;
	}
	return true;
}

bool func_290(bool bParam0, bool bParam1)
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
		if (!func_298())
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
		if ((((!func_297() && !func_296()) && !func_295()) && !func_294()) && !func_298())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_295())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_293(bParam0))
		{
			return false;
		}
	}
	if (!func_291(bParam0))
	{
		return false;
	}
	return true;
}

bool func_291(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_292())
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

bool func_292()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_293(bool bParam0)
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

bool func_294()
{
	return false;
}

bool func_295()
{
	return true;
}

bool func_296()
{
	return true;
}

bool func_297()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_298()
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

bool func_299(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_290(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_300(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == bParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_301(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == bParam0 && UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == UNK_0x134B62B726CEC8E6(bParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_302(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (bParam0 == Global_75441.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (bParam0 == Global_75441.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_303(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_304(iParam1, iVar0, &uVar1, &iVar9))
	{
		if (!bParam2 || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar9], false))
		{
			if (UNK_0x5B6BEDD9A86023B7(&uVar1, bParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_304(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return true;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return true;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

int func_305(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

var func_306()
{
	var uVar0;

	func_316(&uVar0, UNK_0x4460E481B9E33ADA());
	func_315(&uVar0, UNK_0x8D199E381D262EEF());
	func_314(&uVar0, UNK_0xD8A54335F18763BA());
	func_309(&uVar0, UNK_0x972A296334C9D57B());
	func_308(&uVar0, UNK_0x118229AD063C3C1D());
	func_307(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_307(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_308(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_309(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_313(*uParam0);
	iVar1 = func_311(*uParam0);
	if (iParam1 < 1 || iParam1 > func_310(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_310(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
	}
	return 30;
}

int func_311(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_312(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_312(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_313(int iParam0)
{
	return iParam0 & 15;
}

void func_314(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_315(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_317(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_298())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_298())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_15(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_15(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_318(bool bParam0, int iParam1)
{
	struct<82> Var0;

	if (func_28(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_319(bParam0, &Var0, iParam1);
		return Var0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_319(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

void func_320(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_317(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_325(iParam0);
			func_324(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
			if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = iParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_321(iParam0, 1);
		}
	}
}

void func_321(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_323(iParam0, 0))
		{
			func_322(iParam0, 1, 0);
			func_322(iParam0, 2, 0);
			func_322(iParam0, 3, 0);
			func_322(iParam0, 4, 0);
			func_322(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_322(iParam0, 0, 0);
	}
}

void func_322(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), bParam1);
	}
}

bool func_323(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_324(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_325(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_317(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_321(iParam0, 0);
		}
	}
}

int func_326(bool bParam0)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 145;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_327(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_331(uParam1);
		uParam1->f_66 = UNK_0x134B62B726CEC8E6(bParam0);
		StringCopy(&(uParam1->f_1), UNK_0x7888A5D2621AAF2D(bParam0), 16);
		*uParam1 = UNK_0x4EB64970EC291A00(bParam0);
		UNK_0x9412F17E127D9759(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		UNK_0xD00EA977553939A7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		UNK_0x4D842A28A29F18F6(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = UNK_0x214BEAD64D777E8F(bParam0);
		uParam1->f_67 = UNK_0xF22DC2D0CA24A151(bParam0);
		uParam1->f_69 = UNK_0x8EF9B42D5496EC5A(bParam0);
		uParam1->f_70 = UNK_0x9C7B8DC16535B879(bParam0);
		UNK_0xCCBAB59EE36FFC71(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		UNK_0xE04A80C505823410(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (UNK_0x812A93B166D97C60(bParam0, 2))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 3))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_330(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			uParam1->f_68 = UNK_0x74A7D92E3874B5C7(bParam0);
		}
		if (UNK_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (UNK_0x20D5F312838C1136(bParam0))
			{
				switch (UNK_0x38E830634323E0D5(bParam0))
				{
					case 3:
					case 0:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					case 5:
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!UNK_0x616632A7E7824A9A(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (UNK_0xF566283DA9533594(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (UNK_0xC97B0E5C744424FD(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			UNK_0x3139754D4D5C3AC3(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (UNK_0xE23BB5249C074C85(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_329(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_328(iVar0 + 1));
			}
			iVar0++;
		}
		if (UNK_0x92C2290AA46758D3(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (UNK_0x30F813723591D02E(bParam0, "IgnoredByQuickSave") && UNK_0xB2C7CF65CF9B897C(bParam0, "IgnoredByQuickSave"))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
	}
	return 0;
}

int func_329(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		return 0;
	}
	if (UNK_0x40B3F576B41FA183(*bParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				switch (UNK_0x3C076D736FE6B7A6(*bParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = UNK_0x0ECB5CA5140957AD(*bParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_330(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
		default:
			break;
	}
	return false;
}

void func_331(var uParam0)
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_332(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_325(iParam0);
	func_321(iParam0, 0);
}

void func_333()
{
	func_336();
	func_334();
}

void func_334()
{
	if (!bLocal_831)
	{
		if (func_37(bLocal_874))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_874, 0))
			{
				func_66(bLocal_874, -1);
				func_65(bLocal_874, 318);
				bLocal_831 = true;
			}
		}
	}
	if (!bLocal_832)
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
		{
			func_335(320, 0);
			bLocal_832 = true;
		}
	}
	else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
	{
		func_64(0, 320);
		bLocal_832 = false;
	}
}

void func_335(int iParam0, bool bParam1)
{
	int iVar0;

	Global_61522 = iParam0;
	if (!Global_61520)
	{
		Global_61520 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] == iParam0)
			{
				Global_73608[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_336()
{
}

void func_337()
{
	if (!bLocal_28 && iLocal_683 != 5)
	{
		if (iLocal_683 > 0)
		{
			func_338();
		}
	}
}

void func_338()
{
	float fVar0;
	int iVar1;

	fVar0 = 600f;
	if (!func_37(bLocal_874))
	{
		if (!func_37(bLocal_875) && !func_37(Local_868))
		{
			func_340(1);
			return;
		}
		if (func_37(Local_868) && !func_157(UNK_0x16F2683693E537C9(), Local_868, fVar0, 1))
		{
			func_340(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_157(UNK_0x16F2683693E537C9(), bLocal_874, fVar0, 1))
		{
			iVar1++;
		}
		if (func_37(bLocal_875))
		{
			if (!func_157(UNK_0x16F2683693E537C9(), bLocal_875, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_868))
		{
			if (!func_157(UNK_0x16F2683693E537C9(), Local_868, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_340(2);
			return;
		}
		iVar1 = 0;
		if (func_339(bLocal_874))
		{
			iVar1++;
		}
		if (func_37(bLocal_875))
		{
			if (func_339(bLocal_875))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_868))
		{
			if (func_339(Local_868))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_340(3);
			return;
		}
	}
}

bool func_339(bool bParam0)
{
	if (func_37(bParam0))
	{
		if (((UNK_0x7B5606C651AB51B5(bParam0, 0, 7000) || UNK_0x7B5606C651AB51B5(bParam0, 3, 30000)) || UNK_0x7B5606C651AB51B5(bParam0, 2, 30000)) || UNK_0x7B5606C651AB51B5(bParam0, 1, 40000))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_340(int iParam0)
{
	UNK_0x790015DC92C918E2();
	func_61();
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			bLocal_818 = "PRA_FWRECK";
			break;
		case 2:
			bLocal_818 = "PRA_FFAR";
			break;
		case 3:
			bLocal_818 = "PRA_FSTUCK";
			break;
	}
	iLocal_683 = 5;
	iLocal_684 = 0;
}

bool func_341(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_342()
{
	if (!func_102(36))
	{
		func_343(21, 0, 0);
	}
}

void func_343(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_355(iParam0, 0, 0))
		{
			if (iParam2 && Global_98796.f_18[iParam0])
			{
				if (func_354(iParam0) == 3 && !func_353(iParam0))
				{
					func_352(iParam0);
					func_351(iParam0, 0, 0);
					func_345(iParam0, 1, 0);
					func_344(iParam0);
				}
				else
				{
					func_351(iParam0, 1, 0);
					func_344(iParam0);
				}
			}
			else
			{
				func_351(iParam0, 0, 0);
				func_345(iParam0, 1, 0);
				func_344(iParam0);
			}
		}
		else
		{
			func_345(iParam0, 1, 0);
			func_344(iParam0);
		}
	}
	else if (func_355(iParam0, 0, 0))
	{
		func_345(iParam0, 0, 0);
		func_345(iParam0, 1, 0);
		func_344(iParam0);
	}
}

void func_344(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_345(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x0674E58A79778E99(&(Global_98796.f_1357[iParam0]), bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_350() == 0)
		{
			bVar0 = func_348(func_349(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_346(func_349(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_346(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_347(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_347(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_348(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_347(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
		case 1:
			return 828;
		case 2:
			return 829;
		case 3:
			return 830;
		case 4:
			return 831;
		case 5:
			return 832;
		case 6:
			return 833;
		case 7:
			return 834;
		case 8:
			return 835;
		case 9:
			return 836;
		case 10:
			return 837;
		case 11:
			return 838;
		case 12:
			return 839;
		case 13:
			return 840;
		case 14:
			return 841;
		case 15:
			return 843;
		case 16:
			return 844;
		case 17:
			return 845;
		case 18:
			return 846;
		case 19:
			return 847;
		case 20:
			return 848;
		case 21:
			return 849;
		case 22:
			return 850;
		case 23:
			return 851;
		case 24:
			return 852;
		case 25:
			return 853;
		case 26:
			return 854;
		case 27:
			return 855;
		case 28:
			return 856;
		case 29:
			return 857;
		case 30:
			return 858;
		case 31:
			return 859;
		case 32:
			return 860;
		case 33:
			return 861;
		case 34:
			return 862;
		case 35:
			return 863;
		case 36:
			return 864;
		case 37:
			return 865;
		case 38:
			return 866;
		case 39:
			return 867;
		case 40:
			return 871;
		case 41:
			return 872;
		case 42:
			return 873;
		case 43:
			return 874;
		case 44:
			return 9977;
		case 45:
			return 3808;
		case 46:
			return 5383;
		case 47:
			return 6155;
		case 48:
			return 7232;
		case 49:
			return 7878;
		case 52:
			return 8912;
		case 50:
			return 8265;
		case 51:
			return 8267;
		default:
			break;
	}
	return 11511;
}

int func_350()
{
	return Global_30768;
}

void func_351(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98796.f_1357[iParam0]), bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_350() == 0)
		{
			bVar0 = func_348(func_349(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_346(func_349(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_352(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_351(iParam0, 10, 1);
		func_351(iParam0, 19, 1);
	}
}

bool func_353(int iParam0)
{
	return func_355(iParam0, 5, 1);
}

int func_354(int iParam0)
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

bool func_355(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_350() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_348(func_349(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_356(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_357())
	{
		UNK_0x256D93AFAE851A7A(0);
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		UNK_0x21387C9EECC2B220(true);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		Global_98740 = { vParam0 };
		Global_98743 = fParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 14);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 24);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 24);
		}
		func_280(1);
	}
}

bool func_357()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

void func_358()
{
	func_373();
	func_371();
	func_364();
	func_361();
	func_359();
}

void func_359()
{
	iLocal_1048[0] = 0;
	iLocal_1048[1] = 0;
	iLocal_1048[2] = 0;
	Local_688[0 /*8*/] = { func_360("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_688[1 /*8*/] = { func_360("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_688[2 /*8*/] = { func_360("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_360(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<8> Var0;

	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_361()
{
	Local_134[0 /*25*/] = { func_363(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_362(&(Local_134[0 /*25*/]), vLocal_824, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_134[1 /*25*/] = { func_363(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_362(&(Local_134[1 /*25*/]), vLocal_824, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_134[2 /*25*/] = { func_363(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_362(&(Local_134[2 /*25*/]), vLocal_824, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_134[3 /*25*/] = { func_363(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_362(&(Local_134[3 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[4 /*25*/] = { func_363(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_362(&(Local_134[4 /*25*/]), vLocal_824, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_134[5 /*25*/] = { func_363(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("P_BINBAG_01_S")) };
	func_362(&(Local_134[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_134[6 /*25*/] = { func_363(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("P_BINBAG_01_S")) };
	func_362(&(Local_134[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_134[7 /*25*/] = { func_363(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("P_BINBAG_01_S")) };
	func_362(&(Local_134[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[8 /*25*/] = { func_363(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_362(&(Local_134[8 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[9 /*25*/] = { func_363(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("P_BINBAG_01_S")) };
	func_362(&(Local_134[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_134[10 /*25*/] = { func_363(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_362(&(Local_134[10 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[11 /*25*/] = { func_363(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_134[11 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[12 /*25*/] = { func_363(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("P_BINBAG_01_S")) };
	func_362(&(Local_134[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_134[13 /*25*/] = { func_363(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_362(&(Local_134[13 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[14 /*25*/] = { func_363(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_362(&(Local_134[14 /*25*/]), vLocal_824, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_134[15 /*25*/] = { func_363(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_134[15 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[16 /*25*/] = { func_363(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_362(&(Local_134[16 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[17 /*25*/] = { func_363(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_362(&(Local_134[17 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[18 /*25*/] = { func_363(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_134[18 /*25*/]), vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_830 = 19;
}

void func_362(var uParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8, vector3 vParam9, vector3 vParam12)
{
	uParam0->f_3 = { vParam1 };
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_9 = iParam4;
	uParam0->f_10 = iParam8;
	uParam0->f_11 = { vParam9 };
	uParam0->f_14 = { vParam12 };
}

struct<25> func_363(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7)
{
	struct<25> Var0;

	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { vParam0 };
	Var0.f_19 = { vParam3 };
	Var0.f_22 = fParam6;
	Var0.f_23 = iParam7;
	return Var0;
}

void func_364()
{
	vector3 vVar0[6];

	vVar0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	vVar0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	vVar0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	vVar0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	vVar0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	vVar0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_365(&vVar0, 6);
}

void func_365(var uParam0, int iParam1)
{
	int iVar0;

	func_370(&uLocal_713);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_369(&uLocal_713, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_368(&uLocal_713);
	func_366(&uLocal_765, &uLocal_713, 50f);
}

void func_366(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		vVar3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		vVar6 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		vVar3 = { vVar3 / FtoV(SYSTEM::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y)))) };
		vVar6 = { vVar6 / FtoV(SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)))) };
		vVar9 = { vVar3 - vVar6 };
		vVar9 = { vVar9 / FtoV(SYSTEM::SQRT(((vVar9.x * vVar9.x) + (vVar9.y * vVar9.y)))) };
		if (func_367(uParam1, *(uParam1[iVar1 /*3*/]) + vVar9))
		{
			vVar9 = { -vVar9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + vVar9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_367(var uParam0, struct<2> Param1, Vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_368(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_369(var uParam0, vector3 vParam1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { vParam1 };
	uParam0->f_46++;
}

void func_370(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_371()
{
	Local_840 = { func_372(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("S_M_Y_GARBAGE")) };
	Local_854 = { func_372(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("S_M_Y_GARBAGE")) };
}

struct<14> func_372(vector3 vParam0, float fParam3, int iParam4)
{
	struct<14> Var0;

	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_373()
{
	Local_868 = { func_374(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("TRASH")) };
}

struct<6> func_374(vector3 vParam0, float fParam3, int iParam4)
{
	struct<6> Var0;

	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_375()
{
	func_240(1);
	func_386(1);
	UNK_0xAB8E2DDC7AF955E0(joaat("TRASH"), false);
	UNK_0xAB8E2DDC7AF955E0(joaat("TOWTRUCK"), false);
	UNK_0xAB8E2DDC7AF955E0(joaat("S_M_Y_GARBAGE"), false);
	func_63();
	func_385();
	func_384();
	func_376(0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_376(bool bParam0)
{
	vector3 vVar0;

	if (bParam0)
	{
	}
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	UNK_0xCD7D80FD792F9954("DRIVE", true);
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_ATTRACTOR", true);
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", true);
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_38();
	func_383();
	func_382();
	func_381();
	func_380();
	func_222();
	if (bParam0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_874))
		{
			if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_874, 0))
					{
						vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_378();
		UNK_0x790015DC92C918E2();
		func_2();
	}
	else
	{
		func_377();
	}
	UNK_0xB8C3D2D6C4AAEF18(0);
	func_145(&uLocal_671, 0, 0);
	if (UNK_0x9F4FE516EAACCFC5(iLocal_823))
	{
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0x9A8DDC7C522F5BF5(iLocal_823, 0);
	}
}

void func_377()
{
	func_3();
	func_6(&Local_868);
	func_6(&bLocal_875);
	func_6(&bLocal_874);
	func_5(&Local_840, 1, 0, 1);
	func_5(&Local_854, 1, 0, 1);
	func_6(&uLocal_876);
}

void func_378()
{
	Global_19671 = 0;
	func_379();
}

void func_379()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_380()
{
}

void func_381()
{
	if (bLocal_837)
	{
		UNK_0x058E3033265DBA9A(joaat("TRASH"));
	}
}

void func_382()
{
}

void func_383()
{
	UNK_0x71199B01895C6202(Local_868.f_5);
}

void func_384()
{
	func_343(21, 1, 0);
}

void func_385()
{
	Global_94599 = 0;
}

void func_386(int iParam0)
{
	Global_96050 = iParam0;
}

void func_387()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_33(0))
	{
		if (!func_388())
		{
			iVar0 = func_32();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

bool func_388()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

