#region Local Var
	var uLocal_0 = 0;
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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = false;
	bool bLocal_62 = false;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_73 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	vector3 vLocal_79 = { 0f, 0f, 0f };
	bool bLocal_82 = false;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	vector3 vLocal_90 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	bool bLocal_96 = false;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	bool bLocal_103 = false;
	vector3 vLocal_104 = { 0f, 0f, 0f };
	bool bLocal_107 = false;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	bool bLocal_111 = false;
	bool bLocal_112 = false;
	bool bLocal_113 = false;
	bool bLocal_114 = false;
	bool bLocal_115 = false;
	bool bLocal_116 = false;
	bool bLocal_117 = false;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = false;
	bool bLocal_125 = false;
	bool bLocal_126 = false;
	bool bLocal_127 = false;
	char cLocal_128[48] = "";
	struct<6> Local_134 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_140 = 0;
	bool bLocal_141 = false;
	bool bLocal_142 = false;
	bool bLocal_143 = false;
	bool bLocal_144 = false;
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	bool bLocal_147 = false;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	bool bLocal_166 = false;
	bool bLocal_167 = false;
	bool bLocal_168 = false;
	bool bLocal_169 = false;
	bool bLocal_170 = false;
	bool bLocal_171 = false;
	bool bLocal_172 = false;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = false;
	bool bLocal_176 = false;
	int iLocal_177 = 0;
	char[] cLocal_178[8] = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	bool bLocal_181 = false;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	float fLocal_184 = 0f;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	bool bLocal_189 = false;
	vector3 vLocal_190 = { 0f, 0f, 0f };
	var uLocal_193 = 0;
	bool bLocal_194 = false;
	var uLocal_195 = 16;
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
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
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
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	iLocal_55 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_56 = UNK_0x817B3657F78A517A();
	vLocal_70 = { -3092.82f, 749.8f, 21.48f };
	vLocal_73 = { 181.8977f, 4415.152f, 73.463f };
	vLocal_76 = { 2743.461f, 4385.51f, 47.7521f };
	vLocal_79 = { -382.1346f, 2817.971f, 44.0671f };
	vLocal_97 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&cLocal_128, "", 24);
	vLocal_63 = { ScriptParam_0.f_1[0 /*3*/] };
	func_279();
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
		{
			if (UNK_0x16102BEDC7435774(bLocal_85))
			{
				UNK_0x0A94A109271BE75A(bLocal_85);
			}
		}
		func_257();
	}
	if (func_228(vLocal_63, 13, bLocal_82, 0, 0))
	{
		func_225(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0x338D6FF72D84D90F() || bLocal_111)
		{
			if (!func_224())
			{
				if (func_223())
				{
					func_257();
				}
			}
			UNK_0x1A6DFFFEEC27BF4F("RE_HL", 0);
			switch (iLocal_57)
			{
				case 0:
					if (func_211())
					{
						func_257();
					}
					if (!bLocal_62)
					{
						func_210();
					}
					else
					{
						func_209();
					}
					if (bLocal_61)
					{
						bLocal_143 = true;
						iLocal_57 = 1;
					}
					break;
				case 1:
					if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						switch (iLocal_58)
						{
							case 0:
								if ((func_208() && iLocal_59 != 8) && iLocal_59 != 10)
								{
									if (!func_224())
									{
										func_199(1);
									}
									iLocal_58 = 1;
								}
								switch (iLocal_59)
								{
									case 0:
										func_192();
										break;
									case 1:
										func_190();
										break;
									case 2:
										if (func_189())
										{
										}
										iLocal_158 = UNK_0x1C0640BA9A7327B3();
										if (iLocal_140 < 1 && !bLocal_141)
										{
											func_188();
										}
										if (iLocal_60 == 1)
										{
											func_187();
										}
										else if (iLocal_60 == 2)
										{
											func_186();
										}
										else if (iLocal_60 == 3)
										{
											func_185();
										}
										else if (iLocal_60 == 5)
										{
											func_182();
										}
										break;
									case 3:
										func_179();
										break;
									case 4:
										if (iLocal_60 == 1)
										{
											func_162();
											func_161();
										}
										else if (iLocal_60 == 3)
										{
											func_156();
											func_155();
										}
										else if (iLocal_60 == 5)
										{
											func_156();
											func_146();
										}
										if (!bLocal_114)
										{
											func_142();
											func_141();
											func_138();
											func_137();
											func_134();
											func_132();
											func_131();
											func_130();
										}
										func_122();
										break;
									case 6:
										func_68();
										if (iLocal_60 == 3)
										{
											func_155();
										}
										break;
									case 7:
										func_67();
										if (iLocal_60 == 3)
										{
											func_155();
										}
										break;
									case 8:
										if (iLocal_60 == 3)
										{
											func_63();
											func_155();
										}
										break;
									case 9:
										if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
										{
											if (UNK_0x5A91F08DF773C39D(bLocal_85, vLocal_93, 200f, 200f, 200f, false, true, 0))
											{
												UNK_0x96167B03C5A77156(bLocal_85, vLocal_93, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
											}
											else
											{
												UNK_0x01E4BB5190DF7317(bLocal_85, 1193033728, 0);
											}
											UNK_0xFADC0A217229F6B5(bLocal_85, true);
											SYSTEM::WAIT(5000);
										}
										func_59();
										break;
									case 10:
										break;
								}
								if ((func_58() && !func_57()) && iLocal_59 != 10)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
									{
										if (UNK_0x5A91F08DF773C39D(bLocal_85, vLocal_97, 5f, 5f, 5f, false, true, 0))
										{
											func_56(0);
											SYSTEM::WAIT(0);
											func_54();
											iLocal_59 = 10;
										}
									}
								}
								if (func_53())
								{
									if (UNK_0xC844350D5D58C99A(bLocal_85))
									{
										UNK_0xEBA53F35D0085654(&bLocal_85);
									}
									func_24();
								}
								break;
							case 1:
								func_54();
								SYSTEM::WAIT(0);
								if (iLocal_60 == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_60 == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_60 == 3)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_AGG", 4, 0, 0, 0);
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
									{
										UNK_0xA3BF0AA5A2608191(bLocal_86);
										UNK_0xF3268524E9BE6D6E(bLocal_86, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
										UNK_0xFADC0A217229F6B5(bLocal_86, true);
									}
								}
								else if (iLocal_60 == 5)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
								{
									UNK_0xA3BF0AA5A2608191(bLocal_85);
									UNK_0xF3268524E9BE6D6E(bLocal_85, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
									UNK_0xFADC0A217229F6B5(bLocal_85, true);
									func_59();
								}
								break;
						}
					}
					break;
			}
		}
		else
		{
			func_257();
		}
		if (iLocal_59 > 2)
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0xC844350D5D58C99A(bLocal_85))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
					{
						if (!UNK_0x12DE711B1C681E9E(bLocal_85, UNK_0x16F2683693E537C9(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_59();
						}
					}
				}
			}
		}
		if (iLocal_59 > 0 && iLocal_59 < 8)
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0xEB6A8945D1AC98A1(bLocal_85))
				{
					if (!func_224())
					{
						func_199(1);
					}
					func_59();
				}
				else if (!UNK_0x869EFD0BC0868856(bLocal_85))
				{
					if (UNK_0xB87D13D0C064E9D1(bLocal_85, UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_85);
						UNK_0xF3268524E9BE6D6E(bLocal_85, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						func_59();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
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
					func_22();
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
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_20();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_8();
		func_3();
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
		func_22();
	}
	return 0;
}

void func_3()
{
	if (!func_4())
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

bool func_4()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_7())
	{
		return false;
	}
	if (func_5(UNK_0xD803B885F5E47A62()))
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

bool func_5(int iParam0)
{
	return func_6(iParam0, 20);
}

bool func_6(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_7()
{
	return -1;
}

void func_8()
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

void func_9()
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

bool func_10()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_11()
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

void func_12()
{
	if (func_19(14))
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
		Global_19486 = func_13();
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

int func_13()
{
	func_14();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_14()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_17(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_16(UNK_0x16F2683693E537C9());
			if (func_15(iVar0) && (!func_19(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_15(Global_111638.f_2358.f_539.f_4321))
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

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_19(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_20()
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

bool func_21(bool bParam0, int iParam1)
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

void func_22()
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

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_24()
{
	while (!func_52())
	{
		SYSTEM::WAIT(0);
	}
	func_48(func_13(), 4, 5);
	func_28(13, bLocal_82);
	func_25();
	func_257();
}

void func_25()
{
	func_26();
}

int func_26()
{
	if (func_27(0))
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

bool func_27(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_28(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_45(iParam0))
	{
		func_44(iParam0, bParam1);
		if (!func_43(51))
		{
			func_39("RE_REWARD", 1, 0, 4000, 10000, func_42(), 0, 138, 0);
			func_38(51);
		}
		if (func_37(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_36(iParam0, bParam1) != 322)
		{
			func_30(func_36(iParam0, bParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_29(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_29(7);
			}
			else
			{
				func_29(1);
			}
		}
	}
}

void func_29(int iParam0)
{
	Global_111624 = iParam0;
}

void func_30(int iParam0, var uParam1, var uParam2)
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
		func_34((891 + iParam0), 1, -1, 1);
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
		func_31();
	}
}

void func_31()
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
		func_33(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_32() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_26();
				}
			}
		}
	}
}

int func_32()
{
	return Global_30768;
}

int func_33(int iParam0, bool bParam1)
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

int func_34(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_35();
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

int func_35()
{
	return Global_1312745;
}

int func_36(int iParam0, bool bParam1)
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

bool func_37(int iParam0)
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

void func_38(int iParam0)
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

void func_39(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_40(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_40(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_41();
	}
}

void func_41()
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

int func_42()
{
	func_14();
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

bool func_43(int iParam0)
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

void func_44(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_45(int iParam0)
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

int func_46()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_47(Var0);
	return iVar16;
}

int func_47(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_48(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				case 3:
					iVar1 = 74;
					break;
				case 2:
					iVar1 = 73;
					break;
				case 4:
					iVar1 = 75;
					break;
				case 5:
					iVar1 = 76;
					break;
				case 6:
					iVar1 = 77;
					break;
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				bVar0 = func_51(iVar1, -1, 0);
				bVar0 = (bVar0 + iParam2);
				if (bVar0 > 100)
				{
					bVar0 = 100;
				}
				func_49(iVar1, bVar0, -1, 1, 0);
			}
			break;
	}
}

void func_49(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
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

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_50(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_52()
{
	return true;
}

bool func_53()
{
	if (Global_31006)
	{
		func_29(4);
		return true;
	}
	return false;
}

void func_54()
{
	Global_19671 = 0;
	func_55();
}

void func_55()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_56(int iParam0)
{
	Global_21816 = iParam0;
}

bool func_57()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return true;
	}
	return false;
}

bool func_58()
{
	return Global_31005;
}

void func_59()
{
	func_61();
	while (func_60())
	{
		SYSTEM::WAIT(0);
	}
	func_257();
}

bool func_60()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
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
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_63()
{
	struct<6> Var0;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86) && !UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_86, 25f, 25f, 25f, 0, 1, 0) && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_85, 40f, 40f, 40f, 0, 1, 0))
		{
			UNK_0xA3BF0AA5A2608191(bLocal_86);
			UNK_0x96167B03C5A77156(bLocal_86, vLocal_93, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			func_24();
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		if (UNK_0xB87D13D0C064E9D1(bLocal_86, UNK_0x16F2683693E537C9(), 1))
		{
			if (func_60())
			{
				Var0 = { func_66() };
				if ((UNK_0x7F8A39872A07D2CE(&Var0, "REHH3_JB_2") || UNK_0x7F8A39872A07D2CE(&Var0, "REHH3_JB_4")) || UNK_0x7F8A39872A07D2CE(&Var0, "REHH3_JB_6"))
				{
					func_54();
				}
			}
		}
		if (SYSTEM::TIMERB() > 5000)
		{
			if (UNK_0x4734A6196B611C3B(bLocal_86, UNK_0x16F2683693E537C9()))
			{
				iLocal_159 = 4;
			}
		}
	}
	if (!bLocal_113)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_85))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_85, UNK_0x16F2683693E537C9(), 1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
				{
					func_54();
					SYSTEM::WAIT(0);
					func_1(&uLocal_195, cLocal_178, "REHH3_JB2", 4, 0, 0, 0);
					bLocal_113 = true;
				}
			}
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (UNK_0x869EFD0BC0868856(bLocal_85))
		{
			UNK_0x8FB4E06C94958F84(bLocal_85);
		}
		if (UNK_0xEB6A8945D1AC98A1(bLocal_86) && UNK_0x5A91F08DF773C39D(bLocal_85, UNK_0x68F4C0EC296D3901(bLocal_86, false), 1f, 1f, 5f, false, true, 0))
		{
			iLocal_159 = 5;
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		UNK_0x6C3AE6E278DB3D0E(bLocal_86, UNK_0x16F2683693E537C9(), 0, 16);
		func_59();
	}
	else
	{
		func_59();
	}
	if (!bLocal_168)
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_122))
			{
				UNK_0x142CC44DB769B57E(&iLocal_122);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				iLocal_159 = 3;
			}
		}
	}
	if (!bLocal_170)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				if (UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()))
				{
					iLocal_159 = 2;
				}
			}
		}
		if (UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_122))
			{
				UNK_0x142CC44DB769B57E(&iLocal_122);
			}
			func_65(&uLocal_195, 4);
			if (UNK_0xB87D13D0C064E9D1(bLocal_86, UNK_0x16F2683693E537C9(), 1) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				iLocal_159 = 2;
			}
		}
		else if (!UNK_0x437347B10A200C4B(bLocal_85, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_85, bLocal_86, 1))
			{
				iLocal_159 = 2;
			}
		}
	}
	switch (iLocal_159)
	{
		case 0:
			if (!bLocal_168)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
				{
					if (!UNK_0x405E212DDE472467(bLocal_85, 0) && UNK_0x65851B2C8786EE74(bLocal_86))
					{
						if (!bLocal_169)
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_89);
							UNK_0x0C8C0C840C2D1AD2(false, bLocal_86, -1, 2052, 2);
							UNK_0xC6EB89C59F2AF6B8(false, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, false, 0, 0, 0);
							UNK_0xF96A174EE26D7588(false, bLocal_86, -1);
							UNK_0x75ABDC5F81978924(iLocal_89);
							UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
							UNK_0xF82EA857DA10E0CD(&iLocal_89);
							bLocal_169 = true;
						}
					}
				}
			}
			else
			{
				func_24();
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				UNK_0x75CDA8644CD3B5F5(bLocal_85, 0, 0);
				SYSTEM::SETTIMERB(0);
				iLocal_159 = 0;
			}
			break;
		case 2:
			if (!bLocal_170)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
				{
					func_54();
					SYSTEM::WAIT(0);
					if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4))
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
					{
						UNK_0xA3BF0AA5A2608191(bLocal_85);
						UNK_0xF3268524E9BE6D6E(bLocal_85, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
						{
							UNK_0x08082071A5F7C155(bLocal_86, 6, 0f, 0);
							UNK_0xF3268524E9BE6D6E(bLocal_86, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
						}
					}
					func_24();
					bLocal_170 = true;
					iLocal_159 = 0;
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				func_54();
				SYSTEM::WAIT(0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
				{
					UNK_0x08082071A5F7C155(bLocal_85, 7, 0f, 0);
				}
				func_1(&uLocal_195, cLocal_178, "REHH3_BAS", 4, 0, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && UNK_0xC844350D5D58C99A(bLocal_86))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_85);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0xBC43ED9FE28DB191(false);
					UNK_0xC6EB89C59F2AF6B8(false, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, false, 0, 0, 0);
					UNK_0x0C8C0C840C2D1AD2(false, bLocal_86, -1, 2052, 4);
					UNK_0x96167B03C5A77156(false, UNK_0x68F4C0EC296D3901(bLocal_86, false), 1f, -1, 3f, 0, 1193033728);
					UNK_0xF96A174EE26D7588(false, bLocal_86, -1);
					UNK_0xC6EB89C59F2AF6B8(false, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, false, 0, 0, 0);
					UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					UNK_0xFADC0A217229F6B5(bLocal_85, true);
					UNK_0x11AD11297DC58CC7(bLocal_85, false);
					SYSTEM::WAIT(10000);
					bLocal_168 = true;
					iLocal_159 = 0;
				}
			}
			break;
		case 4:
			if (func_64())
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
				{
					if (UNK_0x12DE711B1C681E9E(bLocal_85, UNK_0x16F2683693E537C9(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_NOO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_159 = 0;
						}
					}
				}
			}
			else if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				if (func_1(&uLocal_195, cLocal_178, "REHH3_FHT", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_159 = 0;
				}
			}
			break;
		case 5:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				func_61();
				SYSTEM::WAIT(0);
				if (func_1(&uLocal_195, cLocal_178, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_159 = 0;
				}
			}
			break;
	}
}

