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
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = false;
	bool bLocal_53 = false;
	int iLocal_54[2] = { 0, 0 };
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	bool bLocal_60 = false;
	int iLocal_61[2] = { 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	bool bLocal_68 = false;
	bool bLocal_69 = false;
	bool bLocal_70 = false;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	bool bLocal_74 = false;
	bool bLocal_75 = false;
	bool bLocal_76 = false;
	int iLocal_77 = 0;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_81[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_91 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	bool bLocal_97 = false;
	float fLocal_98[2] = { 0f, 0f };
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	int iLocal_106 = 0;
	vector3 vLocal_107 = { 0f, 0f, 0f };
	int iLocal_110 = 0;
	int iLocal_111[2] = { 0, 0 };
	int iLocal_114 = 0;
	bool bLocal_115 = false;
	bool bLocal_116 = false;
	bool bLocal_117 = false;
	bool bLocal_118 = false;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	bool bLocal_123 = false;
	bool bLocal_124 = false;
	bool bLocal_125 = false;
	bool bLocal_126 = false;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = false;
	bool bLocal_130 = false;
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	bool bLocal_134 = false;
	bool bLocal_135 = false;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	vector3 vLocal_139 = { 0f, 0f, 0f };
	vector3 vLocal_142 = { 0f, 0f, 0f };
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	bool bLocal_147 = false;
	var uLocal_148 = 0;
	bool bLocal_149 = false;
	char cLocal_150[48] = "";
	struct<6> Local_156 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_162 = false;
	int iLocal_163 = 0;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	bool bLocal_166 = false;
	bool bLocal_167 = false;
	int iLocal_168 = 0;
	bool bLocal_169 = false;
	bool bLocal_170 = false;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	bool bLocal_173 = false;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	bool bLocal_176 = false;
	bool bLocal_177 = false;
	var uLocal_178 = 16;
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
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	vLocal_107 = { 154.92f, 6841.12f, 19.14f };
	bLocal_125 = 200;
	vLocal_139 = { -1161.199f, 934.5912f, 196.7591f };
	vLocal_142 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&cLocal_150, "", 24);
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
		{
			if (UNK_0x16102BEDC7435774(bLocal_53))
			{
				UNK_0x0A94A109271BE75A(bLocal_53);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_167(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0x338D6FF72D84D90F() || bLocal_131)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			UNK_0x1A6DFFFEEC27BF4F("RE_BU", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_153())
					{
						func_212();
					}
					if (!bLocal_66)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_52)
					{
						bLocal_162 = true;
						iLocal_48 = 1;
					}
					break;
				case 1:
					if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						func_150();
						switch (iLocal_49)
						{
							case 0:
								func_140();
								iLocal_49 = 1;
								break;
							case 1:
								if ((!func_133(iLocal_54[0], &iLocal_128, &uLocal_127, bLocal_126, bLocal_129, 7f, 0) && !func_133(iLocal_54[1], &iLocal_128, &uLocal_127, bLocal_126, bLocal_129, 7f, 0)) && !func_132())
								{
									switch (iLocal_50)
									{
										case 0:
											func_131();
											if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_78, 50f, 35f, 50f, false, true, 0))
											{
												func_130();
											}
											if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_78, 80f, 65f, 50f, false, true, 0))
											{
												func_129();
											}
											if (!UNK_0x437347B10A200C4B(bLocal_58, 0))
											{
												if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_88 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_128();
													if (UNK_0xE4EDC4B0E92C078B(iLocal_114))
													{
														UNK_0xF2D30B8ACAF12A39(iLocal_114, false);
													}
													iLocal_64 = 0;
													while (iLocal_64 <= 1)
													{
														if (UNK_0xE4EDC4B0E92C078B(iLocal_111[iLocal_64]))
														{
															UNK_0xF2D30B8ACAF12A39(iLocal_111[iLocal_64], false);
														}
														iLocal_64++;
													}
													if (!func_166())
													{
														func_119(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_128();
									iLocal_49 = 2;
								}
								break;
							case 2:
								if ((func_133(iLocal_54[0], &iLocal_128, &uLocal_127, bLocal_126, bLocal_129, 7f, 0) || func_133(iLocal_54[1], &iLocal_128, &uLocal_127, bLocal_126, bLocal_129, 7f, 0)) || bLocal_129)
								{
									bLocal_129 = true;
									if (!func_166())
									{
										func_119(1);
									}
									if (UNK_0xE4EDC4B0E92C078B(iLocal_114))
									{
										UNK_0xF2D30B8ACAF12A39(iLocal_114, true);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (UNK_0xE4EDC4B0E92C078B(iLocal_111[iLocal_64]))
										{
											UNK_0xF2D30B8ACAF12A39(iLocal_111[iLocal_64], true);
										}
										iLocal_64++;
									}
									switch (iLocal_128)
									{
										case 0:
											func_118();
											break;
										case 1:
											func_118();
											break;
										case 2:
											func_118();
											break;
										case 3:
											func_118();
											break;
										case 4:
											func_118();
											break;
										case 5:
											func_118();
											break;
									}
								}
								if (func_132())
								{
									bLocal_75 = true;
									if (UNK_0xE4EDC4B0E92C078B(iLocal_114))
									{
										UNK_0xF2D30B8ACAF12A39(iLocal_114, true);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (UNK_0xE4EDC4B0E92C078B(iLocal_111[iLocal_64]))
										{
											UNK_0xF2D30B8ACAF12A39(iLocal_111[iLocal_64], true);
										}
										iLocal_64++;
									}
									if (!func_117())
									{
										switch (iLocal_51)
										{
											case 1:
												func_114();
												break;
											case 3:
												func_113();
												break;
											case 4:
												func_112();
												break;
											case 5:
												func_110();
												SYSTEM::WAIT(0);
												if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
												{
													func_108(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
												{
													func_108(iLocal_54[1], "GENERIC_WAR_CRY", 24);
												}
												func_118();
												break;
											case 6:
												func_110();
												SYSTEM::WAIT(0);
												if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
												{
													func_108(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
												{
													func_108(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_118();
												break;
										}
									}
									else
									{
										func_110();
										SYSTEM::WAIT(0);
										iVar0 = 0;
										while (iVar0 < iLocal_54)
										{
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[iVar0]))
											{
												UNK_0x08082071A5F7C155(iLocal_54[iVar0], 5, 0f, 0);
												UNK_0xF3268524E9BE6D6E(iLocal_54[iVar0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
												UNK_0xFADC0A217229F6B5(iLocal_54[iVar0], true);
												if (UNK_0xC844350D5D58C99A(bLocal_60))
												{
													if (UNK_0xD59B17D2DFF98E26(bLocal_60))
													{
														UNK_0x15AFB6CBDE990FB6(bLocal_60, 1, true);
													}
												}
												if (UNK_0xE4EDC4B0E92C078B(iLocal_111[iVar0]))
												{
													UNK_0x142CC44DB769B57E(&(iLocal_111[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_49 = 3;
									}
								}
								break;
							case 3:
								if (!bLocal_130)
								{
									func_107();
								}
								if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
								{
									func_92();
								}
								break;
							case 4:
								func_91();
								if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_107, 100f, 100f, 100f, true, true, 0))
								{
									UNK_0x51B096AAC60548C1(1f);
									if (UNK_0xC844350D5D58C99A(iLocal_54[0]) && UNK_0xC844350D5D58C99A(iLocal_54[1]))
									{
										UNK_0x6DAD7906B73F064D(&(iLocal_54[0]));
										UNK_0x6DAD7906B73F064D(&(iLocal_54[1]));
									}
								}
								if (!UNK_0xC844350D5D58C99A(bLocal_57))
								{
									if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_139, 200f, 200f, 200f, true, true, 0))
									{
										UNK_0x523BCC9DC80CD82F(joaat("S_M_M_HIGHSEC_01"));
										UNK_0x523BCC9DC80CD82F(joaat("GRANGER"));
										if (UNK_0xB87F6CF6E5628C67(joaat("S_M_M_HIGHSEC_01")) && UNK_0xB87F6CF6E5628C67(joaat("GRANGER")))
										{
											bLocal_59 = UNK_0x122AAB0B1D6F55AD(joaat("GRANGER"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, true, true, false);
											UNK_0x25BD67336EA4AECE(bLocal_59, 200);
											UNK_0xF8CF67C6E39C23A9(bLocal_59, 1.5f);
											bLocal_57 = UNK_0x852A19533F896693(bLocal_59, 26, joaat("S_M_M_HIGHSEC_01"), -1, 1, true);
											UNK_0x64F9F278AB9DCA2C(bLocal_57, false, false, 2, 0);
											UNK_0x64F9F278AB9DCA2C(bLocal_57, 3, false, false, 0);
											UNK_0x64F9F278AB9DCA2C(bLocal_57, 4, false, false, 0);
											UNK_0x262EF6C6306BEA6C(bLocal_57, joaat("WEAPON_PISTOL"), -1, true, true);
											UNK_0x6DF7BF67E86AAE86(bLocal_57, bLocal_177);
										}
									}
								}
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
								{
									if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										if (UNK_0xD6DF381716822EFE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) < 1)
										{
											if (!bLocal_132)
											{
												func_87(0);
												func_110();
												SYSTEM::WAIT(0);
												func_71(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												bLocal_132 = true;
											}
										}
									}
									else
									{
										bLocal_132 = false;
									}
									if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_139, Global_22, true, true, 0) && UNK_0x12DE711B1C681E9E(bLocal_53, UNK_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (UNK_0x16102BEDC7435774(bLocal_53))
										{
											if (UNK_0xE4EDC4B0E92C078B(iLocal_137))
											{
												UNK_0x142CC44DB769B57E(&iLocal_137);
											}
											if (UNK_0xE4EDC4B0E92C078B(iLocal_138))
											{
												UNK_0x142CC44DB769B57E(&iLocal_138);
											}
											if (func_70())
											{
												iLocal_49 = 5;
											}
											else
											{
												iLocal_49 = 6;
											}
										}
									}
									else
									{
										func_65();
										func_64();
										func_63();
										func_59();
										func_58();
										func_52();
										if (func_51(vLocal_139))
										{
											func_87(0);
											func_110();
											SYSTEM::WAIT(0);
											func_71(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_50())
										{
											func_87(0);
											func_110();
											SYSTEM::WAIT(0);
											func_71(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							case 5:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_48();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							case 6:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							case 8:
								func_13();
								break;
							case 7:
								func_11();
								if (UNK_0xC844350D5D58C99A(bLocal_60))
								{
									if (UNK_0xD59B17D2DFF98E26(bLocal_60))
									{
										if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
										{
											if (UNK_0xB4ECF989E2C1DAC8(iLocal_54[0], "random@burial", "a_burial_stop", 3))
											{
												if (UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													UNK_0x15AFB6CBDE990FB6(bLocal_60, 1, true);
												}
											}
											else
											{
												UNK_0x15AFB6CBDE990FB6(bLocal_60, 1, true);
											}
										}
									}
								}
								if (UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) || UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
								{
									bLocal_147 = true;
								}
								if (bLocal_147)
								{
									if (UNK_0xDF1306B443CD3D15(bLocal_58, 0))
									{
										if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
										{
											UNK_0x2ECF845953E95D1B(iLocal_54[0]);
											if (UNK_0x3CAA763EEC01ADF7(iLocal_54[0], bLocal_58, -1, 0, false) || UNK_0x3CAA763EEC01ADF7(iLocal_54[0], bLocal_58, 0, 0, false))
											{
												if (!bLocal_164)
												{
													UNK_0xA3BF0AA5A2608191(iLocal_54[0]);
													if (UNK_0xC844350D5D58C99A(bLocal_60))
													{
														if (UNK_0xD59B17D2DFF98E26(bLocal_60))
														{
															UNK_0x15AFB6CBDE990FB6(bLocal_60, 1, true);
														}
													}
													UNK_0xDD353D0E9C789D0E(&iLocal_65);
													UNK_0xBC43ED9FE28DB191(false);
													UNK_0xE20F700AC2AFCA92(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_58, -0.5f, 0.5f, 0f), UNK_0x16F2683693E537C9(), 3f, true, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													UNK_0x5B1D360B9C6F0A09(false, bLocal_58, -1, -1, 3f, 9, 0);
													UNK_0x89258193691A7600(false, bLocal_58, UNK_0x16F2683693E537C9(), 8, 30f, 262144, -1f, 10f, 1);
													UNK_0x75ABDC5F81978924(iLocal_65);
													UNK_0x78ADC381772E3D54(iLocal_54[0], iLocal_65);
													UNK_0xF82EA857DA10E0CD(&iLocal_65);
													UNK_0xFADC0A217229F6B5(iLocal_54[0], true);
													UNK_0xDC2C59BD0989562B(bLocal_58, 1);
													bLocal_164 = true;
												}
												else if (UNK_0xD1960163A3042274(iLocal_54[0], 242628503) == 1)
												{
													if (UNK_0x4F1B602325013CC2(iLocal_54[0]) == 3)
													{
														if (!UNK_0x12DE711B1C681E9E(iLocal_54[0], UNK_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0) && !UNK_0x5A91F08DF773C39D(iLocal_54[0], vLocal_88, 10f, 10f, 10f, false, true, 0))
														{
															UNK_0x6DAD7906B73F064D(&(iLocal_54[0]));
														}
													}
												}
											}
											else
											{
												UNK_0x6C3AE6E278DB3D0E(iLocal_54[0], UNK_0x16F2683693E537C9(), 0, 16);
												UNK_0xFADC0A217229F6B5(iLocal_54[0], true);
											}
										}
										if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
										{
											UNK_0x2ECF845953E95D1B(iLocal_54[1]);
											if (UNK_0x3CAA763EEC01ADF7(iLocal_54[1], bLocal_58, -1, 0, false) || UNK_0x3CAA763EEC01ADF7(iLocal_54[1], bLocal_58, 0, 0, false))
											{
												if (!bLocal_164)
												{
													UNK_0xA3BF0AA5A2608191(iLocal_54[1]);
													UNK_0xDD353D0E9C789D0E(&iLocal_65);
													UNK_0xBC43ED9FE28DB191(false);
													UNK_0xE20F700AC2AFCA92(false, UNK_0x68E4ADDDDCD7BDDE(bLocal_58, -0.5f, 0.5f, 0f), UNK_0x16F2683693E537C9(), 3f, true, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													UNK_0x5B1D360B9C6F0A09(false, bLocal_58, -1, -1, 3f, 9, 0);
													UNK_0x89258193691A7600(false, bLocal_58, UNK_0x16F2683693E537C9(), 8, 30f, 262144, -1f, 10f, 1);
													UNK_0x75ABDC5F81978924(iLocal_65);
													UNK_0x78ADC381772E3D54(iLocal_54[1], iLocal_65);
													UNK_0xF82EA857DA10E0CD(&iLocal_65);
													UNK_0xFADC0A217229F6B5(iLocal_54[1], true);
													UNK_0xDC2C59BD0989562B(bLocal_58, 1);
													bLocal_164 = true;
												}
												else if (UNK_0xD1960163A3042274(iLocal_54[1], 242628503) == 1)
												{
													if (UNK_0x4F1B602325013CC2(iLocal_54[1]) == 3)
													{
														if (!UNK_0x12DE711B1C681E9E(iLocal_54[1], UNK_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0) && !UNK_0x5A91F08DF773C39D(iLocal_54[1], vLocal_88, 10f, 10f, 10f, false, true, 0))
														{
															UNK_0x6DAD7906B73F064D(&(iLocal_54[1]));
														}
													}
												}
											}
											else
											{
												UNK_0x6C3AE6E278DB3D0E(iLocal_54[1], UNK_0x16F2683693E537C9(), 0, 16);
												UNK_0xFADC0A217229F6B5(iLocal_54[1], true);
											}
										}
									}
								}
								break;
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_49 != 9)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
							{
								if (UNK_0x5A91F08DF773C39D(bLocal_53, vLocal_142, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									SYSTEM::WAIT(0);
									func_110();
									iLocal_49 = 9;
								}
							}
						}
						if (func_6())
						{
							if (UNK_0xC844350D5D58C99A(bLocal_53))
							{
								UNK_0xEBA53F35D0085654(&bLocal_53);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								UNK_0xC92DB9682A650680("RE6_BOTH_DEAD");
								if (!bLocal_74)
								{
									SYSTEM::SETTIMERA(0);
									iLocal_106 = UNK_0x1C0640BA9A7327B3() + 8500;
									bLocal_74 = true;
								}
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
								{
									if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_53, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_49 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_49 == 1 || iLocal_49 == 2) || iLocal_49 == 3) || iLocal_49 == 7)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
							{
								if (!bLocal_130)
								{
									if (UNK_0xD1960163A3042274(bLocal_53, 1785177548) != 1 && UNK_0xD1960163A3042274(bLocal_53, 1785177548) != 0)
									{
										UNK_0x327AAEE25F323797(bLocal_53);
										iLocal_343 = UNK_0xE9744DB7B8CA6965(vLocal_78, -2f, -4f, 18f, 2);
										UNK_0x915804B434753CBD(bLocal_53, iLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										UNK_0xE14EC663EED44AD5(iLocal_61[0], iLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080 /* Float: 1000f */);
										UNK_0xE14EC663EED44AD5(iLocal_61[1], iLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080 /* Float: 1000f */);
										UNK_0xC90224D9E95E5E3A(iLocal_343, true);
										UNK_0xFADC0A217229F6B5(bLocal_53, true);
									}
									if (UNK_0x4E861BC5B1EDA7BD(bLocal_53))
									{
										UNK_0xA86D71B57C84C089(bLocal_53, 1);
										UNK_0xF20820358777D05E(bLocal_53, 1);
										UNK_0xD458AC1C1D29C3B4(bLocal_53, false, false);
									}
								}
								if ((UNK_0xD24FAF25ADC00F44(bLocal_53) || UNK_0xE147126C9AD09A60(bLocal_53)) || (bLocal_125 - UNK_0x7F6DC62EA9922664(bLocal_53)) >= 50)
								{
									UNK_0xA86D71B57C84C089(bLocal_53, 1);
									UNK_0xF20820358777D05E(bLocal_53, 1);
									UNK_0xD458AC1C1D29C3B4(bLocal_53, false, false);
								}
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
								{
									if (UNK_0x9C66D99E63E8E24C(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) < 5f)
									{
									}
									else if (UNK_0x1B3D109B39CC2C89(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), bLocal_53))
									{
										UNK_0xA86D71B57C84C089(bLocal_53, 1);
										UNK_0xF20820358777D05E(bLocal_53, 1);
										UNK_0xD458AC1C1D29C3B4(bLocal_53, false, false);
									}
								}
								if (!UNK_0x437347B10A200C4B(bLocal_58, 0))
								{
									if (UNK_0x1B3D109B39CC2C89(bLocal_58, bLocal_53))
									{
										UNK_0xA86D71B57C84C089(bLocal_53, 1);
										UNK_0xF20820358777D05E(bLocal_53, 1);
										UNK_0xD458AC1C1D29C3B4(bLocal_53, false, false);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

bool func_1()
{
	if (!bLocal_130)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_54[0]) && !UNK_0xC844350D5D58C99A(iLocal_54[1]))
		{
			return true;
		}
		if (UNK_0xC844350D5D58C99A(iLocal_54[0]) && UNK_0xC844350D5D58C99A(iLocal_54[1]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) && UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
			{
				return true;
			}
			if (UNK_0xA750A57C629763A9(iLocal_54[0]) && UNK_0xA750A57C629763A9(iLocal_54[1]))
			{
				return true;
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_54[0]) && !UNK_0xC844350D5D58C99A(iLocal_54[1]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
			{
				return true;
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_54[1]) && !UNK_0xC844350D5D58C99A(iLocal_54[0]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
			{
				return true;
			}
		}
	}
	return false;
}

void func_2()
{
	if (UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_111[0]))
		{
			if (UNK_0xC844350D5D58C99A(bLocal_60))
			{
				if (UNK_0xD59B17D2DFF98E26(bLocal_60))
				{
					UNK_0x15AFB6CBDE990FB6(bLocal_60, 1, true);
				}
			}
			func_3(&uLocal_178, 4);
			UNK_0x142CC44DB769B57E(&(iLocal_111[0]));
		}
	}
	if (UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			UNK_0x142CC44DB769B57E(&(iLocal_111[1]));
		}
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_53, 0))
		{
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_114))
		{
			func_3(&uLocal_178, 5);
			UNK_0x142CC44DB769B57E(&iLocal_114);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	UNK_0xC92DB9682A650680("RE6_END");
	func_212();
}

bool func_5()
{
	if (UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		return true;
	}
	return false;
}

bool func_6()
{
	if (Global_31006)
	{
		func_7(4);
		return true;
	}
	return false;
}

void func_7(int iParam0)
{
	Global_111624 = iParam0;
}

void func_8(int iParam0)
{
	Global_21816 = iParam0;
}

bool func_9()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return true;
	}
	return false;
}

bool func_10()
{
	return Global_31005;
}

void func_11()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) || !UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					case 1:
						if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					case 2:
						if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					case 3:
						if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(3500, 5000));
								iLocal_168 = 0;
							}
						}
						break;
				}
			}
		}
	}
}

bool func_12()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_13()
{
	while (!func_46())
	{
		SYSTEM::WAIT(0);
	}
	if (!func_6())
	{
		if (func_45() == 0)
		{
			func_42(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 1)
		{
			func_42(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 2)
		{
			func_42(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	UNK_0x94FD98915D03BAC2(UNK_0xD803B885F5E47A62(), 1, 0);
	func_17(-1, 0);
	func_14();
	func_212();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

bool func_16(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_17(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_39(iParam0))
	{
		func_38(iParam0, bParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_24(iParam0, bParam1) != 322)
		{
			func_18(func_24(iParam0, bParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_7(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
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
		Global_111638.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = uParam2;
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
		func_19();
	}
}

void func_19()
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
		func_21(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_20() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_30768;
}

int func_21(int iParam0, bool bParam1)
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

int func_22(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_23();
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

int func_23()
{
	return Global_1312745;
}

int func_24(int iParam0, bool bParam1)
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

bool func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_35(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_34(UNK_0x16F2683693E537C9());
			if (func_33(iVar0) && (!func_32(14) || Global_110589))
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

bool func_32(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_33(bool bParam0)
{
	return bParam0 < 3;
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

bool func_37(int iParam0)
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

void func_38(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_41(Var0);
	return iVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_42(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar15;

	if (func_16(0))
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
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (bParam2 < 1 || bParam2 > 7)
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
		Var0.f_3 = func_44(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = bParam2;
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		UNK_0x0674E58A79778E99(&(Var0.f_1), true);
		UNK_0x0674E58A79778E99(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136 /*15*/] = { Var0 };
		Global_111638.f_7683.f_136++;
		bVar15 = false;
		while (bVar15 < 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(bParam2, bVar15))
			{
				func_43(bVar15);
			}
			bVar15++;
		}
		return 1;
	}
	return 0;
}

void func_43(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_33(bParam0))
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

int func_44(int iParam0)
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

bool func_45()
{
	func_31();
	return Global_111638.f_2358.f_539.f_4321;
}

bool func_46()
{
	return true;
}

void func_47()
{
	switch (iLocal_136)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_53) && UNK_0xDF1306B443CD3D15(bLocal_59, 0))
			{
				if (UNK_0x16102BEDC7435774(bLocal_53))
				{
					UNK_0x0A94A109271BE75A(bLocal_53);
				}
				UNK_0x11AD11297DC58CC7(bLocal_53, false);
				UNK_0x25C5402CC10F76CD(bLocal_53, true);
				UNK_0xDD353D0E9C789D0E(&iLocal_65);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 5000, 2048, 2);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0x5B1D360B9C6F0A09(false, bLocal_59, -1, false, 1f, 1, 0);
				UNK_0x75ABDC5F81978924(iLocal_65);
				UNK_0x78ADC381772E3D54(bLocal_53, iLocal_65);
				UNK_0xF82EA857DA10E0CD(&iLocal_65);
				UNK_0xFADC0A217229F6B5(bLocal_53, true);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_136++;
			break;
		case 1:
			if (UNK_0xDF1306B443CD3D15(bLocal_59, 0))
			{
				if (UNK_0xC42A92762C58E1B9(bLocal_53, bLocal_59, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_57))
					{
						UNK_0xE072601B4380E9DF(bLocal_57, bLocal_58, 10f, 786599);
						UNK_0xFADC0A217229F6B5(bLocal_57, true);
					}
					UNK_0xDC2C59BD0989562B(bLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		case 2:
			iLocal_136++;
			break;
		case 3:
			iLocal_136++;
			break;
		case 4:
			if (!func_12())
			{
				iLocal_136++;
			}
			break;
		case 5:
			SYSTEM::SETTIMERA(0);
			func_13();
			break;
	}
}

void func_48()
{
	switch (iLocal_136)
	{
		case 0:
			UNK_0x0E2400AB9174FA81(255, bLocal_177, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), bLocal_177);
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), 5f, 2, 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_53) && UNK_0xDF1306B443CD3D15(bLocal_59, 0))
				{
					if (UNK_0x16102BEDC7435774(bLocal_53))
					{
						UNK_0x0A94A109271BE75A(bLocal_53);
					}
					UNK_0x11AD11297DC58CC7(bLocal_53, false);
					UNK_0x25C5402CC10F76CD(bLocal_53, true);
					UNK_0xDD353D0E9C789D0E(&iLocal_65);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 5000, 2048, 2);
					UNK_0x5B1D360B9C6F0A09(false, bLocal_59, -1, false, 1f, 1, 0);
					UNK_0x75ABDC5F81978924(iLocal_65);
					UNK_0x78ADC381772E3D54(bLocal_53, iLocal_65);
					UNK_0xF82EA857DA10E0CD(&iLocal_65);
					UNK_0xFADC0A217229F6B5(bLocal_53, true);
					func_110();
					SYSTEM::WAIT(0);
					func_71(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			SYSTEM::WAIT(2700);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			iLocal_136++;
			break;
		case 1:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
				{
					if (!UNK_0x1150BCE24B1630AC(UNK_0x728870EB733D12A1(), true))
					{
						if (UNK_0xF409BCB95E61D4DB(UNK_0x728870EB733D12A1(), true) > 0.1f)
						{
							if (func_45() == 0)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_45() == 1)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_45() == 2)
							{
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_136++;
			break;
		case 2:
			if (UNK_0xDF1306B443CD3D15(bLocal_59, 0))
			{
				if (UNK_0xC42A92762C58E1B9(bLocal_53, bLocal_59, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_57))
					{
						UNK_0xE072601B4380E9DF(bLocal_57, bLocal_59, 10f, 786599);
						UNK_0xFADC0A217229F6B5(bLocal_57, true);
					}
					UNK_0xDC2C59BD0989562B(bLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		case 3:
			if (!func_12())
			{
				bLocal_124 = true;
			}
			break;
	}
}

bool func_49(bool bParam0, bool bParam1, bool bParam2)
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

bool func_50()
{
	if (func_45() == 2)
	{
		if (func_10())
		{
			if (UNK_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), false), 1) < 400f)
			{
				if (!Global_31010)
				{
					UNK_0xC92DB9682A650680("AC_EN_ROUTE_CULT");
					Global_31010 = 1;
					if (!Global_31009)
					{
						Global_31009 = 1;
						return true;
					}
				}
			}
			else if (Global_31010)
			{
				UNK_0xC92DB9682A650680("AC_LEFT_AREA");
				Global_31010 = 0;
			}
		}
	}
	return false;
}

bool func_51(vector3 vParam0)
{
	if (func_45() == 2)
	{
		if (func_10() && !Global_31008)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0);
			}
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0) > (fLocal_47 + 200f) || UNK_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), false), 1) < 400f)
			{
				Global_31008 = 1;
				return true;
			}
		}
	}
	return false;
}

void func_52()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if ((((((func_56("REBU2_LV2_2") || func_56("REBU2_LV2_3")) || func_56("REBU2_LV2_4")) || func_56("REBU2_LV2_5")) || func_56("REBU2_LV2_6")) || func_56("REBU2_LV2_7")) || func_56("REBU2_LV2_8"))
		{
			UNK_0x8D4C354BB8991817(bLocal_53, 1, 1);
			UNK_0xBC43ED9FE28DB191(bLocal_53);
		}
		if (func_56("REBU2_LV2_9") || iLocal_72 > 1)
		{
			UNK_0x8D4C354BB8991817(bLocal_53, 0, 1);
		}
	}
	if (func_70() && !func_12())
	{
		if (!func_53())
		{
			func_87(1);
		}
		switch (iLocal_72)
		{
			case 0:
				func_71(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			case 1:
				iLocal_73 = UNK_0x1C0640BA9A7327B3() + 1500;
				iLocal_72++;
				break;
			case 2:
				if (iLocal_73 < UNK_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			case 3:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			case 4:
				iLocal_73 = UNK_0x1C0640BA9A7327B3() + 500;
				iLocal_72++;
				break;
			case 5:
				if (iLocal_73 < UNK_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			case 6:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			case 7:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			case 8:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			case 9:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72++;
				break;
			case 10:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			case 11:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72++;
				break;
			case 12:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			case 13:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72++;
				break;
			case 14:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			case 15:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72++;
				break;
			case 16:
				if (func_45() == 0)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			case 17:
				iLocal_73 = UNK_0x1C0640BA9A7327B3() + 1000;
				iLocal_72++;
				break;
			case 18:
				if (iLocal_73 < UNK_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			case 19:
				iLocal_73 = UNK_0x1C0640BA9A7327B3() + 2500;
				iLocal_72++;
				break;
			case 20:
				if (iLocal_73 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_45() == 1)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_45() == 2)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_72++;
				}
				break;
		}
	}
}

bool func_53()
{
	if (((((((((func_54("REBU2_WV") || func_54("REBU2_UNS1")) || func_54("REBU2_UNS2")) || func_54("REBU2_CULT")) || func_54("REBU2_NEAR")) || func_54("REBU2_WRONG")) || func_54("REBU2_STOP")) || func_54("REBU2_GETOUT")) || func_54("REBU2_JACK")) || func_54("REBU2_SHOOT"))
	{
		return true;
	}
	return false;
}

bool func_54(bool bParam0)
{
	var uVar0;

	if (func_12())
	{
		MemCopy(&uVar0, {func_55()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_55()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_56(bool bParam0)
{
	var uVar0;

	if (func_12())
	{
		MemCopy(&uVar0, {func_57()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_57()
{
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = UNK_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_58()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if (!bLocal_133)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 1) && UNK_0xC42A92762C58E1B9(bLocal_53, UNK_0x728870EB733D12A1(), 0))
				{
					if (!func_54("REBU2_LV2"))
					{
						func_87(0);
						func_110();
						SYSTEM::WAIT(0);
						func_71(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						bLocal_133 = true;
					}
				}
			}
		}
		else if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 0) && UNK_0xC42A92762C58E1B9(bLocal_53, UNK_0x728870EB733D12A1(), 0))
			{
				bLocal_133 = false;
			}
		}
		if (!bLocal_134)
		{
			if (UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
			{
				func_87(0);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				bLocal_134 = true;
			}
		}
		else if (!UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
		{
			bLocal_134 = false;
		}
		if (!bLocal_135)
		{
			if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				func_87(0);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				bLocal_135 = true;
			}
		}
		else if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			bLocal_135 = false;
		}
	}
}

void func_59()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
		{
			if (!func_62())
			{
				if (UNK_0x16102BEDC7435774(bLocal_53))
				{
					UNK_0x0A94A109271BE75A(bLocal_53);
				}
				if (UNK_0xD1960163A3042274(bLocal_53, 1227113341) != 1 && UNK_0xD1960163A3042274(bLocal_53, 1227113341) != 0)
				{
					UNK_0xE185F110925D87DB(bLocal_53, UNK_0x16F2683693E537C9(), -1, 6f, 2f, 1073741824 /* Float: 2f */, 0);
				}
				if (UNK_0x405E212DDE472467(bLocal_53, 0))
				{
					UNK_0x75CDA8644CD3B5F5(bLocal_53, 0, 4194304);
				}
				if (!bLocal_132)
				{
					func_87(0);
					func_110();
					SYSTEM::WAIT(0);
					bLocal_132 = true;
					if (!func_61())
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				bLocal_132 = false;
				if (((UNK_0xD1960163A3042274(bLocal_53, 1227113341) == 1 || UNK_0xD1960163A3042274(bLocal_53, 1227113341) == 0) || UNK_0xD1960163A3042274(bLocal_53, 242628503) == 1) || UNK_0xD1960163A3042274(bLocal_53, 242628503) == 0)
				{
					UNK_0xA3BF0AA5A2608191(bLocal_53);
				}
			}
		}
		else if (((!UNK_0x16102BEDC7435774(bLocal_53) && !UNK_0x405E212DDE472467(bLocal_53, 0)) && UNK_0xD1960163A3042274(bLocal_53, 242628503) != 1) && UNK_0xD1960163A3042274(bLocal_53, 242628503) != 0)
		{
			UNK_0xE25C96A9C36BE5D2(bLocal_53, func_60());
			UNK_0x7BECA8F360B1686D(bLocal_53, 1);
			UNK_0xBF541ED34EA81209(bLocal_53, false);
		}
	}
}

int func_60()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

bool func_61()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), 1))
		{
			if ((UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1))) || UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1)))) || UNK_0xD1CC995EE5EB1EC1(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1))))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_62()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			if (((((!UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) && !UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9())) && !UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9())) && !UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9())) && !UNK_0xEFAE7FB688EBF2B5(UNK_0x16F2683693E537C9())) && !UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("RHINO")))
			{
				if (UNK_0xD6DF381716822EFE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) >= 1)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9()), 0))
		{
			if ((((!UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9()))) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && !UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && !UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())) != joaat("RHINO"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_63()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if (UNK_0xE3614539F8B5C807(bLocal_53))
		{
			if (!bLocal_170)
			{
				iLocal_171 = UNK_0x1C0640BA9A7327B3();
				bLocal_170 = true;
			}
			else
			{
				iLocal_172 = UNK_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			bLocal_170 = false;
		}
	}
	if ((iLocal_172 - iLocal_171) > 180000)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
		{
			if (UNK_0x16102BEDC7435774(bLocal_53))
			{
				UNK_0x0A94A109271BE75A(bLocal_53);
				if (UNK_0x5A91F08DF773C39D(bLocal_53, vLocal_139, 100f, 100f, 100f, false, true, 0))
				{
					UNK_0x96167B03C5A77156(bLocal_53, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0xFADC0A217229F6B5(bLocal_53, true);
				}
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (UNK_0x4024663A44BC1535(UNK_0x16F2683693E537C9()))
	{
		if (!bLocal_173)
		{
			iLocal_174 = UNK_0x1C0640BA9A7327B3();
			bLocal_173 = true;
		}
		else
		{
			iLocal_175 = UNK_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		bLocal_173 = false;
	}
	if ((iLocal_175 - iLocal_174) > 120000)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
		{
			if (UNK_0x16102BEDC7435774(bLocal_53))
			{
				UNK_0x0A94A109271BE75A(bLocal_53);
				if (UNK_0x5A91F08DF773C39D(bLocal_53, vLocal_139, 100f, 100f, 100f, false, true, 0))
				{
					UNK_0x96167B03C5A77156(bLocal_53, vLocal_139, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0xFADC0A217229F6B5(bLocal_53, true);
				}
				else
				{
					UNK_0x75CDA8644CD3B5F5(bLocal_53, 0, 4194304);
				}
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_65()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_53, 8f, 8f, 8f, 0, 1, 0) || UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
		{
			if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0xC42A92762C58E1B9(bLocal_53, UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && !UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_114))
				{
					iLocal_114 = func_68(bLocal_53, 0, 145);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_137))
				{
					UNK_0x142CC44DB769B57E(&iLocal_137);
				}
			}
			else
			{
				if (!UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_114))
					{
						UNK_0x142CC44DB769B57E(&iLocal_114);
					}
				}
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_137))
				{
					iLocal_137 = func_66(vLocal_139, 1);
				}
			}
		}
		else if (!UNK_0xE4EDC4B0E92C078B(iLocal_114))
		{
			iLocal_114 = func_68(bLocal_53, 0, 145);
		}
		if (!UNK_0x16102BEDC7435774(bLocal_53))
		{
			if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_53, 8f, 8f, 8f, 0, 1, 0))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_53);
				UNK_0xE25C96A9C36BE5D2(bLocal_53, func_60());
				UNK_0x7BECA8F360B1686D(bLocal_53, 1);
				UNK_0xBF541ED34EA81209(bLocal_53, false);
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_53);
				UNK_0xE25C96A9C36BE5D2(bLocal_53, func_60());
				UNK_0x7BECA8F360B1686D(bLocal_53, 1);
				UNK_0xBF541ED34EA81209(bLocal_53, false);
			}
		}
		if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_53, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

