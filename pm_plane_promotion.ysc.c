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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	vector3 vLocal_36 = { 0f, 0f, 0f };
	char cLocal_39[16] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char cLocal_43[16] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 3;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 1092616192;
	var uLocal_59 = 1101004800;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 3;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 16;
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
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
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
	var uLocal_159 = 0;
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
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	bool bLocal_241 = false;
	struct<8> Local_242[10];
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	bool bLocal_325 = false;
	bool bLocal_326 = false;
	bool bLocal_327 = false;
	bool bLocal_328 = false;
	bool bLocal_329 = false;
	bool bLocal_330 = false;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	vLocal_36 = { -1078.86f, -2943.56f, 12.95f };
	StringCopy(&cLocal_39, "PMPLANE", 16);
	StringCopy(&cLocal_43, "", 16);
	iLocal_49 = -1;
	UNK_0x7798376279BB5369(1);
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_149(2);
		func_148();
	}
	func_143();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_142())
		{
			iLocal_49 = -1;
		}
		else if (iLocal_49 == -1)
		{
			iLocal_49 = UNK_0x1C0640BA9A7327B3();
		}
		func_1();
	}
}

void func_1()
{
	vector3 vVar0;
	char cVar3[16];
	float fVar7;
	int iVar8;

	vVar0 = { -1085.279f, -2970.573f, 12.9457f };
	bLocal_329 = false;
	if (UNK_0xC844350D5D58C99A(bLocal_241))
	{
		if (!UNK_0xDF1306B443CD3D15(bLocal_241, 0))
		{
			func_141();
		}
		else if (iLocal_47 == 2)
		{
			if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_241, 0))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_50))
				{
					func_140("BK_PLANE", 7500, 1);
					iLocal_50 = func_139(bLocal_241, 0, 0);
				}
				if (func_138(UNK_0x16F2683693E537C9(), bLocal_241, 1) > 300f)
				{
					func_141();
				}
			}
			else if (UNK_0xE4EDC4B0E92C078B(iLocal_50))
			{
				UNK_0x790015DC92C918E2();
				UNK_0x142CC44DB769B57E(&iLocal_50);
			}
		}
	}
	if ((((UNK_0xC844350D5D58C99A(bLocal_241) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_241, 0)) && UNK_0xE934758D273C899A(bLocal_241)) && bLocal_325) && UNK_0xAE317D00A5A55DF6("PLANES", 0, -1))
	{
		if (!bLocal_326)
		{
			if (UNK_0xBFC0798A6E3417F9(0, 114))
			{
				if (iLocal_324 == -1 || (UNK_0x1C0640BA9A7327B3() - iLocal_324) > 2000)
				{
					if (!UNK_0x83A8177D302E1A7E(iLocal_332))
					{
						iLocal_332 = UNK_0xC1879030EB463216("scr_property_leaflet_drop", bLocal_241, 0f, -2f, -0.65f, 0f, 0f, 0f, 1f, 0, 0, 0);
						bLocal_330 = 0f;
					}
					if (func_137("LEAFLET"))
					{
						UNK_0xA37A90C62806D848(1);
					}
					UNK_0xCEAA091B490F8407(-1, "PROPERTIES_PLANE_PROMO_MASTER", bLocal_241, false, 0, 0);
					iLocal_324 = UNK_0x1C0640BA9A7327B3();
					bLocal_326 = true;
				}
			}
		}
		else if ((UNK_0x1C0640BA9A7327B3() - iLocal_324) > 3000)
		{
			bLocal_326 = false;
		}
	}
	else if (UNK_0x83A8177D302E1A7E(iLocal_332))
	{
		UNK_0xF7E25143642732EA(iLocal_332, 0);
		bLocal_330 = 0f;
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_332))
	{
		if (bLocal_326)
		{
			fVar7 = 1f;
		}
		else
		{
			fVar7 = -1f;
		}
		bLocal_330 = (bLocal_330 + ((fVar7 * SYSTEM::TIMESTEP()) * 100f));
		bLocal_330 = func_136(bLocal_330, 0f, 1f);
		UNK_0x9AB5B84DE011D632(iLocal_332, "spawn", bLocal_330, 0);
	}
	switch (iLocal_47)
	{
		case 0:
			UNK_0x523BCC9DC80CD82F(joaat("STUNT"));
			if (UNK_0xB87F6CF6E5628C67(joaat("STUNT")))
			{
				bLocal_241 = Global_110348.f_222[0];
				if (!UNK_0xC844350D5D58C99A(bLocal_241))
				{
					bLocal_241 = UNK_0x122AAB0B1D6F55AD(joaat("STUNT"), vVar0, 121.2244f, true, true, false);
					UNK_0xB9FD7450C0DAB575(bLocal_241, 1084227584 /* Float: 5f */);
				}
				else
				{
					UNK_0x73270B3C9CC833FD(bLocal_241, true, 1);
				}
				UNK_0x71199B01895C6202(joaat("STUNT"));
				UNK_0x790015DC92C918E2();
				func_140("GET_PLANE", 7500, 1);
				iLocal_50 = func_139(bLocal_241, 0, 0);
				UNK_0x9E5E60D8C63FD9D1();
				func_133(&uLocal_51, 1, 0);
				iLocal_47++;
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(bLocal_241) && UNK_0xDF1306B443CD3D15(bLocal_241, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_241, 0))
				{
					UNK_0x790015DC92C918E2();
					func_140("TAKEOFF", 7500, 1);
					if (UNK_0xE4EDC4B0E92C078B(iLocal_50))
					{
						UNK_0x142CC44DB769B57E(&iLocal_50);
					}
					func_80(-1021.522f, -2986.142f, 12.9519f, 341.6539f, 0, 145);
					iLocal_47++;
				}
			}
			break;
		case 2:
			iVar8 = 0;
			while (iVar8 < Local_242)
			{
				if (func_76(&(Local_242[iVar8 /*8*/])))
				{
					iLocal_323++;
				}
				iVar8++;
			}
			if ((10 - iLocal_323) <= 0)
			{
				iLocal_47++;
			}
			break;
		case 3:
			if (func_30(&uLocal_51, vLocal_36, -1067.083f, -2922.601f, 12.82418f, -1091.854f, -2965.403f, 23.94564f, 31.5625f, 1, bLocal_241, "LAND", "", "BK_PLANE", 1, 0, 1, -1) && !UNK_0xE934758D273C899A(bLocal_241))
			{
				func_133(&uLocal_51, 1, 0);
				iLocal_47++;
			}
			break;
		case 4:
			if (func_28(bLocal_241, 1093140480 /* Float: 10.5f */, 1, 0f, 0, 1, 0))
			{
				iLocal_47++;
			}
			break;
		case 5:
			UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
			UNK_0x05EC10F460C3A4AF(bLocal_241, 0);
			func_27();
			break;
	}
	switch (iLocal_48)
	{
		case 0:
			if ((10 - iLocal_323) <= 0)
			{
				iLocal_48++;
			}
			else if ((func_26() && (UNK_0x1C0640BA9A7327B3() - iLocal_49) > 5000) && bLocal_329)
			{
				StringCopy(&cVar3, "RAND_", 16);
				StringConCat(&cVar3, &cLocal_43, 16);
				if (func_25(49) && UNK_0x09AC81E49EA267F7(false, 3) == 0)
				{
					StringConCat(&cVar3, "M", 16);
				}
				else if (iLocal_331 > 0)
				{
					StringIntConCat(&cVar3, iLocal_331 + 1, 16);
				}
				if (func_2(&uLocal_76, &cLocal_39, &cVar3, 8, 0, 0, 0))
				{
					iLocal_331++;
					if (iLocal_331 >= 6)
					{
						iLocal_331 = 0;
					}
					StringCopy(&cVar3, "", 16);
				}
			}
			break;
		case 1:
			if (func_26() && (UNK_0x1C0640BA9A7327B3() - iLocal_49) > 1000)
			{
				if (func_2(&uLocal_76, &cLocal_39, "DONE", 8, 0, 0, 0))
				{
					StringCopy(&cVar3, "", 16);
					iLocal_48++;
				}
			}
			break;
	}
}