bool func_64()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

void func_65(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_66()
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

void func_67()
{
	if (iLocal_60 == 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
		{
			if (UNK_0x16102BEDC7435774(bLocal_85))
			{
				UNK_0x0A94A109271BE75A(bLocal_85);
			}
			iLocal_59 = 8;
		}
	}
}

void func_68()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_83))
	{
		UNK_0x142CC44DB769B57E(&iLocal_83);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_84))
	{
		UNK_0x142CC44DB769B57E(&iLocal_84);
	}
	if (iLocal_60 == 1)
	{
		UNK_0x55D0A2DB35045A35(iLocal_177);
		UNK_0x8910D3D58E0132B8("TIMER_SCENE");
		if (!bLocal_124)
		{
			func_54();
			SYSTEM::WAIT(0);
			func_1(&uLocal_195, cLocal_178, "REHH1_TKA", 4, 0, 0, 0);
			UNK_0x98EF6C2D1F172740(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				func_93(func_13(), 1, 100, 0, 1);
				func_92(198, 0);
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_85, 8000, 2052, 4);
				UNK_0xDD353D0E9C789D0E(&iLocal_89);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
				UNK_0x75CDA8644CD3B5F5(false, 3000, 4194369);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1000);
				UNK_0x96167B03C5A77156(false, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				UNK_0x80AA372E04ED318D(false, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608 /* Float: 0.5f */);
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				UNK_0x75ABDC5F81978924(iLocal_89);
				UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
				UNK_0xF82EA857DA10E0CD(&iLocal_89);
				UNK_0xFADC0A217229F6B5(bLocal_85, true);
				SYSTEM::SETTIMERB(0);
				bLocal_124 = true;
			}
		}
		if (SYSTEM::TIMERB() < 7000)
		{
			UNK_0x38C3A68D7861DCFD(0, 75, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			UNK_0x38C3A68D7861DCFD(0, 79, 1);
			UNK_0x38C3A68D7861DCFD(0, 286, 1);
			UNK_0x38C3A68D7861DCFD(0, 287, 1);
			UNK_0x38C3A68D7861DCFD(0, 26, 1);
			UNK_0x38C3A68D7861DCFD(0, 273, 1);
			UNK_0x38C3A68D7861DCFD(0, 4, 1);
			UNK_0x38C3A68D7861DCFD(0, 270, 1);
			UNK_0x38C3A68D7861DCFD(0, 5, 1);
			UNK_0x38C3A68D7861DCFD(0, 1, 1);
			UNK_0x38C3A68D7861DCFD(0, 271, 1);
			UNK_0x38C3A68D7861DCFD(0, 6, 1);
			UNK_0x38C3A68D7861DCFD(0, 2, 1);
			UNK_0x38C3A68D7861DCFD(0, 272, 1);
			UNK_0x38C3A68D7861DCFD(0, 3, 1);
		}
		if (SYSTEM::TIMERB() > 3000 && SYSTEM::TIMERB() < 7000)
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		else if (SYSTEM::TIMERB() > 7000)
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			UNK_0x29D5132FBDCF2B1E(0);
			if (SYSTEM::TIMERB() > 8500 && !bLocal_126)
			{
				if ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && UNK_0x6C3F127AAF415E69() == 4) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xF3545351E9CBB11F() == 4))
				{
					UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
					UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					bLocal_126 = true;
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_85) || SYSTEM::TIMERB() > 15000)
		{
			if (UNK_0x5A91F08DF773C39D(bLocal_85, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, false, true, 0) || SYSTEM::TIMERB() > 15000)
			{
				UNK_0xEBA53F35D0085654(&bLocal_85);
				func_24();
			}
		}
	}
	else if (iLocal_60 == 2)
	{
		if (!bLocal_124)
		{
			func_54();
			SYSTEM::WAIT(0);
			func_1(&uLocal_195, cLocal_178, "REHH2_TKB", 4, 0, 0, 0);
			bLocal_124 = true;
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
		{
			if (!UNK_0x869EFD0BC0868856(bLocal_85))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_89);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
				UNK_0x78A77CDD64392938(false, 4500);
				UNK_0x75CDA8644CD3B5F5(false, 0, 4194369);
				UNK_0x96167B03C5A77156(false, 3323.43f, 5166.832f, 17.406f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0x96167B03C5A77156(false, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0x96167B03C5A77156(false, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				UNK_0x75ABDC5F81978924(iLocal_89);
				UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
				UNK_0xF82EA857DA10E0CD(&iLocal_89);
				UNK_0xFADC0A217229F6B5(bLocal_85, true);
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_85, 5000, 2052, 2);
				UNK_0x0A94A109271BE75A(bLocal_85);
				SYSTEM::WAIT(1000);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				if (func_13() == 0)
				{
					func_72(9, 1, 0);
				}
				else if (func_13() == 1)
				{
					func_72(9, 1, 1);
				}
				else if (func_13() == 2)
				{
					func_72(9, 1, 2);
				}
				SYSTEM::WAIT(8000);
				func_24();
			}
		}
	}
	else if (iLocal_60 == 3)
	{
		if (SYSTEM::TIMERA() > 1000)
		{
			if (func_1(&uLocal_195, cLocal_178, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
				{
					UNK_0x33CE5A9E32EA10B2(bLocal_86, 1);
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_121))
					{
						UNK_0x142CC44DB769B57E(&iLocal_121);
					}
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_122))
					{
						iLocal_122 = func_69(bLocal_86, 1, 145);
					}
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, 17f, 1f, 1073741824 /* Float: 2f */, 0);
					UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_86, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					UNK_0xFADC0A217229F6B5(bLocal_86, true);
					UNK_0x11AD11297DC58CC7(bLocal_86, false);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					UNK_0xF63400DBE3303D26("rghBoyfriend", &bLocal_194);
					UNK_0x6DF7BF67E86AAE86(bLocal_86, bLocal_194);
					UNK_0x0E2400AB9174FA81(4, joaat("COP"), bLocal_194);
					UNK_0x0E2400AB9174FA81(1, joaat("SECURITY_GUARD"), bLocal_194);
					UNK_0x0E2400AB9174FA81(1, bLocal_194, joaat("SECURITY_GUARD"));
					SYSTEM::SETTIMERA(0);
					iLocal_59 = 7;
				}
			}
		}
	}
	else if (iLocal_60 == 5)
	{
		if (!bLocal_124)
		{
			func_54();
			SYSTEM::WAIT(0);
			func_1(&uLocal_195, cLocal_178, "REHH5_THX", 4, 0, 0, 0);
			bLocal_124 = true;
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
		{
			UNK_0xDD353D0E9C789D0E(&iLocal_89);
			UNK_0x75CDA8644CD3B5F5(false, 0, 4194369);
			UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 3000, 2052, 2);
			UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 3000);
			UNK_0x96167B03C5A77156(false, -346.029f, 632.2272f, 171.2525f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			UNK_0x96167B03C5A77156(false, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			UNK_0x96167B03C5A77156(false, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			UNK_0x96167B03C5A77156(false, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			UNK_0x96167B03C5A77156(false, -350.163f, 605.0463f, 170.7292f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			UNK_0x96167B03C5A77156(false, -333.177f, 594.991f, 170.7553f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			UNK_0x78A77CDD64392938(false, -1);
			UNK_0x75ABDC5F81978924(iLocal_89);
			UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
			UNK_0xF82EA857DA10E0CD(&iLocal_89);
			UNK_0xFADC0A217229F6B5(bLocal_85, true);
			UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_85, 5000, 2052, 2);
			UNK_0x0A94A109271BE75A(bLocal_85);
		}
		SYSTEM::WAIT(2000);
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
		SYSTEM::WAIT(3000);
		func_24();
	}
}

int func_69(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_70(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_70(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_71(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_71(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_71(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_71(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_72(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (iParam2 < 0)
	{
		iParam2 = func_91();
	}
	if (func_90(iParam2) == 4)
	{
	}
	bVar0 = Global_111638.f_243[iParam2 /*53*/].f_2[bParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (UNK_0x8CD06866876216F2())
		{
			if (!func_88(func_89(bParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_88(func_89(bParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_111638.f_243[iParam2 /*53*/].f_2[bParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_87(bParam0, 0);
			func_82(func_89(bParam0), func_90(iParam2), 1);
			iVar1 = UNK_0x09AC81E49EA267F7(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					UNK_0x5D96D8530B3D0904(&(Global_2097152[func_81() /*10930*/].f_6174.f_1272), bParam0);
					func_78(-60084924, 15, 0);
					break;
			}
			func_77(iVar1);
			func_76(bParam0, iVar1);
			Global_110632.f_15[bParam0] = UNK_0x1C0640BA9A7327B3();
		}
	}
	else if (bVar0)
	{
		func_73(func_89(bParam0), func_90(iParam2));
	}
}

void func_73(int iParam0, int iParam1)
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
			func_75(iParam0, iVar0, 0);
			func_74(iParam0, iVar0, 0);
		}
	}
}

void func_74(int iParam0, int iParam1, int iParam2)
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

void func_75(int iParam0, int iParam1, int iParam2)
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

void func_76(bool bParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_110632.f_4[bParam0] = (UNK_0x1C0640BA9A7327B3() + iParam1);
	}
	else
	{
		Global_110632.f_4[bParam0] = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(1200000, 2100000));
	}
}

void func_77(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_110632.f_3 = (UNK_0x1C0640BA9A7327B3() + iParam0);
	}
	else
	{
		Global_110632.f_3 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(21600000, 25200000));
	}
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_80(iParam1, bParam2))
	{
		iVar0 = func_79();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_79()
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

bool func_80(int iParam0, bool bParam1)
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

int func_81()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_82(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_12();
		if (iParam1 == 4)
		{
			func_75(iParam0, 0, 1);
			func_75(iParam0, 1, 1);
			func_75(iParam0, 2, 1);
			func_74(iParam0, 0, 1);
			func_74(iParam0, 1, 1);
			func_74(iParam0, 2, 1);
		}
		else
		{
			if (func_86(iParam0, iParam1) == 1 && func_85(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_75(iParam0, iVar0, 1);
			func_74(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_84(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_84(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_83();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_84(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_83();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_84(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_83();
			}
		}
	}
}

void func_83()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;

	StringCopy(&cVar0, UNK_0x19C9F30A7697B43C(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		UNK_0x1E64CE678ED5F61E("");
		StringCopy(&cVar16, UNK_0x19C9F30A7697B43C(&(Global_7966[1 /*6*/])), 64);
		sVar32 = UNK_0x19C9F30A7697B43C("CELL_253");
		UNK_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		UNK_0x1E64CE678ED5F61E("CELL_255");
		UNK_0x6B012227B3921E18(&(Global_7966[1 /*6*/]));
		UNK_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, "", 0);
	}
	UNK_0x0674E58A79778E99(&Global_7356, false);
}

struct<4> func_84(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_85(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_87(bool bParam0, int iParam1)
{
	Global_111638.f_243[func_91() /*53*/].f_2[bParam0 /*5*/].f_1 = iParam1;
}

bool func_88(int iParam0, int iParam1)
{
	if (func_86(iParam0, iParam1) == 1)
	{
		return true;
	}
	return false;
}

int func_89(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 104;
		case 1:
			return 105;
		case 2:
			return 106;
		case 3:
			return 107;
		case 4:
			return 108;
		case 5:
			return 109;
		case 6:
			return 110;
		case 7:
			return 111;
		case 8:
			return 112;
		case 9:
			return 93;
	}
	return 145;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 1:
			return 1;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
	}
	return 4;
}

int func_91()
{
	int iVar0;

	iVar0 = func_13();
	switch (iVar0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			switch (func_50(-1))
			{
				case 0:
					return 3;
				case 1:
					return 4;
				case 2:
					return 5;
				case 3:
					return 6;
				case 4:
					return 7;
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (UNK_0x1C0640BA9A7327B3() + iParam1);
}

void func_93(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_121(iParam0) == 3)
	{
		return;
	}
	if (func_121(iParam0) == 4)
	{
		return;
	}
	func_94(func_121(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
			}
		}
		UNK_0x6FB46C25CCB7E6D5(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + iParam2);
		UNK_0xCDC520E5E48E63D9(iVar1, bVar0, 1);
	}
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_120();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_119(99, 1);
					func_118(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_118(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_118(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_104(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_100(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_118(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_118(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_118(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_100(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_118(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_118(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_118(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_118(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_118(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_118(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_118(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_118(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_118(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (UNK_0x7CF4675EC2B8ED0B())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_118(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_118(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_118(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_118(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_118(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_118(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_100(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_118(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_118(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_118(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_118(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_118(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_118(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_99(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_119(95, iParam3);
					break;
				case 1:
					func_119(97, iParam3);
					break;
				case 2:
					func_119(96, iParam3);
					break;
			}
			func_119(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_97(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_97(bVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_118(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_118(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_118(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_96(iParam0);
	if (Global_41431 == 15)
	{
		func_95(0);
	}
	return 1;
}

void func_95(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	bool bVar0;

	bVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			UNK_0xCDC520E5E48E63D9(joaat("SP0_TOTAL_CASH"), bVar0, 1);
			break;
		case 1:
			UNK_0xCDC520E5E48E63D9(joaat("SP1_TOTAL_CASH"), bVar0, 1);
			break;
		case 2:
			UNK_0xCDC520E5E48E63D9(joaat("SP2_TOTAL_CASH"), bVar0, 1);
			break;
	}
}

void func_97(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_34(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_34(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_34(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_34(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_49(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_49(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_49(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_49(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_49(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_49(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0))
		{
			bVar0 = true;
			UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_81() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_81() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_98(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_98(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		case 1:
			return "COUP_TATTOO";
		case 2:
			return "COUP_WARSTOCK";
		case 3:
			return "COUP_MOSPORT";
		case 4:
			return "COUP_ELITAS";
		case 5:
			return "COUP_MEDSPENS";
		case 6:
			return "COUP_SPRUNK";
		case 7:
			return "COUP_RESPRAY";
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS";
		case 13:
			return "COUP_CAS_DOCKTEASE";
		case 14:
			return "COUP_CAS_MOSPORT";
		case 15:
			return "COUP_CAS_SSASA";
		case 16:
			return "COUP_CAS_WARSTOCK";
		case 17:
			return "COUP_CAS_PANDM";
		default:
			break;
	}
	return "";
}

void func_99(int iParam0)
{
	func_119(93, iParam0);
	func_119(29, iParam0);
	func_119(30, iParam0);
}

bool func_100(bool bParam0)
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

	if (bParam0 == 8)
	{
		return func_101(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_101(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_101(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_101(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_51(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_51(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_51(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_51(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_51(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_51(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0);
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_81() /*10930*/].f_6174.f_10, bParam0);
}

int func_101(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_35();
	}
	iVar1 = func_103(iParam0, bParam1);
	iVar2 = func_102(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_102(int iParam0)
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

int func_103(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_35();
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

int func_104(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	if (UNK_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_CASH_SPENT"), bVar1, 1);
		func_33(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_105(27, 1);
	return 1;
}

int func_105(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_106(iParam0, iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (func_19(14) && !func_117(iParam0))
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_116(&Global_4270065))
	{
		if (func_114(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_107(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!UNK_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (UNK_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_19(14) && !func_117(iParam1))
	{
		return false;
	}
	if (func_114(uParam0, iParam1))
	{
		return false;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
	}
	func_110(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_108(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_108(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_19(14) && !func_117(iParam1))
	{
		return 0;
	}
	if (func_114(uParam0, iParam1))
	{
		return 0;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_109(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_109(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_110(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_111(uParam0, iVar0);
		iVar0++;
	}
	func_112(uParam0, (Global_4270064 - 0.5f));
}

void func_111(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_112(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_113(var uParam0)
{
	return uParam0->f_80;
}

bool func_114(var uParam0, int iParam1)
{
	return func_115(uParam0, iParam1) != -1;
}

int func_115(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_116(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_117(int iParam0)
{
	switch (iParam0)
	{
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
			return true;
		default:
			break;
	}
	return false;
}

void func_118(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_119(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		UNK_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		UNK_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, bVar0, 1);
	}
}

void func_120()
{
	int iVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_121(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_122()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
		{
			if (!func_129())
			{
				if (UNK_0x16102BEDC7435774(bLocal_85))
				{
					UNK_0x0A94A109271BE75A(bLocal_85);
				}
				if (UNK_0xD1960163A3042274(bLocal_85, 1227113341) != 1 && UNK_0xD1960163A3042274(bLocal_85, 1227113341) != 0)
				{
					UNK_0xE185F110925D87DB(bLocal_85, UNK_0x16F2683693E537C9(), -1, 6f, 2f, 1073741824 /* Float: 2f */, 0);
				}
				if (UNK_0x405E212DDE472467(bLocal_85, 0))
				{
					UNK_0x75CDA8644CD3B5F5(bLocal_85, 0, 0);
				}
				if (!bLocal_142)
				{
					func_124(0);
					func_54();
					SYSTEM::WAIT(0);
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							if (!func_189())
							{
								func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 2)
						{
							if (!func_189())
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 3)
						{
							if (!func_189())
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 5)
						{
							if (!func_189())
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						bLocal_142 = true;
					}
				}
			}
			else
			{
				bLocal_142 = false;
				if (UNK_0xD1960163A3042274(bLocal_85, 1227113341) == 1 && UNK_0xD1960163A3042274(bLocal_85, 1227113341) == 0)
				{
					UNK_0xA3BF0AA5A2608191(bLocal_85);
				}
			}
		}
		else if (!UNK_0x16102BEDC7435774(bLocal_85))
		{
			UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
			UNK_0x7BECA8F360B1686D(bLocal_85, 1);
			UNK_0xBF541ED34EA81209(bLocal_85, false);
		}
	}
}

int func_123()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
		if (bLocal_127)
		{
			if (func_128(&uLocal_195, cLocal_178, &Local_134, &cLocal_128, 8, 0, 0))
			{
				bLocal_127 = false;
			}
		}
	}
	else if ((!bLocal_127 && UNK_0x25037C66EB32B076()) && !func_126())
	{
		Local_134 = { func_125() };
		cLocal_128 = { func_66() };
		func_61();
		bLocal_127 = true;
	}
}

struct<6> func_125()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_126()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_127("REHH1_VEH") || func_127("REHH2_VEH")) || func_127("REHH3_VEH")) || func_127("REHH4_VEH")) || func_127("REHH5_VEH")) || func_127("REHH1_VEH2")) || func_127("REHH2_VEH2")) || func_127("REHH3_VEH2")) || func_127("REHH4_VEH2")) || func_127("REHH5_VEH2")) || func_127("REHH1_WLK")) || func_127("REHH2_WLK")) || func_127("REHH3_WLK")) || func_127("REHH4_WLK")) || func_127("REHH5_WLK")) || func_127("REHH1_SLR")) || func_127("REHH4_SLR")) || func_127("REHH1_SLW")) || func_127("REHH2_SLW")) || func_127("REHH3_SLW")) || func_127("REHH4_SLW")) || func_127("REHH5_SLW")) || func_127("REHH1_OUT")) || func_127("REHH2_GETOUT")) || func_127("REHH3_GETOUT")) || func_127("REHH5_GETOUT")) || func_127("REHH1_JACK")) || func_127("REHH2_JACK")) || func_127("REHH3_JACK")) || func_127("REHH5_JACK")) || func_127("REHH1_GUN")) || func_127("REHH2_SHOOT")) || func_127("REHH3_SHOOT")) || func_127("REHH5_SHOO")) || func_127("REHH1_1HOUR")) || func_127("REHH2_1HOUR")) || func_127("REHH1_HHOUR")) || func_127("REHH2_HHOUR")) || func_127("REHH1_CRASH")) || func_127("REHH1_WAY")) || func_127("REHH2_NEAR")) || func_127("REHH3_NEAR")) || func_127("REHH5_NEAR")) || func_127("REHH2_CULT")) || func_127("REHH3_CULT")) || func_127("REHH5_CULT"))
	{
		return true;
	}
	return false;
}

bool func_127(bool bParam0)
{
	var uVar0;

	if (func_60())
	{
		MemCopy(&uVar0, {func_125()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

int func_128(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_2(sParam2, iParam4, 0);
}

bool func_129()
{
	if (iLocal_60 == 5)
	{
		if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
		{
			return false;
		}
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			if ((((!UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) && !UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9())) && !UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9())) && !UNK_0xEFAE7FB688EBF2B5(UNK_0x16F2683693E537C9())) && !UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("RHINO")))
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
			if (((!UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9()))) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && !UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())) != joaat("RHINO"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_130()
{
	if (UNK_0x4024663A44BC1535(UNK_0x16F2683693E537C9()))
	{
		if (!bLocal_150)
		{
			iLocal_152 = UNK_0x1C0640BA9A7327B3();
			bLocal_150 = true;
		}
		else
		{
			iLocal_154 = UNK_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_154 = 0;
		iLocal_153 = 0;
		bLocal_150 = false;
		bLocal_151 = false;
	}
	if ((iLocal_154 - iLocal_152) > 3000 && (iLocal_154 - iLocal_153) > 6000)
	{
		if (!func_60())
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_153 = iLocal_154;
		}
	}
	if ((iLocal_154 - iLocal_152) > 50000 && !bLocal_151)
	{
		func_124(0);
		func_54();
		SYSTEM::WAIT(0);
		if (!func_60())
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 2)
			{
				func_1(&uLocal_195, cLocal_178, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
				{
					if (!UNK_0xFBF1556B75C783FC(bLocal_85))
					{
						UNK_0x8FB4E06C94958F84(bLocal_85);
					}
				}
				func_1(&uLocal_195, cLocal_178, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 5)
			{
				func_1(&uLocal_195, cLocal_178, "REHH5_SLW", 4, 0, 0, 0);
			}
			bLocal_151 = true;
		}
	}
	if ((iLocal_154 - iLocal_152) > 60000 && bLocal_151)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
		{
			UNK_0x33CE5A9E32EA10B2(bLocal_85, 1);
			if (UNK_0x16102BEDC7435774(bLocal_85))
			{
				if (UNK_0x405E212DDE472467(bLocal_85, 0))
				{
					if (UNK_0x5A91F08DF773C39D(bLocal_85, vLocal_93, 200f, 200f, 200f, false, true, 0))
					{
						UNK_0x96167B03C5A77156(bLocal_85, vLocal_93, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					}
					else
					{
						UNK_0x01E4BB5190DF7317(bLocal_85, 1193033728, 0);
					}
					if (iLocal_60 == 1)
					{
						UNK_0xF3268524E9BE6D6E(bLocal_85, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					}
					UNK_0xFADC0A217229F6B5(bLocal_85, true);
					UNK_0x0A94A109271BE75A(bLocal_85);
					func_59();
				}
			}
		}
	}
}

void func_131()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (UNK_0xE3614539F8B5C807(bLocal_85))
		{
			if (!bLocal_147)
			{
				iLocal_148 = UNK_0x1C0640BA9A7327B3();
				bLocal_147 = true;
			}
			else
			{
				iLocal_149 = UNK_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			bLocal_147 = false;
		}
	}
	if ((iLocal_149 - iLocal_148) > 90000)
	{
		func_124(0);
		func_54();
		SYSTEM::WAIT(0);
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			func_1(&uLocal_195, cLocal_178, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
		{
			UNK_0x33CE5A9E32EA10B2(bLocal_85, 1);
			if (UNK_0x5A91F08DF773C39D(bLocal_85, vLocal_93, 200f, 200f, 200f, false, true, 0))
			{
				UNK_0x96167B03C5A77156(bLocal_85, vLocal_93, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			}
			else
			{
				UNK_0x01E4BB5190DF7317(bLocal_85, 1193033728, 0);
			}
			if (iLocal_60 == 1)
			{
				UNK_0xF3268524E9BE6D6E(bLocal_85, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
			}
			UNK_0xFADC0A217229F6B5(bLocal_85, true);
			if (UNK_0x16102BEDC7435774(bLocal_85))
			{
				UNK_0x0A94A109271BE75A(bLocal_85);
			}
			func_59();
		}
	}
}

void func_132()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0xC42A92762C58E1B9(bLocal_85, UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_121))
				{
					iLocal_121 = func_69(bLocal_85, 0, 145);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_83))
				{
					UNK_0x142CC44DB769B57E(&iLocal_83);
				}
			}
			else
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_83))
				{
					iLocal_83 = func_133(vLocal_93, 1);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_121))
				{
					UNK_0x142CC44DB769B57E(&iLocal_121);
				}
			}
		}
		else if (!UNK_0xE4EDC4B0E92C078B(iLocal_121))
		{
			iLocal_121 = func_69(bLocal_85, 0, 145);
		}
		if (((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x405E212DDE472467(bLocal_85, 0)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_93, 50f, 50f, 50f, false, true, 0)) || UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_83))
			{
				iLocal_83 = func_133(vLocal_93, 1);
			}
		}
		else if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_93, 50f, 50f, 50f, false, true, 0))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_83))
			{
				UNK_0x142CC44DB769B57E(&iLocal_83);
			}
		}
	}
}

int func_133(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_71(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_134()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && UNK_0x405E212DDE472467(bLocal_85, 1)) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_85, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_136())
			{
				func_56(0);
				bLocal_125 = false;
			}
		}
		else if (!UNK_0xFBF1556B75C783FC(bLocal_85))
		{
			if (func_60() && !bLocal_125)
			{
				func_56(1);
				bLocal_125 = true;
			}
		}
		if (UNK_0xFBF1556B75C783FC(bLocal_85))
		{
			UNK_0xC722B6355F3075E5(bLocal_85, 0);
		}
		if (func_135("REHH3_CHT3_7"))
		{
			UNK_0x8D4C354BB8991817(bLocal_85, 1, 1);
		}
		if (func_135("REHH3_CHT6_5"))
		{
			UNK_0x8D4C354BB8991817(bLocal_85, 0, 1);
		}
		if (func_135("REHH3_CHT8_3"))
		{
			UNK_0x8D4C354BB8991817(bLocal_85, 1, 1);
		}
		if ((func_127("REHH3_CHT8M") || func_127("REHH3_CHT8F")) || func_127("REHH3_CHT8T"))
		{
			UNK_0x8D4C354BB8991817(bLocal_85, 0, 1);
		}
	}
}

bool func_135(bool bParam0)
{
	var uVar0;

	if (func_60())
	{
		MemCopy(&uVar0, {func_66()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_136()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_137()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (iLocal_60 == 1)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 0) && UNK_0xC42A92762C58E1B9(bLocal_85, UNK_0x728870EB733D12A1(), 0))
				{
					if (UNK_0xE608C809F9416F00(UNK_0x728870EB733D12A1()))
					{
						if (!func_127("REHH1_CRASH"))
						{
							func_124(0);
							func_54();
							SYSTEM::WAIT(0);
							func_1(&uLocal_195, cLocal_178, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!bLocal_144)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 1) && UNK_0xC42A92762C58E1B9(bLocal_85, UNK_0x728870EB733D12A1(), 0))
				{
					func_124(0);
					func_54();
					SYSTEM::WAIT(0);
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
							{
								if (!UNK_0xFBF1556B75C783FC(bLocal_85))
								{
									UNK_0x8FB4E06C94958F84(bLocal_85);
								}
							}
							func_1(&uLocal_195, cLocal_178, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 5)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						bLocal_144 = true;
					}
				}
			}
		}
		else if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 0) && UNK_0xC42A92762C58E1B9(bLocal_85, UNK_0x728870EB733D12A1(), 0))
			{
				bLocal_144 = false;
			}
		}
		if (!bLocal_145)
		{
			if (UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
			{
				func_124(0);
				func_54();
				SYSTEM::WAIT(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_JACK", 4, 0, 0, 0);
					}
					bLocal_145 = true;
				}
			}
		}
		else if (!UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
		{
			bLocal_145 = false;
		}
		if (!bLocal_146)
		{
			if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				func_124(0);
				func_54();
				SYSTEM::WAIT(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
						{
							if (!UNK_0xFBF1556B75C783FC(bLocal_85))
							{
								UNK_0x8FB4E06C94958F84(bLocal_85);
							}
						}
						func_1(&uLocal_195, cLocal_178, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
					}
					bLocal_146 = true;
				}
			}
		}
		else if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			bLocal_146 = false;
		}
	}
}

void func_138()
{
	if (func_140(vLocal_93))
	{
		func_124(0);
		func_54();
		SYSTEM::WAIT(0);
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (!UNK_0xFBF1556B75C783FC(bLocal_85))
				{
					UNK_0x8FB4E06C94958F84(bLocal_85);
				}
			}
			func_1(&uLocal_195, cLocal_178, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_139())
	{
		func_124(0);
		func_54();
		SYSTEM::WAIT(0);
		if (iLocal_60 == 1)
		{
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (!UNK_0xFBF1556B75C783FC(bLocal_85))
				{
					UNK_0x8FB4E06C94958F84(bLocal_85);
				}
			}
			func_1(&uLocal_195, cLocal_178, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

bool func_139()
{
	if (func_13() == 2)
	{
		if (func_58())
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

bool func_140(vector3 vParam0)
{
	if (func_13() == 2)
	{
		if (func_58() && !Global_31008)
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

void func_141()
{
	if (!func_126())
	{
		func_124(1);
	}
	if (!func_60())
	{
		switch (iLocal_108)
		{
			case 0:
				if (iLocal_60 == 1)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3();
				}
				else if (iLocal_60 == 2)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3();
				}
				else if (iLocal_60 == 3)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3() + 2000;
				}
				else if (iLocal_60 == 5)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3();
				}
				iLocal_108++;
				break;
			case 1:
				if (iLocal_110 < UNK_0x1C0640BA9A7327B3())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_108++;
				}
				break;
			case 2:
				if (iLocal_110 < UNK_0x1C0640BA9A7327B3())
				{
					if (iLocal_60 == 1)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 2)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 3)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 5)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							if (!bLocal_112)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_108++;
				}
				break;
			case 3:
				if (iLocal_60 == 1)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3();
				}
				else if (iLocal_60 == 2)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3();
				}
				else if (iLocal_60 == 3)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3() + 500;
				}
				else if (iLocal_60 == 5)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3();
				}
				iLocal_108++;
				break;
			case 4:
				if (iLocal_110 < UNK_0x1C0640BA9A7327B3())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 5)
					{
						if (bLocal_112 && !bLocal_114)
						{
							if (func_13() == 0)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_13() == 1)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_13() == 2)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_108++;
						}
					}
				}
				break;
			case 5:
				if (iLocal_60 == 1)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			case 6:
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			case 7:
				if (iLocal_60 == 1)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			case 8:
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			case 9:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			case 10:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			case 11:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			case 12:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			case 13:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			case 14:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			case 15:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			case 16:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			case 17:
				if (iLocal_60 == 3)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3() + 700;
				}
				iLocal_108++;
				break;
			case 18:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			case 19:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			case 20:
				if (iLocal_60 == 3)
				{
					iLocal_110 = UNK_0x1C0640BA9A7327B3() + 300;
				}
				iLocal_108++;
				break;
			case 21:
				if (iLocal_110 < UNK_0x1C0640BA9A7327B3())
				{
					if (iLocal_60 == 3)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_108++;
				}
				break;
			case 22:
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
				{
					UNK_0xC6EB89C59F2AF6B8(bLocal_85, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, false, 0, 0, 0);
				}
				iLocal_108++;
				break;
		}
	}
}

void func_142()
{
	if (iLocal_60 != 3)
	{
		if (func_145())
		{
			SYSTEM::SETTIMERA(0);
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_93, 3f, 3f, 2f, true, true, 0) && UNK_0x5A91F08DF773C39D(bLocal_85, vLocal_93, Global_19, false, true, 0))
				{
					if (func_144(1, 0, 1))
					{
						func_143();
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), (10.5f + 2f), 3, 0);
						}
						UNK_0x8FB4E06C94958F84(bLocal_85);
						iLocal_59 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_112)
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			iLocal_59 = 7;
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
		{
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, false, true, 0) || (UNK_0x5A91F08DF773C39D(bLocal_85, 824.8886f, 1275.671f, 359.4312f, Global_19, true, true, 0) && UNK_0x12DE711B1C681E9E(bLocal_85, UNK_0x16F2683693E537C9(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_54();
				SYSTEM::WAIT(0);
				func_1(&uLocal_195, cLocal_178, "REHH3_CHT10", 4, 0, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
				{
					if (UNK_0x405E212DDE472467(bLocal_85, 0))
					{
						UNK_0x8FB4E06C94958F84(bLocal_85);
						UNK_0xDD353D0E9C789D0E(&iLocal_89);
						UNK_0xBC43ED9FE28DB191(false);
						UNK_0x0C8C0C840C2D1AD2(false, bLocal_86, -1, 2052, 4);
						UNK_0x75CDA8644CD3B5F5(false, 500, 0);
						UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, 5f, 1f, 1073741824 /* Float: 2f */, 0);
						UNK_0xC6EB89C59F2AF6B8(false, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, false, 0, 0, 0);
						UNK_0xF96A174EE26D7588(false, bLocal_86, -1);
						UNK_0x75ABDC5F81978924(iLocal_89);
						UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
						UNK_0xF82EA857DA10E0CD(&iLocal_89);
					}
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
					{
						UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), (10.5f + 2f), 2, 0);
					}
				}
				SYSTEM::SETTIMERA(0);
				iLocal_59 = 6;
			}
		}
	}
}