int func_66(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_67(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_67(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_68(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_69(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_69(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_67(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_67(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_67(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_70()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bLocal_169 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (UNK_0xDF1306B443CD3D15(bLocal_169, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
			{
				if (UNK_0x82CCEAB29E9451DD(bLocal_53, bLocal_169))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
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
					func_85();
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
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_83();
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
				func_82();
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
				if (func_81())
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
			if (func_80())
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
			func_79();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_78();
		func_73();
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
		func_85();
	}
	return 0;
}

void func_73()
{
	if (!func_74())
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

bool func_74()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_77())
	{
		return false;
	}
	if (func_75(UNK_0xD803B885F5E47A62()))
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

bool func_75(int iParam0)
{
	return func_76(iParam0, 20);
}

bool func_76(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_77()
{
	return -1;
}

void func_78()
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

void func_79()
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

bool func_80()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_81()
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

void func_82()
{
	if (func_32(14))
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
		Global_19486 = func_45();
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

void func_83()
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

bool func_84(bool bParam0, int iParam1)
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

void func_85()
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_87(bool bParam0)
{
	if (bParam0)
	{
		if (bLocal_149)
		{
			if (!UNK_0xEA6BC48857E0AC4C(&Local_156))
			{
				if (func_90(&uLocal_178, "REBU2AU", &Local_156, &cLocal_150, 8, 0, 0))
				{
					bLocal_149 = false;
				}
			}
			else
			{
				bLocal_149 = false;
			}
		}
	}
	else if ((!bLocal_149 && func_12()) && !func_53())
	{
		Local_156 = { func_55() };
		cLocal_150 = { func_57() };
		func_88();
		bLocal_149 = true;
	}
}

void func_88()
{
	Global_19671 = 0;
	func_89();
}

void func_89()
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

int func_90(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_72(sParam2, iParam4, 0);
}

void func_91()
{
	if (UNK_0xC844350D5D58C99A(bLocal_53))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
		{
			UNK_0x9DD8618CA5BF832D(bLocal_53, 394, true);
		}
		if (UNK_0xB87D13D0C064E9D1(bLocal_53, UNK_0x16F2683693E537C9(), 1))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
			{
				UNK_0xF3268524E9BE6D6E(bLocal_53, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
				UNK_0xFADC0A217229F6B5(bLocal_53, true);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_57))
			{
				UNK_0x0E2400AB9174FA81(5, bLocal_177, joaat("PLAYER"));
				UNK_0x6C3AE6E278DB3D0E(bLocal_57, UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0xFADC0A217229F6B5(bLocal_57, true);
			}
			func_110();
			SYSTEM::WAIT(0);
			func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
		if (UNK_0xC844350D5D58C99A(bLocal_57))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_57, UNK_0x16F2683693E537C9(), 1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
				{
					UNK_0xF3268524E9BE6D6E(bLocal_53, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_53, true);
				}
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_57))
				{
					UNK_0x0E2400AB9174FA81(5, bLocal_177, joaat("PLAYER"));
					UNK_0x6C3AE6E278DB3D0E(bLocal_57, UNK_0x16F2683693E537C9(), 0, 16);
					UNK_0xFADC0A217229F6B5(bLocal_57, true);
				}
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 1)
		{
			UNK_0xF3268524E9BE6D6E(bLocal_53, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
			UNK_0xFADC0A217229F6B5(bLocal_53, true);
			func_110();
			SYSTEM::WAIT(0);
			func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}
}

void func_92()
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if ((UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_53, 1.2f, 1.2f, 5f, 0, 1, 0) && UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9())) && !UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
		{
			if (func_49(1, 0, 1))
			{
				bLocal_130 = true;
				if (!bLocal_115)
				{
					func_99(1, 1, 1, 0, 0, 0);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 24);
					UNK_0xA37A90C62806D848(1);
					UNK_0x8BCB70EB440DED83(0);
					UNK_0xBFE31971E49FA500(0);
					UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), true);
					if (UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1()))
					{
						UNK_0x73270B3C9CC833FD(UNK_0x728870EB733D12A1(), true, 0);
						if (UNK_0x4E861BC5B1EDA7BD(UNK_0x728870EB733D12A1()))
						{
							func_98(UNK_0x728870EB733D12A1());
							UNK_0x5DAB50E08C3C504A(UNK_0x728870EB733D12A1(), 200f);
						}
						if (UNK_0x12DE711B1C681E9E(UNK_0x728870EB733D12A1(), bLocal_53, 5f, 5f, 5f, 0, 1, 0) || UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), vLocal_88, 5f, 5f, 5f, false, true, 0))
						{
							UNK_0xA47B46945FF6DE74(UNK_0x728870EB733D12A1(), UNK_0x68F4C0EC296D3901(bLocal_53, true) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
							{
								UNK_0xB9FD7450C0DAB575(UNK_0x728870EB733D12A1(), 1084227584 /* Float: 5f */);
							}
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_58))
					{
						if (UNK_0x4E861BC5B1EDA7BD(bLocal_58))
						{
							func_98(bLocal_58);
							UNK_0x5DAB50E08C3C504A(bLocal_58, 200f);
						}
						if (UNK_0x12DE711B1C681E9E(bLocal_58, bLocal_53, 8f, 8f, 8f, 0, 1, 0))
						{
							UNK_0xA47B46945FF6DE74(bLocal_58, vLocal_88, 0, 0, 0, 1);
							if (!UNK_0x437347B10A200C4B(bLocal_58, 0))
							{
								UNK_0xB9FD7450C0DAB575(bLocal_58, 1084227584 /* Float: 5f */);
							}
						}
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
					{
						bLocal_169 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(bLocal_53, true), 5f, false, 2);
						if (!UNK_0x437347B10A200C4B(bLocal_169, 0))
						{
							if (UNK_0x4E861BC5B1EDA7BD(bLocal_169))
							{
								func_98(bLocal_169);
								UNK_0x5DAB50E08C3C504A(bLocal_169, 200f);
							}
							UNK_0xA47B46945FF6DE74(bLocal_169, UNK_0x68F4C0EC296D3901(bLocal_53, true) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					UNK_0x7800CEC090C01D4D(vLocal_78, 10f);
					UNK_0x679C321F8CAA2CFA(vLocal_78, 10f, 0);
					UNK_0x28F5E4DA506AC0CA(vLocal_78, 4.5f, 0, 0, 0, 0, false, 0);
					UNK_0xA47B46945FF6DE74(bLocal_53, vLocal_78, 1, 0, 0, 1);
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vLocal_78, 1, 0, 0, 1);
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_54)
					{
						if (UNK_0xC844350D5D58C99A(iLocal_54[iVar0]))
						{
							if (UNK_0x5A91F08DF773C39D(iLocal_54[iVar0], UNK_0x68F4C0EC296D3901(bLocal_53, false), 1.5f, 1.5f, 1.5f, false, true, 0))
							{
								UNK_0xEBA53F35D0085654(&(iLocal_54[iVar0]));
							}
						}
						iVar0++;
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
					{
						iLocal_343 = UNK_0xE9744DB7B8CA6965(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						iLocal_77 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
						UNK_0x93E9ED66DAB9FBE3(iLocal_77, iLocal_343, "untie_cam", "random@burial");
						UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 18.2311f);
						UNK_0xD458AC1C1D29C3B4(bLocal_53, 200, false);
						UNK_0xA86D71B57C84C089(bLocal_53, 0);
						UNK_0xF20820358777D05E(bLocal_53, 0);
						UNK_0x327AAEE25F323797(bLocal_53);
						UNK_0x915804B434753CBD(bLocal_53, iLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						UNK_0xF895E10BF4C72645(bLocal_53, 0, 0);
						UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
						UNK_0xE14EC663EED44AD5(iLocal_61[0], iLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080 /* Float: 1000f */);
						UNK_0xE14EC663EED44AD5(iLocal_61[1], iLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080 /* Float: 1000f */);
						UNK_0xE3BB8E05FCEB3FBE(iLocal_77, true);
						UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
						iLocal_120 = UNK_0x1C0640BA9A7327B3();
						bLocal_115 = true;
					}
				}
			}
		}
	}
	if (bLocal_115 && !bLocal_117)
	{
		UNK_0x3FC8DBCC154CA56B();
		if (UNK_0x69DF961355195C3C(iLocal_343))
		{
			if ((UNK_0xA45992A6CE82FB43(iLocal_343) > 0.115f && UNK_0xA45992A6CE82FB43(iLocal_343) < 0.12f) || (UNK_0xA45992A6CE82FB43(iLocal_343) > 0.355f && UNK_0xA45992A6CE82FB43(iLocal_343) < 0.36f))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (UNK_0xA45992A6CE82FB43(iLocal_343) > 0.6f)
			{
				if (!bLocal_116)
				{
					func_110();
					SYSTEM::WAIT(0);
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						bLocal_116 = true;
					}
				}
			}
		}
		iLocal_119 = UNK_0x1C0640BA9A7327B3();
		if (((iLocal_119 - iLocal_120) > 9700 && !bLocal_123) && UNK_0x6C3F127AAF415E69() == 4)
		{
			UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			bLocal_123 = true;
		}
		if ((iLocal_119 - iLocal_120) > 10000)
		{
			bLocal_117 = true;
		}
		if (func_96(1000))
		{
			func_110();
			UNK_0x53491B90E4FD0E56(800);
			while (UNK_0xD0BB2359EC70FC37())
			{
				SYSTEM::WAIT(0);
			}
			bLocal_117 = true;
			bLocal_118 = true;
		}
	}
	if (bLocal_117 && !bLocal_122)
	{
		UNK_0x8BCB70EB440DED83(1);
		UNK_0xBFE31971E49FA500(1);
		UNK_0x57E0CF9BF653D99A(iLocal_343, 1f);
		UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
		UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
		UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 256.7693f);
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
		{
			UNK_0x327AAEE25F323797(bLocal_53);
			UNK_0xF895E10BF4C72645(bLocal_53, 0, 0);
			UNK_0x46CB381A452EF99D(bLocal_53, 1);
			UNK_0xA47B46945FF6DE74(bLocal_53, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(bLocal_53, 73.449f);
		}
		UNK_0x2FB9A57162E54BAB(26.1578f);
		UNK_0xEF6276132B396452(-8.1198f, 1065353216 /* Float: 1f */);
		UNK_0xE3BB8E05FCEB3FBE(iLocal_77, false);
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0x9A8DDC7C522F5BF5(iLocal_77, 0);
		UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), false);
		if (bLocal_118)
		{
			UNK_0x82E51BCA72537B6C(800);
			while (UNK_0x7BCE0E6DD4A1F749())
			{
				SYSTEM::WAIT(0);
			}
		}
		bLocal_122 = true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		if (bLocal_122)
		{
			if (!bLocal_121)
			{
				if (!func_12())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_45() == 1)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_45() == 2)
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					UNK_0x0E2400AB9174FA81(1, bLocal_177, joaat("PLAYER"));
					UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), bLocal_177);
					UNK_0xDD353D0E9C789D0E(&iLocal_65);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 4000);
					if (UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0))
					{
						if (UNK_0x12DE711B1C681E9E(bLocal_53, UNK_0x728870EB733D12A1(), 20f, 20f, 20f, 0, 1, 0) && UNK_0xD6DF381716822EFE(UNK_0x728870EB733D12A1()) > 0)
						{
							UNK_0x5B1D360B9C6F0A09(false, UNK_0x728870EB733D12A1(), -1, false, 1f, 1, 0);
						}
						else if (!UNK_0x16102BEDC7435774(bLocal_53))
						{
							UNK_0xE25C96A9C36BE5D2(bLocal_53, func_60());
							UNK_0x7BECA8F360B1686D(bLocal_53, 1);
							UNK_0xBF541ED34EA81209(bLocal_53, false);
						}
					}
					else if (!UNK_0x16102BEDC7435774(bLocal_53))
					{
						UNK_0xE25C96A9C36BE5D2(bLocal_53, func_60());
						UNK_0x7BECA8F360B1686D(bLocal_53, 1);
						UNK_0xBF541ED34EA81209(bLocal_53, false);
					}
					UNK_0x75ABDC5F81978924(iLocal_65);
					UNK_0x78ADC381772E3D54(bLocal_53, iLocal_65);
					UNK_0xF82EA857DA10E0CD(&iLocal_65);
					if (UNK_0xE4EDC4B0E92C078B(iLocal_114))
					{
						UNK_0x142CC44DB769B57E(&iLocal_114);
					}
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_137))
					{
						iLocal_137 = func_66(vLocal_139, 1);
					}
					if (func_45() == 2 && !func_9())
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_138))
						{
							iLocal_138 = func_66(vLocal_142, 0);
							UNK_0xBC8E0A7390523199(iLocal_138, 269);
							func_94();
						}
					}
					func_93();
					bLocal_131 = true;
					bLocal_121 = true;
					SYSTEM::SETTIMERA(0);
					UNK_0x21688103CC7F9B19(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					UNK_0xE342F209E49C5314(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, 1);
					func_99(0, 1, 1, 0, 0, 0);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, 4);
					UNK_0xE910A68AA670B4AA(UNK_0x16F2683693E537C9());
					iLocal_49 = 4;
				}
			}
		}
	}
}