int func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
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
					func_23();
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
		if (func_22(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_21();
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
				func_13();
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
				if (func_12())
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
			if (func_11())
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
			func_10();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_9();
		func_4();
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
		func_23();
	}
	return 0;
}

void func_4()
{
	if (!func_5())
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

bool func_5()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_8())
	{
		return false;
	}
	if (func_6(UNK_0xD803B885F5E47A62()))
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

bool func_6(int iParam0)
{
	return func_7(iParam0, 20);
}

bool func_7(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_8()
{
	return -1;
}

void func_9()
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

void func_10()
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

bool func_11()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_12()
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

void func_13()
{
	if (func_20(14))
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
		Global_19486 = func_14();
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

var func_14()
{
	func_15();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_15()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_18(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_17(UNK_0x16F2683693E537C9());
			if (func_16(iVar0) && (!func_20(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_16(Global_111638.f_2358.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return func_19(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_19(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_20(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_21()
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

bool func_22(bool bParam0, int iParam1)
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

void func_23()
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

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_25(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

bool func_26()
{
	if (func_142())
	{
		return false;
	}
	if (UNK_0x04E6B3EAA8742BFA())
	{
		if (UNK_0xD17F06053799A7CA())
		{
			return false;
		}
	}
	return true;
}

void func_27()
{
	func_149(1);
	func_148();
}

bool func_28(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	UNK_0x38C3A68D7861DCFD(0, 71, 1);
	UNK_0x38C3A68D7861DCFD(0, 72, 1);
	UNK_0x38C3A68D7861DCFD(0, 76, 1);
	UNK_0x38C3A68D7861DCFD(0, 73, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 74, 1);
	UNK_0x38C3A68D7861DCFD(0, 86, 1);
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
	UNK_0x38C3A68D7861DCFD(0, 138, 1);
	UNK_0x38C3A68D7861DCFD(0, 136, 1);
	UNK_0x38C3A68D7861DCFD(0, 114, 1);
	UNK_0x38C3A68D7861DCFD(0, 107, 1);
	UNK_0x38C3A68D7861DCFD(0, 110, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 87, 1);
	UNK_0x38C3A68D7861DCFD(0, 88, 1);
	UNK_0x38C3A68D7861DCFD(0, 113, 1);
	UNK_0x38C3A68D7861DCFD(0, 115, 1);
	UNK_0x38C3A68D7861DCFD(0, 116, 1);
	UNK_0x38C3A68D7861DCFD(0, 117, 1);
	UNK_0x38C3A68D7861DCFD(0, 118, 1);
	UNK_0x38C3A68D7861DCFD(0, 119, 1);
	UNK_0x38C3A68D7861DCFD(0, 352, 1);
	UNK_0x38C3A68D7861DCFD(0, 131, 1);
	UNK_0x38C3A68D7861DCFD(0, 132, 1);
	UNK_0x38C3A68D7861DCFD(0, 123, 1);
	UNK_0x38C3A68D7861DCFD(0, 126, 1);
	UNK_0x38C3A68D7861DCFD(0, 129, 1);
	UNK_0x38C3A68D7861DCFD(0, 130, 1);
	UNK_0x38C3A68D7861DCFD(0, 133, 1);
	UNK_0x38C3A68D7861DCFD(0, 134, 1);
	UNK_0xCFAE3195DD6AE715();
	func_29(bParam0);
	if ((UNK_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		UNK_0xE0C0351D5B931E37(bParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = UNK_0x1C0640BA9A7327B3();
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x755FF954DAE327E1(UNK_0x9C66D99E63E8E24C(bParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_29(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x2668265160B1C0E5(bParam0))
		{
			if (UNK_0x08D499BC1F863857(bParam0))
			{
				UNK_0xF356D74F6AE75D16(bParam0, 0);
			}
		}
	}
}

int func_30(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, char* sParam11, char* sParam12, char* sParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	return func_31(bParam0, vParam1, func_75(), vParam4, vParam7, sParam11, 5, 0, 0, 0, sParam12, sParam13, func_74(), func_74(), func_74(), func_74(), iParam14, 0, bParam16, bParam15, 1, bParam17, bParam18, bParam19, func_74(), func_74(), func_74(), 1, bParam10);
}

int func_31(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, bool bParam35, bool bParam36)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	bParam0->f_17[0] = bParam15;
	bParam0->f_17[1] = iParam16;
	bParam0->f_17[2] = iParam17;
	bParam0->f_16 = bParam15;
	func_73(bParam0);
	func_72(bParam0);
	func_71();
	if (func_54(bParam0, bParam0->f_17[0], bParam0->f_17[1], bParam0->f_17[2], bParam20, bParam21, bParam22, bParam23, bParam0->f_8, bParam25, bParam18, 0, 0, bParam32, bParam33, bParam34, bParam14, bParam26))
	{
		func_53(bParam20);
		func_53(bParam21);
		func_53(bParam22);
		func_53(bParam23);
		if (UNK_0x0F1CCD77290EE12F())
		{
			bVar1 = false;
			if (UNK_0xDF1306B443CD3D15(bParam18, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam18, 0))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 23))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 23);
					}
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (bParam14 == 4 || bParam14 == 5)
			{
				if (func_51(bParam0, bParam29))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
					}
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_53(bParam24);
				func_53(bParam27);
				func_53("MORE_SEATS");
				if (bParam26 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
					{
						UNK_0x142CC44DB769B57E(&(bParam0->f_5));
						func_53(bParam19);
					}
					if (UNK_0xE4EDC4B0E92C078B(*bParam0))
					{
						UNK_0x142CC44DB769B57E(bParam0);
					}
					if ((!func_48(bParam0, 1) && !func_47(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						if (bParam30)
						{
							func_46(bParam0, "LOSE_WANTED", 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_44(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), false);
						UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						func_53("LOSE_WANTED");
						UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), true);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, true))
					{
						if (!func_48(bParam0, 1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_44(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
						}
					}
					if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
					{
						if (UNK_0xE4EDC4B0E92C078B(*bParam0))
						{
							UNK_0x142CC44DB769B57E(bParam0);
						}
						bParam0->f_5 = func_43(vVar3, 0);
						if (!bParam31 == -1)
						{
							UNK_0xBC8E0A7390523199(bParam0->f_5, bParam31);
						}
						if (bParam35)
						{
							func_42(bParam0->f_5, bParam0);
						}
					}
					else if (!func_41(vVar3, UNK_0xAC14F6E4B17D7835(bParam0->f_5), 0.1f, 0))
					{
						UNK_0x2F9282246F89FFD1(bParam0->f_5, vVar3);
						if (bParam35)
						{
							func_42(bParam0->f_5, bParam0);
						}
					}
					if (!func_48(bParam0, 2))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 2))
						{
							func_46(bParam0, bParam19, 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 2);
						}
					}
					if (bParam14 == 4 || bParam14 == 5)
					{
						if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((bParam14 == 1 || bParam14 == 3) || bParam14 == 5)
					{
						bVar6 = true;
					}
					if (bParam14 == 2 || bParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (bParam14 == 4 || bParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7);
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vParam7, vParam10, bParam36, 0, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar2]))
							{
								if (bParam14 == 4 || bParam14 == 5)
								{
									bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[iVar2], bVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (bParam18 != 0)
								{
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[iVar2], bParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[iVar2], func_40()) || !func_38(bParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_35(bParam0))
							{
								func_53(bParam19);
								func_53(bParam24);
								func_53(bParam20);
								func_53(bParam21);
								func_53(bParam22);
								func_53(bParam23);
								func_53("LOSE_WANTED");
								func_53("MORE_SEATS");
								func_53(bParam27);
								func_133(bParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (UNK_0xC844350D5D58C99A(bParam18))
			{
				if ((bParam26 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 22)))
				{
					func_53(bParam24);
					func_53(bParam27);
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5) || UNK_0xE4EDC4B0E92C078B(*bParam0))
					{
						UNK_0x142CC44DB769B57E(&(bParam0->f_5));
						UNK_0x142CC44DB769B57E(bParam0);
						func_53(bParam19);
					}
					if ((!func_48(bParam0, 1) && !func_47(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						if (bParam30)
						{
							func_46(bParam0, "LOSE_WANTED", 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_44(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), false);
						UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						func_53("LOSE_WANTED");
						UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), true);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, true))
					{
						if (!func_48(bParam0, 1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_44(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
						}
					}
					if (UNK_0xDF1306B443CD3D15(bParam18, 0))
					{
						if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
						{
							if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
							{
								UNK_0x142CC44DB769B57E(&(bParam0->f_5));
								func_53(bParam19);
							}
							*bParam0 = func_32(bParam18, 0, 0);
							UNK_0x9D7CDDB4B55142AF(*bParam0, 2);
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								func_42(*bParam0, bParam0);
							}
						}
						if (!func_48(bParam0, 2))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
							{
								func_46(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
								UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
							{
								if (!UNK_0x2EBF5002C6B6A06C(bParam27))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
									{
										func_46(bParam0, bParam27, 0);
										UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
									}
								}
								else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
								{
									func_46(bParam0, bParam24, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 23))
								{
									if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
									{
										func_44(bParam0->f_17[0], "GET_IN_CAR", 3);
									}
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_5));
					func_53(bParam19);
				}
				if (bParam14 == 4 || bParam14 == 5)
				{
					if (bParam29 > 0)
					{
						if (!func_48(bParam0, 2))
						{
							if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
								{
									bVar8 = false;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar2]))
										{
											bVar8++;
										}
										iVar2++;
									}
									iVar9 = UNK_0x09AC81E49EA267F7(false, bVar8);
									if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar9]))
									{
										func_44(bParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_46(bParam0, "MORE_SEATS", 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 13);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
							{
								func_46(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
								UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
								{
									func_46(bParam0, bParam27, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_48(bParam0, 2))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
						{
							func_46(bParam0, bParam24, 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
							UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
						}
						else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
						{
							if (!UNK_0x2EBF5002C6B6A06C(bParam27))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
								{
									func_46(bParam0, bParam27, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								func_46(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
		}
		func_53(bParam19);
		func_53(bParam24);
		func_53(bParam27);
		func_53(bParam24);
		func_53("LOSE_WANTED");
		if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
		{
			UNK_0x142CC44DB769B57E(&(bParam0->f_5));
		}
		if (UNK_0xE4EDC4B0E92C078B(*bParam0))
		{
			UNK_0x142CC44DB769B57E(bParam0);
		}
	}
	UNK_0x0674E58A79778E99(&(bParam0->f_13), 11);
	UNK_0x0674E58A79778E99(&(bParam0->f_13), 12);
	return 0;
}

int func_32(bool bParam0, bool bParam1, bool bParam2)
{
	return func_33(bParam0, !bParam1, bParam2);
}

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_34(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_34(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_34(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_34(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_35(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 12))
	{
		if (func_37(UNK_0x16F2683693E537C9()))
		{
			if (func_36(1, 0, 1) || UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_36(1, 0, 1) || UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_36(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xC8BC75555A67090D())
	{
		return false;
	}
	if (bParam0)
	{
		if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
	}
	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			return false;
		}
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (UNK_0x437347B10A200C4B(bVar0, 0))
			{
				return false;
			}
		}
		if (bParam2)
		{
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xA30B8362589C124A(bVar0, -1, 0) != UNK_0x16F2683693E537C9())
				{
					return false;
				}
			}
		}
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x30C0A7C378403357(bVar0) < 0.95f || UNK_0x30C0A7C378403357(bVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (bParam1)
	{
		return false;
	}
	if (!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_37(bool bParam0)
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_38(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) && bParam1)
		{
			if (func_39(UNK_0x16F2683693E537C9(), bParam0))
			{
				UNK_0x7C27693C5112825F(func_40(), 50f);
				return true;
			}
		}
		else if (UNK_0xBFDE4EE64C4BF2D6(bParam0, func_40()))
		{
			UNK_0x7C27693C5112825F(func_40(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_39(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x0E0E6175453415CB(bParam0))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam1))
				{
					if (UNK_0x82CCEAB29E9451DD(bParam1, bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_40()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

bool func_41(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_42(int iParam0, bool bParam1)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if (UNK_0xE4EDC4B0E92C078B(bParam1->f_6))
		{
			UNK_0x661342B9651D16E2(bParam1->f_6, false);
		}
		UNK_0xB8C3D2D6C4AAEF18(0);
		UNK_0x053C926E5E341906();
		bParam1->f_6 = iParam0;
		UNK_0x661342B9651D16E2(iParam0, true);
	}
}

int func_43(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_34(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_44(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_45(iParam2), 1);
}

int func_45(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

void func_46(bool bParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!UNK_0x2EBF5002C6B6A06C(bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(bParam1, ""))
			{
				func_140(bParam1, 7500, 1);
			}
		}
	}
	bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
}

bool func_47(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_16))
	{
		if (UNK_0x65636D4556D82155(bParam0->f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_48(bool bParam0, int iParam1)
{
	if (iParam1 != 1 || UNK_0x04E6B3EAA8742BFA())
	{
		if (UNK_0xD17F06053799A7CA())
		{
			return true;
		}
		if (func_50(bParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || UNK_0x04E6B3EAA8742BFA())
	{
		if (func_142() && !func_49())
		{
			return true;
		}
	}
	return false;
}

bool func_49()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

bool func_50(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - bParam0->f_10);
	if (iVar0 < 35)
	{
		return true;
	}
	return false;
}

bool func_51(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_52(bVar0, bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_52(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = UNK_0xD6DF381716822EFE(bParam0);
		if (bParam2 > 0)
		{
			if (iVar1 >= bParam2)
			{
				if (bParam2 > 1)
				{
					if (!UNK_0x4A43A287EB2A2B60(bParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!UNK_0x4A43A287EB2A2B60(bParam0, 1))
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
	return false;
}

void func_53(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		UNK_0x2F23E8033F1ADDD9(bParam0);
	}
}

bool func_54(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15[3];
	bool bVar19[3];
	bool bVar23;
	bool bVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	vector3 vVar28;
	bool bVar31;
	bool bVar32;

	iVar4 = 0;
	bParam0->f_17[0] = uParam1;
	bParam0->f_17[1] = uParam2;
	bParam0->f_17[2] = uParam3;
	bParam0->f_16 = uParam1;
	bVar15[0] = bParam4;
	bVar15[1] = bParam5;
	bVar15[2] = bParam6;
	bVar19[0] = bParam13;
	bVar19[1] = bParam14;
	bVar19[2] = bParam15;
	bVar6 = true;
	bVar1 = false;
	iVar2 = 0;
	bVar3 = false;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
		{
			bVar3++;
		}
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 28))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 1, -1, 0);
				}
				if (bVar0 == 2)
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 28);
				}
			}
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29) && UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 28))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
			{
				UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 0, -1, 0);
			}
			if (bVar0 == 2)
			{
				UNK_0x0674E58A79778E99(&(bParam0->f_13), 28);
			}
		}
		bVar0++;
	}
	if (bVar3 == 0)
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 26))
	{
		bVar23 = false;
		if (!UNK_0xC844350D5D58C99A(bParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			bVar24 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, false, iVar25);
			if (UNK_0xDF1306B443CD3D15(bVar24, 0))
			{
				bParam0->f_21 = bVar24;
			}
		}
		if (UNK_0xDF1306B443CD3D15(bParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam0->f_21, true)) < 400f)
			{
				if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) || !bParam17)
					{
						if (func_52(bParam0->f_21, bParam0, bVar3))
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
								{
									UNK_0xCAF7AE54F764D5AA(bParam0->f_17[bVar0], 1f);
									if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
									{
										UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
									}
									if (UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470) == 7 && !func_70(bParam0->f_17[bVar0], bParam0->f_21))
									{
										if (!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0]))
										{
											UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], true);
											UNK_0x5B1D360B9C6F0A09(bParam0->f_17[bVar0], bParam0->f_21, 60000, bVar0, 1f, 1, 0);
											UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], bVar0);
										}
									}
								}
								bVar0++;
							}
							return true;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), 26);
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					if (!UNK_0x81A5359F25512A04(bParam0->f_17[bVar0]) && !bParam0->f_15)
					{
						UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
					}
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
					{
						if (func_68(bParam0, bParam0->f_17[bVar0], bParam8, 1))
						{
							UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_40());
						}
					}
				}
				bVar0++;
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 26))
	{
		if ((!func_67(bParam0) && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9())) && !UNK_0xC844350D5D58C99A(bParam10))
		{
			bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar13, 0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
				{
					if (bParam16 == 4 || bParam16 == 5)
					{
					}
					if (!func_48(bParam0, 2))
					{
						bVar26 = false;
						iVar27 = 0;
						bVar0 = false;
						while (bVar0 < 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
							{
								bVar26++;
							}
							bVar0++;
						}
						iVar27 = UNK_0x09AC81E49EA267F7(false, bVar26);
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar27]))
						{
							func_44(bParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_46(bParam0, "MORE_SEATS", 0);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			UNK_0x0674E58A79778E99(&(bParam0->f_13), 13);
			func_53("MORE_SEATS");
		}
		if (!UNK_0xC844350D5D58C99A(bParam10))
		{
			if ((!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]) || !UNK_0xEB6A8945D1AC98A1(bParam0->f_17[1])) || !UNK_0xEB6A8945D1AC98A1(bParam0->f_17[2]))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 31))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) && !func_48(bParam0, 2))
					{
						bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (func_66(bVar13, bParam0))
						{
							func_46(bParam0, "CMN_VEHSUIT", 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 31);
						}
					}
				}
				else if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					UNK_0x0674E58A79778E99(&(bParam0->f_13), 31);
					func_53("CMN_VEHSUIT");
				}
			}
		}
		if (UNK_0xDF1306B443CD3D15(bParam10, 0))
		{
			if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bParam10))
			{
				if (UNK_0xBFC0798A6E3417F9(0, 75))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 21);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
			{
				UNK_0x0674E58A79778E99(&(bParam0->f_13), 21);
			}
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_17[bVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
					{
						UNK_0xFCCF7611216AE801(bParam0->f_17[bVar0], 1);
					}
					else
					{
						UNK_0xFCCF7611216AE801(bParam0->f_17[bVar0], 0);
					}
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xDF1306B443CD3D15(bVar13, 0))
						{
							if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
							{
								if (!func_67(bParam0) && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
								{
									if (!func_65(bParam0->f_17[bVar0]))
									{
										UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
									}
								}
							}
						}
						if (bVar13 != bParam10 && !UNK_0x437347B10A200C4B(bVar13, 0))
						{
							if (UNK_0x82CCEAB29E9451DD(bParam0->f_17[bVar0], bVar13))
							{
								if (UNK_0x70EED0761B82965E(bVar13) && !UNK_0xF79A7BCA9E38BBBC(bVar13))
								{
									vVar28 = { UNK_0x68F4C0EC296D3901(bVar13, true) };
									if (vVar28.z < -1f)
									{
										UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
					{
						if (UNK_0x0E0E6175453415CB(bParam0->f_17[bVar0]))
						{
							bVar13 = UNK_0x6937EA2286828455(bParam0->f_17[bVar0], 0);
							if (!UNK_0x437347B10A200C4B(bVar13, 0))
							{
								if (UNK_0xDF1306B443CD3D15(bParam10, 0))
								{
									if (bVar13 != bParam10)
									{
										if (!UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bVar13))
										{
											if (UNK_0x9C66D99E63E8E24C(bVar13) > 5f)
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 4160);
											}
											else
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
									{
										bVar31 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									}
									if (UNK_0xDF1306B443CD3D15(bVar31, 0))
									{
										if (bVar13 != bVar31)
										{
											if (UNK_0x9C66D99E63E8E24C(bVar13) > 5f)
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 4160);
											}
											else
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
					{
						bVar32 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
						if (UNK_0xC844350D5D58C99A(bVar32))
						{
							if (func_52(bVar32, bParam0, 0))
							{
								if (func_64(bVar0, bParam0) || !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 27))
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], bVar0);
									func_63(bVar0, bParam0);
									iVar4++;
									if (iVar4 >= bVar3)
									{
										UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 27);
									}
								}
							}
							else if (!func_64(bVar0, bParam0))
							{
								if (UNK_0x134B62B726CEC8E6(bVar32) == joaat("SENTINEL2"))
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], 4);
								}
								else
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], 2);
								}
								func_62(bVar0, bParam0);
							}
						}
					}
					if ((!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()) && !func_61(bParam0->f_17[bVar0], bParam10)) && !func_60(bParam0->f_17[bVar0], bParam10))
					{
						if (func_68(bParam0, bParam0->f_17[bVar0], bParam8, bParam11))
						{
							if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
							{
								if (((!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0])) && !UNK_0x81A5359F25512A04(bParam0->f_17[bVar0]))
								{
									iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
									if (iVar14 == 7)
									{
										UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
									}
									UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_40());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
							{
								bParam0->f_11 = UNK_0x1C0640BA9A7327B3();
								bParam0->f_1[bVar0] = func_32(bParam0->f_17[bVar0], 0, 0);
								UNK_0x9D7CDDB4B55142AF(bParam0->f_1[bVar0], 2);
								if (bParam9)
								{
									func_42(bParam0->f_1[bVar0], bParam0);
								}
							}
						}
						bVar6 = false;
					}
					else if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
					{
						if (((func_38(bParam0->f_17[bVar0], 1) || func_61(bParam0->f_17[bVar0], bParam10)) || bParam12) || (UNK_0xDF1306B443CD3D15(bParam10, 0) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0)))
						{
							if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
							{
								UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
								func_53(bVar15[bVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_42(bParam0->f_1[bVar0], bParam0);
							}
							bVar6 = false;
						}
					}
					else if (UNK_0xDF1306B443CD3D15(bParam10, 0))
					{
						if (!UNK_0x82CCEAB29E9451DD(bParam0->f_17[bVar0], bParam10))
						{
							if ((UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], bParam10, 20f, 20f, 5f, 0, 1, 0) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 11)) && !((bParam17 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0)))
							{
								if (UNK_0x0E0E6175453415CB(bParam0->f_17[bVar0]))
								{
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[bVar0], bParam10, 0))
									{
										if (!func_38(bParam0->f_17[bVar0], 1))
										{
											if (func_37(bParam0->f_17[bVar0]))
											{
												iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
												if (iVar14 == 7)
												{
													UNK_0x75CDA8644CD3B5F5(bParam0->f_17[bVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
									{
										if ((((!UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0]) && !UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0])) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x81A5359F25512A04(bParam0->f_17[bVar0])) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
										{
											UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
										}
									}
									iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
									if (iVar14 == 7 && !func_70(bParam0->f_17[bVar0], bParam10))
									{
										if (((((!UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0]) && !UNK_0x7F69A7C512ACACFD(UNK_0x16F2683693E537C9())) && !func_59(bParam0->f_17[bVar0], 2f)) && !UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0])) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
										{
											UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], true);
											if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 10))
											{
												UNK_0xCAF7AE54F764D5AA(bParam0->f_17[bVar0], 1f);
											}
											UNK_0x5B1D360B9C6F0A09(bParam0->f_17[bVar0], bParam10, 60000, bVar0, 2f, 1, 0);
											UNK_0x579B0182884711E5(bParam0->f_17[bVar0], 0);
										}
									}
									else if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0))
									{
										bParam0->f_1[bVar0] = func_32(bParam0->f_17[bVar0], 0, 0);
										UNK_0x9D7CDDB4B55142AF(bParam0->f_1[bVar0], 2);
										bVar6 = false;
									}
								}
							}
							else if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
							{
								if (func_68(bParam0, bParam0->f_17[bVar0], bParam8, bParam11))
								{
									if (!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0]))
									{
										iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
										if (iVar14 == 7)
										{
											UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
										}
										UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], false);
										UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_40());
									}
								}
							}
						}
						else if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bParam10))
						{
							if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
								{
									UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_40());
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
							{
								UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 21);
							}
						}
						else if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
						{
							UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
						}
					}
				}
				else if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
					func_53(bVar15[bVar0]);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
			{
				iVar7[bVar0] = 1;
				bVar1++;
			}
			bVar0++;
		}
		if (!func_48(bParam0, 2))
		{
			if (bVar1 > 0)
			{
				bVar0 = false;
				while (bVar0 < 3)
				{
					if (iVar7[bVar0])
					{
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
						{
							if (func_65(bParam0->f_17[bVar0]) || UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], UNK_0x16F2683693E537C9(), bParam0->f_8, bParam0->f_8, bParam0->f_8, 0, 1, 0))
							{
								bVar1 = (bVar1 - 1);
								iVar7[bVar0] = 0;
							}
						}
					}
					else if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
					{
						if (!UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], UNK_0x16F2683693E537C9(), (bParam0->f_8 * 0.85f), (bParam0->f_8 * 0.85f), bParam0->f_8, 0, 1, 0) && !func_65(bParam0->f_17[bVar0]))
						{
						}
					}
					bVar0++;
				}
			}
			iVar5 = UNK_0x1C0640BA9A7327B3();
			if ((iVar5 - bParam0->f_11) > 1500 || bVar3 == 1)
			{
				if (bVar1 > 0)
				{
					if (bParam0->f_12 < bVar1)
					{
						if ((bVar1 == bVar3 || (iVar2 + bVar1) == bVar3) && bVar3 > 1)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 5))
							{
								func_46(bParam0, bParam7, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 5);
								bParam0->f_12 = bVar1;
							}
							else
							{
								bParam0->f_12 = bVar1;
							}
						}
						else
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (iVar7[bVar0])
								{
									if (!func_58(bVar0, bParam0))
									{
										if (!UNK_0x2EBF5002C6B6A06C(bVar19[bVar0]))
										{
											if (!UNK_0x7F8A39872A07D2CE(bVar19[bVar0], ""))
											{
												func_56(bParam0, bVar15[bVar0], bVar19[bVar0], 0);
												func_55(bVar0, bParam0);
												bParam0->f_12 = bVar1;
											}
										}
										if (!func_58(bVar0, bParam0))
										{
											func_46(bParam0, bVar15[bVar0], 0);
											func_55(bVar0, bParam0);
											bParam0->f_12 = bVar1;
										}
									}
									else
									{
										bParam0->f_12 = bVar1;
									}
								}
								bVar0++;
							}
						}
					}
				}
				else
				{
					bParam0->f_12 = 0;
				}
			}
		}
		UNK_0x0674E58A79778E99(&(bParam0->f_13), 10);
		if (bVar6 && !bVar12)
		{
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
					func_53(bVar15[bVar0]);
				}
				bVar0++;
			}
			func_53("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_55(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 14);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 15);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 16);
			break;
	}
}