void func_143()
{
	Global_19671 = 0;
	func_22();
}

bool func_144(bool bParam0, bool bParam1, bool bParam2)
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

bool func_145()
{
	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x82CCEAB29E9451DD(bLocal_85, UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
				{
					return true;
				}
			}
		}
	}
	if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_93, 50f, 50f, 50f, false, true, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (!UNK_0x405E212DDE472467(bLocal_85, 0))
		{
			return true;
		}
	}
	return false;
}

void func_146()
{
	if (bLocal_114)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_86))
		{
			if ((((UNK_0xEB6A8945D1AC98A1(bLocal_86) || !UNK_0x12DE711B1C681E9E(bLocal_86, UNK_0x16F2683693E537C9(), 150f, 150f, 150f, 0, 1, 0)) || SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_93) < 250f) || SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_97) < 250f) || bLocal_116)
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_122))
				{
					UNK_0x142CC44DB769B57E(&iLocal_122);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_123))
				{
					UNK_0x142CC44DB769B57E(&iLocal_123);
				}
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
				{
					UNK_0x08082071A5F7C155(bLocal_86, 6, 0f, 0);
					UNK_0xF3268524E9BE6D6E(bLocal_86, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					UNK_0x6DAD7906B73F064D(&bLocal_86);
				}
				func_54();
				SYSTEM::WAIT(0);
				func_1(&uLocal_195, cLocal_178, "REHH5_CHT2", 4, 0, 0, 0);
				UNK_0x6DAD7906B73F064D(&bLocal_86);
				if (UNK_0xC844350D5D58C99A(bLocal_171))
				{
					UNK_0x046C362CF15F1935(&bLocal_171);
				}
				bLocal_114 = false;
			}
			else
			{
				if (!bLocal_117)
				{
					if (!func_60())
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMT", 4, 0, 0, 0);
						}
						bLocal_117 = true;
					}
				}
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
				{
					func_154(&bLocal_86, &iLocal_122, &bLocal_171, &iLocal_123);
					func_153(&bLocal_86, &iLocal_122, &bLocal_171, &iLocal_123);
					func_147(bLocal_171, UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), &uLocal_185, &uLocal_188, &vLocal_190, &bLocal_189, &uLocal_193, 0f, 0f, 0f, 1500, 0f);
					if (UNK_0x12DE711B1C681E9E(bLocal_86, UNK_0x16F2683693E537C9(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_109 < UNK_0x1C0640BA9A7327B3())
						{
							if (!func_60())
							{
								if (func_64())
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_109 = UNK_0x1C0640BA9A7327B3() + 8000;
							}
						}
						if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
						{
							if (!func_127("REHH5_SHO"))
							{
								func_54();
								SYSTEM::WAIT(0);
								func_1(&uLocal_195, cLocal_178, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
						{
							if ((UNK_0xE3614539F8B5C807(bLocal_86) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4)) && UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()))
							{
								bLocal_116 = true;
							}
						}
					}
					if (!bLocal_115 && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
					{
						if (UNK_0x4024663A44BC1535(UNK_0x16F2683693E537C9()) && UNK_0x12DE711B1C681E9E(bLocal_86, UNK_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
						{
							UNK_0x6C3AE6E278DB3D0E(bLocal_86, UNK_0x16F2683693E537C9(), 0, 16);
							func_54();
							SYSTEM::WAIT(0);
							func_1(&uLocal_195, cLocal_178, "REHH5_GRM", 4, 0, 0, 0);
							bLocal_115 = true;
						}
					}
				}
			}
		}
	}
}

