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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_33[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_47 = 0;
	char* sLocal_48[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = false;
	bool bLocal_63 = false;
	bool bLocal_64 = false;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_70 = { 0f, 0f, 0f };
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	bool bLocal_77 = false;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = false;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = false;
	bool bLocal_119 = false;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	bool bLocal_123 = false;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = false;
	bool bLocal_127 = false;
	bool bLocal_128 = false;
	bool bLocal_129 = false;
	int iLocal_130 = 0;
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	bool bLocal_142 = false;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char cLocal_145[16] = "";
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
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
	iLocal_59 = 1;
	bLocal_62 = true;
	bLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	bLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	UNK_0xB57F88F0123F4C38();
	if (UNK_0xB3260A60545D3F11() == 0)
	{
		bLocal_77 = 1f;
	}
	else
	{
		bLocal_77 = 0.7f;
	}
	if (!func_161())
	{
		Global_4268489 = 99;
		Global_4268490 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4268489 = 0;
		Global_4268490 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_160();
	if (func_159(1, 1, !bLocal_64, 1))
	{
		bLocal_64 = true;
	}
	func_158();
	iLocal_112 = UNK_0xD68EA767274B7444();
	if (Global_19431 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_21838 = 0;
	Global_21839 = 0;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xC41A92C76262185C(UNK_0x16F2683693E537C9()))
		{
			Global_21838 = 1;
		}
		if (UNK_0xB541E437375DFA3D())
		{
			Global_21838 = 1;
		}
		if (UNK_0xDF1306B443CD3D15(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9()), 0))
		{
			Global_21838 = 1;
		}
		if (UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1))
		{
			Global_21838 = 1;
		}
		if (UNK_0xEFAE7FB688EBF2B5(UNK_0x16F2683693E537C9()))
		{
			Global_21838 = 1;
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (bLocal_131 == 1)
			{
				Global_21838 = 1;
			}
			bLocal_149 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if ((((UNK_0x134B62B726CEC8E6(bLocal_149) == joaat("RHINO") || UNK_0x134B62B726CEC8E6(bLocal_149) == joaat("CUTTER")) || UNK_0x134B62B726CEC8E6(bLocal_149) == joaat("SUBMERSIBLE")) || UNK_0x134B62B726CEC8E6(bLocal_149) == joaat("KHANJALI")) || (UNK_0x134B62B726CEC8E6(bLocal_149) == joaat("BARRAGE") && UNK_0x137240CA2BADB0D2(bLocal_149, func_157(UNK_0x16F2683693E537C9(), 1))))
			{
				Global_21838 = 1;
			}
			else if (UNK_0xA30B8362589C124A(bLocal_149, -1, 0) == UNK_0x16F2683693E537C9())
			{
				if (UNK_0x30C0A7C378403357(bLocal_149) > 0f)
				{
					if (!Global_76622)
					{
						if (!func_156())
						{
							UNK_0xD1F0F33C375B8446(UNK_0x16F2683693E537C9(), bLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_76622)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x826505E1E441E55D(UNK_0xD803B885F5E47A62(), 0);
		}
	}
	UNK_0x0674E58A79778E99(&Global_7356, 21);
	func_155(0);
	UNK_0x5D96D8530B3D0904(&Global_7356, 17);
	if (Global_19428 == 0)
	{
		func_154();
	}
	else
	{
		iLocal_140 = UNK_0xB01F55A0FD1CFD49("camera_gallery");
		iLocal_141 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
		while (!UNK_0x83D8570832F172A7(iLocal_140) || !UNK_0x83D8570832F172A7(iLocal_141))
		{
			SYSTEM::WAIT(0);
			UNK_0xC2127C0F64D6A3B9();
			UNK_0x38C3A68D7861DCFD(0, 25, 1);
		}
		if (Global_76622)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_153())
			{
				case 0:
					iLocal_144 = 2;
					break;
				case 2:
					iLocal_144 = 2;
					break;
				case 3:
					iLocal_144 = 2;
					break;
			}
		}
		func_152(iLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_151(iLocal_140, "CLOSE_SHUTTER");
		UNK_0x7E60C62A7CE58FC8(Global_19467, "DISPLAY_VIEW");
		UNK_0x3CAEA85DA607305E(16);
		UNK_0x7E60D21B163E9D56();
	}
	vLocal_78 = { Global_19446 };
	vLocal_81 = { Global_19439[Global_19431 /*3*/] };
	Global_21839 = 1;
	bLocal_118 = true;
	bLocal_119 = true;
	bLocal_120 = true;
	bLocal_121 = true;
	bLocal_122 = true;
	bLocal_123 = true;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	if (bLocal_131 == 0)
	{
		UNK_0x0674E58A79778E99(&Global_7358, 3);
	}
	func_149();
	UNK_0xD9ACBBA59FD5A09E(4);
	if (UNK_0xF026D357757F5F6A())
	{
	}
	if (Global_4456448.f_227352)
	{
	}
	if (Global_4456448.f_227354 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		UNK_0x558EC149EB2BC0A2(0, Global_19455);
		UNK_0x558EC149EB2BC0A2(0, 186);
		UNK_0xC2127C0F64D6A3B9();
		UNK_0x38C3A68D7861DCFD(0, 25, 1);
		UNK_0x38C3A68D7861DCFD(0, 0, 1);
		if (func_148())
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
			{
				UNK_0x5D96D8530B3D0904(&Global_4269765, 2);
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
		if (!Global_111638.f_14046.f_81)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 13))
			{
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
					{
						if ((bLocal_128 && bLocal_131 == 0) && !func_148())
						{
							UNK_0x5D96D8530B3D0904(&Global_4269765, 13);
							Global_111638.f_14046.f_81 = 1;
							func_147("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!UNK_0x798A3F1296751F46())
		{
			if (Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0)
			{
				UNK_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
			}
			UNK_0x3584F71E5CA29322(7);
			func_146();
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 200, true);
			}
			UNK_0x38C3A68D7861DCFD(0, 44, 1);
			UNK_0x38C3A68D7861DCFD(0, 47, 1);
			UNK_0x38C3A68D7861DCFD(0, 91, 1);
			UNK_0x38C3A68D7861DCFD(0, 92, 1);
			UNK_0x38C3A68D7861DCFD(0, 68, 1);
			if (bLocal_150 == 0)
			{
				UNK_0x558EC149EB2BC0A2(0, Global_19459);
			}
			UNK_0x558EC149EB2BC0A2(0, Global_19456);
			if ((UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37()) && !func_148())
			{
				iLocal_130 = 1;
				Global_19486.f_1 = 3;
				UNK_0x21387C9EECC2B220(false);
			}
			if (UNK_0x1C53FD812DB1E31C())
			{
				Global_19486.f_1 = 3;
				UNK_0x21387C9EECC2B220(false);
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 3))
			{
				Global_19486.f_1 = 3;
				UNK_0x21387C9EECC2B220(false);
			}
			if (UNK_0x8CD06866876216F2())
			{
				if (func_135())
				{
					Global_19486.f_1 = 3;
					UNK_0x21387C9EECC2B220(false);
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC379FAA7E9DFE7A4(UNK_0x16F2683693E537C9(), 0))
				{
					Global_19486.f_1 = 3;
					UNK_0x21387C9EECC2B220(false);
				}
				if ((UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()))
				{
					if (func_134())
					{
					}
					else
					{
						Global_19486.f_1 = 3;
						UNK_0x21387C9EECC2B220(false);
					}
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					if (Global_76622 == 1)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xFC0E4F7E386C43F8(UNK_0x16F2683693E537C9()) > 0.3f)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					func_133();
					bLocal_149 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0x30C0A7C378403357(bLocal_149) < 0f)
					{
						func_130(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!UNK_0xCD5FC883CEFE0289())
							{
								func_130(0);
							}
						}
						else if (!UNK_0xCD5FC883CEFE0289())
						{
							iLocal_116 = 1;
							SYSTEM::WAIT(0);
							UNK_0xC2127C0F64D6A3B9();
						}
					}
				}
				else if (Global_76622 == 0)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 18))
					{
						func_129();
						if ((Global_19486 == 0 || Global_19486 == 1) || Global_19486 == 2)
						{
							if (!UNK_0xFBF1556B75C783FC(UNK_0x16F2683693E537C9()))
							{
								if (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
								{
								}
								else
								{
									Global_19486.f_1 = 3;
									UNK_0x21387C9EECC2B220(false);
								}
							}
						}
					}
				}
			}
			if (bLocal_142)
			{
				func_128();
			}
			if (Global_19486.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_19486.f_1 > 3)
							{
								if (bLocal_150)
								{
									func_126();
									if (Global_21843 == 0 && Global_21840 == 6)
									{
										UNK_0x2CBCC7DC0EEFF804(0, 1);
										UNK_0xBBCE9616B024A2BF();
										bLocal_150 = false;
										func_125();
										if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
										{
											vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
										}
										func_124();
										iLocal_109++;
										if (func_161())
										{
											func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										}
										else
										{
											func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										}
										bLocal_132 = false;
										iLocal_133 = 0;
										iLocal_134 = 0;
										bLocal_127 = false;
										func_118();
									}
									if (Global_21840 == 0)
									{
										bLocal_150 = false;
										UNK_0xBBCE9616B024A2BF();
										if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
										{
											vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
										}
										func_117();
										bLocal_132 = false;
										iLocal_133 = 0;
										iLocal_134 = 0;
										bLocal_127 = false;
										func_118();
										if (func_161())
										{
											if (Global_4268490 == 0)
											{
												if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
												{
													func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
												}
											}
										}
										else if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
										{
											func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										}
										func_116();
										func_115(1);
									}
								}
								else if (Global_19486.f_1 != 9)
								{
									if (Global_21839 == 1)
									{
										if (Global_21838 == 0)
										{
											func_114();
										}
									}
									else if ((Global_7964 - Global_7963) > Global_7965)
									{
										if (UNK_0x757EF87A33649210() && func_113())
										{
											if (func_112() && bLocal_127)
											{
											}
											else if (bLocal_127 == 0)
											{
												UNK_0x21387C9EECC2B220(false);
												UNK_0x55D0A2DB35045A35(iLocal_112);
												iLocal_143 = 0;
												if (Global_21838 == 0)
												{
													func_124();
													Global_21838 = 1;
													UNK_0x2CBCC7DC0EEFF804(0, 1);
													bLocal_128 = false;
													bLocal_118 = true;
													bLocal_119 = true;
													bLocal_120 = true;
													bLocal_121 = true;
													bLocal_122 = true;
													bLocal_123 = true;
													func_111(0, 0);
													func_115(0);
													iLocal_115 = 0;
													func_106(1);
													bLocal_142 = false;
													func_104(0, 1);
													func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
													func_102(1);
												}
											}
										}
										if (func_101(2, Global_19454, 0))
										{
											if (func_148())
											{
												if (((Global_1662006 || Global_1312791) || Global_21841) || UNK_0xEAE0D21A50E6C7F4(Global_7356, 21))
												{
												}
												else if (func_112() && bLocal_127)
												{
												}
												else if (!func_113())
												{
													if (bLocal_127 == 0)
													{
														UNK_0x53491B90E4FD0E56(500);
														iLocal_143 = 0;
														func_104(1, 1);
														func_100(1);
													}
												}
											}
											else if (func_112() && bLocal_127)
											{
											}
											else if (bLocal_127 == 0)
											{
												UNK_0x21387C9EECC2B220(false);
												UNK_0x55D0A2DB35045A35(iLocal_112);
												iLocal_143 = 0;
												if (Global_21838 == 0)
												{
													func_124();
													Global_21838 = 1;
													UNK_0x2CBCC7DC0EEFF804(0, 1);
													bLocal_128 = false;
													bLocal_118 = true;
													bLocal_119 = true;
													bLocal_120 = true;
													bLocal_121 = true;
													bLocal_122 = true;
													bLocal_123 = true;
													func_111(0, 0);
													func_115(0);
													iLocal_115 = 0;
													func_106(1);
													bLocal_142 = false;
													func_104(0, 1);
													func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (UNK_0xFEBC1E4EC9E001F0())
										{
											func_99();
											iLocal_101 = 1;
										}
									}
									else if (!UNK_0xFEBC1E4EC9E001F0())
									{
										func_99();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
										{
											func_99();
											iLocal_102 = 1;
										}
									}
									else if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
									{
										func_99();
										iLocal_102 = 0;
									}
									if (Global_21838 == 1)
									{
										func_88();
									}
									else if (Global_19486.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_84();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_117();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
												{
													if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
													{
														func_151(iLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = UNK_0x1C0640BA9A7327B3();
														while (UNK_0x1C0640BA9A7327B3() < (iLocal_135 + iLocal_137) && Global_19486.f_1 > 3)
														{
															func_146();
															func_128();
															func_83();
															UNK_0xC2127C0F64D6A3B9();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_161())
												{
													if (Global_4268490 == 0)
													{
														if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
														{
															func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
														}
													}
												}
												else if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
												{
													func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
												}
												func_128();
												func_146();
												bLocal_132 = false;
												iLocal_133 = 0;
												iLocal_134 = 0;
												bLocal_127 = false;
												func_118();
												iLocal_136 = 0;
												func_151(iLocal_140, "OPEN_SHUTTER");
											}
											func_116();
											func_115(1);
											func_82();
										}
									}
									if (iLocal_143 == 1)
									{
										func_79();
									}
									if (bLocal_129)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											bLocal_128 = true;
											bLocal_129 = false;
											UNK_0x5D96D8530B3D0904(&Global_7356, 18);
											if (Global_21838 == 0)
											{
												func_104(1, 1);
											}
										}
									}
									if (bLocal_127 == 0)
									{
										if (bLocal_128 && Global_21838 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_21841 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_83();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_19486.f_1 > 3)
					{
						if (Global_21839 == 1)
						{
							if (Global_21838 == 0)
							{
								func_114();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 7)
				{
					if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_155 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = UNK_0x26F0988F7719D17A();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
					}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (UNK_0xBFC0798A6E3417F9(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_104(0, 1);
					}
					if (UNK_0xBFC0798A6E3417F9(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (UNK_0xB9132A06AE472728(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_104(0, 1);
							iLocal_154 = 0;
							UNK_0xFCA5A13B82D72982("Gallery");
							UNK_0xAD1F66EB453E6BCC();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (UNK_0x33A494591F2C1975())
					{
						if (UNK_0xBFC0798A6E3417F9(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_104(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (UNK_0xBFC0798A6E3417F9(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_104(0, 1);
						iLocal_111 = 0;
					}
					if (!UNK_0x33A494591F2C1975())
					{
						if (UNK_0xBFC0798A6E3417F9(2, Global_19458))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_104(0, 1);
							if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = UNK_0x1C0640BA9A7327B3();
							UNK_0xB0A3CB46BE5B746A(1);
						}
					}
				}
				else if (UNK_0xBFC0798A6E3417F9(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_104(0, 1);
				}
			}
		}
		iLocal_108 = UNK_0x1C0640BA9A7327B3();
		if (func_148())
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
			{
				UNK_0x5D96D8530B3D0904(&Global_4269765, 2);
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_111(0, 0);
			func_115(0);
			iLocal_115 = 0;
			func_106(1);
			Global_21838 = 0;
			Global_21839 = 0;
			Global_21841 = 0;
			UNK_0xE17FDF9E3068281B(&iLocal_140);
			UNK_0xE17FDF9E3068281B(&iLocal_141);
			UNK_0x21387C9EECC2B220(false);
			if (Global_19666 == 1)
			{
				UNK_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			else
			{
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			UNK_0x2CBCC7DC0EEFF804(0, 1);
			UNK_0x826505E1E441E55D(UNK_0xD803B885F5E47A62(), 1);
			UNK_0x0674E58A79778E99(&Global_7358, 3);
			UNK_0x0674E58A79778E99(&Global_4269765, 3);
			UNK_0xA5E3ADAAA4CD5D6C(15);
			Global_21842 = 1;
			UNK_0x55D0A2DB35045A35(iLocal_112);
			UNK_0x43A06902454A1172(iLocal_112);
			UNK_0xBBCE9616B024A2BF();
			func_106(1);
			UNK_0xA6CB86BCFE04B70C(0);
			UNK_0x40861FC5E44959D6(0);
			UNK_0x902FD904CBCE9316(1f);
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0xDCDFC17557D5706C(UNK_0x16F2683693E537C9(), "Mood_Normal_1", 0);
				UNK_0x16BEAC335EC5109B(UNK_0x16F2683693E537C9());
			}
			if (Global_4268490 > 0 && Global_4268490 < 13)
			{
				UNK_0xF5A41F3D3B38EFE3(sLocal_33[Global_4268490]);
			}
			UNK_0x0674E58A79778E99(&Global_7356, 18);
			if (func_148())
			{
				func_104(1, 1);
			}
			else
			{
				func_104(0, 1);
			}
			if (func_159(0, 1, bLocal_64, 1))
			{
				bLocal_64 = false;
			}
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

int func_3()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = UNK_0x57AA1C471AF0568D(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = UNK_0xDD995CB5829FBD05();
			iLocal_110 = UNK_0x1B872EA843C90348();
			if (iLocal_104 == 1)
			{
				if (bLocal_127 == 0)
				{
					if (UNK_0x83D8570832F172A7(iLocal_140))
					{
						if (func_161())
						{
							if (Global_4268490 == 0)
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
								{
									func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
								}
							}
							func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						else
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
							{
								func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							}
							func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
					}
				}
				else if (UNK_0x83D8570832F172A7(iLocal_140))
				{
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				iLocal_104 = 0;
			}
			UNK_0xBBCE9616B024A2BF();
			break;
		case 1:
			if (!UNK_0x3BBE4BCFD1B36E4B())
			{
				UNK_0xFCC7D1ED80D1900C("CELL_SPINNER2");
				UNK_0x9A681BEC95A1B92E(1);
			}
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_19486.f_1 = 3;
				Global_21842 = 1;
			}
			UNK_0xBBCE9616B024A2BF();
			break;
	}
}

void func_5()
{
	if (func_101(2, Global_19455, 0))
	{
		func_1(0);
		if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
		{
			UNK_0x21387C9EECC2B220(false);
			SYSTEM::SETTIMERB(0);
			func_125();
			bLocal_127 = false;
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			}
			func_124();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 14))
			{
				func_147("CELL_299", -1);
			}
			else
			{
				func_124();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_104(1, 1);
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_146();
			UNK_0xC2127C0F64D6A3B9();
			func_83();
			func_133();
			func_128();
		}
		UNK_0x21387C9EECC2B220(false);
		func_125();
		SYSTEM::SETTIMERB(0);
		bLocal_127 = false;
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		}
		func_118();
		func_124();
	}
	if (func_101(2, Global_19459, 0))
	{
		func_1(0);
		if (func_112() || UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
		{
		}
		else
		{
			UNK_0x21387C9EECC2B220(false);
			SYSTEM::SETTIMERB(0);
			iLocal_136 = 1;
			func_125();
			bLocal_127 = false;
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			}
			func_124();
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
	{
		if (func_101(2, Global_19458, 0))
		{
			func_1(0);
			UNK_0x21387C9EECC2B220(false);
			UNK_0x918CFFD78ECE297E(0, 0);
			SYSTEM::WAIT(0);
			UNK_0xC2127C0F64D6A3B9();
			func_146();
			SYSTEM::WAIT(0);
			UNK_0xC2127C0F64D6A3B9();
			func_146();
			UNK_0xFBFE41B3E19EA531();
			UNK_0xAA23F71817ABF488();
			Global_21842 = 1;
			iLocal_143 = 0;
			bLocal_126 = false;
			func_104(0, 1);
			Global_21838 = 1;
			UNK_0x2CBCC7DC0EEFF804(0, 1);
			bLocal_128 = false;
			bLocal_118 = true;
			bLocal_119 = true;
			bLocal_120 = true;
			bLocal_121 = true;
			bLocal_122 = true;
			bLocal_123 = true;
			func_6();
			bLocal_127 = false;
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			}
			func_111(0, 0);
			func_115(0);
			iLocal_115 = 0;
			func_106(1);
			if (!Global_2537071.f_6522)
			{
				UNK_0x5D96D8530B3D0904(&Global_7356, 9);
			}
			bLocal_142 = false;
			func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
}

void func_6()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		UNK_0x5A963FB0365294C8(5);
	}
}

void func_8()
{
	bLocal_150 = true;
	Global_21843 = 1;
	UNK_0x2CBCC7DC0EEFF804(0, 1);
}

bool func_9()
{
	if (iLocal_107 == iLocal_108)
	{
		if (bLocal_105)
		{
			bLocal_105 = true;
		}
	}
	if (Global_19486.f_1 < 4)
	{
		return false;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return false;
	}
	return true;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (UNK_0x91E3F625EF57450D(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (bLocal_131)
	{
		func_74();
		func_70();
		func_69();
		fLocal_73 = UNK_0xB2F0F5DA9031A63E();
		fLocal_74 = UNK_0x21E534C9D41C0779();
		if (iLocal_133 == 0)
		{
			if (UNK_0x06F8112AA79C53D9(2, iVar0) && !UNK_0x06F8112AA79C53D9(2, iVar1))
			{
				iLocal_133 = 1;
				func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
					func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(2, 179, true), func_65());
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_280");
					func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_64();
				UNK_0x7E60C62A7CE58FC8(iLocal_141, "SET_MAX_WIDTH");
				UNK_0x7C19E5E4784BD7CF(bLocal_77);
				UNK_0x7E60D21B163E9D56();
				func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
		else if (!UNK_0x06F8112AA79C53D9(2, iVar0) || UNK_0x06F8112AA79C53D9(2, iVar1))
		{
			iLocal_133 = 0;
			func_118();
		}
		if (iLocal_134 == 0)
		{
			if (UNK_0x06F8112AA79C53D9(2, iVar1) && !UNK_0x06F8112AA79C53D9(2, iVar0))
			{
				iLocal_134 = 1;
				func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
					func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(2, 179, true), func_65());
				}
				else if (!func_148())
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_280");
					func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_280");
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
				}
				func_63();
				UNK_0x7E60C62A7CE58FC8(iLocal_141, "SET_MAX_WIDTH");
				UNK_0x7C19E5E4784BD7CF(bLocal_77);
				UNK_0x7E60D21B163E9D56();
				func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
		else if (!UNK_0x06F8112AA79C53D9(2, iVar1) || UNK_0x06F8112AA79C53D9(2, iVar0))
		{
			iLocal_134 = 0;
			func_118();
		}
	}
	else
	{
		UNK_0xEAB026E686C0D991(0, 2, 1);
		UNK_0xEAB026E686C0D991(0, 1, 1);
	}
	if (UNK_0xB8E3620B82AD47D7(2))
	{
		func_118();
	}
	func_133();
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 200, true);
	}
	if (func_148())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
		{
			UNK_0x5D96D8530B3D0904(&Global_4269765, 2);
			func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	if ((UNK_0xBFC0798A6E3417F9(2, 183) && iLocal_156 == 0) && !func_148())
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (!UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
				{
					UNK_0x0674E58A79778E99(&Global_4269765, 2);
					if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
					{
						func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					}
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&Global_4269765, 2);
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
			}
		}
	}
	if (bLocal_131)
	{
		if (bLocal_132 == 1)
		{
			bLocal_132 = false;
			UNK_0x7E60C62A7CE58FC8(iLocal_140, "SET_FOCUS_LOCK");
			UNK_0x1200CC973A2399C8(false);
			func_62("CELL_FOCUS");
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7E60D21B163E9D56();
		}
		if (!func_61(14))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 10))
			{
				if ((Global_76622 == 0 && UNK_0x8A22C4C08282BF26(joaat("PI_MENU")) > 0) && func_60())
				{
					UNK_0x7E60C62A7CE58FC8(iLocal_140, "SET_FOCUS_LOCK");
					UNK_0x1200CC973A2399C8(true);
					UNK_0x7ACC3006A87F8B39("CELL_ACTTL");
					UNK_0xD06AC7C87A34A6AD(UNK_0x19C9F30A7697B43C(&Global_4270750));
					UNK_0x779B34565F4D71B1();
					UNK_0x1200CC973A2399C8(false);
					UNK_0x7E60D21B163E9D56();
					UNK_0x0674E58A79778E99(&Global_4269765, 10);
				}
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 10))
		{
			UNK_0x0674E58A79778E99(&Global_4269765, 10);
		}
		iLocal_66 = UNK_0x1C0640BA9A7327B3();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				vLocal_70 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				if (UNK_0x0EB28750412C3A5A(vLocal_70, vLocal_67, 1) > 5f)
				{
					Global_19486.f_1 = 3;
					UNK_0x21387C9EECC2B220(false);
				}
				iLocal_65 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
	else if (bLocal_132)
	{
		if (!UNK_0x06F8112AA79C53D9(0, 182) && !func_148())
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
			bLocal_132 = false;
			UNK_0x7E60C62A7CE58FC8(iLocal_140, "SET_FOCUS_LOCK");
			UNK_0x1200CC973A2399C8(false);
			func_62("CELL_FOCUS");
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7E60D21B163E9D56();
		}
	}
	else if (UNK_0x06F8112AA79C53D9(0, 182) && !func_148())
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
		bLocal_132 = true;
		if (!func_61(14))
		{
			UNK_0x7E60C62A7CE58FC8(iLocal_140, "SET_FOCUS_LOCK");
			UNK_0x1200CC973A2399C8(true);
			func_62("CELL_FOCUS");
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7E60D21B163E9D56();
		}
	}
	if (func_161())
	{
		if ((UNK_0xBFC0798A6E3417F9(2, 186) && iLocal_156 == 0) && !func_148())
		{
			if (bLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
						UNK_0xDCDFC17557D5706C(UNK_0x16F2683693E537C9(), "Mood_Normal_1", 0);
						UNK_0x16BEAC335EC5109B(UNK_0x16F2683693E537C9());
						if (Global_19486 == 0)
						{
							iVar4 = 0;
							iVar2 = UNK_0x98F1B512A2CC07C5(UNK_0x16F2683693E537C9(), false);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = UNK_0x98F1B512A2CC07C5(UNK_0x16F2683693E537C9(), true);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											UNK_0xDCDFC17557D5706C(UNK_0x16F2683693E537C9(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									UNK_0xDCDFC17557D5706C(UNK_0x16F2683693E537C9(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								UNK_0xDCDFC17557D5706C(UNK_0x16F2683693E537C9(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							UNK_0xDCDFC17557D5706C(UNK_0x16F2683693E537C9(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0xDCDFC17557D5706C(UNK_0x16F2683693E537C9(), "Mood_Normal_1", 0);
						UNK_0x16BEAC335EC5109B(UNK_0x16F2683693E537C9());
						UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
					}
				}
			}
		}
		if ((UNK_0xBFC0798A6E3417F9(2, 185) && iLocal_156 == 0) && !func_148())
		{
			if (bLocal_131)
			{
				if (bLocal_62 == 1)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (UNK_0x7F8A39872A07D2CE(sLocal_19[Global_4268489], "phone_cam12DUMMY"))
						{
						}
						else
						{
							UNK_0xA6CB86BCFE04B70C(1);
							UNK_0x40861FC5E44959D6(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						UNK_0xA6CB86BCFE04B70C(0);
						UNK_0x40861FC5E44959D6(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					UNK_0xA6CB86BCFE04B70C(1);
					UNK_0x40861FC5E44959D6(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					UNK_0xA6CB86BCFE04B70C(0);
					UNK_0x40861FC5E44959D6(0);
				}
			}
		}
	}
	if (iLocal_59 == 1 && !func_148())
	{
		if (UNK_0xBFC0798A6E3417F9(0, 172) && iLocal_156 == 0)
		{
			if (func_161())
			{
				Global_4268490++;
				UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
			}
			if (Global_4268490 == 13)
			{
				func_115(0);
				UNK_0x902FD904CBCE9316(1f);
				UNK_0xF5A41F3D3B38EFE3(sLocal_33[(Global_4268490 - 1)]);
				Global_4268490 = 0;
				func_59();
				if (iLocal_47 == 1)
				{
					UNK_0x0674E58A79778E99(&Global_4269765, 2);
					iLocal_47 = 0;
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
			}
			if (Global_4268490 > 0 && Global_4268490 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				UNK_0x0D3BE1DE0262A012(sLocal_33[Global_4268490], 0);
			}
		}
	}
	if (Global_4268490 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (UNK_0x27117E2CDD4D67C3(sLocal_33[Global_4268490]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!UNK_0xEB2424501D38FCE7())
				{
					func_115(1);
				}
				if (iLocal_47 == 0)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
					{
						iLocal_47 = 1;
					}
				}
				UNK_0x5D96D8530B3D0904(&Global_4269765, 2);
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				UNK_0x902FD904CBCE9316(0.25f);
				UNK_0x1D86FFCD165BF465(sLocal_33[Global_4268490], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4268490 == 1 || Global_4268490 == 3)
			{
			}
			if (Global_4268490 == 2 || Global_4268490 == 4)
			{
			}
		}
	}
	if ((UNK_0xBFC0798A6E3417F9(0, 173) && iLocal_156 == 0) && !func_148())
	{
		if (func_161())
		{
			func_106(0);
			Global_4268489++;
			UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
		}
		if (Global_4268489 == 13)
		{
			Global_4268489 = 0;
		}
		if (Global_4268489 == 0)
		{
			if (func_161())
			{
				func_106(0);
			}
		}
		else
		{
			func_116();
		}
		func_58();
	}
	if ((UNK_0xD245978525608929(0, 184) && iLocal_156 == 0) && !func_148())
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
			{
				vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_151(iLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = UNK_0x1C0640BA9A7327B3();
				while (UNK_0x1C0640BA9A7327B3() < (iLocal_135 + iLocal_139) && Global_19486.f_1 > 3)
				{
					func_146();
					func_128();
					func_83();
					UNK_0xC2127C0F64D6A3B9();
					SYSTEM::WAIT(0);
				}
				if (bLocal_131 == 0)
				{
					UNK_0x55D0A2DB35045A35(iLocal_112);
					bLocal_131 = true;
					func_57(1);
					func_56();
					UNK_0x5D96D8530B3D0904(&Global_7358, 3);
					iLocal_65 = UNK_0x1C0640BA9A7327B3();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_57(0);
					bLocal_131 = false;
					UNK_0x0674E58A79778E99(&Global_7358, 3);
				}
				iLocal_135 = UNK_0x1C0640BA9A7327B3();
				while (UNK_0x1C0640BA9A7327B3() < (iLocal_135 + iLocal_137) && Global_19486.f_1 > 3)
				{
					func_146();
					func_128();
					func_83();
					UNK_0xC2127C0F64D6A3B9();
					SYSTEM::WAIT(0);
				}
				func_151(iLocal_140, "OPEN_SHUTTER");
				if (func_161())
				{
					if (Global_4268490 == 0)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
						{
							func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
				{
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				func_128();
				func_146();
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (bLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (UNK_0xBFC0798A6E3417F9(0, 40) || UNK_0xBFC0798A6E3417F9(0, 41))
			{
				fLocal_114 = UNK_0x28DD0038B63F8DB5();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (UNK_0x8AA6DC470ABA63A2(iLocal_112))
					{
						UNK_0x4D7F4CC43D4D0DE3(iLocal_112, "Camera_Zoom", &Global_19475, 1);
					}
				}
				else
				{
					UNK_0x55D0A2DB35045A35(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (UNK_0x06F8112AA79C53D9(0, 40) || UNK_0x06F8112AA79C53D9(0, 41))
		{
			fLocal_114 = UNK_0x28DD0038B63F8DB5();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (UNK_0x8AA6DC470ABA63A2(iLocal_112))
				{
					UNK_0x4D7F4CC43D4D0DE3(iLocal_112, "Camera_Zoom", &Global_19475, 1);
				}
			}
			else
			{
				UNK_0x55D0A2DB35045A35(iLocal_112);
			}
		}
		else
		{
			UNK_0x55D0A2DB35045A35(iLocal_112);
		}
	}
	if ((func_101(2, Global_19455, 0) && !func_113()) && !func_101(2, Global_19454, 0))
	{
		fLocal_75 = UNK_0xB2F0F5DA9031A63E();
		fLocal_76 = UNK_0x21E534C9D41C0779();
		UNK_0x918CFFD78ECE297E(0, 0);
		UNK_0x5D96D8530B3D0904(&Global_7356, 21);
		UNK_0x55D0A2DB35045A35(iLocal_112);
		bLocal_127 = true;
		func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_152(iLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		UNK_0x4D7F4CC43D4D0DE3(-1, "Camera_Shoot", &Global_19475, 1);
		func_151(iLocal_140, "CLOSE_SHUTTER");
		vLocal_84 = { -90.3f, 0f, 90f };
		UNK_0x44FE29702110D5C6(vLocal_84, 0);
		if (!func_161())
		{
			func_106(1);
		}
		Global_21841 = 1;
		UNK_0x2CBCC7DC0EEFF804(0, 1);
		while (Global_21840 < 6 && Global_19486.f_1 > 3)
		{
			func_146();
			func_128();
			func_83();
			func_133();
			UNK_0xC2127C0F64D6A3B9();
			SYSTEM::WAIT(0);
		}
		UNK_0x130EC2FF22A1FA80(0, 0);
		if (Global_19428)
		{
			func_1(1);
		}
		iLocal_135 = UNK_0x1C0640BA9A7327B3();
		while (UNK_0x1C0640BA9A7327B3() < (iLocal_135 + iLocal_138) && Global_19486.f_1 > 3)
		{
			func_146();
			func_128();
			func_83();
			UNK_0xC2127C0F64D6A3B9();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_151(iLocal_140, "OPEN_SHUTTER");
		UNK_0x0674E58A79778E99(&Global_7356, 21);
		func_118();
		if (Global_19486.f_1 > 3)
		{
			if (Global_76622)
			{
				func_21(1086, 1, -1);
				func_20();
				func_17(-1492367786, 23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						UNK_0x9505C13496579D28(joaat("SP0_NO_PHOTOS_TAKEN"), 1f);
						break;
					case 1:
						UNK_0x9505C13496579D28(joaat("SP1_NO_PHOTOS_TAKEN"), 1f);
						break;
					case 2:
						UNK_0x9505C13496579D28(joaat("SP2_NO_PHOTOS_TAKEN"), 1f);
						break;
				}
				func_20();
			}
			func_115(0);
		}
		func_128();
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
	{
		if (func_101(2, Global_19458, 0))
		{
			UNK_0x918CFFD78ECE297E(0, 0);
			SYSTEM::WAIT(0);
			UNK_0xC2127C0F64D6A3B9();
			func_146();
			SYSTEM::WAIT(0);
			UNK_0xC2127C0F64D6A3B9();
			func_146();
			UNK_0xFBFE41B3E19EA531();
			UNK_0xAA23F71817ABF488();
			Global_21842 = 1;
			iLocal_143 = 0;
			bLocal_126 = true;
			Global_21838 = 1;
			UNK_0x2CBCC7DC0EEFF804(0, 1);
			bLocal_128 = false;
			bLocal_118 = true;
			bLocal_119 = true;
			bLocal_120 = true;
			bLocal_121 = true;
			bLocal_122 = true;
			bLocal_123 = true;
			func_6();
			bLocal_127 = false;
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			}
			func_111(0, 0);
			func_115(0);
			iLocal_115 = 0;
			func_106(1);
			if (!Global_2537071.f_6522)
			{
				UNK_0x5D96D8530B3D0904(&Global_7356, 9);
			}
			UNK_0x21387C9EECC2B220(false);
			bLocal_142 = false;
			func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
}

int func_11()
{
	func_12();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_12()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_15(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_14(UNK_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_61(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_13(Global_111638.f_2358.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_19(iParam1, bParam2))
	{
		iVar0 = func_18();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_18()
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

bool func_19(int iParam0, bool bParam1)
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

void func_20()
{
	bLocal_121 = true;
	bLocal_122 = true;
	bLocal_123 = true;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_19423 = { Global_19439[Global_19431 /*3*/] };
	func_104(0, 1);
	func_111(0, 0);
	func_115(0);
	iLocal_115 = 0;
	func_106(1);
	if (!UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
	{
		if (UNK_0xF026D357757F5F6A() == 0)
		{
			if (UNK_0xA3F916BCE430ED26())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_25(iParam0, func_26(iParam2), 0);
	bVar0 = (bVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_22(iParam0, bVar0, iParam2, 1);
	}
}

void func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_26(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_26(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_26(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_26(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_26(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_26(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_26(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_26(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_26(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_26(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_26(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_26(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_26(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_26(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_26(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_26(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_26(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_26(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_26(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_26(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_26(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_26(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_26(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_26(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_26(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_26(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_26(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_26(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_26(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_26(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_26(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_26(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_26(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_26(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_26(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_26(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_26(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_26(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_26(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_26(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_26(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_26(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_26(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_26(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_26(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_26(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_26(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_26(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_26(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_26(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_26(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_26(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_26(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

void func_23(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

bool func_24(int iParam0)
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

int func_25(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_26(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
}

void func_28()
{
	if (iLocal_156 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		if (!func_148())
		{
			func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
			func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_280");
		}
		else
		{
			func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
			func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_280");
		}
		if (bLocal_131)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
				{
					if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_76622 == 0 && UNK_0x8A22C4C08282BF26(joaat("PI_MENU")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
					func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_62)
							{
								func_67(iLocal_141, "SET_DATA_SLOT", 8f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 7f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
			{
				if (!UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
				{
					if (!func_148())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
						func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
						func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xF59058FCB716F903(0, 39, true), "CELL_284");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
						if (!UNK_0x91E3F625EF57450D(0))
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(0, 210, true), "CELL_284");
						}
						else
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xE32F7AC5E6DF304A(0, 29, true), "CELL_284");
						}
					}
					if (!func_148())
					{
						if (func_161())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_63)
							{
								func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 182, true), "CELL_FOCUS");
							}
							func_67(iLocal_141, "SET_DATA_SLOT", 8f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_141, "SET_DATA_SLOT", 8f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_148())
				{
					if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				if (!UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
				{
					if (!func_148())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
						func_67(iLocal_141, "SET_DATA_SLOT", 5f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
						if (!UNK_0x91E3F625EF57450D(0))
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(0, 210, true), "CELL_284");
						}
						else
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xE32F7AC5E6DF304A(0, 29, true), "CELL_284");
						}
					}
					if (!func_148())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 6f, UNK_0xF59058FCB716F903(0, 39, true), "CELL_284");
					}
					if (!func_148())
					{
						if (func_161())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_63)
							{
								func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 182, true), "CELL_FOCUS");
							}
							func_67(iLocal_141, "SET_DATA_SLOT", 9f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_141, "SET_DATA_SLOT", 5f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		UNK_0x7E60C62A7CE58FC8(iLocal_141, "SET_MAX_WIDTH");
		UNK_0x7C19E5E4784BD7CF(bLocal_77);
		UNK_0x7E60D21B163E9D56();
		func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
}

void func_29(float fParam0)
{
	func_67(iLocal_141, "SET_DATA_SLOT", fParam0, UNK_0xF59058FCB716F903(0, 174, true), "CELL_ACTION");
}

bool func_30(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
		if (func_48(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_31(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(UNK_0x16F2683693E537C9(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar6;
	var uVar12;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (func_47())
	{
		return 0;
	}
	uVar0 = 5;
	uVar6 = 5;
	uVar12 = 6;
	if (iParam1 == 0)
	{
		iVar22 = 3;
	}
	else if (bParam3)
	{
		iVar22 = 1;
	}
	else if (bParam4)
	{
		iVar22 = 2;
	}
	else
	{
		iVar22 = 0;
	}
	func_40(iParam1, iParam2, &uVar0, &uVar6, &uVar12, iVar22, bParam5);
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("MP_F_FREEMODE_01"))
		{
			iVar19 = func_39(bParam0);
			if (!iVar19 == -1)
			{
				if (func_38(&uVar0, iVar19))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar20 = func_37(bParam0);
			if (!iVar20 == -1)
			{
				if (func_35(&uVar6, iVar20))
				{
					return 1;
				}
			}
		}
		if (UNK_0x8CD06866876216F2())
		{
			iVar21 = func_34(bParam0);
			if (!iVar21 == 0)
			{
				if (func_33(&uVar12, iVar21))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_33(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return true;
	}
	return false;
}

int func_34(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x36C584991B4C183F(bParam0, true);
	return iVar0;
}

int func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_37(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x98F1B512A2CC07C5(bParam0, false);
	return iVar0;
}

int func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_39(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x98F1B512A2CC07C5(bParam0, false);
	return iVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 1:
							func_44(uParam3, 4, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 2:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 62, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				case 52:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 66, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 53:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				case 54:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				case 55:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				case 56:
				case 57:
				case 58:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 10:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 19, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 13:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 2:
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				case 16:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 4, 1);
							break;
						case 1:
							func_46(uParam4, 43, 1);
							break;
						case 2:
							break;
					}
					break;
				case 23:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							Jump @17485; //curOff = 17055
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							Jump @24960; //curOff = 17485
							switch (iParam5)
							{
								case 0:
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 111, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 5, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 7, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
								case 1:
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 5, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 7, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 43, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
								case 2:
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 5, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 7, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
							}
							Jump @24960; //curOff = 20366
							switch (iParam5)
							{
								case 0:
									func_44(uParam3, 3, 1);
									func_44(uParam3, 7, 1);
									func_44(uParam3, 0, 1);
									func_44(uParam3, 12, 1);
									func_44(uParam3, 13, 1);
									func_44(uParam3, 15, 1);
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 17, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_44(uParam3, 20, 1);
									func_44(uParam3, 21, 1);
									func_44(uParam3, 25, 1);
									func_44(uParam3, 26, 1);
									func_44(uParam3, 27, 1);
									func_44(uParam3, 30, 1);
									func_44(uParam3, 31, 1);
									func_44(uParam3, 32, 1);
									func_44(uParam3, 33, 1);
									func_44(uParam3, 39, 1);
									func_44(uParam3, 37, 1);
									func_42(uParam2, 0, 1);
									func_42(uParam2, 2, 1);
									func_42(uParam2, 3, 1);
									func_42(uParam2, 4, 1);
									func_42(uParam2, 6, 1);
									func_42(uParam2, 7, 1);
									func_42(uParam2, 8, 1);
									func_42(uParam2, 11, 1);
									func_42(uParam2, 13, 1);
									func_42(uParam2, 15, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 17, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_42(uParam2, 19, 1);
									func_42(uParam2, 20, 1);
									func_42(uParam2, 21, 1);
									func_42(uParam2, 22, 1);
									func_42(uParam2, 54, 1);
									func_42(uParam2, 24, 1);
									func_42(uParam2, 26, 1);
									func_42(uParam2, 27, 1);
									func_42(uParam2, 28, 1);
									func_42(uParam2, 30, 1);
									func_42(uParam2, 31, 1);
									func_42(uParam2, 32, 1);
									func_42(uParam2, 38, 1);
									func_42(uParam2, 36, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 4, 1);
									func_46(uParam4, 14, 1);
									func_46(uParam4, 15, 1);
									func_46(uParam4, 16, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 17, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 31, 1);
									func_46(uParam4, 33, 1);
									func_46(uParam4, 34, 1);
									func_46(uParam4, 43, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 65, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 75, 1);
									func_44(uParam3, 76, 1);
									func_44(uParam3, 77, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 64, 1);
									func_42(uParam2, 65, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 74, 1);
									func_42(uParam2, 75, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
								case 1:
									func_44(uParam3, 3, 1);
									func_44(uParam3, 7, 1);
									func_44(uParam3, 0, 1);
									func_44(uParam3, 12, 1);
									func_44(uParam3, 13, 1);
									func_44(uParam3, 15, 1);
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 17, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_44(uParam3, 20, 1);
									func_44(uParam3, 21, 1);
									func_44(uParam3, 25, 1);
									func_44(uParam3, 26, 1);
									func_44(uParam3, 27, 1);
									func_44(uParam3, 30, 1);
									func_44(uParam3, 31, 1);
									func_44(uParam3, 32, 1);
									func_44(uParam3, 33, 1);
									func_44(uParam3, 39, 1);
									func_42(uParam2, 0, 1);
									func_42(uParam2, 2, 1);
									func_42(uParam2, 3, 1);
									func_42(uParam2, 4, 1);
									func_42(uParam2, 6, 1);
									func_42(uParam2, 7, 1);
									func_42(uParam2, 11, 1);
									func_42(uParam2, 13, 1);
									func_42(uParam2, 15, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 17, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_42(uParam2, 19, 1);
									func_42(uParam2, 20, 1);
									func_42(uParam2, 21, 1);
									func_42(uParam2, 22, 1);
									func_42(uParam2, 54, 1);
									func_42(uParam2, 24, 1);
									func_42(uParam2, 38, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 4, 1);
									func_46(uParam4, 14, 1);
									func_46(uParam4, 15, 1);
									func_46(uParam4, 16, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 7, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 17, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 31, 1);
									func_46(uParam4, 33, 1);
									func_46(uParam4, 34, 1);
									func_46(uParam4, 43, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 65, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 75, 1);
									func_44(uParam3, 76, 1);
									func_44(uParam3, 77, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 64, 1);
									func_42(uParam2, 65, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 74, 1);
									func_42(uParam2, 75, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
								case 2:
									func_44(uParam3, 1, 1);
									func_44(uParam3, 3, 1);
									func_44(uParam3, 4, 1);
									func_44(uParam3, 5, 1);
									func_44(uParam3, 7, 1);
									func_44(uParam3, 10, 1);
									func_44(uParam3, 54, 1);
									func_44(uParam3, 55, 1);
									func_44(uParam3, 56, 1);
									func_44(uParam3, 0, 1);
									func_44(uParam3, 12, 1);
									func_44(uParam3, 13, 1);
									func_44(uParam3, 15, 1);
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 17, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_44(uParam3, 20, 1);
									func_44(uParam3, 21, 1);
									func_44(uParam3, 25, 1);
									func_44(uParam3, 26, 1);
									func_44(uParam3, 27, 1);
									func_44(uParam3, 30, 1);
									func_44(uParam3, 31, 1);
									func_44(uParam3, 32, 1);
									func_44(uParam3, 33, 1);
									func_44(uParam3, 37, 1);
									func_44(uParam3, 39, 1);
									func_42(uParam2, 0, 1);
									func_42(uParam2, 1, 1);
									func_42(uParam2, 2, 1);
									func_42(uParam2, 3, 1);
									func_42(uParam2, 4, 1);
									func_42(uParam2, 5, 1);
									func_42(uParam2, 6, 1);
									func_42(uParam2, 7, 1);
									func_42(uParam2, 8, 1);
									func_42(uParam2, 9, 1);
									func_42(uParam2, 10, 1);
									func_42(uParam2, 53, 1);
									func_42(uParam2, 56, 1);
									func_42(uParam2, 55, 1);
									func_42(uParam2, 11, 1);
									func_42(uParam2, 12, 1);
									func_42(uParam2, 13, 1);
									func_42(uParam2, 14, 1);
									func_42(uParam2, 15, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 17, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_42(uParam2, 19, 1);
									func_42(uParam2, 20, 1);
									func_42(uParam2, 21, 1);
									func_42(uParam2, 22, 1);
									func_42(uParam2, 54, 1);
									func_42(uParam2, 23, 1);
									func_42(uParam2, 24, 1);
									func_42(uParam2, 26, 1);
									func_42(uParam2, 27, 1);
									func_42(uParam2, 28, 1);
									func_42(uParam2, 29, 1);
									func_42(uParam2, 30, 1);
									func_42(uParam2, 31, 1);
									func_42(uParam2, 32, 1);
									func_42(uParam2, 33, 1);
									func_42(uParam2, 36, 1);
									func_42(uParam2, 38, 1);
									func_42(uParam2, 55, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 4, 1);
									func_46(uParam4, 14, 1);
									func_46(uParam4, 15, 1);
									func_46(uParam4, 16, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 12, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 17, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 31, 1);
									func_46(uParam4, 33, 1);
									func_46(uParam4, 34, 1);
									func_46(uParam4, 32, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 65, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 75, 1);
									func_44(uParam3, 76, 1);
									func_44(uParam3, 77, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 64, 1);
									func_42(uParam2, 65, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 74, 1);
									func_42(uParam2, 75, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
							}
							Jump @24960; //curOff = 24900
							switch (iParam5)
							{
								case 0:
									break;
								case 1:
									func_42(uParam2, 2, 1);
									func_42(uParam2, 20, 1);
									break;
								case 2:
									break;
							}
							Jump @25111; //curOff = 24960
							switch (iParam1)
							{
								case 0:
									break;
								case 9:
								case 11:
								case 13:
								case 15:
								case 19:
								case 23:
								case 26:
								case 30:
								case 34:
								case 20:
								case 22:
									func_40(2, 52, uParam2, uParam3, uParam4, 0, 0);
									break;
								case 32:
									func_40(2, 53, uParam2, uParam3, uParam4, 0, 0);
									break;
								case 17:
								case 27:
								case 31:
									break;
							}
						}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_46(uParam2, 124, 1);
	func_46(uParam2, 125, 1);
	func_46(uParam2, 126, 1);
	func_46(uParam2, 127, 1);
	func_46(uParam2, 128, 1);
	func_46(uParam2, 129, 1);
	func_46(uParam2, 130, 1);
	func_46(uParam2, 131, 1);
	func_46(uParam2, 132, 1);
	func_46(uParam2, 133, 1);
	func_46(uParam2, 136, 1);
	func_46(uParam2, 138, 1);
	func_46(uParam2, 139, 1);
	func_46(uParam2, 143, 1);
	func_46(uParam2, 144, 1);
	func_46(uParam2, 145, 1);
	func_46(uParam2, 147, 1);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		UNK_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 5, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 7, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				case 1:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				case 10:
					func_46(uParam4, 28, 1);
					break;
				case 12:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 4, 1);
						func_44(uParam3, 6, 1);
						func_44(uParam3, 10, 1);
						func_44(uParam3, 54, 1);
						func_44(uParam3, 55, 1);
						func_44(uParam3, 56, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 106, 1);
						func_44(uParam3, 114, 1);
						func_44(uParam3, 116, 1);
						func_44(uParam3, 117, 1);
						func_44(uParam3, 118, 1);
						func_44(uParam3, 119, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 9, 1);
						func_42(uParam2, 10, 1);
						func_42(uParam2, 53, 1);
						func_42(uParam2, 56, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 36, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 14, 1);
						func_42(uParam2, 105, 1);
						func_42(uParam2, 113, 1);
						func_42(uParam2, 114, 1);
						func_42(uParam2, 115, 1);
						func_42(uParam2, 116, 1);
						func_42(uParam2, 117, 1);
					}
					func_46(uParam4, 2, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					break;
				case 15:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				case 18:
					if (bParam6)
					{
						func_44(uParam3, 4, 1);
					}
					break;
				case 17:
					func_46(uParam4, 9, 1);
					break;
				case 19:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				case 21:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 7, 1);
						func_44(uParam3, 0, 1);
						func_44(uParam3, 12, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 15, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 17, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 21, 1);
						func_44(uParam3, 25, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 30, 1);
						func_44(uParam3, 31, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 55, 1);
						func_42(uParam2, 0, 1);
						func_42(uParam2, 2, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 7, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 11, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 15, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 17, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
						func_42(uParam2, 20, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 22, 1);
						func_42(uParam2, 54, 1);
						func_42(uParam2, 24, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 30, 1);
						func_42(uParam2, 31, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 36, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		UNK_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

bool func_47()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return true;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return true;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return true;
			}
			break;
	}
	return false;
}

void func_49(float fParam0)
{
	func_67(iLocal_141, "SET_DATA_SLOT", fParam0, UNK_0xF59058FCB716F903(0, 172, true), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1672021)
	{
		fParam0 = -1f;
	}
	func_67(iLocal_141, "SET_DATA_SLOT", fParam0, UNK_0xF59058FCB716F903(0, 173, true), "CELL_FILTER");
}

void func_51()
{
	if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 183, true), "CELL_GRID");
	func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_62)
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 9f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_76622 == 0 && UNK_0x8A22C4C08282BF26(joaat("PI_MENU")) > 0) && func_60())
		{
			UNK_0x7E60C62A7CE58FC8(iLocal_140, "SET_FOCUS_LOCK");
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7ACC3006A87F8B39("CELL_ACTTL");
			UNK_0xD06AC7C87A34A6AD(UNK_0x19C9F30A7697B43C(&Global_4270750));
			UNK_0x779B34565F4D71B1();
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
		}
	}
}

void func_52(float fParam0)
{
	func_67(iLocal_141, "SET_DATA_SLOT", fParam0, UNK_0xF59058FCB716F903(0, 175, true), "CELL_ACCYC");
}

void func_53()
{
	func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 39, true), "CELL_284");
	func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
	func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
	func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_280");
	UNK_0x7E60C62A7CE58FC8(iLocal_141, "SET_MAX_WIDTH");
	UNK_0x7C19E5E4784BD7CF(bLocal_77);
	UNK_0x7E60D21B163E9D56();
	func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

void func_54()
{
	if (iLocal_156 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
		func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(2, 179, true), func_65());
		if (bLocal_131)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
				{
					if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_76622 == 0 && UNK_0x8A22C4C08282BF26(joaat("PI_MENU")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
					func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_62)
							{
								func_67(iLocal_141, "SET_DATA_SLOT", 8f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 7f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
			{
				if (!UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
					func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					func_67(iLocal_141, "SET_DATA_SLOT", 5f, UNK_0xF59058FCB716F903(0, 39, true), "CELL_284");
					if (func_161())
					{
						func_50(6f);
						func_49(7f);
						func_67(iLocal_141, "SET_DATA_SLOT", 8f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_141, "SET_DATA_SLOT", 5f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
			{
				if (!func_148())
				{
					if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
				func_67(iLocal_141, "SET_DATA_SLOT", 5f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
				func_67(iLocal_141, "SET_DATA_SLOT", 6f, UNK_0xF59058FCB716F903(0, 39, true), "CELL_284");
				if (func_161())
				{
					if (!func_148())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_63)
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 182, true), "CELL_FOCUS");
						}
						func_67(iLocal_141, "SET_DATA_SLOT", 9f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_148())
					{
						if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
						}
						else
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
						}
					}
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						if (!func_148())
						{
							func_50(4f);
							func_49(5f);
							func_67(iLocal_141, "SET_DATA_SLOT", 6f, UNK_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		UNK_0x7E60C62A7CE58FC8(iLocal_141, "SET_MAX_WIDTH");
		UNK_0x7C19E5E4784BD7CF(bLocal_77);
		UNK_0x7E60D21B163E9D56();
		func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
}

void func_55()
{
	func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 39, true), "CELL_284");
	func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
	func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(2, 179, true), func_65());
	func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 177, true), "CELL_281");
	UNK_0x7E60C62A7CE58FC8(iLocal_141, "SET_MAX_WIDTH");
	UNK_0x7C19E5E4784BD7CF(bLocal_77);
	UNK_0x7E60D21B163E9D56();
	func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

void func_56()
{
	if (bLocal_131)
	{
		UNK_0xEF6276132B396452(fLocal_73, 1065353216 /* Float: 1f */);
		UNK_0x2FB9A57162E54BAB(fLocal_74);
	}
}

void func_57(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4456448.f_227351 == 1)
	{
	}
	else if (Global_4456448.f_227352 == 1)
	{
	}
	else
	{
		UNK_0xBBAE59AC07ACB676(iParam0);
	}
}

void func_58()
{
	if (iLocal_61 == 1)
	{
		if (UNK_0x7F8A39872A07D2CE(sLocal_19[Global_4268489], "phone_cam12DUMMY"))
		{
			UNK_0xA6CB86BCFE04B70C(0);
			UNK_0x40861FC5E44959D6(0);
		}
		else
		{
			UNK_0xA6CB86BCFE04B70C(1);
			UNK_0x40861FC5E44959D6(1);
		}
	}
}

void func_59()
{
	func_152(iLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	if (!func_161())
	{
		if (!Global_1672021)
		{
			UNK_0x63D6BFA449464BBF("phone_cam");
		}
	}
}

bool func_60()
{
	if (func_61(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if ((UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/] || UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/]) || UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
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
	return true;
}

bool func_61(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_62(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_63()
{
	if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 30, true), "CELL_RT_RSTICK");
		func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xE32F7AC5E6DF304A(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 1, true), "CELL_RT_RSTICK");
		func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xE32F7AC5E6DF304A(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (UNK_0x91E3F625EF57450D(2) || UNK_0x33A494591F2C1975())
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 3f, UNK_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_67(iLocal_141, "SET_DATA_SLOT", 4f, UNK_0xE32F7AC5E6DF304A(0, 1, true), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 5f, UNK_0xF59058FCB716F903(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 5f, UNK_0xF59058FCB716F903(0, 39, true), "CELL_LT_LSTICKZ");
		func_67(iLocal_141, "SET_DATA_SLOT", 6f, UNK_0xF59058FCB716F903(2, 30, true), "CELL_LT_LSTICK");
	}
}

bool func_65()
{
	if (func_66())
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

bool func_66()
{
	switch (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_33)
	{
		case 233:
			switch (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_181)
			{
				case 9:
					return true;
				default:
					break;
			}
			break;
		case 158:
			switch (Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_181)
			{
				case 3:
				case 1:
				case 41:
					return true;
				default:
					break;
			}
			break;
	}
	if (Global_1702974)
	{
		return true;
	}
	return false;
}

void func_67(int iParam0, char* sParam1, float fParam2, bool bParam3, bool bParam4)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (!UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		func_68(bParam3);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_62(bParam4);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_68(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

void func_69()
{
	if (Global_76622)
	{
		switch (Global_21922)
		{
			case 0:
				if (UNK_0x91E3F625EF57450D(2))
				{
					func_147("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_147("CELL_CAM_SELFIE_0", -1);
				}
				Global_21922++;
				break;
			case 1:
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					if (UNK_0x91E3F625EF57450D(2))
					{
						func_147("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_147("CELL_CAM_SELFIE_1", -1);
					}
					Global_21922++;
				}
				break;
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_21921)
		{
			case 0:
				if (UNK_0x91E3F625EF57450D(2))
				{
					func_147("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_147("CELL_CAM_SELFIE_0", -1);
				}
				Global_21921++;
				break;
			case 1:
				if (!UNK_0xFEBC1E4EC9E001F0())
				{
					if (UNK_0x91E3F625EF57450D(2))
					{
						func_147("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_147("CELL_CAM_SELFIE_1", -1);
					}
					Global_21921++;
				}
				break;
			case 2:
				break;
		}
	}
}

void func_70()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;

	if (UNK_0x91E3F625EF57450D(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (UNK_0x06F8112AA79C53D9(2, iVar10) && !UNK_0x06F8112AA79C53D9(2, iVar9))
	{
		UNK_0x38C3A68D7861DCFD(0, 2, 1);
		UNK_0x38C3A68D7861DCFD(0, 1, 1);
		bVar0 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 30)) * 127;
		bVar1 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 31)) * 127;
		bVar2 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 1)) * 127;
		bVar3 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 2)) * 127;
		if (UNK_0x91E3F625EF57450D(2))
		{
			if (UNK_0x51D1D19912234EA0(bVar0) > 28 || UNK_0x51D1D19912234EA0(bVar1) > 28)
			{
				fVar6 = ((IntToFloat(bVar0) / 128f) * fLocal_164);
			}
		}
		else if (UNK_0x51D1D19912234EA0(bVar2) > 28 || UNK_0x51D1D19912234EA0(bVar3) > 28)
		{
			fVar6 = ((IntToFloat(bVar2) / 128f) * fLocal_164);
		}
		if (UNK_0x91E3F625EF57450D(2))
		{
			fVar7 = UNK_0x8A6BC5D9CAEACD0F(0, 290);
			fVar8 = UNK_0x8A6BC5D9CAEACD0F(0, 291);
			if (UNK_0x8EB1E94243F14479())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (UNK_0x51D1D19912234EA0(bVar0) > 28 || UNK_0x51D1D19912234EA0(bVar1) > 28)
		{
			fVar4 = ((IntToFloat(bVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-bVar1) / 128f) * fLocal_164);
		}
		func_73(fVar5);
		func_72(fVar6);
		func_71(fVar4);
	}
	else if (!UNK_0x06F8112AA79C53D9(2, iVar9))
	{
		UNK_0xEAB026E686C0D991(0, 2, 1);
		UNK_0xEAB026E686C0D991(0, 1, 1);
	}
}

void func_71(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	UNK_0xA9D96D93AE7ECD65(fLocal_161);
}

void func_72(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	UNK_0x0CF455992CB3D99D(fLocal_162);
}

void func_73(float fParam0)
{
	fLocal_163 = (fLocal_163 + fParam0);
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	UNK_0x4F72224D596AEDAC(fLocal_163);
}

void func_74()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (UNK_0x91E3F625EF57450D(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (UNK_0x06F8112AA79C53D9(2, iVar10))
		{
			if (UNK_0xBFC0798A6E3417F9(2, 178) && !func_148())
			{
				UNK_0xC4F8A794F3E0516C(0.5f);
				UNK_0x19267A54C731A20C(0.85f);
				UNK_0x9A8FC75B4D08A382(0.5f);
				UNK_0x4B5CA41D3DA44D82(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (UNK_0x06F8112AA79C53D9(2, iVar10) && !UNK_0x06F8112AA79C53D9(2, iVar11))
	{
		if (UNK_0xBFC0798A6E3417F9(2, 178) && !func_148())
		{
			UNK_0xC4F8A794F3E0516C(0.5f);
			UNK_0x19267A54C731A20C(0.85f);
			UNK_0x9A8FC75B4D08A382(0.5f);
			UNK_0x4B5CA41D3DA44D82(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		UNK_0x38C3A68D7861DCFD(0, 2, 1);
		UNK_0x38C3A68D7861DCFD(0, 1, 1);
		bVar0 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 30)) * 127;
		bVar1 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 31)) * 127;
		bVar2 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 1)) * 127;
		bVar3 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 2)) * 127;
		if (UNK_0x91E3F625EF57450D(2))
		{
			bVar1 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 39)) * 127;
			fVar8 = UNK_0x8A6BC5D9CAEACD0F(0, 290);
			fVar9 = UNK_0x8A6BC5D9CAEACD0F(0, 291);
			if (UNK_0x8EB1E94243F14479())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (UNK_0x51D1D19912234EA0(bVar2) > 15 || UNK_0x51D1D19912234EA0(bVar3) > 15)
		{
			fVar6 = ((IntToFloat(bVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-bVar3) / 128f) * fLocal_164);
		}
		if (UNK_0x51D1D19912234EA0(bVar0) > 28 || UNK_0x51D1D19912234EA0(bVar1) > 28)
		{
			fVar4 = ((IntToFloat(bVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(bVar1) / 128f) * fLocal_164);
		}
		func_78(fVar6);
		func_77(fVar7);
		func_76(fVar4);
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
	else if (!UNK_0x7FEE810EE9E768EB(2, iVar11))
	{
		UNK_0xEAB026E686C0D991(0, 2, 1);
		UNK_0xEAB026E686C0D991(0, 1, 1);
	}
	if (!UNK_0x7FEE810EE9E768EB(2, iVar10) && !UNK_0x7FEE810EE9E768EB(2, iVar11))
	{
		bVar0 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 30)) * 127;
		bVar1 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 31)) * 127;
		bVar2 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 290)) * 127;
		bVar3 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 291)) * 127;
		bVar2 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 294)) * 127;
		bVar2 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 295)) * 127;
		bVar3 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 292)) * 127;
		bVar3 = SYSTEM::FLOOR(UNK_0x8A6BC5D9CAEACD0F(0, 293)) * 127;
		if (UNK_0x51D1D19912234EA0(bVar2) > 28 || UNK_0x51D1D19912234EA0(bVar3) > 28)
		{
			fVar6 = ((IntToFloat(bVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-bVar3) / 128f) * fLocal_164);
		}
		if (UNK_0x51D1D19912234EA0(bVar0) > 28 || UNK_0x51D1D19912234EA0(bVar1) > 28)
		{
			fVar4 = ((IntToFloat(bVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(bVar1) / 128f) * fLocal_164);
		}
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
}

void func_75(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	UNK_0x9A8FC75B4D08A382(fLocal_159);
}

void func_76(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	UNK_0x4B5CA41D3DA44D82(fLocal_160);
}

void func_77(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	UNK_0x19267A54C731A20C(fLocal_158);
}

void func_78(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	UNK_0xC4F8A794F3E0516C(fLocal_157);
}

void func_79()
{
	if (Global_76882 || Global_76883)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!bLocal_150)
		{
			if (Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0)
			{
				UNK_0x6567AE843FADBA94(iLocal_141, 255, 255, 255, false, 0);
			}
		}
	}
	if (bLocal_127 == 0)
	{
		if (Global_19428)
		{
			if (Global_19664)
			{
				if (bLocal_150 == 0)
				{
					if (Global_19486.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_81(255, 255, 255, 255);
			func_80(0.059f, 0.644f, "CELL_284", 0);
			func_81(255, 255, 255, 255);
			func_80(0.165f, 0.644f, "CELL_285", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.75f, "CELL_280", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19428)
	{
	}
	else
	{
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.75f, func_65(), 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.79f, "CELL_286", 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_80(float fParam0, float fParam1, bool bParam2, int iParam3)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	UNK_0xD3539A877EC25E86(0.4f, 0.4f);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(1, 0, 0, 0, 205);
	UNK_0x57614350887C2EAD(1);
	UNK_0x7BBAC160090910C3(0);
	UNK_0x7178F32F6742C936(iParam0, iParam1, iParam2, bParam3);
}

void func_82()
{
	UNK_0xEF6276132B396452(fLocal_75, 1065353216 /* Float: 1f */);
	UNK_0x2FB9A57162E54BAB(fLocal_76);
}

void func_83()
{
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x38C3A68D7861DCFD(0, 44, 1);
	UNK_0x38C3A68D7861DCFD(0, 3, 1);
	UNK_0x38C3A68D7861DCFD(0, 4, 1);
	UNK_0x38C3A68D7861DCFD(0, 5, 1);
	UNK_0x38C3A68D7861DCFD(0, 6, 1);
	UNK_0x38C3A68D7861DCFD(0, 1, 1);
	UNK_0x38C3A68D7861DCFD(0, 2, 1);
	UNK_0x38C3A68D7861DCFD(0, 39, 1);
	UNK_0x38C3A68D7861DCFD(0, 47, 1);
	UNK_0x38C3A68D7861DCFD(0, 56, 1);
}

void func_84()
{
	vLocal_87 = { Global_19439[Global_19431 /*3*/] };
	if (Global_19428)
	{
		if (func_87())
		{
			UNK_0x1CFAC524932A967E(&vLocal_93);
			vLocal_87 = { vLocal_93 };
			bLocal_121 = false;
			bLocal_122 = false;
			bLocal_123 = false;
		}
		func_1(1);
		if (bLocal_121)
		{
			vLocal_81.x = (vLocal_81.x + 12f);
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x)
		{
			vLocal_81.x = vLocal_87.x;
			bLocal_121 = false;
		}
		if (bLocal_122)
		{
			vLocal_81.f_1 = (vLocal_81.y - 6f);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_7358, 4))
		{
			if (vLocal_81.y < (vLocal_87.y + 15f) || vLocal_81.y == (vLocal_87.y + 15f))
			{
				vLocal_81.f_1 = (vLocal_87.y + 15f);
				bLocal_122 = false;
			}
		}
		else if (vLocal_81.y < (vLocal_87.y + 10f) || vLocal_81.y == (vLocal_87.y + 10f))
		{
			vLocal_81.f_1 = (vLocal_87.y + 10f);
			bLocal_122 = false;
		}
		if (bLocal_123)
		{
			vLocal_81.f_2 = (vLocal_81.z - 10f);
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z)
		{
			vLocal_81.f_2 = vLocal_87.z;
			bLocal_123 = false;
		}
		if (func_87() == 0)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7358, 4))
			{
				vLocal_87.f_1 = (vLocal_87.y + 15f);
			}
			else
			{
				vLocal_87.f_1 = (vLocal_87.y + 10f);
			}
			vLocal_87.x = (vLocal_87.x - 14f);
		}
		else
		{
			vLocal_87 = { Global_19432[Global_19431 /*3*/] };
		}
		vLocal_81 = { vLocal_87 };
		bLocal_123 = false;
		bLocal_122 = false;
		bLocal_121 = false;
		UNK_0x39F06A2B18483C68(vLocal_81);
		if ((bLocal_121 == 0 && bLocal_122 == 0) && bLocal_123 == 0)
		{
			iLocal_124 = 0;
			vLocal_84 = { -90.3f, 0f, 90f };
			UNK_0x44FE29702110D5C6(vLocal_84, 0);
			if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 22))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_85();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_85()
{
	func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_286");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(2, 178, true), "CELL_277");
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_GALSAVE");
	}
	UNK_0x7E60C62A7CE58FC8(iLocal_141, "SET_MAX_WIDTH");
	UNK_0x7C19E5E4784BD7CF(bLocal_77);
	UNK_0x7E60D21B163E9D56();
	func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

void func_86()
{
	func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(2, 179, true), func_65());
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_286");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, UNK_0xF59058FCB716F903(2, 179, true), func_65());
		func_67(iLocal_141, "SET_DATA_SLOT", 1f, UNK_0xF59058FCB716F903(2, 178, true), "CELL_277");
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, UNK_0xF59058FCB716F903(0, 176, true), "CELL_GALSAVE");
	}
	UNK_0x7E60C62A7CE58FC8(iLocal_141, "SET_MAX_WIDTH");
	UNK_0x7C19E5E4784BD7CF(bLocal_77);
	UNK_0x7E60D21B163E9D56();
	func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

bool func_87()
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
		if (func_61(14))
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

void func_88()
{
	UNK_0x38C3A68D7861DCFD(0, 47, 1);
	UNK_0x558EC149EB2BC0A2(0, Global_19456);
	vLocal_84 = { Global_19446 };
	vLocal_87 = { Global_19439[Global_19431 /*3*/] };
	if (func_87())
	{
		UNK_0xED76A908847D23B4(&vLocal_90, 0);
		vLocal_84 = { vLocal_90 };
		UNK_0x1CFAC524932A967E(&vLocal_93);
		vLocal_87 = { vLocal_93 };
		bLocal_118 = false;
		bLocal_119 = false;
		bLocal_120 = false;
		bLocal_121 = false;
		bLocal_122 = false;
		bLocal_123 = false;
	}
	if (Global_19428)
	{
		func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_57(0);
		bLocal_131 = false;
		if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 30))
		{
			bLocal_118 = false;
			bLocal_119 = false;
			bLocal_120 = false;
			func_89();
		}
		if (bLocal_121)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 9))
			{
				vLocal_81.x = (vLocal_81.x + 2f);
			}
			else
			{
				vLocal_81.x = (vLocal_81.x + 12f);
			}
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x)
		{
			vLocal_81.x = vLocal_87.x;
			bLocal_121 = false;
		}
		if (bLocal_122)
		{
			vLocal_81.f_1 = (vLocal_81.y - 6f);
		}
		if (vLocal_81.y < vLocal_87.y || vLocal_81.y == vLocal_87.y)
		{
			vLocal_81.f_1 = vLocal_87.y;
			bLocal_122 = false;
		}
		if (bLocal_123)
		{
			vLocal_81.f_2 = (vLocal_81.z - 10f);
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z)
		{
			vLocal_81.f_2 = vLocal_87.z;
			bLocal_123 = false;
		}
		if (bLocal_123 == 0)
		{
			if (bLocal_118)
			{
				vLocal_78.x = (vLocal_78.x + 1f);
			}
			if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x)
			{
				vLocal_78.x = vLocal_84.x;
				bLocal_118 = false;
			}
			if (bLocal_119)
			{
				vLocal_78.f_1 = (vLocal_78.y - 2f);
			}
			if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
			{
				vLocal_78.f_1 = vLocal_84.y;
				bLocal_119 = false;
			}
			if (bLocal_120)
			{
				vLocal_78.f_2 = (vLocal_78.z - 14f);
			}
			if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z)
			{
				vLocal_78.f_2 = vLocal_84.z;
				bLocal_120 = false;
			}
		}
		if (bLocal_126)
		{
			vLocal_78 = { vLocal_84 };
			vLocal_81 = { vLocal_87 };
			bLocal_118 = false;
			bLocal_119 = false;
			bLocal_120 = false;
			if (func_87() == 0)
			{
				UNK_0x44FE29702110D5C6(vLocal_78, 0);
				UNK_0x39F06A2B18483C68(vLocal_81);
			}
			func_104(0, 1);
		}
		else if (func_87() == 0)
		{
			UNK_0x44FE29702110D5C6(vLocal_78, 0);
			UNK_0x39F06A2B18483C68(vLocal_81);
		}
		if ((bLocal_118 == 0 && bLocal_119 == 0) && bLocal_120 == 0)
		{
			func_89();
		}
	}
	else
	{
		if (bLocal_118)
		{
			vLocal_78.x = (vLocal_78.x + 1f);
		}
		if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			bLocal_118 = false;
		}
		if (bLocal_119)
		{
			vLocal_78.f_1 = (vLocal_78.y - 2f);
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			bLocal_119 = false;
		}
		if (bLocal_120)
		{
			vLocal_78.f_2 = (vLocal_78.z - 7f);
		}
		if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			bLocal_120 = false;
		}
		if ((bLocal_118 == 0 && bLocal_119 == 0) && bLocal_120 == 0)
		{
			func_89();
		}
	}
	UNK_0x44FE29702110D5C6(vLocal_78, 0);
}

void func_89()
{
	func_1(0);
	if (func_87() == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 30))
		{
			UNK_0x39F06A2B18483C68(Global_19432[Global_19431 /*3*/]);
		}
		else
		{
			UNK_0x39F06A2B18483C68(Global_19439[Global_19431 /*3*/]);
		}
		vLocal_78 = { vLocal_84 };
		UNK_0x44FE29702110D5C6(vLocal_78, 0);
	}
	Global_21838 = 0;
	func_111(0, 0);
	func_115(0);
	iLocal_115 = 0;
	func_106(1);
	Global_19473 = 1;
	Global_21841 = 0;
	if (Global_19486.f_1 > 4)
	{
		Global_19486.f_1 = 6;
		Global_19464 = 1;
		func_90();
	}
	if (UNK_0x83D8570832F172A7(iLocal_140))
	{
		func_151(iLocal_140, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	UNK_0xC2127C0F64D6A3B9();
	UNK_0xE17FDF9E3068281B(&iLocal_141);
	UNK_0xE17FDF9E3068281B(&iLocal_140);
	if (Global_19666 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 17);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 17);
	}
	UNK_0x0674E58A79778E99(&Global_7356, 18);
	UNK_0x0674E58A79778E99(&Global_7356, 21);
	UNK_0x2CBCC7DC0EEFF804(0, 1);
	UNK_0x0674E58A79778E99(&Global_7358, 3);
	UNK_0x0674E58A79778E99(&Global_4269765, 3);
	UNK_0x21387C9EECC2B220(false);
	UNK_0x826505E1E441E55D(UNK_0xD803B885F5E47A62(), 1);
	UNK_0xA5E3ADAAA4CD5D6C(15);
	Global_21842 = 1;
	UNK_0x55D0A2DB35045A35(iLocal_112);
	UNK_0x43A06902454A1172(iLocal_112);
	UNK_0xBBCE9616B024A2BF();
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xDCDFC17557D5706C(UNK_0x16F2683693E537C9(), "Mood_Normal_1", 0);
		UNK_0x16BEAC335EC5109B(UNK_0x16F2683693E537C9());
	}
	func_106(1);
	UNK_0xA6CB86BCFE04B70C(0);
	UNK_0x40861FC5E44959D6(0);
	UNK_0x902FD904CBCE9316(1f);
	if (Global_4268490 > 0 && Global_4268490 < 13)
	{
		UNK_0xF5A41F3D3B38EFE3(sLocal_33[Global_4268490]);
	}
	func_104(0, 1);
	if (func_159(0, 1, bLocal_64, 1))
	{
		bLocal_64 = false;
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_90()
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
			func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_98(Global_7961);
			if (Global_7961 == 1)
			{
				func_152(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19490;
			}
			else
			{
				func_152(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				UNK_0x0674E58A79778E99(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				UNK_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_95();
				UNK_0x0674E58A79778E99(&Global_7358, 9);
				func_152(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			break;
		case 7:
			break;
		case 10:
			func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_97(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		case 9:
			if (Global_19485 == 1)
			{
				func_94();
				func_152(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (Global_20818)
				{
					UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(4);
					UNK_0x3CAEA85DA607305E(false);
					UNK_0x3CAEA85DA607305E(2);
					UNK_0x7ACC3006A87F8B39("CELL_CONDFON");
					UNK_0xD06AC7C87A34A6AD(&Global_20820);
					UNK_0x779B34565F4D71B1();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					UNK_0x7E60D21B163E9D56();
				}
				else if (func_93(Global_6671, Global_19486) == 0)
				{
					func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_152(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_94();
				if (Global_20818)
				{
					UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(4);
					UNK_0x3CAEA85DA607305E(false);
					UNK_0x3CAEA85DA607305E(2);
					UNK_0x7ACC3006A87F8B39("CELL_CONDFON");
					UNK_0xD06AC7C87A34A6AD(&Global_20820);
					UNK_0x779B34565F4D71B1();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
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
					if (func_93(Global_6671, Global_19486) == 0)
					{
						func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			func_91();
			break;
		default:
			break;
	}
}

void func_91()
{
	if (UNK_0x83D8570832F172A7(Global_19467))
	{
		func_92();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_97(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			UNK_0x0674E58A79778E99(&Global_7356, 17);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_92()
{
	if (Global_76622)
	{
		func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x0674E58A79778E99(&Global_7356, 17);
	}
}

int func_93(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_94()
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

void func_95()
{
	if (Global_76622)
	{
		if (func_96() == 0)
		{
			return;
		}
		func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		UNK_0x5D96D8530B3D0904(&Global_7356, 17);
	}
}

int func_96()
{
	return 0;
}

void func_97(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_62(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_62(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_62(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_62(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_62(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_98(int iParam0)
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
		if (func_61(14))
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
								func_62(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_99()
{
	switch (iLocal_100)
	{
		case 1:
			UNK_0x2CBCC7DC0EEFF804(0, 1);
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_28();
			}
			break;
		case 2:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_7356, 22))
			{
				UNK_0x2CBCC7DC0EEFF804(0, 1);
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_85();
				}
				iLocal_100 = 2;
			}
			break;
		default:
			break;
	}
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		if (!func_113())
		{
			UNK_0x5D96D8530B3D0904(&Global_1687687, 17);
		}
	}
	else if (func_113())
	{
		UNK_0x0674E58A79778E99(&Global_1687687, 17);
	}
}

bool func_101(int iParam0, int iParam1, int iParam2)
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

void func_102(bool bParam0)
{
	if (bParam0)
	{
		if (!func_103())
		{
			UNK_0x5D96D8530B3D0904(&Global_1687687, 18);
		}
	}
	else if (func_103())
	{
		UNK_0x0674E58A79778E99(&Global_1687687, 18);
	}
}

bool func_103()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 18);
}

void func_104(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_105(0))
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

bool func_105(int iParam0)
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

void func_106(bool bParam0)
{
	if ((Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0) && !Global_1672021)
	{
		if (func_107(UNK_0xD803B885F5E47A62()) && bParam0)
		{
			Global_1703107 = 1;
		}
		else
		{
			UNK_0x225CFE81EA219E44();
		}
	}
}

bool func_107(bool bParam0)
{
	if (bParam0 != func_110())
	{
		if (func_109(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_108(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

int func_108(int iParam0)
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

bool func_109(bool bParam0, bool bParam1, bool bParam2)
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

int func_110()
{
	return -1;
}

void func_111(int iParam0, int iParam1)
{
	if (Global_4456448.f_227351 == 1)
	{
	}
	else if (Global_4456448.f_227352 == 1)
	{
	}
	else
	{
		UNK_0x130EC2FF22A1FA80(iParam0, iParam1);
	}
}

bool func_112()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 15))
	{
		return true;
	}
	return false;
}

bool func_113()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 17);
}

void func_114()
{
	if (Global_19428)
	{
		vLocal_84 = { -90.3f, 0f, 90f };
		vLocal_87 = { 1.5f, 0f, -17f };
		if (func_87())
		{
			UNK_0xED76A908847D23B4(&vLocal_90, 0);
			vLocal_84 = { vLocal_90 };
			UNK_0x1CFAC524932A967E(&vLocal_93);
			vLocal_87 = { vLocal_93 };
			bLocal_118 = false;
			bLocal_119 = false;
			bLocal_120 = false;
			bLocal_121 = false;
			bLocal_122 = false;
			bLocal_123 = false;
		}
		if (bLocal_120 == 0)
		{
			if (bLocal_121)
			{
				vLocal_81.x = (vLocal_81.x - 14f);
			}
			if (vLocal_81.x < vLocal_87.x || vLocal_81.x == vLocal_87.x)
			{
				bLocal_121 = false;
			}
			if (bLocal_122)
			{
				vLocal_81.f_1 = (vLocal_81.y + 7f);
			}
			if (vLocal_81.y > vLocal_87.y || vLocal_81.y == vLocal_87.y)
			{
				bLocal_122 = false;
			}
			if (bLocal_123)
			{
				vLocal_81.f_2 = (vLocal_81.z + 12f);
			}
			if (vLocal_81.z > vLocal_87.z || vLocal_81.z == vLocal_87.z)
			{
				bLocal_123 = false;
			}
		}
		if (bLocal_118)
		{
			vLocal_78.x = (vLocal_78.x - 1f);
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			vLocal_78.x = vLocal_84.x;
			bLocal_118 = false;
		}
		if (bLocal_119)
		{
			vLocal_78.f_1 = (vLocal_78.y - 0.5f);
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			vLocal_78.f_1 = vLocal_84.y;
			bLocal_119 = false;
		}
		if (bLocal_120)
		{
			vLocal_78.f_2 = (vLocal_78.z + 11f);
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			vLocal_78.f_2 = vLocal_84.z;
			bLocal_120 = false;
		}
		if (func_87() == 0)
		{
			UNK_0x44FE29702110D5C6(vLocal_78, 0);
			UNK_0x39F06A2B18483C68(vLocal_81);
		}
	}
	else
	{
		vLocal_84 = { -93.9f, 4.9f, 90.7f };
		if (bLocal_118)
		{
			vLocal_78.x = (vLocal_78.x - 1f);
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			bLocal_118 = false;
		}
		if (bLocal_119)
		{
			vLocal_78.f_1 = (vLocal_78.y + 2f);
		}
		if (vLocal_78.y > vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			bLocal_119 = false;
		}
		if (bLocal_120)
		{
			vLocal_78.f_2 = (vLocal_78.z + 7f);
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			bLocal_120 = false;
		}
		UNK_0x44FE29702110D5C6(vLocal_78, 0);
	}
	if (Global_19428)
	{
		if (((((bLocal_118 == 0 && bLocal_119 == 0) && bLocal_120 == 0) && bLocal_121 == 0) && bLocal_122 == 0) && bLocal_123 == 0)
		{
			if (func_87())
			{
			}
			else
			{
				vLocal_78 = { vLocal_84 };
				UNK_0x44FE29702110D5C6(vLocal_78, 0);
				vLocal_81 = { vLocal_87 };
				UNK_0x39F06A2B18483C68(vLocal_81);
			}
			if (iLocal_103 == 0)
			{
				Global_21839 = 0;
				func_111(1, 1);
				iLocal_115 = 1;
				func_115(1);
				func_59();
				func_116();
				func_57(0);
				SYSTEM::SETTIMERA(0);
				bLocal_142 = true;
				iLocal_143 = 1;
				func_128();
				func_152(iLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
				{
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_154();
			}
		}
	}
	else if ((bLocal_118 == 0 && bLocal_119 == 0) && bLocal_120 == 0)
	{
		vLocal_78 = { vLocal_84 };
		UNK_0x44FE29702110D5C6(vLocal_78, 0);
		Global_21839 = 0;
	}
}

void func_115(bool bParam0)
{
	if (func_161())
	{
		if (bParam0)
		{
			if (!UNK_0xEB2424501D38FCE7())
			{
				UNK_0xED7EF6862C46961F(1);
				if (Global_4268490 > 0 && Global_4268490 < 99)
				{
					UNK_0x1D86FFCD165BF465(sLocal_33[Global_4268490], 0);
					UNK_0x902FD904CBCE9316(0.25f);
				}
			}
		}
		else if (UNK_0xEB2424501D38FCE7())
		{
			UNK_0xED7EF6862C46961F(0);
		}
	}
}

void func_116()
{
	if (Global_4268489 > 0 && Global_4268489 < 99)
	{
		if (!Global_1672021)
		{
			UNK_0x63D6BFA449464BBF(sLocal_19[Global_4268489]);
		}
	}
}

void func_117()
{
	if (Global_19428)
	{
		iLocal_125 = 0;
		func_59();
		func_104(1, 1);
		func_111(1, 1);
		iLocal_115 = 1;
		Global_21842 = 1;
	}
}

void func_118()
{
	if (Global_4456448.f_227351 == 1 && func_119())
	{
		return;
	}
	if (bLocal_127 == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_28();
		}
		if (UNK_0x7F8A39872A07D2CE(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

bool func_119()
{
	if (((func_123() || func_122()) || func_121()) || func_120())
	{
		return true;
	}
	return false;
}

var func_120()
{
	return Global_2450632.f_19;
}

var func_121()
{
	return Global_2450632.f_17;
}

var func_122()
{
	return Global_2450632.f_16;
}

var func_123()
{
	return Global_2450632.f_15;
}

void func_124()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_125()
{
	UNK_0x918CFFD78ECE297E(0, 0);
	bLocal_121 = true;
	bLocal_122 = true;
	bLocal_123 = true;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_126()
{
	func_127();
}

void func_127()
{
	if (bLocal_151)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_151 = false;
		}
	}
	if (bLocal_151 == 0)
	{
	}
}

void func_128()
{
	if (Global_19486.f_1 > 3)
	{
		if (!UNK_0x798A3F1296751F46())
		{
			UNK_0xEF45C43067063F18(iLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_129()
{
	if (func_61(14))
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
		Global_19486 = func_11();
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

void func_130(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_148())
		{
			func_104(1, 1);
		}
		else
		{
			func_104(0, 0);
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
	if (!func_131())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_131()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_132()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_133()
{
	UNK_0x38C3A68D7861DCFD(0, 0, 1);
	UNK_0x38C3A68D7861DCFD(0, 56, 1);
	if (bLocal_150 == 0)
	{
		UNK_0x558EC149EB2BC0A2(0, Global_19459);
		UNK_0x558EC149EB2BC0A2(0, Global_19456);
		UNK_0x38C3A68D7861DCFD(0, 278, 1);
		UNK_0x38C3A68D7861DCFD(0, 279, 1);
		UNK_0x38C3A68D7861DCFD(0, 280, 1);
		UNK_0x38C3A68D7861DCFD(0, 281, 1);
		UNK_0x38C3A68D7861DCFD(0, 282, 1);
		UNK_0x38C3A68D7861DCFD(0, 282, 1);
		UNK_0x38C3A68D7861DCFD(0, 284, 1);
		UNK_0x38C3A68D7861DCFD(0, 285, 1);
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 114, 1);
		UNK_0x38C3A68D7861DCFD(0, 71, 1);
		UNK_0x38C3A68D7861DCFD(0, 72, 1);
		UNK_0x38C3A68D7861DCFD(0, 74, 1);
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
		UNK_0x38C3A68D7861DCFD(0, 76, 1);
		UNK_0x38C3A68D7861DCFD(0, 73, 1);
		UNK_0x38C3A68D7861DCFD(0, 77, 1);
		UNK_0x38C3A68D7861DCFD(0, 78, 1);
		UNK_0x38C3A68D7861DCFD(0, 286, 1);
		UNK_0x38C3A68D7861DCFD(0, 287, 1);
		UNK_0x38C3A68D7861DCFD(0, 79, 1);
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		UNK_0x38C3A68D7861DCFD(0, 81, 1);
		UNK_0x38C3A68D7861DCFD(0, 82, 1);
		UNK_0x38C3A68D7861DCFD(0, 86, 1);
		UNK_0x38C3A68D7861DCFD(0, 59, 1);
		UNK_0x38C3A68D7861DCFD(0, 60, 1);
		UNK_0x38C3A68D7861DCFD(0, 61, 1);
		UNK_0x38C3A68D7861DCFD(0, 62, 1);
		UNK_0x38C3A68D7861DCFD(0, 63, 1);
		UNK_0x38C3A68D7861DCFD(0, 64, 1);
		UNK_0x38C3A68D7861DCFD(0, 87, 1);
		UNK_0x38C3A68D7861DCFD(0, 88, 1);
		UNK_0x38C3A68D7861DCFD(0, 89, 1);
		UNK_0x38C3A68D7861DCFD(0, 90, 1);
		UNK_0x38C3A68D7861DCFD(0, 107, 1);
		UNK_0x38C3A68D7861DCFD(0, 108, 1);
		UNK_0x38C3A68D7861DCFD(0, 109, 1);
		UNK_0x38C3A68D7861DCFD(0, 110, 1);
		UNK_0x38C3A68D7861DCFD(0, 111, 1);
		UNK_0x38C3A68D7861DCFD(0, 112, 1);
		UNK_0x38C3A68D7861DCFD(0, 113, 1);
		UNK_0x38C3A68D7861DCFD(0, 114, 1);
		UNK_0x38C3A68D7861DCFD(0, 91, 1);
		UNK_0x38C3A68D7861DCFD(0, 92, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
		UNK_0x38C3A68D7861DCFD(0, 102, 1);
		UNK_0x38C3A68D7861DCFD(0, 136, 1);
		UNK_0x38C3A68D7861DCFD(0, 137, 1);
		UNK_0x38C3A68D7861DCFD(0, 138, 1);
		UNK_0x38C3A68D7861DCFD(0, 139, 1);
		UNK_0x38C3A68D7861DCFD(0, 102, 1);
	}
}

bool func_134()
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xBBA8A868118C90ED(bVar0, -1, 0))
			{
				return true;
			}
			else if (!UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_135()
{
	var uVar0;

	func_143(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_142())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_141())
	{
		return true;
	}
	if (func_140(159))
	{
		if (!func_139())
		{
			return true;
		}
	}
	if (func_140(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_136() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_136()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_136()
{
	switch (func_138())
	{
		case 0:
			return func_137();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_137()
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

int func_138()
{
	return Global_30768;
}

bool func_139()
{
	return Global_2450632.f_598;
}

bool func_140(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_141()
{
	return Global_2460680;
}

bool func_142()
{
	return Global_2450632.f_593;
}

void func_143(var uParam0)
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
					func_144(iVar0);
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

void func_144(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_109(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_145(bVar4, &bVar5))
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

bool func_145(bool bParam0, bool bParam1)
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

void func_146()
{
	if (iLocal_156 == 1)
	{
		UNK_0x3584F71E5CA29322(7);
		UNK_0x3584F71E5CA29322(1);
		UNK_0x3584F71E5CA29322(3);
		UNK_0x3584F71E5CA29322(4);
		UNK_0x3584F71E5CA29322(6);
		UNK_0x3584F71E5CA29322(8);
		UNK_0x3584F71E5CA29322(9);
		UNK_0x3584F71E5CA29322(2);
	}
	else
	{
		UNK_0x3FC8DBCC154CA56B();
	}
}

void func_147(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_148()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

void func_149()
{
	if (func_150())
	{
		UNK_0x9F830D3499A5773E();
		if (UNK_0x1ED2F074FDAB6B19(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_21842 = 1;
			Global_19486.f_1 = 3;
			UNK_0xBBCE9616B024A2BF();
		}
	}
	else
	{
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1)
		{
			if (bLocal_127 == 0)
			{
				if (UNK_0x83D8570832F172A7(iLocal_140))
				{
					if (func_161())
					{
						if (Global_4268490 == 0)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
							{
								func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							}
						}
						func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					}
					else
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 2))
						{
							func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					}
				}
			}
			else if (UNK_0x83D8570832F172A7(iLocal_140))
			{
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		UNK_0xBBCE9616B024A2BF();
	}
}

bool func_150()
{
	if (Global_4456448.f_227351 == 1)
	{
		if (Global_76622)
		{
			return false;
		}
	}
	if (Global_4456448.f_227352 == 1)
	{
		if (Global_76622)
		{
			return false;
		}
	}
	if (UNK_0xA3F916BCE430ED26() || UNK_0xBA301E03A078FA59())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 28))
		{
			return false;
		}
	}
	return true;
}

void func_151(int iParam0, char* sParam1)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_152(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_153()
{
	if (Global_76622)
	{
		Global_19486 = 3;
	}
	else
	{
		Global_19486 = func_11();
	}
	if (Global_19486 > 3)
	{
		Global_19486 = 3;
	}
	return Global_111638.f_14046[Global_19486 /*20*/].f_7;
}

void func_154()
{
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	Global_21841 = 0;
	bLocal_127 = false;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		vLocal_67 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	if (Global_19428)
	{
		while (SYSTEM::TIMERA() < iLocal_137)
		{
			SYSTEM::WAIT(0);
			func_128();
			func_83();
			UNK_0xC2127C0F64D6A3B9();
		}
		func_151(iLocal_140, "OPEN_SHUTTER");
		func_146();
		func_118();
		bLocal_129 = true;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_111(1, 1);
		func_115(1);
		func_59();
		func_116();
		func_57(0);
		iLocal_115 = 1;
	}
}

void func_155(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 15);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 15);
	}
}

bool func_156()
{
	return Global_1312854;
}

bool func_157(bool bParam0, int iParam1)
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

void func_158()
{
}

bool func_159(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_160()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x5F596B0E13677FE9(UNK_0x16F2683693E537C9()))
		{
			UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
			UNK_0xC4F8A794F3E0516C(fLocal_157);
			UNK_0x19267A54C731A20C(fLocal_158);
			UNK_0x9A8FC75B4D08A382(fLocal_159);
		}
		else
		{
			UNK_0xC4F8A794F3E0516C(fLocal_157);
			UNK_0x19267A54C731A20C(fLocal_158);
			UNK_0x9A8FC75B4D08A382(fLocal_159);
		}
	}
	UNK_0x4B5CA41D3DA44D82(fLocal_160);
	UNK_0xA9D96D93AE7ECD65(fLocal_161);
	UNK_0x0CF455992CB3D99D(fLocal_162);
	UNK_0x4F72224D596AEDAC(fLocal_163);
	func_56();
}

bool func_161()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return true;
}