void func_56(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!UNK_0x2EBF5002C6B6A06C(bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(bParam1, ""))
			{
				func_57(bParam1, bParam2, 7500, 1);
			}
		}
	}
	bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
}

void func_57(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x12F275EDEEF63A2B(iParam2, 1);
}

bool func_58(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 14);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 15);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 16);
		default:
			break;
	}
	return false;
}

bool func_59(bool bParam0, float fParam1)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(bParam0, 0))
	{
		bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x9C66D99E63E8E24C(bVar0) > fParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_60(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0xBFDE4EE64C4BF2D6(bParam0, func_40()))
		{
			iVar0 = UNK_0x8B157DA177FBCF50(bParam0);
			if (UNK_0xDF1306B443CD3D15(bParam1, 0))
			{
				if (UNK_0x12DE711B1C681E9E(bParam0, bParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == bParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_61(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xDF1306B443CD3D15(bParam1, 0))
			{
				if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_62(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 17);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 18);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 19);
			break;
	}
}

void func_63(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 17);
			break;
		case 1:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 18);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 19);
			break;
	}
}

bool func_64(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 17);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 18);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 19);
		default:
			break;
	}
	return false;
}

bool func_65(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				bVar1 = UNK_0x3C66DF04E6EA3587(bParam0);
				if (UNK_0xDF1306B443CD3D15(bVar1, 0))
				{
					if (bVar0 == bVar1)
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 20f, 20f, 20f, 0, 1, 0) && UNK_0x12DE711B1C681E9E(bParam0, bVar1, 20f, 20f, 20f, 0, 1, 0))
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

