#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = false;
	bool bLocal_54 = false;
	bool bLocal_55 = false;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	bool bLocal_74 = false;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_78 = { 0f, 0f, 0f };
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	bool bLocal_83 = false;
	var uLocal_84 = 16;
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
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = false;
	bool bLocal_253 = false;
	bool bLocal_254 = false;
	bool bLocal_255 = false;
	bool bLocal_256 = false;
	var uLocal_257 = 0;
	bool bLocal_258 = false;
	bool bLocal_259 = false;
	bool bLocal_260 = false;
	bool bLocal_261 = false;
	var uLocal_262 = 0;
	bool bLocal_263 = false;
	bool bLocal_264 = false;
	bool bLocal_265 = false;
	bool bLocal_266 = false;
	bool bLocal_267 = false;
	bool bLocal_268 = false;
	bool bLocal_269 = false;
	bool bLocal_270 = false;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	bool bLocal_277 = false;
	int iLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	vector3 vLocal_282 = { 0f, 0f, 0f };
	bool bLocal_285 = false;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_47 = UNK_0x817B3657F78A517A();
	vLocal_279 = { 1435.77f, 2983.11f, 40.77f };
	vLocal_282 = { 2162.552f, 2122.646f, 124.7956f };
	vLocal_56 = { ScriptParam_0.f_1[0 /*3*/] };
	func_318();
	if (UNK_0xD8A54335F18763BA() > 7 && UNK_0xD8A54335F18763BA() < 19)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	if (func_292(vLocal_56, 23, bLocal_285, 0, 0))
	{
		func_290(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_237();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((UNK_0x338D6FF72D84D90F() && !UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || bLocal_261)
		{
			if (!func_236())
			{
				if (func_235())
				{
					func_237();
				}
			}
			UNK_0x1A6DFFFEEC27BF4F("RE_AV", 0);
			switch (iLocal_51)
			{
				case 0:
					if (bLocal_53)
					{
						bLocal_54 = true;
						iLocal_51 = 1;
					}
					else
					{
						if (func_223())
						{
							func_237();
						}
						if (!bLocal_55)
						{
							func_222();
						}
						else
						{
							func_221();
						}
					}
					break;
				case 1:
					UNK_0xD60411959D5D930B(0f);
					if (!UNK_0x437347B10A200C4B(bLocal_252, 0))
					{
						if (UNK_0x405E212DDE472467(bLocal_252, 0))
						{
							func_219();
						}
					}
					if (!UNK_0x437347B10A200C4B(bLocal_253, 0))
					{
						if (UNK_0x405E212DDE472467(bLocal_253, 0))
						{
							func_219();
						}
					}
					if (!bLocal_260)
					{
						func_218();
						func_205();
					}
					if (!bLocal_261)
					{
						if (!UNK_0x437347B10A200C4B(bLocal_254, 0))
						{
							if (func_204(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(bLocal_254, true), 1) < IntToFloat(iLocal_274) && !UNK_0x03068588A1FCED1A(bLocal_254))
							{
								if (!bLocal_268)
								{
									func_202();
									SYSTEM::WAIT(0);
									if (iLocal_52 == 1)
									{
										if (func_201() == 0)
										{
											func_186(&uLocal_84, "re_acau", "re_ac_approM", 4, 0, 0, 0);
										}
										else if (func_201() == 1)
										{
											func_186(&uLocal_84, "re_acau", "re_ac_approF", 4, 0, 0, 0);
										}
										else if (func_201() == 2)
										{
											func_186(&uLocal_84, "re_acau", "re_ac_approT", 4, 0, 0, 0);
										}
									}
									else if (iLocal_52 == 2)
									{
										if (func_201() == 0)
										{
											func_186(&uLocal_84, "reac2au", "reac2_approM", 4, 0, 0, 0);
										}
										else if (func_201() == 1)
										{
											func_186(&uLocal_84, "reac2au", "reac2_approF", 4, 0, 0, 0);
										}
										else if (func_201() == 2)
										{
											func_186(&uLocal_84, "reac2au", "reac2_approT", 4, 0, 0, 0);
										}
									}
									if (UNK_0xE4EDC4B0E92C078B(iLocal_251))
									{
										UNK_0xF2D30B8ACAF12A39(iLocal_251, true);
									}
									bLocal_268 = true;
								}
							}
						}
						if (iLocal_52 == 1)
						{
							UNK_0x9501364A300048C6();
						}
						func_179();
						if (iLocal_52 == 2)
						{
							func_178();
						}
					}
					else
					{
						func_177();
						if (!bLocal_263)
						{
							if (!UNK_0x437347B10A200C4B(bLocal_254, 0))
							{
								if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_254, 0))
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
									{
										UNK_0xDD353D0E9C789D0E(&iLocal_271);
										UNK_0x5B1D360B9C6F0A09(false, bLocal_254, -1, -1, 2f, 524296, 0);
										UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
										UNK_0x75ABDC5F81978924(iLocal_271);
										UNK_0x78ADC381772E3D54(bLocal_252, iLocal_271);
										UNK_0xF82EA857DA10E0CD(&iLocal_271);
										UNK_0xFADC0A217229F6B5(bLocal_252, true);
									}
									bLocal_263 = true;
								}
							}
						}
						func_171();
						func_170();
						func_169();
						if (iLocal_52 == 1)
						{
							func_4();
							func_2();
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_237();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!UNK_0x437347B10A200C4B(bLocal_252, 0))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, 10f, 10f, 10f, 0, 1, 0) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if ((SYSTEM::TIMERB() > 3000 && iLocal_272 == 0) && !func_3())
			{
				func_186(&uLocal_84, "re_acau", "re_ac_attac2", 4, 0, 0, 0);
				UNK_0x0C8C0C840C2D1AD2(bLocal_252, UNK_0x16F2683693E537C9(), 4000, 0, 2);
				UNK_0x0E2400AB9174FA81(5, bLocal_81, joaat("PLAYER"));
				SYSTEM::SETTIMERB(0);
				iLocal_272++;
			}
			if ((SYSTEM::TIMERB() > 4000 && iLocal_272 == 1) && !func_3())
			{
				func_186(&uLocal_84, "re_acau", "re_ac_attac1", 4, 0, 0, 0);
				UNK_0x0C8C0C840C2D1AD2(bLocal_252, UNK_0x16F2683693E537C9(), 4000, 0, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_272++;
			}
			if ((SYSTEM::TIMERB() > 3000 && iLocal_272 == 2) && !func_3())
			{
				func_186(&uLocal_84, "re_acau", "re_ac_attac2", 4, 0, 0, 0);
				UNK_0x0C8C0C840C2D1AD2(bLocal_252, UNK_0x16F2683693E537C9(), 4000, 0, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_272 = 0;
			}
		}
	}
}

bool func_3()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_4()
{
	int iVar0;

	if (!bLocal_267)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
		{
			if (!bLocal_264)
			{
				if (UNK_0x15D0A3E61766C539(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_264 = true;
					iLocal_275++;
					func_186(&uLocal_84, "re_acau", "re_ac_rambl", 4, 0, 0, 0);
					SYSTEM::SETTIMERA(0);
				}
			}
			else if (SYSTEM::TIMERA() > 4000)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
				{
					UNK_0x6C3AE6E278DB3D0E(bLocal_252, UNK_0x16F2683693E537C9(), 0, 16);
					UNK_0xFADC0A217229F6B5(bLocal_252, true);
				}
				UNK_0xE910A68AA670B4AA(UNK_0x16F2683693E537C9());
				SYSTEM::WAIT(3000);
				bLocal_264 = false;
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
			{
				if ((iLocal_275 >= 1 && UNK_0x15D0A3E61766C539(UNK_0x16F2683693E537C9(), 0)) && bLocal_264)
				{
					UNK_0xC6EB89C59F2AF6B8(bLocal_252, "amb@world_human_guard_patrol@male@idle_b", "idle_e", 2f, -2f, -1, 0, false, 0, 0, 0);
					UNK_0xC92DB9682A650680(bLocal_277);
					UNK_0x0525F87A0751EA62("DEATH_FAIL_IN_EFFECT_SHAKE", 1f);
					UNK_0x82A772610883F395("Dont_tazeme_bro", 0, 0);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 768);
					bLocal_267 = true;
				}
			}
		}
	}
	else
	{
		UNK_0xD5CA1F51A9931B2F(true);
		switch (iLocal_278)
		{
			case 0:
				if (UNK_0xE4EDC4B0E92C078B(iLocal_249))
				{
					if (UNK_0xEB6A8945D1AC98A1(bLocal_252))
					{
						UNK_0x142CC44DB769B57E(&iLocal_249);
					}
				}
				SYSTEM::WAIT(2000);
				iLocal_278++;
				break;
			case 1:
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
				{
					func_167();
					iLocal_82 = UNK_0xF0681B7E63456337(923.5159f, 3203.386f, 40.173f, 30f, 13, 127);
					func_159(1);
					UNK_0x53491B90E4FD0E56(500);
					SYSTEM::WAIT(2000);
					if (UNK_0xC844350D5D58C99A(bLocal_252))
					{
						UNK_0x6DAD7906B73F064D(&bLocal_252);
					}
					iLocal_278++;
				}
				else
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				}
				break;
			case 2:
				UNK_0x9A1335ECD7BD117F("Dont_tazeme_bro");
				if (func_201() == 0)
				{
					func_44(UNK_0x16F2683693E537C9(), 12, 52, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else if (func_201() == 1)
				{
					func_44(UNK_0x16F2683693E537C9(), 12, 38, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else if (func_201() == 2)
				{
					func_44(UNK_0x16F2683693E537C9(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 923.5159f, 3203.386f, 40.173f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 280.1253f);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				UNK_0x2FB9A57162E54BAB(-5.2078f);
				UNK_0xEF6276132B396452(-15.2963f, 1065353216 /* Float: 1f */);
				if (UNK_0xE4EDC4B0E92C078B(iLocal_249))
				{
					UNK_0x142CC44DB769B57E(&iLocal_249);
				}
				UNK_0x523BCC9DC80CD82F(joaat("FREIGHT"));
				UNK_0x523BCC9DC80CD82F(joaat("FREIGHTCAR"));
				UNK_0x523BCC9DC80CD82F(joaat("FREIGHTGRAIN"));
				UNK_0x523BCC9DC80CD82F(joaat("FREIGHTCONT1"));
				while (((!UNK_0xB87F6CF6E5628C67(joaat("FREIGHT")) || !UNK_0xB87F6CF6E5628C67(joaat("FREIGHTCAR"))) || !UNK_0xB87F6CF6E5628C67(joaat("FREIGHTGRAIN"))) || !UNK_0xB87F6CF6E5628C67(joaat("FREIGHTCONT1")))
				{
					SYSTEM::WAIT(0);
				}
				UNK_0x52D3C9744D7CF20D();
				bLocal_255 = UNK_0x9F136BAA293FE131(0, 1063.595f, 3227.571f, 39.3899f, 1);
				iVar0 = UNK_0x852A19533F896693(bLocal_255, 26, bLocal_258, -1, 1, true);
				iVar0 = iVar0;
				if (!bLocal_266)
				{
					if (UNK_0xAE317D00A5A55DF6("Train_Horn", 0, -1))
					{
						UNK_0xCEAA091B490F8407(-1, "Warning_Once", bLocal_255, "TRAIN_HORN", 0, 0);
					}
				}
				UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
				UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), "random@train_tracks", "on_back_c", 1000f, -8f, -1, 0, false, 0, 0, 0);
				}
				SYSTEM::WAIT(100);
				SYSTEM::SETTIMERA(0);
				iLocal_278++;
				break;
			case 3:
				UNK_0x51F8DBE54C75AE47(iLocal_82);
				UNK_0x82E51BCA72537B6C(3000);
				UNK_0x63D6BFA449464BBF("Drug_deadman");
				UNK_0xBDB4B720F799CDDB(30f);
				UNK_0x8B89F2ABF0EA71C1(8, 0, 0);
				func_37(8f);
				UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
				iLocal_278++;
				break;
			case 4:
				if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@train_tracks", "on_back_c", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(UNK_0x16F2683693E537C9(), "random@train_tracks", "on_back_c") > 0.95f)
					{
						func_159(0);
						if (func_36(64) || UNK_0x06F8112AA79C53D9(0, 22))
						{
							UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
						}
					}
					else if (UNK_0x8CA9406E01C7EE58(UNK_0x16F2683693E537C9(), "random@train_tracks", "on_back_c") < 0.1f)
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						UNK_0x2FB9A57162E54BAB(-5.2078f);
						UNK_0xEF6276132B396452(-15.2963f, 1065353216 /* Float: 1f */);
					}
				}
				if (SYSTEM::TIMERA() > 2000 && SYSTEM::TIMERA() < 3000)
				{
					if (func_201() == 0)
					{
						func_186(&uLocal_84, "re_acau", "re_ac_awakeM", 4, 0, 0, 0);
					}
					else if (func_201() == 1)
					{
						func_186(&uLocal_84, "re_acau", "re_ac_awakeF", 4, 0, 0, 0);
					}
					else if (func_201() == 2)
					{
						func_186(&uLocal_84, "re_acau", "re_ac_awakeT", 4, 0, 0, 0);
					}
				}
				if (!UNK_0x437347B10A200C4B(bLocal_255, 0))
				{
					if (UNK_0xAE317D00A5A55DF6("Train_Horn", 0, -1))
					{
						UNK_0xCEAA091B490F8407(-1, "Warning_Once", bLocal_255, "TRAIN_HORN", 0, 0);
						bLocal_266 = true;
					}
				}
				if (SYSTEM::TIMERA() > 10000)
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						func_15();
					}
					else
					{
						func_14();
						if (iLocal_52 == 1)
						{
							func_8(213, 0, 0);
						}
						else if (iLocal_52 == 2)
						{
							func_8(214, 0, 0);
						}
						func_5();
					}
				}
				break;
		}
	}
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_12((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_9();
	}
}

void func_9()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;

	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					UNK_0xE7B2B6A56C007908(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		bVar9 = Global_111364;
	}
	else
	{
		bVar9 = Global_111378;
	}
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_COMPLETED"), bVar9, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + bVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	UNK_0x11F69E56D7B5F3C7(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_STORY_MISSIONS"), Global_111381, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_ODDJOBS"), Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_11(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_10() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_6();
				}
			}
		}
	}
}

int func_10()
{
	return Global_30768;
}

int func_11(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = UNK_0xBD47F720AB99D749(iParam0);
	if (bParam1 > iVar0)
	{
		return UNK_0x12ABC45272B87562(iParam0, bParam1);
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_13();
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

int func_13()
{
	return Global_1312745;
}

void func_14()
{
	func_237();
}

void func_15()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_16(23, bLocal_285);
		func_5();
		func_237();
	}
}

void func_16(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_33(iParam0))
	{
		func_32(iParam0, bParam1);
		if (!func_31(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_18(iParam0, bParam1) != 322)
		{
			func_8(func_18(iParam0, bParam1), vLocal_48.x, vLocal_48.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_17(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_17(7);
			}
			else
			{
				func_17(1);
			}
		}
	}
}

void func_17(int iParam0)
{
	Global_111624 = iParam0;
}

int func_18(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
		case 1:
			return 226;
		case 2:
			return 243;
		case 3:
			return 256;
		case 4:
			return 259;
		case 5:
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		case 6:
			return 265;
		case 7:
			return 218;
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		case 10:
			return 219;
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		case 12:
			return 254;
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		case 14:
			return 283;
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		case 16:
			return 252;
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
			{
				return 245;
			}
			break;
		case 18:
			return 253;
		case 19:
			return 215;
		case 20:
			return 216;
		case 21:
			return 251;
		case 22:
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		case 24:
			return 242;
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		case 8:
			return 255;
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		case 28:
			return 217;
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
			{
				return 231;
			}
			break;
		case 30:
			return 285;
		case 31:
			return 318;
		case 32:
			return 319;
		case 33:
			return 320;
	}
	return 322;
}

bool func_19(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}
	return true;
}

void func_20(int iParam0)
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

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_23();
	}
}

void func_23()
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