void func_147(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, var uParam6, vector3 vParam7, int iParam10, float fParam11)
{
	vector3 vVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (((((((UNK_0xC844350D5D58C99A(bParam1) && bParam0 != bParam1) && !UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bParam1))) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(bParam1))) && !UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bParam1))) && !UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(bParam1))) && UNK_0xF79A7BCA9E38BBBC(bParam1)) && func_152(bParam0))
		{
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam1, true), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *bParam5;
				*uParam2 = { UNK_0x8A5E176FF719A014(*uParam2, *uParam3, vParam7) };
				*uParam3 = func_151(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(bParam1, true));
				func_150(bParam1, uParam4, bParam5);
			}
			if (!UNK_0x03068588A1FCED1A(bParam0))
			{
				*uParam6 = UNK_0x1C0640BA9A7327B3();
			}
			else if ((UNK_0x1C0640BA9A7327B3() - *uParam6) > iParam10)
			{
				if (func_149(bParam0, bParam1, 1) > fParam11 && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam1, true), *uParam2, 1) > 20f)
				{
					if (!func_148(*uParam2))
					{
						if (!UNK_0x8E28E832BEAC3DCE(*uParam2, 3f))
						{
							UNK_0x745CE398A4B0A3C6(*uParam2, 1.5f, 0);
							UNK_0x28F5E4DA506AC0CA(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							UNK_0xA47B46945FF6DE74(bParam0, *uParam2, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bParam0, *uParam3);
							UNK_0xB9FD7450C0DAB575(bParam0, 1084227584 /* Float: 5f */);
							UNK_0x1AEF7184B203A58D(bParam0, 10f);
							UNK_0x56FDC9ADE35F7DB0(bParam0, true, true, 0);
							*uParam6 = UNK_0x1C0640BA9A7327B3();
						}
						else
						{
							vVar0 = { UNK_0x8A5E176FF719A014(vLocal_190, bLocal_189, vParam7) };
							if (!func_148(vVar0))
							{
								if (!UNK_0x8E28E832BEAC3DCE(vVar0, 2f))
								{
									UNK_0x745CE398A4B0A3C6(vVar0, 1.5f, 0);
									UNK_0x28F5E4DA506AC0CA(vVar0, 3f, 0, 0, 0, 0, false, 0);
									UNK_0xA47B46945FF6DE74(bParam0, vVar0, 1, 0, 0, 1);
									UNK_0xD8F6A53F4799FAFE(bParam0, bLocal_189);
									UNK_0xB9FD7450C0DAB575(bParam0, 1084227584 /* Float: 5f */);
									UNK_0x1AEF7184B203A58D(bParam0, 10f);
									UNK_0x56FDC9ADE35F7DB0(bParam0, true, true, 0);
									*uParam6 = UNK_0x1C0640BA9A7327B3();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = UNK_0x1C0640BA9A7327B3();
		}
	}
}

bool func_148(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_149(bool bParam0, bool bParam1, int iParam2)
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

void func_150(bool bParam0, var uParam1, bool bParam2)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			*uParam1 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			*bParam2 = UNK_0xD9522BA9E27E1349(bParam0);
		}
	}
}

int func_151(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

bool func_152(bool bParam0)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (!UNK_0xBBA8A868118C90ED(bParam0, -1, 0))
			{
				bVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0x437347B10A200C4B(bVar0, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_153(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (UNK_0xC844350D5D58C99A(*bParam2))
	{
		if (UNK_0xDF1306B443CD3D15(*bParam2, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
			{
				if (UNK_0xC42A92762C58E1B9(*bParam0, *bParam2, 0))
				{
					if (UNK_0xE4EDC4B0E92C078B(*bParam1))
					{
						UNK_0x142CC44DB769B57E(bParam1);
					}
					iVar0 = 1;
				}
				else if (!UNK_0xE4EDC4B0E92C078B(*bParam1))
				{
					*bParam1 = func_69(*bParam0, 1, 145);
				}
			}
			if (!UNK_0xE4EDC4B0E92C078B(*bParam3))
			{
				if (iVar0 == 1)
				{
					*bParam3 = func_133(UNK_0x68F4C0EC296D3901(*bParam2, true), 0);
					UNK_0x61755AC17D8F538E(*bParam3, true);
					UNK_0x2A065371C9D96655(*bParam3, 9);
					UNK_0xDC5B2F9D0CCE3A10(*bParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { UNK_0xAC14F6E4B17D7835(*bParam3) };
				vVar4 = { UNK_0x68F4C0EC296D3901(*bParam2, true) };
				vVar1.x = (vVar1.x + (((vVar4.x - vVar1.x) / 1f) * SYSTEM::TIMESTEP()));
				vVar1.f_1 = (vVar1.y + (((vVar4.y - vVar1.y) / 1f) * SYSTEM::TIMESTEP()));
				vVar1.f_2 = (vVar1.z + (((vVar4.z - vVar1.z) / 1f) * SYSTEM::TIMESTEP()));
				UNK_0x2F9282246F89FFD1(*bParam3, vVar1);
				if (iVar0 == 0)
				{
					UNK_0x142CC44DB769B57E(bParam3);
				}
			}
		}
		else
		{
			if (UNK_0xE4EDC4B0E92C078B(*bParam3))
			{
				UNK_0x142CC44DB769B57E(bParam3);
			}
			if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
			{
				if (!UNK_0xE4EDC4B0E92C078B(*bParam1))
				{
					*bParam1 = func_69(*bParam0, 1, 145);
				}
			}
		}
	}
}

void func_154(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xEB6A8945D1AC98A1(*bParam0))
		{
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				UNK_0x142CC44DB769B57E(bParam1);
			}
			UNK_0x6DAD7906B73F064D(bParam0);
		}
		else
		{
			iVar0 = 1;
			if (!UNK_0x405E212DDE472467(*bParam0, 0))
			{
			}
			else if (UNK_0xC844350D5D58C99A(*bParam2))
			{
				if (UNK_0xDF1306B443CD3D15(*bParam2, 0))
				{
					if (UNK_0xC42A92762C58E1B9(*bParam0, *bParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(*bParam2))
	{
		if (UNK_0xDF1306B443CD3D15(*bParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				UNK_0x78CCB85A0DC35709(*bParam2);
				UNK_0x7AA3AFA47C4179D1(*bParam2);
				UNK_0x06FF977AA95DCCE3(*bParam2, 0);
				UNK_0x046C362CF15F1935(bParam2);
				if (UNK_0xE4EDC4B0E92C078B(*bParam3))
				{
					UNK_0x142CC44DB769B57E(bParam3);
				}
			}
		}
		else
		{
			UNK_0x78CCB85A0DC35709(*bParam2);
			UNK_0x7AA3AFA47C4179D1(*bParam2);
			UNK_0x06FF977AA95DCCE3(*bParam2, 0);
			UNK_0x046C362CF15F1935(bParam2);
			if (UNK_0xE4EDC4B0E92C078B(*bParam3))
			{
				UNK_0x142CC44DB769B57E(bParam3);
			}
		}
	}
}

void func_155()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(bLocal_86, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, true, 0))
		{
			if (UNK_0xBF75E4DF4C367CD9(801.7148f, 1270.138f, 359.2855f, 6f, joaat("PROP_FNCLINK_03GATE1"), 0))
			{
				UNK_0x6DA3AC47D5DB9EED(joaat("PROP_FNCLINK_03GATE1"), 801.7148f, 1270.138f, 359.2855f, false, 0f, 0);
			}
			if (UNK_0xBF75E4DF4C367CD9(802.9218f, 1281.675f, 359.2962f, 6f, joaat("PROP_FNCLINK_03GATE1"), 0))
			{
				UNK_0x6DA3AC47D5DB9EED(joaat("PROP_FNCLINK_03GATE1"), 802.9218f, 1281.675f, 359.2962f, false, 0f, 0);
			}
		}
		else
		{
			if (UNK_0xBF75E4DF4C367CD9(801.7148f, 1270.138f, 359.2855f, 6f, joaat("PROP_FNCLINK_03GATE1"), 0))
			{
				UNK_0x6DA3AC47D5DB9EED(joaat("PROP_FNCLINK_03GATE1"), 801.7148f, 1270.138f, 359.2855f, true, 0f, 0);
			}
			if (UNK_0xBF75E4DF4C367CD9(802.9218f, 1281.675f, 359.2962f, 6f, joaat("PROP_FNCLINK_03GATE1"), 0))
			{
				UNK_0x6DA3AC47D5DB9EED(joaat("PROP_FNCLINK_03GATE1"), 802.9218f, 1281.675f, 359.2962f, true, 0f, 0);
			}
		}
	}
}

void func_156()
{
	if (!bLocal_112)
	{
		if (iLocal_60 == 3)
		{
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_104, 200f, 200f, 200f, false, true, 0))
			{
				UNK_0x523BCC9DC80CD82F(bLocal_101);
				UNK_0x4E09E67A27F104A7("move_m@brave");
				if (UNK_0xB87F6CF6E5628C67(bLocal_101) && UNK_0x59F02DA2266A744C("move_m@brave"))
				{
					bLocal_86 = UNK_0x36F2404464202779(26, bLocal_101, vLocal_104, bLocal_107, 1, true);
					UNK_0x64F9F278AB9DCA2C(bLocal_86, false, 2, true, 0);
					UNK_0x64F9F278AB9DCA2C(bLocal_86, 3, false, 2, 0);
					UNK_0x11AD11297DC58CC7(bLocal_86, true);
					UNK_0x4E885A246A9D983A(bLocal_86, 42, true);
					UNK_0x1365063FA6365BE8(bLocal_86, true);
					UNK_0x79C43E2BAC7C696F(bLocal_86, "move_m@brave", 1048576000 /* Float: 0.25f */);
					UNK_0x4E885A246A9D983A(bLocal_86, 137, true);
					func_160(&uLocal_195, 4, bLocal_86, sLocal_180, 0, 1);
					UNK_0xC6EB89C59F2AF6B8(bLocal_86, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, false, 0, 0, 0);
					UNK_0x0C8C0C840C2D1AD2(bLocal_86, UNK_0x16F2683693E537C9(), -1, 2052, 4);
					UNK_0x71199B01895C6202(bLocal_101);
					bLocal_112 = true;
				}
			}
		}
		else if (iLocal_60 == 5)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_79, 1) > 320f && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0xC42A92762C58E1B9(bLocal_85, UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
					{
						if (UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x09AC81E49EA267F7(2, 5), &vLocal_66, 1, 3f, 0f))
						{
							if (!UNK_0x8E28E832BEAC3DCE(vLocal_66, 7f) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_66) < 110f)
							{
								UNK_0x523BCC9DC80CD82F(bLocal_101);
								if (UNK_0xB87F6CF6E5628C67(bLocal_101))
								{
									func_61();
									SYSTEM::WAIT(0);
									if (func_159(&uLocal_195, cLocal_178, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_85))
									{
										bLocal_171 = UNK_0x122AAB0B1D6F55AD(bLocal_102, vLocal_66, func_157(vLocal_66, func_158(UNK_0xD803B885F5E47A62()), 1), true, true, false);
										UNK_0xC002508A277213DE(bLocal_171, 134, 134);
										UNK_0xCCD53AC1B5D5E456(bLocal_171, 0f);
										bLocal_86 = UNK_0x852A19533F896693(bLocal_171, 26, bLocal_101, -1, 1, true);
										UNK_0x64F9F278AB9DCA2C(bLocal_86, false, true, true, 0);
										UNK_0x64F9F278AB9DCA2C(bLocal_86, 2, true, false, 0);
										UNK_0x4E885A246A9D983A(bLocal_86, 42, true);
										UNK_0x33CE5A9E32EA10B2(bLocal_86, 1);
										func_160(&uLocal_195, 4, bLocal_86, sLocal_180, 0, 1);
										UNK_0xB9FD7450C0DAB575(bLocal_171, 1084227584 /* Float: 5f */);
										UNK_0x89258193691A7600(bLocal_86, bLocal_171, bLocal_85, 6, 60f, 786468, -1f, -1f, 1);
										UNK_0x6C3AE6E278DB3D0E(bLocal_86, UNK_0x16F2683693E537C9(), 0, 16);
										UNK_0xFADC0A217229F6B5(bLocal_86, true);
										UNK_0x71199B01895C6202(bLocal_101);
										UNK_0x71199B01895C6202(bLocal_102);
										UNK_0x1AEF7184B203A58D(bLocal_171, (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) + 15f));
										if (UNK_0xE4EDC4B0E92C078B(iLocal_83))
										{
											UNK_0x142CC44DB769B57E(&iLocal_83);
										}
										func_61();
										while (func_60())
										{
											SYSTEM::WAIT(0);
										}
										func_128(&uLocal_195, cLocal_178, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_114 = true;
										bLocal_112 = true;
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

float func_157(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

Vector3 func_158(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

int func_159(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_160(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_161()
{
	if (!bLocal_176 && !func_60())
	{
		if (iLocal_174 == 6 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM1", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 6 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM2", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 7 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM3", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 7 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM4", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 8 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM5", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 8 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM6", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 9 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM7", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 9 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM8", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 10 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM9", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 10 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM10", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 11 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM11", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 11 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM12", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 12 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM13", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 12 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM14", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 13 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM15", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 13 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM16", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 14 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM17", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 14 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM18", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 15 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM19", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 15 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM20", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 16 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM21", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 16 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM22", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 17 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM23", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 17 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM24", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 18 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM25", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 18 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM26", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 19 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM27", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 19 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM28", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 20 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM29", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 20 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM30", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 21 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM31", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 21 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM32", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 22 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM33", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 22 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM34", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
		if (iLocal_174 == 23 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM35", 4, 0, 0, 0);
			}
			bLocal_176 = true;
		}
	}
}

void func_162()
{
	iLocal_155 = func_167(func_168()) * 1000;
	iLocal_155 = (iLocal_155 + func_166(func_168()) * 1000 * 60);
	if (!bLocal_164)
	{
		if ((iLocal_174 >= 24 && iLocal_155 < 150000) || (iLocal_174 >= 24 && iLocal_155 < 150000))
		{
			func_163((((iLocal_174 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_173 * 1000 - func_167(func_168()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_163(((iLocal_174 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_173 * 1000 - func_167(func_168()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	else if ((iLocal_174 >= 24 && iLocal_155 < 150000) || (iLocal_174 >= 24 && iLocal_155 < 150000))
	{
		func_163((((iLocal_174 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_173 * 1000 - func_167(func_168()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_163(((iLocal_174 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_173 * 1000 - func_167(func_168()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if ((iLocal_174 == func_166(func_168()) + 1 && iLocal_173 == func_167(func_168())) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_166(func_168()) + 25) && iLocal_173 == func_167(func_168())))
	{
		if (!bLocal_163)
		{
			if (!func_127("REHH1_1HOUR") && !func_127("REHH4_1HOUR"))
			{
				func_124(0);
			}
			func_54();
			SYSTEM::WAIT(0);
			if (!func_60())
			{
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				bLocal_163 = true;
			}
		}
	}
	if (iLocal_173 == 30)
	{
		if ((iLocal_174 == func_166(func_168()) && iLocal_173 == func_167(func_168()) + 30) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_166(func_168()) + 24) && iLocal_173 == func_167(func_168()) + 30))
		{
			if (!bLocal_164)
			{
				if (!func_127("REHH1_HHOUR") && !func_127("REHH4_HHOUR"))
				{
					func_124(0);
				}
				func_54();
				SYSTEM::WAIT(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					bLocal_164 = true;
				}
				if (!bLocal_165)
				{
					iLocal_177 = UNK_0xD68EA767274B7444();
					UNK_0x4D7F4CC43D4D0DE3(iLocal_177, "VARIABLE_COUNTDOWN_CLOCK_wp", false, 1);
					UNK_0x6F6BA3FE885E6C91(iLocal_177, "countdown_fadein", 35f);
					UNK_0x8BC9595FD2792B5D("TIMER_SCENE");
					bLocal_165 = true;
				}
			}
		}
		if ((iLocal_174 == func_166(func_168()) && iLocal_173 == func_167(func_168()) + 5) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_166(func_168()) + 24) && iLocal_173 == func_167(func_168()) + 5))
		{
			if (!bLocal_166)
			{
				UNK_0x6F6BA3FE885E6C91(iLocal_177, "countdown_fast", 1f);
				bLocal_166 = true;
			}
		}
	}
	if (iLocal_173 == 0)
	{
		if ((iLocal_174 == func_166(func_168()) + 1 && iLocal_173 == (func_167(func_168()) - 30)) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_166(func_168()) + 25) && iLocal_173 == (func_167(func_168()) - 30)))
		{
			if (!bLocal_164)
			{
				if (!func_127("REHH1_HHOUR") && !func_127("REHH4_HHOUR"))
				{
					func_124(0);
				}
				func_54();
				SYSTEM::WAIT(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					bLocal_164 = true;
				}
				if (!bLocal_165)
				{
					iLocal_177 = UNK_0xD68EA767274B7444();
					UNK_0x4D7F4CC43D4D0DE3(iLocal_177, "VARIABLE_COUNTDOWN_CLOCK_wp", false, 1);
					UNK_0x6F6BA3FE885E6C91(iLocal_177, "countdown_fadein", 35f);
					UNK_0x8BC9595FD2792B5D("TIMER_SCENE");
					bLocal_165 = true;
				}
			}
		}
		if ((iLocal_174 == func_166(func_168()) + 1 && iLocal_173 == (func_167(func_168()) - 55)) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_166(func_168()) + 25) && iLocal_173 == (func_167(func_168()) - 55)))
		{
			if (!bLocal_166)
			{
				UNK_0x6F6BA3FE885E6C91(iLocal_177, "countdown_fast", 1f);
				bLocal_166 = true;
			}
		}
	}
	if (iLocal_174 >= 24 && iLocal_155 < 150000)
	{
		if (iLocal_174 == func_166(func_168()) + 24 && iLocal_173 == func_167(func_168()))
		{
			bLocal_175 = true;
		}
	}
	else if (iLocal_174 == func_166(func_168()) && iLocal_173 == func_167(func_168()))
	{
		bLocal_175 = true;
	}
	if (bLocal_175)
	{
		func_54();
		SYSTEM::WAIT(0);
		UNK_0x55D0A2DB35045A35(iLocal_177);
		UNK_0x8910D3D58E0132B8("TIMER_SCENE");
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
		{
			if (UNK_0x405E212DDE472467(bLocal_85, 0))
			{
				UNK_0xE0C0351D5B931E37(UNK_0x6937EA2286828455(bLocal_85, 0), (10.5f + 2f), 2, 0);
				UNK_0x75CDA8644CD3B5F5(bLocal_85, 1, 0);
				UNK_0x0A94A109271BE75A(bLocal_85);
				if (UNK_0xE4EDC4B0E92C078B(iLocal_83))
				{
					UNK_0x142CC44DB769B57E(&iLocal_83);
				}
			}
		}
		iLocal_59 = 9;
	}
}

void func_163(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_165(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_164(7, bVar0);
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

void func_164(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_165(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

int func_166(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_167(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

bool func_168()
{
	var uVar0;

	func_178(&uVar0, UNK_0x4460E481B9E33ADA());
	func_177(&uVar0, UNK_0x8D199E381D262EEF());
	func_176(&uVar0, UNK_0xD8A54335F18763BA());
	func_171(&uVar0, UNK_0x972A296334C9D57B());
	func_170(&uVar0, UNK_0x118229AD063C3C1D());
	func_169(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_169(bool bParam0, int iParam1)
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

void func_170(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_171(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_175(*bParam0);
	iVar1 = func_173(*bParam0);
	if (iParam1 < 1 || iParam1 > func_172(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_172(bool bParam0, int iParam1)
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

int func_173(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_174(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_174(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_175(bool bParam0)
{
	return (bParam0 && 15);
}

void func_176(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_177(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_178(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_179()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 0) && UNK_0xC42A92762C58E1B9(bLocal_85, UNK_0x728870EB733D12A1(), 0))
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_121))
				{
					UNK_0x142CC44DB769B57E(&iLocal_121);
				}
				if (!UNK_0x16102BEDC7435774(bLocal_85))
				{
					UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
					UNK_0x7BECA8F360B1686D(bLocal_85, 1);
					UNK_0xBF541ED34EA81209(bLocal_85, false);
				}
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_83))
				{
					iLocal_83 = func_133(vLocal_93, 1);
				}
				if (((func_13() == 2 && !func_57()) && iLocal_60 != 1) && iLocal_60 != 4)
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_84))
					{
						iLocal_84 = func_133(vLocal_97, 0);
						UNK_0xBC8E0A7390523199(iLocal_84, 269);
						func_180();
					}
				}
				if (iLocal_60 == 1)
				{
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_174 = func_166(func_168()) + 2;
						if (func_167(func_168()) >= 30)
						{
							iLocal_173 = 0;
							iLocal_174++;
						}
						else
						{
							iLocal_173 = 30;
						}
						bLocal_111 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH2_WTB", 4, 0, 0, 0))
					{
						bLocal_111 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH3_WTC", 4, 0, 0, 0))
					{
						bLocal_111 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 5)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH5_WTE", 4, 0, 0, 0))
					{
						bLocal_111 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_59 = 4;
					}
				}
			}
		}
	}
}

void func_180()
{
	if (func_13() == 2)
	{
		if (!Global_31007)
		{
			func_181("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_181(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_182()
{
	bool bVar0;

	switch (iLocal_140)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (iLocal_110 < UNK_0x1C0640BA9A7327B3())
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_STO", 4, 0, 0, 0);
					iLocal_110 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 6500));
				}
				if (UNK_0x7069CC4DE1EA3FAA(bLocal_85, UNK_0x16F2683693E537C9(), 90f))
				{
					if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 24f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
					{
						fLocal_184 = func_149(bLocal_85, UNK_0x16F2683693E537C9(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						UNK_0xDD353D0E9C789D0E(&iLocal_89);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
						UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, fLocal_184, 2f, 1073741824 /* Float: 2f */, 0);
						UNK_0x75ABDC5F81978924(iLocal_89);
						UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
						UNK_0xF82EA857DA10E0CD(&iLocal_89);
						iLocal_140++;
					}
				}
				else if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 12f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
				{
					fLocal_184 = func_149(bLocal_85, UNK_0x16F2683693E537C9(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, fLocal_184, 2f, 1073741824 /* Float: 2f */, 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					iLocal_140++;
				}
			}
			break;
		case 1:
			if (UNK_0xE4EDC4B0E92C078B(iLocal_121))
			{
				UNK_0xF2D30B8ACAF12A39(iLocal_121, true);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_85, 5000, 2052, 2);
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
					{
						if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 25f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
						{
							if (UNK_0x7069CC4DE1EA3FAA(bLocal_85, UNK_0x16F2683693E537C9(), 150f))
							{
								UNK_0x8FB4E06C94958F84(bLocal_85);
								UNK_0xDD353D0E9C789D0E(&iLocal_89);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 4);
								if (UNK_0xBBA8A868118C90ED(bLocal_87, false, 0))
								{
									UNK_0x7B5CD34C8882F120(false, bLocal_87, -1, 0, 2f);
								}
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
								UNK_0x75ABDC5F81978924(iLocal_89);
								UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
								UNK_0xF82EA857DA10E0CD(&iLocal_89);
								iLocal_140++;
							}
						}
					}
				}
				else if (!bLocal_141)
				{
					UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH5_NOV", 4, 0, 0, 0))
					{
						bLocal_141 = true;
					}
				}
			}
			break;
		case 2:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && UNK_0xDF1306B443CD3D15(bLocal_87, 0))
				{
					if (func_149(bLocal_85, bLocal_87, 1) < 25f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
					{
						if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH5_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x12DE711B1C681E9E(bLocal_85, UNK_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
					{
						if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f && func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 25f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 25f)
				{
					if (func_129())
					{
						if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
						{
							if (UNK_0xBBA8A868118C90ED(UNK_0x728870EB733D12A1(), false, 0))
							{
								UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
								UNK_0x7BECA8F360B1686D(bLocal_85, 1);
								UNK_0xBF541ED34EA81209(bLocal_85, false);
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
								UNK_0x5B1D360B9C6F0A09(bLocal_85, UNK_0x728870EB733D12A1(), -1, false, 2f, 1, 0);
								func_183();
								iLocal_140++;
							}
							else
							{
								bVar0 = UNK_0xA30B8362589C124A(UNK_0x728870EB733D12A1(), false, 0);
								if (UNK_0xEB6A8945D1AC98A1(bVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									UNK_0xA3BF0AA5A2608191(bLocal_85);
									UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
									UNK_0x7BECA8F360B1686D(bLocal_85, 1);
									UNK_0xBF541ED34EA81209(bLocal_85, true);
									UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!bLocal_142)
					{
						if (!func_60())
						{
							if (!func_189())
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH2", 4, 0, 0, 0);
							}
							bLocal_142 = true;
						}
					}
				}
			}
			break;
		case 5:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (func_129())
				{
					if (UNK_0x405E212DDE472467(bLocal_85, 0))
					{
						UNK_0xBC43ED9FE28DB191(bLocal_85);
						bLocal_111 = true;
						iLocal_59 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
					if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) > 100f)
					{
						func_59();
					}
				}
				else
				{
					UNK_0x0A94A109271BE75A(bLocal_85);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					iLocal_140 = 4;
				}
			}
			break;
	}
}

void func_183()
{
	if (!func_57())
	{
		if (func_13() == 2)
		{
			Global_31005 = 1;
		}
	}
}

float func_184(bool bParam0, bool bParam1)
{
	return func_149(bParam0, bParam1, 1);
}

void func_185()
{
	bool bVar0;

	switch (iLocal_140)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bLocal_85, UNK_0x16F2683693E537C9(), 90f))
				{
					if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 12f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
					{
						fLocal_184 = func_149(bLocal_85, UNK_0x16F2683693E537C9(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						UNK_0x8FB4E06C94958F84(bLocal_85);
						UNK_0xDD353D0E9C789D0E(&iLocal_89);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
						UNK_0xA8CC11FF8D2962D4(false, UNK_0x16F2683693E537C9(), 2.5f, 0f, 0f, 1f, 5000, 1036831949 /* Float: 0.1f */, 1);
						UNK_0x75ABDC5F81978924(iLocal_89);
						UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
						UNK_0xF82EA857DA10E0CD(&iLocal_89);
						iLocal_140++;
					}
				}
				else if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 8f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
				{
					fLocal_184 = func_149(bLocal_85, UNK_0x16F2683693E537C9(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, fLocal_184, 1f, 1073741824 /* Float: 2f */, 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					iLocal_140++;
				}
			}
			break;
		case 1:
			if (UNK_0xE4EDC4B0E92C078B(iLocal_121))
			{
				UNK_0xF2D30B8ACAF12A39(iLocal_121, true);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_85, 5000, 2052, 2);
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
					{
						if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 10f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
						{
							if (UNK_0x7069CC4DE1EA3FAA(bLocal_85, UNK_0x16F2683693E537C9(), 150f))
							{
								UNK_0x8FB4E06C94958F84(bLocal_85);
								UNK_0xDD353D0E9C789D0E(&iLocal_89);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 4);
								if (UNK_0xBBA8A868118C90ED(bLocal_87, false, 0))
								{
									UNK_0x7B5CD34C8882F120(false, bLocal_87, -1, 0, 1f);
								}
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
								UNK_0x75ABDC5F81978924(iLocal_89);
								UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
								UNK_0xF82EA857DA10E0CD(&iLocal_89);
								iLocal_140++;
							}
						}
					}
				}
				else if (!bLocal_141)
				{
					UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH3_NOV", 4, 0, 0, 0))
					{
						bLocal_141 = true;
					}
				}
			}
			break;
		case 2:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && UNK_0xDF1306B443CD3D15(bLocal_87, 0))
				{
					if (func_149(bLocal_85, bLocal_87, 1) < 13f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
					{
						if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH3_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x81A5359F25512A04(bLocal_85))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
					{
						if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f && func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 15f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 15f)
				{
					if (func_129())
					{
						if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
						{
							if (UNK_0xBBA8A868118C90ED(UNK_0x728870EB733D12A1(), false, 0))
							{
								UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
								UNK_0x7BECA8F360B1686D(bLocal_85, 1);
								UNK_0xBF541ED34EA81209(bLocal_85, false);
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
								UNK_0x5B1D360B9C6F0A09(bLocal_85, UNK_0x728870EB733D12A1(), -1, false, 1f, 1, 0);
								func_183();
								iLocal_140++;
							}
							else
							{
								bVar0 = UNK_0xA30B8362589C124A(UNK_0x728870EB733D12A1(), false, 0);
								if (UNK_0xEB6A8945D1AC98A1(bVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									UNK_0xA3BF0AA5A2608191(bLocal_85);
									UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
									UNK_0x7BECA8F360B1686D(bLocal_85, 1);
									UNK_0xBF541ED34EA81209(bLocal_85, true);
									UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!bLocal_142)
					{
						if (!func_60())
						{
							if (!func_189())
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH2", 4, 0, 0, 0);
							}
							bLocal_142 = true;
						}
					}
				}
			}
			break;
		case 5:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (func_129())
				{
					UNK_0xCAF7AE54F764D5AA(bLocal_85, 1f);
					if (UNK_0x405E212DDE472467(bLocal_85, 0))
					{
						UNK_0xBC43ED9FE28DB191(bLocal_85);
						bLocal_111 = true;
						iLocal_59 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
					if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) > 100f)
					{
						func_59();
					}
				}
				else
				{
					UNK_0x0A94A109271BE75A(bLocal_85);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					iLocal_140 = 4;
				}
			}
			break;
	}
}

void func_186()
{
	bool bVar0;

	switch (iLocal_140)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bLocal_85, UNK_0x16F2683693E537C9(), 90f))
				{
					if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 12f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
					{
						fLocal_184 = func_149(bLocal_85, UNK_0x16F2683693E537C9(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						UNK_0xDD353D0E9C789D0E(&iLocal_89);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
						UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, fLocal_184, 1f, 1073741824 /* Float: 2f */, 0);
						UNK_0x75ABDC5F81978924(iLocal_89);
						UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
						UNK_0xF82EA857DA10E0CD(&iLocal_89);
						iLocal_140++;
					}
				}
				else if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 8f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
				{
					fLocal_184 = func_149(bLocal_85, UNK_0x16F2683693E537C9(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, fLocal_184, 1f, 1073741824 /* Float: 2f */, 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					iLocal_140++;
				}
			}
			break;
		case 1:
			if (UNK_0xE4EDC4B0E92C078B(iLocal_121))
			{
				UNK_0xF2D30B8ACAF12A39(iLocal_121, true);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_85, 5000, 2052, 2);
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
					{
						if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 10f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
						{
							if (UNK_0x7069CC4DE1EA3FAA(bLocal_85, UNK_0x16F2683693E537C9(), 150f))
							{
								UNK_0x8FB4E06C94958F84(bLocal_85);
								UNK_0xDD353D0E9C789D0E(&iLocal_89);
								UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
								if (UNK_0xBBA8A868118C90ED(bLocal_87, false, 0))
								{
									UNK_0x7B5CD34C8882F120(false, bLocal_87, -1, 0, 1f);
								}
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
								UNK_0x75ABDC5F81978924(iLocal_89);
								UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
								UNK_0xF82EA857DA10E0CD(&iLocal_89);
								func_54();
								SYSTEM::WAIT(0);
								iLocal_140++;
							}
						}
					}
				}
				else if (!bLocal_141)
				{
					UNK_0xA3BF0AA5A2608191(bLocal_85);
					UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH2_NOV", 4, 0, 0, 0))
					{
						bLocal_141 = true;
					}
				}
			}
			break;
		case 2:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && UNK_0xDF1306B443CD3D15(bLocal_87, 0))
				{
					if (func_149(bLocal_85, bLocal_87, 1) < 13f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
					{
						if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH2_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x81A5359F25512A04(bLocal_85))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
					{
						if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f && func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 15f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 15f)
				{
					if (func_129())
					{
						bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
						{
							if (UNK_0xBBA8A868118C90ED(UNK_0x728870EB733D12A1(), false, 0))
							{
								UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
								UNK_0x7BECA8F360B1686D(bLocal_85, 1);
								UNK_0xBF541ED34EA81209(bLocal_85, false);
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
								UNK_0x5B1D360B9C6F0A09(bLocal_85, UNK_0x728870EB733D12A1(), -1, false, 1f, 1, 0);
								func_183();
								iLocal_140++;
							}
							else
							{
								bVar0 = UNK_0xA30B8362589C124A(UNK_0x728870EB733D12A1(), false, 0);
								if (UNK_0xEB6A8945D1AC98A1(bVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									UNK_0xA3BF0AA5A2608191(bLocal_85);
									UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
									UNK_0x7BECA8F360B1686D(bLocal_85, 1);
									UNK_0xBF541ED34EA81209(bLocal_85, true);
									UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!bLocal_142)
					{
						if (!func_60())
						{
							if (!func_189())
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH2", 4, 0, 0, 0);
							}
							bLocal_142 = true;
						}
					}
				}
			}
			break;
		case 5:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (!bLocal_103)
				{
					if (UNK_0x12DE711B1C681E9E(bLocal_85, UNK_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0))
					{
						if (!func_60())
						{
							if (func_1(&uLocal_195, cLocal_178, "REHH2_INA", 4, 0, 0, 0))
							{
								bLocal_103 = true;
							}
						}
					}
				}
				if (func_129())
				{
					UNK_0xCAF7AE54F764D5AA(bLocal_85, 1f);
					if (UNK_0x405E212DDE472467(bLocal_85, 0))
					{
						UNK_0xBC43ED9FE28DB191(bLocal_85);
						bLocal_111 = true;
						iLocal_59 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
				}
				else
				{
					UNK_0x0A94A109271BE75A(bLocal_85);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					iLocal_140 = 4;
				}
				if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) > 100f)
				{
					func_59();
				}
			}
			break;
	}
}

void func_187()
{
	bool bVar0;

	switch (iLocal_140)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 12f || (UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()) && func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 30f))
				{
					UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_85, 5000, 2052, 2);
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_89);
							UNK_0x0C8C0C840C2D1AD2(false, bLocal_87, 30000, 2054, 2);
							UNK_0xC6EB89C59F2AF6B8(bLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, false, 0, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_89);
							UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
							UNK_0xF82EA857DA10E0CD(&iLocal_89);
						}
						iLocal_140++;
					}
					else if (!bLocal_141)
					{
						UNK_0xA3BF0AA5A2608191(bLocal_85);
						UNK_0xDD353D0E9C789D0E(&iLocal_89);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2054, 2);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
						UNK_0x75ABDC5F81978924(iLocal_89);
						UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
						UNK_0xF82EA857DA10E0CD(&iLocal_89);
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							bLocal_141 = true;
						}
					}
				}
			}
			break;
		case 1:
			if (UNK_0xE4EDC4B0E92C078B(iLocal_121))
			{
				UNK_0xF2D30B8ACAF12A39(iLocal_121, true);
			}
			if (func_129())
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 10f)
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
						{
							if (UNK_0x7069CC4DE1EA3FAA(bLocal_85, UNK_0x16F2683693E537C9(), 150f))
							{
								fLocal_184 = func_149(bLocal_85, UNK_0x16F2683693E537C9(), 1);
								if (fLocal_184 > 5f)
								{
									fLocal_184 = (fLocal_184 - 0.5f);
								}
								else
								{
									fLocal_184 = (fLocal_184 - 0.25f);
								}
								UNK_0xDD353D0E9C789D0E(&iLocal_89);
								UNK_0x0C8C0C840C2D1AD2(false, bLocal_87, 10000, 2054, 2);
								if (UNK_0xBBA8A868118C90ED(bLocal_87, false, 0))
								{
									UNK_0x7B5CD34C8882F120(false, bLocal_87, -1, 0, 1f);
								}
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
								UNK_0x75ABDC5F81978924(iLocal_89);
								UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
								UNK_0xF82EA857DA10E0CD(&iLocal_89);
								iLocal_140++;
							}
							else
							{
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, bLocal_87, 10000, 2054, 2);
								iLocal_140++;
							}
						}
					}
				}
			}
			else if (!bLocal_141)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_85);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2054, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					if (!func_60())
					{
						if (!func_189())
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
						}
						bLocal_141 = true;
					}
				}
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && UNK_0xDF1306B443CD3D15(bLocal_87, 0))
			{
				if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f)
				{
					func_143();
					iLocal_140++;
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85) && UNK_0xDF1306B443CD3D15(bLocal_87, 0))
			{
				if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH1_ASK", 4, 0, 0, 0))
					{
						UNK_0x8FB4E06C94958F84(bLocal_85);
						SYSTEM::SETTIMERA(0);
						iLocal_140++;
					}
				}
			}
			break;
		case 4:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (UNK_0x81A5359F25512A04(bLocal_85))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
				}
				if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 15f)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						bLocal_87 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xDF1306B443CD3D15(bLocal_87, 0))
						{
							if (UNK_0x9C66D99E63E8E24C(bLocal_87) < 2.5f)
							{
								if (!func_60())
								{
									if (func_13() == 0)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPA", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_140++;
									}
									else if (func_13() == 1)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPB", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_140++;
									}
									else if (func_13() == 2)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPC", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_140++;
									}
								}
							}
						}
					}
					else if (!bLocal_141)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							bLocal_141 = true;
						}
					}
				}
			}
			break;
		case 5:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) < 15f)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (func_129())
						{
							if (UNK_0xBBA8A868118C90ED(UNK_0x728870EB733D12A1(), false, 0))
							{
								UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
								UNK_0x7BECA8F360B1686D(bLocal_85, 1);
								UNK_0xBF541ED34EA81209(bLocal_85, false);
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
								UNK_0x5B1D360B9C6F0A09(bLocal_85, UNK_0x728870EB733D12A1(), -1, false, 1f, 1, 0);
								iLocal_140++;
							}
							else
							{
								bVar0 = UNK_0xA30B8362589C124A(UNK_0x728870EB733D12A1(), false, 0);
								if (UNK_0xEB6A8945D1AC98A1(bVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									UNK_0xA3BF0AA5A2608191(bLocal_85);
									UNK_0xE25C96A9C36BE5D2(bLocal_85, func_123());
									UNK_0x7BECA8F360B1686D(bLocal_85, 1);
									UNK_0xBF541ED34EA81209(bLocal_85, true);
									UNK_0x0C8C0C840C2D1AD2(bLocal_85, UNK_0x16F2683693E537C9(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
						else if (!bLocal_142)
						{
							if (!func_60())
							{
								if (!func_189())
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
								}
								bLocal_142 = true;
							}
						}
					}
					else if (!bLocal_141)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							bLocal_141 = true;
						}
					}
				}
			}
			break;
		case 6:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				if (func_129())
				{
					UNK_0xCAF7AE54F764D5AA(bLocal_85, 1f);
					if (UNK_0x405E212DDE472467(bLocal_85, 0))
					{
						UNK_0xBC43ED9FE28DB191(bLocal_85);
						bLocal_111 = true;
						iLocal_59 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_59();
						}
					}
				}
				else
				{
					UNK_0x0A94A109271BE75A(bLocal_85);
					UNK_0xDD353D0E9C789D0E(&iLocal_89);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x75ABDC5F81978924(iLocal_89);
					UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
					UNK_0xF82EA857DA10E0CD(&iLocal_89);
					iLocal_140 = 5;
				}
				if (func_184(bLocal_85, UNK_0x16F2683693E537C9()) > 100f)
				{
					func_59();
				}
			}
			break;
	}
}