bool func_66(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("COACH"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			bVar3 = UNK_0xA30B8362589C124A(bParam0, false, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar3))
			{
				if ((bVar3 == bParam1->f_17[0] || bVar3 == bParam1->f_17[1]) || bVar3 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar4 = UNK_0xA30B8362589C124A(bParam0, true, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar4))
			{
				if ((bVar4 == bParam1->f_17[0] || bVar4 == bParam1->f_17[1]) || bVar4 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar5 = UNK_0xA30B8362589C124A(bParam0, 2, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar5))
			{
				if ((bVar5 == bParam1->f_17[0] || bVar5 == bParam1->f_17[1]) || bVar5 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_67(bool bParam0)
{
	bool bVar0;

	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_52(bVar0, bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_68(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam1))
	{
		if (UNK_0x0E0E6175453415CB(bParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam1, 0);
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bVar0))
					{
						if (func_67(bParam0))
						{
							return true;
						}
					}
					else if (bParam3)
					{
						return true;
					}
				}
				else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam1, bParam2, bParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam1, bParam2, bParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (func_52(bVar0, bParam0, 0))
					{
						if (UNK_0xDF1306B443CD3D15(bVar0, 0))
						{
							if (func_69(bVar0))
							{
								return true;
							}
						}
					}
				}
				else
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
	return false;
}

bool func_69(bool bParam0)
{
	float fVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_70(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			iVar0 = UNK_0x3C66DF04E6EA3587(bParam0);
			if (iVar0 == bParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_71()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			bVar1 = UNK_0xA30B8362589C124A(bVar0, false, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar1))
			{
				if (bVar1 != UNK_0x16F2683693E537C9())
				{
					if (UNK_0xAF6690C489CC6203(bVar1))
					{
						if (!UNK_0xE0EC712E4BE1FC42(bVar1, UNK_0x16F2683693E537C9()))
						{
							UNK_0x0C8C0C840C2D1AD2(bVar1, UNK_0x16F2683693E537C9(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_72(bool bParam0)
{
	int iVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 25))
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_17[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar0]))
				{
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 32, false);
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 305, true);
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 268, true);
					UNK_0x579B0182884711E5(bParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 25);
	}
}

void func_73(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_17[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar0]))
			{
				if (UNK_0x0E0E6175453415CB(bParam0->f_17[iVar0]))
				{
					UNK_0xA245D14CC59CDD36(bParam0->f_17[iVar0], 0);
					UNK_0x7D732AB707BE9152(bParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
			{
				UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 0);
				UNK_0x7D732AB707BE9152(UNK_0x16F2683693E537C9(), 0);
			}
		}
	}
}

bool func_74()
{
	var uVar0;

	return uVar0;
}

Vector3 func_75()
{
	return 0f, 0f, 2f;
}

bool func_76(var uParam0)
{
	float fVar0;

	if (!uParam0->f_6)
	{
		fVar0 = func_79(UNK_0x16F2683693E537C9(), *uParam0, 0);
		if (!bLocal_327)
		{
			if (fVar0 < 400f)
			{
				UNK_0x790015DC92C918E2();
				func_140("FLY_DROP", 7500, 1);
				UNK_0xAE317D00A5A55DF6("PLANES", 0, -1);
				bLocal_327 = true;
			}
		}
		if (!bLocal_328)
		{
			if (fVar0 < 300f)
			{
				UNK_0xA37A90C62806D848(1);
				func_78("LEAFLET", -1);
				bLocal_328 = true;
				bLocal_325 = true;
			}
		}
		if (fVar0 < uParam0->f_3)
		{
			bLocal_329 = true;
			if (bLocal_326)
			{
				if (uParam0->f_7 == -1)
				{
					uParam0->f_7 = UNK_0x1C0640BA9A7327B3();
				}
				else if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_7) > 1000)
				{
					uParam0->f_6 = 1;
					if (UNK_0xE4EDC4B0E92C078B(uParam0->f_4))
					{
						UNK_0x142CC44DB769B57E(&(uParam0->f_4));
					}
					if (UNK_0xE4EDC4B0E92C078B(uParam0->f_5))
					{
						UNK_0x142CC44DB769B57E(&(uParam0->f_5));
					}
					UNK_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
					return true;
				}
			}
		}
		if (!uParam0->f_6)
		{
			if (!UNK_0xE4EDC4B0E92C078B(uParam0->f_4))
			{
				uParam0->f_4 = func_43(*uParam0, 0);
				UNK_0x516E63E474722206(uParam0->f_4, 0.75f);
				UNK_0xF2D30B8ACAF12A39(uParam0->f_4, false);
			}
			if (!UNK_0xE4EDC4B0E92C078B(uParam0->f_5))
			{
				uParam0->f_5 = func_77(*uParam0, uParam0->f_3, 0);
			}
		}
	}
	return false;
}