int func_24()
{
	func_25();
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

void func_25()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_29(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_28(UNK_0x16F2683693E537C9());
			if (func_27(iVar0) && (!func_26(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_27(Global_111638.f_2358.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_31(int iParam0)
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

void func_32(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_33(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 10;
			break;
		case 11:
			iVar0 = 4;
			break;
		case 13:
			iVar0 = 4;
			break;
		case 15:
			iVar0 = 2;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 22:
			iVar0 = 2;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 3;
			break;
		case 26:
			iVar0 = 2;
			break;
		case 27:
			iVar0 = 2;
			break;
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_34()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_35(Var0);
	return iVar16;
}

int func_35(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (UNK_0x12AB0310C2281427(&cParam0))
	{
		case joaat("RE_ABANDONEDCAR"):
			return 23;
		case joaat("RE_ACCIDENT"):
			return 0;
		case joaat("RE_ARRESTS"):
			return 15;
		case joaat("RE_ATMROBBERY"):
			return 1;
		case joaat("RE_BIKETHIEF"):
			return 26;
		case joaat("RE_BORDER"):
			return 29;
		case joaat("RE_BURIALS"):
			return 24;
		case joaat("RE_BUS_TOURS"):
			return 2;
		case joaat("RE_CARTHEFT"):
			return 17;
		case joaat("RE_CHASETHIEVES"):
			return 11;
		case joaat("RE_CRASHRESCUE"):
			return 16;
		case joaat("RE_CULTSHOOTOUT"):
			return 18;
		case joaat("RE_DEALGONEWRONG"):
			return 12;
		case joaat("RE_DOMESTIC"):
			return 3;
		case joaat("RE_DRUNKDRIVER"):
			return 27;
		case joaat("RE_GANG_INTIMIDATION"):
			return 20;
		case joaat("RE_GANGFIGHT"):
			return 19;
		case joaat("RE_GETAWAY_DRIVER"):
			return 4;
		case joaat("RE_HITCH_LIFT"):
			return 13;
		case joaat("RE_HOMELAND_SECURITY"):
			return 28;
		case joaat("RE_LURED"):
			return 7;
		case joaat("RE_MUGGINGS"):
			return 25;
		case joaat("RE_PAPARAZZI"):
			return 10;
		case joaat("RE_PRISONERLIFT"):
			return 22;
		case joaat("RE_PRISONVANBREAK"):
			return 21;
		case joaat("RE_SECURITYVAN"):
			return 9;
		case joaat("RE_SHOPROBBERY"):
			return 5;
		case joaat("RE_SNATCHED"):
			return 6;
		case joaat("RE_STAG_DO"):
			return 14;
		case joaat("RE_YETARIAN"):
			return 30;
		case joaat("RE_DUEL"):
			return 31;
		case joaat("RE_SEAPLANE"):
			return 32;
		case joaat("RE_MONKEY"):
			return 33;
	}
	return -1;
}

bool func_36(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (UNK_0x0DED1C1B8250FA57(2, 195) - 128);
	iVar1 = (UNK_0x0DED1C1B8250FA57(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return true;
	}
	return false;
}

void func_37(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_43(&(Global_111638.f_18098.f_175[iVar0 /*19*/].f_5)))
		{
			func_38(&(Global_111638.f_18098.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_43(&(Global_111638.f_18098.f_362[iVar1 /*3*/])))
		{
			func_38(&(Global_111638.f_18098.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	UNK_0x9911B88AFCF2F6D2();
}

void func_38(bool bParam0, float fParam1)
{
	if (func_43(bParam0))
	{
		func_39(bParam0, (func_41(bParam0) + fParam1));
	}
}

void func_39(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_40(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_40(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		iVar2 = UNK_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()) / 1000f);
}

float func_41(var uParam0)
{
	if (func_43(uParam0))
	{
		if (func_42(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_40(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_42(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_43(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, true);
}

int func_44(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;

	if (UNK_0xEB6A8945D1AC98A1(bParam0) || bParam2 == -99)
	{
		return 0;
	}
	Global_76432++;
	bVar5 = -99;
	bVar6 = -99;
	bVar7 = -99;
	bVar8 = -99;
	bVar9 = -99;
	iVar10 = UNK_0x134B62B726CEC8E6(bParam0);
	if (iParam5 == 0)
	{
		Global_76434[1 /*14*/] = { func_95(iVar10, iParam1, bParam2, -1) };
		if (!func_94(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		func_87(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("PLAYER_ONE"))
			{
				bVar5 = func_85(bParam0, 8);
				if (bVar5 != 9)
				{
					bVar5 = -99;
				}
			}
			bVar6 = func_85(bParam0, 9);
			if (iVar10 == joaat("PLAYER_ZERO"))
			{
				if (bVar6 >= 9 && bVar6 <= 14)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			else if (iVar10 == joaat("PLAYER_ONE"))
			{
				if (bVar6 >= 5 && bVar6 <= 10)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			else if (iVar10 == joaat("PLAYER_TWO"))
			{
				if ((bVar6 >= 9 && bVar6 <= 14) || (bVar6 >= 15 && bVar6 <= 16))
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			bVar7 = func_84(bParam0, 1);
			if (!func_83(iVar10, 14, bVar7, -1))
			{
				bVar7 = -99;
			}
			bVar8 = func_84(bParam0, 0);
			if (!func_82(iVar10, 14, bVar8, -1) && !func_81(iVar10, 14, bVar8, -1))
			{
				bVar8 = -99;
			}
			if (iVar10 == joaat("PLAYER_ONE"))
			{
				bVar9 = func_84(bParam0, 2);
			}
		}
		UNK_0xFFE16595F5CF81E9(bParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_76477 };
		}
		else
		{
			uVar11 = { func_77(iVar10, bParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_76434[1 /*14*/] = { func_95(iVar10, iVar0, uVar11[iVar0], -1) };
				if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_76494 };
						}
						else
						{
							uVar28 = { func_74(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_76434[1 /*14*/] = { func_95(iVar10, 14, uVar28[iVar1], -1) };
							func_65(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
							func_87(14);
							if (Global_76432 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									bVar3 = func_57(bParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (bVar3 != -99)
									{
										func_44(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("PLAYER_ONE") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_56(iVar10, 2, 20, &bVar4);
						}
						if (iParam4 == -1)
						{
							UNK_0x64F9F278AB9DCA2C(bParam0, func_55(iVar0), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, UNK_0xAA973E78065E07A0(bParam0, func_55(iVar0)));
						}
						else
						{
							UNK_0x64F9F278AB9DCA2C(bParam0, func_55(iVar0), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, iParam4);
						}
						func_87(iVar0);
						if (Global_76432 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								bVar3 = func_57(bParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (bVar3 != -99)
								{
									func_44(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1 /*14*/] = { func_95(iVar10, iVar0, func_54(bParam0, iVar0, -1), -1) };
				if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("PLAYER_ONE"))
						{
							if (func_53(bParam0, iVar10, &bVar4, 1))
							{
								func_44(bParam0, 2, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_77(iVar10, 0) };
						func_44(bParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_95(iVar10, 8, bVar5, -1) };
			if (bVar5 != -99)
			{
				if (func_51(iVar10, bParam2, 8, bVar5, &uVar11, &Var55))
				{
					func_44(bParam0, 8, bVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_95(iVar10, 9, bVar6, -1) };
			if (bVar6 != -99)
			{
				if (func_51(iVar10, bParam2, 9, bVar6, &uVar11, &Var55))
				{
					func_44(bParam0, 9, bVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_95(iVar10, 14, bVar7, -1) };
			if (bVar7 != -99)
			{
				if (func_51(iVar10, bParam2, 14, bVar7, &uVar11, &Var55))
				{
					func_44(bParam0, 14, bVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_95(iVar10, 14, bVar8, -1) };
			if (bVar8 != -99)
			{
				if (func_51(iVar10, bParam2, 14, bVar8, &uVar11, &Var55))
				{
					func_44(bParam0, 14, bVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_95(iVar10, 14, bVar9, -1) };
			if (bVar9 != -99)
			{
				if (func_51(iVar10, bParam2, 14, bVar9, &uVar11, &Var55))
				{
					func_44(bParam0, 14, bVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_74(iVar10, bParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1 /*14*/] = { func_95(iVar10, 14, uVar69[iVar1], -1) };
			func_65(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
			func_87(14);
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					bVar3 = func_57(bParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (bVar3 != -99)
					{
						func_44(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_65(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
		func_87(iParam1);
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				bVar3 = func_57(bParam0, iVar10, iParam1, bParam2, iVar2, 0);
				if (bVar3 != -99)
				{
					func_44(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			UNK_0x64F9F278AB9DCA2C(bParam0, func_55(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, UNK_0xAA973E78065E07A0(bParam0, func_55(iParam1)));
		}
		else
		{
			UNK_0x64F9F278AB9DCA2C(bParam0, func_55(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, iParam4);
		}
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				bVar3 = func_57(bParam0, iVar10, iParam1, bParam2, iVar2, 0);
				if (bVar3 != -99)
				{
					func_44(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_48(iVar10, iParam1, bParam2);
		}
	}
	if (Global_76432 == 1)
	{
		if (func_53(bParam0, iVar10, &bVar4, 0))
		{
			func_44(bParam0, 2, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_45(bParam0, iVar10, &bVar4))
		{
			func_44(bParam0, 1, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

bool func_45(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_47(iParam1);
	if (Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_46(bParam0, Global_111638.f_2358.f_539[iVar0 /*65*/].f_64, Global_111638.f_2358.f_539[iVar0 /*65*/].f_63))
		{
			*bParam2 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 = -99;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

bool func_46(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return false;
	}
	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	Global_76434[1 /*14*/] = { func_95(iVar0, iParam1, bParam2, -1) };
	if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_77(iVar0, bParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_46(bParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_74(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_46(bParam0, 14, uVar22[iVar3]))
							{
								bVar4 = false;
								while (bVar4 <= 19)
								{
									Global_76434[2 /*14*/] = { func_95(iVar0, 14, bVar4, -1) };
									if (Global_76434[2 /*14*/].f_12 == iVar3)
									{
										if (func_46(bParam0, 14, bVar4))
										{
											if (!func_51(iVar0, bParam2, 14, bVar4, &uVar5, &(Global_76434[2 /*14*/])))
											{
												return false;
											}
										}
									}
									bVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						bVar1 = func_85(bParam0, iVar2);
						Global_76434[2 /*14*/] = { func_95(iVar0, iVar2, bVar1, -1) };
						if (!func_51(iVar0, bParam2, iVar2, bVar1, &uVar5, &(Global_76434[2 /*14*/])))
						{
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_74(iVar0, bParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_46(bParam0, 14, uVar33[iVar32]))
			{
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14)
	{
		if (UNK_0x98F1B512A2CC07C5(bParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_3 && (UNK_0x22286A85EDEAEC56(bParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_4 || Global_76434[1 /*14*/].f_3 == -1))
		{
			return true;
		}
	}
	else if (Global_76434[1 /*14*/].f_3 == UNK_0x36C584991B4C183F(bParam0, func_55(iParam1)) && Global_76434[1 /*14*/].f_4 == UNK_0xDADA8E1DD0D0D9D9(bParam0, func_55(iParam1)))
	{
		return true;
	}
	return false;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 0;
		case joaat("PLAYER_ONE"):
			return 1;
		case joaat("PLAYER_TWO"):
			return 2;
		default:
			break;
	}
	return 145;
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		iVar0 = 4;
	}
	if (func_50(iParam0, 12, iVar0))
	{
		if (func_49(iParam0, iParam1, bParam2))
		{
			iVar1 = func_47(iParam0);
			if (iParam1 == 3)
			{
				Global_111638.f_2358.f_539.f_196[iVar1] = bParam2;
			}
			else if (iParam1 == 4)
			{
				Global_111638.f_2358.f_539.f_200[iVar1] = bParam2;
			}
		}
	}
}

bool func_49(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 47 && bParam2 <= 54)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 77 && bParam2 <= 84)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 14 && bParam2 <= 21)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 41 && bParam2 <= 56)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 18 && bParam2 <= 29)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 54 && bParam2 <= 69)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_50(int iParam0, int iParam1, bool bParam2)
{
	Global_76434[1 /*14*/] = { func_95(iParam0, iParam1, bParam2, -1) };
	return UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 2);
}

bool func_51(int iParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == bParam3)
	{
		return true;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return true;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((bParam3 == 0 || bParam3 == 1) || bParam3 == 2) || bParam3 == 3) || bParam3 == 4) || bParam3 == 5) || bParam3 == 6) || bParam3 == 7) || bParam3 == 8)
		{
			return true;
		}
	}
	if (bParam3 == -99 || uParam5->f_1 == -1)
	{
		return true;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_74(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == bParam3)
			{
				return true;
			}
			iVar10++;
		}
	}
	if (func_52(iParam0, iParam2, bParam3))
	{
		return true;
	}
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (func_83(iParam0, iParam2, bParam3, -1))
		{
			if ((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_82(iParam0, iParam2, bParam3, -1))
		{
			if (((((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 4) || bParam1 == 5) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 14) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_81(iParam0, iParam2, bParam3, -1))
		{
			if (((((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 4) || bParam1 == 5) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 14) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (func_83(iParam0, iParam2, bParam3, -1))
		{
			if ((bParam1 == 3 || bParam1 == 5) || bParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_82(iParam0, iParam2, bParam3, -1))
		{
			if ((((bParam1 == 3 || bParam1 == 5) || bParam1 == 7) || bParam1 == 8) || bParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (bParam3 == 9)
					{
						if (bParam1 == 8 || bParam1 == 21)
						{
							return true;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
				if (((bParam1 == 43 || bParam1 == 44) || bParam1 == 45) || bParam1 == 46)
				{
					if (bParam3 >= 5 && bParam3 <= 10)
					{
						return false;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((bParam1 == 43 || bParam1 == 44) || bParam1 == 45) || bParam1 == 46)
				{
					if (bParam3 >= 26 && bParam3 <= 39)
					{
						return false;
					}
				}
			}
			return true;
		}
		else if (func_81(iParam0, iParam2, bParam3, -1))
		{
			if (((((bParam1 == 3 || bParam1 == 3) || bParam1 == 5) || bParam1 == 7) || bParam1 == 8) || bParam1 == 21)
			{
				return false;
			}
			return true;
		}
		else if (iParam2 == 14)
		{
			if (bParam3 >= 159 && bParam3 <= 174)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (bParam1 == 2)
		{
			if (iParam2 == 14 && bParam3 == 0)
			{
				return true;
			}
		}
		if (func_83(iParam0, iParam2, bParam3, -1))
		{
			if (((((bParam1 == 1 || bParam1 == 2) || bParam1 == 6) || bParam1 == 8) || bParam1 == 45) || bParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_82(iParam0, iParam2, bParam3, -1))
		{
			if (((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 3) || bParam1 == 6) || bParam1 == 8) || bParam1 == 11) || bParam1 == 45) || bParam1 == 12)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_81(iParam0, iParam2, bParam3, -1))
		{
			if ((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 3) || bParam1 == 6) || bParam1 == 8) || bParam1 == 11) || bParam1 == 12)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

bool func_52(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 15)
					{
						return true;
					}
					break;
				case 9:
					if (bParam2 == 6)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 1 || bParam2 == 10)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 4)
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

bool func_53(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_47(iParam1);
	if (Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_46(bParam0, Global_111638.f_2358.f_539[iVar0 /*65*/].f_61, Global_111638.f_2358.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*bParam2 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 = -99;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

int func_54(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (iParam1 == 12)
		{
			bVar0 = false;
			while (bVar0 <= 53)
			{
				if (func_46(bParam0, iParam1, bVar0))
				{
					return bVar0;
				}
				bVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			bVar1 = false;
			while (bVar1 <= 19)
			{
				if (func_46(bParam0, iParam1, bVar1))
				{
					return bVar1;
				}
				bVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (bParam2 == -1)
			{
			}
			else
			{
				return func_84(bParam0, bParam2);
			}
		}
		else
		{
			return func_85(bParam0, iParam1);
		}
	}
	return -99;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 6:
			return 6;
		case 5:
			return 5;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 1:
			return 1;
		case 7:
			return 7;
		case 11:
			return 11;
	}
	return 0;
}

int func_56(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	*bParam3 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 7 || bParam2 == 23)
					{
						*bParam3 = 1;
					}
					break;
				case 9:
					if (bParam2 == 8 || (bParam2 >= 9 && bParam2 <= 14))
					{
						*bParam3 = 1;
					}
					break;
				case 10:
					if (bParam2 >= 44 && bParam2 <= 47)
					{
						*bParam3 = 1;
					}
					break;
				case 14:
					if ((((((bParam2 >= 31 && bParam2 <= 32) || (bParam2 >= 33 && bParam2 <= 34)) || (bParam2 >= 35 && bParam2 <= 36)) || bParam2 == 37) || (bParam2 >= 40 && bParam2 <= 41)) || bParam2 == 46)
					{
						*bParam3 = 1;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 2:
					if (bParam2 == 20)
					{
						*bParam3 = 20;
					}
					break;
				case 8:
					if (bParam2 == 4)
					{
						*bParam3 = 19;
					}
					break;
				case 9:
					if (bParam2 >= 5 && bParam2 <= 10)
					{
						*bParam3 = 19;
					}
					break;
				case 10:
					if (bParam2 >= 47 && bParam2 <= 50)
					{
						*bParam3 = 19;
					}
					break;
				case 14:
					if (((((bParam2 >= 26 && bParam2 <= 27) || (bParam2 >= 28 && bParam2 <= 29)) || (bParam2 >= 30 && bParam2 <= 31)) || bParam2 == 32) || (bParam2 >= 35 && bParam2 <= 36))
					{
						*bParam3 = 19;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 7)
					{
						*bParam3 = 2;
					}
					break;
				case 9:
					if ((bParam2 >= 9 && bParam2 <= 14) || (bParam2 >= 15 && bParam2 <= 16))
					{
						*bParam3 = 2;
					}
					break;
				case 10:
					if (bParam2 >= 29 && bParam2 <= 32)
					{
						*bParam3 = 2;
					}
					break;
				case 14:
					if ((((((bParam2 >= 47 && bParam2 <= 48) || (bParam2 >= 49 && bParam2 <= 50)) || (bParam2 >= 51 && bParam2 <= 52)) || bParam2 == 53) || (bParam2 >= 56 && bParam2 <= 57)) || bParam2 == 62)
					{
						*bParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*bParam3 != -99)
	{
		iVar0 = func_47(iParam0);
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 = bParam2;
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_57(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_85(bParam0, 1);
				iVar0 = func_64(iParam1, bParam3, iVar1);
				break;
			case 1:
				bVar2 = func_85(bParam0, 2);
				iVar0 = func_64(iParam1, bVar2, bParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_56(iParam1, iParam2, bParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_63(iParam1, iParam2, bParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_62(iParam1, bParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("PLAYER_ZERO"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (bParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (bParam3 >= 2 && bParam3 <= 7)
								{
									if (!func_61(bParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((bParam3 >= 8 && bParam3 <= 17) || (bParam3 >= 18 && bParam3 <= 27)) || (bParam3 >= 28 && bParam3 <= 43))
								{
									if (!func_61(bParam0, 3, 135, 150))
									{
										iVar0 = func_60(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (bParam3 >= 17 && bParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (bParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((bParam3 >= 44 && bParam3 <= 59) || (bParam3 >= 135 && bParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (bParam3 >= 36 && bParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("PLAYER_ONE"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (bParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (bParam3 >= 47 && bParam3 <= 62)
								{
									if (!func_61(bParam0, 3, 209, 222))
									{
										iVar0 = func_60(iParam1, 3, 209, 222);
									}
								}
								else if ((bParam3 >= 1 && bParam3 <= 4) || (bParam3 >= 5 && bParam3 <= 8))
								{
									if (!func_61(bParam0, 3, 243, 258))
									{
										if (bParam3 == 1 || bParam3 == 5)
										{
											iVar0 = func_60(iParam1, 3, 243, 246);
										}
										else if (bParam3 == 2 || bParam3 == 6)
										{
											iVar0 = func_60(iParam1, 3, 247, 250);
										}
										else if (bParam3 == 3 || bParam3 == 7)
										{
											iVar0 = func_60(iParam1, 3, 251, 254);
										}
										else if (bParam3 == 4 || bParam3 == 8)
										{
											iVar0 = func_60(iParam1, 3, 255, 258);
										}
									}
								}
								else if (bParam3 == 41 || bParam3 == 42)
								{
									if (!func_61(bParam0, 3, 176, 191) && !func_61(bParam0, 3, 227, 242))
									{
										iVar0 = func_60(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								bVar5 = bParam3;
								bVar4 = func_85(bParam0, 3);
							}
							else if (iParam2 == 3)
							{
								bVar4 = bParam3;
								bVar5 = func_85(bParam0, 11);
								bVar5 = func_59(iParam1, bVar4, bVar5, 0);
							}
							iVar3 = func_85(bParam0, 8);
							if (((bVar5 >= 5 && bVar5 <= 8) || (bVar5 >= 25 && bVar5 <= 40)) || (bVar5 >= 42 && bVar5 <= 43))
							{
								if (!func_58(joaat("PLAYER_ONE"), iVar3, bVar5, bVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (bParam3 >= 209 && bParam3 <= 222)
							{
							}
							else if (((bParam3 >= 176 && bParam3 <= 191) || (bParam3 >= 227 && bParam3 <= 242)) || (bParam3 >= 243 && bParam3 <= 258))
							{
								iVar7 = func_85(bParam0, 8);
								bVar8 = func_85(bParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_59(iParam1, bParam3, bVar8, 0);
								}
								else
								{
									iVar0 = func_59(iParam1, bParam3, bVar8, 1);
								}
							}
							else if (bParam3 >= 41 && bParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (bParam3 >= 223 && bParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((bParam3 >= 27 && bParam3 <= 42) || (bParam3 >= 43 && bParam3 <= 58)) || (bParam3 >= 59 && bParam3 <= 74))
							{
								bVar9 = func_85(bParam0, 11);
								iVar0 = func_59(iParam1, -99, bVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("PLAYER_TWO"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}
	return iVar0;
}

bool func_58(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			break;
		case joaat("PLAYER_ONE"):
			*iParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (bParam2 != -99)
				{
					if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
					{
					}
					else
					{
						if (bParam2 >= 42 && bParam2 <= 43)
						{
							if (bParam3 >= 176 && bParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*iParam4 = (59 + iVar0);
							}
							else if (bParam3 >= 227 && bParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*iParam4 = (43 + iVar0);
							}
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (((bParam3 >= 227 && bParam3 <= 242) || (bParam3 >= 176 && bParam3 <= 191)) || (bParam3 >= 243 && bParam3 <= 258))
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (bParam2 != -99)
				{
					if (bParam2 >= 42 && bParam2 <= 43)
					{
					}
					else
					{
						if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (bParam3 >= 227 && bParam3 <= 242)
					{
					}
					else
					{
						if (bParam3 >= 176 && bParam3 <= 191)
						{
							if (bParam2 >= 42 && bParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*iParam4 = (59 + iVar0);
							}
						}
						return false;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (bParam2 != -99)
				{
					if (bParam2 >= 42 && bParam2 <= 43)
					{
					}
					else
					{
						if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (bParam3 >= 176 && bParam3 <= 191)
					{
					}
					else
					{
						if (bParam3 >= 227 && bParam3 <= 242)
						{
							if (bParam2 >= 42 && bParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*iParam4 = (43 + iVar0);
							}
						}
						else if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
			}
			break;
		case joaat("PLAYER_TWO"):
			if (iParam1 == 12)
			{
				if (bParam3 != 241)
				{
					return false;
				}
			}
			break;
	}
	return true;
}

bool func_59(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1 >= 243 && bParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return true;
		}
		else
		{
			return 5;
		}
	}
	else if (bParam1 >= 247 && bParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (bParam1 >= 251 && bParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (bParam1 >= 255 && bParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (bParam1 >= 255 && bParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((bParam1 >= 176 && bParam1 <= 191) || (bParam1 >= 227 && bParam1 <= 242))
	{
		if (bParam2 >= 9 && bParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return bParam2;
			}
			else
			{
				iVar0 = (bParam2 - 9);
				bParam2 = (25 + iVar0);
				return bParam2;
			}
		}
		else if (bParam2 >= 25 && bParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (bParam2 - 25);
				bParam2 = (9 + iVar0);
				return bParam2;
			}
			else
			{
				return bParam2;
			}
		}
		else if (bParam2 == 41 || bParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				bParam2 = func_60(iParam0, 11, 9, 24);
			}
			else
			{
				bParam2 = func_60(iParam0, 11, 25, 40);
			}
			if (bParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return bParam2;
			}
		}
	}
	else if (bParam2 >= 1 && bParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return bParam2;
		}
		else
		{
			iVar0 = (bParam2 - 1);
			bParam2 = (5 + iVar0);
			return bParam2;
		}
	}
	else if (bParam2 >= 5 && bParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (bParam2 - 5);
			bParam2 = (1 + iVar0);
			return bParam2;
		}
		else
		{
			return bParam2;
		}
	}
	else if (bParam2 >= 9 && bParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return bParam2;
		}
		else
		{
			iVar0 = (bParam2 - 9);
			bParam2 = (25 + iVar0);
			return bParam2;
		}
	}
	else if (bParam2 >= 25 && bParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (bParam2 - 25);
			bParam2 = (9 + iVar0);
			return bParam2;
		}
		else
		{
			return bParam2;
		}
	}
	else if (bParam2 == 41 || bParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

bool func_60(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		bVar1 = iVar0;
		if (func_50(iParam0, iParam1, bVar1))
		{
			return bVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_61(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_85(bParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return true;
	}
	return false;
}

bool func_62(int iParam0, bool bParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if ((((((((((((((((((bParam1 == 16 || bParam1 == 17) || bParam1 == 21) || bParam1 == 22) || bParam1 == 32) || (bParam1 >= 34 && bParam1 <= 39)) || (bParam1 >= 41 && bParam1 <= 45)) || bParam1 == 46) || (bParam1 >= 47 && bParam1 <= 54)) || (bParam1 >= 55 && bParam1 <= 70)) || (bParam1 >= 72 && bParam1 <= 79)) || bParam1 == 80) || (bParam1 >= 81 && bParam1 <= 83)) || (bParam1 >= 84 && bParam1 <= 87)) || bParam1 == 88) || (bParam1 >= 89 && bParam1 <= 91)) || bParam1 == 95) || (bParam1 >= 96 && bParam1 <= 111)) || bParam1 == 112)
			{
				*iParam2 = 6;
				return true;
			}
			break;
		case joaat("PLAYER_ONE"):
			if ((((((bParam1 == 12 || (bParam1 >= 14 && bParam1 <= 21)) || bParam1 == 32) || bParam1 == 52) || (bParam1 >= 69 && bParam1 <= 70)) || bParam1 == 71) || (bParam1 >= 72 && bParam1 <= 77))
			{
				*iParam2 = 17;
				return true;
			}
			break;
		case joaat("PLAYER_TWO"):
			if (((((((((((((((bParam1 == 4 || bParam1 == 5) || bParam1 == 6) || bParam1 == 7) || bParam1 == 14) || (bParam1 >= 18 && bParam1 <= 29)) || bParam1 == 31) || bParam1 == 32) || bParam1 == 33) || bParam1 == 34) || (bParam1 >= 35 && bParam1 <= 42)) || (bParam1 >= 43 && bParam1 <= 53)) || (bParam1 >= 54 && bParam1 <= 61)) || (bParam1 >= 71 && bParam1 <= 80)) || (bParam1 >= 81 && bParam1 <= 90)) || (bParam1 >= 94 && bParam1 <= 103))
			{
				*iParam2 = 8;
				return true;
			}
			break;
	}
	return false;
}

int func_63(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 10:
					if (bParam2 >= 44 && bParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((bParam2 >= 31 && bParam2 <= 32) || (bParam2 >= 33 && bParam2 <= 34)) || (bParam2 >= 35 && bParam2 <= 36)) || bParam2 == 37) || (bParam2 >= 38 && bParam2 <= 39)) || (bParam2 >= 40 && bParam2 <= 41)) || (bParam2 >= 42 && bParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 10:
					if (bParam2 >= 47 && bParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((bParam2 >= 26 && bParam2 <= 27) || (bParam2 >= 28 && bParam2 <= 29)) || (bParam2 >= 30 && bParam2 <= 31)) || bParam2 == 32) || (bParam2 >= 35 && bParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 9:
					if (bParam2 >= 15 && bParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				case 10:
					if (bParam2 >= 29 && bParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((bParam2 >= 47 && bParam2 <= 48) || (bParam2 >= 49 && bParam2 <= 50)) || (bParam2 >= 51 && bParam2 <= 52)) || bParam2 == 53) || (bParam2 >= 54 && bParam2 <= 55)) || (bParam2 >= 56 && bParam2 <= 57)) || (bParam2 >= 58 && bParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_47(iParam0);
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 = bParam2;
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (bParam1 == 1)
			{
				if (bParam2 == 0)
				{
					return 1;
				}
				else if (bParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam2 == 0)
			{
				return 0;
			}
			else if (bParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("PLAYER_ONE"):
			if (bParam1 >= 0 && bParam1 <= 15)
			{
				if (bParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam1 >= 16 && bParam1 <= 17)
			{
				if (bParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (bParam1 == 18)
			{
				if (bParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (bParam1 == 19)
			{
				if (bParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (bParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		case joaat("PLAYER_TWO"):
			if (bParam1 == 2)
			{
				if (bParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam1 == 3)
			{
				if (bParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (bParam1 == 8)
			{
				return 5;
			}
			else if (bParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_65(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam2 == -1)
	{
		UNK_0x3BFC3B9ADD2EE7B7(bParam0, bParam1);
		if (bParam1 == 0)
		{
			UNK_0x4E885A246A9D983A(bParam0, 34, false);
			UNK_0x4E885A246A9D983A(bParam0, 36, false);
		}
	}
	else
	{
		UNK_0x9A28E8CB86CD4694(bParam0, bParam1, iParam2, iParam3, UNK_0x8CD06866876216F2());
		if (bParam1 == 0)
		{
			iVar0 = func_70(bParam0, iParam2, iParam3, bParam1);
			if (func_66(UNK_0x134B62B726CEC8E6(bParam0), 14, iVar0, UNK_0xD1BC07002824FE76(bParam0, false, iParam2, iParam3)))
			{
				UNK_0x4E885A246A9D983A(bParam0, 34, true);
				UNK_0x4E885A246A9D983A(bParam0, 36, true);
			}
			else
			{
				UNK_0x4E885A246A9D983A(bParam0, 34, false);
				UNK_0x4E885A246A9D983A(bParam0, 36, false);
			}
		}
	}
}

bool func_66(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam3 == -1)
					{
						bParam3 = func_67(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && UNK_0x1A5A491D253EA7BA(bParam3, joaat("HELMET"), true)))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam3 == -1)
					{
						bParam3 = func_67(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && UNK_0x1A5A491D253EA7BA(bParam3, joaat("HELMET"), true)))
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

int func_67(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = (bParam1 - func_69(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			UNK_0x4F79808059300187(iVar17, &Var0);
			if (!UNK_0x232048AB4B0E0259(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var21);
		iVar39 = 0;
		iVar40 = (bParam1 - func_68(iParam0, func_55(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && bParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 0, -1, func_55(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			UNK_0xC578687D5A643830(iVar38, &Var21);
			if (!UNK_0x232048AB4B0E0259(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = bParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_68(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 5;
				case 2:
					return 6;
				case 3:
					return 181;
				case 4:
					return 113;
				case 5:
					return 14;
				case 6:
					return 99;
				case 7:
					return 1;
				case 8:
					return 24;
				case 9:
					return 20;
				case 10:
					return 48;
				case 11:
					return 45;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 0:
					return 10;
				case 1:
					return 5;
				case 2:
					return 21;
				case 3:
					return 318;
				case 4:
					return 117;
				case 5:
					return 7;
				case 6:
					return 134;
				case 7:
					return 1;
				case 8:
					return 77;
				case 9:
					return 12;
				case 10:
					return 53;
				case 11:
					return 63;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 6;
				case 2:
					return 9;
				case 3:
					return 242;
				case 4:
					return 104;
				case 5:
					return 7;
				case 6:
					return 84;
				case 7:
					return 1;
				case 8:
					return 18;
				case 9:
					return 17;
				case 10:
					return 33;
				case 11:
					return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 26;
				case 2:
					return 91;
				case 3:
					return 16;
				case 4:
					return 256;
				case 5:
					return 9;
				case 6:
					return 256;
				case 7:
					return 92;
				case 8:
					return 241;
				case 9:
					return 46;
				case 10:
					return 7;
				case 11:
					return 237;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 26;
				case 2:
					return 92;
				case 3:
					return 16;
				case 4:
					return 256;
				case 5:
					return 9;
				case 6:
					return 256;
				case 7:
					return 55;
				case 8:
					return 136;
				case 9:
					return 36;
				case 10:
					return 6;
				case 11:
					return 256;
			}
			break;
	}
	return -99;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 113;
		case joaat("PLAYER_ONE"):
			return 175;
		case joaat("PLAYER_TWO"):
			return 155;
	}
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			return 327;
		case joaat("MP_F_FREEMODE_01"):
			return 327;
	}
	return -99;
}

int func_70(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1)
	{
		return func_73(bParam3);
	}
	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	iVar1 = UNK_0xD1BC07002824FE76(bParam0, bParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("MP_M_FREEMODE_01"))
		{
			return func_72(UNK_0x134B62B726CEC8E6(bParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("MP_F_FREEMODE_01"))
		{
			return func_72(UNK_0x134B62B726CEC8E6(bParam0), iVar1, 14, 4);
		}
	}
	iVar2 = UNK_0xB0D40A53430D217C(bParam0, bParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = UNK_0xFEDCD54A497F3495(bParam0, bParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_71(bParam0, bParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_73(bParam3);
}

int func_71(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	switch (iVar0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 58;
				case 2:
					return 112;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 82;
				case 2:
					return 158;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 88;
				case 2:
					return 154;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 155;
				case 6:
					return 319;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 155;
				case 6:
					return 319;
			}
			break;
	}
	return -99;
}

int func_72(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			UNK_0x4F79808059300187(iVar17, &Var0);
			if (!UNK_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_69(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var20);
		iVar38 = 0;
		iVar39 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 0, -1, func_55(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			UNK_0xC578687D5A643830(iVar37, &Var20);
			if (!UNK_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_68(iParam0, func_55(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_73(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
	}
	return 0;
}

struct<10> func_74(int iParam0, bool bParam1)
{
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 31:
					func_76(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_76(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_76(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_76(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_76(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_76(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_76(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_76(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_76(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_76(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_76(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_75(&Var1, iParam0, bParam1, 10);
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 31:
					func_76(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_76(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_76(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_76(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_76(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_76(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_76(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_76(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_76(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_76(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_75(&Var1, iParam0, bParam1, 9);
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 31:
					func_76(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_76(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_76(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_76(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_76(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_76(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_76(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_76(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_76(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_76(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_75(&Var1, iParam0, bParam1, 9);
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_76(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_76(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_76(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_76(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_76(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_76(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_76(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_76(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_76(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_76(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_76(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					func_76(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					func_76(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					func_76(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					func_76(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 14:
					func_76(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					func_76(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					func_76(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					func_76(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					func_76(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					func_76(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					func_76(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					func_76(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					func_76(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					func_76(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 24:
					func_76(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_75(&Var1, iParam0, bParam1, 25);
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_76(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_76(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_76(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_76(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_76(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_76(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_76(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_76(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_76(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_76(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_76(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					func_76(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					func_76(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					func_76(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					func_76(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				case 14:
					func_76(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					func_76(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					func_76(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					func_76(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					func_76(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					func_76(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					func_76(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					func_76(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					func_76(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					func_76(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_75(&Var1, iParam0, bParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_75(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (bParam2 != 0 && bParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		bVar0 = false;
		if (iParam1 == joaat("PLAYER_ZERO"))
		{
			bVar0 = false;
		}
		else if (iParam1 == joaat("PLAYER_ONE"))
		{
			bVar0 = true;
		}
		else if (iParam1 == joaat("PLAYER_TWO"))
		{
			bVar0 = 2;
		}
		else if (iParam1 == joaat("MP_M_FREEMODE_01"))
		{
			bVar0 = 3;
		}
		else if (iParam1 == joaat("MP_F_FREEMODE_01"))
		{
			bVar0 = 4;
		}
		UNK_0xEF5FB5FCF95E0C4D(bParam2, &Var1);
		if (!UNK_0x232048AB4B0E0259(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (UNK_0x5D149814CB08088A(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						(*iParam0)[vVar16.z] = func_72(iParam1, vVar16.x, 14, bVar0);
					}
					else if (vVar16.y != -1)
					{
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_77(int iParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 0:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						func_80(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_80(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				case 1:
					func_80(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				case 2:
					func_80(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				case 3:
					func_80(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				case 4:
					func_80(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				case 5:
					func_80(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[0], Global_111638.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				case 6:
					func_80(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					func_80(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 8:
					func_80(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					func_80(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_80(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				case 11:
					func_80(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				case 12:
					func_80(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_80(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_80(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				case 15:
					func_80(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				case 16:
					func_80(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_80(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_80(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				case 19:
					func_80(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_80(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_80(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					func_80(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					func_80(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					func_80(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					func_80(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					func_80(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					func_80(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					func_80(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					func_80(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					func_80(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					func_80(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				case 32:
					func_80(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					func_80(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					func_80(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				case 35:
					func_80(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					func_80(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					func_80(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					func_80(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_80(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_80(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_80(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_80(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_80(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					func_80(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					func_80(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 46:
					func_80(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					func_80(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 48:
					func_80(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 49:
					func_80(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 50:
					func_80(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				case 51:
					func_80(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 52:
					func_80(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				default:
					func_78(&Var1, iParam0, bParam1, 53);
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 0:
					func_80(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					func_80(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 2:
					func_80(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[1], Global_111638.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				case 3:
					func_80(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				case 4:
					func_80(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				case 5:
					func_80(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 6:
					func_80(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					func_80(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				case 8:
					func_80(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				case 9:
					func_80(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_80(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					func_80(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 12:
					func_80(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_80(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_80(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					func_80(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					func_80(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_80(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_80(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				case 19:
					func_80(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_80(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_80(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				case 22:
					func_80(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				case 23:
					func_80(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				case 24:
					func_80(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				case 25:
					func_80(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				case 26:
					func_80(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				case 27:
					func_80(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				case 28:
					func_80(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				case 29:
					func_80(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				case 30:
					func_80(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				case 31:
					func_80(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				case 32:
					func_80(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				case 33:
					func_80(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				case 34:
					func_80(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				case 35:
					func_80(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				case 36:
					func_80(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				case 37:
					func_80(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				case 38:
					func_80(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_80(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_80(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_80(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_80(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_80(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				case 44:
					func_80(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 45:
					func_80(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				case 46:
					func_80(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				default:
					func_78(&Var1, iParam0, bParam1, 47);
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 0:
					func_80(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					func_80(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				case 2:
					func_80(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				case 3:
					func_80(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				case 4:
					func_80(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[2], Global_111638.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 5:
					func_80(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				case 6:
					func_80(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				case 7:
					func_80(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				case 8:
					func_80(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					func_80(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_80(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					func_80(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				case 12:
					func_80(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_80(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_80(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					func_80(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					func_80(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_80(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_80(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 19:
					func_80(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_80(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_80(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					func_80(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					func_80(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					func_80(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					func_80(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					func_80(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					func_80(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					func_80(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					func_80(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					func_80(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					func_80(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 32:
					func_80(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					func_80(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					func_80(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 35:
					func_80(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					func_80(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					func_80(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					func_80(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_80(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_80(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_80(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_80(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_80(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					func_80(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					func_80(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 46:
					func_80(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					func_80(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				default:
					func_78(&Var1, iParam0, bParam1, 48);
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					func_80(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				case 1:
					func_80(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				case 2:
					func_80(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				case 3:
					func_80(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				case 4:
					func_80(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				case 5:
					func_80(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				case 6:
					func_80(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				case 7:
					func_80(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				case 8:
					func_80(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				case 9:
					func_80(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				case 10:
					func_80(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				case 11:
					func_80(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				case 12:
					func_80(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				case 13:
					func_80(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				case 14:
					func_80(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				case 15:
					func_80(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				case 16:
					func_80(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				case 17:
					func_80(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				case 18:
					func_80(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				case 19:
					func_80(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				case 20:
					func_80(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				case 21:
					func_80(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				case 22:
					func_80(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				case 23:
					func_80(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				case 24:
					func_80(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				case 25:
					func_80(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				default:
					func_78(&Var1, iParam0, bParam1, 26);
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					func_80(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				case 1:
					func_80(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				case 2:
					func_80(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				case 3:
					func_80(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				case 4:
					func_80(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				case 5:
					func_80(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				case 6:
					func_80(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				case 7:
					func_80(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				case 8:
					func_80(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				case 9:
					func_80(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				case 10:
					func_80(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				case 11:
					func_80(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				case 12:
					func_80(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				case 13:
					func_80(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				case 14:
					func_80(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				case 15:
					func_80(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				case 16:
					func_80(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				case 17:
					func_80(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				case 18:
					func_80(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				case 19:
					func_80(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				case 20:
					func_80(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				case 21:
					func_80(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				case 22:
					func_80(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				case 23:
					func_80(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				case 24:
					func_80(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				case 25:
					func_80(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				case 26:
					func_80(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				case 27:
					func_80(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				default:
					func_78(&Var1, iParam0, bParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_78(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	bVar0 = false;
	if (iParam1 == joaat("PLAYER_ZERO"))
	{
		bVar0 = false;
		(*uParam0)[13] = (10 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("PLAYER_ONE"))
	{
		bVar0 = true;
		(*uParam0)[13] = (9 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("PLAYER_TWO"))
	{
		bVar0 = 2;
		(*uParam0)[13] = (9 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("MP_M_FREEMODE_01"))
	{
		bVar0 = 3;
	}
	else if (iParam1 == joaat("MP_F_FREEMODE_01"))
	{
		bVar0 = 4;
	}
	UNK_0x84997C8C8A5848DD(bVar0, 0);
	UNK_0xA69F810DF7EA02E6((bParam2 - iParam3), &Var1);
	if (!UNK_0x232048AB4B0E0259(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (UNK_0xD00B813D5424DD2E(Var1.f_1, iVar36, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						UNK_0x65C0659496B1CC14(&Var19);
						UNK_0xFDEBA3FD0BF0D4AC(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_79(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_79(vVar16.z)] = func_72(iParam1, vVar16.x, func_79(vVar16.z), bVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					(*uParam0)[func_79(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 6:
			return 6;
		case 5:
			return 5;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 1:
			return 1;
		case 7:
			return 7;
		case 11:
			return 11;
	}
	return 0;
}

void func_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

bool func_81(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 == 16)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 14:
					if ((bParam2 == 40 || (bParam2 >= 41 && bParam2 <= 56)) || (bParam2 >= 64 && bParam2 <= 79))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 14:
					if ((bParam2 >= 17 && bParam2 <= 18) || (bParam2 >= 71 && bParam2 <= 86))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_67(iParam0, bParam2, 14, 3);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), true) || UNK_0x1A5A491D253EA7BA(func_67(iParam0, bParam2, 14, 3), -1842686353, true));
					}
					break;
				case 1:
					if (bParam2 >= 26)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_67(iParam0, bParam2, 1, 3);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(func_67(iParam0, bParam2, 1, 3), -1842686353, false));
					}
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_67(iParam0, bParam2, 14, 4);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), true) || UNK_0x1A5A491D253EA7BA(func_67(iParam0, bParam2, 14, 4), -1842686353, true));
					}
					break;
				case 1:
					if (bParam2 >= 26)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_67(iParam0, bParam2, 1, 4);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(func_67(iParam0, bParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

bool func_82(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (iParam1 == 6)
		{
			if (bParam2 == 10)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((bParam2 == 9 || bParam2 == 7) || bParam2 == 23)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (bParam2 >= 9 && bParam2 <= 14)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((bParam2 == 12 || bParam2 == 59) || bParam2 == 60) || bParam2 == 31) || bParam2 == 32) || bParam2 == 33) || bParam2 == 34) || bParam2 == 35) || bParam2 == 36) || bParam2 == 37) || bParam2 == 38) || bParam2 == 39) || bParam2 == 40) || bParam2 == 41) || (bParam2 >= 42 && bParam2 <= 44)) || bParam2 == 54) || bParam2 == 55)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (iParam1 == 2)
		{
			if (bParam2 == 20)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((bParam2 == 3 || bParam2 == 5) || bParam2 == 9)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (bParam2 >= 5 && bParam2 <= 10)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((bParam2 == 82 || bParam2 == 10) || bParam2 == 26) || bParam2 == 27) || bParam2 == 28) || bParam2 == 29) || bParam2 == 30) || bParam2 == 31) || bParam2 == 32) || bParam2 == 33) || bParam2 == 34) || bParam2 == 35) || bParam2 == 36) || (bParam2 >= 37 && bParam2 <= 39))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (iParam1 == 8)
		{
			if (bParam2 == 14 || bParam2 == 7)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (((bParam2 == 8 || (bParam2 >= 9 && bParam2 <= 14)) || bParam2 == 15) || bParam2 == 16)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((bParam2 == 88 || bParam2 == 12) || bParam2 == 47) || bParam2 == 48) || bParam2 == 49) || bParam2 == 50) || bParam2 == 51) || bParam2 == 52) || bParam2 == 53) || bParam2 == 54) || bParam2 == 55) || bParam2 == 56) || bParam2 == 57) || (bParam2 >= 58 && bParam2 <= 60))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_M_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > 0)
			{
				if (bParam2 >= 26)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_67(iParam0, bParam2, 1, 3);
					}
					if (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAIR_SHRINK"), false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > 0)
			{
				if (bParam2 >= 26)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_67(iParam0, bParam2, 1, 4);
					}
					if (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAIR_SHRINK"), false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_83(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (iParam1 == 14)
			{
				if ((((((((bParam2 == 58 || bParam2 == 61) || (bParam2 >= 62 && bParam2 <= 69)) || (bParam2 >= 70 && bParam2 <= 79)) || (bParam2 >= 80 && bParam2 <= 89)) || bParam2 == 90) || (bParam2 >= 91 && bParam2 <= 102)) || (bParam2 >= 103 && bParam2 <= 110)) || bParam2 == 111)
				{
					return true;
				}
			}
			break;
		case joaat("PLAYER_ONE"):
			if (iParam1 == 14)
			{
				if (((((((((((bParam2 >= 83 && bParam2 <= 92) || bParam2 == 93) || bParam2 == 94) || (bParam2 >= 95 && bParam2 <= 101)) || (bParam2 >= 102 && bParam2 <= 111)) || (bParam2 >= 112 && bParam2 <= 121)) || (bParam2 >= 122 && bParam2 <= 131)) || (bParam2 >= 132 && bParam2 <= 139)) || (bParam2 >= 140 && bParam2 <= 149)) || (bParam2 >= 150 && bParam2 <= 156)) || bParam2 == 157)
				{
					return true;
				}
			}
			break;
		case joaat("PLAYER_TWO"):
			if (iParam1 == 14)
			{
				if (((((((((bParam2 == 89 || (bParam2 >= 90 && bParam2 <= 99)) || (bParam2 >= 100 && bParam2 <= 109)) || bParam2 == 111) || bParam2 == 112) || (bParam2 >= 113 && bParam2 <= 122)) || (bParam2 >= 123 && bParam2 <= 132)) || (bParam2 >= 133 && bParam2 <= 142)) || (bParam2 >= 143 && bParam2 <= 152)) || bParam2 == 153)
				{
					return true;
				}
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_67(iParam0, bParam2, 14, 3);
					}
					return UNK_0x1A5A491D253EA7BA(bParam3, joaat("GLASSES"), true);
				}
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_67(iParam0, bParam2, 14, 4);
					}
					return UNK_0x1A5A491D253EA7BA(bParam3, joaat("GLASSES"), true);
				}
			}
			break;
	}
	return false;
}

int func_84(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return -99;
	}
	iVar0 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
	if (iVar0 == -1)
	{
		return func_73(bParam1);
	}
	iVar1 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	return func_70(bParam0, iVar0, iVar1, bParam1);
}

int func_85(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return -99;
	}
	bVar0 = func_55(iParam1);
	iVar1 = UNK_0x36C584991B4C183F(bParam0, bVar0);
	iVar2 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bVar0);
	return func_86(bParam0, iVar1, iVar2, iParam1);
}

int func_86(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = func_55(iParam3);
	iVar1 = UNK_0xD2C792E5A65B6BF1(bParam0, bVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = UNK_0x0F84621831DD8D8A(bParam0, bVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_87(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true) && !UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		func_93(iParam0, Global_76434[1 /*14*/].f_5, Global_76434[1 /*14*/].f_2, 2, Global_76434[1 /*14*/].f_1, 1, 0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true) && UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_88(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_88(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_88(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_88(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_92(bParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3))
	{
		bVar3 = func_91(iVar2, iVar0, 0);
		UNK_0x5D96D8530B3D0904(&bVar3, bVar1);
		func_89(iVar2, bVar3, iVar0, 1, 0);
	}
}

void func_89(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_90(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_90(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_92(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*iParam2 = 971;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*iParam2 = 971;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*iParam2 = 971;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*iParam2 = 971;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*iParam2 = 971;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*iParam2 = 971;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*iParam2 = 971;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*iParam2 = 971;
						*bParam3 = 26;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*iParam2 = 935;
						*bParam3 = 0;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*iParam2 = 935;
						*bParam3 = 1;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*iParam2 = 935;
						*bParam3 = 2;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*iParam2 = 935;
						*bParam3 = 3;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*iParam2 = 935;
						*bParam3 = 4;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*iParam2 = 935;
						*bParam3 = 5;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*iParam2 = 935;
						*bParam3 = 7;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*iParam2 = 935;
						*bParam3 = 8;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*iParam2 = 935;
						*bParam3 = 11;
						return true;
				}
				break;
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*iParam2 = 1023;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*iParam2 = 1023;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*iParam2 = 1023;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*iParam2 = 1023;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*iParam2 = 1023;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*iParam2 = 1023;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*iParam2 = 1023;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*iParam2 = 1023;
						*bParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*iParam2 = 971;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*iParam2 = 971;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*iParam2 = 971;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*iParam2 = 971;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*iParam2 = 971;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*iParam2 = 971;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*iParam2 = 971;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*iParam2 = 971;
						*bParam3 = 26;
						return true;
				}
				break;
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*iParam2 = 1023;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*iParam2 = 1023;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*iParam2 = 1023;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*iParam2 = 1023;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*iParam2 = 1023;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*iParam2 = 1023;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*iParam2 = 1023;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*iParam2 = 1023;
						*bParam3 = 26;
						return true;
				}
				break;
		}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = UNK_0xFAB100617491B764(bParam0);
		}
		else
		{
			iVar0 = UNK_0xCE50BA51F0598785(bParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = UNK_0xFAB100617491B764(bParam0);
	}
	else
	{
		iVar0 = UNK_0xCE50BA51F0598785(bParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*iParam2 = 1759;
					break;
				case 1:
					*iParam2 = 1760;
					break;
				case 2:
					*iParam2 = 1761;
					break;
				case 3:
					*iParam2 = 1762;
					break;
				case 4:
					*iParam2 = 1763;
					break;
				case 5:
					*iParam2 = 1764;
					break;
				case 6:
					*iParam2 = 1771;
					break;
				case 7:
					*iParam2 = 1772;
					break;
				case 8:
					*iParam2 = 1773;
					break;
				case 9:
					*iParam2 = 1774;
					break;
				case 10:
					*iParam2 = 1775;
					break;
				case 11:
					*iParam2 = 1776;
					break;
				case 12:
					*iParam2 = 1777;
					break;
				case 13:
					*iParam2 = 1785;
					break;
				case 14:
					*iParam2 = 1786;
					break;
				case 15:
					*iParam2 = 1887;
					break;
				case 16:
					*iParam2 = 1888;
					break;
				case 17:
					*iParam2 = 1919;
					break;
				case 18:
					*iParam2 = 1933;
					break;
				case 19:
					*iParam2 = 1934;
					break;
				case 20:
					*iParam2 = 1935;
					break;
				case 21:
					*iParam2 = 1936;
					break;
				case 22:
					*iParam2 = 1937;
					break;
				case 23:
					*iParam2 = 2041;
					break;
				case 24:
					*iParam2 = 2042;
					break;
				case 25:
					*iParam2 = 2068;
					break;
				case 26:
					*iParam2 = 2069;
					break;
				case 27:
					*iParam2 = 2070;
					break;
				case 28:
					*iParam2 = 2071;
					break;
				case 29:
					*iParam2 = 2072;
					break;
				case 30:
					*iParam2 = 2073;
					break;
				case 31:
					*iParam2 = 2074;
					break;
				case 32:
					*iParam2 = 2075;
					break;
				case 33:
					*iParam2 = 2076;
					break;
				case 34:
					*iParam2 = 2077;
					break;
				case 35:
					*iParam2 = 2324;
					break;
				case 36:
					*iParam2 = 2325;
					break;
				case 37:
					*iParam2 = 2389;
					break;
				case 38:
					*iParam2 = 2390;
					break;
				case 39:
					*iParam2 = 2391;
					break;
				case 40:
					*iParam2 = 2392;
					break;
				case 41:
					*iParam2 = 2451;
					break;
				case 42:
					*iParam2 = 2452;
					break;
				case 43:
					*iParam2 = 2453;
					break;
				case 44:
					*iParam2 = 2454;
					break;
				case 45:
					*iParam2 = 2455;
					break;
				case 46:
					*iParam2 = 2456;
					break;
				case 47:
					*iParam2 = 2457;
					break;
				case 48:
					*iParam2 = 2458;
					break;
				case 49:
					*iParam2 = 2459;
					break;
				case 50:
					*iParam2 = 2460;
					break;
				case 51:
					*iParam2 = 2589;
					break;
				case 52:
					*iParam2 = 2590;
					break;
				case 53:
					*iParam2 = 2591;
					break;
				case 54:
					*iParam2 = 2592;
					break;
				case 55:
					*iParam2 = 2593;
					break;
				case 56:
					*iParam2 = 2594;
					break;
				case 57:
					*iParam2 = 2595;
					break;
				case 58:
					*iParam2 = 2596;
					break;
				case 59:
					*iParam2 = 2597;
					break;
				case 60:
					*iParam2 = 2598;
					break;
				case 61:
					*iParam2 = 2599;
					break;
				case 62:
					*iParam2 = 3196;
					break;
				case 63:
					*iParam2 = 3197;
					break;
				case 64:
					*iParam2 = 3198;
					break;
				case 65:
					*iParam2 = 3199;
					break;
				case 66:
					*iParam2 = 3200;
					break;
				case 67:
					*iParam2 = 3201;
					break;
				case 68:
					*iParam2 = 3669;
					break;
				case 69:
					*iParam2 = 3670;
					break;
				case 70:
					*iParam2 = 3671;
					break;
				case 71:
					*iParam2 = 3672;
					break;
				case 72:
					*iParam2 = 3673;
					break;
				case 73:
					*iParam2 = 3674;
					break;
				case 74:
					*iParam2 = 3675;
					break;
				case 75:
					*iParam2 = 3676;
					break;
				case 76:
					*iParam2 = 3677;
					break;
				case 77:
					*iParam2 = 3678;
					break;
				case 78:
					*iParam2 = 3792;
					break;
				case 79:
					*iParam2 = 3793;
					break;
				case 80:
					*iParam2 = 3794;
					break;
				case 81:
					*iParam2 = 3795;
					break;
				case 82:
					*iParam2 = 3796;
					break;
				case 83:
					*iParam2 = 3797;
					break;
				case 84:
					*iParam2 = 3798;
					break;
				case 85:
					*iParam2 = 3799;
					break;
				case 86:
					*iParam2 = 3902;
					break;
				case 87:
					*iParam2 = 3903;
					break;
				case 88:
					*iParam2 = 3904;
					break;
				case 89:
					*iParam2 = 5337;
					break;
				case 90:
					*iParam2 = 5338;
					break;
				case 91:
					*iParam2 = 5339;
					break;
				case 92:
					*iParam2 = 5340;
					break;
				case 93:
					*iParam2 = 5341;
					break;
				case 94:
					*iParam2 = 5342;
					break;
				case 95:
					*iParam2 = 5343;
					break;
				case 96:
					*iParam2 = 5344;
					break;
				case 97:
					*iParam2 = 5345;
					break;
				case 98:
					*iParam2 = 5346;
					break;
				case 99:
					*iParam2 = 5347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*iParam2 = 5348;
					break;
				case 101:
					*iParam2 = 5394;
					break;
				case 102:
					*iParam2 = 5395;
					break;
				case 103:
					*iParam2 = 5396;
					break;
				case 104:
					*iParam2 = 5397;
					break;
				case 105:
					*iParam2 = 5398;
					break;
				case 106:
					*iParam2 = 5399;
					break;
				case 107:
					*iParam2 = 5400;
					break;
				case 108:
					*iParam2 = 5401;
					break;
				case 109:
					*iParam2 = 5402;
					break;
				case 110:
					*iParam2 = 5403;
					break;
				case 111:
					*iParam2 = 5404;
					break;
				case 112:
					*iParam2 = 5405;
					break;
				case 113:
					*iParam2 = 5406;
					break;
				case 114:
					*iParam2 = 5407;
					break;
				case 115:
					*iParam2 = 5408;
					break;
				case 116:
					*iParam2 = 5409;
					break;
				case 117:
					*iParam2 = 5410;
					break;
				case 118:
					*iParam2 = 5411;
					break;
				case 119:
					*iParam2 = 5412;
					break;
				case 120:
					*iParam2 = 5413;
					break;
				case 121:
					*iParam2 = 5414;
					break;
				case 122:
					*iParam2 = 5415;
					break;
				case 123:
					*iParam2 = 5416;
					break;
				case 124:
					*iParam2 = 6122;
					break;
				case 125:
					*iParam2 = 6123;
					break;
				case 126:
					*iParam2 = 6124;
					break;
				case 127:
					*iParam2 = 6125;
					break;
				case 128:
					*iParam2 = 6126;
					break;
				case 129:
					*iParam2 = 6127;
					break;
				case 130:
					*iParam2 = 6128;
					break;
				case 131:
					*iParam2 = 6129;
					break;
				case 132:
					*iParam2 = 6130;
					break;
				case 133:
					*iParam2 = 6131;
					break;
				case 134:
					*iParam2 = 6132;
					break;
				case 135:
					*iParam2 = 6133;
					break;
				case 136:
					*iParam2 = 6134;
					break;
				case 137:
					*iParam2 = 6135;
					break;
				case 138:
					*iParam2 = 6136;
					break;
				case 139:
					*iParam2 = 6435;
					break;
				case 140:
					*iParam2 = 6436;
					break;
				case 141:
					*iParam2 = 6437;
					break;
				case 142:
					*iParam2 = 6438;
					break;
				case 143:
					*iParam2 = 6439;
					break;
				case 144:
					*iParam2 = 6440;
					break;
				case 145:
					*iParam2 = 6441;
					break;
				case 146:
					*iParam2 = 6442;
					break;
				case 147:
					*iParam2 = 6443;
					break;
				case 148:
					*iParam2 = 6444;
					break;
				case 149:
					*iParam2 = 6445;
					break;
				case 150:
					*iParam2 = 6446;
					break;
				case 151:
					*iParam2 = 6447;
					break;
				case 152:
					*iParam2 = 6448;
					break;
				case 153:
					*iParam2 = 6449;
					break;
				case 154:
					*iParam2 = 7266;
					break;
				case 155:
					*iParam2 = 7267;
					break;
				case 156:
					*iParam2 = 7268;
					break;
				case 157:
					*iParam2 = 7269;
					break;
				case 158:
					*iParam2 = 7270;
					break;
				case 159:
					*iParam2 = 7271;
					break;
				case 160:
					*iParam2 = 7272;
					break;
				case 161:
					*iParam2 = 7879;
					break;
				case 162:
					*iParam2 = 7880;
					break;
				case 163:
					*iParam2 = 7881;
					break;
				case 164:
					*iParam2 = 7882;
					break;
				case 165:
					*iParam2 = 7883;
					break;
				case 166:
					*iParam2 = 7884;
					break;
				case 167:
					*iParam2 = 7885;
					break;
				case 168:
					*iParam2 = 7886;
					break;
				case 169:
					*iParam2 = 7887;
					break;
				case 170:
					*iParam2 = 7888;
					break;
				case 171:
					*iParam2 = 7889;
					break;
				case 172:
					*iParam2 = 7890;
					break;
				case 173:
					*iParam2 = 7891;
					break;
				case 174:
					*iParam2 = 7892;
					break;
				case 175:
					*iParam2 = 7893;
					break;
				case 176:
					*iParam2 = 8299;
					break;
				case 177:
					*iParam2 = 8300;
					break;
				case 178:
					*iParam2 = 8301;
					break;
				case 179:
					*iParam2 = 8302;
					break;
				case 180:
					*iParam2 = 8303;
					break;
				case 181:
					*iParam2 = 8304;
					break;
				case 182:
					*iParam2 = 8305;
					break;
				case 183:
					*iParam2 = 8306;
					break;
				case 184:
					*iParam2 = 8307;
					break;
				case 185:
					*iParam2 = 8308;
					break;
				case 186:
					*iParam2 = 8309;
					break;
				case 187:
					*iParam2 = 8310;
					break;
				case 188:
					*iParam2 = 8311;
					break;
				case 189:
					*iParam2 = 8312;
					break;
				case 190:
					*iParam2 = 8313;
					break;
				case 191:
					*iParam2 = 8314;
					break;
				case 192:
					*iParam2 = 8315;
					break;
				case 193:
					*iParam2 = 8316;
					break;
				case 194:
					*iParam2 = 8317;
					break;
				case 195:
					*iParam2 = 8318;
					break;
				case 196:
					*iParam2 = 8319;
					break;
				case 197:
					*iParam2 = 8320;
					break;
				case 198:
					*iParam2 = 8321;
					break;
				case 199:
					*iParam2 = 8322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*iParam2 = 8323;
					break;
				case 201:
					*iParam2 = 8936;
					break;
				case 202:
					*iParam2 = 8937;
					break;
				case 203:
					*iParam2 = 8938;
					break;
				case 204:
					*iParam2 = 8939;
					break;
				case 205:
					*iParam2 = 8940;
					break;
				case 206:
					*iParam2 = 9419;
					break;
				case 207:
					*iParam2 = 9420;
					break;
				case 208:
					*iParam2 = 9421;
					break;
				case 209:
					*iParam2 = 9422;
					break;
				case 210:
					*iParam2 = 9423;
					break;
				case 211:
					*iParam2 = 9424;
					break;
				case 212:
					*iParam2 = 9425;
					break;
				case 213:
					*iParam2 = 9426;
					break;
				case 214:
					*iParam2 = 9427;
					break;
				case 215:
					*iParam2 = 9428;
					break;
				case 216:
					*iParam2 = 9429;
					break;
				case 217:
					*iParam2 = 9430;
					break;
				case 218:
					*iParam2 = 9431;
					break;
				case 219:
					*iParam2 = 9432;
					break;
				case 220:
					*iParam2 = 9433;
					break;
				case 221:
					*iParam2 = 9434;
					break;
				case 222:
					*iParam2 = 9435;
					break;
				case 223:
					*iParam2 = 9436;
					break;
				case 224:
					*iParam2 = 9437;
					break;
				case 225:
					*iParam2 = 9438;
					break;
				case 226:
					*iParam2 = 9439;
					break;
				case 227:
					*iParam2 = 9440;
					break;
				case 228:
					*iParam2 = 9441;
					break;
				case 229:
					*iParam2 = 9442;
					break;
				case 230:
					*iParam2 = 9443;
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*iParam2 = 1765;
					break;
				case 1:
					*iParam2 = 1766;
					break;
				case 2:
					*iParam2 = 1767;
					break;
				case 3:
					*iParam2 = 1768;
					break;
				case 4:
					*iParam2 = 1769;
					break;
				case 5:
					*iParam2 = 1770;
					break;
				case 6:
					*iParam2 = 1778;
					break;
				case 7:
					*iParam2 = 1779;
					break;
				case 8:
					*iParam2 = 1780;
					break;
				case 9:
					*iParam2 = 1781;
					break;
				case 10:
					*iParam2 = 1782;
					break;
				case 11:
					*iParam2 = 1783;
					break;
				case 12:
					*iParam2 = 1784;
					break;
				case 13:
					*iParam2 = 1787;
					break;
				case 14:
					*iParam2 = 1788;
					break;
				case 15:
					*iParam2 = 1889;
					break;
				case 16:
					*iParam2 = 1890;
					break;
				case 17:
					*iParam2 = 1920;
					break;
				case 18:
					*iParam2 = 1938;
					break;
				case 19:
					*iParam2 = 1939;
					break;
				case 20:
					*iParam2 = 1940;
					break;
				case 21:
					*iParam2 = 1941;
					break;
				case 22:
					*iParam2 = 1942;
					break;
				case 23:
					*iParam2 = 2043;
					break;
				case 24:
					*iParam2 = 2044;
					break;
				case 25:
					*iParam2 = 2078;
					break;
				case 26:
					*iParam2 = 2079;
					break;
				case 27:
					*iParam2 = 2080;
					break;
				case 28:
					*iParam2 = 2081;
					break;
				case 29:
					*iParam2 = 2082;
					break;
				case 30:
					*iParam2 = 2083;
					break;
				case 31:
					*iParam2 = 2084;
					break;
				case 32:
					*iParam2 = 2085;
					break;
				case 33:
					*iParam2 = 2086;
					break;
				case 34:
					*iParam2 = 2087;
					break;
				case 35:
					*iParam2 = 2326;
					break;
				case 36:
					*iParam2 = 2327;
					break;
				case 37:
					*iParam2 = 2393;
					break;
				case 38:
					*iParam2 = 2394;
					break;
				case 39:
					*iParam2 = 2395;
					break;
				case 40:
					*iParam2 = 2396;
					break;
				case 41:
					*iParam2 = 2461;
					break;
				case 42:
					*iParam2 = 2462;
					break;
				case 43:
					*iParam2 = 2463;
					break;
				case 44:
					*iParam2 = 2464;
					break;
				case 45:
					*iParam2 = 2465;
					break;
				case 46:
					*iParam2 = 2466;
					break;
				case 47:
					*iParam2 = 2467;
					break;
				case 48:
					*iParam2 = 2468;
					break;
				case 49:
					*iParam2 = 2469;
					break;
				case 50:
					*iParam2 = 2470;
					break;
				case 51:
					*iParam2 = 2600;
					break;
				case 52:
					*iParam2 = 2601;
					break;
				case 53:
					*iParam2 = 2602;
					break;
				case 54:
					*iParam2 = 2603;
					break;
				case 55:
					*iParam2 = 2604;
					break;
				case 56:
					*iParam2 = 2605;
					break;
				case 57:
					*iParam2 = 2606;
					break;
				case 58:
					*iParam2 = 2607;
					break;
				case 59:
					*iParam2 = 2608;
					break;
				case 60:
					*iParam2 = 2609;
					break;
				case 61:
					*iParam2 = 2610;
					break;
				case 62:
					*iParam2 = 3202;
					break;
				case 63:
					*iParam2 = 3203;
					break;
				case 64:
					*iParam2 = 3204;
					break;
				case 65:
					*iParam2 = 3205;
					break;
				case 66:
					*iParam2 = 3206;
					break;
				case 67:
					*iParam2 = 3207;
					break;
				case 68:
					*iParam2 = 3679;
					break;
				case 69:
					*iParam2 = 3680;
					break;
				case 70:
					*iParam2 = 3681;
					break;
				case 71:
					*iParam2 = 3682;
					break;
				case 72:
					*iParam2 = 3683;
					break;
				case 73:
					*iParam2 = 3684;
					break;
				case 74:
					*iParam2 = 3685;
					break;
				case 75:
					*iParam2 = 3686;
					break;
				case 76:
					*iParam2 = 3687;
					break;
				case 77:
					*iParam2 = 3688;
					break;
				case 78:
					*iParam2 = 3800;
					break;
				case 79:
					*iParam2 = 3801;
					break;
				case 80:
					*iParam2 = 3802;
					break;
				case 81:
					*iParam2 = 3803;
					break;
				case 82:
					*iParam2 = 3804;
					break;
				case 83:
					*iParam2 = 3805;
					break;
				case 84:
					*iParam2 = 3806;
					break;
				case 85:
					*iParam2 = 3807;
					break;
				case 86:
					*iParam2 = 3905;
					break;
				case 87:
					*iParam2 = 3906;
					break;
				case 88:
					*iParam2 = 3907;
					break;
				case 89:
					*iParam2 = 5349;
					break;
				case 90:
					*iParam2 = 5350;
					break;
				case 91:
					*iParam2 = 5351;
					break;
				case 92:
					*iParam2 = 5352;
					break;
				case 93:
					*iParam2 = 5353;
					break;
				case 94:
					*iParam2 = 5354;
					break;
				case 95:
					*iParam2 = 5355;
					break;
				case 96:
					*iParam2 = 5356;
					break;
				case 97:
					*iParam2 = 5357;
					break;
				case 98:
					*iParam2 = 5358;
					break;
				case 99:
					*iParam2 = 5359;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*iParam2 = 5360;
					break;
				case 101:
					*iParam2 = 5417;
					break;
				case 102:
					*iParam2 = 5418;
					break;
				case 103:
					*iParam2 = 5419;
					break;
				case 104:
					*iParam2 = 5420;
					break;
				case 105:
					*iParam2 = 5421;
					break;
				case 106:
					*iParam2 = 5422;
					break;
				case 107:
					*iParam2 = 5423;
					break;
				case 108:
					*iParam2 = 5424;
					break;
				case 109:
					*iParam2 = 5425;
					break;
				case 110:
					*iParam2 = 5426;
					break;
				case 111:
					*iParam2 = 5427;
					break;
				case 112:
					*iParam2 = 5428;
					break;
				case 113:
					*iParam2 = 5429;
					break;
				case 114:
					*iParam2 = 5430;
					break;
				case 115:
					*iParam2 = 5431;
					break;
				case 116:
					*iParam2 = 5432;
					break;
				case 117:
					*iParam2 = 5433;
					break;
				case 118:
					*iParam2 = 5434;
					break;
				case 119:
					*iParam2 = 5435;
					break;
				case 120:
					*iParam2 = 5436;
					break;
				case 121:
					*iParam2 = 5437;
					break;
				case 122:
					*iParam2 = 5438;
					break;
				case 123:
					*iParam2 = 5439;
					break;
				case 124:
					*iParam2 = 6137;
					break;
				case 125:
					*iParam2 = 6138;
					break;
				case 126:
					*iParam2 = 6139;
					break;
				case 127:
					*iParam2 = 6140;
					break;
				case 128:
					*iParam2 = 6141;
					break;
				case 129:
					*iParam2 = 6142;
					break;
				case 130:
					*iParam2 = 6143;
					break;
				case 131:
					*iParam2 = 6144;
					break;
				case 132:
					*iParam2 = 6145;
					break;
				case 133:
					*iParam2 = 6146;
					break;
				case 134:
					*iParam2 = 6147;
					break;
				case 135:
					*iParam2 = 6148;
					break;
				case 136:
					*iParam2 = 6149;
					break;
				case 137:
					*iParam2 = 6150;
					break;
				case 138:
					*iParam2 = 6151;
					break;
				case 139:
					*iParam2 = 6450;
					break;
				case 140:
					*iParam2 = 6451;
					break;
				case 141:
					*iParam2 = 6452;
					break;
				case 142:
					*iParam2 = 6453;
					break;
				case 143:
					*iParam2 = 6454;
					break;
				case 144:
					*iParam2 = 6455;
					break;
				case 145:
					*iParam2 = 6456;
					break;
				case 146:
					*iParam2 = 6457;
					break;
				case 147:
					*iParam2 = 6458;
					break;
				case 148:
					*iParam2 = 6459;
					break;
				case 149:
					*iParam2 = 6460;
					break;
				case 150:
					*iParam2 = 6461;
					break;
				case 151:
					*iParam2 = 6462;
					break;
				case 152:
					*iParam2 = 6463;
					break;
				case 153:
					*iParam2 = 6464;
					break;
				case 154:
					*iParam2 = 7273;
					break;
				case 155:
					*iParam2 = 7274;
					break;
				case 156:
					*iParam2 = 7275;
					break;
				case 157:
					*iParam2 = 7276;
					break;
				case 158:
					*iParam2 = 7277;
					break;
				case 159:
					*iParam2 = 7278;
					break;
				case 160:
					*iParam2 = 7279;
					break;
				case 161:
					*iParam2 = 7894;
					break;
				case 162:
					*iParam2 = 7895;
					break;
				case 163:
					*iParam2 = 7896;
					break;
				case 164:
					*iParam2 = 7897;
					break;
				case 165:
					*iParam2 = 7898;
					break;
				case 166:
					*iParam2 = 7899;
					break;
				case 167:
					*iParam2 = 7900;
					break;
				case 168:
					*iParam2 = 7901;
					break;
				case 169:
					*iParam2 = 7902;
					break;
				case 170:
					*iParam2 = 7903;
					break;
				case 171:
					*iParam2 = 7904;
					break;
				case 172:
					*iParam2 = 7905;
					break;
				case 173:
					*iParam2 = 7906;
					break;
				case 174:
					*iParam2 = 7907;
					break;
				case 175:
					*iParam2 = 7908;
					break;
				case 176:
					*iParam2 = 8324;
					break;
				case 177:
					*iParam2 = 8325;
					break;
				case 178:
					*iParam2 = 8326;
					break;
				case 179:
					*iParam2 = 8327;
					break;
				case 180:
					*iParam2 = 8328;
					break;
				case 181:
					*iParam2 = 8329;
					break;
				case 182:
					*iParam2 = 8330;
					break;
				case 183:
					*iParam2 = 8331;
					break;
				case 184:
					*iParam2 = 8332;
					break;
				case 185:
					*iParam2 = 8333;
					break;
				case 186:
					*iParam2 = 8334;
					break;
				case 187:
					*iParam2 = 8335;
					break;
				case 188:
					*iParam2 = 8336;
					break;
				case 189:
					*iParam2 = 8337;
					break;
				case 190:
					*iParam2 = 8338;
					break;
				case 191:
					*iParam2 = 8339;
					break;
				case 192:
					*iParam2 = 8340;
					break;
				case 193:
					*iParam2 = 8341;
					break;
				case 194:
					*iParam2 = 8342;
					break;
				case 195:
					*iParam2 = 8343;
					break;
				case 196:
					*iParam2 = 8344;
					break;
				case 197:
					*iParam2 = 8345;
					break;
				case 198:
					*iParam2 = 8346;
					break;
				case 199:
					*iParam2 = 8347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*iParam2 = 8348;
					break;
				case 201:
					*iParam2 = 8941;
					break;
				case 202:
					*iParam2 = 8942;
					break;
				case 203:
					*iParam2 = 8943;
					break;
				case 204:
					*iParam2 = 8944;
					break;
				case 205:
					*iParam2 = 8945;
					break;
				case 206:
					*iParam2 = 9444;
					break;
				case 207:
					*iParam2 = 9445;
					break;
				case 208:
					*iParam2 = 9446;
					break;
				case 209:
					*iParam2 = 9447;
					break;
				case 210:
					*iParam2 = 9448;
					break;
				case 211:
					*iParam2 = 9449;
					break;
				case 212:
					*iParam2 = 9450;
					break;
				case 213:
					*iParam2 = 9451;
					break;
				case 214:
					*iParam2 = 9452;
					break;
				case 215:
					*iParam2 = 9453;
					break;
				case 216:
					*iParam2 = 9454;
					break;
				case 217:
					*iParam2 = 9455;
					break;
				case 218:
					*iParam2 = 9456;
					break;
				case 219:
					*iParam2 = 9457;
					break;
				case 220:
					*iParam2 = 9458;
					break;
				case 221:
					*iParam2 = 9459;
					break;
				case 222:
					*iParam2 = 9460;
					break;
				case 223:
					*iParam2 = 9461;
					break;
				case 224:
					*iParam2 = 9462;
					break;
				case 225:
					*iParam2 = 9463;
					break;
				case 226:
					*iParam2 = 9464;
					break;
				case 227:
					*iParam2 = 9465;
					break;
				case 228:
					*iParam2 = 9466;
					break;
				case 229:
					*iParam2 = 9467;
					break;
				case 230:
					*iParam2 = 9468;
					break;
				default:
					break;
			}
			break;
	}
	*bParam3 = (iVar0 % 32);
	return *iParam2 != 11511;
}

bool func_93(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return false;
}

bool func_94(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true))
		{
			return false;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 2))
		{
			return false;
		}
	}
	return true;
}

struct<14> func_95(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	func_158();
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		func_140(iParam1, bParam2);
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		func_121(iParam1, bParam2);
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		func_96(iParam1, bParam2);
	}
	return Global_76434[0 /*14*/];
}

void func_96(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_120(bParam1);
			break;
		case 2:
			func_119(bParam1);
			break;
		case 3:
			func_116(bParam1);
			break;
		case 4:
			func_115(bParam1);
			break;
		case 6:
			func_114(bParam1);
			break;
		case 5:
			func_113(bParam1);
			break;
		case 8:
			func_112(bParam1);
			break;
		case 9:
			func_111(bParam1);
			break;
		case 10:
			func_110(bParam1);
			break;
		case 1:
			func_109(bParam1);
			break;
		case 7:
			func_108(bParam1);
			break;
		case 11:
			func_107(bParam1);
			break;
		case 12:
			func_106(bParam1);
			break;
		case 13:
			func_105(bParam1);
			break;
		case 14:
			func_97(bParam1);
			break;
	}
}

void func_97(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 154:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		case 88:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 113:
			StringCopy(&cVar2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 114:
			StringCopy(&cVar2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 115:
			StringCopy(&cVar2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 116:
			StringCopy(&cVar2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		case 117:
			StringCopy(&cVar2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 118:
			StringCopy(&cVar2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 119:
			StringCopy(&cVar2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 120:
			StringCopy(&cVar2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		case 121:
			StringCopy(&cVar2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		case 122:
			StringCopy(&cVar2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		case 123:
			StringCopy(&cVar2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 124:
			StringCopy(&cVar2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 125:
			StringCopy(&cVar2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 126:
			StringCopy(&cVar2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 127:
			StringCopy(&cVar2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 128:
			StringCopy(&cVar2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 129:
			StringCopy(&cVar2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 130:
			StringCopy(&cVar2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 131:
			StringCopy(&cVar2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 132:
			StringCopy(&cVar2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		case 133:
			StringCopy(&cVar2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 134:
			StringCopy(&cVar2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 135:
			StringCopy(&cVar2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		case 136:
			StringCopy(&cVar2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		case 137:
			StringCopy(&cVar2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 138:
			StringCopy(&cVar2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 139:
			StringCopy(&cVar2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 140:
			StringCopy(&cVar2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 141:
			StringCopy(&cVar2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 142:
			StringCopy(&cVar2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 143:
			StringCopy(&cVar2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		case 144:
			StringCopy(&cVar2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 145:
			StringCopy(&cVar2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		case 146:
			StringCopy(&cVar2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 147:
			StringCopy(&cVar2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 148:
			StringCopy(&cVar2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 149:
			StringCopy(&cVar2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 150:
			StringCopy(&cVar2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		case 151:
			StringCopy(&cVar2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 152:
			StringCopy(&cVar2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 153:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 59:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 64:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 65:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 66:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 67:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 68:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 69:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 81:
			StringCopy(&cVar2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 87:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 155, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_98(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (bParam2 % 32);
	uParam0->f_2 = (bParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), bParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_103(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (UNK_0x12AB0310C2281427(bParam3) != UNK_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_26(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (UNK_0x1A5A491D253EA7BA(Global_2621444, joaat("REBREATHER"), false))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_102(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_102(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_102(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_102(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_102(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_102(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_93(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
		}
		if (func_93(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_93(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_26(14))
			{
				return;
			}
			bVar0 = func_91(func_101(iParam1, uParam0->f_2), Global_76431, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			}
			bVar0 = func_91(func_100(iParam1, uParam0->f_2), Global_76431, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_99(iParam1, uParam0->f_2, &iVar1))
			{
				bVar0 = func_91(iVar1, Global_76431, 0);
				if (!UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_99(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 979;
					break;
				case 3:
					*iParam2 = 1429;
					break;
				case 4:
					*iParam2 = 995;
					break;
				case 6:
					*iParam2 = 1003;
					break;
				case 8:
					*iParam2 = 1430;
					break;
				case 9:
					*iParam2 = 1438;
					break;
				case 10:
					*iParam2 = 1440;
					break;
				case 1:
					*iParam2 = 1011;
					break;
				case 7:
					*iParam2 = 1441;
					break;
				case 11:
					*iParam2 = 987;
					break;
				case 14:
					*iParam2 = 1019;
					break;
				case 12:
					*iParam2 = 1030;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 980;
					break;
				case 4:
					*iParam2 = 996;
					break;
				case 6:
					*iParam2 = 1004;
					break;
				case 8:
					*iParam2 = 1431;
					break;
				case 9:
					*iParam2 = 1439;
					break;
				case 7:
					*iParam2 = 1442;
					break;
				case 11:
					*iParam2 = 988;
					break;
				case 14:
					*iParam2 = 1020;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 981;
					break;
				case 4:
					*iParam2 = 997;
					break;
				case 6:
					*iParam2 = 1005;
					break;
				case 8:
					*iParam2 = 1432;
					break;
				case 7:
					*iParam2 = 1443;
					break;
				case 11:
					*iParam2 = 989;
					break;
				case 14:
					*iParam2 = 1021;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 998;
					break;
				case 6:
					*iParam2 = 1006;
					break;
				case 8:
					*iParam2 = 1433;
					break;
				case 11:
					*iParam2 = 990;
					break;
				case 14:
					*iParam2 = 1022;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 999;
					break;
				case 6:
					*iParam2 = 1007;
					break;
				case 8:
					*iParam2 = 1434;
					break;
				case 11:
					*iParam2 = 991;
					break;
				case 14:
					*iParam2 = 1023;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1000;
					break;
				case 6:
					*iParam2 = 1008;
					break;
				case 8:
					*iParam2 = 1435;
					break;
				case 11:
					*iParam2 = 992;
					break;
				case 14:
					*iParam2 = 1024;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1001;
					break;
				case 6:
					*iParam2 = 1009;
					break;
				case 8:
					*iParam2 = 1436;
					break;
				case 11:
					*iParam2 = 993;
					break;
				case 14:
					*iParam2 = 1025;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1002;
					break;
				case 6:
					*iParam2 = 1010;
					break;
				case 8:
					*iParam2 = 1437;
					break;
				case 11:
					*iParam2 = 994;
					break;
				case 14:
					*iParam2 = 1026;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1027;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1028;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1029;
					break;
			}
			break;
	}
	return *iParam2 != 978;
}

int func_100(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
				case 3:
					return 1414;
				case 4:
					return 943;
				case 6:
					return 951;
				case 8:
					return 1415;
				case 9:
					return 1423;
				case 10:
					return 1425;
				case 1:
					return 959;
				case 7:
					return 1426;
				case 11:
					return 935;
				case 14:
					return 967;
				case 12:
					return 978;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
				case 4:
					return 944;
				case 6:
					return 952;
				case 8:
					return 1416;
				case 9:
					return 1424;
				case 7:
					return 1427;
				case 11:
					return 936;
				case 14:
					return 968;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
				case 4:
					return 945;
				case 6:
					return 953;
				case 8:
					return 1417;
				case 7:
					return 1428;
				case 11:
					return 937;
				case 14:
					return 969;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
				case 6:
					return 954;
				case 8:
					return 1418;
				case 11:
					return 938;
				case 14:
					return 970;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
				case 6:
					return 955;
				case 8:
					return 1419;
				case 11:
					return 939;
				case 14:
					return 971;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
				case 6:
					return 956;
				case 8:
					return 1420;
				case 11:
					return 940;
				case 14:
					return 972;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
				case 6:
					return 957;
				case 8:
					return 1421;
				case 11:
					return 941;
				case 14:
					return 973;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
				case 6:
					return 958;
				case 8:
					return 1422;
				case 11:
					return 942;
				case 14:
					return 974;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	}
	return 935;
}

int func_101(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
				case 3:
					return 1399;
				case 4:
					return 891;
				case 6:
					return 899;
				case 8:
					return 1400;
				case 9:
					return 1408;
				case 10:
					return 1410;
				case 1:
					return 907;
				case 7:
					return 1411;
				case 11:
					return 883;
				case 14:
					return 915;
				case 12:
					return 926;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
				case 4:
					return 892;
				case 6:
					return 900;
				case 8:
					return 1401;
				case 9:
					return 1409;
				case 7:
					return 1412;
				case 11:
					return 884;
				case 14:
					return 916;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
				case 4:
					return 893;
				case 6:
					return 901;
				case 8:
					return 1402;
				case 7:
					return 1413;
				case 11:
					return 885;
				case 14:
					return 917;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
				case 6:
					return 902;
				case 8:
					return 1403;
				case 11:
					return 886;
				case 14:
					return 918;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
				case 6:
					return 903;
				case 8:
					return 1404;
				case 11:
					return 887;
				case 14:
					return 919;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
				case 6:
					return 904;
				case 8:
					return 1405;
				case 11:
					return 888;
				case 14:
					return 920;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
				case 6:
					return 905;
				case 8:
					return 1406;
				case 11:
					return 889;
				case 14:
					return 921;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
				case 6:
					return 906;
				case 8:
					return 1407;
				case 11:
					return 890;
				case 14:
					return 922;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	}
	return 883;
}

bool func_102(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_92(bParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3))
	{
		bVar3 = func_91(iVar2, iVar0, 0);
		return UNK_0xEAE0D21A50E6C7F4(bVar3, bVar1);
	}
	return false;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
	}
	return 0;
}

void func_104(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = (bParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	bVar1 = Global_76434[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = UNK_0x84997C8C8A5848DD(bVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			UNK_0xA69F810DF7EA02E6(iVar17, &Var2);
			if (!UNK_0x232048AB4B0E0259(Var2))
			{
				if (iVar18 == (bParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_98(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_98(&(Global_76434[0 /*14*/]), iParam0, bParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var20);
		iVar39 = 0;
		iVar40 = UNK_0xF6900DA2D9CD7BC5(bVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			UNK_0x4F79808059300187(iVar38, &Var20);
			if (!UNK_0x232048AB4B0E0259(Var20))
			{
				if (iVar39 == (bParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_98(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, UNK_0x1A5A491D253EA7BA(Var20.f_1, joaat("OUTFIT_ONLY"), false), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var41);
		if (bParam3 != -1 && Global_76603)
		{
			UNK_0xFDEBA3FD0BF0D4AC(bParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_98(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, UNK_0x1A5A491D253EA7BA(Var41.f_1, joaat("OUTFIT_ONLY"), false), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = UNK_0xF6900DA2D9CD7BC5(bVar1, 7, -1, 0, -1, func_55(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			UNK_0xC578687D5A643830(iVar58, &Var41);
			if (!UNK_0x232048AB4B0E0259(Var41))
			{
				if (iVar59 == (bParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_98(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, UNK_0x1A5A491D253EA7BA(Var41.f_1, joaat("OUTFIT_ONLY"), false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_105(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 9, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_106(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 48, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_107(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 1, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_108(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 1, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_109(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 6, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_110(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		default:
			func_104(iVar10, bParam0, 33, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_111(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		case 16:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		default:
			func_104(iVar10, bParam0, 17, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_112(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 18, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_113(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 7, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_114(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		case 6:
			StringCopy(&cVar2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		case 7:
			StringCopy(&cVar2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 19:
			StringCopy(&cVar2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 24:
			StringCopy(&cVar2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 38:
			StringCopy(&cVar2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 73:
			StringCopy(&cVar2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		default:
			func_104(iVar10, bParam0, 84, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_115(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 20:
			StringCopy(&cVar2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 21:
			StringCopy(&cVar2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 22:
			StringCopy(&cVar2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		case 23:
			StringCopy(&cVar2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		case 36:
			StringCopy(&cVar2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		case 37:
			StringCopy(&cVar2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		case 38:
			StringCopy(&cVar2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		case 39:
			StringCopy(&cVar2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 40:
			StringCopy(&cVar2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		case 46:
			StringCopy(&cVar2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		case 70:
			StringCopy(&cVar2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		case 71:
			StringCopy(&cVar2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		case 80:
			StringCopy(&cVar2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		case 92:
			StringCopy(&cVar2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		case 93:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 95:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		case 96:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		case 97:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		case 98:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		case 99:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		case 100:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		case 101:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		case 102:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		case 103:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		default:
			func_104(iVar10, bParam0, 104, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_116(bool bParam0)
{
	if (bParam0 < 136)
	{
		func_118(bParam0);
	}
	else
	{
		func_117(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_104(3, bParam0, 242, -1);
	}
}

void func_117(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 136:
			StringCopy(&cVar2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		case 170:
			StringCopy(&cVar2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		case 181:
			StringCopy(&cVar2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		case 182:
			StringCopy(&cVar2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		case 183:
			StringCopy(&cVar2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		case 184:
			StringCopy(&cVar2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		case 185:
			StringCopy(&cVar2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		case 186:
			StringCopy(&cVar2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		case 187:
			StringCopy(&cVar2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		case 188:
			StringCopy(&cVar2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		case 189:
			StringCopy(&cVar2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		case 190:
			StringCopy(&cVar2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 191:
			StringCopy(&cVar2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		case 192:
			StringCopy(&cVar2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		case 193:
			StringCopy(&cVar2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		case 194:
			StringCopy(&cVar2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		case 195:
			StringCopy(&cVar2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		case 196:
			StringCopy(&cVar2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		case 197:
			StringCopy(&cVar2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		case 198:
			StringCopy(&cVar2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		case 199:
			StringCopy(&cVar2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		case 200:
			StringCopy(&cVar2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		case 201:
			StringCopy(&cVar2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		case 202:
			StringCopy(&cVar2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		case 203:
			StringCopy(&cVar2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		case 204:
			StringCopy(&cVar2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		case 205:
			StringCopy(&cVar2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		case 206:
			StringCopy(&cVar2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		case 207:
			StringCopy(&cVar2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		case 208:
			StringCopy(&cVar2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		case 209:
			StringCopy(&cVar2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		case 210:
			StringCopy(&cVar2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		case 211:
			StringCopy(&cVar2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		case 212:
			StringCopy(&cVar2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		case 213:
			StringCopy(&cVar2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 214:
			StringCopy(&cVar2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 215:
			StringCopy(&cVar2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		case 216:
			StringCopy(&cVar2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		case 217:
			StringCopy(&cVar2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 218:
			StringCopy(&cVar2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		case 219:
			StringCopy(&cVar2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		case 220:
			StringCopy(&cVar2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		case 221:
			StringCopy(&cVar2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		case 222:
			StringCopy(&cVar2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		case 223:
			StringCopy(&cVar2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		case 224:
			StringCopy(&cVar2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		case 225:
			StringCopy(&cVar2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		case 226:
			StringCopy(&cVar2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		case 227:
			StringCopy(&cVar2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		case 228:
			StringCopy(&cVar2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		case 229:
			StringCopy(&cVar2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		case 230:
			StringCopy(&cVar2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		case 231:
			StringCopy(&cVar2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		case 232:
			StringCopy(&cVar2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		case 233:
			StringCopy(&cVar2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		case 234:
			StringCopy(&cVar2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		case 235:
			StringCopy(&cVar2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		case 236:
			StringCopy(&cVar2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		case 237:
			StringCopy(&cVar2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		case 238:
			StringCopy(&cVar2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		case 239:
			StringCopy(&cVar2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		case 240:
			StringCopy(&cVar2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		case 241:
			StringCopy(&cVar2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		default:
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_118(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		case 19:
			StringCopy(&cVar2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&cVar2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&cVar2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		case 23:
			StringCopy(&cVar2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		case 33:
			StringCopy(&cVar2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		case 34:
			StringCopy(&cVar2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		case 35:
			StringCopy(&cVar2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		case 36:
			StringCopy(&cVar2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		case 37:
			StringCopy(&cVar2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		case 40:
			StringCopy(&cVar2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		case 60:
			StringCopy(&cVar2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		case 61:
			StringCopy(&cVar2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		case 62:
			StringCopy(&cVar2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		case 63:
			StringCopy(&cVar2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		case 64:
			StringCopy(&cVar2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		case 65:
			StringCopy(&cVar2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		case 66:
			StringCopy(&cVar2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		case 67:
			StringCopy(&cVar2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		case 68:
			StringCopy(&cVar2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		case 69:
			StringCopy(&cVar2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		case 76:
			StringCopy(&cVar2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 89:
			StringCopy(&cVar2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		case 90:
			StringCopy(&cVar2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		case 91:
			StringCopy(&cVar2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&cVar2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		default:
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_119(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 9, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_120(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		default:
			func_104(iVar10, bParam0, 7, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_121(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_139(bParam1);
			break;
		case 2:
			func_138(bParam1);
			break;
		case 3:
			func_134(bParam1);
			break;
		case 4:
			func_133(bParam1);
			break;
		case 6:
			func_132(bParam1);
			break;
		case 5:
			func_131(bParam1);
			break;
		case 8:
			func_130(bParam1);
			break;
		case 9:
			func_129(bParam1);
			break;
		case 10:
			func_128(bParam1);
			break;
		case 1:
			func_127(bParam1);
			break;
		case 7:
			func_126(bParam1);
			break;
		case 11:
			func_125(bParam1);
			break;
		case 12:
			func_124(bParam1);
			break;
		case 13:
			func_123(bParam1);
			break;
		case 14:
			func_122(bParam1);
			break;
	}
}

void func_122(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 158:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		case 159:
			StringCopy(&cVar2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		case 160:
			StringCopy(&cVar2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		case 161:
			StringCopy(&cVar2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		case 162:
			StringCopy(&cVar2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		case 163:
			StringCopy(&cVar2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		case 164:
			StringCopy(&cVar2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		case 165:
			StringCopy(&cVar2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		case 166:
			StringCopy(&cVar2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		case 167:
			StringCopy(&cVar2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		case 168:
			StringCopy(&cVar2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		case 169:
			StringCopy(&cVar2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		case 170:
			StringCopy(&cVar2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		case 171:
			StringCopy(&cVar2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		case 172:
			StringCopy(&cVar2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		case 173:
			StringCopy(&cVar2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		case 174:
			StringCopy(&cVar2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		case 82:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 87:
			StringCopy(&cVar2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 88:
			StringCopy(&cVar2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 113:
			StringCopy(&cVar2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 114:
			StringCopy(&cVar2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 115:
			StringCopy(&cVar2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 116:
			StringCopy(&cVar2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 117:
			StringCopy(&cVar2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		case 118:
			StringCopy(&cVar2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 119:
			StringCopy(&cVar2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 120:
			StringCopy(&cVar2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 121:
			StringCopy(&cVar2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		case 122:
			StringCopy(&cVar2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 123:
			StringCopy(&cVar2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		case 124:
			StringCopy(&cVar2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		case 125:
			StringCopy(&cVar2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		case 126:
			StringCopy(&cVar2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		case 127:
			StringCopy(&cVar2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 128:
			StringCopy(&cVar2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 129:
			StringCopy(&cVar2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 130:
			StringCopy(&cVar2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		case 131:
			StringCopy(&cVar2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 132:
			StringCopy(&cVar2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		case 133:
			StringCopy(&cVar2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 134:
			StringCopy(&cVar2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 135:
			StringCopy(&cVar2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		case 136:
			StringCopy(&cVar2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		case 137:
			StringCopy(&cVar2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		case 138:
			StringCopy(&cVar2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		case 139:
			StringCopy(&cVar2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 140:
			StringCopy(&cVar2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 141:
			StringCopy(&cVar2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 142:
			StringCopy(&cVar2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		case 143:
			StringCopy(&cVar2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 144:
			StringCopy(&cVar2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 145:
			StringCopy(&cVar2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		case 146:
			StringCopy(&cVar2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 147:
			StringCopy(&cVar2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 148:
			StringCopy(&cVar2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 149:
			StringCopy(&cVar2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 150:
			StringCopy(&cVar2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 151:
			StringCopy(&cVar2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 152:
			StringCopy(&cVar2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 153:
			StringCopy(&cVar2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 154:
			StringCopy(&cVar2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		case 155:
			StringCopy(&cVar2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 156:
			StringCopy(&cVar2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		case 157:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 10:
			StringCopy(&cVar2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 59:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 64:
			StringCopy(&cVar2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 65:
			StringCopy(&cVar2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 66:
			StringCopy(&cVar2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		case 67:
			StringCopy(&cVar2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		case 68:
			StringCopy(&cVar2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		case 69:
			StringCopy(&cVar2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		case 70:
			StringCopy(&cVar2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 81:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 175, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_123(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 9, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_124(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 47, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_125(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		case 7:
			StringCopy(&cVar2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		case 8:
			StringCopy(&cVar2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		case 11:
			StringCopy(&cVar2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		case 12:
			StringCopy(&cVar2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		case 14:
			StringCopy(&cVar2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		case 15:
			StringCopy(&cVar2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		case 16:
			StringCopy(&cVar2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		case 17:
			StringCopy(&cVar2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		case 18:
			StringCopy(&cVar2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		case 19:
			StringCopy(&cVar2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		case 20:
			StringCopy(&cVar2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		case 21:
			StringCopy(&cVar2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		case 22:
			StringCopy(&cVar2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		case 23:
			StringCopy(&cVar2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		case 24:
			StringCopy(&cVar2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		case 25:
			StringCopy(&cVar2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		case 27:
			StringCopy(&cVar2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		case 28:
			StringCopy(&cVar2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		case 29:
			StringCopy(&cVar2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		case 30:
			StringCopy(&cVar2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		case 31:
			StringCopy(&cVar2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		case 32:
			StringCopy(&cVar2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		case 33:
			StringCopy(&cVar2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		case 34:
			StringCopy(&cVar2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		case 35:
			StringCopy(&cVar2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		case 36:
			StringCopy(&cVar2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		case 37:
			StringCopy(&cVar2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		case 38:
			StringCopy(&cVar2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		case 39:
			StringCopy(&cVar2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		case 40:
			StringCopy(&cVar2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		case 41:
			StringCopy(&cVar2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 44:
			StringCopy(&cVar2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 49:
			StringCopy(&cVar2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		case 50:
			StringCopy(&cVar2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		case 51:
			StringCopy(&cVar2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		case 52:
			StringCopy(&cVar2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		case 53:
			StringCopy(&cVar2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		case 54:
			StringCopy(&cVar2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 55:
			StringCopy(&cVar2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		case 56:
			StringCopy(&cVar2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		case 57:
			StringCopy(&cVar2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 58:
			StringCopy(&cVar2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		case 59:
			StringCopy(&cVar2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		case 60:
			StringCopy(&cVar2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		case 61:
			StringCopy(&cVar2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		case 62:
			StringCopy(&cVar2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		default:
			func_104(iVar10, bParam0, 63, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_126(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 1, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_127(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 5, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_128(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		case 41:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		case 42:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 53, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_129(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 6:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 7:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 8:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 12, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_130(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		case 15:
			StringCopy(&cVar2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		case 16:
			StringCopy(&cVar2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		case 17:
			StringCopy(&cVar2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		case 18:
			StringCopy(&cVar2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		case 19:
			StringCopy(&cVar2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		case 20:
			StringCopy(&cVar2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		case 21:
			StringCopy(&cVar2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		case 22:
			StringCopy(&cVar2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		case 23:
			StringCopy(&cVar2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		case 29:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		case 30:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		case 31:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 32:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		case 33:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		case 34:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		case 35:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		case 36:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		case 37:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		case 38:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		case 39:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		case 40:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		case 41:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		case 42:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		case 43:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		case 45:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		case 46:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		case 47:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		case 48:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		case 49:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		case 50:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		case 51:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		case 52:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		case 53:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		case 54:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		case 55:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		case 56:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		case 57:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		case 58:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		case 59:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		case 61:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 62:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		case 63:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		case 64:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		case 65:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		case 66:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		case 67:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		case 68:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		case 69:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		case 70:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		case 71:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		case 72:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		case 73:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		case 74:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		case 75:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 77, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_131(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 7, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_132(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		case 6:
			StringCopy(&cVar2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		case 7:
			StringCopy(&cVar2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 8:
			StringCopy(&cVar2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		case 9:
			StringCopy(&cVar2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		case 10:
			StringCopy(&cVar2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		case 11:
			StringCopy(&cVar2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		case 12:
			StringCopy(&cVar2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		case 29:
			StringCopy(&cVar2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		case 30:
			StringCopy(&cVar2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		case 31:
			StringCopy(&cVar2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		case 32:
			StringCopy(&cVar2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		case 33:
			StringCopy(&cVar2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		case 38:
			StringCopy(&cVar2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		case 73:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 84:
			StringCopy(&cVar2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 85:
			StringCopy(&cVar2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		case 86:
			StringCopy(&cVar2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 87:
			StringCopy(&cVar2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 88:
			StringCopy(&cVar2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 89:
			StringCopy(&cVar2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 90:
			StringCopy(&cVar2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 91:
			StringCopy(&cVar2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 92:
			StringCopy(&cVar2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 93:
			StringCopy(&cVar2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 94:
			StringCopy(&cVar2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 95:
			StringCopy(&cVar2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 96:
			StringCopy(&cVar2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 97:
			StringCopy(&cVar2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 98:
			StringCopy(&cVar2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 99:
			StringCopy(&cVar2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 100:
			StringCopy(&cVar2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 101:
			StringCopy(&cVar2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 102:
			StringCopy(&cVar2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 103:
			StringCopy(&cVar2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 104:
			StringCopy(&cVar2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 105:
			StringCopy(&cVar2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 106:
			StringCopy(&cVar2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 107:
			StringCopy(&cVar2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 108:
			StringCopy(&cVar2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 109:
			StringCopy(&cVar2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 110:
			StringCopy(&cVar2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 111:
			StringCopy(&cVar2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 112:
			StringCopy(&cVar2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 113:
			StringCopy(&cVar2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 114:
			StringCopy(&cVar2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 115:
			StringCopy(&cVar2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 116:
			StringCopy(&cVar2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 117:
			StringCopy(&cVar2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 118:
			StringCopy(&cVar2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 119:
			StringCopy(&cVar2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 120:
			StringCopy(&cVar2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 121:
			StringCopy(&cVar2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 122:
			StringCopy(&cVar2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 123:
			StringCopy(&cVar2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 124:
			StringCopy(&cVar2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 125:
			StringCopy(&cVar2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 126:
			StringCopy(&cVar2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 127:
			StringCopy(&cVar2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&cVar2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 129:
			StringCopy(&cVar2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 130:
			StringCopy(&cVar2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 131:
			StringCopy(&cVar2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 132:
			StringCopy(&cVar2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 133:
			StringCopy(&cVar2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		default:
			func_104(iVar10, bParam0, 134, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_133(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		case 16:
			StringCopy(&cVar2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		case 17:
			StringCopy(&cVar2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 18:
			StringCopy(&cVar2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&cVar2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		case 20:
			StringCopy(&cVar2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		case 21:
			StringCopy(&cVar2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		case 30:
			StringCopy(&cVar2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		case 34:
			StringCopy(&cVar2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		case 35:
			StringCopy(&cVar2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		case 36:
			StringCopy(&cVar2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 37:
			StringCopy(&cVar2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		case 38:
			StringCopy(&cVar2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&cVar2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 71:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		case 80:
			StringCopy(&cVar2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		case 92:
			StringCopy(&cVar2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		case 93:
			StringCopy(&cVar2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		case 94:
			StringCopy(&cVar2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		case 95:
			StringCopy(&cVar2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		case 96:
			StringCopy(&cVar2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		case 97:
			StringCopy(&cVar2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		case 98:
			StringCopy(&cVar2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		case 99:
			StringCopy(&cVar2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		case 100:
			StringCopy(&cVar2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		case 101:
			StringCopy(&cVar2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 102:
			StringCopy(&cVar2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		case 103:
			StringCopy(&cVar2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		case 104:
			StringCopy(&cVar2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		case 105:
			StringCopy(&cVar2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		case 106:
			StringCopy(&cVar2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&cVar2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		case 108:
			StringCopy(&cVar2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		case 109:
			StringCopy(&cVar2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		case 110:
			StringCopy(&cVar2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&cVar2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		case 112:
			StringCopy(&cVar2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		case 113:
			StringCopy(&cVar2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		case 114:
			StringCopy(&cVar2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		case 115:
			StringCopy(&cVar2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		case 116:
			StringCopy(&cVar2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		default:
			func_104(iVar10, bParam0, 117, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_134(bool bParam0)
{
	if (bParam0 < 107)
	{
		func_137(bParam0);
	}
	else if (bParam0 < 227)
	{
		func_136(bParam0);
	}
	else
	{
		func_135(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_104(3, bParam0, 318, -1);
	}
}

void func_135(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 227:
			StringCopy(&cVar2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 228:
			StringCopy(&cVar2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		case 229:
			StringCopy(&cVar2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		case 230:
			StringCopy(&cVar2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 231:
			StringCopy(&cVar2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 232:
			StringCopy(&cVar2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 233:
			StringCopy(&cVar2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 234:
			StringCopy(&cVar2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 235:
			StringCopy(&cVar2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 236:
			StringCopy(&cVar2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 237:
			StringCopy(&cVar2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 238:
			StringCopy(&cVar2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 239:
			StringCopy(&cVar2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 240:
			StringCopy(&cVar2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		case 241:
			StringCopy(&cVar2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 242:
			StringCopy(&cVar2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 243:
			StringCopy(&cVar2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 244:
			StringCopy(&cVar2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 245:
			StringCopy(&cVar2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 246:
			StringCopy(&cVar2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 247:
			StringCopy(&cVar2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 248:
			StringCopy(&cVar2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 249:
			StringCopy(&cVar2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 250:
			StringCopy(&cVar2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 251:
			StringCopy(&cVar2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 252:
			StringCopy(&cVar2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 253:
			StringCopy(&cVar2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 254:
			StringCopy(&cVar2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 255:
			StringCopy(&cVar2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 256:
			StringCopy(&cVar2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 257:
			StringCopy(&cVar2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 258:
			StringCopy(&cVar2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 259:
			StringCopy(&cVar2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		case 260:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		case 261:
			StringCopy(&cVar2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 262:
			StringCopy(&cVar2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 263:
			StringCopy(&cVar2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 264:
			StringCopy(&cVar2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 265:
			StringCopy(&cVar2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 266:
			StringCopy(&cVar2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		case 267:
			StringCopy(&cVar2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 268:
			StringCopy(&cVar2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		case 269:
			StringCopy(&cVar2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		case 270:
			StringCopy(&cVar2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 271:
			StringCopy(&cVar2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		case 272:
			StringCopy(&cVar2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 273:
			StringCopy(&cVar2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 274:
			StringCopy(&cVar2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 275:
			StringCopy(&cVar2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		case 276:
			StringCopy(&cVar2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		case 277:
			StringCopy(&cVar2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		case 278:
			StringCopy(&cVar2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		case 279:
			StringCopy(&cVar2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		case 280:
			StringCopy(&cVar2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		case 281:
			StringCopy(&cVar2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		case 282:
			StringCopy(&cVar2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		case 283:
			StringCopy(&cVar2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		case 284:
			StringCopy(&cVar2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		case 285:
			StringCopy(&cVar2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		case 286:
			StringCopy(&cVar2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		case 287:
			StringCopy(&cVar2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		case 288:
			StringCopy(&cVar2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		case 289:
			StringCopy(&cVar2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 290:
			StringCopy(&cVar2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		case 291:
			StringCopy(&cVar2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		case 292:
			StringCopy(&cVar2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		case 293:
			StringCopy(&cVar2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 294:
			StringCopy(&cVar2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 295:
			StringCopy(&cVar2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		case 296:
			StringCopy(&cVar2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		case 297:
			StringCopy(&cVar2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		case 298:
			StringCopy(&cVar2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		case 299:
			StringCopy(&cVar2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		case 300:
			StringCopy(&cVar2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		case 301:
			StringCopy(&cVar2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		case 302:
			StringCopy(&cVar2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		case 303:
			StringCopy(&cVar2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		case 304:
			StringCopy(&cVar2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		case 305:
			StringCopy(&cVar2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		case 306:
			StringCopy(&cVar2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		case 307:
			StringCopy(&cVar2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		case 308:
			StringCopy(&cVar2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		case 309:
			StringCopy(&cVar2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		case 310:
			StringCopy(&cVar2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		case 311:
			StringCopy(&cVar2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		case 312:
			StringCopy(&cVar2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		case 313:
			StringCopy(&cVar2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		case 314:
			StringCopy(&cVar2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		case 315:
			StringCopy(&cVar2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		case 316:
			StringCopy(&cVar2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		case 317:
			StringCopy(&cVar2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		default:
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_136(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 107:
			StringCopy(&cVar2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		case 136:
			StringCopy(&cVar2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		case 170:
			StringCopy(&cVar2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 181:
			StringCopy(&cVar2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 182:
			StringCopy(&cVar2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 183:
			StringCopy(&cVar2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 184:
			StringCopy(&cVar2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 185:
			StringCopy(&cVar2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 186:
			StringCopy(&cVar2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 187:
			StringCopy(&cVar2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 188:
			StringCopy(&cVar2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 189:
			StringCopy(&cVar2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		case 190:
			StringCopy(&cVar2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 191:
			StringCopy(&cVar2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 192:
			StringCopy(&cVar2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 193:
			StringCopy(&cVar2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 194:
			StringCopy(&cVar2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 195:
			StringCopy(&cVar2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 196:
			StringCopy(&cVar2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 197:
			StringCopy(&cVar2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 198:
			StringCopy(&cVar2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 199:
			StringCopy(&cVar2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 200:
			StringCopy(&cVar2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 201:
			StringCopy(&cVar2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 202:
			StringCopy(&cVar2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 203:
			StringCopy(&cVar2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 204:
			StringCopy(&cVar2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 205:
			StringCopy(&cVar2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 206:
			StringCopy(&cVar2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 207:
			StringCopy(&cVar2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 208:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 209:
			StringCopy(&cVar2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		case 210:
			StringCopy(&cVar2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		case 211:
			StringCopy(&cVar2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		case 212:
			StringCopy(&cVar2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		case 213:
			StringCopy(&cVar2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		case 214:
			StringCopy(&cVar2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		case 215:
			StringCopy(&cVar2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		case 216:
			StringCopy(&cVar2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		case 217:
			StringCopy(&cVar2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		case 218:
			StringCopy(&cVar2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		case 219:
			StringCopy(&cVar2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		case 220:
			StringCopy(&cVar2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		case 221:
			StringCopy(&cVar2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		case 222:
			StringCopy(&cVar2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		case 223:
			StringCopy(&cVar2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		case 224:
			StringCopy(&cVar2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		case 225:
			StringCopy(&cVar2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		case 226:
			StringCopy(&cVar2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		default:
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_137(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		case 33:
			StringCopy(&cVar2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		case 34:
			StringCopy(&cVar2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		case 35:
			StringCopy(&cVar2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		case 36:
			StringCopy(&cVar2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 37:
			StringCopy(&cVar2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 43:
			StringCopy(&cVar2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 44:
			StringCopy(&cVar2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 45:
			StringCopy(&cVar2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		case 46:
			StringCopy(&cVar2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		case 47:
			StringCopy(&cVar2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		case 48:
			StringCopy(&cVar2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		case 49:
			StringCopy(&cVar2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		case 50:
			StringCopy(&cVar2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		case 51:
			StringCopy(&cVar2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 52:
			StringCopy(&cVar2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 53:
			StringCopy(&cVar2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 60:
			StringCopy(&cVar2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 61:
			StringCopy(&cVar2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		case 62:
			StringCopy(&cVar2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		case 63:
			StringCopy(&cVar2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		case 64:
			StringCopy(&cVar2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		case 65:
			StringCopy(&cVar2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		case 66:
			StringCopy(&cVar2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		case 67:
			StringCopy(&cVar2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		case 68:
			StringCopy(&cVar2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		case 69:
			StringCopy(&cVar2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		case 70:
			StringCopy(&cVar2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 76:
			StringCopy(&cVar2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		case 89:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&cVar2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		default:
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_138(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 6:
			StringCopy(&cVar2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 7:
			StringCopy(&cVar2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 8:
			StringCopy(&cVar2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 10:
			StringCopy(&cVar2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 11:
			StringCopy(&cVar2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 12:
			StringCopy(&cVar2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 15:
			StringCopy(&cVar2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 16:
			StringCopy(&cVar2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 17:
			StringCopy(&cVar2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 18:
			StringCopy(&cVar2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 19:
			StringCopy(&cVar2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 21, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_139(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		default:
			func_104(iVar10, bParam0, 10, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_157(bParam1);
			break;
		case 2:
			func_156(bParam1);
			break;
		case 3:
			func_153(bParam1);
			break;
		case 4:
			func_152(bParam1);
			break;
		case 6:
			func_151(bParam1);
			break;
		case 5:
			func_150(bParam1);
			break;
		case 8:
			func_149(bParam1);
			break;
		case 9:
			func_148(bParam1);
			break;
		case 10:
			func_147(bParam1);
			break;
		case 1:
			func_146(bParam1);
			break;
		case 7:
			func_145(bParam1);
			break;
		case 11:
			func_144(bParam1);
			break;
		case 12:
			func_143(bParam1);
			break;
		case 13:
			func_142(bParam1);
			break;
		case 14:
			func_141(bParam1);
			break;
	}
}

void func_141(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		case 59:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 61:
			StringCopy(&cVar2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 62:
			StringCopy(&cVar2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 63:
			StringCopy(&cVar2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		case 64:
			StringCopy(&cVar2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 65:
			StringCopy(&cVar2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 66:
			StringCopy(&cVar2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		case 67:
			StringCopy(&cVar2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 68:
			StringCopy(&cVar2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 69:
			StringCopy(&cVar2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 70:
			StringCopy(&cVar2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		case 80:
			StringCopy(&cVar2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 81:
			StringCopy(&cVar2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 82:
			StringCopy(&cVar2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 87:
			StringCopy(&cVar2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 88:
			StringCopy(&cVar2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		default:
			func_104(iVar10, bParam0, 113, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_142(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 10, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_143(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 47:
			StringCopy(&cVar2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 48:
			StringCopy(&cVar2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 53, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_144(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		case 4:
			StringCopy(&cVar2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		case 5:
			StringCopy(&cVar2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		case 6:
			StringCopy(&cVar2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		case 7:
			StringCopy(&cVar2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		case 8:
			StringCopy(&cVar2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		case 9:
			StringCopy(&cVar2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		case 10:
			StringCopy(&cVar2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		case 11:
			StringCopy(&cVar2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		case 12:
			StringCopy(&cVar2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		case 13:
			StringCopy(&cVar2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		case 14:
			StringCopy(&cVar2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		case 15:
			StringCopy(&cVar2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		case 16:
			StringCopy(&cVar2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		case 17:
			StringCopy(&cVar2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		case 18:
			StringCopy(&cVar2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&cVar2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		case 20:
			StringCopy(&cVar2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		case 21:
			StringCopy(&cVar2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 22:
			StringCopy(&cVar2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		case 23:
			StringCopy(&cVar2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		case 24:
			StringCopy(&cVar2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		case 25:
			StringCopy(&cVar2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		case 26:
			StringCopy(&cVar2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		case 27:
			StringCopy(&cVar2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		case 28:
			StringCopy(&cVar2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		case 29:
			StringCopy(&cVar2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		case 30:
			StringCopy(&cVar2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		case 31:
			StringCopy(&cVar2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		case 32:
			StringCopy(&cVar2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		case 33:
			StringCopy(&cVar2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		case 34:
			StringCopy(&cVar2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		case 35:
			StringCopy(&cVar2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		case 36:
			StringCopy(&cVar2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		case 37:
			StringCopy(&cVar2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		case 38:
			StringCopy(&cVar2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		case 39:
			StringCopy(&cVar2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		case 40:
			StringCopy(&cVar2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		case 41:
			StringCopy(&cVar2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		case 42:
			StringCopy(&cVar2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		case 43:
			StringCopy(&cVar2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		case 44:
			StringCopy(&cVar2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 45, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_145(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 1, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_146(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 5, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_147(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		case 36:
			StringCopy(&cVar2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		case 37:
			StringCopy(&cVar2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		case 38:
			StringCopy(&cVar2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		case 39:
			StringCopy(&cVar2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		case 40:
			StringCopy(&cVar2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		case 41:
			StringCopy(&cVar2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		case 42:
			StringCopy(&cVar2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		case 43:
			StringCopy(&cVar2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		default:
			func_104(iVar10, bParam0, 48, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_148(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 20, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_149(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 24, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_150(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_104(iVar10, bParam0, 14, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_151(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		case 24:
			StringCopy(&cVar2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		case 29:
			StringCopy(&cVar2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		case 30:
			StringCopy(&cVar2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		case 31:
			StringCopy(&cVar2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 32:
			StringCopy(&cVar2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		case 33:
			StringCopy(&cVar2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		case 34:
			StringCopy(&cVar2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 35:
			StringCopy(&cVar2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 73:
			StringCopy(&cVar2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 84:
			StringCopy(&cVar2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 85:
			StringCopy(&cVar2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 86:
			StringCopy(&cVar2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		case 87:
			StringCopy(&cVar2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		case 88:
			StringCopy(&cVar2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 89:
			StringCopy(&cVar2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 90:
			StringCopy(&cVar2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 91:
			StringCopy(&cVar2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 92:
			StringCopy(&cVar2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 93:
			StringCopy(&cVar2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 94:
			StringCopy(&cVar2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 95:
			StringCopy(&cVar2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 96:
			StringCopy(&cVar2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 97:
			StringCopy(&cVar2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 98:
			StringCopy(&cVar2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		default:
			func_104(iVar10, bParam0, 99, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_152(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		case 10:
			StringCopy(&cVar2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		case 11:
			StringCopy(&cVar2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		case 12:
			StringCopy(&cVar2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		case 13:
			StringCopy(&cVar2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		case 15:
			StringCopy(&cVar2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		case 30:
			StringCopy(&cVar2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		case 70:
			StringCopy(&cVar2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		case 71:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		case 80:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		case 92:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 95:
			StringCopy(&cVar2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		case 96:
			StringCopy(&cVar2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		case 97:
			StringCopy(&cVar2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 98:
			StringCopy(&cVar2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 99:
			StringCopy(&cVar2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		case 100:
			StringCopy(&cVar2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		case 101:
			StringCopy(&cVar2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		case 102:
			StringCopy(&cVar2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		case 103:
			StringCopy(&cVar2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		case 104:
			StringCopy(&cVar2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		case 105:
			StringCopy(&cVar2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		case 106:
			StringCopy(&cVar2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		case 107:
			StringCopy(&cVar2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		case 108:
			StringCopy(&cVar2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		case 109:
			StringCopy(&cVar2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		case 110:
			StringCopy(&cVar2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&cVar2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 113, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_153(bool bParam0)
{
	if (bParam0 < 60)
	{
		func_155(bParam0);
	}
	else
	{
		func_154(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_104(3, bParam0, 181, -1);
	}
}

void func_154(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 64:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 66:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 67:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 68:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 69:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&cVar2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		case 76:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		case 89:
			StringCopy(&cVar2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		case 90:
			StringCopy(&cVar2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		case 91:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 107:
			StringCopy(&cVar2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		case 136:
			StringCopy(&cVar2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 170:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		default:
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_155(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&cVar2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		case 23:
			StringCopy(&cVar2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 40:
			StringCopy(&cVar2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 43:
			StringCopy(&cVar2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		case 44:
			StringCopy(&cVar2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&cVar2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		case 47:
			StringCopy(&cVar2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		case 48:
			StringCopy(&cVar2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		case 49:
			StringCopy(&cVar2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&cVar2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 51:
			StringCopy(&cVar2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		case 52:
			StringCopy(&cVar2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		case 53:
			StringCopy(&cVar2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		default:
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_156(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		default:
			func_104(iVar10, bParam0, 6, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_157(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		default:
			func_104(iVar10, bParam0, 7, -1);
			return;
	}
	func_98(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_158()
{
	Global_76434[0 /*14*/].f_1 = -1;
	Global_76434[0 /*14*/].f_2 = -1;
	Global_76434[0 /*14*/].f_5 = -1;
	Global_76434[0 /*14*/].f_3 = -1;
	Global_76434[0 /*14*/].f_4 = -1;
	Global_76434[0 /*14*/].f_7 = 0;
	Global_76434[0 /*14*/].f_6 = 0;
	Global_76434[0 /*14*/].f_13 = -1;
	Global_76434[0 /*14*/].f_12 = 0;
	Global_76434[0 /*14*/] = 0;
	StringCopy(&(Global_76434[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_159(bool bParam0)
{
	if (bParam0)
	{
		func_166();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_165(0))
		{
			func_160(0);
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

void func_160(int iParam0)
{
	if (func_164())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_163())
		{
			func_162(1, 1);
		}
		else
		{
			func_162(0, 0);
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
	if (!func_161())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_161()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_162(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_165(0))
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

bool func_163()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_164()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_165(int iParam0)
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

void func_166()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_167()
{
	Global_19671 = 0;
	func_168();
}

void func_168()
{
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_169()
{
	if ((UNK_0xEB6A8945D1AC98A1(bLocal_252) && UNK_0xEB6A8945D1AC98A1(bLocal_253)) && !bLocal_267)
	{
		func_15();
	}
	if (iLocal_52 == 1)
	{
		if (!bLocal_267)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
			{
				if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, 50f, 50f, 50f, 0, 1, 0))
				{
					func_15();
				}
			}
		}
	}
	else if (iLocal_52 == 2)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_252) && !UNK_0xEB6A8945D1AC98A1(bLocal_253))
		{
			if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, 200f, 200f, 200f, 0, 1, 0) && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, 200f, 200f, 200f, 0, 1, 0))
			{
				func_15();
			}
		}
	}
}

void func_170()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
	{
		if (iLocal_52 == 1)
		{
			if (!UNK_0x15D0A3E61766C539(UNK_0x16F2683693E537C9(), 0))
			{
				if (!UNK_0x12DE711B1C681E9E(bLocal_252, UNK_0x16F2683693E537C9(), 8f, 8f, 8f, 0, 1, 0) || !UNK_0x5A91F08DF773C39D(bLocal_252, vLocal_71, 215f, 215f, 215f, false, true, 0))
				{
					if ((UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_252) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_252)) || !UNK_0x5A91F08DF773C39D(bLocal_252, vLocal_71, 215f, 215f, 215f, false, true, 0))
					{
						if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) || !UNK_0x5A91F08DF773C39D(bLocal_252, vLocal_71, 215f, 215f, 215f, false, true, 0))
						{
							UNK_0xF3268524E9BE6D6E(bLocal_252, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
							UNK_0xFADC0A217229F6B5(bLocal_252, true);
							func_202();
							SYSTEM::WAIT(0);
							func_186(&uLocal_84, "re_acau", "re_ac_aim", 4, 0, 0, 0);
							func_15();
						}
					}
				}
			}
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
			{
				if (((UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("RHINO")) || UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("ANNIHILATOR"))) || UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("BUZZARD"))) || UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("LAZER")))
				{
					func_15();
				}
			}
		}
	}
}

void func_171()
{
	if (iLocal_52 == 1)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
		{
			if (!UNK_0x46BC6F5F089F3AFF(bLocal_252))
			{
				if (iLocal_278 < 3)
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, 20f, 20f, 10f, 0, 1, 0))
					{
						if (func_176())
						{
							func_175(0);
						}
					}
					else if (func_3())
					{
						func_175(1);
					}
				}
			}
		}
		else if (func_176())
		{
			func_175(0);
		}
	}
	else if (iLocal_52 == 2)
	{
		if (!UNK_0x437347B10A200C4B(bLocal_252, 0))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, 31f, 31f, 11f, 0, 1, 0))
			{
				if (func_176())
				{
					func_175(0);
				}
			}
			else if (func_3())
			{
				func_175(1);
			}
		}
		else if (!UNK_0x437347B10A200C4B(bLocal_253, 0))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_253, 31f, 31f, 11f, 0, 1, 0))
			{
				if (func_176())
				{
					func_175(0);
				}
			}
			else if (func_3())
			{
				func_175(1);
			}
		}
		else if (func_176())
		{
			func_175(0);
		}
		if (!func_3())
		{
			if (!bLocal_270)
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, 30f, 30f, 10f, 0, 1, 0))
				{
					if (func_201() == 0)
					{
						func_186(&uLocal_84, "reac2au", "reac2_attacM", 4, 0, 0, 0);
					}
					else if (func_201() == 1)
					{
						func_186(&uLocal_84, "reac2au", "reac2_attacF", 4, 0, 0, 0);
					}
					else if (func_201() == 2)
					{
						func_186(&uLocal_84, "reac2au", "reac2_attacT", 4, 0, 0, 0);
					}
				}
				bLocal_270 = true;
			}
			if (iLocal_276 < UNK_0x1C0640BA9A7327B3())
			{
				if (func_174())
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
					{
						if (!UNK_0x46BC6F5F089F3AFF(bLocal_252))
						{
							func_186(&uLocal_84, "reac2au", "reac2_attac2", 4, 0, 0, 0);
							iLocal_276 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 5000));
						}
					}
				}
				else if (!UNK_0xEB6A8945D1AC98A1(bLocal_253))
				{
					if (!UNK_0x46BC6F5F089F3AFF(bLocal_253))
					{
						func_186(&uLocal_84, "reac2au", "reac2_attac3", 4, 0, 0, 0);
						iLocal_276 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 5000));
					}
				}
			}
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
	{
		if (!UNK_0x46BC6F5F089F3AFF(bLocal_252))
		{
			if ((UNK_0x869EFD0BC0868856(bLocal_252) || UNK_0x15D0A3E61766C539(bLocal_252, joaat("WEAPON_STUNGUN"))) || UNK_0xB87D13D0C064E9D1(bLocal_252, UNK_0x16F2683693E537C9(), 1))
			{
				func_202();
				UNK_0xE910A68AA670B4AA(bLocal_252);
			}
			if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, vLocal_78, 0, 1, 0) || !UNK_0x5A91F08DF773C39D(bLocal_252, vLocal_71, 290f, 290f, 290f, false, true, 0))
			{
				if ((!bLocal_265 && !func_172("reac2_attac1")) && iLocal_278 < 3)
				{
					func_202();
					SYSTEM::WAIT(0);
					if (iLocal_52 == 1)
					{
						func_186(&uLocal_84, "re_acau", "re_ac_flee", 4, 0, 0, 0);
					}
					else if (iLocal_52 == 2)
					{
						func_186(&uLocal_84, "reac2au", "reac2_flee", 4, 0, 0, 0);
					}
					bLocal_265 = true;
				}
			}
		}
	}
}

bool func_172(bool bParam0)
{
	var uVar0;

	if (func_3())
	{
		MemCopy(&uVar0, {func_173()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_173()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_174()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

void func_175(int iParam0)
{
	Global_21816 = iParam0;
}

bool func_176()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_177()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_249))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_252))
		{
			UNK_0x142CC44DB769B57E(&iLocal_249);
		}
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_250))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_253))
		{
			UNK_0x142CC44DB769B57E(&iLocal_250);
		}
	}
}

void func_178()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
	{
		if (UNK_0x405E212DDE472467(bLocal_252, 0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(bLocal_252, 0), 0))
			{
				if (UNK_0xB4ECF989E2C1DAC8(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy", 3))
				{
					if ((((((((UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.1f && UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.075f) || (UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.25f && UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.225f)) || (UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.38f && UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.355f)) || (UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.53f && UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.505f)) || (UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.638f && UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.613f)) || (UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.7f && UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.675f)) || (UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.833f && UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.808f)) || (UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 1f && UNK_0x8CA9406E01C7EE58(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.983f))
					{
						UNK_0xDFC6BA855748EB10(UNK_0x6937EA2286828455(bLocal_252, 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						UNK_0xCEAA091B490F8407(-1, "SUSPENSION_SCRIPT_FORCE", UNK_0x6937EA2286828455(bLocal_252, 0), false, 0, 0);
					}
				}
				if (func_236() && !bLocal_269)
				{
					if (!func_3())
					{
						func_186(&uLocal_84, "reac2au", "reac2_sex", 4, 0, 0, 0);
						bLocal_269 = true;
					}
				}
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_253))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_253, UNK_0x16F2683693E537C9(), 1))
			{
				UNK_0xC6EB89C59F2AF6B8(bLocal_253, "random@train_tracks", "frontseat_carsex_death_exit_top_guy", 2f, -2f, -1, 2097152, false, 0, 0, 0);
			}
		}
	}
}

void func_179()
{
	if (!UNK_0x437347B10A200C4B(bLocal_254, 0))
	{
		if ((!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_254, 0)) || iLocal_52 == 2)
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_254, vLocal_75, 0, 1, 0) || bLocal_260)
			{
				if (iLocal_52 == 1)
				{
					vLocal_59 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - Vector(-1f, 8.8f, 0f) };
					UNK_0xB885EF0389689E54(vLocal_59, 0, &vLocal_59, 0);
					vLocal_62 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) + Vector(-1f, 0f, 8.8f) };
					UNK_0xB885EF0389689E54(vLocal_62, 0, &vLocal_62, 0);
					vLocal_65 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) + Vector(-1f, 8.8f, 0f) };
					UNK_0xB885EF0389689E54(vLocal_65, 0, &vLocal_65, 0);
					vLocal_68 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - Vector(-1f, 0f, 8.8f) };
					UNK_0xB885EF0389689E54(vLocal_68, 0, &vLocal_68, 0);
					if (!UNK_0x8E28E832BEAC3DCE(vLocal_59, 2f))
					{
						bLocal_252 = UNK_0x36F2404464202779(19, bLocal_258, vLocal_59 - Vector(1f, 0f, 0f), func_184(vLocal_59, func_185(UNK_0xD803B885F5E47A62())), 1, true);
					}
					else if (!UNK_0x8E28E832BEAC3DCE(vLocal_62, 2f))
					{
						bLocal_252 = UNK_0x36F2404464202779(19, bLocal_258, vLocal_62 - Vector(1f, 0f, 0f), func_184(vLocal_62, func_185(UNK_0xD803B885F5E47A62())), 1, true);
					}
					else if (!UNK_0x8E28E832BEAC3DCE(vLocal_65, 2f))
					{
						bLocal_252 = UNK_0x36F2404464202779(19, bLocal_258, vLocal_65 - Vector(1f, 0f, 0f), func_184(vLocal_65, func_185(UNK_0xD803B885F5E47A62())), 1, true);
					}
					else if (!UNK_0x8E28E832BEAC3DCE(vLocal_68, 2f))
					{
						bLocal_252 = UNK_0x36F2404464202779(19, bLocal_258, vLocal_68 - Vector(1f, 0f, 0f), func_184(vLocal_68, func_185(UNK_0xD803B885F5E47A62())), 1, true);
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
					{
						UNK_0x4F39CC3882DD074E(bLocal_252, "A_M_M_HillBilly_01_WHITE_MINI_02");
						UNK_0x262EF6C6306BEA6C(bLocal_252, joaat("WEAPON_STUNGUN"), -1, true, true);
						UNK_0x29CD9554726C7577(bLocal_252, 100);
						UNK_0x4E885A246A9D983A(bLocal_252, 137, true);
						UNK_0x4E885A246A9D983A(bLocal_252, 188, true);
						UNK_0x4E885A246A9D983A(bLocal_252, 286, true);
						UNK_0x2974CDB4C7DEAD0B(UNK_0x16F2683693E537C9(), 10000);
						UNK_0xAFF39FB306F8E232(bLocal_252, 0, false);
						UNK_0xAFF39FB306F8E232(bLocal_252, 27, true);
						UNK_0xAFF39FB306F8E232(bLocal_252, 13, true);
						UNK_0xAFF39FB306F8E232(bLocal_252, 50, true);
						UNK_0x3CC33E4E9CE523F4(bLocal_252, 2);
						UNK_0x083F03A847B640E9(bLocal_252, 2);
						UNK_0xB35CCEC0D4946813(bLocal_252, 0);
						UNK_0x67415F01577A142E(bLocal_252, 2, 11f);
						UNK_0x67415F01577A142E(bLocal_252, 13, 1f);
						UNK_0x33CE5A9E32EA10B2(bLocal_252, 1);
						UNK_0x6DF7BF67E86AAE86(bLocal_252, bLocal_81);
						func_183(&uLocal_84, 4, bLocal_252, "RAPIST", 0, 1);
						UNK_0x33B89BCE228F08FC(UNK_0x16F2683693E537C9(), -8f);
						UNK_0x11AD11297DC58CC7(bLocal_252, true);
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_249))
						{
							iLocal_249 = func_180(bLocal_252, 1, 145);
						}
						UNK_0x142CC44DB769B57E(&iLocal_251);
						UNK_0xDD353D0E9C789D0E(&iLocal_271);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
						UNK_0x161356BF7864C47B(false, UNK_0x16F2683693E537C9(), UNK_0x16F2683693E537C9(), 3f, 1, 3f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0x75ABDC5F81978924(iLocal_271);
						UNK_0x78ADC381772E3D54(bLocal_252, iLocal_271);
						UNK_0xF82EA857DA10E0CD(&iLocal_271);
						UNK_0xFADC0A217229F6B5(bLocal_252, true);
						UNK_0xF895E10BF4C72645(bLocal_252, 0, 0);
						bLocal_261 = true;
					}
				}
				else if (iLocal_52 == 2)
				{
					bLocal_260 = true;
					UNK_0xC92DB9682A650680(bLocal_277);
					if (UNK_0xE4EDC4B0E92C078B(iLocal_251))
					{
						UNK_0x142CC44DB769B57E(&iLocal_251);
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_249))
						{
							iLocal_249 = func_180(bLocal_252, 1, 145);
						}
						UNK_0xDD353D0E9C789D0E(&iLocal_271);
						UNK_0xC6EB89C59F2AF6B8(false, "random@train_tracks", "frontseat_carsex_outro_low_guy", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0x75ABDC5F81978924(iLocal_271);
						UNK_0x78ADC381772E3D54(bLocal_252, iLocal_271);
						UNK_0xF82EA857DA10E0CD(&iLocal_271);
						UNK_0xFADC0A217229F6B5(bLocal_252, true);
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_253))
					{
						iLocal_250 = func_180(bLocal_253, 1, 145);
						UNK_0xD458AC1C1D29C3B4(bLocal_253, 200, false);
						UNK_0xDD353D0E9C789D0E(&iLocal_271);
						UNK_0xC6EB89C59F2AF6B8(false, "random@train_tracks", "frontseat_carsex_outro_top_guy", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
						{
							UNK_0x78A77CDD64392938(false, 400);
						}
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 0, 2);
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0x75ABDC5F81978924(iLocal_271);
						UNK_0x78ADC381772E3D54(bLocal_253, iLocal_271);
						UNK_0xF82EA857DA10E0CD(&iLocal_271);
						UNK_0xFADC0A217229F6B5(bLocal_253, true);
					}
					func_202();
					SYSTEM::WAIT(0);
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_252) && !UNK_0xEB6A8945D1AC98A1(bLocal_253))
					{
						func_186(&uLocal_84, "reac2au", "reac2_attac1", 4, 0, 0, 0);
					}
					bLocal_261 = true;
				}
			}
		}
	}
}

int func_180(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_181(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_181(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_182(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_182(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_182(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_182(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_183(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_184(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_185(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

int func_186(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_200(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_187(sParam2, iParam3, 0);
}

int func_187(char* sParam0, int iParam1, bool bParam2)
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
					func_199();
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
		if (func_198(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_197();
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
				func_196();
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
				if (func_195())
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
			if (func_161())
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
			func_194();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_193();
		func_188();
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
		func_199();
	}
	return 0;
}

void func_188()
{
	if (!func_189())
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

bool func_189()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_192())
	{
		return false;
	}
	if (func_190(UNK_0xD803B885F5E47A62()))
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

bool func_190(int iParam0)
{
	return func_191(iParam0, 20);
}

bool func_191(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_192()
{
	return -1;
}

void func_193()
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

void func_194()
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

bool func_195()
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

void func_196()
{
	if (func_26(14))
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
		Global_19486 = func_201();
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

void func_197()
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

bool func_198(bool bParam0, int iParam1)
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

void func_199()
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

void func_200(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_201()
{
	func_25();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_202()
{
	Global_19671 = 0;
	func_203();
}

void func_203()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

float func_204(bool bParam0, vector3 vParam1, int iParam4)
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

void func_205()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_254, 0))
	{
		if (!func_236())
		{
			if (func_204(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(bLocal_254, true), 1) < IntToFloat(iLocal_273))
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_251))
				{
					UNK_0x142CC44DB769B57E(&iLocal_251);
				}
				iLocal_251 = func_217(bLocal_254, 0, 0);
				UNK_0xF2D30B8ACAF12A39(iLocal_251, false);
				if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
				{
					bLocal_256 = UNK_0x728870EB733D12A1();
				}
				func_207(1);
				func_206(1);
			}
		}
	}
	else
	{
		func_14();
	}
	if (iLocal_52 == 1)
	{
		if (!UNK_0x437347B10A200C4B(bLocal_252, 0))
		{
			if ((((UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_252, 13f, 13f, 13f, 0, 1, 0) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) || UNK_0xB87D13D0C064E9D1(UNK_0x16F2683693E537C9(), bLocal_252, 1)) || UNK_0xB87D13D0C064E9D1(bLocal_252, UNK_0x16F2683693E537C9(), 1)) || UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(bLocal_252, true), 2f))
			{
				bLocal_260 = true;
				SYSTEM::SETTIMERB(0);
				if (!UNK_0x437347B10A200C4B(bLocal_252, 0))
				{
					if (!bLocal_83)
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_249))
						{
							iLocal_249 = func_180(bLocal_252, 1, 145);
						}
						UNK_0x142CC44DB769B57E(&iLocal_251);
						bLocal_83 = true;
						func_186(&uLocal_84, "re_acau", "re_ac_attac1", 4, 0, 0, 0);
					}
					else
					{
						func_186(&uLocal_84, "re_acau", "re_ac_rambl", 4, 0, 0, 0);
					}
					SYSTEM::SETTIMERB(0);
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
					{
						UNK_0x0C8C0C840C2D1AD2(bLocal_252, UNK_0x16F2683693E537C9(), 30000, 0, 2);
					}
				}
			}
		}
	}
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, UNK_0xBB0808A181D4745C(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

int func_207(bool bParam0)
{
	if (func_211())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_19(Global_111627))
		{
			func_208(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_19(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_209(func_210(iParam0), -1);
					Global_111638.f_24990.f_2++;
					UNK_0x5D96D8530B3D0904(&Global_111634, false);
				}
			}
			break;
		case 1:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111634, true))
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_209(func_210(iParam0), -1);
					Global_111638.f_24990.f_3++;
					UNK_0x5D96D8530B3D0904(&Global_111634, true);
				}
			}
			break;
		case 2:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111634, 2))
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_209(func_210(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_209(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_210(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

bool func_211()
{
	switch (func_212(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_212(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_216(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		UNK_0x62DE699599F0417E(UNK_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			UNK_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_214(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_213(uParam0, iParam4);
		}
	}
	return 2;
}

void func_213(var uParam0, int iParam1)
{
	int iVar0;

	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *uParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_214(int iParam0)
{
	return func_215(iParam0, Global_41431);
}

int func_215(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		case 5:
			break;
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}
	return 0;
}

bool func_216(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_214(iParam0))
	{
		return false;
	}
	return true;
}

int func_217(bool bParam0, bool bParam1, bool bParam2)
{
	return func_181(bParam0, !bParam1, bParam2);
}

void func_218()
{
	if (!UNK_0x437347B10A200C4B(bLocal_254, 0))
	{
		if (iLocal_52 == 1)
		{
			if (!UNK_0x5A91F08DF773C39D(bLocal_254, vLocal_71, 15f, 15f, 15f, false, true, 0))
			{
				func_14();
			}
		}
		else if (iLocal_52 == 2)
		{
			if ((((((((UNK_0xB87D13D0C064E9D1(bLocal_254, UNK_0x16F2683693E537C9(), 1) || UNK_0x4A42C22237F5FF76(UNK_0x16F2683693E537C9(), vLocal_71 - Vector(50f, 50f, 50f), vLocal_71 + Vector(50f, 50f, 50f), 0, 1)) || UNK_0x372F6F38C16E36DA(2, vLocal_71 - Vector(50f, 50f, 50f), vLocal_71 + Vector(50f, 50f, 50f))) || UNK_0x372F6F38C16E36DA(4, vLocal_71 - Vector(50f, 50f, 50f), vLocal_71 + Vector(50f, 50f, 50f))) || UNK_0x372F6F38C16E36DA(0, vLocal_71 - Vector(50f, 50f, 50f), vLocal_71 + Vector(50f, 50f, 50f))) || UNK_0x372F6F38C16E36DA(1, vLocal_71 - Vector(50f, 50f, 50f), vLocal_71 + Vector(50f, 50f, 50f))) || UNK_0x029064EA9141FCC2(vLocal_71 - Vector(50f, 50f, 50f), vLocal_71 + Vector(50f, 50f, 50f))) || UNK_0x9E9FD30CF64A88A8(vLocal_71 - Vector(50f, 50f, 50f), vLocal_71 + Vector(50f, 50f, 50f))) || (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_254, 50f, 50f, 50f, 0, 1, 2) && UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62())))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
				{
					bLocal_256 = UNK_0x728870EB733D12A1();
				}
				func_207(1);
				func_206(1);
				bLocal_260 = true;
			}
		}
	}
}

void func_219()
{
	UNK_0xC2127C0F64D6A3B9();
	func_220();
}

void func_220()
{
	Global_22211.f_134 = 1;
}

void func_221()
{
	UNK_0xAB8E2DDC7AF955E0(joaat("SURFER"), true);
	if (iLocal_52 == 1)
	{
		UNK_0x7D6CA5F52B3748BF(vLocal_71 - Vector(20f, 50f, 50f), vLocal_71 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_52 == 2)
	{
		UNK_0x7D6CA5F52B3748BF(vLocal_71 - Vector(50f, 100f, 100f), vLocal_71 + Vector(50f, 100f, 100f), 0, 1, 1, 1);
	}
	UNK_0x28F5E4DA506AC0CA(vLocal_56, 50f, 0, 0, 0, 0, false, 0);
	UNK_0x51B096AAC60548C1(0.1f);
	UNK_0x523BCC9DC80CD82F(bLocal_258);
	UNK_0x523BCC9DC80CD82F(bLocal_259);
	UNK_0x3F423BF5B8125A50("random@train_tracks");
	UNK_0x3F423BF5B8125A50("amb@world_human_guard_patrol@male@idle_b");
	UNK_0x13896FDECC859926(bLocal_277);
	UNK_0x9CBC55A05A07FC47(0);
	UNK_0x8BC9595FD2792B5D("RE_ABANDONED_VEHICLE_SCENE");
	while (((((!UNK_0xB87F6CF6E5628C67(bLocal_258) || !UNK_0xB87F6CF6E5628C67(bLocal_259)) || !UNK_0xB4AE0788C1587752("random@train_tracks")) || !UNK_0xB4AE0788C1587752("amb@world_human_guard_patrol@male@idle_b")) || !UNK_0x13896FDECC859926(bLocal_277)) || !UNK_0x562F77A7F33D2E46("RE_ABANDONED_VEHICLE_SCENE"))
	{
		SYSTEM::WAIT(0);
	}
	if (func_201() == 0)
	{
		func_183(&uLocal_84, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (func_201() == 1)
	{
		func_183(&uLocal_84, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else if (func_201() == 2)
	{
		func_183(&uLocal_84, 2, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	UNK_0x15EA7F4313456B1D(3, false);
	UNK_0x15EA7F4313456B1D(5, false);
	bLocal_254 = UNK_0x122AAB0B1D6F55AD(bLocal_259, vLocal_71, bLocal_74, true, true, false);
	UNK_0x25BD67336EA4AECE(bLocal_254, 10000);
	UNK_0xBA486C69AC1FDE77(bLocal_254);
	UNK_0xF8CF67C6E39C23A9(bLocal_254, 5f);
	UNK_0x71199B01895C6202(bLocal_259);
	UNK_0x2E1E5367A885F9B7(bLocal_254, "RE_ABANDONED_VEHICLE_MOTORHOME", 0);
	UNK_0x5C73CD40F396DC05(bLocal_254, 3);
	UNK_0xF63400DBE3303D26("Redneck", &bLocal_81);
	UNK_0x0E2400AB9174FA81(5, bLocal_81, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(5, joaat("COP"), bLocal_81);
	UNK_0x0E2400AB9174FA81(5, bLocal_81, joaat("COP"));
	if (iLocal_52 == 1)
	{
		UNK_0x611DFA9294B339CA(bLocal_254, false, 1, false);
		UNK_0x611DFA9294B339CA(bLocal_254, true, 1, false);
		UNK_0x26E12C087E2B91F8(bLocal_254, vLocal_71, 0f, 1700f, 1);
		UNK_0x56FDC9ADE35F7DB0(bLocal_254, false, true, 0);
		UNK_0x0882E3DC0C991680(bLocal_254, 2);
	}
	else if (iLocal_52 == 2)
	{
		UNK_0x56FDC9ADE35F7DB0(bLocal_254, false, true, 0);
		UNK_0x0882E3DC0C991680(bLocal_254, 1);
		bLocal_252 = UNK_0x852A19533F896693(bLocal_254, 26, bLocal_258, -1, 1, true);
		UNK_0x64F9F278AB9DCA2C(bLocal_252, false, false, 2, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_252, 2, true, 2, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_252, 3, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_252, 4, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_252, 8, false, false, 0);
		UNK_0x11AD11297DC58CC7(bLocal_252, true);
		UNK_0x6DF7BF67E86AAE86(bLocal_252, bLocal_81);
		UNK_0x262EF6C6306BEA6C(bLocal_252, joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
		UNK_0xAFF39FB306F8E232(bLocal_252, 1, false);
		UNK_0x298903DD96203C2C(bLocal_252, 25);
		UNK_0x33CE5A9E32EA10B2(bLocal_252, 1);
		UNK_0x4F39CC3882DD074E(bLocal_252, "A_M_M_HillBilly_02_WHITE_MINI_01");
		func_183(&uLocal_84, 4, bLocal_252, "INCESTBRO1", 0, 1);
		bLocal_253 = UNK_0x852A19533F896693(bLocal_254, 26, bLocal_258, false, 1, true);
		UNK_0x64F9F278AB9DCA2C(bLocal_253, false, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_253, 2, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_253, 3, false, 2, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_253, 4, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_253, 8, false, false, 0);
		UNK_0xD458AC1C1D29C3B4(bLocal_253, 100000000, false);
		UNK_0x11AD11297DC58CC7(bLocal_253, true);
		UNK_0x6DF7BF67E86AAE86(bLocal_253, bLocal_81);
		UNK_0x262EF6C6306BEA6C(bLocal_253, joaat("WEAPON_PISTOL"), -1, false, true);
		UNK_0xAFF39FB306F8E232(bLocal_253, 1, false);
		UNK_0x298903DD96203C2C(bLocal_253, 25);
		UNK_0x33CE5A9E32EA10B2(bLocal_253, 1);
		UNK_0x4F39CC3882DD074E(bLocal_253, "A_M_M_HillBilly_02_WHITE_MINI_02");
		func_183(&uLocal_84, 5, bLocal_253, "INCESTBRO2", 0, 1);
		UNK_0xC6EB89C59F2AF6B8(bLocal_252, "random@train_tracks", "frontseat_carsex_loop_low_guy", 1000f, -8f, -1, 1, false, 0, 0, 0);
		UNK_0xC6EB89C59F2AF6B8(bLocal_253, "random@train_tracks", "frontseat_carsex_loop_top_guy", 1000f, -8f, -1, 1, false, 0, 0, 0);
		UNK_0x71199B01895C6202(bLocal_258);
	}
	bLocal_53 = true;
}

void func_222()
{
	if (iLocal_52 == 1)
	{
		bLocal_258 = joaat("A_M_M_HILLBILLY_01");
		bLocal_259 = joaat("SURFER");
		vLocal_71 = { 1430.073f, 2976.399f, 39.7694f };
		bLocal_74 = 131.558f;
		vLocal_78 = { 18f, 18f, 10f };
		iLocal_273 = 170;
		iLocal_274 = 40;
		vLocal_75 = { 20f, 20f, 10f };
		bLocal_277 = "RE8A_TASERED";
	}
	else if (iLocal_52 == 2)
	{
		bLocal_258 = joaat("A_M_Y_ACULT_01");
		bLocal_259 = joaat("JOURNEY");
		vLocal_59 = { 2162.552f, 2122.646f, 124.7956f };
		vLocal_71 = { 2162.552f, 2122.646f, 124.7956f };
		bLocal_74 = 218.6214f;
		vLocal_78 = { 20f, 20f, 20f };
		iLocal_273 = 70;
		iLocal_274 = 25;
		vLocal_75 = { 10f, 10f, 10f };
		bLocal_277 = "RE8B_CAUGHT";
	}
	bLocal_55 = true;
}

bool func_223()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_48) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_234())
		{
			return false;
		}
	}
	if (func_230())
	{
		return true;
	}
	if (func_224(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_224(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	iVar33 = -1;
	fVar34 = fParam0;
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (func_27(func_201()))
		{
			iVar36 = func_24();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_225(iVar32, &Var0);
					fVar35 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_225(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_226(uParam1, "Abigail1", func_228(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 1:
			func_226(uParam1, "Abigail2", func_228(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 2:
			func_226(uParam1, "Barry1", func_228(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 3:
			func_226(uParam1, "Barry2", func_228(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_227(iParam0), 1, 1);
			break;
		case 4:
			func_226(uParam1, "Barry3", func_228(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 5:
			func_226(uParam1, "Barry3A", func_228(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 6:
			func_226(uParam1, "Barry3C", func_228(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 7:
			func_226(uParam1, "Barry4", func_228(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_227(iParam0), 0, 0);
			break;
		case 8:
			func_226(uParam1, "Dreyfuss1", func_228(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 9:
			func_226(uParam1, "Epsilon1", func_228(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 10:
			func_226(uParam1, "Epsilon2", func_228(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 11:
			func_226(uParam1, "Epsilon3", func_228(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 12:
			func_226(uParam1, "Epsilon4", func_228(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 13:
			func_226(uParam1, "Epsilon5", func_228(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 14:
			func_226(uParam1, "Epsilon6", func_228(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 15:
			func_226(uParam1, "Epsilon7", func_228(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 16:
			func_226(uParam1, "Epsilon8", func_228(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 17:
			func_226(uParam1, "Extreme1", func_228(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 18:
			func_226(uParam1, "Extreme2", func_228(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 19:
			func_226(uParam1, "Extreme3", func_228(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 20:
			func_226(uParam1, "Extreme4", func_228(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 21:
			func_226(uParam1, "Fanatic1", func_228(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_227(iParam0), 1, 0);
			break;
		case 22:
			func_226(uParam1, "Fanatic2", func_228(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_227(iParam0), 1, 0);
			break;
		case 23:
			func_226(uParam1, "Fanatic3", func_228(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_227(iParam0), 0, 1);
			break;
		case 24:
			func_226(uParam1, "Hao1", func_228(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_227(iParam0), 0, 1);
			break;
		case 25:
			func_226(uParam1, "Hunting1", func_228(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 26:
			func_226(uParam1, "Hunting2", func_228(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 27:
			func_226(uParam1, "Josh1", func_228(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 28:
			func_226(uParam1, "Josh2", func_228(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_227(iParam0), 1, 1);
			break;
		case 29:
			func_226(uParam1, "Josh3", func_228(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_227(iParam0), 1, 1);
			break;
		case 30:
			func_226(uParam1, "Josh4", func_228(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 31:
			func_226(uParam1, "Maude1", func_228(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 32:
			func_226(uParam1, "Minute1", func_228(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 33:
			func_226(uParam1, "Minute2", func_228(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 34:
			func_226(uParam1, "Minute3", func_228(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 35:
			func_226(uParam1, "MrsPhilips1", func_228(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 36:
			func_226(uParam1, "MrsPhilips2", func_228(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 37:
			func_226(uParam1, "Nigel1", func_228(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 38:
			func_226(uParam1, "Nigel1A", func_228(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_227(iParam0), 1, 1);
			break;
		case 39:
			func_226(uParam1, "Nigel1B", func_228(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_227(iParam0), 1, 1);
			break;
		case 40:
			func_226(uParam1, "Nigel1C", func_228(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_227(iParam0), 1, 1);
			break;
		case 41:
			func_226(uParam1, "Nigel1D", func_228(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_227(iParam0), 1, 1);
			break;
		case 42:
			func_226(uParam1, "Nigel2", func_228(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_227(iParam0), 1, 1);
			break;
		case 43:
			func_226(uParam1, "Nigel3", func_228(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_227(iParam0), 1, 1);
			break;
		case 44:
			func_226(uParam1, "Omega1", func_228(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 45:
			func_226(uParam1, "Omega2", func_228(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 46:
			func_226(uParam1, "Paparazzo1", func_228(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 47:
			func_226(uParam1, "Paparazzo2", func_228(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 48:
			func_226(uParam1, "Paparazzo3", func_228(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 49:
			func_226(uParam1, "Paparazzo3A", func_228(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 50:
			func_226(uParam1, "Paparazzo3B", func_228(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 51:
			func_226(uParam1, "Paparazzo4", func_228(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 52:
			func_226(uParam1, "Rampage1", func_228(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 54:
			func_226(uParam1, "Rampage3", func_228(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 55:
			func_226(uParam1, "Rampage4", func_228(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 56:
			func_226(uParam1, "Rampage5", func_228(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_227(iParam0), 0, 0);
			break;
		case 53:
			func_226(uParam1, "Rampage2", func_228(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_227(iParam0), 1, 0);
			break;
		case 57:
			func_226(uParam1, "TheLastOne", func_228(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 58:
			func_226(uParam1, "Tonya1", func_228(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 59:
			func_226(uParam1, "Tonya2", func_228(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 60:
			func_226(uParam1, "Tonya3", func_228(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 61:
			func_226(uParam1, "Tonya4", func_228(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		case 62:
			func_226(uParam1, "Tonya5", func_228(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_227(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_226(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = sParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = sParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = uParam24;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 0;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 1;
		case 13:
			return 0;
		case 14:
			return 1;
		case 15:
			return 0;
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
			return 1;
		case 23:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 26:
			return 1;
		case 27:
			return 0;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 0;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 0;
		case 49:
			return 1;
		case 50:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 54:
			return 1;
		case 55:
			return 1;
		case 56:
			return 1;
		case 53:
			return 1;
		case 57:
			return 1;
		case 58:
			return 1;
		case 59:
			return 1;
		case 60:
			return 1;
		case 61:
			return 1;
		case 62:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<2> func_228(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_229(iParam0) };
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_229(int iParam0)
{
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		default:
			break;
	}
	return Var0;
}

bool func_230()
{
	if (func_233() && !func_234())
	{
		return true;
	}
	if (func_232() && func_231())
	{
		return true;
	}
	return false;
}

bool func_231()
{
	return Global_111356 > 0;
}

bool func_232()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_233()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_234()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xBA19B87E031E2390() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_235()
{
	if (!func_214(5))
	{
		return true;
	}
	if (func_230())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_234())
		{
			return false;
		}
	}
	if (func_224(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_236()
{
	if ((Global_111627 == func_34() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_237()
{
	if (bLocal_54)
	{
		if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0xED4934AFB6EC6451("Dont_tazeme_bro"))
			{
				UNK_0x9A1335ECD7BD117F("Dont_tazeme_bro");
			}
		}
		UNK_0x51F8DBE54C75AE47(iLocal_82);
		UNK_0x8C26F31DFF77D124();
		UNK_0x38DC636F3D2D2FA8(bLocal_277);
		UNK_0xB547E3FFEB27073E();
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0x2974CDB4C7DEAD0B(UNK_0x16F2683693E537C9(), -1);
		}
		UNK_0x8910D3D58E0132B8("RE_ABANDONED_VEHICLE_SCENE");
		func_202();
		func_206(0);
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x15EA7F4313456B1D(5, true);
		UNK_0x51B096AAC60548C1(1f);
		if (!UNK_0x437347B10A200C4B(bLocal_256, 0))
		{
			if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_256, 0) && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_256, 50f, 50f, 50f, 0, 1, 0))
			{
				func_265(bLocal_256, 0, 145);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_252) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0x71F6097CACDECCC0(bLocal_252);
			UNK_0xF3268524E9BE6D6E(bLocal_252, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
			UNK_0xFADC0A217229F6B5(bLocal_252, true);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_253) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0x71F6097CACDECCC0(bLocal_253);
			UNK_0xF3268524E9BE6D6E(bLocal_253, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
			UNK_0xFADC0A217229F6B5(bLocal_253, true);
		}
	}
	func_238(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_238(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_236())
	{
		func_243(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_242(30000);
		StringCopy(&cVar0, func_241(Global_111627, 1), 64);
		if (func_33(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		UNK_0xCDD9EADCF57830A9(&cVar0, Global_111624, (UNK_0x1C0640BA9A7327B3() - Global_111625), 0);
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111634, false) && Global_111638.f_24990.f_2 < 3)
	{
		UNK_0x0674E58A79778E99(&Global_111634, false);
	}
	func_240(&Global_30827);
	Global_111628 = 0;
	func_239(-1);
}

void func_239(int iParam0)
{
	Global_111627 = iParam0;
}

void func_240(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

char* func_241(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
		case 1:
			return "RE_ATMROBBERY";
		case 2:
			return "RE_BUSTOUR";
		case 3:
			return "RE_DOMESTIC";
		case 4:
			return "RE_GETAWAYDRIVER";
		case 5:
			return "RE_SHOPROBBERY";
		case 6:
			return "RE_SNATCHED";
		case 7:
			return "RE_LURED";
		case 8:
			return "RE_BIKETHIEFSTAMP";
		case 9:
			return "RE_SECURITYVAN";
		case 10:
			return "RE_PAPARAZZI";
		case 11:
			return "RE_CHASETHIEVES";
		case 12:
			return "RE_DEALGONEWRONG";
		case 13:
			return "RE_HITCHLIFT";
		case 14:
			return "RE_STAG";
		case 15:
			return "RE_ARREST";
		case 16:
			return "RE_CRASHRESCUE";
		case 17:
			return "RE_CARTHEFT";
		case 18:
			return "RE_CULTSHOOTOUT";
		case 19:
			return "RE_GANGFIGHT";
		case 20:
			return "RE_GANGINTIMIDATION";
		case 21:
			return "RE_PRISONVANBREAK";
		case 22:
			return "RE_PRISONERLIFT";
		case 23:
			return "RE_ABANDONEDCAR";
		case 24:
			return "RE_BURIAL";
		case 25:
			return "RE_MUGGING";
		case 26:
			return "RE_BIKETHIEF";
		case 27:
			return "RE_DRUNKDRIVER";
		case 28:
			return "RE_HOMELANDSECURITY";
		case 29:
			return "RE_BORDERPATROL";
		case 30:
			return "RE_SIMEONYETARIAN";
		case 31:
			return "RE_DUEL";
		case 32:
			return "RE_SEAPLANE";
		case 33:
			return "RE_MONKEYPHOTO";
		case -1:
			return "RE_NONE";
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_242(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_243(int iParam0)
{
	func_244(iParam0, 0, func_264(iParam0));
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_263();
	func_254(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_253(iParam0, &bVar0);
	Var1 = { func_245(&bVar0) };
}

struct<16> func_245(bool bParam0)
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_252(*bParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_251(*bParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_250(*bParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_249(*bParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_248(*bParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_246(*bParam0), 64);
	return Var0;
}

int func_246(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_247(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_247(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_248(bool bParam0)
{
	return (bParam0 && 15);
}

int func_249(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_250(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_251(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_252(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

void func_253(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_254(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_246(*bParam0);
	bVar1 = func_248(*bParam0);
	iVar2 = func_249(*bParam0);
	iVar3 = func_252(*bParam0);
	iVar4 = func_251(*bParam0);
	iVar5 = func_250(*bParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_262(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_262(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_255(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_255(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_261(bParam0, iParam1);
	func_260(bParam0, iParam2);
	func_259(bParam0, iParam3);
	func_258(bParam0, bParam5);
	func_257(bParam0, iParam4);
	func_256(bParam0, iParam6);
}

void func_256(bool bParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*bParam0 |= -2147483648;
	}
	else
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*bParam0 = (*bParam0 - *bParam0 & -2147483648);
	}
}

void func_257(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_248(*bParam0);
	iVar1 = func_246(*bParam0);
	if (iParam1 < 1 || iParam1 > func_262(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_258(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_259(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_260(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_261(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_262(bool bParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (bParam0)
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

bool func_263()
{
	var uVar0;

	func_261(&uVar0, UNK_0x4460E481B9E33ADA());
	func_260(&uVar0, UNK_0x8D199E381D262EEF());
	func_259(&uVar0, UNK_0xD8A54335F18763BA());
	func_257(&uVar0, UNK_0x972A296334C9D57B());
	func_258(&uVar0, UNK_0x118229AD063C3C1D());
	func_256(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_264(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		case 0:
			iVar0 = 30;
			break;
		case 15:
			iVar0 = 30;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 26:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 30;
			break;
		case 29:
			iVar0 = 30;
			break;
		case 24:
			iVar0 = 30;
			break;
		case 2:
			iVar0 = 0;
			break;
		case 17:
			iVar0 = 30;
			break;
		case 11:
			iVar0 = 30;
			break;
		case 16:
			iVar0 = 30;
			break;
		case 18:
			iVar0 = 30;
			break;
		case 12:
			iVar0 = 120;
			break;
		case 3:
			iVar0 = 60;
			break;
		case 27:
			iVar0 = 60;
			break;
		case 19:
			iVar0 = 30;
			break;
		case 20:
			iVar0 = 30;
			break;
		case 4:
			iVar0 = 60;
			break;
		case 28:
			iVar0 = 30;
			break;
		case 13:
			iVar0 = 35;
			break;
		case 7:
			iVar0 = 30;
			break;
		case 25:
			iVar0 = 40;
			break;
		case 10:
			iVar0 = 30;
			break;
		case 22:
			iVar0 = 30;
			break;
		case 21:
			iVar0 = 30;
			break;
		case 5:
			iVar0 = 30;
			break;
		case 30:
			iVar0 = 60;
			break;
		case 9:
			iVar0 = 60;
			break;
		case 6:
			iVar0 = 40;
			break;
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_265(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;
	bool bVar1;

	if (iParam1 == 0)
	{
		bVar1 = UNK_0xA712FAE854841798(bParam0, &uVar0);
		if (!UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			if (UNK_0x12AB0310C2281427(bVar1) == UNK_0x12AB0310C2281427("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_266(bParam0, iParam2);
	return 1;
}

void func_266(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_272(bParam0))
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
	func_267(bParam0, &(Global_111638.f_32744.f_5510));
}

void func_267(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_271(uParam1);
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
		if (uParam1->f_65 == -1 && !func_270(uParam1->f_66))
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
		func_269(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_268(iVar0 + 1));
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

int func_268(int iParam0)
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

int func_269(bool bParam0, var uParam1, var uParam2)
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

bool func_270(int iParam0)
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

void func_271(var uParam0)
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

bool func_272(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_288(bParam0, 0, 0)) || func_288(bParam0, 1, 0)) || func_288(bParam0, 2, 0)) || func_287(bParam0) != 145) || func_286(bParam0)) || func_285(bParam0)) || func_284(bParam0)) || func_283(bParam0)) || !func_273(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_285(bParam0))
		{
		}
		if (func_285(bParam0))
		{
		}
		if (func_288(bParam0, 0, 0))
		{
		}
		if (func_288(bParam0, 1, 0))
		{
		}
		if (func_288(bParam0, 2, 0))
		{
		}
		if (func_287(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_273(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_274(bParam0, 0))
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

bool func_274(bool bParam0, bool bParam1)
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
		if (!func_282())
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
		if ((((!func_281() && !func_280()) && !func_279()) && !func_278()) && !func_282())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_279())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_277(bParam0))
		{
			return false;
		}
	}
	if (!func_275(bParam0))
	{
		return false;
	}
	return true;
}

bool func_275(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_276())
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

bool func_276()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_277(bool bParam0)
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

bool func_278()
{
	return false;
}

bool func_279()
{
	return true;
}

bool func_280()
{
	return true;
}

bool func_281()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_282()
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

bool func_283(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_274(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_284(bool bParam0)
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

bool func_285(bool bParam0)
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

bool func_286(bool bParam0)
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

int func_287(bool bParam0)
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

bool func_288(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_289(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_289(int iParam0, int iParam1, char* sParam2, int iParam3)
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

void func_290(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_239(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_291();
}

void func_291()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xAB8E2DDC7AF955E0(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)), true);
		}
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
	}
}

bool func_292(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	if (!Global_150217)
	{
		return false;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_34();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_282())
		{
			return false;
		}
	}
	vLocal_48 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_234())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_7(0))
		{
			return false;
		}
		if (func_230())
		{
			return false;
		}
		if (func_317())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_27(func_201()))
		{
			if (func_224(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_48.z) > 50f)
			{
				return false;
			}
		}
		if (!func_316(iParam3))
		{
			return false;
		}
		if (func_27(func_201()))
		{
			if (func_315(func_201()) == 4 || func_315(func_201()) == 5)
			{
				return false;
			}
		}
		if (func_27(func_201()))
		{
			if (!func_314(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_313(Global_111638.f_24990.f_43[iParam3]))
		{
			return false;
		}
		if ((UNK_0x1C0640BA9A7327B3() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_312())
		{
			return false;
		}
		if (UNK_0x2C1AA3A291786CDC())
		{
			return false;
		}
		if (UNK_0xD4A2BF1975E2C50F())
		{
			return false;
		}
		if (!func_303(4))
		{
			return false;
		}
		if (!func_214(5))
		{
			return false;
		}
		if (func_302(iParam3, bParam4) && !bParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (UNK_0x31609A585163CBAC(UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9())))
		{
			if ((UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_302(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_316(30) && !func_302(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_27(func_201()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_301(bVar8))
				{
					if (func_294(iVar4))
					{
						if (!func_293(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_201() != iVar4)
								{
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

bool func_293(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_294(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_295(bVar0);
}

int func_295(bool bParam0)
{
	return func_296(bParam0, 1);
}

int func_296(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_301(bParam0))
	{
		return 0;
	}
	func_297(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_297(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_298(func_263(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_298(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_300(bParam0, bParam1))
	{
		bVar0 = func_248(bParam1);
		iVar1 = func_246(bParam0);
		iVar2 = (func_246(bParam0) - func_246(bParam1));
		iVar3 = (func_248(bParam0) - func_248(bParam1));
		iVar4 = (func_249(bParam0) - func_249(bParam1));
		iVar5 = (func_252(bParam0) - func_252(bParam1));
		iVar6 = (func_251(bParam0) - func_251(bParam1));
		iVar7 = (func_250(bParam0) - func_250(bParam1));
	}
	else
	{
		bVar0 = func_248(bParam0);
		iVar1 = func_246(bParam1);
		iVar2 = (func_246(bParam1) - func_246(bParam0));
		iVar3 = (func_248(bParam1) - func_248(bParam0));
		iVar4 = (func_249(bParam1) - func_249(bParam0));
		iVar5 = (func_252(bParam1) - func_252(bParam0));
		iVar6 = (func_251(bParam1) - func_251(bParam0));
		iVar7 = (func_250(bParam1) - func_250(bParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_262(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = SYSTEM::ROUND(func_299(SYSTEM::TO_FLOAT(bVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_299(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

bool func_300(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_301(bParam1) || !func_301(bParam0))
	{
		return true;
	}
	bVar0 = func_246(bParam0);
	bVar1 = func_246(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_248(bParam0);
	bVar1 = func_248(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_249(bParam0);
	bVar1 = func_249(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_252(bParam0);
	bVar1 = func_252(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_251(bParam0);
	bVar1 = func_251(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_250(bParam0);
	bVar1 = func_250(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_301(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (bParam0 == -15)
	{
		return false;
	}
	iVar0 = func_250(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_251(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_252(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_246(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_248(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_249(bParam0);
	if (iVar5 < 1 || iVar5 > func_262(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_302(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_303(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_201();
				if (!func_27(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_311()) || Global_110685) || Global_30770) || func_310()) || func_198(8, -1)) || func_309()) || func_308()) || func_307()) || func_306()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_311()) || Global_30770) || func_310()) || func_198(8, -1)) || func_307()) || func_309()) || func_308()) || func_306()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_311()) || Global_110685) || Global_30770) || func_310()) || func_198(8, -1)) || func_307()) || func_309()) || func_308()) || func_306()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_311()) || Global_110685) || Global_30770) || func_310()) || func_198(8, -1)) || func_309()) || func_308()) || func_306()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_311() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_198(8, -1)) || func_306()) || func_305()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_198(8, -1) || func_309()) || func_308()) || func_305()) || func_304())
						{
							return false;
						}
						if ((UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() != 3) && UNK_0x00A15D69BCAA5267() < 8)
						{
							return false;
						}
						break;
					case 6:
						if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
						{
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_311()) || Global_30770) || func_310()) || func_198(8, -1)) || func_308()) || func_307()) || func_306()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_311()) || func_308()) || Global_110685) || Global_30770) || func_310()) || Global_42596) || func_198(8, -1)) || func_307()) || func_305()) || func_306()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_311()) || Global_110685) || Global_30770) || func_310()) || func_198(8, -1)) || func_307()) || func_305()) || func_309()) || func_308()) || func_306())
						{
							return false;
						}
						break;
				}
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
	else
	{
		return false;
	}
	return true;
}

bool func_304()
{
	return Global_98783.f_1;
}

bool func_305()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_306()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_307()
{
	if (Global_76882)
	{
		return true;
	}
	else if (Global_61506 && !Global_61512)
	{
		return true;
	}
	return false;
}

bool func_308()
{
	return Global_98796.f_346 > 0;
}

bool func_309()
{
	return Global_98796.f_345 > 0;
}

bool func_310()
{
	return Global_1312877;
}

bool func_311()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_312()
{
	func_196();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_313(bool bParam0)
{
	return func_300(func_263(), bParam0);
}

bool func_314(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_201();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 13:
			if (iVar1 == 0)
			{
				if (bParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if (bParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_315(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_316(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_282())
		{
			return false;
		}
	}
	bVar0 = iParam0;
	if (bVar0 < 31)
	{
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990, bVar0);
	}
	else
	{
		bVar0 = (bVar0 - 31);
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_1, bVar0);
	}
	return bVar1;
}

bool func_317()
{
	bool bVar0;

	if (Global_30918)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0xA30B8362589C124A(bVar0, false, 0)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

Vector3 func_318()
{
	float fVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_279, 1);
		bLocal_285 = true;
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_282, 1) < fVar0)
		{
			fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_282, 1);
			bLocal_285 = 2;
		}
		if (bLocal_285 == 1)
		{
			iLocal_52 = 1;
			return vLocal_279;
		}
		else if (bLocal_285 == 2)
		{
			iLocal_52 = 2;
			return vLocal_282;
		}
	}
	return 0f, 0f, 0f;
}