void func_93()
{
	if (!func_9())
	{
		if (func_45() == 2)
		{
			Global_31005 = 1;
		}
	}
}

void func_94()
{
	if (func_45() == 2)
	{
		if (!Global_31007)
		{
			func_95("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_95(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_96(int iParam0)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		if ((UNK_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = UNK_0x1C0640BA9A7327B3();
		}
		Global_28 = UNK_0x1C0640BA9A7327B3();
		if ((UNK_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_97())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_97()
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0xBFC0798A6E3417F9(0, 18) || UNK_0xBFC0798A6E3417F9(2, 18))
	{
		return true;
	}
	return false;
}

void func_98(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				UNK_0x98B861C98966897A(bParam0);
				UNK_0xD458AC1C1D29C3B4(bParam0, UNK_0x7F6DC62EA9922664(bParam0) + 200, false);
				UNK_0x5DAB50E08C3C504A(bParam0, (UNK_0x6EE94F60DA2A2273(bParam0) + 200f));
				UNK_0xDC544F7DF5E5164D(bParam0, (UNK_0xD96C5EC6FCB061BA(bParam0) + 200f));
				UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(bParam0, true), 5f);
				UNK_0x536F1BE96C726C4B(UNK_0x68F4C0EC296D3901(bParam0, true), 2.5f, 1, 0, 0, false);
			}
		}
	}
}