int func_77(vector3 vParam0, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = UNK_0x3F3860E60C44719E(vParam0, bParam3);
	UNK_0x61755AC17D8F538E(iVar0, 5);
	UNK_0x7F010F50CE03A8AF(iVar0, 64);
	UNK_0x6ABCCE651368DB93(iVar0, bParam4);
	if (!bParam4)
	{
		UNK_0x9D7CDDB4B55142AF(iVar0, 4);
	}
	return iVar0;
}

void func_78(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

float func_79(bool bParam0, vector3 vParam1, int iParam4)
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

void func_80(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (UNK_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_132(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_129(UNK_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &fVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = fVar3;
					}
				}
				func_81(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_81(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
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
		func_128(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_123(bParam0, &Var0);
		if (func_122(vParam1, 0f, 0f, 0f, 0))
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
		func_115(iParam5, &Var0, vParam1, iParam4, func_121(bParam0));
		func_82(iParam5, bParam0, 0);
	}
}

void func_82(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_112(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
				Global_111638.f_32744.f_4801 = func_101();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_132(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_83(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_83(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_84(bParam0))
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
		iVar1 = (iVar1 + 1);
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
	func_123(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_84(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_99(bParam0, 0, 0)) || func_99(bParam0, 1, 0)) || func_99(bParam0, 2, 0)) || func_121(bParam0) != 145) || func_98(bParam0)) || func_97(bParam0)) || func_96(bParam0)) || func_95(bParam0)) || !func_85(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_97(bParam0))
		{
		}
		if (func_97(bParam0))
		{
		}
		if (func_99(bParam0, 0, 0))
		{
		}
		if (func_99(bParam0, 1, 0))
		{
		}
		if (func_99(bParam0, 2, 0))
		{
		}
		if (func_121(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_85(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_86(bParam0, 0))
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

bool func_86(bool bParam0, bool bParam1)
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
		if (!func_94())
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
		if ((((!func_93() && !func_92()) && !func_91()) && !func_90()) && !func_94())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_91())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_89(bParam0))
		{
			return false;
		}
	}
	if (!func_87(bParam0))
	{
		return false;
	}
	return true;
}