void func_188()
{
	int iVar0;

	if ((iLocal_158 - iLocal_157) > 1000)
	{
		bLocal_172 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(bLocal_85, false), 18f, false, 4);
	}
	if (bLocal_172 != 0)
	{
		iLocal_156++;
		iLocal_157 = UNK_0x1C0640BA9A7327B3();
		if (UNK_0x09AC81E49EA267F7(false, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_156 > iVar0)
		{
			UNK_0x73270B3C9CC833FD(bLocal_172, true, 0);
			if (UNK_0xDF1306B443CD3D15(bLocal_172, 0))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_172, 0))
				{
					if (iLocal_60 == 1)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
							{
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, bLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = UNK_0x1C0640BA9A7327B3();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 2)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
							{
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, bLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = UNK_0x1C0640BA9A7327B3();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 3)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
							{
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, bLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = UNK_0x1C0640BA9A7327B3();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 5)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
							{
								UNK_0x0C8C0C840C2D1AD2(bLocal_85, bLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = UNK_0x1C0640BA9A7327B3();
						iLocal_156 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_183 = UNK_0x1C0640BA9A7327B3();
			if ((iLocal_183 - iLocal_182) > 3500)
			{
				UNK_0x046C362CF15F1935(&bLocal_172);
			}
			bLocal_172 = false;
		}
	}
}

bool func_189()
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

void func_190()
{
	if (iLocal_60 == 1)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_85))
		{
			if (!UNK_0x437347B10A200C4B(bLocal_85, 0))
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, true, 0) && !UNK_0x03068588A1FCED1A(bLocal_85)) || func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 12f)
				{
					func_191();
					iLocal_59 = 2;
				}
			}
		}
	}
	else if (iLocal_60 == 2)
	{
		if (!bLocal_167)
		{
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_90, 100f, 100f, 100f, false, true, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_89);
				UNK_0x96167B03C5A77156(false, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				UNK_0x96167B03C5A77156(false, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				UNK_0x96167B03C5A77156(false, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				UNK_0x75ABDC5F81978924(iLocal_89);
				UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
				UNK_0xF82EA857DA10E0CD(&iLocal_89);
				bLocal_167 = true;
			}
		}
	}
	else if (iLocal_60 == 5)
	{
		if (!bLocal_167)
		{
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_90, 200f, 200f, 200f, false, true, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_89);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 3);
				UNK_0xC6EB89C59F2AF6B8(false, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, false, 0, 0, 0);
				UNK_0x96167B03C5A77156(false, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				UNK_0x96167B03C5A77156(false, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				UNK_0x96167B03C5A77156(false, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				UNK_0x96167B03C5A77156(false, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				UNK_0x96167B03C5A77156(false, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				UNK_0x96167B03C5A77156(false, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				UNK_0xC6EB89C59F2AF6B8(false, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_89);
				UNK_0x78ADC381772E3D54(bLocal_85, iLocal_89);
				UNK_0xF82EA857DA10E0CD(&iLocal_89);
				bLocal_167 = true;
			}
		}
	}
	if (iLocal_60 != 1)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_85))
		{
			if (!UNK_0x437347B10A200C4B(bLocal_85, 0))
			{
				if ((UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_85, 95f, 95f, 50f, 0, 1, 0) && !UNK_0x03068588A1FCED1A(bLocal_85)) || func_184(UNK_0x16F2683693E537C9(), bLocal_85) < 12f)
				{
					func_191();
					iLocal_59 = 2;
				}
			}
		}
	}
}