void func_99(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_106(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_80())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_105(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_106(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_105(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_103(UNK_0xD803B885F5E47A62())) && !func_101(UNK_0xD803B885F5E47A62(), 0)) && !func_100()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_103(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_100()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_101(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_102(-1, 0) == 8;
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

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

bool func_103(bool bParam0)
{
	if (func_101(bParam0, 0))
	{
		return true;
	}
	if (func_104())
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

bool func_104()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_105(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_106(int iParam0)
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

void func_107()
{
	if (!UNK_0x437347B10A200C4B(bLocal_53, 0))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			case 1:
				if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			case 2:
				if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			case 3:
				if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4000, 5500));
						iLocal_168 = 0;
					}
				}
				break;
		}
	}
}

void func_108(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_109(iParam2), 1);
}

int func_109(int iParam0)
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

void func_110()
{
	Global_19671 = 0;
	func_111();
}

void func_111()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_112()
{
	if (!bLocal_67 && UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_107, 30f, 30f, 30f, false, true, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				bLocal_67 = true;
			}
		}
	}
	if (UNK_0xDF1306B443CD3D15(bLocal_58, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
		{
			UNK_0x89258193691A7600(iLocal_54[0], bLocal_58, UNK_0x16F2683693E537C9(), 8, 30f, 262144, -1f, 10f, 1);
			UNK_0xFADC0A217229F6B5(iLocal_54[0], true);
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
		{
			UNK_0x5B1D360B9C6F0A09(iLocal_54[1], bLocal_58, -1, false, 3f, 1, 0);
			UNK_0xFADC0A217229F6B5(iLocal_54[1], true);
		}
	}
	else
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[iLocal_64]))
			{
				UNK_0xF3268524E9BE6D6E(iLocal_54[iLocal_64], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
				UNK_0xFADC0A217229F6B5(iLocal_54[iLocal_64], true);
			}
			iLocal_64++;
		}
	}
	SYSTEM::WAIT(0);
	func_4();
}