bool func_87(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_88())
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

bool func_88()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_89(bool bParam0)
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

bool func_90()
{
	return false;
}

bool func_91()
{
	return true;
}

bool func_92()
{
	return true;
}

bool func_93()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_94()
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

bool func_95(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_86(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_96(bool bParam0)
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

bool func_97(bool bParam0)
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

bool func_98(bool bParam0)
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

bool func_99(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_100(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_100(int iParam0, int iParam1, char* sParam2, int iParam3)
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

var func_101()
{
	var uVar0;

	func_111(&uVar0, UNK_0x4460E481B9E33ADA());
	func_110(&uVar0, UNK_0x8D199E381D262EEF());
	func_109(&uVar0, UNK_0xD8A54335F18763BA());
	func_104(&uVar0, UNK_0x972A296334C9D57B());
	func_103(&uVar0, UNK_0x118229AD063C3C1D());
	func_102(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_102(var uParam0, int iParam1)
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

void func_103(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_104(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_108(*uParam0);
	iVar1 = func_106(*uParam0);
	if (iParam1 < 1 || iParam1 > func_105(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_105(int iParam0, int iParam1)
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

int func_106(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_107(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_107(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_108(int iParam0)
{
	return iParam0 & 15;
}

void func_109(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_110(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_112(var uParam0, int iParam1)
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
			uParam0->f_4 = func_113(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_113(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_113(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_113(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_113(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_113(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_113(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_113(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_113(2, 1);
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
			if (func_94())
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
			if (func_94())
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
		if (!func_122(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_122(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_122(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_113(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_16(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_114(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_114(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
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

void func_115(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_112(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_120(iParam0);
			func_119(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_116(iParam0, 1);
		}
	}
}

void func_116(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_118(iParam0, 0))
		{
			func_117(iParam0, 1, 0);
			func_117(iParam0, 2, 0);
			func_117(iParam0, 3, 0);
			func_117(iParam0, 4, 0);
			func_117(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_117(iParam0, 0, 0);
	}
}

void func_117(int iParam0, bool bParam1, bool bParam2)
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

bool func_118(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_119(var uParam0, var uParam1)
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

void func_120(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_112(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_116(iParam0, 0);
		}
	}
}

int func_121(bool bParam0)
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

bool func_122(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_123(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_127(uParam1);
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
		if (uParam1->f_65 == -1 && !func_126(uParam1->f_66))
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
		func_125(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_124(iVar0 + 1));
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

int func_124(int iParam0)
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

int func_125(bool bParam0, var uParam1, var uParam2)
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

bool func_126(int iParam0)
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

void func_127(var uParam0)
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

void func_128(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_120(iParam0);
	func_116(iParam0, 0);
}

bool func_129(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	iVar0 = func_130(vParam0, uParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return true;
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return true;
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return true;
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return true;
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return true;
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return true;
		default:
			break;
	}
	return false;
}

int func_130(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93782[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93782[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_131(iVar0) || iParam4 == 0)
				{
					fVar1 = UNK_0x0EB28750412C3A5A(vParam0, Global_93782[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_131(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

int func_132(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

void func_133(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_135(bParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
		{
			UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
		}
		func_134(bVar0, bParam0);
		func_63(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), bVar0);
			UNK_0x0674E58A79778E99(&(bParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
	}
	bParam0->f_6 = 0;
	bParam0->f_12 = 0;
	bParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
		{
			UNK_0xA245D14CC59CDD36(bParam0->f_17[bVar0], 1);
			UNK_0x7D732AB707BE9152(bParam0->f_17[bVar0], 1);
			if (bParam2)
			{
				UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 32, true);
				UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 305, false);
			}
			UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 268, false);
			if (bParam1)
			{
				if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_40()) && bParam0->f_17[bVar0] != UNK_0x16F2683693E537C9())
				{
					UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29))
			{
				UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 0, -1, 0);
			}
			bParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 1);
		UNK_0x7D732AB707BE9152(UNK_0x16F2683693E537C9(), 1);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, true);
		}
	}
	bParam0->f_21 = 0;
}

void func_134(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 14);
			break;
		case 1:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 15);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 16);
			break;
	}
}

void func_135(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
	{
		UNK_0x142CC44DB769B57E(&(bParam0->f_5));
	}
}

bool func_136(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 > bParam2)
	{
		return bParam2;
	}
	else if (bParam0 < bParam1)
	{
		return bParam1;
	}
	return bParam0;
}

bool func_137(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

float func_138(bool bParam0, bool bParam1, int iParam2)
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

int func_139(bool bParam0, bool bParam1, bool bParam2)
{
	return func_33(bParam0, !bParam1, bParam2);
}

void func_140(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_141()
{
	func_149(2);
	func_148();
}

bool func_142()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_143()
{
	int iVar0;
	float fVar1;

	UNK_0x5C2EBB66AD2EA5FF(1);
	UNK_0xD7992BEF7A9D109E("PPROM", false);
	func_147(2, 1);
	func_146(&uLocal_76, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	Local_242[0 /*8*/] = { -1039.556f, -1071.264f, 150f };
	Local_242[0 /*8*/].f_3 = 200f;
	Local_242[1 /*8*/] = { -1014.976f, 450.128f, 150f };
	Local_242[1 /*8*/].f_3 = 200f;
	Local_242[2 /*8*/] = { -598.1714f, -310.67f, 150f };
	Local_242[2 /*8*/].f_3 = 200f;
	Local_242[3 /*8*/] = { -392.5704f, 514.8138f, 150f };
	Local_242[3 /*8*/].f_3 = 200f;
	Local_242[4 /*8*/] = { 127.7632f, -135.7758f, 150f };
	Local_242[4 /*8*/].f_3 = 200f;
	Local_242[5 /*8*/] = { 1033.469f, -570.8278f, 150f };
	Local_242[5 /*8*/].f_3 = 200f;
	Local_242[6 /*8*/] = { 246.5894f, -890.811f, 150f };
	Local_242[6 /*8*/].f_3 = 200f;
	Local_242[7 /*8*/] = { 1231.393f, -1694.348f, 150f };
	Local_242[7 /*8*/].f_3 = 200f;
	Local_242[8 /*8*/] = { 424.9531f, -1904.325f, 150f };
	Local_242[8 /*8*/].f_3 = 200f;
	Local_242[9 /*8*/] = { -22.4342f, -1414.275f, 160f };
	Local_242[9 /*8*/].f_3 = 200f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (!func_145(Local_242[iVar0 /*8*/]))
		{
			fVar1 = 0f;
			UNK_0xE82754C349C7B581(Local_242[iVar0 /*8*/], &fVar1, 0, 0);
			Local_242[iVar0 /*8*/].f_2 = fVar1;
		}
		iVar0++;
	}
	switch (func_144())
	{
		case 6:
			StringCopy(&cLocal_43, "DT", 16);
			break;
		case 5:
			StringCopy(&cLocal_43, "VW", 16);
			break;
		case 7:
			StringCopy(&cLocal_43, "MW", 16);
			break;
	}
	UNK_0x51B096AAC60548C1(0f);
	while (!UNK_0x67C1D9E5B91B2E37(false))
	{
		SYSTEM::WAIT(0);
	}
}

int func_144()
{
	return Global_110348.f_20;
}

bool func_145(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_146(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_147(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&Global_30926, bParam0);
	StringCopy(&(Global_30927[bParam0 /*6*/]), UNK_0xBB0808A181D4745C(), 24);
	Global_30982[bParam0] = iParam1;
}

void func_148()
{
	if (UNK_0xC844350D5D58C99A(bLocal_241))
	{
		UNK_0x046C362CF15F1935(&bLocal_241);
	}
	if (UNK_0xE4EDC4B0E92C078B(Local_242[0 /*8*/].f_4))
	{
		UNK_0x142CC44DB769B57E(&(Local_242[0 /*8*/].f_4));
	}
	if (UNK_0xE4EDC4B0E92C078B(Local_242[0 /*8*/].f_5))
	{
		UNK_0x142CC44DB769B57E(&(Local_242[0 /*8*/].f_5));
	}
	if (UNK_0xE4EDC4B0E92C078B(Local_242[1 /*8*/].f_4))
	{
		UNK_0x142CC44DB769B57E(&(Local_242[1 /*8*/].f_4));
	}
	if (UNK_0xE4EDC4B0E92C078B(Local_242[1 /*8*/].f_5))
	{
		UNK_0x142CC44DB769B57E(&(Local_242[1 /*8*/].f_5));
	}
	UNK_0x51B096AAC60548C1(1f);
	UNK_0x5C2EBB66AD2EA5FF(0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_149(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

