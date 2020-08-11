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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = false;
	bool bLocal_73 = false;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_77 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	float fLocal_81 = 0f;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	char cLocal_90[64] = "";
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	char cLocal_106[64] = "";
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	char cLocal_122[64] = "";
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	vector3 vLocal_138 = { 0f, 0f, 0f };
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	char[] cLocal_159[8] = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	char cLocal_175[64] = "";
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	char cLocal_191[64] = "";
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	char cLocal_207[64] = "";
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_70 = 318;
	iLocal_71 = 1;
	fLocal_141 = -1f;
	fLocal_142 = -1f;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_65();
	}
	SYSTEM::WAIT(0);
	func_53();
	func_52();
	func_48();
	while (iLocal_71 && func_38(5, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_69)
		{
			case 0:
				if (func_36())
				{
					iLocal_69 = 1;
				}
				break;
			case 1:
				if (func_2())
				{
					iLocal_69 = 2;
				}
				break;
			case 2:
				func_1();
				break;
		}
	}
	func_65();
}

void func_1()
{
	iLocal_71 = 0;
}

bool func_2()
{
	vector3 vVar0;
	float fVar3;

	if (!UNK_0xEA6BC48857E0AC4C(&cLocal_90))
	{
		if (!UNK_0x83A8177D302E1A7E(iLocal_87))
		{
			vVar0 = { Vector(32.856f, 3819.65f, 1971.62f) - vLocal_83 };
			iLocal_87 = UNK_0xB055A4268B938F30(&cLocal_90, vLocal_83 + vVar0, 0f, 0f, 0f, 1f, 0, 0, 0, false);
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), &uLocal_143, &cLocal_159, 2))
		{
			fVar3 = UNK_0xA45992A6CE82FB43(Global_96074);
			switch (iLocal_224)
			{
				case 0:
					if (fLocal_141 < 0f)
					{
						iLocal_224++;
						return false;
					}
					if (fVar3 > fLocal_141)
					{
						if (!UNK_0xC844350D5D58C99A(bLocal_72) || iLocal_89 != -1)
						{
							if (UNK_0x97A0DB46CA749F31(&cLocal_106, UNK_0x16F2683693E537C9(), 0f, 0f, 0f, 0f, 0f, 0f, iLocal_89, 1f, 0, 0, 0))
							{
								if (UNK_0x7F8A39872A07D2CE(&cLocal_106, "scr_meth_pipe_smoke"))
								{
									func_17(UNK_0x16F2683693E537C9(), 0, 1);
								}
								iLocal_223 = UNK_0xD68EA767274B7444();
								UNK_0xCEAA091B490F8407(iLocal_223, &cLocal_207, UNK_0x16F2683693E537C9(), &cLocal_191, 0, 0);
								iLocal_224++;
							}
						}
						else if (UNK_0xE81656B429E5C4B5(&cLocal_106, bLocal_72, 0f, 0f, -1f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0))
						{
							if (UNK_0x7F8A39872A07D2CE(&cLocal_106, "scr_meth_pipe_smoke"))
							{
								func_17(UNK_0x16F2683693E537C9(), 0, 1);
							}
							iLocal_223 = UNK_0xD68EA767274B7444();
							UNK_0xCEAA091B490F8407(iLocal_223, &cLocal_207, UNK_0x16F2683693E537C9(), &cLocal_191, 0, 0);
							iLocal_224++;
						}
					}
					break;
				case 1:
					if (fLocal_142 < 0f)
					{
						iLocal_224++;
						return false;
					}
					if (fVar3 > fLocal_142)
					{
						if (!UNK_0xC844350D5D58C99A(bLocal_72) || iLocal_89 != -1)
						{
							if (UNK_0x97A0DB46CA749F31(&cLocal_106, UNK_0x16F2683693E537C9(), 0f, 0f, 0f, 0f, 0f, 0f, iLocal_89, 1f, 0, 0, 0))
							{
								if (UNK_0x7F8A39872A07D2CE(&cLocal_106, "scr_meth_pipe_smoke"))
								{
									func_17(UNK_0x16F2683693E537C9(), 0, 1);
								}
								iLocal_223 = UNK_0xD68EA767274B7444();
								UNK_0xCEAA091B490F8407(iLocal_223, &cLocal_207, UNK_0x16F2683693E537C9(), &cLocal_191, 0, 0);
								iLocal_224++;
							}
						}
						else if (UNK_0xE81656B429E5C4B5(&cLocal_106, bLocal_72, 0f, 0f, -1f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0))
						{
							if (UNK_0x7F8A39872A07D2CE(&cLocal_106, "scr_meth_pipe_smoke"))
							{
								func_17(UNK_0x16F2683693E537C9(), 0, 1);
							}
							iLocal_223 = UNK_0xD68EA767274B7444();
							UNK_0xCEAA091B490F8407(iLocal_223, &cLocal_207, UNK_0x16F2683693E537C9(), &cLocal_191, 0, 0);
							iLocal_224++;
						}
					}
					break;
				case 2:
					if (!UNK_0xEA6BC48857E0AC4C(&cLocal_122))
					{
						if (UNK_0xBA3209FB359D3EA4(&cLocal_122, vLocal_83 + vLocal_138, 0f, 0f, 0f, 1f, 0, 0, 0))
						{
							iLocal_224++;
						}
					}
					else
					{
						iLocal_224++;
					}
					break;
				case 3:
					break;
			}
			if (UNK_0xC844350D5D58C99A(bLocal_72))
			{
				if (UNK_0xD59B17D2DFF98E26(bLocal_72))
				{
					if (iLocal_82 != -1)
					{
						if (fVar3 > fLocal_81)
						{
							func_3(&bLocal_72, iLocal_82);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_88 != 0)
			{
				UNK_0xF7E25143642732EA(iLocal_88, 0);
				iLocal_88 = 0;
				UNK_0x55D0A2DB35045A35(iLocal_223);
				UNK_0x43A06902454A1172(iLocal_223);
			}
			if (UNK_0xC844350D5D58C99A(bLocal_72))
			{
				if (UNK_0xD59B17D2DFF98E26(bLocal_72))
				{
					if (iLocal_82 != -1)
					{
						func_3(&bLocal_72, iLocal_82);
					}
				}
			}
			return true;
		}
	}
	else
	{
		func_65();
		return false;
	}
	return false;
}

int func_3(bool bParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	bool bVar26;
	vector3 vVar27;
	vector3 vVar30;
	bool bVar33;
	bool bVar34;
	var uVar35;
	char[] cVar51[8];
	int iVar67;
	var uVar68;
	char[] cVar84[8];
	char[] cVar100[8];
	var uVar116;
	var uVar117;

	iVar0 = func_15();
	switch (iParam1)
	{
		case 0:
			if (UNK_0xD59B17D2DFF98E26(*bParam0))
			{
				UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
			}
			if (UNK_0x134B62B726CEC8E6(*bParam0) != joaat("PROP_CS_IRONING_BOARD") && UNK_0x134B62B726CEC8E6(*bParam0) != joaat("PROP_IRON_01"))
			{
				UNK_0x1E9649458B15960F(*bParam0, false);
				UNK_0xEF190091B5B9F5EB(*bParam0, 1);
			}
			if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("PROP_IRON_01"))
			{
				vVar1 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
				vVar4 = { UNK_0x835730A2D89F6093(*bParam0, 2) };
				UNK_0xA47B46945FF6DE74(*bParam0, vVar1 + Vector(0.1f, 0f, 0f), 1, 0, 0, 1);
				UNK_0xC023D1C4BF532815(*bParam0, vVar4.x, vVar4.y, vVar4.z, 2, 1);
			}
			if (UNK_0x134B62B726CEC8E6(*bParam0) != joaat("P_DEFILIED_RAGDOLL_01_S"))
			{
				UNK_0xEEEE2E5FA6F78DF0(bParam0);
			}
			return 1;
		case 1:
			UNK_0xF690C84DADBB3551(bParam0);
			return 1;
		case 2:
			UNK_0x1BF8B16C32704027(*bParam0, -8f, 1);
			if (UNK_0xD59B17D2DFF98E26(*bParam0))
			{
				UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
			}
			UNK_0x1E9649458B15960F(*bParam0, false);
			UNK_0xEF190091B5B9F5EB(*bParam0, 1);
			UNK_0xEEEE2E5FA6F78DF0(bParam0);
			*bParam0 = 0;
			return 1;
		case 3:
			if (UNK_0xD59B17D2DFF98E26(*bParam0))
			{
				UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
			}
			if (((UNK_0x134B62B726CEC8E6(*bParam0) != joaat("PROP_CHATEAU_TABLE_01") && UNK_0x134B62B726CEC8E6(*bParam0) != joaat("V_RES_TT_FLUSHER")) && UNK_0x134B62B726CEC8E6(*bParam0) != joaat("V_ILEV_FH_LAMPA_ON")) && UNK_0x134B62B726CEC8E6(*bParam0) != joaat("PROP_CS_REMOTE_01"))
			{
				UNK_0x1BF8B16C32704027(*bParam0, -8f, 1);
			}
			if ((UNK_0x134B62B726CEC8E6(*bParam0) != joaat("V_ILEV_FH_DINEEAMESA") && UNK_0x134B62B726CEC8E6(*bParam0) != joaat("V_RES_TT_FLUSHER")) && UNK_0x134B62B726CEC8E6(*bParam0) != joaat("V_ILEV_FH_LAMPA_ON"))
			{
				UNK_0x1E9649458B15960F(*bParam0, false);
			}
			UNK_0xEF190091B5B9F5EB(*bParam0, 1);
			UNK_0xEEEE2E5FA6F78DF0(bParam0);
			return 1;
		case 4:
			vVar7 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
			vVar10 = { UNK_0x835730A2D89F6093(*bParam0, 2) };
			bVar13 = false;
			switch (UNK_0x134B62B726CEC8E6(*bParam0))
			{
				case joaat("P_LAPTOP_02_S"):
					bVar13 = joaat("PROP_LAPTOP_02_CLOSED");
					break;
				case joaat("V_ILEV_M_DINECHAIR"):
					bVar13 = joaat("P_DINECHAIR_01_S");
					break;
				case joaat("PROP_ACC_GUITAR_01"):
					bVar13 = joaat("PROP_ACC_GUITAR_01_D1");
					break;
				case joaat("P_DEFILIED_RAGDOLL_01_S"):
					bVar13 = joaat("PROP_DEFILIED_RAGDOLL_01");
					break;
				case joaat("P_HAND_TOILET_S"):
					bVar13 = joaat("PROP_TOILETFOOT_STATIC");
					break;
				case joaat("PROP_LAPTOP_02_CLOSED"):
				case joaat("P_DINECHAIR_01_S"):
				case joaat("PROP_ACC_GUITAR_01_D1"):
				case joaat("PROP_DEFILIED_RAGDOLL_01"):
					UNK_0x1BF8B16C32704027(*bParam0, -8f, 1);
					return 1;
				case joaat("PROP_TOILETFOOT_STATIC"):
					vVar14 = { 1971.669f, 3819.449f, 32.766f };
					vVar17 = { 0f, 0f, 53.6f };
					UNK_0xA47B46945FF6DE74(*bParam0, vVar14, 1, 0, 0, 1);
					UNK_0xC023D1C4BF532815(*bParam0, vVar17, 2, 1);
					UNK_0x1E9649458B15960F(*bParam0, true);
					return 1;
				default:
					bVar13 = false;
					return 0;
			}
			UNK_0x523BCC9DC80CD82F(bVar13);
			while (!UNK_0xB87F6CF6E5628C67(bVar13))
			{
				UNK_0x3FC8DBCC154CA56B();
				UNK_0x3584F71E5CA29322(18);
				UNK_0xECEC50E724D52DC1();
				if (Global_19486.f_1 != 1)
				{
					func_7(1);
				}
				SYSTEM::WAIT(0);
			}
			UNK_0x3FC8DBCC154CA56B();
			UNK_0x3584F71E5CA29322(18);
			UNK_0xECEC50E724D52DC1();
			if (Global_19486.f_1 != 1)
			{
				func_7(1);
			}
			UNK_0xF690C84DADBB3551(bParam0);
			*bParam0 = UNK_0x7707E48765093646(bVar13, vVar7, true, true, false);
			UNK_0xC023D1C4BF532815(*bParam0, vVar10, 2, 1);
			UNK_0x71199B01895C6202(bVar13);
			return 1;
		case 5:
			UNK_0xDA55CDFB97015579(UNK_0x68F4C0EC296D3901(*bParam0, true), 0, 0.5f, 1, 0, 1f, 0);
			UNK_0xF690C84DADBB3551(bParam0);
			return 1;
		case 6:
			return 1;
		case 7:
			if (UNK_0x134B62B726CEC8E6(*bParam0) == UNK_0x6B7EC7B5B6B57364(joaat("WEAPON_PISTOL")))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					if (!UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("WEAPON_PISTOL"), 0))
					{
						UNK_0x262EF6C6306BEA6C(UNK_0x16F2683693E537C9(), joaat("WEAPON_PISTOL"), 30, false, true);
					}
					UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_PISTOL"), true);
				}
				UNK_0xF690C84DADBB3551(bParam0);
				return 1;
			}
			else
			{
				UNK_0xF690C84DADBB3551(bParam0);
				return 0;
			}
			break;
		case 8:
			vVar20 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
			vVar23 = { UNK_0x835730A2D89F6093(*bParam0, 2) };
			bVar26 = "";
			switch (UNK_0x134B62B726CEC8E6(*bParam0))
			{
				case joaat("PROP_CS_BEER_BOT_01"):
					bVar26 = "scr_pts_glass_bottle";
					break;
				case joaat("PROP_PINEAPPLE"):
					bVar26 = "ent_dst_pineapple";
					break;
				case joaat("PROP_ACC_GUITAR_01"):
					bVar26 = "scr_pts_guitar_break";
					break;
				default:
					bVar26 = "";
					return 0;
			}
			UNK_0x9E5E60D8C63FD9D1();
			while (!UNK_0x25F7A4D42AF2AB93())
			{
				UNK_0x3FC8DBCC154CA56B();
				UNK_0x3584F71E5CA29322(18);
				UNK_0xECEC50E724D52DC1();
				if (Global_19486.f_1 != 1)
				{
					func_7(1);
				}
				SYSTEM::WAIT(0);
			}
			UNK_0x3FC8DBCC154CA56B();
			UNK_0x3584F71E5CA29322(18);
			UNK_0xECEC50E724D52DC1();
			if (Global_19486.f_1 != 1)
			{
				func_7(1);
			}
			UNK_0xBA3209FB359D3EA4(bVar26, vVar20, vVar23, 1065353216 /* Float: 1f */, 0, 0, 0);
			UNK_0xF690C84DADBB3551(bParam0);
			return 1;
		case 9:
			vVar27 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
			vVar30 = { UNK_0x835730A2D89F6093(*bParam0, 2) };
			bVar33 = "";
			switch (UNK_0x134B62B726CEC8E6(*bParam0))
			{
				case joaat("PROP_CS_BEER_BOT_01"):
					bVar33 = "scr_pts_glass_bottle";
					break;
				case joaat("PROP_PINEAPPLE"):
					bVar33 = "ent_dst_pineapple";
					break;
				case joaat("PROP_ACC_GUITAR_01"):
				case joaat("PROP_ACC_GUITAR_01_D1"):
					bVar33 = "scr_pts_guitar_break";
					break;
				default:
					bVar33 = "";
					return 0;
			}
			UNK_0x9E5E60D8C63FD9D1();
			while (!UNK_0x25F7A4D42AF2AB93())
			{
				UNK_0x3FC8DBCC154CA56B();
				UNK_0x3584F71E5CA29322(18);
				UNK_0xECEC50E724D52DC1();
				if (Global_19486.f_1 != 1)
				{
					func_7(1);
				}
				SYSTEM::WAIT(0);
			}
			bVar34 = false;
			switch (UNK_0x134B62B726CEC8E6(*bParam0))
			{
				case joaat("PROP_ACC_GUITAR_01_D1"):
					return 0;
				case joaat("P_LAPTOP_02_S"):
					bVar34 = joaat("PROP_LAPTOP_02_CLOSED");
					break;
				case joaat("V_ILEV_M_DINECHAIR"):
					bVar34 = joaat("P_DINECHAIR_01_S");
					break;
				case joaat("PROP_ACC_GUITAR_01"):
					bVar34 = joaat("PROP_ACC_GUITAR_01_D1");
					break;
				case joaat("P_DEFILIED_RAGDOLL_01_S"):
					bVar34 = joaat("PROP_DEFILIED_RAGDOLL_01");
					break;
				default:
					bVar34 = false;
					return 0;
			}
			UNK_0x523BCC9DC80CD82F(bVar34);
			while (!UNK_0xB87F6CF6E5628C67(bVar34))
			{
				UNK_0x3FC8DBCC154CA56B();
				UNK_0x3584F71E5CA29322(18);
				UNK_0xECEC50E724D52DC1();
				if (Global_19486.f_1 != 1)
				{
					func_7(1);
				}
				SYSTEM::WAIT(0);
			}
			UNK_0x3FC8DBCC154CA56B();
			UNK_0x3584F71E5CA29322(18);
			UNK_0xECEC50E724D52DC1();
			if (Global_19486.f_1 != 1)
			{
				func_7(1);
			}
			UNK_0xBA3209FB359D3EA4(bVar33, vVar27, vVar30, 1065353216 /* Float: 1f */, 0, 0, 0);
			UNK_0xF690C84DADBB3551(bParam0);
			*bParam0 = UNK_0x7707E48765093646(bVar34, vVar27, true, true, false);
			UNK_0xC023D1C4BF532815(*bParam0, vVar30, 2, 1);
			if (func_6(iVar0, &uVar35, &cVar51, &iVar67))
			{
				if (func_4(iVar0, &uVar68, &cVar84, &cVar100, &uVar116, &uVar117))
				{
					if (!UNK_0xB4ECF989E2C1DAC8(*bParam0, &uVar68, &uVar35, 2))
					{
						UNK_0xE14EC663EED44AD5(*bParam0, Global_96074, &uVar35, &uVar68, 1000f, -8f, iVar67, 1148846080 /* Float: 1000f */);
					}
				}
			}
			UNK_0x71199B01895C6202(bVar34);
			return 1;
	}
	return 0;
}