void func_113()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
	{
		if (!UNK_0x688A90832774AB83(iLocal_54[0]) && !UNK_0x688A90832774AB83(iLocal_54[1]))
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!UNK_0x168558745A6AC21E(iLocal_54[1]))
				{
					UNK_0xA3BF0AA5A2608191(iLocal_54[1]);
					UNK_0x2C4A1A0F54A166E8(iLocal_54[1], UNK_0x16F2683693E537C9(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_49 = 7;
}

void func_114()
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
	{
		if (!bLocal_69)
		{
			if (!bLocal_68)
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_65);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0x75ABDC5F81978924(iLocal_65);
				UNK_0x78ADC381772E3D54(iLocal_54[1], iLocal_65);
				UNK_0xF82EA857DA10E0CD(&iLocal_65);
				bLocal_68 = true;
			}
			if (UNK_0x7069CC4DE1EA3FAA(iLocal_54[1], UNK_0x16F2683693E537C9(), 90f))
			{
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
				{
					fVar0 = func_116(iLocal_54[0], UNK_0x16F2683693E537C9(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					UNK_0x15AFB6CBDE990FB6(bLocal_60, 0, true);
					UNK_0x9F528B1B53FBC5D9(bLocal_60, iLocal_54[0], UNK_0x4A089F2B762B8D33(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					UNK_0xA3BF0AA5A2608191(iLocal_54[0]);
					UNK_0xDD353D0E9C789D0E(&iLocal_65);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
					UNK_0xC6EB89C59F2AF6B8(false, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, false, 0, 0, 0);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_65);
					UNK_0x78ADC381772E3D54(iLocal_54[0], iLocal_65);
					UNK_0xF82EA857DA10E0CD(&iLocal_65);
					UNK_0x5745EA6329A91E29(iLocal_54[1], joaat("WEAPON_SAWNOFFSHOTGUN"), true);
					UNK_0xA3BF0AA5A2608191(iLocal_54[1]);
					UNK_0xDD353D0E9C789D0E(&iLocal_65);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
					UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, fVar0, 1f, 1073741824 /* Float: 2f */, 0);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_65);
					UNK_0x78ADC381772E3D54(iLocal_54[1], iLocal_65);
					UNK_0xF82EA857DA10E0CD(&iLocal_65);
					bLocal_69 = true;
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_60))
		{
			if (UNK_0xD59B17D2DFF98E26(bLocal_60))
			{
				if (UNK_0xB4ECF989E2C1DAC8(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						UNK_0x15AFB6CBDE990FB6(bLocal_60, 1, true);
					}
				}
			}
		}
		if (bLocal_69 && !bLocal_165)
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_65);
				UNK_0x161356BF7864C47B(false, UNK_0x16F2683693E537C9(), UNK_0x16F2683693E537C9(), 1f, 0, 3.5f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), -1, 0);
				UNK_0x75ABDC5F81978924(iLocal_65);
				UNK_0x78ADC381772E3D54(iLocal_54[1], iLocal_65);
				UNK_0xF82EA857DA10E0CD(&iLocal_65);
				UNK_0xC92DB9682A650680("RE6_START");
				bLocal_165 = true;
			}
		}
		if (bLocal_165 && !bLocal_166)
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					UNK_0x9BE7E7B6B488CC55(iLocal_54[0], UNK_0x16F2683693E537C9(), -1, 0);
				}
				bLocal_166 = true;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (bLocal_166 && !bLocal_167)
		{
			if (SYSTEM::TIMERB() > 15000 && !func_12())
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					UNK_0xF96A174EE26D7588(iLocal_54[0], UNK_0x16F2683693E537C9(), 0);
					UNK_0xF96A174EE26D7588(iLocal_54[1], UNK_0x16F2683693E537C9(), 0);
					func_71(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_167 = true;
				}
			}
		}
		if (((!bLocal_70 && bLocal_165) && !UNK_0xEB6A8945D1AC98A1(iLocal_54[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_115())
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_65);
				UNK_0xE185F110925D87DB(false, iLocal_54[1], -1, 2f, 1f, 1073741824 /* Float: 2f */, 0);
				UNK_0xF96A174EE26D7588(false, iLocal_54[1], 0);
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				UNK_0x75ABDC5F81978924(iLocal_65);
				UNK_0x78ADC381772E3D54(iLocal_54[0], iLocal_65);
				UNK_0xF82EA857DA10E0CD(&iLocal_65);
				UNK_0xDD353D0E9C789D0E(&iLocal_65);
				UNK_0xE185F110925D87DB(false, iLocal_54[0], -1, 2f, 1f, 1073741824 /* Float: 2f */, 0);
				UNK_0xF96A174EE26D7588(false, iLocal_54[0], 0);
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				UNK_0x75ABDC5F81978924(iLocal_65);
				UNK_0x78ADC381772E3D54(iLocal_54[1], iLocal_65);
				UNK_0xF82EA857DA10E0CD(&iLocal_65);
				SYSTEM::SETTIMERB(15000);
				bLocal_145 = false;
				bLocal_166 = true;
				bLocal_70 = true;
			}
		}
		if (bLocal_167)
		{
			func_11();
			func_118();
		}
		if (((UNK_0xE115347EA59F7B86(iLocal_54[0], UNK_0x16F2683693E537C9()) || UNK_0xE115347EA59F7B86(iLocal_54[1], UNK_0x16F2683693E537C9())) || UNK_0x8B674081D2209D07(UNK_0xD803B885F5E47A62(), iLocal_54[0])) || UNK_0x8B674081D2209D07(UNK_0xD803B885F5E47A62(), iLocal_54[1]))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4) && !UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 3))
			{
				if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
				{
					if (!bLocal_76)
					{
						func_110();
						SYSTEM::WAIT(0);
						if (func_71(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							bLocal_76 = true;
							func_118();
						}
					}
				}
			}
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 3) && !UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4))
			{
				if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
				{
					if (!bLocal_76)
					{
						func_110();
						SYSTEM::WAIT(0);
						if (func_71(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							bLocal_76 = true;
							func_118();
						}
					}
				}
			}
			if (UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()) || UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				func_118();
			}
		}
	}
}

