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
	int iLocal_36 = 0;
	struct<28> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = false;
	bool bLocal_69 = false;
	bool bLocal_70 = false;
	bool bLocal_71 = false;
	bool bLocal_72 = false;
	var uLocal_73 = 16;
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
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	char[] cLocal_240[8] = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	bool bLocal_246 = false;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	bool bLocal_251 = false;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1000;
	var uLocal_264 = 1000;
	var uLocal_265 = 0;
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
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	UNK_0x7798376279BB5369(1);
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_94(2);
		func_93();
	}
	func_87();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_86())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = UNK_0x1C0640BA9A7327B3();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	vector3 vVar8;
	int iVar11;

	switch (iLocal_36)
	{
		case 0:
			UNK_0x523BCC9DC80CD82F(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				UNK_0x523BCC9DC80CD82F(Local_37.f_11);
			}
			UNK_0xD7992BEF7A9D109E("PRECOV", false);
			if (UNK_0x67C1D9E5B91B2E37(false))
			{
				if (UNK_0xC844350D5D58C99A(Global_110348.f_222[0]) && UNK_0xDF1306B443CD3D15(Global_110348.f_222[0], 0))
				{
					bLocal_244 = Global_110348.f_222[0];
					Global_110348.f_222[0] = 0;
					UNK_0x73270B3C9CC833FD(bLocal_244, true, 1);
					Local_37.f_7 = UNK_0x134B62B726CEC8E6(bLocal_244);
					UNK_0x71199B01895C6202(Local_37.f_7);
					UNK_0xAB8E2DDC7AF955E0(Local_37.f_7, true);
				}
				if (UNK_0xC844350D5D58C99A(Global_110348.f_225[0]))
				{
					bLocal_245 = Global_110348.f_225[0];
					Global_110348.f_225[0] = 0;
					UNK_0x73270B3C9CC833FD(bLocal_245, true, 1);
					Local_37.f_8 = UNK_0x134B62B726CEC8E6(bLocal_245);
					UNK_0x6DF7BF67E86AAE86(bLocal_245, bLocal_251);
					UNK_0x6D80F1AEBA734886(bLocal_245, false);
					UNK_0x298903DD96203C2C(bLocal_245, 5);
					UNK_0xFADC0A217229F6B5(bLocal_245, true);
					UNK_0xAFF39FB306F8E232(bLocal_245, 23, true);
					if (UNK_0x7D8B2A8F9EA82DB7(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							UNK_0xCC095276B3DD380E(bLocal_245, 1);
							UNK_0x83F619A03CDDE284(bLocal_245, 1, 4096, -1);
						}
						else
						{
							UNK_0xCC095276B3DD380E(bLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						UNK_0x262EF6C6306BEA6C(bLocal_245, joaat("WEAPON_PISTOL"), 120, false, false);
						UNK_0x262EF6C6306BEA6C(bLocal_245, joaat("WEAPON_MICROSMG"), 120, true, true);
					}
					UNK_0x71199B01895C6202(Local_37.f_8);
					UNK_0xAA6B3A4292417750(bLocal_245, false, false, false, Local_37.f_27, false, false, 0, false);
					func_85(&uLocal_73, 3, bLocal_245, "ABIGAIL", 0, 1);
				}
				if (UNK_0xC844350D5D58C99A(Global_110348.f_225[1]))
				{
					bLocal_246 = Global_110348.f_225[1];
					Global_110348.f_225[1] = 0;
					UNK_0x73270B3C9CC833FD(bLocal_246, true, 1);
					Local_37.f_9 = UNK_0x134B62B726CEC8E6(bLocal_246);
					UNK_0x6DF7BF67E86AAE86(bLocal_246, bLocal_251);
					UNK_0x6D80F1AEBA734886(bLocal_246, false);
					UNK_0x298903DD96203C2C(bLocal_246, 5);
					UNK_0xFADC0A217229F6B5(bLocal_246, true);
					UNK_0xAFF39FB306F8E232(bLocal_246, 23, true);
					if (UNK_0x7D8B2A8F9EA82DB7(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							UNK_0xCC095276B3DD380E(bLocal_246, 1);
							UNK_0x83F619A03CDDE284(bLocal_246, 1, 4096, -1);
						}
						else
						{
							UNK_0xCC095276B3DD380E(bLocal_246, 0);
						}
					}
					UNK_0x71199B01895C6202(Local_37.f_9);
					UNK_0xAA6B3A4292417750(bLocal_246, false, false, false, Local_37.f_27, false, false, 0, false);
				}
				if ((!UNK_0xC844350D5D58C99A(bLocal_245) || !UNK_0xEB6A8945D1AC98A1(bLocal_245)) && (!UNK_0xC844350D5D58C99A(bLocal_246) || !UNK_0xEB6A8945D1AC98A1(bLocal_246)))
				{
					iLocal_249 = func_84(bLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_83(&cVar0, 7500, 1);
					func_82(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					bLocal_68 = false;
					bLocal_69 = false;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (UNK_0x1C0640BA9A7327B3() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		case 1:
			if (((((UNK_0xC844350D5D58C99A(bLocal_245) && UNK_0xEB6A8945D1AC98A1(bLocal_245)) || (UNK_0xC844350D5D58C99A(bLocal_246) && UNK_0xEB6A8945D1AC98A1(bLocal_246))) || ((Local_37.f_17 && UNK_0x7D8B2A8F9EA82DB7(Local_37.f_7)) && !UNK_0xC42A92762C58E1B9(bLocal_245, bLocal_244, 0))) || ((Local_37.f_17 && UNK_0x7D8B2A8F9EA82DB7(Local_37.f_7)) && !UNK_0xC42A92762C58E1B9(bLocal_246, bLocal_244, 0))) || ((Local_37.f_18 && !UNK_0xC42A92762C58E1B9(bLocal_245, bLocal_244, 0)) && func_81(bLocal_245)))
			{
				if (Local_37.f_17 && UNK_0x7D8B2A8F9EA82DB7(Local_37.f_7))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_245) && UNK_0xC42A92762C58E1B9(bLocal_245, bLocal_244, 0))
					{
						UNK_0xB559D9DC92655F9E(bLocal_245);
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_246) && UNK_0xC42A92762C58E1B9(bLocal_246, bLocal_244, 0))
					{
						UNK_0xB559D9DC92655F9E(bLocal_246);
					}
				}
				if (UNK_0xD17F06053799A7CA())
				{
					UNK_0x790015DC92C918E2();
				}
				if (UNK_0xFEBC1E4EC9E001F0())
				{
					UNK_0xA37A90C62806D848(1);
				}
				if (func_86())
				{
					func_79();
				}
				iLocal_238 = -1;
				if (UNK_0xB87F6CF6E5628C67(Local_37.f_10) && (Local_37.f_11 == 0 || UNK_0xB87F6CF6E5628C67(Local_37.f_11)))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_245))
					{
						vVar8 = { UNK_0xC6151A4F2BB0AC79(bLocal_245, 1067030938 /* Float: 1.2f */, 1069547520 /* Float: 1.5f */) };
						iLocal_247 = UNK_0xA6FF0828D17CF374(joaat("PICKUP_MONEY_MED_BAG"), vVar8, Local_37.f_28, -1, 1, Local_37.f_10);
						UNK_0x71199B01895C6202(Local_37.f_10);
						if (UNK_0xE4EDC4B0E92C078B(iLocal_249))
						{
							UNK_0x142CC44DB769B57E(&iLocal_249);
						}
						iLocal_249 = func_78(iLocal_247);
					}
					if (UNK_0xC844350D5D58C99A(bLocal_246) && Local_37.f_11 != 0)
					{
						vVar8 = { UNK_0xC6151A4F2BB0AC79(bLocal_246, 1067030938 /* Float: 1.2f */, 1069547520 /* Float: 1.5f */) };
						iLocal_248 = UNK_0xA6FF0828D17CF374(joaat("PICKUP_MONEY_MED_BAG"), vVar8, Local_37.f_29, -1, 1, Local_37.f_11);
						UNK_0x71199B01895C6202(Local_37.f_11);
						if (UNK_0xE4EDC4B0E92C078B(iLocal_250))
						{
							UNK_0x142CC44DB769B57E(&iLocal_250);
						}
						iLocal_250 = func_78(iLocal_248);
					}
					func_77(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (UNK_0x405E212DDE472467(bLocal_245, 0))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_250))
					{
						UNK_0x142CC44DB769B57E(&iLocal_250);
					}
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_249))
					{
						iLocal_249 = func_84(UNK_0x6937EA2286828455(bLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_249))
					{
						UNK_0x142CC44DB769B57E(&iLocal_249);
					}
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_250))
					{
						iLocal_250 = func_74(bLocal_245, 1, 145);
					}
				}
				func_46(&uLocal_254, bLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (UNK_0x1C0640BA9A7327B3() > iLocal_67)
					{
						func_45();
					}
					else
					{
						iVar11 = func_44(UNK_0x51D1D19912234EA0((iLocal_67 - UNK_0x1C0640BA9A7327B3())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_40((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_40((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(bLocal_245))
				{
					if (func_39(UNK_0x16F2683693E537C9(), bLocal_245, 1) > 500f)
					{
						func_45();
					}
					else if (UNK_0xE4EDC4B0E92C078B(iLocal_249))
					{
						func_38(iLocal_249, bLocal_245, 500f, 0.8f, 0);
					}
				}
				if (UNK_0xC844350D5D58C99A(bLocal_246))
				{
					if (func_39(UNK_0x16F2683693E537C9(), bLocal_246, 1) > 500f)
					{
						func_45();
					}
					else if (UNK_0xE4EDC4B0E92C078B(iLocal_250))
					{
						func_38(iLocal_250, bLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		case 2:
			if (!UNK_0x762119754C50557A(iLocal_247) || UNK_0xEB751B41BC4080D4(iLocal_247))
			{
				if (UNK_0x762119754C50557A(iLocal_247))
				{
					UNK_0x40B7230FD4C59AA2(iLocal_247);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_249))
				{
					UNK_0x142CC44DB769B57E(&iLocal_249);
				}
			}
			if (!UNK_0x762119754C50557A(iLocal_248) || UNK_0xEB751B41BC4080D4(iLocal_248))
			{
				if (UNK_0x762119754C50557A(iLocal_248))
				{
					UNK_0x40B7230FD4C59AA2(iLocal_248);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_250))
				{
					UNK_0x142CC44DB769B57E(&iLocal_250);
				}
			}
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_249) && !UNK_0xE4EDC4B0E92C078B(iLocal_250))
			{
				if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (!bLocal_71)
					{
						func_83("LOSE_WANTED", 7500, 1);
						bLocal_71 = true;
					}
				}
				else
				{
					UNK_0x790015DC92C918E2();
					func_37();
				}
			}
			else if ((UNK_0x762119754C50557A(iLocal_247) && func_36(UNK_0x16F2683693E537C9(), UNK_0xE925E52ACABA4CE7(iLocal_247), 1) > 500f) || (UNK_0x762119754C50557A(iLocal_248) && func_36(UNK_0x16F2683693E537C9(), UNK_0xE925E52ACABA4CE7(iLocal_248), 1) > 500f))
			{
				func_45();
			}
			else if (iLocal_242 && func_34())
			{
				UNK_0x790015DC92C918E2();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_83(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_245) && !UNK_0xEB6A8945D1AC98A1(bLocal_245))
	{
		if ((UNK_0xC844350D5D58C99A(bLocal_244) && UNK_0xDF1306B443CD3D15(bLocal_244, 0)) && !bLocal_68)
		{
			if (!func_33(bLocal_245, 242628503, 1))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_243);
				UNK_0xD1F0F33C375B8446(false, bLocal_244, 31, 10000);
				UNK_0x89258193691A7600(false, bLocal_244, UNK_0x16F2683693E537C9(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				UNK_0x75ABDC5F81978924(iLocal_243);
				UNK_0x78ADC381772E3D54(bLocal_245, iLocal_243);
				UNK_0xF82EA857DA10E0CD(&iLocal_243);
				bLocal_68 = true;
			}
		}
		else if (((func_33(bLocal_245, 242628503, 1) && UNK_0x4F1B602325013CC2(bLocal_245) < 1) && !bLocal_69) && (((((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_37, Local_37.f_3, Local_37.f_6, 0, true, 0) || UNK_0xFA4CE147B4D9AEE0(bLocal_245, 124)) || UNK_0xFA4CE147B4D9AEE0(bLocal_245, 125)) || UNK_0xFA4CE147B4D9AEE0(bLocal_245, 126)) || UNK_0xFA4CE147B4D9AEE0(bLocal_245, 23)) || func_32(Global_110348.f_35, 134217728)))
		{
			UNK_0x89258193691A7600(bLocal_245, bLocal_244, UNK_0x16F2683693E537C9(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			bLocal_69 = true;
		}
		else if ((!func_33(bLocal_245, 242628503, 1) && !func_33(bLocal_245, -1273030092, 1)) || !UNK_0x405E212DDE472467(bLocal_245, 0))
		{
			if (!func_33(bLocal_245, 1805844857, 1))
			{
				UNK_0xF3268524E9BE6D6E(bLocal_245, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 1);
			}
		}
		else if (UNK_0xC42A92762C58E1B9(bLocal_245, bLocal_244, 1) && (((UNK_0x7B5606C651AB51B5(bLocal_244, 0, 3000) || UNK_0x7B5606C651AB51B5(bLocal_244, 1, 3000)) || UNK_0x7B5606C651AB51B5(bLocal_244, 2, 8000)) || UNK_0x7B5606C651AB51B5(bLocal_244, 3, 8000)))
		{
			if (!func_33(bLocal_245, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
			{
				UNK_0x45F014B3D0466974(bLocal_245, bLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((UNK_0xB87D13D0C064E9D1(bLocal_245, UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(bLocal_244, UNK_0x16F2683693E537C9(), 1)) || UNK_0xFA4CE147B4D9AEE0(bLocal_245, 124)) || UNK_0xFA4CE147B4D9AEE0(bLocal_245, 125)) || UNK_0xFA4CE147B4D9AEE0(bLocal_245, 126))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((UNK_0xD1960163A3042274(bLocal_245, 242628503) == 1 && UNK_0x4F1B602325013CC2(bLocal_245) == 1) || UNK_0xD1960163A3042274(bLocal_245, -1273030092) == 1)
				{
					if (!UNK_0x6B4464DA5794D055(bLocal_245))
					{
						UNK_0x40B4CC38578A6E32(bLocal_245, joaat("WEAPON_MICROSMG"));
						UNK_0xFFDDE8CC59EB6D40(bLocal_245, UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_244) && UNK_0xDF1306B443CD3D15(bLocal_244, 0))
		{
			if (!bLocal_72)
			{
				if ((func_33(bLocal_245, 242628503, 1) && UNK_0x4F1B602325013CC2(bLocal_245) == 1) || func_33(bLocal_245, -1273030092, 1))
				{
					if (UNK_0xAE317D00A5A55DF6("TAKINGS", 0, -1))
					{
						UNK_0xCEAA091B490F8407(-1, "TAKINGS_TIRES_PEELAWAY_master", bLocal_244, false, 0, 0);
						bLocal_72 = true;
					}
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_246) && !UNK_0xEB6A8945D1AC98A1(bLocal_246))
	{
		if (!UNK_0x405E212DDE472467(bLocal_246, 0) && !func_33(bLocal_246, 1805844857, 1))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_246, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 1);
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_245) && !UNK_0xEB6A8945D1AC98A1(bLocal_245))
	{
		if (UNK_0xE934758D273C899A(bLocal_245) && !UNK_0x405E212DDE472467(bLocal_245, 0))
		{
			if (func_86())
			{
				func_79();
			}
		}
		else if (func_39(UNK_0x16F2683693E537C9(), bLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_31())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_30(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				case 1:
					if (func_31())
					{
						if (!UNK_0x65636D4556D82155(bLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(bLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				case 2:
					if (func_31() && (UNK_0x1C0640BA9A7327B3() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_30(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				case 3:
					if (func_31() && (UNK_0x1C0640BA9A7327B3() - iLocal_239) > 1500)
					{
						if (!UNK_0x65636D4556D82155(bLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(bLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238 = (iLocal_238 - 1);
						}
					}
					break;
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_245))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!UNK_0xE934758D273C899A(bLocal_245))
				{
					iLocal_252 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() - iLocal_252) > 2000)
			{
				UNK_0xAA6B3A4292417750(bLocal_245, false, false, false, false, false, false, 0, false);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_246))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!UNK_0xE934758D273C899A(bLocal_246))
				{
					iLocal_253 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() - iLocal_253) > 2000)
			{
				UNK_0xAA6B3A4292417750(bLocal_246, false, false, false, false, false, false, 0, false);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_110348.f_220 = iParam0;
}

void func_3(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_110348.f_20, Global_110348.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
			}
			break;
	}
	return iParam1;
}

int func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_29(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					func_28();
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
		if (func_27(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_26();
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
				func_18();
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
				if (func_17())
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
			if (func_16())
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
			func_15();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_14();
		func_9();
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
		func_28();
	}
	return 0;
}

void func_9()
{
	if (!func_10())
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

bool func_10()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_13())
	{
		return false;
	}
	if (func_11(UNK_0xD803B885F5E47A62()))
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

bool func_11(int iParam0)
{
	return func_12(iParam0, 20);
}

bool func_12(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_13()
{
	return -1;
}

void func_14()
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

void func_15()
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

bool func_16()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_17()
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

void func_18()
{
	if (func_25(14))
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
		Global_19486 = func_19();
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

int func_19()
{
	func_20();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_20()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_23(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_22(UNK_0x16F2683693E537C9());
			if (func_21(iVar0) && (!func_25(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_21(Global_111638.f_2358.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_26()
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

bool func_27(bool bParam0, int iParam1)
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

void func_28()
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

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_30(char* sParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, sParam0, 16);
	switch (func_19())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

bool func_31()
{
	if (func_86())
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

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_33(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xD1960163A3042274(bParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

int func_34()
{
	if (UNK_0xD17F06053799A7CA())
	{
		return 0;
	}
	if (UNK_0x04E6B3EAA8742BFA())
	{
		if (func_86() && !func_35())
		{
			return 0;
		}
	}
	return 1;
}

bool func_35()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

float func_36(bool bParam0, vector3 vParam1, int iParam4)
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

void func_37()
{
	func_94(1);
	func_93();
}

void func_38(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;

	fVar2 = (fParam2 * fParam3);
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((UNK_0xC844350D5D58C99A(bParam1) && UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9())) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0xE2F1E99DD161A861(bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam1), 0))
				{
					fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam1, true), 1);
					if (fVar1 >= fVar2 || bParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UNK_0xF412DD40DE84CE72(iParam0, 1);
						UNK_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						UNK_0xF412DD40DE84CE72(iParam0, 0);
						UNK_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
			else if (UNK_0xEC560E589DF8370E(bParam1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam1)))
				{
					fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam1, true), 1);
					if (fVar1 >= fVar2 || bParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UNK_0xF412DD40DE84CE72(iParam0, 1);
						UNK_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						UNK_0xF412DD40DE84CE72(iParam0, 0);
						UNK_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
		}
	}
}

float func_39(bool bParam0, bool bParam1, int iParam2)
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

void func_40(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 1, -1);
}

void func_41(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_43(0, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_42(0, bVar0);
		Global_1378678.f_1135[bVar0] = iParam0;
		Global_1378678.f_1135.f_11[bVar0] = uParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[bVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_1135.f_194[bVar0] = iParam3;
		Global_1378678.f_1135.f_183[bVar0] = iParam4;
		Global_1378678.f_1135.f_216[bVar0] = iParam5;
		Global_1378678.f_1135.f_227[bVar0 /*3*/] = fParam6;
		Global_1378678.f_1135.f_227[bVar0 /*3*/].f_1 = fParam7;
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

void func_42(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_43(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_45()
{
	func_94(2);
	func_93();
}

void func_46(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_47(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, bParam5, bParam6);
}

void func_47(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_73(bVar0))
	{
		func_72();
	}
	if (func_71(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
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
			if (func_66(uParam0, bParam7, bParam9, 0))
			{
				func_62(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_51(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_73(bVar0))
							{
								func_82(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_50(1);
								}
							}
						}
					}
				}
			}
			else if (func_51(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_73(bVar0))
						{
							func_82(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_50(1);
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
				if (func_73(bParam5))
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
						func_77(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_77(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_77(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_77(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_77(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_77(uParam0, bVar0, 1);
				}
			}
			if (!func_66(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_49(uParam0))
				{
					func_48(uParam0);
				}
			}
		}
	}
	else
	{
		func_77(uParam0, bVar0, 0);
	}
}

void func_48(var uParam0)
{
	if (func_71(UNK_0x16F2683693E537C9()))
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

bool func_49(var uParam0)
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

int func_50(bool bParam0)
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

bool func_51(bool bParam0)
{
	if (!func_52(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_73(bParam0)) || func_73("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_50(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_50(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_50(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_52(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_61(0))
	{
		return false;
	}
	if (func_60())
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
	if ((func_59() || func_58(Global_4456448.f_232883)) || func_57())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_56(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_55(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_53(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_53(bool bParam0)
{
	if (bParam0 != func_13())
	{
		if (func_54(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_54(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_54(bool bParam0, bool bParam1, bool bParam2)
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

bool func_55(bool bParam0, int iParam1)
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

bool func_56(bool bParam0, int iParam1)
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

bool func_57()
{
	return Global_2450632.f_17;
}

bool func_58(int iParam0)
{
	return iParam0 == 51;
}

bool func_59()
{
	return Global_2450632.f_16;
}

bool func_60()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_61(int iParam0)
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

void func_62(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
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
		func_77(uParam0, 0, 0);
	}
	if (func_65(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_63())
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

int func_63()
{
	return func_64(UNK_0xD803B885F5E47A62());
}

int func_64(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_65(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_66(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_49(uParam0))
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
						if (!func_70(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_70(bParam1, bParam2, bParam3))
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
					if (!func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_69(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_70(bParam1, bParam2, bParam3))
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
						if (func_68(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_67(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_67(bParam1, bParam2, bParam3))
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
					else if (func_68(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_49(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_52(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_72();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_67(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
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

bool func_68(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
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

bool func_69(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
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

bool func_70(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
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

bool func_71(bool bParam0)
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

void func_72()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_73(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

int func_74(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_75(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_75(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_76(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_76(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_76(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_77(var uParam0, bool bParam1, int iParam2)
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
		if (func_73(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_73(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

int func_78(int iParam0)
{
	int iVar0;

	if (!UNK_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = UNK_0xA0556E31F2661AF4(iParam0);
	UNK_0x516E63E474722206(iVar0, func_76(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

void func_79()
{
	Global_19671 = 0;
	func_80();
}

void func_80()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_81(bool bParam0)
{
	if (((((UNK_0xFA4CE147B4D9AEE0(bParam0, 124) || UNK_0xFA4CE147B4D9AEE0(bParam0, 125)) || UNK_0xFA4CE147B4D9AEE0(bParam0, 126)) || UNK_0xFA4CE147B4D9AEE0(bParam0, 42)) || (UNK_0xE115347EA59F7B86(bParam0, UNK_0x16F2683693E537C9()) && UNK_0xFA4CE147B4D9AEE0(bParam0, 29))) || UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		return true;
	}
	else
	{
		UNK_0xE910A68AA670B4AA(bParam0);
	}
	return false;
}

void func_82(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_83(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_84(bool bParam0, bool bParam1, bool bParam2)
{
	return func_75(bParam0, !bParam1, bParam2);
}

void func_85(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_86()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_87()
{
	func_88(&Local_37);
	UNK_0xF63400DBE3303D26("relThief", &bLocal_251);
	UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_251);
	UNK_0x0E2400AB9174FA81(5, bLocal_251, joaat("PLAYER"));
	switch (func_19())
	{
		case 0:
			func_85(&uLocal_73, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			break;
		case 1:
			func_85(&uLocal_73, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			break;
		case 2:
			func_85(&uLocal_73, 2, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
			break;
	}
	UNK_0x51B096AAC60548C1(0.1f);
}

void func_88(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	vVar0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	UNK_0x5D96D8530B3D0904(&iVar3, 3);
	UNK_0x5D96D8530B3D0904(&iVar3, 4);
	UNK_0x5D96D8530B3D0904(&iVar4, 3);
	UNK_0x5D96D8530B3D0904(&iVar4, 4);
	UNK_0x5D96D8530B3D0904(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("A_M_M_EASTSA_02");
			uParam0->f_10 = joaat("PROP_CS_DUFFEL_01B");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		case 1:
			uParam0->f_8 = joaat("A_M_M_PAPARAZZI_01");
			uParam0->f_9 = joaat("A_M_M_PAPARAZZI_01");
			uParam0->f_10 = joaat("PROP_PAP_CAMERA_01");
			uParam0->f_11 = joaat("PROP_NPC_PHONE");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_92())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		case 11:
			if (func_89(func_92(), vVar0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		case 12:
			if (func_89(func_92(), vVar0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		case 13:
			if (func_89(func_92(), vVar0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

bool func_89(int iParam0, vector3 vParam1)
{
	switch (iParam0)
	{
		case 5:
			if (func_90(func_91(vParam1 - Vector(0f, 174.58f, 335.5574f)), func_91(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 6:
			if (func_90(func_91(vParam1 - Vector(0f, -711.023f, 393.0992f)), func_91(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 7:
			if (func_90(func_91(vParam1 - Vector(0f, -215.2002f, -1423.254f)), func_91(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 11:
			if (func_90(func_91(vParam1 - Vector(0f, 274.9096f, -564.5655f)), func_91(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 12:
			if (func_90(func_91(vParam1 - Vector(0f, 338.8084f, 225.5057f)), func_91(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 13:
			if (func_90(func_91(vParam1 - Vector(0f, 6256.5f, -299.9329f)), func_91(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 14:
			if (func_90(func_91(vParam1 - Vector(0f, 4287.951f, -2200.204f)), func_91(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		default:
			break;
	}
	return false;
}

float func_90(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_91(vector3 vParam0)
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

int func_92()
{
	return Global_110348.f_20;
}

void func_93()
{
	if (UNK_0xC844350D5D58C99A(bLocal_245))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_245))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_245, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 1);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_245);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_246))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_246))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_246, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 1);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_246);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_244))
	{
		UNK_0x046C362CF15F1935(&bLocal_244);
	}
	if (UNK_0x762119754C50557A(iLocal_247))
	{
		UNK_0x40B7230FD4C59AA2(iLocal_247);
	}
	if (UNK_0x762119754C50557A(iLocal_248))
	{
		UNK_0x40B7230FD4C59AA2(iLocal_248);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_249))
	{
		UNK_0x142CC44DB769B57E(&iLocal_249);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_250))
	{
		UNK_0x142CC44DB769B57E(&iLocal_250);
	}
	UNK_0xAB8E2DDC7AF955E0(Local_37.f_7, false);
	UNK_0x51B096AAC60548C1(1f);
	UNK_0x51732B934211201A(bLocal_251);
	UNK_0x10FAF14A60A0DBE1();
}

void func_94(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