bool func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return true;
		case 124:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
		case 234:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
		case 316:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return true;
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return true;
		case 79:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return true;
		case 80:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return true;
		case 82:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return true;
		case 84:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return true;
		case 83:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return true;
		case 85:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
		case 291:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return true;
		case 128:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return true;
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
		case 87:
		case 88:
		case 184:
		case 185:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
		case 89:
		case 90:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return true;
		case 127:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return true;
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
		case 126:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
		case 95:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return true;
		case 134:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return true;
		case 108:
		case 109:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return true;
		case 112:
		case 113:
		case 123:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
		case 41:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
		case 114:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return true;
		case 105:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*uParam5 |= 32;
			return true;
		case 106:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*uParam5 |= 32;
			return true;
		case 107:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*uParam5 |= 32;
			return true;
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return true;
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return true;
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return true;
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return true;
		case 103:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*uParam5 |= 68;
			return true;
		case 121:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return true;
		case 125:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return true;
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return true;
		case 110:
		case 111:
		case 131:
		case 132:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1026;
			return true;
		case 129:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 130:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return true;
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return true;
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return true;
		case 153:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return true;
		case 154:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return true;
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return true;
		case 157:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return true;
		case 159:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return true;
		case 160:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return true;
		case 161:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return true;
		case 164:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return true;
		case 165:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return true;
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return true;
		case 166:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return true;
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return true;
		case 168:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return true;
		case 173:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return true;
	}
	switch (iParam0)
	{
		case 186:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return true;
		case 187:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return true;
		case 188:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return true;
		case 189:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return true;
		case 190:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return true;
		case 191:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return true;
		case 175:
		case 176:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return true;
		case 177:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return true;
		case 178:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return true;
		case 179:
		case 180:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return true;
		case 181:
		case 182:
		case 183:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return true;
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return true;
		case 194:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return true;
		case 195:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return true;
		case 198:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return true;
		case 199:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return true;
		case 200:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return true;
		case 201:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return true;
		case 202:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return true;
		case 203:
		case 206:
		case 207:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return true;
		case 204:
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return true;
		case 211:
		case 213:
		case 216:
		case 217:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return true;
		case 212:
		case 214:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return true;
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return true;
		case 197:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return true;
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return true;
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return true;
		case 222:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return true;
		case 223:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return true;
		case 224:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return true;
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return true;
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return true;
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return true;
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return true;
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return true;
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return true;
		case 232:
		case 233:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return true;
		case 235:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return true;
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
		case 238:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return true;
		case 239:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return true;
		case 273:
		case 274:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return true;
		case 245:
		case 40:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
		case 315:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
		case 250:
		case 251:
		case 252:
		case 253:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return true;
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return true;
		case 243:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
		case 244:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
		case 271:
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 279:
		case 240:
		case 241:
		case 242:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return true;
		case 280:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
		case 246:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return true;
		case 286:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return true;
		case 247:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return true;
		case 263:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return true;
		case 278:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return true;
		case 264:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return true;
		case 255:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return true;
		case 285:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return true;
		case 259:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return true;
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return true;
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return true;
		case 254:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return true;
		case 287:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return true;
		case 288:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
		case 289:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
		case 290:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return true;
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return true;
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return true;
		case 304:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
		case 305:
			func_5(iParam0, sParam1, sParam2, sParam3);
			return true;
		case 310:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*uParam5 |= 32768;
			return true;
		case 311:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*uParam5 |= 32768;
			return true;
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return false;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return false;
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

bool func_6(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	*iParam3 = 0;
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 192:
			StringCopy(sParam1, "002110_04_MAGD_3_WEED_EXCHANGE_WEEDBOTTLE", 64);
			return true;
		case 156:
			StringCopy(sParam1, "AROUND_THE_TABLE_SELFISH_Lap_Top", 64);
			return true;
		case 189:
			StringCopy(sParam1, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_CHAIR", 64);
			return true;
		case 94:
			StringCopy(sParam1, "exit_table", 64);
			StringCopy(sParam2, "", 64);
			return true;
		case 150:
			StringCopy(sParam1, "RONEX_IG5_P2_CHAIR_01", 64);
			StringCopy(sParam2, "RONEX_IG5_P2_CHAIR_02", 64);
			return true;
		case 151:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_EXIT_CHAIR", 64);
			StringCopy(sParam2, "", 64);
			return true;
		case 171:
			StringCopy(sParam1, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_$", 64);
			return true;
		case 172:
			StringCopy(sParam1, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_CASH", 64);
			return true;
		case 249:
			StringCopy(sParam1, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_GUITAR", 64);
			return true;
		case 296:
			StringCopy(sParam1, "BEAR_IN_FLOYDS_FACE_EXIT_rasp", 64);
			return true;
		case 297:
			StringCopy(sParam1, "BEAR_FLOYDS_FACE_SMELL_EXIT_doll", 64);
			return true;
		case 298:
			StringCopy(sParam1, "Pineapple_EXIT_PINEAPPLE", 64);
			return true;
		case 311:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT_Foot", 64);
			return true;
		case 103:
			StringCopy(sParam1, "pier_lean_smoke_outro_CIG", 64);
			return true;
		case 244:
			StringCopy(sParam1, "EXIT_Taco", 64);
			return true;
		case 198:
			StringCopy(sParam1, "Garbage_Toss_BAG", 64);
			*iParam3 = 1;
			return true;
		case 200:
			StringCopy(sParam1, "THROW_CUP_EXIT_CUP", 64);
			return true;
		case 201:
			StringCopy(sParam1, "HIT_CUP_HAND_EXIT_CUP", 64);
			return true;
		case 236:
			StringCopy(sParam1, "EXIT_Beer", 64);
			return true;
		case 164:
			StringCopy(sParam1, "001404_01_MICS3_16_READS_SCRIPT_EXIT_PROP", 64);
			return true;
		case 80:
			StringCopy(sParam1, "EXIT_FORWARD_CHAIR", 64);
			return true;
	}
	return false;
}

void func_7(bool bParam0)
{
	if (bParam0)
	{
		func_14();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_13(0))
		{
			func_8(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_8(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_11())
		{
			func_10(1, 1);
		}
		else
		{
			func_10(0, 0);
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
	if (!func_9())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_9()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_10(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_13(0))
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

bool func_11()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_12()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_13(int iParam0)
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

void func_14()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

int func_15()
{
	if (UNK_0x991B1F0980C62628())
	{
		return Global_96854;
	}
	if (func_16())
	{
		return Global_96854;
	}
	return 318;
}

bool func_16()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

void func_17(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 == 0)
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return;
	}
	if ((func_35(bParam0) + iParam2) > 10)
	{
		iParam2 = (10 - func_35(bParam0));
	}
	iVar0 = 20000;
	if (UNK_0x8CD06866876216F2())
	{
		iVar0 *= 3;
	}
	if (!func_33(bParam0))
	{
		func_31(bParam0, iVar0, 0);
		func_28(iVar0, iVar0, 0.3f, func_29(), iParam1, 0);
		iVar1 = func_27(bParam0);
		if (iVar1 == -1)
		{
			iVar2 = func_26(iVar1);
			if (!iVar2 == -1)
			{
				Global_42383[iVar2 /*5*/].f_4 = (Global_42383[iVar2 /*5*/].f_4 + iParam2);
			}
		}
	}
	else
	{
		iVar3 = func_27(bParam0);
		iVar4 = -1;
		if (iVar3 == -1)
		{
			iVar4 = func_26(iVar3);
			if (!iVar4 == -1)
			{
				Global_42383[iVar4 /*5*/].f_4 = (Global_42383[iVar4 /*5*/].f_4 + iParam2);
			}
		}
		if (Global_42564 == 0 || Global_42564 <= UNK_0x1C0640BA9A7327B3())
		{
			func_28(iVar0, iVar0, 0.3f, func_29(), iParam1, 0);
		}
		else
		{
			Global_42564 = (Global_42564 + iVar0);
			func_23(bParam0, iVar0);
		}
	}
	Global_42569 = 0.25f;
	StringCopy(&Global_42570, "STONED", 16);
	iVar5 = func_27(bParam0);
	if (iVar5 == -1)
	{
		iVar6 = func_26(iVar5);
		if (!iVar6 == -1)
		{
		}
		return;
	}
	func_18(1, iVar5, 4, bParam0, iParam2);
}

void func_18(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	func_19(iParam0, iParam1, iParam2, bParam3, 0, iParam4);
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_21(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_20();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0 /*6*/] = iParam0;
	Global_42464[iVar0 /*6*/].f_1 = iParam1;
	Global_42464[iVar0 /*6*/].f_2 = iParam2;
	Global_42464[iVar0 /*6*/].f_3 = bParam3;
	Global_42464[iVar0 /*6*/].f_4 = iParam4;
	Global_42464[iVar0 /*6*/].f_5 = iParam5;
}

int func_20()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_22(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				if (iParam1 == Global_42464[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_23(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_27(bParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = func_25(bParam0);
		if (!iVar1 == -1)
		{
			Global_42357[iVar1 /*5*/].f_3 = (Global_42357[iVar1 /*5*/].f_3 + iParam1);
			Global_42357[iVar1 /*5*/].f_2 = (Global_42357[iVar1 /*5*/].f_2 + iParam1);
		}
		return;
	}
	func_24(1, iVar0, 2, iParam1);
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_19(iParam0, iParam1, iParam2, 0, iParam3, 1);
}

int func_25(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_27(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_28(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (Global_3)
	{
		return;
	}
	if (Global_42562)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!UNK_0x174D27C2C2F899E5())
	{
		UNK_0x0525F87A0751EA62("DRUNK_SHAKE", bParam3);
	}
	if (!UNK_0xD5B49A7E47E6726F())
	{
		UNK_0xF5AC1996BA944009("DRUNK_SHAKE", (bParam3 * Global_42561));
	}
	if (UNK_0x9F4FE516EAACCFC5(iParam4))
	{
		UNK_0x91F5B0244AAE6222(iParam4, "DRUNK_SHAKE", bParam3);
		Global_42563 = iParam4;
	}
	else
	{
		Global_42563 = 0;
	}
	Global_42562 = 1;
	iVar0 = UNK_0x1C0640BA9A7327B3();
	Global_42564 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_42564 = -1;
		}
	}
	Global_42565 = iParam1;
	Global_42566 = fParam2;
	Global_42568 = bParam3;
	Global_42567 = bParam3;
}

bool func_29()
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = 0.1f;
	iVar1 = func_30(UNK_0x16F2683693E537C9());
	iVar2 = func_35(UNK_0x16F2683693E537C9());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_30(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = func_27(bParam0);
	iVar1 = func_26(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

int func_31(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = func_27(bParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_25(bParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_32();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42357[iVar2 /*5*/] = 0;
	Global_42357[iVar2 /*5*/].f_1 = bParam0;
	Global_42357[iVar2 /*5*/].f_2 = iParam1;
	Global_42357[iVar2 /*5*/].f_3 = iParam1;
	Global_42357[iVar2 /*5*/].f_4 = 0;
	if (bParam0 == UNK_0x16F2683693E537C9())
	{
		Global_42594 = 1;
	}
	Global_42355++;
	return 1;
}

int func_32()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_33(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (func_34(bParam0) == -1)
	{
		return false;
	}
	return true;
}

int func_34(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_35(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = func_27(bParam0);
	iVar1 = func_26(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_4;
}

bool func_36()
{
	if (!bLocal_73 == 0)
	{
		if (!UNK_0xC844350D5D58C99A(bLocal_72))
		{
			UNK_0x523BCC9DC80CD82F(bLocal_73);
			if (!UNK_0xB87F6CF6E5628C67(bLocal_73))
			{
				UNK_0x523BCC9DC80CD82F(bLocal_73);
			}
			else if (iLocal_80 != -1)
			{
				bLocal_72 = UNK_0x7707E48765093646(bLocal_73, vLocal_83, true, true, false);
				UNK_0x9F528B1B53FBC5D9(bLocal_72, UNK_0x16F2683693E537C9(), UNK_0x4A089F2B762B8D33(UNK_0x16F2683693E537C9(), iLocal_80), vLocal_74, vLocal_77, 0, 0, 0, 0, 2, 1);
			}
			else
			{
				bLocal_72 = UNK_0x7707E48765093646(bLocal_73, vLocal_83 + vLocal_74, true, true, false);
				UNK_0xA47B46945FF6DE74(bLocal_72, vLocal_83 + vLocal_74, 1, 0, 0, 1);
				UNK_0xC023D1C4BF532815(bLocal_72, Vector(fLocal_86, 0f, 0f) + vLocal_77, 2, 1);
				UNK_0x1E9649458B15960F(bLocal_72, true);
			}
		}
	}
	if (!func_37())
	{
		if (UNK_0xC844350D5D58C99A(bLocal_72))
		{
			if (iLocal_80 != -1)
			{
				if (!UNK_0x50B5F6F3C29E9380(bLocal_72, UNK_0x16F2683693E537C9()))
				{
					UNK_0x9F528B1B53FBC5D9(bLocal_72, UNK_0x16F2683693E537C9(), UNK_0x4A089F2B762B8D33(UNK_0x16F2683693E537C9(), iLocal_80), vLocal_74, vLocal_77, 0, 0, 0, 0, 2, 1);
				}
			}
		}
		return true;
	}
	return false;
}

bool func_37()
{
	if (!UNK_0x991B1F0980C62628() || UNK_0x19EC8D83154D7CC1() == 3)
	{
		return false;
	}
	if (UNK_0x00A15D69BCAA5267() > 8)
	{
		if (UNK_0x00A15D69BCAA5267() != 11)
		{
			return false;
		}
		if (UNK_0x00A15D69BCAA5267() == 11)
		{
			if (UNK_0x94EFC97F8A693855() > 0)
			{
				if (UNK_0x192DE42720995A6E() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

int func_38(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0x991B1F0980C62628())
	{
		if (UNK_0x19EC8D83154D7CC1() != 3)
		{
			if (UNK_0x00A15D69BCAA5267() <= 2 && UNK_0x00A15D69BCAA5267() != 1)
			{
				return 1;
			}
		}
	}
	if (!UNK_0x991B1F0980C62628())
	{
		if (func_47(14))
		{
			return 0;
		}
		if (UNK_0x8F7DE34FFB67592B())
		{
			return 0;
		}
		if (!func_40(iParam0, func_41()))
		{
			return 0;
		}
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
			fVar3 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar0);
			if (fVar3 > 250f)
			{
				if (!UNK_0x437347B10A200C4B(bParam1, 0))
				{
					if (!UNK_0x0A059E0DB9253280(bParam1))
					{
						return 0;
					}
				}
				else if (!UNK_0x8E28E832BEAC3DCE(vVar0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (bParam1 == func_39(Global_98465) && bParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

bool func_39(var uParam0)
{
	return uParam0;
}

bool func_40(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_41()
{
	func_42();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
	}
	return 0;
}

void func_42()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_45(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_44(UNK_0x16F2683693E537C9());
			if (func_43(iVar0) && (!func_47(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_43(Global_111638.f_2358.f_539.f_4321))
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

bool func_43(int iParam0)
{
	return iParam0 < 3;
}

int func_44(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_45(int iParam0)
{
	if (func_43(iParam0))
	{
		return func_46(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_46(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_47(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_48()
{
	if (!UNK_0x991B1F0980C62628())
	{
		if (UNK_0x757EF87A33649210())
		{
			func_51();
		}
		return;
	}
	if (UNK_0x19EC8D83154D7CC1() == 3)
	{
		func_51();
		return;
	}
	func_49();
	if (Global_98467 > 0)
	{
		return;
	}
	UNK_0x36B03FE02FE012AB();
}

void func_49()
{
	func_50((Global_98467 - 1));
}

void func_50(int iParam0)
{
	Global_98467 = iParam0;
}

void func_51()
{
	func_50(0);
}

void func_52()
{
	int iVar0;
	bool bVar1;

	UNK_0x9E5E60D8C63FD9D1();
	iVar0 = 0;
	bVar1 = false;
	while (!bVar1 && iVar0 < 400)
	{
		bVar1 = true;
		if (UNK_0x991B1F0980C62628() && (UNK_0x00A15D69BCAA5267() != 8 || UNK_0x00A15D69BCAA5267() == 1))
		{
			bVar1 = false;
		}
		UNK_0x9E5E60D8C63FD9D1();
		if (!UNK_0x25F7A4D42AF2AB93())
		{
			bVar1 = false;
		}
		if (!UNK_0xEA6BC48857E0AC4C(&cLocal_175))
		{
			if (!UNK_0x64F604CF561734A9(&cLocal_175, 0, -1))
			{
				bVar1 = false;
			}
		}
		if (!bLocal_73 == 0)
		{
			if (!UNK_0xC844350D5D58C99A(bLocal_72))
			{
				UNK_0x523BCC9DC80CD82F(bLocal_73);
				if (!UNK_0xB87F6CF6E5628C67(bLocal_73))
				{
					bVar1 = false;
					UNK_0x523BCC9DC80CD82F(bLocal_73);
				}
				else if (iLocal_80 != -1)
				{
					if (UNK_0x991B1F0980C62628() && (UNK_0x00A15D69BCAA5267() != 8 || UNK_0x00A15D69BCAA5267() == 1))
					{
						bVar1 = false;
					}
					else
					{
						bLocal_72 = UNK_0x7707E48765093646(bLocal_73, vLocal_83, true, true, false);
						UNK_0x9F528B1B53FBC5D9(bLocal_72, UNK_0x16F2683693E537C9(), UNK_0x4A089F2B762B8D33(UNK_0x16F2683693E537C9(), iLocal_80), vLocal_74, vLocal_77, 0, 0, 0, 0, 2, 1);
					}
				}
				else
				{
					bLocal_72 = UNK_0x7707E48765093646(bLocal_73, vLocal_83 + vLocal_74, true, true, false);
					UNK_0xA47B46945FF6DE74(bLocal_72, vLocal_83 + vLocal_74, 1, 0, 0, 1);
					UNK_0xC023D1C4BF532815(bLocal_72, Vector(fLocal_86, 0f, 0f) + vLocal_77, 2, 1);
					UNK_0x1E9649458B15960F(bLocal_72, true);
				}
			}
		}
		if (!bVar1)
		{
			iVar0++;
		}
		SYSTEM::WAIT(0);
	}
}

void func_53()
{
	char[] cVar0[8];
	struct<109> Var8;
	struct<97> Var117;
	char[] cVar237[8];
	var uVar253;
	var uVar254;

	iLocal_70 = Global_98147;
	func_57(iLocal_70, &vLocal_83, &fLocal_86, &cVar0);
	switch (iLocal_70)
	{
		case 273:
		case 274:
			StringCopy(&cLocal_175, "TREVOR_PUKEINTOFOUNT", 64);
			StringCopy(&cLocal_191, "TREVOR_PUKEINTOFOUNT_SOUNDS", 64);
			StringCopy(&cLocal_207, "Puke", 64);
			fLocal_141 = 0.19f;
			fLocal_142 = 0.33f;
			iLocal_89 = 31086;
			StringCopy(&cLocal_90, "", 64);
			StringCopy(&cLocal_106, "scr_trev_amb_puke", 64);
			StringCopy(&cLocal_122, "scr_pts_vomit_water", 64);
			if (iLocal_70 == 273)
			{
				vLocal_138 = { Vector((34.97325f + 0.25f), -441.7662f, -118.3218f) - vLocal_83 };
			}
			else if (iLocal_70 == 274)
			{
				vLocal_138 = { 0.125f, -1.1486f, (0.0588f + 0.1f) };
			}
			else
			{
				vLocal_138 = { -0.125f, 1.1486f, -0.0588f };
			}
			break;
		case 245:
		case 40:
			StringCopy(&cLocal_175, "", 64);
			StringCopy(&cLocal_191, "", 64);
			StringCopy(&cLocal_207, "", 64);
			fLocal_141 = 0.19f;
			fLocal_142 = 0.47f;
			iLocal_89 = 31086;
			StringCopy(&cLocal_90, "", 64);
			StringCopy(&cLocal_106, "scr_meth_pipe_smoke", 64);
			StringCopy(&cLocal_122, "", 64);
			break;
		case 310:
			StringCopy(&cLocal_175, "", 64);
			StringCopy(&cLocal_191, "", 64);
			StringCopy(&cLocal_207, "", 64);
			fLocal_141 = 0.22f;
			fLocal_142 = 0.24f;
			iLocal_89 = -1;
			StringCopy(&cLocal_90, "", 64);
			StringCopy(&cLocal_106, "scr_pts_digging", 64);
			StringCopy(&cLocal_122, "", 64);
			bLocal_73 = joaat("PROP_TOOL_SHOVEL");
			vLocal_74 = { 0f, 0f, -0.045f };
			vLocal_77 = { 0f, 180f, 0f };
			iLocal_80 = 28422;
			fLocal_81 = 0.7f;
			iLocal_82 = 0;
			break;
		case 311:
			StringCopy(&cLocal_175, "", 64);
			StringCopy(&cLocal_191, "", 64);
			StringCopy(&cLocal_207, "", 64);
			fLocal_141 = 0.5f;
			fLocal_142 = 0.55f;
			iLocal_89 = 52301;
			StringCopy(&cLocal_90, "scr_pts_flush", 64);
			StringCopy(&cLocal_106, "scr_pts_footsplash", 64);
			StringCopy(&cLocal_122, "", 64);
			break;
		case 315:
			StringCopy(&cLocal_175, "", 64);
			StringCopy(&cLocal_191, "", 64);
			StringCopy(&cLocal_207, "", 64);
			fLocal_141 = 0.15f;
			fLocal_142 = -1f;
			iLocal_89 = 31086;
			StringCopy(&cLocal_90, "", 64);
			StringCopy(&cLocal_106, "scr_pts_headsplash_trev", 64);
			StringCopy(&cLocal_122, "", 64);
			bLocal_73 = joaat("PROP_CS_SINK_FILLER_02");
			vLocal_74 = { -0.54f, 0.08f, -0.13f };
			vLocal_77 = { 0f, 0f, -12f };
			iLocal_80 = -1;
			fLocal_81 = 0.7f;
			iLocal_82 = -1;
			break;
		case 124:
			StringCopy(&cLocal_175, "", 64);
			StringCopy(&cLocal_191, "", 64);
			StringCopy(&cLocal_207, "", 64);
			fLocal_141 = 0.07f;
			fLocal_142 = -1f;
			iLocal_89 = 60309;
			StringCopy(&cLocal_90, "", 64);
			StringCopy(&cLocal_106, "scr_pts_headsplash", 64);
			StringCopy(&cLocal_122, "", 64);
			bLocal_73 = joaat("PROP_CS_SINK_FILLER_03");
			vLocal_74 = { -0.72f, 0.9f, 0.21f };
			vLocal_77 = { 0f, 0f, 9f };
			iLocal_80 = -1;
			fLocal_81 = 0.7f;
			iLocal_82 = -1;
			break;
		default:
			break;
	}
	Var8.f_1 = -1;
	Var8.f_17 = 4;
	Var8.f_17.f_8 = 4;
	Var8.f_17.f_13 = 4;
	Var8.f_17.f_18 = 4;
	Var8.f_17.f_24 = 4;
	Var8.f_17.f_29 = 4;
	Var8.f_17.f_34 = 4;
	Var8.f_62 = 8;
	Var8.f_96.f_7 = 21;
	Var8.f_96.f_8 = 6;
	Var117.f_1 = -1;
	Var117.f_17 = 4;
	Var117.f_17.f_8 = 4;
	Var117.f_17.f_13 = 4;
	Var117.f_17.f_18 = 4;
	Var117.f_17.f_24 = 4;
	Var117.f_17.f_29 = 4;
	Var117.f_17.f_34 = 4;
	Var117.f_62 = 8;
	Var117.f_96.f_7 = 21;
	Var117.f_96.f_8 = 6;
	Var8 = 0;
	Var8.f_2 = iLocal_70;
	Var8.f_3 = Global_96222.f_45;
	func_54(Var8, &Var117);
	func_4(iLocal_70, &uLocal_143, &cVar237, &cLocal_159, &uVar253, &uVar254);
}

int func_54(struct<109> Param0, var uParam109)
{
	uParam109->f_119 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1435919172;
			uParam109->f_110 = 1435919172;
			func_56(uParam109);
			uParam109->f_118 = 0;
			return 0;
		case 1:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 2:
			*uParam109 = { Global_96855[0 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = Global_98443[0];
			return 1;
		case 3:
			*uParam109 = { Global_96855[1 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = Global_98443[1];
			return 1;
		case 4:
			*uParam109 = { Global_96855[2 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = Global_98443[2];
			return 1;
		case 5:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 6:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 7:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 8:
		case 9:
		case 10:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 11:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 14:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 13:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 15:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 54:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 55:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 56:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 57:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 12:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = joaat("SCRIPT_TASK_LEAVE_VEHICLE");
			func_55(uParam109, 144, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 16:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 17:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 18:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 19:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 20:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 22:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 74:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 67:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 58:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 59:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 60:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 25:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 26:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 27:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 28:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 38:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 40:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1959848946;
			uParam109->f_110 = -1959848946;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 47:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 49:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 48:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1794415470;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 50:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 51:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 52:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 66:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 61:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 62:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 63:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 69:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 64:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 65:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 234:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 316:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 315:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 75:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_55(uParam109, 30, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 76:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 77:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, -0.7035f, -0.0282f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 78:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 79:
		case 80:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, -2017877118, -2017877118, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_56(uParam109);
			}
			uParam109->f_118 = 1;
			return 1;
		case 124:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 82:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 84:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 83:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 85:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 291:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 86:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 87:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 88:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 89:
		case 90:
		case 127:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			if (Param0.f_2 == 92)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_56(uParam109);
				uParam109->f_118 = 1;
			}
			return 1;
		case 94:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_55(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			}
			uParam109->f_118 = 1;
			return 1;
		case 95:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 96:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 134:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 108:
		case 109:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 150:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 20, 1785177548, 1785177548, 0.98f, 0.8017f, -0.42f, -180f);
			uParam109->f_118 = 1;
			return 1;
		case 118:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 119:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 120:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 114:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 105:
		case 106:
		case 107:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -2017877118;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 98:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 99:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_55(uParam109, 15, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 100:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_55(uParam109, 15, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 101:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_55(uParam109, 14, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 102:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_55(uParam109, 14, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 103:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 121:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 122:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, -2.04f, -0.15f, 0f, 14.4f);
			uParam109->f_118 = 1;
			return 1;
		case 125:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 110:
		case 111:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 131:
		case 132:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 126:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 128:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 129:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 130:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 133:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 151:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			uParam109->f_118 = 1;
			return 1;
		case 152:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam109->f_118 = 1;
			return 1;
		case 153:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 154:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 155:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 156:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 14, 1785177548, 1785177548, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam109->f_118 = 1;
			return 1;
		case 157:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 158:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 159:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 160:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 161:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 163:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 164:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 165:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 166:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 167:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 14, -982327190, 1785177548, -0.8472f, 0.155f, 0f, 152.556f);
			uParam109->f_118 = 1;
			return 1;
		case 168:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 169:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 14, 1785177548, 1785177548, -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 170:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 171:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 172:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 173:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 174:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 0;
			return 1;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 177:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 178:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 179:
		case 180:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 181:
		case 182:
		case 183:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 192:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 193:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, -982327190, 1785177548, 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 194:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_56(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 195:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_56(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 198:
		case 199:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 200:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 201:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 202:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 184:
		case 185:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 186:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 187:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 188:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 189:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 190:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 191:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 196:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 43, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 197:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 205)
			{
				uParam109->f_112 = { 3.4381f, -0.8269f, 0f };
				uParam109->f_115 = -87.6612f;
			}
			uParam109->f_118 = 1;
			return 1;
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 24:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 212:
		case 214:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 215:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam109->f_118 = 1;
			return 1;
		case 221:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, -0.7949f, -0.508f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 222:
		case 223:
		case 224:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 218:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
		case 219:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
		case 220:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 19, 1785177548, 1785177548, 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam109->f_118 = 1;
			return 1;
		case 225:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 19, 1785177548, 1785177548, 1.23f, 0.6f, -1f, 34.56f);
			uParam109->f_118 = 1;
			return 1;
		case 231:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 232:
		case 233:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 235:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 236:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
		case 237:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
		case 238:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 239:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 240:
		case 241:
		case 242:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 273:
		case 274:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 245:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 243:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 244:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 271:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 280:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_56(uParam109);
			return 1;
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			uParam109->f_118 = 1;
			func_56(uParam109);
			if (Param0.f_2 == 265)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_55(uParam109, 144, -982327190, 2106541073, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_55(uParam109, 144, 2106541073, 2106541073, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 1;
		case 246:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 247:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 263:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 278:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 279:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 264:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 255:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 248:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 249:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 275:
		case 276:
		case 277:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 254:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 285:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 256:
		case 257:
		case 258:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 259:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 260:
		case 261:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 286:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 287:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 288:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 262:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 289:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 144, -2017877118, -2017877118, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam109->f_118 = 1;
			return 1;
		case 290:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 292:
		case 295:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 293:
		case 294:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 299:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
		case 296:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 32, 1785177548, 1785177548, 1.41f, 1.35f, 0f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 297:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 32, 1785177548, 1785177548, 1.7491f, 0.6423f, 0f, 166.479f);
			uParam109->f_118 = 1;
			return 1;
		case 298:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_55(uParam109, 32, 1785177548, 1785177548, 0.72f, -0.69f, 0f, 172.44f);
			uParam109->f_118 = 1;
			return 1;
		case 304:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 305:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 306:
		case 307:
		case 308:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 309:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 310:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 311:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_56(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 312:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1630799643;
			uParam109->f_110 = 1630799643;
			func_55(uParam109, 144, 474215631, -1519143300, -9.5443f, -3.191f, -0.3f, 180f);
			uParam109->f_118 = 1;
			return 1;
		case 313:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = -982327190;
			func_56(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 314:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_56(uParam109);
			uParam109->f_118 = 2;
			return 1;
	}
	*uParam109 = { Param0 };
	uParam109->f_109 = 1435919172;
	uParam109->f_110 = 1435919172;
	func_56(uParam109);
	uParam109->f_118 = 0;
	return 0;
}

void func_55(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { vParam4 };
	uParam0->f_115 = fParam7;
}

void func_56(var uParam0)
{
	func_55(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

int func_57(int iParam0, var uParam1, float fParam2, char* sParam3)
{
	int iVar0;

	if (func_60(iParam0, fParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				func_58(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0 /*9*/].f_3 };
					*fParam2 = Global_93947[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0 /*9*/].f_3 };
					*fParam2 = Global_93947[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_96855[0 /*109*/].f_4 };
				*fParam2 = Global_96855[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 3:
				*uParam1 = { Global_96855[1 /*109*/].f_4 };
				*fParam2 = Global_96855[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 4:
				*uParam1 = { Global_96855[2 /*109*/].f_4 };
				*fParam2 = Global_96855[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
		}
		*uParam1 = { Global_97183[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_58(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0 /*3*/] };
	if (func_59(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	}
	*iParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224.f_11[iVar5], false))
		{
			vVar6 = { Global_93947[iVar5 /*9*/].f_3 };
			fVar9 = SYSTEM::VDIST(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*iParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *iParam0 != 5;
}

bool func_59(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_60(int iParam0, float fParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;

	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			func_58(&iVar3);
			if (iVar3 < 5)
			{
				*fParam1 = Global_93947[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			else
			{
				*fParam1 = Global_93947[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 2:
			*fParam1 = Global_96855[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 3:
			*fParam1 = Global_96855[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 4:
			*fParam1 = Global_96855[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 5:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_64(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return true;
		case 6:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_64(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return true;
		case 7:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_64(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return true;
		case 11:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return true;
			}
			break;
		case 8:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 9:
			return func_60(8, fParam1, sParam2);
		case 10:
			return func_60(8, fParam1, sParam2);
		case 13:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 14:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 15:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 12:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 16:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 17:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 18:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 19:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 20:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 21:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 22:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 74:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 23:
			return func_60(208, fParam1, sParam2);
		case 24:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 67:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 25:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 26:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 27:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 28:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 29:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 30:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 31:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 32:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 33:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 34:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 35:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 36:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 37:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 58:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 59:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 60:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 38:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 39:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 40:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return true;
			}
			break;
		case 41:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 42:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 43:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 44:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 45:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 46:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 47:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 49:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 48:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 124:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*fParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 50:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 51:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 52:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 66:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 53:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 54:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 55:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 56:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 57:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 61:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 62:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 63:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 68:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 69:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 64:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 65:
			if (func_63(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 70:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 71:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 72:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 73:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 234:
			*fParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 316:
			*fParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 315:
			*fParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 75:
			*fParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return true;
		case 76:
			*fParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 77:
			*fParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 78:
			*fParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 79:
			*fParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 80:
			*fParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 81:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 82:
			*fParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 83:
			*fParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 84:
			*fParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 85:
			*fParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 86:
			*fParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 87:
			*fParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 88:
			*fParam1 = 21f;
			*fParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return true;
		case 89:
			*fParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 90:
			*fParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return true;
		case 91:
			*fParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return true;
		case 92:
			*fParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return true;
		case 93:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 94:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 95:
			*fParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return true;
		case 96:
			*fParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return true;
		case 97:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 98:
			*fParam1 = (-150.6148f + 0.0095f);
			*fParam1 = (*fParam1 + 0.0004f);
			*fParam1 = (*fParam1 + 0.0015f);
			*fParam1 = (*fParam1 + 0.0002f);
			*fParam1 = (*fParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return true;
		case 99:
			*fParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return true;
		case 100:
			*fParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return true;
		case 101:
			*fParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return true;
		case 102:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 103:
			*fParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return true;
		case 104:
			*fParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return true;
		case 105:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 106:
			*fParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return true;
		case 107:
			*fParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return true;
		case 108:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 109:
			*fParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return true;
		case 110:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 111:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 112:
			*fParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 113:
			*fParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return true;
		case 135:
			*fParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 136:
			*fParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return true;
		case 137:
			*fParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return true;
		case 138:
			*fParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return true;
		case 139:
			*fParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 140:
			*fParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 141:
			*fParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return true;
		case 142:
			*fParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return true;
		case 143:
			*fParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return true;
		case 144:
			*fParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return true;
		case 145:
			*fParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return true;
		case 146:
			*fParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return true;
		case 147:
			*fParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 148:
			*fParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return true;
		case 149:
			*fParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return true;
		case 150:
			*fParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 114:
			*fParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 115:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 116:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return true;
		case 117:
			*fParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return true;
		case 118:
			*fParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 119:
			*fParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return true;
		case 120:
			*fParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return true;
		case 121:
			*fParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 122:
			*fParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 123:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 125:
			*fParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return true;
		case 126:
			*fParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 127:
			*fParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return true;
		case 128:
			*fParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 129:
			*fParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 130:
			*fParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 131:
			*fParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 132:
			*fParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 133:
			*fParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return true;
		case 134:
			*fParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return true;
		case 151:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 152:
			*fParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return true;
		case 153:
			*fParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 154:
			*fParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return true;
		case 155:
			*fParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return true;
		case 156:
			*fParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 157:
			*fParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return true;
		case 158:
			*fParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 159:
			*fParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 160:
			*fParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return true;
		case 161:
			*fParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return true;
		case 162:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 163:
			*fParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 164:
			*fParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return true;
		case 165:
			*fParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return true;
		case 166:
			*fParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return true;
		case 167:
			*fParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 168:
			if (func_61(0, 25, &uVar4, &fVar7))
			{
				*fParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return true;
			}
			break;
		case 169:
			*fParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 170:
			*fParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 171:
			*fParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return true;
		case 173:
			*fParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return true;
		case 172:
			*fParam1 = -30.185f;
			*fParam1 = (*fParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return true;
		case 174:
			*fParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
	}
	switch (iParam0)
	{
		case 175:
			*fParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 176:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 177:
			*fParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 178:
			*fParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 179:
			*fParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 180:
			*fParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 181:
			*fParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 182:
			*fParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return true;
		case 183:
			*fParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return true;
		case 184:
			*fParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 185:
			*fParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return true;
		case 186:
			*fParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 187:
			*fParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 188:
			*fParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 189:
			*fParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 190:
			*fParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 191:
			*fParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 196:
			*fParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 197:
			*fParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 192:
			*fParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return true;
		case 193:
			*fParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return true;
		case 194:
			*fParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return true;
		case 195:
			*fParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return true;
		case 198:
			*fParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return true;
		case 199:
			*fParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return true;
		case 200:
			*fParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 201:
			*fParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return true;
		case 202:
			*fParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return true;
		case 203:
			*fParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return true;
		case 204:
			*fParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return true;
		case 205:
			*fParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return true;
		case 206:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 207:
			*fParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return true;
		case 208:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 209:
			*fParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return true;
		case 210:
			*fParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return true;
		case 211:
			*fParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return true;
		case 212:
			*fParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return true;
		case 213:
			*fParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return true;
		case 214:
			*fParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return true;
		case 215:
			*fParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return true;
		case 216:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 217:
			*fParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 221:
			*fParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return true;
		case 222:
			*fParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 223:
			*fParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 224:
			return func_60(222, fParam1, sParam2);
		case 226:
			*fParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return true;
		case 227:
			*fParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return true;
		case 228:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 229:
			*fParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return true;
		case 230:
			*fParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return true;
		case 218:
			*fParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 219:
			*fParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 220:
			*fParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return true;
		case 225:
			*fParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 231:
			*fParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return true;
		case 232:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 233:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 235:
			*fParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 236:
			*fParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 237:
			*fParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return true;
		case 238:
			*fParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return true;
		case 239:
			*fParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return true;
		case 240:
			*fParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 241:
			*fParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 242:
			*fParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return true;
		case 245:
			*fParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 243:
			*fParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 244:
			*fParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return true;
		case 246:
			*fParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return true;
		case 247:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 248:
			*fParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 249:
			*fParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 250:
			*fParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return true;
		case 251:
			*fParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return true;
		case 252:
			*fParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return true;
		case 253:
			*fParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return true;
		case 254:
			*fParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return true;
		case 255:
			*fParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return true;
		case 264:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 265:
			*fParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return true;
		case 266:
			*fParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return true;
		case 267:
			*fParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return true;
		case 268:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 269:
			*fParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return true;
		case 270:
			*fParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return true;
		case 271:
			*fParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return true;
		case 272:
			*fParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return true;
		case 273:
			*fParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 274:
			*fParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return true;
		case 275:
			*fParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return true;
		case 276:
			*fParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return true;
		case 277:
			*fParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 278:
			*fParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 279:
			*fParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return true;
		case 280:
			*fParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 281:
			*fParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return true;
		case 282:
			*fParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return true;
		case 283:
			*fParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return true;
		case 284:
			*fParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return true;
		case 285:
			*fParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return true;
		case 256:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 257:
			*fParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return true;
		case 258:
			*fParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return true;
		case 259:
			*fParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return true;
		case 260:
			*fParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return true;
		case 261:
			*fParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return true;
		case 286:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 287:
			*fParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return true;
		case 288:
			*fParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 262:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 263:
			*fParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return true;
		case 289:
			*fParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return true;
		case 290:
			*fParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 291:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 292:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 293:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 294:
			return func_60(293, fParam1, sParam2);
		case 295:
			return func_60(292, fParam1, sParam2);
		case 299:
			*fParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 300:
			return func_60(303, fParam1, sParam2);
		case 301:
			return func_60(303, fParam1, sParam2);
		case 302:
			return func_60(303, fParam1, sParam2);
		case 303:
			*fParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 296:
			*fParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 297:
			*fParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 298:
			*fParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 304:
			*fParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 305:
			*fParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return true;
		case 306:
			vVar8 = { -7.4998f, 7.4995f, -0.5258f };
			*fParam1 = UNK_0xE7D606C557C86100(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 307:
			vVar11 = { 10.6345f, 0.7246f, 1.2508f };
			*fParam1 = UNK_0xE7D606C557C86100(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 308:
			vVar14 = { -3.4271f, -13.6787f, -1.4107f };
			*fParam1 = UNK_0xE7D606C557C86100(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 309:
			vVar17 = { -19.6582f, 7.896f, 0.1334f };
			*fParam1 = UNK_0xE7D606C557C86100(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 310:
			*fParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return true;
		case 311:
			*fParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 312:
			*fParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return true;
		case 313:
			*fParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 314:
			*fParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return true;
	}
	*fParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return false;
}

bool func_61(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*fParam3 = -144f;
					return true;
				case 1:
					if (func_61(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*fParam3 = (*fParam3 + (456.7661f - 360f));
						return true;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((16f - 222.8314f) + 360f);
					return true;
			}
			return false;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*fParam3 = 163.0716f;
					return true;
				case 1:
					if (func_61(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
				case 2:
					if (func_61(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return true;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*fParam3 = 160f;
					return true;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*fParam3 = 255f;
					return true;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*fParam3 = 252f;
					return true;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*fParam3 = 273f;
					return true;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_61(0, 5, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*fParam3 = 318f;
					return true;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*fParam3 = 306f;
					return true;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*fParam3 = 330f;
					return true;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*fParam3 = 272.857f;
					return true;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*fParam3 = 158f;
					return true;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*fParam3 = 339f;
					return true;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*fParam3 = 147f;
					return true;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*fParam3 = 159.3182f;
					return true;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*fParam3 = 333f;
					return true;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, UNK_0x79833B02DBD2A244(-0.5f, 0.5f), UNK_0x79833B02DBD2A244(-0.5f, 0.5f)) };
					*fParam3 = (306f + UNK_0x79833B02DBD2A244(10f, 10f));
					return true;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*fParam3 = UNK_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return true;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((26.087f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((13f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-28.7112f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*fParam3 = 319f;
					return true;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*fParam3 = 78f;
					return true;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*fParam3 = 304.1026f;
					return true;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*fParam3 = 180f;
					return true;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_61(1, 32, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*fParam3 = 228f;
					return true;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*fParam3 = 310.6696f;
					return true;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*fParam3 = 102.156f;
					return true;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*fParam3 = 264f;
					return true;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*fParam3 = 338f;
					return true;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*fParam3 = 262.789f;
					return true;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*fParam3 = 177.6766f;
					return true;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*fParam3 = 159.156f;
					return true;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*fParam3 = 165f;
					return true;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*fParam3 = 157.0716f;
					return true;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*fParam3 = 78f;
					return true;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*fParam3 = 144.6939f;
					return true;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*fParam3 = 257.4583f;
					return true;
			}
			break;
		case 46:
			return func_61(iParam0, 26, uParam2, fParam3);
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*fParam3 = 159f;
					return true;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*fParam3 = 88.5686f;
					return true;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return false;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*fParam3 = 159.72f;
					return true;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*fParam3 = 338.5f;
					return true;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*fParam3 = 205.677f;
					return true;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*fParam3 = 39f;
					return true;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*fParam3 = 94.2086f;
					return true;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*fParam3 = 336f;
					return true;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*fParam3 = 311.4f;
					return true;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*fParam3 = 306.6f;
					return true;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*fParam3 = 337.4f;
					return true;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*fParam3 = 277.317f;
					return true;
			}
			break;
		case 60:
			if (func_61(iParam0, 59, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f)) };
				*fParam3 = (*fParam3 + UNK_0x79833B02DBD2A244(-10f, 10f));
				return true;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*fParam3 = 172.714f;
					return true;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-158f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-164f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*fParam3 = 235.0656f;
					return true;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*fParam3 = 157.44f;
					return true;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*fParam3 = 87.3368f;
					return true;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*fParam3 = 262.32f;
					return true;
			}
			break;
		case 77:
			if (func_61(iParam0, 47, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*fParam3 = (*fParam3 + 0f);
				return true;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*fParam3 = 334.126f;
					return true;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*fParam3 = 154.126f;
					return true;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*fParam3 = 142.889f;
					return true;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*fParam3 = 54f;
					return true;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*fParam3 = 339f;
					return true;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*fParam3 = 314.2132f;
					return true;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*fParam3 = 147f;
					return true;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*fParam3 = (147f + 90f);
					return true;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*fParam3 = 110.8505f;
					return true;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*fParam3 = 324f;
					return true;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*fParam3 = 33f;
					return true;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*fParam3 = 69f;
					return true;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*fParam3 = 33f;
					return true;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*fParam3 = 71f;
					return true;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*fParam3 = (84.7009f - 188.5817f);
					return true;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*fParam3 = (90.6417f - 188.5817f);
					return true;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*fParam3 = 354f;
					return true;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*fParam3 = 61.7525f;
					return true;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*fParam3 = 119.008f;
					return true;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*fParam3 = 30f;
					return true;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*fParam3 = 123.753f;
					return true;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*fParam3 = 42.757f;
					return true;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*fParam3 = 136.309f;
					return true;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*fParam3 = 92.8891f;
					return true;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*fParam3 = 115.77f;
					return true;
			}
			break;
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*fParam3 = 114.3391f;
					return true;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*fParam3 = 252.2687f;
					return true;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*fParam3 = 109f;
					return true;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*fParam3 = 137.1861f;
					return true;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*fParam3 = 30f;
					return true;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*fParam3 = 141.79f;
					return true;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*fParam3 = 121.6591f;
					return true;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*fParam3 = (170.2796f - 180f);
					return true;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*fParam3 = 107.1399f;
					return true;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*fParam3 = 63.48f;
					return true;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*fParam3 = 327.483f;
					return true;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*fParam3 = 179.7612f;
					return true;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*fParam3 = 238.9422f;
					return true;
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*fParam3 = 296f;
					return true;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*fParam3 = 121.0556f;
					return true;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*fParam3 = 216.61f;
					return true;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*fParam3 = 119.4f;
					return true;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_111638.f_18528[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (34.661f - 90.6729f);
						return true;
					}
					else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (32f - 90.6729f);
						return true;
					}
					if (func_62())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (34.661f - 90.6729f);
						return true;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (32f - 90.6729f);
						return true;
					}
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*fParam3 = (102f - 90.6729f);
					return true;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*fParam3 = 334.44f;
					return true;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_61(iParam0, 130, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f)) };
						*fParam3 = (*fParam3 + UNK_0x79833B02DBD2A244(-10f, 10f));
						return true;
					}
					break;
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*fParam3 = 42.6f;
					return true;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*fParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
					return true;
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*fParam3 = 315.72f;
					return true;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*fParam3 = 296.683f;
					return true;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*fParam3 = 214.92f;
					return true;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*fParam3 = 39.4085f;
					return true;
			}
			break;
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return false;
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return false;
		default:
			*uParam2 = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
			*fParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
			return false;
	}
	*uParam2 = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
	*fParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
	return false;
}

bool func_62()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_63(int iParam0, var uParam1, float fParam2)
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
			return func_63(8, uParam1, fParam2);
		case 10:
			return func_63(8, uParam1, fParam2);
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

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("V_CHOPSHOP"):
			return "v_chopshop";
		case joaat("V_FRANKLINS"):
			return "v_franklins";
		case joaat("V_FRANKLINSHOUSE"):
			return "v_franklinshouse";
		case joaat("V_METHLAB"):
			return "v_methlab";
		case joaat("V_MICHAEL"):
			return "v_michael";
		case joaat("V_STRIP3"):
			return "v_strip3";
		case joaat("V_TRAILER"):
			return "v_trailer";
		case joaat("V_TREVORS"):
			return "v_Trevors";
	}
	return "";
}

void func_65()
{
	if (UNK_0xC844350D5D58C99A(bLocal_72))
	{
		if (iLocal_82 != -1)
		{
			func_3(&bLocal_72, iLocal_82);
		}
	}
	if (iLocal_88 != 0)
	{
		UNK_0xF7E25143642732EA(iLocal_88, 0);
		iLocal_88 = 0;
		UNK_0x55D0A2DB35045A35(iLocal_223);
		UNK_0x43A06902454A1172(iLocal_223);
	}
	UNK_0x21387C9EECC2B220(false);
	UNK_0x10FAF14A60A0DBE1();
}