bool func_115()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

float func_116(bool bParam0, bool bParam1, int iParam2)
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

bool func_117()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
			{
				if ((((UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("RHINO")) || UNK_0x838876B8BA050A8A(UNK_0x16F2683693E537C9())) || UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("ANNIHILATOR"))) || UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("BUZZARD"))) || UNK_0xC7BC967711A8A063(UNK_0x16F2683693E537C9()))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_118()
{
	func_11();
	UNK_0xC92DB9682A650680("RE6_START");
	if (!bLocal_145)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_54[0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
			{
				UNK_0x9DD8618CA5BF832D(iLocal_54[0], 156, true);
				if (UNK_0xC844350D5D58C99A(bLocal_60))
				{
					UNK_0x2ECF845953E95D1B(iLocal_54[0]);
					if (UNK_0xD59B17D2DFF98E26(bLocal_60))
					{
						if (!bLocal_70)
						{
							UNK_0x15AFB6CBDE990FB6(bLocal_60, 0, true);
							UNK_0x9F528B1B53FBC5D9(bLocal_60, iLocal_54[0], UNK_0x4A089F2B762B8D33(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							UNK_0xA3BF0AA5A2608191(iLocal_54[0]);
							UNK_0xDD353D0E9C789D0E(&iLocal_65);
							UNK_0xBC43ED9FE28DB191(false);
							UNK_0xC6EB89C59F2AF6B8(false, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, false, 0, 0, 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_65);
							UNK_0x78ADC381772E3D54(iLocal_54[0], iLocal_65);
							UNK_0xF82EA857DA10E0CD(&iLocal_65);
							UNK_0xFADC0A217229F6B5(iLocal_54[0], true);
							UNK_0xF895E10BF4C72645(iLocal_54[0], 0, 0);
							bLocal_145 = true;
						}
					}
					else
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_65);
						UNK_0xBC43ED9FE28DB191(false);
						UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0x75ABDC5F81978924(iLocal_65);
						UNK_0x78ADC381772E3D54(iLocal_54[0], iLocal_65);
						UNK_0xF82EA857DA10E0CD(&iLocal_65);
						UNK_0xFADC0A217229F6B5(iLocal_54[0], true);
						bLocal_145 = true;
					}
				}
			}
			else
			{
				bLocal_145 = true;
			}
		}
		else
		{
			bLocal_145 = true;
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_60))
	{
		if (UNK_0xD59B17D2DFF98E26(bLocal_60))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
			{
				if (UNK_0xB4ECF989E2C1DAC8(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						UNK_0x15AFB6CBDE990FB6(bLocal_60, 1, true);
					}
				}
			}
		}
	}
	if (!bLocal_146)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_54[1]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
			{
				UNK_0x9DD8618CA5BF832D(iLocal_54[1], 156, true);
				UNK_0x2ECF845953E95D1B(iLocal_54[1]);
				UNK_0xDD353D0E9C789D0E(&iLocal_65);
				UNK_0xBC43ED9FE28DB191(false);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 500);
				UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0x75ABDC5F81978924(iLocal_65);
				UNK_0x78ADC381772E3D54(iLocal_54[1], iLocal_65);
				UNK_0xF82EA857DA10E0CD(&iLocal_65);
				UNK_0xFADC0A217229F6B5(iLocal_54[1], true);
				bLocal_146 = true;
			}
			else
			{
				bLocal_146 = true;
			}
		}
		else
		{
			bLocal_146 = true;
		}
	}
	if (bLocal_146 && bLocal_145)
	{
		iLocal_106 = UNK_0x1C0640BA9A7327B3() + 8500;
		SYSTEM::SETTIMERA(0);
		iLocal_49 = 7;
	}
}

int func_119(bool bParam0)
{
	if (func_122())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_25(Global_111627))
		{
			func_120(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_25(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

bool func_121(int iParam0)
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

bool func_122()
{
	switch (func_123(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0))
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_41431);
}

int func_126(int iParam0, int iParam1)
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

bool func_127(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_125(iParam0))
	{
		return false;
	}
	return true;
}

void func_128()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_163))
	{
		UNK_0x142CC44DB769B57E(&iLocal_163);
	}
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_114))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_53, 0))
		{
			iLocal_114 = func_68(bLocal_53, 0, 145);
		}
	}
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_111[iLocal_64]))
		{
			if (!UNK_0x437347B10A200C4B(iLocal_54[iLocal_64], 0))
			{
				iLocal_111[iLocal_64] = func_68(iLocal_54[iLocal_64], 1, 145);
			}
		}
		iLocal_64++;
	}
}

void func_129()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			case 1:
				if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			case 2:
				if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			case 3:
				if (iLocal_106 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 6500));
						iLocal_168 = 0;
					}
				}
				break;
		}
	}
}

void func_130()
{
	switch (iLocal_110)
	{
		case 0:
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_110++;
			}
			break;
		case 1:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		case 2:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		case 3:
			if (!func_12())
			{
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		case 4:
			iLocal_106 = UNK_0x1C0640BA9A7327B3() + 3000;
			iLocal_110++;
			break;
		case 5:
			break;
	}
}

void func_131()
{
	if (UNK_0xC844350D5D58C99A(bLocal_60))
	{
		if (UNK_0xD59B17D2DFF98E26(bLocal_60))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]))
			{
				if (UNK_0xB4ECF989E2C1DAC8(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
					{
						UNK_0xE81656B429E5C4B5("scr_burial_dirt", bLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0);
					}
				}
				if (UNK_0xB4ECF989E2C1DAC8(iLocal_54[0], "random@burial", "a_burial", 3))
				{
					if (((((UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") > 0.04f && UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") < 0.043f) || (UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") > 0.24f && UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") < 0.243f)) || (UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") > 0.44f && UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") < 0.443f)) || (UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") > 0.64f && UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") < 0.643f)) || (UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") > 0.84f && UNK_0x8CA9406E01C7EE58(iLocal_54[0], "random@burial", "a_burial") < 0.843f))
					{
						UNK_0xE81656B429E5C4B5("scr_burial_dirt", bLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0);
					}
				}
			}
		}
	}
}

bool func_132()
{
	if (!bLocal_129)
	{
		if (UNK_0xD3DCEC81D13AAFB1(vLocal_88, 100f, true) || UNK_0xD3DCEC81D13AAFB1(vLocal_88, 100f, true))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) || UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return true;
			}
			else if (!UNK_0xD3DCEC81D13AAFB1(vLocal_88, 100f, true) || !UNK_0xD3DCEC81D13AAFB1(vLocal_88, 100f, true))
			{
				iLocal_51 = 1;
				return true;
			}
		}
		if (((((((((UNK_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_SMOKEGRENADE"), 1) || UNK_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADE"), 1)) || UNK_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_STICKYBOMB"), 1)) || UNK_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADELAUNCHER"), 1)) || UNK_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADELAUNCHER_SMOKE"), 1)) || UNK_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_RPG"), 1)) || UNK_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_MOLOTOV"), 1)) || UNK_0x372F6F38C16E36DA(2, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f))) || UNK_0x372F6F38C16E36DA(4, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f))) || UNK_0x372F6F38C16E36DA(0, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f)))
		{
			iLocal_51 = 1;
			return true;
		}
		if (UNK_0xC844350D5D58C99A(bLocal_58))
		{
			if (!UNK_0x437347B10A200C4B(bLocal_58, 0))
			{
				if (UNK_0xB87D13D0C064E9D1(bLocal_58, UNK_0x16F2683693E537C9(), 1) || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_58, 0))
				{
					UNK_0xE910A68AA670B4AA(bLocal_58);
					func_118();
					iLocal_51 = 3;
					return true;
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("TOWTRUCK")) || UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("TOWTRUCK2")))
					{
						if (UNK_0x6D18156F72BE0773(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), bLocal_58))
						{
							func_118();
							iLocal_51 = 3;
							return true;
						}
					}
				}
			}
		}
		if (!bLocal_75)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
			{
				if ((((UNK_0xE115347EA59F7B86(iLocal_54[0], UNK_0x16F2683693E537C9()) || UNK_0xE115347EA59F7B86(iLocal_54[1], UNK_0x16F2683693E537C9())) || UNK_0x8B674081D2209D07(UNK_0xD803B885F5E47A62(), iLocal_54[0])) || UNK_0x8B674081D2209D07(UNK_0xD803B885F5E47A62(), iLocal_54[1])) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_88 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_88 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_51 = 1;
						return true;
					}
				}
			}
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_54[1]))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
				{
					if (UNK_0x1B3D109B39CC2C89(UNK_0x728870EB733D12A1(), iLocal_54[0]) || UNK_0x1B3D109B39CC2C89(UNK_0x728870EB733D12A1(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return true;
					}
				}
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_53, UNK_0x16F2683693E537C9(), 0) || UNK_0x54648B774DB42A3A(bLocal_53, joaat("WEAPON_STUNGUN"), 0))
			{
				iLocal_51 = 4;
				return true;
			}
		}
		else
		{
			iLocal_51 = 4;
			return true;
		}
		if (UNK_0x437347B10A200C4B(iLocal_54[0], 0) || UNK_0x437347B10A200C4B(iLocal_54[1], 0))
		{
			iLocal_51 = 6;
			return true;
		}
		if (bLocal_75)
		{
			return true;
		}
	}
	return false;
}