void func_191()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
	{
		UNK_0x142CC44DB769B57E(&iLocal_120);
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_121))
		{
			if (!UNK_0x437347B10A200C4B(bLocal_85, 0))
			{
				iLocal_121 = func_69(bLocal_85, 0, 145);
				UNK_0xF2D30B8ACAF12A39(iLocal_121, false);
			}
		}
		if (!func_224())
		{
			func_199(1);
		}
		func_160(&uLocal_195, 3, bLocal_85, sLocal_179, 0, 1);
	}
	if (func_13() == 0)
	{
		func_160(&uLocal_195, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (func_13() == 1)
	{
		func_160(&uLocal_195, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else if (func_13() == 2)
	{
		func_160(&uLocal_195, 2, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
}

void func_192()
{
	func_194(39, 1);
	func_194(40, 1);
	func_194(41, 1);
	func_194(42, 1);
	func_194(43, 1);
	func_194(44, 1);
	bLocal_85 = UNK_0x36F2404464202779(26, bLocal_100, vLocal_90, bLocal_96, 1, true);
	UNK_0x71199B01895C6202(bLocal_100);
	UNK_0x11AD11297DC58CC7(bLocal_85, true);
	UNK_0x25C5402CC10F76CD(bLocal_85, false);
	UNK_0x4F39CC3882DD074E(bLocal_85, bLocal_181);
	UNK_0x4E885A246A9D983A(bLocal_85, 137, true);
	UNK_0x4E885A246A9D983A(bLocal_85, 206, true);
	UNK_0xBAFED2F6486F771A(bLocal_85, 1024, true);
	UNK_0xBAFED2F6486F771A(bLocal_85, 65536, true);
	UNK_0xBAFED2F6486F771A(bLocal_85, 2, false);
	UNK_0xAFF39FB306F8E232(bLocal_85, 17, true);
	UNK_0xE652C92E8AF37788(bLocal_85, 60f);
	UNK_0x8B66ED74C2DC2E98(bLocal_85, 5f);
	if (iLocal_60 == 1)
	{
		UNK_0x64F9F278AB9DCA2C(bLocal_85, false, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 2, true, 2, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 3, false, 2, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 4, false, 2, 0);
		UNK_0xAB8E2DDC7AF955E0(bLocal_102, true);
		bLocal_171 = UNK_0x122AAB0B1D6F55AD(bLocal_102, -3088.068f, 730.4819f, 20.3028f, 332.2996f, true, true, false);
		UNK_0x5DAB50E08C3C504A(bLocal_171, 150f);
		UNK_0x611DFA9294B339CA(bLocal_171, 4, 0, false);
		UNK_0x05EC10F460C3A4AF(bLocal_171, 0);
		UNK_0x71199B01895C6202(bLocal_102);
		UNK_0xC6EB89C59F2AF6B8(bLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, false, 0, 0, 0);
	}
	else if (iLocal_60 == 2)
	{
		UNK_0x64F9F278AB9DCA2C(bLocal_85, false, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 2, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 3, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 4, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 8, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 10, false, false, 0);
		UNK_0xC6EB89C59F2AF6B8(bLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, false, 0, 0, 0);
		UNK_0x7D6CA5F52B3748BF(vLocal_93 - Vector(20f, 50f, 50f), vLocal_93 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_193(1);
	}
	else if (iLocal_60 == 3)
	{
		UNK_0x64F9F278AB9DCA2C(bLocal_85, false, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 2, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 3, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 4, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(bLocal_85, 8, false, false, 0);
		UNK_0xC6EB89C59F2AF6B8(bLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, false, 0, 0, 0);
		UNK_0x7D6CA5F52B3748BF(vLocal_93 - Vector(20f, 50f, 50f), vLocal_93 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_60 == 5)
	{
	}
	iLocal_59 = 1;
}

void func_193(bool bParam0)
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

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_198(iParam0, 2, 1))
		{
			func_197(iParam0, 2, 1);
		}
	}
	else if (func_198(iParam0, 2, 1))
	{
		func_195(iParam0, 2, 1);
	}
}

void func_195(int iParam0, bool bParam1, bool bParam2)
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
		if (func_32() == 0)
		{
			bVar0 = func_51(func_196(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_49(func_196(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

int func_196(int iParam0)
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

void func_197(int iParam0, bool bParam1, bool bParam2)
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
		if (func_32() == 0)
		{
			bVar0 = func_51(func_196(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_49(func_196(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_198(int iParam0, bool bParam1, bool bParam2)
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
		if (func_32() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_51(func_196(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_199(bool bParam0)
{
	if (func_202())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_37(Global_111627))
		{
			func_200(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_37(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_181(func_201(iParam0), -1);
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
					func_181(func_201(iParam0), -1);
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
					func_181(func_201(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

bool func_201(int iParam0)
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

bool func_202()
{
	switch (func_203(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_203(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_207(0))
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
		if (!func_205(iParam2))
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
			func_204(uParam0, iParam4);
		}
	}
	return 2;
}

void func_204(var uParam0, int iParam1)
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

bool func_205(int iParam0)
{
	return func_206(iParam0, Global_41431);
}

int func_206(int iParam0, int iParam1)
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

bool func_207(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_205(iParam0))
	{
		return false;
	}
	return true;
}

bool func_208()
{
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		return true;
	}
	if (!UNK_0x437347B10A200C4B(bLocal_85, 0))
	{
		if (UNK_0xB87D13D0C064E9D1(bLocal_85, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_85, UNK_0x728870EB733D12A1(), 1))
			{
				return true;
			}
		}
		if (!bLocal_114)
		{
			if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bLocal_85, true), 10f, true) || UNK_0x723EE7F83DF1497D(UNK_0x68F4C0EC296D3901(bLocal_85, true) - Vector(10f, 10f, 10f), UNK_0x68F4C0EC296D3901(bLocal_85, true) + Vector(10f, 10f, 10f), 0))
			{
				return true;
			}
		}
		else if (UNK_0xEB6A8945D1AC98A1(bLocal_86) && UNK_0xC844350D5D58C99A(bLocal_86))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_86, UNK_0x16F2683693E537C9(), 1) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 7))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
				{
					UNK_0x08082071A5F7C155(bLocal_85, 6, 0f, 0);
				}
				return true;
			}
		}
		if ((!UNK_0x16102BEDC7435774(bLocal_85) && UNK_0x7069CC4DE1EA3FAA(bLocal_85, UNK_0x16F2683693E537C9(), 90f)) && UNK_0x12DE711B1C681E9E(bLocal_85, UNK_0x16F2683693E537C9(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_85) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_85))
			{
				return true;
			}
		}
	}
	return false;
}

void func_209()
{
	UNK_0x523BCC9DC80CD82F(bLocal_100);
	UNK_0x3F423BF5B8125A50("random@hitch_lift");
	if (iLocal_60 == 1 || iLocal_60 == 5)
	{
		UNK_0x523BCC9DC80CD82F(bLocal_102);
	}
	if (iLocal_60 == 1)
	{
		UNK_0x9CBC55A05A07FC47(0);
		UNK_0xAE317D00A5A55DF6("timer", 0, -1);
	}
	else if (iLocal_60 == 3)
	{
		UNK_0x3F423BF5B8125A50("facials@gen_female@base");
	}
	if (UNK_0xB87F6CF6E5628C67(bLocal_100) && UNK_0xB4AE0788C1587752("random@hitch_lift"))
	{
		if (iLocal_60 == 1 || iLocal_60 == 5)
		{
			if (UNK_0xB87F6CF6E5628C67(bLocal_102))
			{
				bLocal_61 = true;
			}
		}
		else if (iLocal_60 == 3)
		{
			if (UNK_0xB4AE0788C1587752("facials@gen_female@base"))
			{
				bLocal_61 = true;
			}
		}
		else
		{
			bLocal_61 = true;
		}
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(bLocal_100);
		UNK_0x3F423BF5B8125A50("random@hitch_lift");
		if (iLocal_60 == 1 || iLocal_60 == 5)
		{
			UNK_0x523BCC9DC80CD82F(bLocal_102);
		}
		else if (iLocal_60 == 3)
		{
			UNK_0x3F423BF5B8125A50("facials@gen_female@base");
		}
	}
}

void func_210()
{
	if (iLocal_60 == 1)
	{
		vLocal_90 = { -3086.052f, 735.5091f, 20.4883f };
		bLocal_96 = 17.9234f;
		vLocal_93 = { -1053.344f, -2539.327f, 19.0394f };
		bLocal_100 = joaat("A_M_M_BUSINESS_01");
		cLocal_178 = "REHH1AU";
		sLocal_179 = "BUSINESSMAN";
		bLocal_181 = "BUSINESSMAN";
		bLocal_102 = joaat("SCHAFTER2");
	}
	else if (iLocal_60 == 2)
	{
		vLocal_90 = { 196.7701f, 4427.757f, 72.2673f };
		bLocal_96 = 75.9173f;
		vLocal_93 = { 3328.828f, 5154.456f, 17.2894f };
		bLocal_100 = joaat("A_F_Y_HIKER_01");
		cLocal_178 = "REHH2AU";
		sLocal_179 = "REHH2Hiker";
		bLocal_181 = "REHH2Hiker";
	}
	else if (iLocal_60 == 3)
	{
		vLocal_90 = { 2745.026f, 4386.827f, 47.8636f };
		bLocal_96 = 19.4143f;
		vLocal_93 = { 814.455f, 1274.797f, 359.5112f };
		vLocal_104 = { 804.2382f, 1269.589f, 359.3557f };
		bLocal_107 = 340.7372f;
		bLocal_100 = joaat("A_F_Y_HIPSTER_03");
		bLocal_101 = joaat("S_M_M_SECURITY_01");
		cLocal_178 = "REHH3AU";
		sLocal_179 = "REHH3Hipster";
		bLocal_181 = "REHH3Hipster";
		sLocal_180 = "REHH3Security";
	}
	else if (iLocal_60 == 5)
	{
		vLocal_90 = { -324.0379f, 2818.034f, 58.4498f };
		bLocal_96 = 56.5422f;
		vLocal_93 = { -344.0339f, 634.4108f, 171.2902f };
		bLocal_100 = joaat("IG_BRIDE");
		bLocal_101 = joaat("A_M_Y_BUSINESS_01");
		cLocal_178 = "REHH5AU";
		sLocal_179 = "REHH5Bride";
		bLocal_181 = "REHH5Bride";
		sLocal_180 = "REHH5Groom";
		bLocal_102 = joaat("PATRIOT");
	}
	bLocal_62 = true;
}

bool func_211()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_44) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_222())
		{
			return false;
		}
	}
	if (func_218())
	{
		return true;
	}
	if (func_212(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_212(float fParam0, bool bParam1)
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
		if (func_15(func_13()))
		{
			iVar36 = func_42();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_213(iVar32, &Var0);
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

void func_213(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_214(uParam1, "Abigail1", func_216(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 1:
			func_214(uParam1, "Abigail2", func_216(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 2:
			func_214(uParam1, "Barry1", func_216(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 3:
			func_214(uParam1, "Barry2", func_216(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		case 4:
			func_214(uParam1, "Barry3", func_216(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 5:
			func_214(uParam1, "Barry3A", func_216(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 6:
			func_214(uParam1, "Barry3C", func_216(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 7:
			func_214(uParam1, "Barry4", func_216(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_215(iParam0), 0, 0);
			break;
		case 8:
			func_214(uParam1, "Dreyfuss1", func_216(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 9:
			func_214(uParam1, "Epsilon1", func_216(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 10:
			func_214(uParam1, "Epsilon2", func_216(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 11:
			func_214(uParam1, "Epsilon3", func_216(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 12:
			func_214(uParam1, "Epsilon4", func_216(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 13:
			func_214(uParam1, "Epsilon5", func_216(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 14:
			func_214(uParam1, "Epsilon6", func_216(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 15:
			func_214(uParam1, "Epsilon7", func_216(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 16:
			func_214(uParam1, "Epsilon8", func_216(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 17:
			func_214(uParam1, "Extreme1", func_216(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 18:
			func_214(uParam1, "Extreme2", func_216(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 19:
			func_214(uParam1, "Extreme3", func_216(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 20:
			func_214(uParam1, "Extreme4", func_216(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 21:
			func_214(uParam1, "Fanatic1", func_216(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_215(iParam0), 1, 0);
			break;
		case 22:
			func_214(uParam1, "Fanatic2", func_216(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_215(iParam0), 1, 0);
			break;
		case 23:
			func_214(uParam1, "Fanatic3", func_216(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_215(iParam0), 0, 1);
			break;
		case 24:
			func_214(uParam1, "Hao1", func_216(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_215(iParam0), 0, 1);
			break;
		case 25:
			func_214(uParam1, "Hunting1", func_216(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 26:
			func_214(uParam1, "Hunting2", func_216(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 27:
			func_214(uParam1, "Josh1", func_216(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 28:
			func_214(uParam1, "Josh2", func_216(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		case 29:
			func_214(uParam1, "Josh3", func_216(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		case 30:
			func_214(uParam1, "Josh4", func_216(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 31:
			func_214(uParam1, "Maude1", func_216(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 32:
			func_214(uParam1, "Minute1", func_216(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 33:
			func_214(uParam1, "Minute2", func_216(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 34:
			func_214(uParam1, "Minute3", func_216(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 35:
			func_214(uParam1, "MrsPhilips1", func_216(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 36:
			func_214(uParam1, "MrsPhilips2", func_216(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 37:
			func_214(uParam1, "Nigel1", func_216(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 38:
			func_214(uParam1, "Nigel1A", func_216(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		case 39:
			func_214(uParam1, "Nigel1B", func_216(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_215(iParam0), 1, 1);
			break;
		case 40:
			func_214(uParam1, "Nigel1C", func_216(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_215(iParam0), 1, 1);
			break;
		case 41:
			func_214(uParam1, "Nigel1D", func_216(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_215(iParam0), 1, 1);
			break;
		case 42:
			func_214(uParam1, "Nigel2", func_216(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		case 43:
			func_214(uParam1, "Nigel3", func_216(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		case 44:
			func_214(uParam1, "Omega1", func_216(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 45:
			func_214(uParam1, "Omega2", func_216(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 46:
			func_214(uParam1, "Paparazzo1", func_216(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 47:
			func_214(uParam1, "Paparazzo2", func_216(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 48:
			func_214(uParam1, "Paparazzo3", func_216(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 49:
			func_214(uParam1, "Paparazzo3A", func_216(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 50:
			func_214(uParam1, "Paparazzo3B", func_216(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 51:
			func_214(uParam1, "Paparazzo4", func_216(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 52:
			func_214(uParam1, "Rampage1", func_216(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 54:
			func_214(uParam1, "Rampage3", func_216(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 55:
			func_214(uParam1, "Rampage4", func_216(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 56:
			func_214(uParam1, "Rampage5", func_216(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_215(iParam0), 0, 0);
			break;
		case 53:
			func_214(uParam1, "Rampage2", func_216(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		case 57:
			func_214(uParam1, "TheLastOne", func_216(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 58:
			func_214(uParam1, "Tonya1", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 59:
			func_214(uParam1, "Tonya2", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 60:
			func_214(uParam1, "Tonya3", func_216(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 61:
			func_214(uParam1, "Tonya4", func_216(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		case 62:
			func_214(uParam1, "Tonya5", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_214(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_215(int iParam0)
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

struct<2> func_216(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_217(iParam0) };
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

struct<2> func_217(int iParam0)
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

bool func_218()
{
	if (func_221() && !func_222())
	{
		return true;
	}
	if (func_220() && func_219())
	{
		return true;
	}
	return false;
}

bool func_219()
{
	return Global_111356 > 0;
}

bool func_220()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_221()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_222()
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

bool func_223()
{
	if (!func_205(5))
	{
		return true;
	}
	if (func_218())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_222())
		{
			return false;
		}
	}
	if (func_212(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_224()
{
	if ((Global_111627 == func_46() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_225(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_227(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_226();
}

void func_226()
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

void func_227(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_228(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_46();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_256())
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
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_222())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_27(0))
		{
			return false;
		}
		if (func_218())
		{
			return false;
		}
		if (func_255())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_15(func_13()))
		{
			if (func_212(100f, 1) != -1)
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
		if (!func_254(iParam3))
		{
			return false;
		}
		if (func_15(func_13()))
		{
			if (func_253(func_13()) == 4 || func_253(func_13()) == 5)
			{
				return false;
			}
		}
		if (func_15(func_13()))
		{
			if (!func_252(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_251(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_250())
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
		if (!func_241(4))
		{
			return false;
		}
		if (!func_205(5))
		{
			return false;
		}
		if (func_240(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_240(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_254(30) && !func_240(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_15(func_13()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_239(bVar8))
				{
					if (func_230(iVar4))
					{
						if (!func_229(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_13() != iVar4)
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

bool func_229(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_230(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_231(bVar0);
}

int func_231(bool bParam0)
{
	return func_232(bParam0, 1);
}

int func_232(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_239(bParam0))
	{
		return 0;
	}
	func_233(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_233(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_234(func_168(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_234(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_238(bParam0, bParam1))
	{
		bVar0 = func_175(bParam1);
		iVar1 = func_173(bParam0);
		iVar2 = (func_173(bParam0) - func_173(bParam1));
		iVar3 = (func_175(bParam0) - func_175(bParam1));
		iVar4 = (func_237(bParam0) - func_237(bParam1));
		iVar5 = (func_166(bParam0) - func_166(bParam1));
		iVar6 = (func_167(bParam0) - func_167(bParam1));
		iVar7 = (func_236(bParam0) - func_236(bParam1));
	}
	else
	{
		bVar0 = func_175(bParam0);
		iVar1 = func_173(bParam1);
		iVar2 = (func_173(bParam1) - func_173(bParam0));
		iVar3 = (func_175(bParam1) - func_175(bParam0));
		iVar4 = (func_237(bParam1) - func_237(bParam0));
		iVar5 = (func_166(bParam1) - func_166(bParam0));
		iVar6 = (func_167(bParam1) - func_167(bParam0));
		iVar7 = (func_236(bParam1) - func_236(bParam0));
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
		iVar4 = (iVar4 + func_172(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = SYSTEM::ROUND(func_235(SYSTEM::TO_FLOAT(bVar0 + 1), 0f, 12f));
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

float func_235(float fParam0, float fParam1, float fParam2)
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

int func_236(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_237(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_238(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_239(bParam1) || !func_239(bParam0))
	{
		return true;
	}
	bVar0 = func_173(bParam0);
	bVar1 = func_173(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_175(bParam0);
	bVar1 = func_175(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_237(bParam0);
	bVar1 = func_237(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_166(bParam0);
	bVar1 = func_166(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_167(bParam0);
	bVar1 = func_167(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_236(bParam0);
	bVar1 = func_236(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_239(bool bParam0)
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
	iVar0 = func_236(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_167(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_166(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_173(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_175(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_237(bParam0);
	if (iVar5 < 1 || iVar5 > func_172(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_240(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_241(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_13();
				if (!func_15(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_249()) || Global_110685) || Global_30770) || func_248()) || func_21(8, -1)) || func_247()) || func_246()) || func_245()) || func_244()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_249()) || Global_30770) || func_248()) || func_21(8, -1)) || func_245()) || func_247()) || func_246()) || func_244()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_249()) || Global_110685) || Global_30770) || func_248()) || func_21(8, -1)) || func_245()) || func_247()) || func_246()) || func_244()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_249()) || Global_110685) || Global_30770) || func_248()) || func_21(8, -1)) || func_247()) || func_246()) || func_244()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_249() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_21(8, -1)) || func_244()) || func_243()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_21(8, -1) || func_247()) || func_246()) || func_243()) || func_242())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_249()) || Global_30770) || func_248()) || func_21(8, -1)) || func_246()) || func_245()) || func_244()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_249()) || func_246()) || Global_110685) || Global_30770) || func_248()) || Global_42596) || func_21(8, -1)) || func_245()) || func_243()) || func_244()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_249()) || Global_110685) || Global_30770) || func_248()) || func_21(8, -1)) || func_245()) || func_243()) || func_247()) || func_246()) || func_244())
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

bool func_242()
{
	return Global_98783.f_1;
}

bool func_243()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_244()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_245()
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

bool func_246()
{
	return Global_98796.f_346 > 0;
}

bool func_247()
{
	return Global_98796.f_345 > 0;
}

bool func_248()
{
	return Global_1312877;
}

bool func_249()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_250()
{
	func_12();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_251(bool bParam0)
{
	return func_238(func_168(), bParam0);
}

bool func_252(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_13();
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

int func_253(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_254(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_256())
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

bool func_255()
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

bool func_256()
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

void func_257()
{
	if (bLocal_143)
	{
		func_278(0);
		if (Global_31009)
		{
			UNK_0xC92DB9682A650680("AC_STOP");
		}
		func_277();
		UNK_0xB547E3FFEB27073E();
		func_193(0);
		if (UNK_0x8C74DE122769E1BF())
		{
			UNK_0x29D5132FBDCF2B1E(0);
		}
		if (UNK_0x3F333B5CBA674248())
		{
			UNK_0xE1A9998AC4404A1F(0);
		}
		Global_31107[0 /*7*/].f_6 = 0;
		func_269(0, 1, 1, 0, 0, 0);
		func_61();
		if (UNK_0xC844350D5D58C99A(bLocal_85))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_85))
			{
				UNK_0x4E885A246A9D983A(bLocal_85, 317, true);
				if (!UNK_0x405E212DDE472467(bLocal_85, 0))
				{
					UNK_0x61F0DE0226FF7252(bLocal_85);
				}
				if (iLocal_60 != 2)
				{
					UNK_0x8FB4E06C94958F84(bLocal_85);
				}
				if (UNK_0xD1960163A3042274(bLocal_85, 1805844857) != 1 && UNK_0xD1960163A3042274(bLocal_85, 1805844857) != 0)
				{
					UNK_0x11AD11297DC58CC7(bLocal_85, false);
				}
				UNK_0x25C5402CC10F76CD(bLocal_85, true);
				if (UNK_0x16102BEDC7435774(bLocal_85))
				{
					UNK_0x0A94A109271BE75A(bLocal_85);
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_86))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				if (!UNK_0xE9FDA1035CFEA94F(bLocal_86))
				{
					UNK_0x11AD11297DC58CC7(bLocal_86, false);
				}
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
		}
	}
	UNK_0x8C26F31DFF77D124();
	if (func_224())
	{
		if (UNK_0xBF75E4DF4C367CD9(801.7148f, 1270.138f, 359.2855f, 6f, joaat("PROP_FNCLINK_03GATE1"), 0))
		{
			UNK_0x6DA3AC47D5DB9EED(joaat("PROP_FNCLINK_03GATE1"), 801.7148f, 1270.138f, 359.2855f, false, 0f, 0);
		}
		if (UNK_0xBF75E4DF4C367CD9(802.9218f, 1281.675f, 359.2962f, 6f, joaat("PROP_FNCLINK_03GATE1"), 0))
		{
			UNK_0x6DA3AC47D5DB9EED(joaat("PROP_FNCLINK_03GATE1"), 802.9218f, 1281.675f, 359.2962f, false, 0f, 0);
		}
	}
	func_258(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_258(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_262(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_261(30000);
		StringCopy(&cVar0, func_260(Global_111627, 1), 64);
		if (func_45(Global_111627) > 0)
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
	func_259(&Global_30827);
	Global_111628 = 0;
	func_227(-1);
}

void func_259(var uParam0)
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

char* func_260(int iParam0, bool bParam1)
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

void func_261(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_262(int iParam0)
{
	func_263(iParam0, 0, func_268(iParam0));
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_168();
	func_266(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_265(iParam0, &bVar0);
	Var1 = { func_264(&bVar0) };
}

struct<16> func_264(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_166(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_167(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_236(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_237(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_175(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_173(*bParam0), 64);
	return Var0;
}

void func_265(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_266(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_173(*bParam0);
	bVar1 = func_175(*bParam0);
	iVar2 = func_237(*bParam0);
	iVar3 = func_166(*bParam0);
	iVar4 = func_167(*bParam0);
	iVar5 = func_236(*bParam0);
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
	iVar6 = func_172(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_172(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_267(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_267(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_178(bParam0, iParam1);
	func_177(bParam0, iParam2);
	func_176(bParam0, iParam3);
	func_170(bParam0, bParam5);
	func_171(bParam0, iParam4);
	func_169(bParam0, iParam6);
}

int func_268(int iParam0)
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

void func_269(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_276(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_10())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_275(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_276(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_275(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_273(UNK_0xD803B885F5E47A62())) && !func_271(UNK_0xD803B885F5E47A62(), 0)) && !func_270()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_273(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_270()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_271(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_272(-1, 0) == 8;
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

int func_272(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

bool func_273(bool bParam0)
{
	if (func_271(bParam0, 0))
	{
		return true;
	}
	if (func_274())
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

bool func_274()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_275(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_276(int iParam0)
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

void func_277()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_278(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_194(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_279()
{
	float fVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_70, 1);
		iLocal_69 = 1;
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_73, 1) < fVar0)
		{
			fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_73, 1);
			iLocal_69 = 2;
		}
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_76, 1) < fVar0)
		{
			fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_76, 1);
			iLocal_69 = 3;
		}
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_79, 1) < fVar0)
		{
			fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_79, 1);
			iLocal_69 = 5;
		}
		if (iLocal_69 == 1)
		{
			bLocal_82 = true;
			iLocal_60 = 1;
			return vLocal_70;
		}
		else if (iLocal_69 == 2)
		{
			bLocal_82 = 2;
			iLocal_60 = 2;
			return vLocal_73;
		}
		else if (iLocal_69 == 3)
		{
			bLocal_82 = 3;
			iLocal_60 = 3;
			return vLocal_76;
		}
		else if (iLocal_69 == 5)
		{
			bLocal_82 = 4;
			iLocal_60 = 5;
			return vLocal_79;
		}
	}
	return 0f, 0f, 0f;
}