bool func_133(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	bVar2 = false;
	if (!UNK_0x437347B10A200C4B(bParam0, 0) && !bParam4)
	{
		if (UNK_0xE3614539F8B5C807(bParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0) && !bParam4)
		{
			vVar3 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			vVar6 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			fVar9 = SYSTEM::VDIST(vVar3, vVar6);
			if (!UNK_0xEAE0D21A50E6C7F4(bParam3, 3))
			{
				if (func_139(bParam0, iParam6))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_Attacked\n");
					*iParam1 = 3;
					func_137(bParam0);
					return true;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam3, true))
			{
				if (fVar1 < 20f)
				{
				}
				if (UNK_0xD3DCEC81D13AAFB1(vVar6, fParam5, true))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*iParam1 = 1;
					func_137(bParam0);
					return true;
				}
				if (UNK_0x723EE7F83DF1497D(vVar6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*iParam1 = 1;
					func_137(bParam0);
					return true;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam3, 2))
			{
				fVar0 = UNK_0xF428D43975FB0E0E(UNK_0x16F2683693E537C9());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
				{
					if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0))
					{
						if (fVar9 < fVar0)
						{
							if (UNK_0xF649DD3BF44195C7(bParam0, UNK_0x16F2683693E537C9(), 17))
							{
								func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_138("	aggro Ped knows player is pointing gun\n");
								func_134("		lockOnTimer = ", *uParam2);
								func_138("\n");
								func_134("		time since not LockedOn = ", (UNK_0x1C0640BA9A7327B3() - iLocal_19));
								func_138("\n");
								bVar2 = true;
								if (UNK_0x1C0640BA9A7327B3() > (iLocal_19 + *uParam2))
								{
									func_138("			aggroReason = EAggro_HostileOrEnemy\n");
									*iParam1 = 2;
									func_137(bParam0);
									return true;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam3, false))
			{
				if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("			aggroReason = EAggro_Danger\n");
					*iParam1 = 0;
					func_137(bParam0);
					return true;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = UNK_0x1C0640BA9A7327B3();
	}
	return false;
}

void func_134(bool bParam0, int iParam1)
{
	func_136(bParam0);
	func_135(iParam1);
}

void func_135(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_136(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

void func_137(bool bParam0)
{
	UNK_0x0FB22E2FED7BCC7E(bParam0);
}

void func_138(bool bParam0)
{
	func_136(bParam0);
}

bool func_139(bool bParam0, int iParam1)
{
	if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
	}
	else if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		if ((UNK_0x65BC0B7172CA52DD(bParam0) - UNK_0x7F6DC62EA9922664(bParam0)) > iParam1)
		{
			return true;
		}
	}
	return false;
}

void func_140()
{
	vector3 vVar0;
	vector3 vVar3;

	func_142(39, 1);
	func_142(40, 1);
	func_142(41, 1);
	func_142(42, 1);
	func_142(43, 1);
	func_142(44, 1);
	UNK_0x7D6CA5F52B3748BF(vLocal_139 - Vector(20f, 40f, 40f), vLocal_139 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	UNK_0x7D6CA5F52B3748BF(vLocal_78 - Vector(20f, 50f, 60f), vLocal_78 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	UNK_0xAB8E2DDC7AF955E0(bLocal_105, true);
	UNK_0x15EA7F4313456B1D(5, false);
	UNK_0x15EA7F4313456B1D(3, false);
	UNK_0x51B096AAC60548C1(0f);
	bLocal_53 = UNK_0x36F2404464202779(26, bLocal_102, vLocal_78, bLocal_97, 1, true);
	UNK_0x11AD11297DC58CC7(bLocal_53, true);
	UNK_0x25C5402CC10F76CD(bLocal_53, false);
	UNK_0xBAFED2F6486F771A(bLocal_53, 2, false);
	UNK_0xBAFED2F6486F771A(bLocal_53, 128, true);
	UNK_0xAFF39FB306F8E232(bLocal_53, 1, false);
	UNK_0xAFF39FB306F8E232(bLocal_53, 6, false);
	UNK_0x4E885A246A9D983A(bLocal_53, 206, true);
	UNK_0x4E885A246A9D983A(bLocal_53, 318, false);
	UNK_0x4E885A246A9D983A(bLocal_53, 118, false);
	UNK_0x4E885A246A9D983A(bLocal_53, 208, true);
	UNK_0x71199B01895C6202(bLocal_102);
	UNK_0xD458AC1C1D29C3B4(bLocal_53, bLocal_125, false);
	UNK_0xF4CB0B98F8F79D8D(UNK_0x16F2683693E537C9(), 0);
	UNK_0xF63400DBE3303D26("rghKidnappers", &bLocal_176);
	UNK_0xF63400DBE3303D26("rghVictim", &bLocal_177);
	UNK_0x6DF7BF67E86AAE86(bLocal_53, bLocal_177);
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		iLocal_54[iLocal_64] = UNK_0x36F2404464202779(26, bLocal_103, vLocal_81[iLocal_64 /*3*/], fLocal_98[iLocal_64], 1, true);
		UNK_0x11AD11297DC58CC7(iLocal_54[iLocal_64], true);
		UNK_0x20EC6650986ACDC7(iLocal_54[iLocal_64], 1);
		UNK_0xAFF39FB306F8E232(iLocal_54[iLocal_64], 0, true);
		UNK_0xBAFED2F6486F771A(iLocal_54[iLocal_64], 2, false);
		UNK_0xBAFED2F6486F771A(iLocal_54[iLocal_64], 128, true);
		UNK_0x4E885A246A9D983A(iLocal_54[iLocal_64], 42, true);
		UNK_0x3CC33E4E9CE523F4(iLocal_54[0], 2);
		UNK_0xAFF39FB306F8E232(iLocal_54[0], 50, true);
		UNK_0x29CD9554726C7577(iLocal_54[iLocal_64], 50);
		UNK_0x298903DD96203C2C(iLocal_54[iLocal_64], 13);
		UNK_0xE8832A9E16A57A1F(iLocal_54[iLocal_64], true, 1);
		UNK_0x6DF7BF67E86AAE86(iLocal_54[iLocal_64], bLocal_176);
		UNK_0x6D80F1AEBA734886(iLocal_54[iLocal_64], UNK_0x09AC81E49EA267F7(800, 2000));
		iLocal_64++;
	}
	UNK_0x71199B01895C6202(bLocal_104);
	UNK_0x71199B01895C6202(bLocal_103);
	UNK_0x29CD9554726C7577(iLocal_54[1], 100);
	UNK_0xAA714ADDDC372E0F(iLocal_54[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	UNK_0x0E2400AB9174FA81(5, bLocal_176, joaat("PLAYER"));
	UNK_0x262EF6C6306BEA6C(iLocal_54[0], joaat("WEAPON_PISTOL"), -1, false, true);
	UNK_0x262EF6C6306BEA6C(iLocal_54[1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
	bLocal_58 = UNK_0x122AAB0B1D6F55AD(bLocal_105, vLocal_88, bLocal_101, true, true, false);
	UNK_0xB9FD7450C0DAB575(bLocal_58, 1084227584 /* Float: 5f */);
	UNK_0x0882E3DC0C991680(bLocal_58, 3);
	UNK_0x611DFA9294B339CA(bLocal_58, 5, 0, false);
	UNK_0x71199B01895C6202(bLocal_105);
	bLocal_60 = UNK_0x7707E48765093646(joaat("PROP_LD_SHOVEL"), vLocal_107, true, true, false);
	UNK_0x71199B01895C6202(joaat("PROP_LD_SHOVEL"));
	iLocal_61[0] = UNK_0x7707E48765093646(joaat("P_ARM_BIND_CUT_S"), vLocal_107, true, true, false);
	iLocal_61[1] = UNK_0x7707E48765093646(joaat("P_ARM_BIND_CUT_S"), vLocal_107 + Vector(1f, 1f, 1f), true, true, false);
	UNK_0x523BCC9DC80CD82F(joaat("P_ARM_BIND_CUT_S"));
	UNK_0x9F528B1B53FBC5D9(bLocal_60, iLocal_54[0], UNK_0x4A089F2B762B8D33(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	UNK_0x64F9F278AB9DCA2C(iLocal_54[0], false, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(iLocal_54[0], 3, false, true, 0);
	UNK_0x64F9F278AB9DCA2C(iLocal_54[0], 4, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(iLocal_54[1], false, false, 2, 0);
	UNK_0x64F9F278AB9DCA2C(iLocal_54[1], 3, 2, true, 0);
	UNK_0x64F9F278AB9DCA2C(iLocal_54[1], 4, true, true, 0);
	vVar0 = { vLocal_78 };
	vVar3 = { -2f, -4f, 18f };
	iLocal_343 = UNK_0xE9744DB7B8CA6965(vVar0, vVar3, 2);
	UNK_0x915804B434753CBD(bLocal_53, iLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	UNK_0xE14EC663EED44AD5(iLocal_61[0], iLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080 /* Float: 1000f */);
	UNK_0xE14EC663EED44AD5(iLocal_61[1], iLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080 /* Float: 1000f */);
	UNK_0xC90224D9E95E5E3A(iLocal_343, true);
	UNK_0xFADC0A217229F6B5(bLocal_53, true);
	UNK_0xC6EB89C59F2AF6B8(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, false, 0, 0, 0);
	UNK_0xC6EB89C59F2AF6B8(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, false, 0, 0, 0);
	UNK_0x17EAEF3CBDBACF1B(iLocal_54[0], vLocal_91, vLocal_94, 2.75f, 0, 0);
	UNK_0x17EAEF3CBDBACF1B(iLocal_54[1], vLocal_91, vLocal_94, 2.75f, 0, 0);
	if (func_45() == 0)
	{
		func_141(&uLocal_178, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (func_45() == 1)
	{
		func_141(&uLocal_178, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else if (func_45() == 2)
	{
		func_141(&uLocal_178, 2, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	UNK_0x4F39CC3882DD074E(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	UNK_0x4F39CC3882DD074E(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	UNK_0x4F39CC3882DD074E(bLocal_53, "KIDNAPPEDFEMALE");
	func_141(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_141(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_141(&uLocal_178, 5, bLocal_53, "KIDNAPPEDFEMALE", 0, 1);
}

void func_141(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_142(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_149(iParam0, 2, 1))
		{
			func_148(iParam0, 2, 1);
		}
	}
	else if (func_149(iParam0, 2, 1))
	{
		func_143(iParam0, 2, 1);
	}
}

void func_143(int iParam0, bool bParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			bVar0 = func_146(func_147(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_144(func_147(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_144(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_145(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_147(int iParam0)
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

void func_148(int iParam0, bool bParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			bVar0 = func_146(func_147(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_144(func_147(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_149(int iParam0, bool bParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_146(func_147(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_150()
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

void func_151()
{
	UNK_0x523BCC9DC80CD82F(bLocal_102);
	UNK_0x523BCC9DC80CD82F(bLocal_104);
	UNK_0x523BCC9DC80CD82F(bLocal_103);
	UNK_0x523BCC9DC80CD82F(bLocal_105);
	UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_SHOVEL"));
	UNK_0x523BCC9DC80CD82F(joaat("P_ARM_BIND_CUT_S"));
	UNK_0x3F423BF5B8125A50("random@burial");
	UNK_0x9E5E60D8C63FD9D1();
	UNK_0xAE317D00A5A55DF6("ROPE_CUT", 0, -1);
	UNK_0x13896FDECC859926("RE6_BOTH_DEAD_OS");
	if (((((((((UNK_0xB87F6CF6E5628C67(bLocal_102) && UNK_0xB87F6CF6E5628C67(bLocal_104)) && UNK_0xB87F6CF6E5628C67(bLocal_103)) && UNK_0xB87F6CF6E5628C67(bLocal_105)) && UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_SHOVEL"))) && UNK_0xB87F6CF6E5628C67(joaat("P_ARM_BIND_CUT_S"))) && UNK_0xB4AE0788C1587752("random@burial")) && UNK_0x25F7A4D42AF2AB93()) && UNK_0xAE317D00A5A55DF6("ROPE_CUT", 0, -1)) && UNK_0x13896FDECC859926("RE6_BOTH_DEAD_OS"))
	{
		bLocal_52 = true;
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(bLocal_102);
		UNK_0x523BCC9DC80CD82F(bLocal_104);
		UNK_0x523BCC9DC80CD82F(bLocal_103);
		UNK_0x523BCC9DC80CD82F(bLocal_105);
		UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_SHOVEL"));
		UNK_0x523BCC9DC80CD82F(joaat("P_ARM_BIND_CUT_S"));
		UNK_0x3F423BF5B8125A50("random@burial");
		UNK_0x9E5E60D8C63FD9D1();
		UNK_0xAE317D00A5A55DF6("ROPE_CUT", 0, -1);
		UNK_0x13896FDECC859926("RE6_BOTH_DEAD_OS");
	}
}

void func_152()
{
	bLocal_102 = joaat("U_F_Y_MISTRESS");
	bLocal_103 = joaat("A_M_M_SALTON_01");
	bLocal_104 = joaat("A_M_M_SALTON_01");
	bLocal_105 = joaat("BISON");
	vLocal_78 = { 163.4486f, 6839.993f, 18.86f };
	bLocal_97 = 0f;
	vLocal_81[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_98[0] = 297.0056f;
	vLocal_81[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_98[1] = 193.3866f;
	vLocal_88 = { 169.3462f, 6837.805f, 19.1421f };
	bLocal_101 = 265.6862f;
	vLocal_91 = { 164.0896f, 6836.923f, 19.03899f };
	vLocal_94 = { 168.9638f, 6834.302f, 24.99057f };
	bLocal_66 = true;
}

bool func_153()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_44) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_164())
		{
			return false;
		}
	}
	if (func_160())
	{
		return true;
	}
	if (func_154(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_154(float fParam0, bool bParam1)
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
		if (func_33(func_45()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_155(iVar32, &Var0);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_159(iParam0) };
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

struct<2> func_159(int iParam0)
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

bool func_160()
{
	if (func_163() && !func_164())
	{
		return true;
	}
	if (func_162() && func_161())
	{
		return true;
	}
	return false;
}

bool func_161()
{
	return Global_111356 > 0;
}

bool func_162()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_163()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_164()
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

bool func_165()
{
	if (!func_125(5))
	{
		return true;
	}
	if (func_160())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_164())
		{
			return false;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_166()
{
	if ((Global_111627 == func_40() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_169(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_168();
}

void func_168()
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

void func_169(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_170(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_211())
		{
			return false;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_164())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_16(0))
		{
			return false;
		}
		if (func_160())
		{
			return false;
		}
		if (func_210())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_33(func_45()))
		{
			if (func_154(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return false;
			}
		}
		if (!func_209(iParam3))
		{
			return false;
		}
		if (func_33(func_45()))
		{
			if (func_208(func_45()) == 4 || func_208(func_45()) == 5)
			{
				return false;
			}
		}
		if (func_33(func_45()))
		{
			if (!func_207(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_206(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_205())
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
		if (!func_196(4))
		{
			return false;
		}
		if (!func_125(5))
		{
			return false;
		}
		if (func_195(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_195(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_209(30) && !func_195(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_33(func_45()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_194(bVar8))
				{
					if (func_172(iVar4))
					{
						if (!func_171(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_45() != iVar4)
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

bool func_171(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_172(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_173(bVar0);
}

int func_173(bool bParam0)
{
	return func_174(bParam0, 1);
}

int func_174(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_194(bParam0))
	{
		return 0;
	}
	func_175(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_175(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_176(func_187(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_176(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_186(bParam0, bParam1))
	{
		iVar0 = func_185(bParam1);
		iVar1 = func_183(bParam0);
		iVar2 = (func_183(bParam0) - func_183(bParam1));
		iVar3 = (func_185(bParam0) - func_185(bParam1));
		iVar4 = (func_182(bParam0) - func_182(bParam1));
		iVar5 = (func_181(bParam0) - func_181(bParam1));
		iVar6 = (func_180(bParam0) - func_180(bParam1));
		iVar7 = (func_179(bParam0) - func_179(bParam1));
	}
	else
	{
		iVar0 = func_185(bParam0);
		iVar1 = func_183(bParam1);
		iVar2 = (func_183(bParam1) - func_183(bParam0));
		iVar3 = (func_185(bParam1) - func_185(bParam0));
		iVar4 = (func_182(bParam1) - func_182(bParam0));
		iVar5 = (func_181(bParam1) - func_181(bParam0));
		iVar6 = (func_180(bParam1) - func_180(bParam0));
		iVar7 = (func_179(bParam1) - func_179(bParam0));
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
		iVar4 = (iVar4 + func_178(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_177(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_177(float fParam0, float fParam1, float fParam2)
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

int func_178(bool bParam0, int iParam1)
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

int func_179(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_180(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_181(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_182(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_183(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_184(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_185(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_186(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_194(bParam1) || !func_194(bParam0))
	{
		return true;
	}
	bVar0 = func_183(bParam0);
	bVar1 = func_183(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_185(bParam0);
	bVar1 = func_185(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_182(bParam0);
	bVar1 = func_182(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_181(bParam0);
	bVar1 = func_181(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_180(bParam0);
	bVar1 = func_180(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_179(bParam0);
	bVar1 = func_179(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_187()
{
	var uVar0;

	func_193(&uVar0, UNK_0x4460E481B9E33ADA());
	func_192(&uVar0, UNK_0x8D199E381D262EEF());
	func_191(&uVar0, UNK_0xD8A54335F18763BA());
	func_190(&uVar0, UNK_0x972A296334C9D57B());
	func_189(&uVar0, UNK_0x118229AD063C3C1D());
	func_188(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_188(bool bParam0, int iParam1)
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

void func_189(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_190(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_185(*bParam0);
	iVar1 = func_183(*bParam0);
	if (iParam1 < 1 || iParam1 > func_178(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_191(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_192(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_193(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_194(bool bParam0)
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
	iVar0 = func_179(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_180(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_181(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_183(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_185(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_182(bParam0);
	if (iVar5 < 1 || iVar5 > func_178(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_195(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_196(int iParam0)
{
	bool bVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				bVar0 = func_45();
				if (!func_33(bVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_204()) || Global_110685) || Global_30770) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_204()) || Global_30770) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_204()) || Global_110685) || Global_30770) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_111638.f_7683.f_919[bVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_204()) || Global_110685) || Global_30770) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_199()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_204() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_84(8, -1)) || func_199()) || func_198()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_84(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_204()) || Global_30770) || func_203()) || func_84(8, -1)) || func_201()) || func_200()) || func_199()) || Global_111638.f_7683.f_919[bVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_204()) || func_201()) || Global_110685) || Global_30770) || func_203()) || Global_42596) || func_84(8, -1)) || func_200()) || func_198()) || func_199()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_204()) || Global_110685) || Global_30770) || func_203()) || func_84(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

bool func_197()
{
	return Global_98783.f_1;
}

bool func_198()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_199()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_200()
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

bool func_201()
{
	return Global_98796.f_346 > 0;
}

bool func_202()
{
	return Global_98796.f_345 > 0;
}

bool func_203()
{
	return Global_1312877;
}

bool func_204()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_205()
{
	func_82();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_206(bool bParam0)
{
	return func_186(func_187(), bParam0);
}

bool func_207(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = func_45();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		bVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (bVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		case 19:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 20:
			if (bVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		case 28:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 13:
			if (bVar1 == 0)
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
			if (bParam1 == 2 || bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 30:
			if (bVar1 != 2)
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

int func_208(bool bParam0)
{
	if (!func_33(bParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[bParam0];
}

bool func_209(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_211())
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

bool func_210()
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

bool func_211()
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

void func_212()
{
	int iVar0;

	if (bLocal_162)
	{
		func_225(0);
		UNK_0xB547E3FFEB27073E();
		UNK_0x38DC636F3D2D2FA8("RE6_BOTH_DEAD_OS");
		if (bLocal_145 || bLocal_165)
		{
			if (Global_31009)
			{
				UNK_0xC92DB9682A650680("AC_STOP");
			}
			else
			{
				UNK_0xC92DB9682A650680("RE6_END");
			}
		}
		func_224();
		UNK_0x0E2400AB9174FA81(255, bLocal_177, joaat("PLAYER"));
		UNK_0x0E2400AB9174FA81(255, joaat("PLAYER"), bLocal_177);
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_53))
			{
				UNK_0x4E885A246A9D983A(bLocal_53, 317, true);
				if (!UNK_0x405E212DDE472467(bLocal_53, 0))
				{
					UNK_0x61F0DE0226FF7252(bLocal_53);
				}
				if (UNK_0x16102BEDC7435774(bLocal_53))
				{
					UNK_0x0A94A109271BE75A(bLocal_53);
				}
				UNK_0x11AD11297DC58CC7(bLocal_53, false);
				UNK_0x25C5402CC10F76CD(bLocal_53, true);
			}
			else if (!UNK_0x437347B10A200C4B(bLocal_53, 0))
			{
				UNK_0xA86D71B57C84C089(bLocal_53, 1);
				UNK_0xF20820358777D05E(bLocal_53, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_54)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_54[iVar0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x2ECF845953E95D1B(iLocal_54[iVar0]);
				if (bLocal_69 || bLocal_76)
				{
					UNK_0x6C3AE6E278DB3D0E(iLocal_54[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
				}
				else
				{
					UNK_0xF3268524E9BE6D6E(iLocal_54[iVar0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					func_110();
				}
				UNK_0xFADC0A217229F6B5(iLocal_54[iVar0], true);
			}
			iVar0++;
		}
		UNK_0xF690C84DADBB3551(&(iLocal_61[0]));
		UNK_0xF690C84DADBB3551(&(iLocal_61[1]));
		if (UNK_0xC844350D5D58C99A(bLocal_58))
		{
			UNK_0x046C362CF15F1935(&bLocal_58);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_60))
		{
			if (UNK_0xD59B17D2DFF98E26(bLocal_60))
			{
				UNK_0x15AFB6CBDE990FB6(bLocal_60, 1, true);
			}
			UNK_0xEEEE2E5FA6F78DF0(&bLocal_60);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_163))
		{
			UNK_0x142CC44DB769B57E(&iLocal_163);
		}
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_111[iLocal_64]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_111[iLocal_64]));
			}
			iLocal_64++;
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_114))
		{
			UNK_0x142CC44DB769B57E(&iLocal_114);
		}
		if (UNK_0x9F4FE516EAACCFC5(iLocal_77))
		{
			UNK_0x9A8DDC7C522F5BF5(iLocal_77, 0);
		}
		UNK_0x15EA7F4313456B1D(5, true);
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x51B096AAC60548C1(1f);
		UNK_0xE342F209E49C5314(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, 1);
	}
	func_213(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_213(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_166())
	{
		func_217(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_216(30000);
		StringCopy(&cVar0, func_215(Global_111627, 1), 64);
		if (func_39(Global_111627) > 0)
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
	func_214(&Global_30827);
	Global_111628 = 0;
	func_169(-1);
}

void func_214(var uParam0)
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

char* func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_217(int iParam0)
{
	func_218(iParam0, 0, func_223(iParam0));
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_187();
	func_221(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_220(iParam0, &bVar0);
	Var1 = { func_219(&bVar0) };
}

struct<16> func_219(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_181(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_180(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_179(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_182(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_185(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_183(*bParam0), 64);
	return Var0;
}

void func_220(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_221(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_183(*bParam0);
	bVar1 = func_185(*bParam0);
	iVar2 = func_182(*bParam0);
	iVar3 = func_181(*bParam0);
	iVar4 = func_180(*bParam0);
	iVar5 = func_179(*bParam0);
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
	iVar6 = func_178(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_178(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_222(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_222(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_193(bParam0, iParam1);
	func_192(bParam0, iParam2);
	func_191(bParam0, iParam3);
	func_189(bParam0, bParam5);
	func_190(bParam0, iParam4);
	func_188(bParam0, iParam6);
}

int func_223(int iParam0)
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

void func_224()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_225(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_142(iVar0, bParam0);
		iVar0++;
	}
}

