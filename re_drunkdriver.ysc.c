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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	bool bLocal_60 = false;
	bool bLocal_61 = false;
	bool bLocal_62 = false;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65[2] = { 0, 0 };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	bool bLocal_71 = false;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	bool bLocal_75 = false;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	bool bLocal_79 = false;
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	bool bLocal_97 = false;
	bool bLocal_98 = false;
	int iLocal_99 = 0;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	bool bLocal_106 = false;
	bool bLocal_107 = false;
	bool bLocal_108 = false;
	bool bLocal_109 = false;
	bool bLocal_110 = false;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = false;
	bool bLocal_114 = false;
	bool bLocal_115 = false;
	bool bLocal_116 = false;
	bool bLocal_117 = false;
	bool bLocal_118 = false;
	bool bLocal_119 = false;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = false;
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	bool bLocal_134 = false;
	bool bLocal_135 = false;
	bool bLocal_136 = false;
	char cLocal_137[48] = "";
	vector3 vLocal_143[24] = "";
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	vector3 vLocal_152 = { 0f, 0f, 0f };
	int iLocal_155[2] = { 0, 0 };
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	vector3 vLocal_160 = { 0f, 0f, 0f };
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	bool bLocal_168 = false;
	bool bLocal_169 = false;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	bool bLocal_172 = false;
	var uLocal_173 = 16;
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
	int iLocal_338 = 0;
	vector3 vLocal_339 = { 0f, 0f, 0f };
	vector3 vLocal_342 = { 0f, 0f, 0f };
	bool bLocal_345 = false;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
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
	iLocal_19 = 3;
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
	iLocal_51 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_52 = UNK_0x817B3657F78A517A();
	vLocal_87 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_124 = -1;
	StringCopy(&cLocal_137, "", 24);
	iLocal_165 = -1;
	vLocal_339 = { -1017.345f, -1354.196f, 4.4568f };
	vLocal_342 = { 2003.456f, 3071.102f, 46.0499f };
	vLocal_57 = { ScriptParam_0.f_1[0 /*3*/] };
	func_280();
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_242();
	}
	if (func_200(vLocal_57, 27, bLocal_345, 0, 0))
	{
		func_197(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	iLocal_159 = UNK_0x1C0640BA9A7327B3();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0x338D6FF72D84D90F() || bLocal_62)
		{
			if (!func_196())
			{
				if (func_195())
				{
					func_242();
				}
			}
			UNK_0x1A6DFFFEEC27BF4F("RE_DD", 0);
			switch (iLocal_53)
			{
				case 0:
					if (bLocal_56)
					{
						bLocal_172 = true;
						iLocal_53 = 1;
					}
					else
					{
						if (func_183())
						{
							func_242();
						}
						if (!bLocal_60)
						{
							func_182();
						}
						if (bLocal_60)
						{
							func_181();
						}
					}
					break;
				case 1:
					func_174();
					if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						func_173();
						func_170();
						if (iLocal_54 == 1 && !UNK_0xC844350D5D58C99A(iLocal_91[1]))
						{
							func_76();
							if (func_74() || UNK_0x437347B10A200C4B(bLocal_94, 0))
							{
								if (UNK_0xC844350D5D58C99A(iLocal_91[0]))
								{
									if (!UNK_0x437347B10A200C4B(iLocal_91[0], 0))
									{
										if (UNK_0x16102BEDC7435774(iLocal_91[0]))
										{
											UNK_0x0A94A109271BE75A(iLocal_91[0]);
										}
										UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
										UNK_0xF3268524E9BE6D6E(iLocal_91[0], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
										func_70(iLocal_91[0], 120000, 0);
										UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_66();
							}
						}
						if (iLocal_54 == 2 || (iLocal_54 == 1 && UNK_0xC844350D5D58C99A(iLocal_91[1])))
						{
							func_76();
							if (iLocal_55 != 9)
							{
								if (func_74() || UNK_0x437347B10A200C4B(bLocal_94, 0))
								{
									if (UNK_0xC844350D5D58C99A(iLocal_91[0]))
									{
										if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
										{
											if (UNK_0x16102BEDC7435774(iLocal_91[0]))
											{
												UNK_0x0A94A109271BE75A(iLocal_91[0]);
											}
											UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
											UNK_0xF3268524E9BE6D6E(iLocal_91[0], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
											func_70(iLocal_91[0], 120000, 0);
											UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
										}
									}
									if (UNK_0xC844350D5D58C99A(iLocal_91[1]))
									{
										if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
										{
											if (UNK_0x16102BEDC7435774(iLocal_91[1]))
											{
												UNK_0x0A94A109271BE75A(iLocal_91[1]);
											}
											UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
											UNK_0xF3268524E9BE6D6E(iLocal_91[1], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
											func_70(iLocal_91[1], 120000, 0);
											UNK_0xFADC0A217229F6B5(iLocal_91[1], true);
										}
									}
									if (iLocal_54 == 1)
									{
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_54 == 2)
									{
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_66();
								}
							}
						}
						if (UNK_0xC844350D5D58C99A(iLocal_91[0]))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
							{
								UNK_0xCAF7AE54F764D5AA(iLocal_91[0], 1f);
							}
						}
						if (UNK_0xC844350D5D58C99A(iLocal_91[1]))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
							{
								UNK_0xCAF7AE54F764D5AA(iLocal_91[1], 1f);
							}
						}
					}
					if ((func_65() && !func_64()) && iLocal_55 != 9)
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
						{
							if (UNK_0x5A91F08DF773C39D(iLocal_91[0], vLocal_87, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_54 == 2)
								{
									if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
									{
										if (!UNK_0x16102BEDC7435774(iLocal_91[0]) && !UNK_0x16102BEDC7435774(iLocal_91[1]))
										{
											UNK_0xE25C96A9C36BE5D2(iLocal_91[0], func_63());
											UNK_0xE25C96A9C36BE5D2(iLocal_91[1], func_63());
										}
									}
								}
								func_62(0);
								SYSTEM::WAIT(0);
								func_68();
								iLocal_55 = 9;
							}
						}
					}
					if (func_61())
					{
						if (UNK_0xC844350D5D58C99A(iLocal_91[0]))
						{
							UNK_0xEBA53F35D0085654(&(iLocal_91[0]));
						}
						if (UNK_0xC844350D5D58C99A(iLocal_91[1]))
						{
							UNK_0xEBA53F35D0085654(&(iLocal_91[1]));
						}
						func_36();
					}
					if ((func_35() || func_34()) || func_3())
					{
						func_66();
					}
					break;
			}
		}
		else
		{
			func_242();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_54 == 1 && iLocal_55 == 7) && iLocal_64 == 5) && bLocal_110)
	{
		iLocal_159 = UNK_0x1C0640BA9A7327B3();
		if (func_2())
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
			{
				vLocal_160 = { UNK_0x698705F356FA8F72(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) };
			}
		}
	}
}

bool func_2()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			if (iLocal_54 == 1)
			{
				if (UNK_0xC844350D5D58C99A(iLocal_91[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
					{
						if (UNK_0xC42A92762C58E1B9(iLocal_91[0], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
						{
							return true;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (UNK_0xC844350D5D58C99A(iLocal_91[0]) && UNK_0xC844350D5D58C99A(iLocal_91[1]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
					{
						if (UNK_0xC42A92762C58E1B9(iLocal_91[0], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) && UNK_0xC42A92762C58E1B9(iLocal_91[1], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
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

int func_3()
{
	if (iLocal_54 == 2)
	{
		if (!UNK_0x437347B10A200C4B(bLocal_94, 0))
		{
			if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_94, 200f, 200f, 200f, 0, 1, 0))
			{
				return 1;
			}
			if (((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_OFFR")) && !func_33("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_AKB")) && !func_33("REDR2_TRY")) && !func_33("REDR2_JIC")) && !func_33("REDR2_CH")) && !func_33("REDR2_WH2")) && !func_33("REDR2_BCK")) && !func_33("REDR2_JIA")) && !func_33("REDR2_JIB")) && !func_33("REDR2_JIC")) && !func_33("REDR2_WHA")) && !func_33("REDR2_WHB")) && !func_33("REDR2_WHC")) && !func_33("REDR2_PSM")) && !func_33("REDR2_PSF")) && !func_33("REDR2_PST")) && !func_33("REDR2_TK"))
			{
				if (UNK_0xE608C809F9416F00(bLocal_94) && UNK_0x7F6DC62EA9922664(bLocal_94) < iLocal_80)
				{
					iLocal_80 = UNK_0x7F6DC62EA9922664(bLocal_94);
					func_5(0);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!UNK_0xDF1306B443CD3D15(bLocal_94, 0) || UNK_0x5B17F10380E80E5B(bLocal_94))
			{
				func_68();
				SYSTEM::WAIT(0);
				if (!func_4())
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
						{
							UNK_0x01E4BB5190DF7317(iLocal_91[0], 1193033728, 0);
							UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
						}
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
						{
							UNK_0xE185F110925D87DB(iLocal_91[1], iLocal_91[0], -1, 0f, 1f, 1073741824 /* Float: 2f */, 0);
							UNK_0xFADC0A217229F6B5(iLocal_91[1], true);
						}
						return 1;
					}
				}
			}
			if (UNK_0x54648B774DB42A3A(bLocal_94, false, 2) && UNK_0xB87D13D0C064E9D1(bLocal_94, UNK_0x16F2683693E537C9(), 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
					UNK_0xF3268524E9BE6D6E(iLocal_91[0], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
				}
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
				{
					UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
					UNK_0xF3268524E9BE6D6E(iLocal_91[1], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_4()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		if (bLocal_136)
		{
			if (func_10(&uLocal_173, "REDR2AU", &cLocal_143, &cLocal_137, 8, 0, 0))
			{
				bLocal_136 = false;
			}
		}
	}
	else if ((!bLocal_136 && UNK_0x25037C66EB32B076()) && !func_33("REDR1_SWV"))
	{
		cLocal_143 = { func_9() };
		cLocal_137 = { func_8() };
		func_6();
		bLocal_136 = true;
	}
}

void func_6()
{
	Global_19671 = 0;
	func_7();
}

void func_7()
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

struct<6> func_8()
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

struct<6> func_9()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_29();
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
				func_21();
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
				if (func_20())
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
			if (func_19())
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
			func_18();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_17();
		func_12();
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
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
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

bool func_13()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_16())
	{
		return false;
	}
	if (func_14(UNK_0xD803B885F5E47A62()))
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

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

bool func_15(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_16()
{
	return -1;
}

void func_17()
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

void func_18()
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

bool func_19()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_20()
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

void func_21()
{
	if (func_28(14))
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
		Global_19486 = func_22();
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

int func_22()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_23()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_25(UNK_0x16F2683693E537C9());
			if (func_24(iVar0) && (!func_28(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_24(Global_111638.f_2358.f_539.f_4321))
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

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_28(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_29()
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

bool func_30(bool bParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_33(bool bParam0)
{
	var uVar0;

	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

int func_34()
{
	if (iLocal_54 == 1)
	{
		if (UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	if (iLocal_54 == 1)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_91[0]) && !UNK_0xC844350D5D58C99A(iLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_36()
{
	while (!func_60())
	{
		SYSTEM::WAIT(0);
	}
	func_40(27, bLocal_345);
	func_37();
	func_242();
}

void func_37()
{
	func_38();
}

int func_38()
{
	if (func_39(0))
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

bool func_39(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_40(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_57(iParam0))
	{
		func_56(iParam0, bParam1);
		if (!func_55(51))
		{
			func_51("RE_REWARD", 1, 0, 4000, 10000, func_54(), 0, 138, 0);
			func_50(51);
		}
		if (func_49(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_48(iParam0, bParam1) != 322)
		{
			func_42(func_48(iParam0, bParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_41(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_41(7);
			}
			else
			{
				func_41(1);
			}
		}
	}
}

void func_41(int iParam0)
{
	Global_111624 = iParam0;
}

void func_42(int iParam0, var uParam1, var uParam2)
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
		func_46((891 + iParam0), 1, -1, 1);
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
		func_43();
	}
}

void func_43()
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
		func_45(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_44() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_38();
				}
			}
		}
	}
}

int func_44()
{
	return Global_30768;
}

int func_45(int iParam0, bool bParam1)
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

int func_46(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_47();
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

int func_47()
{
	return Global_1312745;
}

int func_48(int iParam0, bool bParam1)
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

bool func_49(int iParam0)
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

void func_50(int iParam0)
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

void func_51(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_52(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_52(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_53();
	}
}

void func_53()
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

int func_54()
{
	func_23();
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

bool func_55(int iParam0)
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

void func_56(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_57(int iParam0)
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

int func_58()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_59(Var0);
	return iVar16;
}

int func_59(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_60()
{
	return true;
}

bool func_61()
{
	if (Global_31006)
	{
		func_41(4);
		return true;
	}
	return false;
}

void func_62(int iParam0)
{
	Global_21816 = iParam0;
}

int func_63()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

bool func_64()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return true;
	}
	return false;
}

bool func_65()
{
	return Global_31005;
}

void func_66()
{
	func_242();
}

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

void func_68()
{
	Global_19671 = 0;
	func_69();
}

void func_69()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

int func_70(bool bParam0, int iParam1, bool bParam2)
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
	iVar0 = func_73(bParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_72(bParam0);
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
	iVar2 = func_71();
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

int func_71()
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

int func_72(bool bParam0)
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

int func_73(bool bParam0)
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

bool func_74()
{
	UNK_0xD5CA1F51A9931B2F(true);
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		return true;
	}
	if ((UNK_0xD3DCEC81D13AAFB1(vLocal_152, 40f, true) || UNK_0xD3DCEC81D13AAFB1(func_75(UNK_0xD803B885F5E47A62()), 10f, false)) || UNK_0x723EE7F83DF1497D(vLocal_152 - Vector(40f, 40f, 40f), vLocal_152 + Vector(40f, 40f, 40f), 0))
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
	{
		if (UNK_0xB87D13D0C064E9D1(iLocal_91[0], UNK_0x16F2683693E537C9(), 1) || UNK_0x70EED0761B82965E(iLocal_91[0]))
		{
			return true;
		}
		if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_91[0], UNK_0x728870EB733D12A1(), 1))
			{
				return true;
			}
		}
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_91[0]) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_91[0]))
			{
				if (UNK_0xE115347EA59F7B86(iLocal_91[0], UNK_0x16F2683693E537C9()))
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
	if (UNK_0xC844350D5D58C99A(iLocal_91[1]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_91[1], UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (UNK_0xB87D13D0C064E9D1(iLocal_91[1], UNK_0x728870EB733D12A1(), 1))
				{
					return true;
				}
			}
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_91[1]) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_91[1]))
				{
					if (UNK_0xE115347EA59F7B86(iLocal_91[1], UNK_0x16F2683693E537C9()))
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
	return false;
}

Vector3 func_75(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_76()
{
	int iVar0;

	switch (iLocal_55)
	{
		case 0:
			if (iLocal_54 == 1)
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0, true, 0) && UNK_0x8E28E832BEAC3DCE(vLocal_152, 1f)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_152, 15f, 15f, 15f, false, true, 0))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_151))
					{
						UNK_0x142CC44DB769B57E(&iLocal_151);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
						{
							iLocal_155[0] = func_169(iLocal_91[0], 0, 145);
							UNK_0xF2D30B8ACAF12A39(iLocal_155[0], false);
						}
					}
					if (!func_196())
					{
						if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
						{
							bLocal_95 = UNK_0x728870EB733D12A1();
						}
						func_168(&uLocal_173, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_159(1);
						func_158(1);
					}
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0, true, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
						{
							func_157();
							UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, false, 0, 0, 0);
							UNK_0xC6EB89C59F2AF6B8(iLocal_91[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, false, 0, 0, 0);
							iLocal_123 = (UNK_0x1C0640BA9A7327B3() + 60000);
							if (UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
							{
								UNK_0xF2D30B8ACAF12A39(iLocal_155[0], true);
							}
							iLocal_55 = 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0, true, 0) && UNK_0x8E28E832BEAC3DCE(vLocal_152, 1f)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_152, 15f, 15f, 15f, false, true, 0))
				{
					func_156();
					if (!func_196())
					{
						if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
						{
							bLocal_95 = UNK_0x728870EB733D12A1();
						}
						func_159(1);
						func_158(1);
					}
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0, true, 0))
					{
						func_67(&uLocal_173, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
						{
							UNK_0xF2D30B8ACAF12A39(iLocal_155[0], true);
						}
						if (UNK_0xE4EDC4B0E92C078B(iLocal_155[1]))
						{
							UNK_0xF2D30B8ACAF12A39(iLocal_155[1], true);
						}
						iLocal_123 = (UNK_0x1C0640BA9A7327B3() + 120000);
						iLocal_55 = 3;
					}
				}
			}
			break;
		case 1:
			if (iLocal_123 < UNK_0x1C0640BA9A7327B3())
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0x437347B10A200C4B(bLocal_94, 0))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_99);
					UNK_0x0C8C0C840C2D1AD2(false, iLocal_91[1], 7000, 2060, 4);
					UNK_0x78A77CDD64392938(false, 2500);
					UNK_0x5B1D360B9C6F0A09(false, bLocal_94, -1, -1, 1f, 1, 0);
					UNK_0x75ABDC5F81978924(iLocal_99);
					UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
					UNK_0xF82EA857DA10E0CD(&iLocal_99);
				}
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_99);
					UNK_0x0C8C0C840C2D1AD2(false, iLocal_91[0], 7000, 2060, 4);
					UNK_0x96167B03C5A77156(false, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					UNK_0x96167B03C5A77156(false, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
					UNK_0x75ABDC5F81978924(iLocal_99);
					UNK_0x78ADC381772E3D54(iLocal_91[1], iLocal_99);
					UNK_0xF82EA857DA10E0CD(&iLocal_99);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_55 = 3;
			}
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
			{
				if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (UNK_0x7069CC4DE1EA3FAA(UNK_0x16F2683693E537C9(), iLocal_91[0], 80f))
					{
						bLocal_121 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_55 = 4;
					}
				}
				else if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
				{
					UNK_0x707318B0EDF0FF50(1);
				}
				else
				{
					UNK_0x707318B0EDF0FF50(0);
				}
			}
			break;
		case 3:
			if (iLocal_54 == 1)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
					{
						if (func_67(&uLocal_173, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_55 = 4;
						}
					}
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (UNK_0x7069CC4DE1EA3FAA(UNK_0x16F2683693E537C9(), iLocal_91[0], 80f))
						{
							bLocal_121 = true;
							SYSTEM::SETTIMERA(0);
							iLocal_55 = 4;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_155();
						if (func_154())
						{
							func_62(0);
						}
					}
					else if (func_4())
					{
						func_62(1);
					}
				}
				if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_68, 15f, 15f, 15f, false, true, 0) && !UNK_0x3366C505CA31A0C9(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
					{
						if (UNK_0x7069CC4DE1EA3FAA(UNK_0x16F2683693E537C9(), iLocal_91[0], 80f))
						{
							if (UNK_0xE115347EA59F7B86(iLocal_91[0], UNK_0x16F2683693E537C9()))
							{
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_99);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2060, 4);
									UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, false, 0, 0, 0);
									UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
									UNK_0x75ABDC5F81978924(iLocal_99);
									UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
									UNK_0xF82EA857DA10E0CD(&iLocal_99);
								}
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
								{
									UNK_0x0C8C0C840C2D1AD2(iLocal_91[1], UNK_0x16F2683693E537C9(), -1, 2060, 4);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_55 = 4;
							}
						}
					}
				}
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0, true, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_99);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2060, 4);
						UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, false, 0, 0, 0);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0x75ABDC5F81978924(iLocal_99);
						UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
						UNK_0xF82EA857DA10E0CD(&iLocal_99);
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
						{
							UNK_0x0C8C0C840C2D1AD2(iLocal_91[1], UNK_0x16F2683693E537C9(), -1, 2060, 4);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_55 = 4;
					}
				}
				if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
				{
					if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_94, 1.5f, 1.5f, 5f, 0, 1, 0) && UNK_0x3366C505CA31A0C9(UNK_0x16F2683693E537C9()))
					{
						if (func_154())
						{
							func_62(0);
						}
						func_68();
						SYSTEM::WAIT(0);
						if (func_67(&uLocal_173, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_170 = 2;
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (UNK_0xE4EDC4B0E92C078B(iLocal_155[iLocal_63]))
								{
									UNK_0x142CC44DB769B57E(&(iLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							if (!UNK_0xE4EDC4B0E92C078B(iLocal_158))
							{
								iLocal_158 = func_152(bLocal_94, 0, 0);
							}
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
							{
								UNK_0x327AAEE25F323797(iLocal_91[0]);
							}
							iLocal_55 = 4;
						}
					}
				}
				if (iLocal_123 < UNK_0x1C0640BA9A7327B3())
				{
					if (func_154())
					{
						func_62(0);
					}
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1])) && UNK_0xC844350D5D58C99A(bLocal_94))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_99);
							UNK_0x0C8C0C840C2D1AD2(false, iLocal_91[1], -1, 2060, 4);
							UNK_0x5B1D360B9C6F0A09(false, bLocal_94, -1, -1, 1f, 1, 0);
							UNK_0x75ABDC5F81978924(iLocal_99);
							UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
							UNK_0xF82EA857DA10E0CD(&iLocal_99);
							UNK_0xDD353D0E9C789D0E(&iLocal_99);
							UNK_0x0C8C0C840C2D1AD2(false, iLocal_91[0], -1, 2060, 4);
							UNK_0xF96A174EE26D7588(false, iLocal_91[0], 0);
							UNK_0x5B1D360B9C6F0A09(false, bLocal_94, -1, false, 1f, 1, 0);
							UNK_0x75ABDC5F81978924(iLocal_99);
							UNK_0x78ADC381772E3D54(iLocal_91[1], iLocal_99);
							UNK_0xF82EA857DA10E0CD(&iLocal_99);
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (UNK_0xE4EDC4B0E92C078B(iLocal_155[iLocal_63]))
								{
									UNK_0x142CC44DB769B57E(&(iLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		case 4:
			if (iLocal_54 == 1)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
						{
							if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 8f, 8f, 4f, 0, 1, 0) || bLocal_121)
							{
								UNK_0x707318B0EDF0FF50(0);
								UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], UNK_0x16F2683693E537C9(), -1, 2060, 4);
								UNK_0x0C8C0C840C2D1AD2(iLocal_91[1], UNK_0x16F2683693E537C9(), -1, 2060, 4);
								UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iLocal_91[0], -1, 2060, 4);
								if ((UNK_0x1C0640BA9A7327B3() + 50000) > iLocal_123 || UNK_0x1BF376CEB706080F(UNK_0xD803B885F5E47A62()))
								{
									func_6();
									if (bLocal_121)
									{
										if (!func_4())
										{
											if (func_22() == 0)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
											else if (func_22() == 1)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
											else if (func_22() == 2)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
										}
									}
									else
									{
										iLocal_170++;
									}
								}
							}
						}
						break;
					case 1:
						if (!func_4())
						{
							if (func_151())
							{
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_99);
									UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, false, 0, 0, 0);
									UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
									UNK_0x75ABDC5F81978924(iLocal_99);
									UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
									UNK_0xF82EA857DA10E0CD(&iLocal_99);
									if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
									{
										UNK_0xDD353D0E9C789D0E(&iLocal_99);
										UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, false, 0, 0, 0);
										UNK_0xF96A174EE26D7588(false, iLocal_91[0], 0);
										UNK_0x78A77CDD64392938(false, 3000);
										UNK_0x96167B03C5A77156(false, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										UNK_0x96167B03C5A77156(false, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
										UNK_0x75ABDC5F81978924(iLocal_99);
										UNK_0x78ADC381772E3D54(iLocal_91[1], iLocal_99);
										UNK_0xF82EA857DA10E0CD(&iLocal_99);
									}
									func_150();
								}
							}
							else
							{
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
								{
									if (UNK_0x7069CC4DE1EA3FAA(UNK_0x16F2683693E537C9(), iLocal_91[0], 80f))
									{
										UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], UNK_0x16F2683693E537C9(), 10000, 2060, 4);
										UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iLocal_91[0], 10000, 2060, 4);
										func_6();
										SYSTEM::WAIT(0);
										iLocal_170++;
									}
									else
									{
										func_149(iLocal_91[0], &(uLocal_65[0]));
									}
								}
								if (!func_4())
								{
									iLocal_170++;
								}
							}
						}
						break;
					case 2:
						if (func_151())
						{
							iLocal_170 = 6;
						}
						else
						{
							iLocal_170++;
						}
						break;
					case 3:
						if (!bLocal_104)
						{
							if (SYSTEM::TIMERA() > 1500)
							{
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_99);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 2060, 4);
									UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
									UNK_0x78A77CDD64392938(false, 500);
									UNK_0x75ABDC5F81978924(iLocal_99);
									UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
									UNK_0xF82EA857DA10E0CD(&iLocal_99);
									SYSTEM::SETTIMERA(0);
									bLocal_104 = true;
								}
							}
						}
						func_149(iLocal_91[0], &(uLocal_65[0]));
						if (!func_4())
						{
							if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_170++;
							}
						}
						break;
					case 4:
						if (!func_151())
						{
							if (!func_4())
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
									if (UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
									{
										UNK_0x142CC44DB769B57E(&(iLocal_155[0]));
									}
									if (UNK_0xE4EDC4B0E92C078B(iLocal_155[1]))
									{
										UNK_0x142CC44DB769B57E(&(iLocal_155[1]));
									}
									if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
									{
										UNK_0x71EDC33E5A423750(bLocal_94, 1);
										if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
										{
											UNK_0x5B1D360B9C6F0A09(iLocal_91[0], bLocal_94, -1, false, 1f, 1, 0);
										}
									}
									iLocal_170++;
								}
							}
						}
						else
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_155[0]));
							}
							if (UNK_0xE4EDC4B0E92C078B(iLocal_155[1]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_155[1]));
							}
							iLocal_170++;
						}
						break;
					case 5:
						if (func_151())
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
							{
								if (!UNK_0x16102BEDC7435774(iLocal_91[0]))
								{
									UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
									UNK_0xE25C96A9C36BE5D2(iLocal_91[0], func_63());
									UNK_0x7BECA8F360B1686D(iLocal_91[0], 1);
									UNK_0xBF541ED34EA81209(iLocal_91[0], false);
								}
								UNK_0x0E2400AB9174FA81(255, bLocal_100, joaat("PLAYER"));
								func_148();
							}
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								if (UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) != bLocal_94)
								{
									if (!func_4())
									{
										if (func_22() == 0)
										{
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_55 = 7;
								}
							}
						}
						break;
					case 6:
						func_149(iLocal_91[0], &(uLocal_65[0]));
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (func_151())
							{
								if (!func_4())
								{
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_170 = 10;
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					case 7:
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (func_151())
							{
								if (!func_4())
								{
									if (func_22() == 0)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					case 10:
						if (func_151())
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
							{
								if (!UNK_0x16102BEDC7435774(iLocal_91[0]))
								{
									UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
									UNK_0xE25C96A9C36BE5D2(iLocal_91[0], func_63());
									UNK_0x7BECA8F360B1686D(iLocal_91[0], 1);
									UNK_0xBF541ED34EA81209(iLocal_91[0], false);
								}
								UNK_0x0E2400AB9174FA81(255, bLocal_100, joaat("PLAYER"));
								func_148();
							}
							iLocal_170++;
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					case 11:
						iLocal_55 = 7;
						break;
				}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
						{
							if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (UNK_0x7069CC4DE1EA3FAA(iLocal_91[0], UNK_0x16F2683693E537C9(), 50f))
								{
									UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iLocal_91[0], -1, 2060, 4);
									UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], UNK_0x16F2683693E537C9(), -1, 2060, 4);
									UNK_0x0C8C0C840C2D1AD2(iLocal_91[1], UNK_0x16F2683693E537C9(), -1, 2060, 4);
									if (func_154())
									{
										func_62(0);
									}
									func_6();
									SYSTEM::WAIT(0);
									if (func_67(&uLocal_173, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_170++;
									}
								}
								else
								{
									func_149(iLocal_91[0], &(uLocal_65[0]));
								}
							}
						}
						break;
					case 1:
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_99);
							UNK_0x78A77CDD64392938(false, 500);
							UNK_0x75ABDC5F81978924(iLocal_99);
							UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
							UNK_0xF82EA857DA10E0CD(&iLocal_99);
							SYSTEM::SETTIMERA(0);
							iLocal_170++;
						}
						break;
					case 2:
						func_149(iLocal_91[0], &(uLocal_65[0]));
						if (!UNK_0x3366C505CA31A0C9(UNK_0x16F2683693E537C9()))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
							{
								UNK_0x71EDC33E5A423750(bLocal_94, 1);
							}
						}
						if (SYSTEM::TIMERA() > 8000)
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_155[0]));
							}
							if (UNK_0xE4EDC4B0E92C078B(iLocal_155[1]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_155[1]));
							}
							if (!UNK_0xE4EDC4B0E92C078B(iLocal_158))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
								{
									iLocal_158 = func_152(bLocal_94, 0, 0);
									UNK_0x71EDC33E5A423750(bLocal_94, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
							{
								if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 20f, 20f, 20f, 0, 1, 0) && SYSTEM::TIMERA() > 9500)
								{
									iVar0 = UNK_0x09AC81E49EA267F7(false, 100);
									if (iVar0 < 60)
									{
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
										}
									}
									else if (func_67(&uLocal_173, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
						if (!UNK_0x437347B10A200C4B(bLocal_94, 0))
						{
							if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_94, 1))
							{
								iLocal_55 = 7;
							}
						}
						break;
				}
			}
			if (iLocal_54 == 1)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0x437347B10A200C4B(bLocal_94, 0))
				{
					if (SYSTEM::TIMERA() > 50000 || UNK_0xA30B8362589C124A(bLocal_94, -1, 0) == iLocal_91[0])
					{
						if (func_67(&uLocal_173, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_94, 0) && !UNK_0x5B17F10380E80E5B(bLocal_94))
							{
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
								{
									if (UNK_0xBBA8A868118C90ED(bLocal_94, -1, 0) && UNK_0xC42A92762C58E1B9(iLocal_91[0], bLocal_94, 0))
									{
										UNK_0x16A6C233289238AA(iLocal_91[0], bLocal_94, 0);
										iLocal_55 = 2;
									}
									else if (UNK_0xA30B8362589C124A(bLocal_94, -1, 0) == iLocal_91[0])
									{
										iLocal_55 = 2;
									}
									else if (UNK_0xA30B8362589C124A(bLocal_94, -1, 0) == UNK_0x16F2683693E537C9())
									{
										iLocal_55 = 7;
									}
									else
									{
										func_70(iLocal_91[0], 120000, 0);
										UNK_0x01E4BB5190DF7317(iLocal_91[0], 1193033728, 0);
										UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
										SYSTEM::WAIT(0);
										func_66();
									}
								}
							}
							else if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
							{
								func_70(iLocal_91[0], 120000, 0);
								UNK_0x01E4BB5190DF7317(iLocal_91[0], 1193033728, 0);
								UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
								SYSTEM::WAIT(0);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (SYSTEM::TIMERA() > 60000)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
						{
							if (UNK_0xBBA8A868118C90ED(bLocal_94, -1, 0))
							{
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
								{
									UNK_0xDD353D0E9C789D0E(&iLocal_99);
									UNK_0xBC43ED9FE28DB191(false);
									UNK_0x5B1D360B9C6F0A09(false, bLocal_94, -1, -1, 1f, 1, 0);
									UNK_0x75ABDC5F81978924(iLocal_99);
									UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
									UNK_0xF82EA857DA10E0CD(&iLocal_99);
								}
							}
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_99);
								UNK_0xBC43ED9FE28DB191(false);
								UNK_0x5B1D360B9C6F0A09(false, bLocal_94, -1, false, 1f, 1, 0);
								UNK_0x75ABDC5F81978924(iLocal_99);
								UNK_0x78ADC381772E3D54(iLocal_91[1], iLocal_99);
								UNK_0xF82EA857DA10E0CD(&iLocal_99);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (iLocal_54 == 1)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					if (!UNK_0x437347B10A200C4B(bLocal_94, 0))
					{
						if (UNK_0xC42A92762C58E1B9(iLocal_91[0], bLocal_94, 0))
						{
							if (UNK_0xD1960163A3042274(iLocal_91[0], 355471868) != 1 && UNK_0xD1960163A3042274(iLocal_91[0], 355471868) != 0)
							{
								UNK_0x5DAB50E08C3C504A(bLocal_94, 5f);
								UNK_0xDC2C59BD0989562B(bLocal_94, 1);
								UNK_0xDD353D0E9C789D0E(&iLocal_99);
								UNK_0x132B85BCE016BCA0(false, bLocal_94, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, 1);
								UNK_0x132B85BCE016BCA0(false, bLocal_94, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, 1);
								UNK_0x132B85BCE016BCA0(false, bLocal_94, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, 1);
								UNK_0x75ABDC5F81978924(iLocal_99);
								UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
								UNK_0xF82EA857DA10E0CD(&iLocal_99);
								UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
					{
						if (UNK_0x82CCEAB29E9451DD(iLocal_91[0], bLocal_94) && UNK_0x82CCEAB29E9451DD(iLocal_91[1], bLocal_94))
						{
							UNK_0xDC2C59BD0989562B(bLocal_94, 1);
							UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
							UNK_0x93D47DFD0AE94949(iLocal_91[1], -1);
							UNK_0xFADC0A217229F6B5(iLocal_91[1], true);
							iLocal_55 = 5;
						}
						if (!bLocal_101)
						{
							if (UNK_0x82CCEAB29E9451DD(iLocal_91[0], bLocal_94) && !UNK_0x82CCEAB29E9451DD(iLocal_91[1], bLocal_94))
							{
								UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
								UNK_0x93D47DFD0AE94949(iLocal_91[0], -1);
							}
							if (!UNK_0x82CCEAB29E9451DD(iLocal_91[0], bLocal_94) && UNK_0x82CCEAB29E9451DD(iLocal_91[1], bLocal_94))
							{
								UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
								UNK_0x93D47DFD0AE94949(iLocal_91[1], -1);
							}
							bLocal_101 = true;
						}
					}
				}
			}
			break;
		case 5:
			if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
					UNK_0xDD353D0E9C789D0E(&iLocal_99);
					UNK_0xE9362E4D600DD12A(false, bLocal_94, UNK_0x68E4ADDDDCD7BDDE(bLocal_94, 0f, 2f, 0f), 10f, 0, bLocal_98, 262144, 5f, -1f);
					UNK_0xD1F0F33C375B8446(false, bLocal_94, 24, 500);
					UNK_0xD1F0F33C375B8446(false, bLocal_94, 9, 1500);
					UNK_0xD1F0F33C375B8446(false, bLocal_94, 24, 500);
					UNK_0xD1F0F33C375B8446(false, bLocal_94, 11, 1500);
					UNK_0x132B85BCE016BCA0(false, bLocal_94, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, 1);
					UNK_0x75ABDC5F81978924(iLocal_99);
					UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
					UNK_0xF82EA857DA10E0CD(&iLocal_99);
					UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
				}
			}
			iLocal_55 = 6;
			break;
		case 6:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
			{
				if (UNK_0xD1960163A3042274(iLocal_91[0], 242628503) == 1)
				{
					if (UNK_0x4F1B602325013CC2(iLocal_91[0]) == 5)
					{
						func_66();
					}
				}
			}
			break;
		case 7:
			if (iLocal_54 == 1)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
				{
					if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[1], 50f, 50f, 50f, 0, 1, 0))
					{
						UNK_0x6DAD7906B73F064D(&(iLocal_91[1]));
					}
				}
				switch (iLocal_64)
				{
					case 0:
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (!UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
							{
								iLocal_155[0] = func_169(iLocal_91[0], 0, 145);
							}
							iLocal_64++;
							SYSTEM::SETTIMERA(0);
						}
						break;
					case 1:
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
							{
								if (func_151())
								{
									if (UNK_0xDF1306B443CD3D15(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), 0))
									{
										fLocal_164 = func_147(UNK_0x16F2683693E537C9(), iLocal_91[0], 1);
										iLocal_64++;
									}
								}
								else if (!bLocal_119)
								{
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										bLocal_119 = true;
									}
								}
							}
						}
						break;
					case 2:
						func_146();
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
						{
							if (func_151())
							{
								if (!bLocal_118)
								{
									if (func_147(UNK_0x16F2683693E537C9(), iLocal_91[0], 1) > (fLocal_164 + 5f))
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											bLocal_118 = true;
										}
									}
								}
							}
							else if (!bLocal_119)
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									bLocal_119 = true;
								}
							}
						}
						if (func_2())
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
							{
								UNK_0x71EDC33E5A423750(bLocal_94, 1);
							}
							if (UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_155[0]));
							}
							if (func_22() == 2 && !func_64())
							{
								if (!UNK_0xE4EDC4B0E92C078B(iLocal_103))
								{
									iLocal_103 = func_144(vLocal_87, 0);
									UNK_0xBC8E0A7390523199(iLocal_103, 269);
									func_142();
								}
							}
							bLocal_62 = true;
							iLocal_64++;
						}
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
						{
							if (func_147(UNK_0x16F2683693E537C9(), iLocal_91[0], 1) > 50f)
							{
								func_66();
							}
						}
						break;
					case 3:
						if (!func_4())
						{
							SYSTEM::WAIT(1500);
							UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
							if (func_22() == 0)
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_22() == 1)
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_22() == 2)
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					case 4:
						if (!func_4())
						{
							if (func_67(&uLocal_173, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_171 = UNK_0x1C0640BA9A7327B3();
								iLocal_64++;
							}
						}
						break;
					case 5:
						func_141();
						func_140();
						func_146();
						if (!bLocal_110)
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_171) > 7000)
							{
								if (!func_4())
								{
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_171 = UNK_0x1C0640BA9A7327B3();
										bLocal_110 = true;
									}
								}
							}
						}
						else if (func_2())
						{
							if (bLocal_109 && !bLocal_108)
							{
								func_139();
							}
							else
							{
								func_136();
								func_135();
								UNK_0xF3039DE1FDB4F6FD(1);
							}
						}
						if (func_134(vLocal_81))
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_133())
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
						{
							if (UNK_0x5A91F08DF773C39D(iLocal_91[0], vLocal_81, Global_22, true, true, 0))
							{
								if (UNK_0xE4EDC4B0E92C078B(iLocal_102))
								{
									UNK_0x142CC44DB769B57E(&iLocal_102);
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_103))
								{
									UNK_0x142CC44DB769B57E(&iLocal_103);
								}
								iLocal_55 = 8;
							}
						}
						break;
				}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_64)
				{
					case 0:
						if (!UNK_0x437347B10A200C4B(bLocal_94, 0))
						{
							if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_94, 1))
							{
								if (!UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
								{
									iLocal_155[0] = func_169(iLocal_91[0], 0, 145);
								}
								if (!UNK_0xE4EDC4B0E92C078B(iLocal_155[1]))
								{
									iLocal_155[1] = func_169(iLocal_91[1], 0, 145);
								}
								if (!func_4())
								{
									SYSTEM::SETTIMERA(0);
									if (func_22() == 0)
									{
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
								}
							}
						}
						break;
					case 1:
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0x437347B10A200C4B(bLocal_94, 0))
						{
							UNK_0xBC43ED9FE28DB191(iLocal_91[0]);
							UNK_0x5B1D360B9C6F0A09(iLocal_91[0], bLocal_94, 30000, 2, 2f, 1, 0);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_64++;
						break;
					case 2:
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]) && !UNK_0x437347B10A200C4B(bLocal_94, 0))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_99);
							UNK_0xBC43ED9FE28DB191(false);
							UNK_0xA8CC11FF8D2962D4(false, bLocal_94, 1.5f, -3f, 0f, 1f, 4000, 1036831949 /* Float: 0.1f */, 1);
							UNK_0x5B1D360B9C6F0A09(false, bLocal_94, 30000, true, 2f, 1, 0);
							UNK_0x75ABDC5F81978924(iLocal_99);
							UNK_0x78ADC381772E3D54(iLocal_91[1], iLocal_99);
							UNK_0xF82EA857DA10E0CD(&iLocal_99);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_64++;
						break;
					case 3:
						func_141();
						func_140();
						if (!bLocal_117)
						{
							if (!func_4())
							{
								if (func_67(&uLocal_173, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									bLocal_117 = true;
								}
							}
						}
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
							{
								if (!UNK_0x437347B10A200C4B(iLocal_91[0], 0) && !UNK_0x437347B10A200C4B(iLocal_91[1], 0))
								{
									if (UNK_0xC42A92762C58E1B9(iLocal_91[0], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) && UNK_0xC42A92762C58E1B9(iLocal_91[1], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
									{
										UNK_0x0E2400AB9174FA81(255, bLocal_100, joaat("PLAYER"));
										func_148();
										iLocal_63 = 0;
										while (iLocal_63 <= (iLocal_90 - 1))
										{
											if (UNK_0xE4EDC4B0E92C078B(iLocal_155[iLocal_63]))
											{
												UNK_0x142CC44DB769B57E(&(iLocal_155[iLocal_63]));
											}
											iLocal_63++;
										}
										if (UNK_0xE4EDC4B0E92C078B(iLocal_158))
										{
											UNK_0x142CC44DB769B57E(&iLocal_158);
										}
										if (func_22() == 2 && !func_64())
										{
											if (!UNK_0xE4EDC4B0E92C078B(iLocal_103))
											{
												iLocal_103 = func_144(vLocal_87, 0);
												UNK_0xBC8E0A7390523199(iLocal_103, 269);
												func_142();
											}
										}
										if (func_22() == 0)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
									}
								}
							}
						}
						break;
					case 4:
						func_141();
						func_140();
						if (!func_4())
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								bLocal_62 = true;
								UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
								iLocal_171 = UNK_0x1C0640BA9A7327B3();
								iLocal_64++;
							}
						}
						break;
					case 5:
						func_141();
						if (iLocal_346 == 0 || iLocal_346 == 9)
						{
							func_140();
						}
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_171) > 9000)
						{
							func_127();
						}
						if (iLocal_346 == 9 && ((UNK_0x1C0640BA9A7327B3() - iLocal_347) > 6000 && (UNK_0x1C0640BA9A7327B3() - iLocal_347) < 6500))
						{
							func_67(&uLocal_173, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_134(vLocal_81))
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_133())
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!UNK_0x437347B10A200C4B(bLocal_94, 0))
						{
							if ((!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1])) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_94, 0))
							{
								if (UNK_0x5A91F08DF773C39D(iLocal_91[0], vLocal_81, Global_22, true, true, 0) && UNK_0x5A91F08DF773C39D(iLocal_91[1], vLocal_81, Global_22, false, true, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					case 6:
						if (UNK_0xE4EDC4B0E92C078B(iLocal_102))
						{
							UNK_0x142CC44DB769B57E(&iLocal_102);
						}
						if (UNK_0xE4EDC4B0E92C078B(iLocal_103))
						{
							UNK_0x142CC44DB769B57E(&iLocal_103);
						}
						iLocal_55 = 8;
						break;
				}
			}
			break;
		case 8:
			iLocal_63 = 0;
			while (iLocal_63 <= (iLocal_90 - 1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[iLocal_63]))
				{
					UNK_0x11AD11297DC58CC7(iLocal_91[iLocal_63], false);
				}
				iLocal_63++;
			}
			if (iLocal_54 == 1)
			{
				if (func_126(1, 0, 1) && iLocal_124 == -1)
				{
					func_6();
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), (10.5f - 5f), 2, 0);
					}
					if (func_2())
					{
						if (UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) == bLocal_94)
						{
							iLocal_124 = 0;
						}
						else
						{
							iLocal_124 = 1;
						}
					}
					else
					{
						iLocal_124 = 2;
					}
				}
				if (iLocal_124 == 0)
				{
					func_125();
				}
				if (iLocal_124 == 1)
				{
					func_124();
				}
				if (iLocal_124 == 2)
				{
					func_123();
				}
				if (bLocal_130)
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					func_36();
				}
			}
			if (iLocal_54 == 2)
			{
				if (func_126(1, 0, 1) && iLocal_124 == -1)
				{
					func_68();
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), (10.5f - 4f), 2, 0);
						UNK_0x9E632F16E887F781(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						UNK_0x9E632F16E887F781(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_115(1, 1, 1, 0, 0, 0);
					while (func_4())
					{
						SYSTEM::WAIT(0);
					}
					if (func_2())
					{
						if (UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) == bLocal_94)
						{
							iLocal_124 = 0;
						}
					}
				}
				if (iLocal_124 == 0)
				{
					func_112();
				}
				else if (iLocal_124 == 1)
				{
					func_111();
				}
				else if (iLocal_124 == 2)
				{
					func_77();
				}
				if (bLocal_130)
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					func_36();
				}
			}
			break;
		case 9:
			break;
	}
}

void func_77()
{
	switch (iLocal_126)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
			{
				UNK_0x0A94A109271BE75A(iLocal_91[0]);
				UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], UNK_0x16F2683693E537C9(), 10000, 2060, 4);
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iLocal_91[0], 10000, 2060, 4);
			}
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
			{
				UNK_0x0A94A109271BE75A(iLocal_91[0]);
				UNK_0x0C8C0C840C2D1AD2(iLocal_91[1], UNK_0x16F2683693E537C9(), 10000, 2060, 4);
			}
			func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_126++;
			break;
		case 1:
			iLocal_126++;
			break;
		case 2:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					UNK_0x80AA372E04ED318D(iLocal_91[0], vLocal_84, 1f, -1, 1193033728, 1056964608 /* Float: 0.5f */);
					iLocal_125 = UNK_0x1C0640BA9A7327B3() + 500;
					iLocal_126++;
				}
			}
			break;
		case 3:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
				{
					UNK_0x96167B03C5A77156(iLocal_91[1], vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		case 4:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				iLocal_126++;
			}
			break;
		case 5:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_110(iParam0) == 3)
	{
		return;
	}
	if (func_110(iParam0) == 4)
	{
		return;
	}
	func_79(func_110(iParam0), 1, iParam1, iParam2, 0);
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_109();
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
					func_108(99, 1);
					func_107(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_107(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_107(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_88(5))
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
							func_107(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_107(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_107(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_107(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_107(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_107(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_107(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_107(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_107(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_107(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_107(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_107(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_107(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_107(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_107(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_107(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_107(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_107(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_107(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_108(95, iParam3);
					break;
				case 1:
					func_108(97, iParam3);
					break;
				case 2:
					func_108(96, iParam3);
					break;
			}
			func_108(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_82(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_82(bVar1);
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
					func_107(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_107(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_107(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_81(iParam0);
	if (Global_41431 == 15)
	{
		func_80(0);
	}
	return 1;
}

void func_80(bool bParam0)
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

void func_81(int iParam0)
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

void func_82(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_46(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_46(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_46(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_46(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_85(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_85(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_85(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_85(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_85(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_85(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_84() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_84() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_83(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_83(bool bParam0)
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

int func_84()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_86(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_86(int iParam0)
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

void func_87(int iParam0)
{
	func_108(93, iParam0);
	func_108(29, iParam0);
	func_108(30, iParam0);
}

bool func_88(bool bParam0)
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
		return func_90(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_90(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_90(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_90(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_89(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_89(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_89(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_89(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_89(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_89(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_84() /*10930*/].f_6174.f_10, bParam0);
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_86(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_90(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_47();
	}
	iVar1 = func_92(iParam0, bParam1);
	iVar2 = func_91(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_91(int iParam0)
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

int func_92(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_47();
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

int func_93(bool bParam0)
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
		func_45(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_94(27, 1);
	return 1;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1)
{
	if (func_28(14) && !func_106(iParam0))
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
	if (func_105(&Global_4270065))
	{
		if (func_103(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_96(&Global_4270065, iParam0))
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

bool func_96(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_28(14) && !func_106(iParam1))
	{
		return false;
	}
	if (func_103(uParam0, iParam1))
	{
		return false;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	func_99(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_97(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_28(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_98(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_98(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_99(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_100(uParam0, iVar0);
		iVar0++;
	}
	func_101(uParam0, (Global_4270064 - 0.5f));
}

void func_100(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_101(var uParam0, float fParam1)
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

float func_102(var uParam0)
{
	return uParam0->f_80;
}

bool func_103(var uParam0, int iParam1)
{
	return func_104(uParam0, iParam1) != -1;
}

int func_104(var uParam0, int iParam1)
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

bool func_105(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_106(int iParam0)
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

void func_107(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_108(int iParam0, int iParam1)
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

void func_109()
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

int func_110(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_111()
{
	bool bVar0;

	switch (iLocal_126)
	{
		case 0:
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0x8B38C0DAEEDB5F9C(bVar0))
				{
					if (UNK_0xDF1306B443CD3D15(bVar0, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
						{
							UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
							UNK_0x0A94A109271BE75A(iLocal_91[0]);
						}
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
						{
							UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
							UNK_0x0A94A109271BE75A(iLocal_91[1]);
						}
					}
					func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_126++;
				}
			}
			break;
		case 1:
			iLocal_126++;
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_99);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0x96167B03C5A77156(false, vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0x75ABDC5F81978924(iLocal_99);
				UNK_0x78ADC381772E3D54(iLocal_91[1], iLocal_99);
				UNK_0xF82EA857DA10E0CD(&iLocal_99);
				iLocal_125 = UNK_0x1C0640BA9A7327B3() + 1500;
				iLocal_126++;
			}
			break;
		case 3:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					UNK_0x96167B03C5A77156(iLocal_91[0], vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		case 4:
			if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_125 = UNK_0x1C0640BA9A7327B3() + 1000;
					iLocal_126 = 7;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_125 = UNK_0x1C0640BA9A7327B3() + 1500;
					iLocal_126 = 7;
				}
			}
			else if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_125 = UNK_0x1C0640BA9A7327B3() + 750;
					iLocal_126 = 7;
				}
			}
			break;
		case 5:
			iLocal_126++;
			break;
		case 6:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						UNK_0x96167B03C5A77156(iLocal_91[0], vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						iLocal_125 = UNK_0x1C0640BA9A7327B3() + 3500;
						iLocal_126++;
					}
				}
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						UNK_0x96167B03C5A77156(iLocal_91[0], vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						iLocal_125 = UNK_0x1C0640BA9A7327B3() + 3500;
						iLocal_126++;
					}
				}
			}
			break;
		case 7:
			if (!func_4())
			{
				iLocal_126++;
			}
			break;
		case 8:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_112()
{
	UNK_0x3FC8DBCC154CA56B();
	switch (iLocal_126)
	{
		case 0:
			UNK_0x8BCB70EB440DED83(0);
			UNK_0xBFE31971E49FA500(0);
			if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
			{
				if (UNK_0x8B38C0DAEEDB5F9C(bLocal_94))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
						{
							UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
							UNK_0x0A94A109271BE75A(iLocal_91[0]);
							UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iLocal_91[0], 4000, 2060, 4);
						}
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
						{
							UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
							UNK_0x0A94A109271BE75A(iLocal_91[1]);
						}
					}
					StringCopy(&cLocal_143, "", 24);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
					iLocal_126++;
				}
			}
			break;
		case 1:
			if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
			{
				iLocal_128 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0, 2);
				iLocal_129 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0, 2);
				UNK_0x91F5B0244AAE6222(iLocal_128, "HAND_SHAKE", 0.3f);
				UNK_0x91F5B0244AAE6222(iLocal_129, "HAND_SHAKE", 0.3f);
				UNK_0xF1E4C781086FABC1(iLocal_129, iLocal_128, 2500, 0, 0);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				UNK_0x536F1BE96C726C4B(vLocal_81, 8f, 1, 0, 0, false);
				UNK_0xA47B46945FF6DE74(bLocal_94, 1120.551f, 2647.307f, 36.9963f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_94, 179.7675f);
				UNK_0xB9FD7450C0DAB575(bLocal_94, 1084227584 /* Float: 5f */);
				iLocal_125 = UNK_0x1C0640BA9A7327B3() + 2500;
				iLocal_126++;
			}
			break;
		case 2:
			if (iLocal_125 - 500) < UNK_0x1C0640BA9A7327B3()
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
				{
					if (UNK_0x405E212DDE472467(iLocal_91[1], 0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_99);
						UNK_0x96167B03C5A77156(false, vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						UNK_0x75ABDC5F81978924(iLocal_99);
						UNK_0x78ADC381772E3D54(iLocal_91[1], iLocal_99);
						UNK_0xF82EA857DA10E0CD(&iLocal_99);
						UNK_0xFADC0A217229F6B5(iLocal_91[1], true);
					}
				}
			}
			if (iLocal_125 - 1000) < UNK_0x1C0640BA9A7327B3()
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					if (UNK_0x405E212DDE472467(iLocal_91[0], 0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_99);
						UNK_0x96167B03C5A77156(false, vLocal_84 - Vector(0f, 0f, 1f), 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						UNK_0x75ABDC5F81978924(iLocal_99);
						UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
						UNK_0xF82EA857DA10E0CD(&iLocal_99);
						UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
					}
				}
			}
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				UNK_0x86F44313DFA8F00C(iLocal_128, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(iLocal_129, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				UNK_0xF1E4C781086FABC1(iLocal_129, iLocal_128, 5000, 0, 0);
				UNK_0x486B4ADE317F0689();
				iLocal_125 = UNK_0x1C0640BA9A7327B3() + 6000;
				iLocal_126++;
			}
			break;
		case 3:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				UNK_0x86F44313DFA8F00C(iLocal_128, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(iLocal_129, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				UNK_0xF1E4C781086FABC1(iLocal_129, iLocal_128, 1500, 1, 1);
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
				{
					UNK_0xA47B46945FF6DE74(iLocal_91[0], 1141.156f, 2643.205f, 37.1487f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(iLocal_91[0], 262.7369f);
					UNK_0xA47B46945FF6DE74(iLocal_91[1], 1140.152f, 2644.149f, 37.1487f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(iLocal_91[1], 262.1522f);
				}
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
				}
				if (func_22() == 2)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_22() == 1)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_22() == 0)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_125 = UNK_0x1C0640BA9A7327B3() + 1700;
				iLocal_126++;
			}
			break;
		case 4:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				iLocal_126++;
			}
			break;
		case 5:
			iLocal_126 = 7;
			break;
		case 6:
			if (!func_4())
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_125 = UNK_0x1C0640BA9A7327B3() + 5500;
						iLocal_126++;
					}
				}
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_125 = UNK_0x1C0640BA9A7327B3() + 5500;
						iLocal_126++;
					}
				}
			}
			break;
		case 7:
			UNK_0x486B4ADE317F0689();
			UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), false);
			func_115(0, 1, 1, 0, 0, 0);
			UNK_0xEBA53F35D0085654(&(iLocal_91[0]));
			UNK_0xEBA53F35D0085654(&(iLocal_91[1]));
			if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
			{
				UNK_0x71EDC33E5A423750(bLocal_94, 7);
			}
			if (bLocal_131)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_94, 0))
				{
					UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					UNK_0x05CA0E7946B27A19(bLocal_94, 1);
					UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
			}
			else
			{
				UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
			}
			UNK_0xE3BB8E05FCEB3FBE(iLocal_128, false);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(-7f, 1065353216 /* Float: 1f */);
			UNK_0x8BCB70EB440DED83(1);
			UNK_0xBFE31971E49FA500(1);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			func_78(func_22(), 1, 40, 0, 1);
			bLocal_130 = true;
	}
	if (iLocal_126 != 0)
	{
		if (func_113(1000))
		{
			func_68();
			bLocal_131 = true;
			iLocal_126 = 7;
		}
	}
}

bool func_113(int iParam0)
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
			if (func_114())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_114()
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

void func_115(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_122(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_19())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_121(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_122(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_121(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_119(UNK_0xD803B885F5E47A62())) && !func_117(UNK_0xD803B885F5E47A62(), 0)) && !func_116()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_119(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_116()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_117(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_118(-1, 0) == 8;
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

int func_118(int iParam0, bool bParam1)
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

bool func_119(bool bParam0)
{
	if (func_117(bParam0, 0))
	{
		return true;
	}
	if (func_120())
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

bool func_120()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_121(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_122(int iParam0)
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

void func_123()
{
	switch (iLocal_126)
	{
		case 0:
			if (!func_4())
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					UNK_0x0A94A109271BE75A(iLocal_91[0]);
					UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], UNK_0x16F2683693E537C9(), 10000, 2060, 4);
					UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iLocal_91[0], 10000, 2060, 4);
				}
				if (bLocal_108)
				{
					func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_126++;
			}
			break;
		case 1:
			iLocal_125 = UNK_0x1C0640BA9A7327B3() + 3000;
			iLocal_126++;
			break;
		case 2:
			if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_99);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1800);
				UNK_0x96167B03C5A77156(false, vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_99);
				UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
				UNK_0xF82EA857DA10E0CD(&iLocal_99);
				UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
				iLocal_125 = UNK_0x1C0640BA9A7327B3() + 2000;
				iLocal_126++;
			}
			break;
		case 4:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				iLocal_126++;
			}
			break;
		case 5:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_124()
{
	bool bVar0;

	switch (iLocal_126)
	{
		case 0:
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0x8B38C0DAEEDB5F9C(bVar0) && !func_4())
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
					{
						UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
						UNK_0x0A94A109271BE75A(iLocal_91[0]);
						UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], UNK_0x16F2683693E537C9(), 10000, 2060, 4);
						UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		case 1:
			iLocal_126++;
			break;
		case 2:
			iLocal_126++;
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_99);
				UNK_0x75CDA8644CD3B5F5(false, 0, 4194304);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1800);
				UNK_0x96167B03C5A77156(false, vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_99);
				UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
				UNK_0xF82EA857DA10E0CD(&iLocal_99);
				UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
			}
			func_70(iLocal_91[0], 120000, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			iLocal_125 = UNK_0x1C0640BA9A7327B3() + 3000;
			iLocal_126++;
			break;
		case 4:
			iLocal_125 = UNK_0x1C0640BA9A7327B3() + 3000;
			if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		case 5:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				iLocal_126++;
			}
			break;
		case 6:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_125()
{
	switch (iLocal_126)
	{
		case 0:
			if (UNK_0xDF1306B443CD3D15(bLocal_94, 0))
			{
				if (UNK_0x8B38C0DAEEDB5F9C(bLocal_94) && !func_4())
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
					{
						UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
						UNK_0x0A94A109271BE75A(iLocal_91[0]);
						UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], UNK_0x16F2683693E537C9(), 10000, 2060, 4);
						UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), iLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		case 1:
			iLocal_126++;
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_99);
				UNK_0x75CDA8644CD3B5F5(false, 0, 4194304);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 1800);
				UNK_0x96167B03C5A77156(false, vLocal_84, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_99);
				UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
				UNK_0xF82EA857DA10E0CD(&iLocal_99);
				UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
				func_70(iLocal_91[0], 120000, 0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				iLocal_125 = UNK_0x1C0640BA9A7327B3() + 3000;
				iLocal_126++;
			}
			break;
		case 3:
			iLocal_125 = UNK_0x1C0640BA9A7327B3() + 3000;
			if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		case 4:
			if (iLocal_125 < UNK_0x1C0640BA9A7327B3())
			{
				iLocal_126++;
			}
			break;
		case 5:
			iLocal_126++;
			break;
		case 6:
			iLocal_126++;
			break;
		case 7:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

bool func_126(bool bParam0, bool bParam1, bool bParam2)
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

void func_127()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if ((UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_enter_m", 3) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_idle_m", 3)) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		bVar0 = false;
		iVar1 = UNK_0x5A0033B025D45F1B();
		if (iVar1 != 0)
		{
			iVar2 = UNK_0xA4FD7964FEE91ED8(iVar1);
			if (iVar2 == 4)
			{
				bVar0 = true;
			}
		}
		if ((((((((func_132(64) || UNK_0x06F8112AA79C53D9(0, 86)) || UNK_0x06F8112AA79C53D9(0, 71)) || UNK_0x06F8112AA79C53D9(0, 72)) || UNK_0x06F8112AA79C53D9(0, 76)) || UNK_0x06F8112AA79C53D9(0, 73)) || UNK_0x06F8112AA79C53D9(0, 68)) || UNK_0x06F8112AA79C53D9(0, 75)) || bVar0)
		{
			UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
		}
	}
	switch (iLocal_346)
	{
		case 0:
			if (func_131())
			{
				UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], iLocal_91[1], -1, 2060, 4);
				UNK_0x0C8C0C840C2D1AD2(iLocal_91[1], iLocal_91[0], -1, 2060, 4);
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_99);
					UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, false, 0, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_99);
					UNK_0x78ADC381772E3D54(iLocal_91[0], iLocal_99);
					UNK_0xF82EA857DA10E0CD(&iLocal_99);
					UNK_0xDD353D0E9C789D0E(&iLocal_99);
					UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, false, 0, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_99);
					UNK_0x78ADC381772E3D54(iLocal_91[1], iLocal_99);
					UNK_0xF82EA857DA10E0CD(&iLocal_99);
					iLocal_347 = UNK_0x1C0640BA9A7327B3();
					iLocal_346++;
				}
			}
			break;
		case 1:
			if (!func_4())
			{
				iLocal_347 = UNK_0x1C0640BA9A7327B3();
				iLocal_346++;
			}
			break;
		case 2:
			if (func_131())
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_347) > 5000)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_347 = UNK_0x1C0640BA9A7327B3();
						iLocal_346++;
					}
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_347) > 15000)
			{
				if (func_131())
				{
					UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, false, 0, 0, 0);
					iLocal_346++;
				}
			}
			break;
		case 4:
			if (func_131())
			{
				func_129();
				if (UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, false, 0, 0, 0);
						UNK_0xC6EB89C59F2AF6B8(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, false, 0, 0, 0);
						iLocal_347 = UNK_0x1C0640BA9A7327B3();
						iLocal_346++;
					}
				}
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
			{
				UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
				UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
				iLocal_346 = 3;
			}
			break;
		case 5:
			if (func_131())
			{
				func_129();
				func_128();
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(iLocal_91[1], 0), 0))
				{
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_347) > 15000)
					{
						bVar3 = false;
						iVar4 = UNK_0x5A0033B025D45F1B();
						if (iVar4 != 0)
						{
							iVar5 = UNK_0xA4FD7964FEE91ED8(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_99);
							UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, false, 0, 0, 0);
							UNK_0xC6EB89C59F2AF6B8(false, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, false, 0, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_99);
							UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iLocal_99);
							UNK_0xF82EA857DA10E0CD(&iLocal_99);
						}
						if (func_22() == 0)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_347 = UNK_0x1C0640BA9A7327B3();
								iLocal_346++;
							}
						}
						else if (func_22() == 1)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_347 = UNK_0x1C0640BA9A7327B3();
								iLocal_346++;
							}
						}
						else if (func_22() == 2)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_347 = UNK_0x1C0640BA9A7327B3() + 14000;
								iLocal_346++;
							}
						}
					}
				}
			}
			break;
		case 6:
			func_129();
			func_128();
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_347) > 5000 && func_131())
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(iLocal_91[1], 0), 0))
				{
					if (UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (UNK_0x8CA9406E01C7EE58(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, false, 0, 0, 0);
							}
							UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, false, 0, 0, 0);
							UNK_0xC6EB89C59F2AF6B8(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, false, 0, 0, 0);
							iLocal_346++;
						}
					}
				}
			}
			break;
		case 7:
			func_129();
			if (func_131())
			{
				if (UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && UNK_0x8CA9406E01C7EE58(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						UNK_0xDFC6BA855748EB10(UNK_0x6937EA2286828455(iLocal_91[0], 0), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_347 = UNK_0x1C0640BA9A7327B3();
						iLocal_346++;
					}
				}
			}
			break;
		case 8:
			func_129();
			if (func_131())
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(iLocal_91[1], 0), 0))
				{
					if (UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (UNK_0x8CA9406E01C7EE58(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, false, 0, 0, 0);
							UNK_0xC6EB89C59F2AF6B8(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, false, 0, 0, 0);
							iLocal_346 = 6;
						}
					}
				}
			}
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_347) > 10000)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
				{
					UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
					UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
					iLocal_347 = UNK_0x1C0640BA9A7327B3();
					iLocal_346++;
				}
			}
			break;
	}
}

void func_128()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(iLocal_91[0], 0), 0))
		{
			if (UNK_0xB4ECF989E2C1DAC8(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((UNK_0x8CA9406E01C7EE58(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && UNK_0x8CA9406E01C7EE58(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (UNK_0x8CA9406E01C7EE58(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && UNK_0x8CA9406E01C7EE58(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (UNK_0x8CA9406E01C7EE58(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && UNK_0x8CA9406E01C7EE58(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (UNK_0x8CA9406E01C7EE58(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && UNK_0x8CA9406E01C7EE58(iLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					UNK_0xDFC6BA855748EB10(UNK_0x6937EA2286828455(iLocal_91[0], 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					UNK_0xCEAA091B490F8407(-1, "SUSPENSION_SCRIPT_FORCE", UNK_0x6937EA2286828455(iLocal_91[0], 0), false, 0, 0);
				}
			}
		}
	}
}

void func_129()
{
	UNK_0xC2127C0F64D6A3B9();
	func_130();
}

void func_130()
{
	Global_22211.f_134 = 1;
}

bool func_131()
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
	{
		if (UNK_0x405E212DDE472467(iLocal_91[1], 0))
		{
			bVar0 = UNK_0x6937EA2286828455(iLocal_91[1], 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
				{
					if (UNK_0xC42A92762C58E1B9(iLocal_91[0], bVar0, 0))
					{
						if (UNK_0xA30B8362589C124A(bVar0, 2, 0) == iLocal_91[0] && UNK_0xA30B8362589C124A(bVar0, true, 0) == iLocal_91[1])
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

bool func_132(int iParam0)
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

bool func_133()
{
	if (func_22() == 2)
	{
		if (func_65())
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

bool func_134(vector3 vParam0)
{
	if (func_22() == 2)
	{
		if (func_65() && !Global_31008)
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

void func_135()
{
	if (!bLocal_108)
	{
		if ((((((((!func_33("REDR1_SWV") && !func_33("REDR1_COM")) && !func_33("REDR1_BANT1")) && !func_33("REDR1_SIK")) && !func_33("REDR2_DC")) && !func_33("REDR1_OFFR")) && !func_33("REDR2_OFFR")) && !func_33("REDR1_CULT")) && !func_33("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((bLocal_110 && !bLocal_134) && (UNK_0x1C0640BA9A7327B3() - iLocal_171) > 9000)
		{
			if (!func_4())
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					bLocal_134 = true;
				}
			}
		}
	}
	if (bLocal_134 && !bLocal_135)
	{
		if (!func_4())
		{
			if (func_22() == 0)
			{
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_22() == 1)
			{
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_22() == 2)
			{
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_149 = UNK_0x1C0640BA9A7327B3() + 6000;
			bLocal_135 = true;
		}
	}
	if (!bLocal_108)
	{
		if ((bLocal_134 && !bLocal_133) && iLocal_149 < UNK_0x1C0640BA9A7327B3())
		{
			if (!func_4())
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					bLocal_135 = false;
					bLocal_133 = true;
				}
			}
		}
	}
	else if ((bLocal_108 && !bLocal_132) && iLocal_149 < UNK_0x1C0640BA9A7327B3())
	{
		if (!func_4())
		{
			if (func_67(&uLocal_173, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				bLocal_135 = false;
				bLocal_132 = true;
			}
		}
	}
}

void func_136()
{
	if (func_2() && iLocal_111 < 2)
	{
		if ((UNK_0xE0A10C635E6C44CF(UNK_0xD803B885F5E47A62()) > 0 && UNK_0xE0A10C635E6C44CF(UNK_0xD803B885F5E47A62()) < 100) || UNK_0xE608C809F9416F00(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
		{
			if (!func_33("REDR1_SWV"))
			{
				func_5(0);
				func_68();
				SYSTEM::WAIT(0);
				func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_163 += 6;
			}
		}
		func_137(vLocal_160, (UNK_0x1C0640BA9A7327B3() - iLocal_159));
	}
	if (iLocal_163 > 17)
	{
		bLocal_109 = true;
	}
}

void func_137(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (func_2())
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			vVar0 = { UNK_0x698705F356FA8F72(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) };
		}
	}
	vVar3 = { vVar0 - vParam0 };
	vVar3 = { func_138(vVar3, iParam3) };
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			if (!UNK_0xF79A7BCA9E38BBBC(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) && !func_33("REDR1_SWV"))
			{
				if (iLocal_165 == -1)
				{
					iLocal_165 = UNK_0x1C0640BA9A7327B3() + 400;
				}
				else if (iLocal_165 < UNK_0x1C0640BA9A7327B3())
				{
					iLocal_163 += 3;
					func_5(0);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_165 = -1;
			}
		}
	}
	if (vVar3.y > 0.025f)
	{
		iLocal_163++;
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.y < -0.025f)
	{
		iLocal_163++;
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.x > 0.025f)
	{
		iLocal_163++;
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar3.x < -0.025f)
	{
		iLocal_163++;
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_138(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	vVar0.x = (vParam0.x / IntToFloat(iParam3));
	vVar0.f_1 = (vParam0.y / IntToFloat(iParam3));
	vVar0.f_2 = (vParam0.z / IntToFloat(iParam3));
	return vVar0;
}

void func_139()
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
	{
		switch (iLocal_111)
		{
			case 0:
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
					{
						UNK_0x920D29D81E211607(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), true);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_111++;
				}
				break;
			case 1:
				if (SYSTEM::TIMERB() > 3000 || !func_4())
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
					{
						UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
						UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_1", bLocal_114, 8f, -8f, -1, 0, false, 0, 0, 0);
						iLocal_111++;
					}
				}
				break;
			case 2:
				if (UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_1", bLocal_114, 3))
				{
					fVar0 = UNK_0x8CA9406E01C7EE58(iLocal_91[0], "random@drunk_driver_1", bLocal_114);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!bLocal_105)
						{
							UNK_0x97A0DB46CA749F31("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216 /* Float: 1f */, 0, 0, 0);
							bLocal_105 = true;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!bLocal_106)
						{
							UNK_0x97A0DB46CA749F31("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216 /* Float: 1f */, 0, 0, 0);
							bLocal_106 = true;
							if (func_22() == 0)
							{
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_22() == 1)
							{
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_22() == 2)
							{
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!bLocal_107)
						{
							UNK_0x97A0DB46CA749F31("scr_puke_in_car", iLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216 /* Float: 1f */, 0, 0, 0);
							bLocal_107 = true;
						}
					}
					if (UNK_0x8CA9406E01C7EE58(iLocal_91[0], "random@drunk_driver_1", bLocal_114) > 0.8f)
					{
						iLocal_111++;
					}
				}
				break;
			case 3:
				if (!UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_1", bLocal_114, 3))
				{
				}
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_1", bLocal_113, 2f, -4f, -1, 1, false, 0, 0, 0);
					bLocal_105 = false;
					iLocal_111++;
				}
				break;
			case 4:
				UNK_0x55D0A2DB35045A35(iLocal_112);
				bLocal_108 = true;
				break;
		}
	}
}

void func_140()
{
	if (UNK_0x4024663A44BC1535(UNK_0x16F2683693E537C9()))
	{
		if (!bLocal_168)
		{
			iLocal_166 = UNK_0x1C0640BA9A7327B3();
			bLocal_168 = true;
		}
		else
		{
			iLocal_167 = UNK_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_167 = 0;
		bLocal_168 = false;
		bLocal_169 = false;
	}
	if ((iLocal_167 - iLocal_166) > 50000 && !bLocal_169)
	{
		if (iLocal_54 == 1)
		{
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		bLocal_169 = true;
	}
	if ((iLocal_167 - iLocal_166) > 60000 && bLocal_169)
	{
		if (iLocal_54 == 2)
		{
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
		{
			UNK_0x01E4BB5190DF7317(iLocal_91[0], 1193033728, 0);
			func_70(iLocal_91[0], 120000, 0);
			UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
			if (UNK_0x16102BEDC7435774(iLocal_91[0]))
			{
				UNK_0x0A94A109271BE75A(iLocal_91[0]);
			}
			UNK_0xA8CC11FF8D2962D4(iLocal_91[1], iLocal_91[0], 0f, 1f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1);
			func_70(iLocal_91[1], 120000, 0);
			UNK_0xFADC0A217229F6B5(iLocal_91[1], true);
			if (UNK_0x16102BEDC7435774(iLocal_91[1]))
			{
				UNK_0x0A94A109271BE75A(iLocal_91[1]);
			}
		}
		func_66();
	}
}

void func_141()
{
	if (iLocal_54 == 1)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
		{
			if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_66();
			}
			if (func_151() || UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0x16102BEDC7435774(iLocal_91[0]))
				{
					UNK_0xE25C96A9C36BE5D2(iLocal_91[0], func_63());
					UNK_0x7BECA8F360B1686D(iLocal_91[0], 1);
					UNK_0xBF541ED34EA81209(iLocal_91[0], false);
				}
			}
			else if (UNK_0x16102BEDC7435774(iLocal_91[0]))
			{
				UNK_0x0A94A109271BE75A(iLocal_91[0]);
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0xC42A92762C58E1B9(iLocal_91[0], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
				{
					if ((!UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_1", bLocal_113, 3) && !UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_1", bLocal_114, 3)) && !UNK_0x81A5359F25512A04(iLocal_91[0]))
					{
						UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_1", bLocal_113, 2f, -4f, -1, 1, false, 0, 0, 0);
					}
					if (func_154())
					{
						func_62(0);
						bLocal_120 = false;
					}
				}
				else if (UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_1", bLocal_113, 3))
				{
					UNK_0x5B8BE59CB25E8968(iLocal_91[0], 0, 0);
				}
			}
			else
			{
				if (UNK_0x405E212DDE472467(iLocal_91[0], 0))
				{
					if (UNK_0xB4ECF989E2C1DAC8(iLocal_91[0], "random@drunk_driver_1", bLocal_113, 3))
					{
						UNK_0x5B8BE59CB25E8968(iLocal_91[0], 0, 0);
					}
				}
				if (func_4() && !bLocal_120)
				{
					func_62(1);
					bLocal_120 = true;
				}
			}
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 8f, 8f, 8f, 0, 1, 0) || UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
				{
					UNK_0x142CC44DB769B57E(&(iLocal_155[0]));
				}
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_102))
				{
					iLocal_102 = func_144(vLocal_81, 1);
				}
			}
			else
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_155[0]))
				{
					iLocal_155[0] = func_169(iLocal_91[0], 0, 145);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_102))
				{
					UNK_0x142CC44DB769B57E(&iLocal_102);
				}
			}
		}
	}
	if (iLocal_54 == 2)
	{
		if ((!UNK_0x437347B10A200C4B(bLocal_94, 0) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
		{
			if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 150f, 150f, 150f, 0, 1, 0) || !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (UNK_0xC844350D5D58C99A(iLocal_91[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
					{
						if (UNK_0x16102BEDC7435774(iLocal_91[0]))
						{
							UNK_0x0A94A109271BE75A(iLocal_91[0]);
						}
						UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
						UNK_0xF3268524E9BE6D6E(iLocal_91[0], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						func_70(iLocal_91[0], 120000, 0);
						UNK_0xFADC0A217229F6B5(iLocal_91[0], true);
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_91[1]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[1]))
					{
						if (UNK_0x16102BEDC7435774(iLocal_91[1]))
						{
							UNK_0x0A94A109271BE75A(iLocal_91[1]);
						}
						UNK_0xA3BF0AA5A2608191(iLocal_91[1]);
						UNK_0xF3268524E9BE6D6E(iLocal_91[1], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						func_70(iLocal_91[1], 120000, 0);
						UNK_0xFADC0A217229F6B5(iLocal_91[1], true);
					}
				}
				func_66();
			}
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_94, 0))
			{
				if (UNK_0xC42A92762C58E1B9(iLocal_91[0], bLocal_94, 0) && UNK_0xC42A92762C58E1B9(iLocal_91[1], bLocal_94, 0))
				{
					if (func_154())
					{
						func_62(0);
						bLocal_120 = false;
					}
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_102))
					{
						iLocal_102 = func_144(vLocal_81, 1);
					}
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_158))
				{
					UNK_0x142CC44DB769B57E(&iLocal_158);
				}
			}
			else
			{
				if ((func_4() && !bLocal_120) && iLocal_64 > 3)
				{
					func_62(1);
					bLocal_120 = true;
				}
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_158))
				{
					iLocal_158 = func_152(bLocal_94, 0, 0);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_102))
				{
					UNK_0x142CC44DB769B57E(&iLocal_102);
				}
			}
		}
	}
}

void func_142()
{
	if (func_22() == 2)
	{
		if (!Global_31007)
		{
			func_143("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_143(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_144(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_145(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_145(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_146()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
		{
			if (!func_151())
			{
				if (UNK_0x16102BEDC7435774(iLocal_91[0]))
				{
					UNK_0x0A94A109271BE75A(iLocal_91[0]);
				}
				if (UNK_0xD1960163A3042274(iLocal_91[0], 1227113341) != 1 && UNK_0xD1960163A3042274(iLocal_91[0], 1227113341) != 0)
				{
					UNK_0xE185F110925D87DB(iLocal_91[0], UNK_0x16F2683693E537C9(), -1, 6f, 2f, 1073741824 /* Float: 2f */, 0);
				}
				if (UNK_0x405E212DDE472467(iLocal_91[0], 0))
				{
					UNK_0x75CDA8644CD3B5F5(iLocal_91[0], 0, 0);
				}
				if (!bLocal_122)
				{
					if (!func_4())
					{
						func_67(&uLocal_173, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						bLocal_122 = true;
					}
				}
			}
			else
			{
				bLocal_122 = false;
				if (UNK_0xD1960163A3042274(iLocal_91[0], 1227113341) == 1 && UNK_0xD1960163A3042274(iLocal_91[0], 1227113341) == 0)
				{
					UNK_0xA3BF0AA5A2608191(iLocal_91[0]);
				}
			}
		}
		else if (!UNK_0x16102BEDC7435774(iLocal_91[0]))
		{
			UNK_0xE25C96A9C36BE5D2(iLocal_91[0], func_63());
			UNK_0x7BECA8F360B1686D(iLocal_91[0], 1);
			UNK_0xBF541ED34EA81209(iLocal_91[0], false);
		}
	}
}

float func_147(bool bParam0, bool bParam1, int iParam2)
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

void func_148()
{
	if (!func_64())
	{
		if (func_22() == 2)
		{
			Global_31005 = 1;
		}
	}
}

void func_149(bool bParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_99);
				UNK_0xBC43ED9FE28DB191(false);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2060, 4);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
				UNK_0x75ABDC5F81978924(iLocal_99);
				UNK_0x78ADC381772E3D54(bParam0, iLocal_99);
				UNK_0xF82EA857DA10E0CD(&iLocal_99);
				*uParam1++;
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				if (!UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_150()
{
	if (func_22() == 0)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
	else if (func_22() == 1)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
	else if (func_22() == 2)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
}

bool func_151()
{
	int iVar0;

	if (iLocal_54 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_54 == 2)
	{
		iVar0 = 2;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			if ((((((!UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()) && !UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9())) && !UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9())) && !UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9())) && !UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9())) && !UNK_0xEFAE7FB688EBF2B5(UNK_0x16F2683693E537C9())) && !UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("RHINO")))
			{
				if (UNK_0xD6DF381716822EFE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) >= iVar0)
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
			if (((((!UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9()))) && !UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && !UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && !UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))) && UNK_0x134B62B726CEC8E6(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())) != joaat("RHINO"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_152(bool bParam0, bool bParam1, bool bParam2)
{
	return func_153(bParam0, !bParam1, bParam2);
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_145(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_145(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_145(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_154()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_155()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!bLocal_115)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					bLocal_115 = true;
				}
			}
			if (!bLocal_116)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					bLocal_116 = true;
				}
			}
		}
	}
}

void func_156()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_151))
	{
		UNK_0x142CC44DB769B57E(&iLocal_151);
	}
	iLocal_63 = 0;
	while (iLocal_63 <= (iLocal_90 - 1))
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_155[iLocal_63]))
		{
			iLocal_155[iLocal_63] = func_169(iLocal_91[iLocal_63], 0, 145);
			UNK_0xF2D30B8ACAF12A39(iLocal_155[iLocal_63], false);
		}
		iLocal_63++;
	}
}

void func_157()
{
	UNK_0x871665896C890C7F();
	Global_21797 = 0;
}

void func_158(bool bParam0)
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

int func_159(bool bParam0)
{
	if (func_162())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_49(Global_111627))
		{
			func_160(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_49(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_143(func_161(iParam0), -1);
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
					func_143(func_161(iParam0), -1);
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
					func_143(func_161(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

bool func_161(int iParam0)
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

bool func_162()
{
	switch (func_163(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_163(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_167(0))
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
		if (!func_165(iParam2))
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
			func_164(uParam0, iParam4);
		}
	}
	return 2;
}

void func_164(var uParam0, int iParam1)
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

bool func_165(int iParam0)
{
	return func_166(iParam0, Global_41431);
}

int func_166(int iParam0, int iParam1)
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

bool func_167(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_165(iParam0))
	{
		return false;
	}
	return true;
}

int func_168(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_21798 = 1;
	Global_21802 = 0;
	Global_21800 = iParam7;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

int func_169(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_153(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_170()
{
	if (func_172())
	{
		bLocal_113 = "drunk_idle_van";
		bLocal_114 = "vomit_van";
	}
	else if (func_171())
	{
		bLocal_113 = "drunk_idle_low";
		bLocal_114 = "vomit_low";
	}
	else
	{
		bLocal_113 = "drunk_idle";
		bLocal_114 = "vomit_outside";
	}
}

bool func_171()
{
	int iVar0;

	if (UNK_0x405E212DDE472467(iLocal_91[0], 0))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x6937EA2286828455(iLocal_91[0], 0), 0))
		{
			iVar0 = UNK_0x1F099C9E2AE4874D(UNK_0x6937EA2286828455(iLocal_91[0], 0));
			if ((((((((((iVar0 == joaat("LAYOUT_LOW") || iVar0 == joaat("LAYOUT_LOW_BFINJECTION")) || iVar0 == joaat("LAYOUT_LOW_CHEETAH")) || iVar0 == joaat("LAYOUT_LOW_DUNE")) || iVar0 == joaat("LAYOUT_LOW_INFERNUS")) || iVar0 == joaat("LAYOUT_LOW_RESTRICTED")) || iVar0 == joaat("LAYOUT_LOW_SENTINEL2")) || iVar0 == joaat("LAYOUT_LOW_BLADE")) || iVar0 == joaat("LAYOUT_LOW_TURISMOR")) || iVar0 == joaat("LAYOUT_LOW_FURORE")) || iVar0 == joaat("LAYOUT_LOW_OSIRIS"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_172()
{
	int iVar0;

	if (UNK_0x405E212DDE472467(iLocal_91[0], 0))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x6937EA2286828455(iLocal_91[0], 0), 0))
		{
			iVar0 = UNK_0x1F099C9E2AE4874D(UNK_0x6937EA2286828455(iLocal_91[0], 0));
			if (((((((((((iVar0 == joaat("LAYOUT_VAN") || iVar0 == joaat("LAYOUT_VAN_BODHI")) || iVar0 == joaat("LAYOUT_VAN_BOXVILLE")) || iVar0 == joaat("LAYOUT_VAN_CADDY")) || iVar0 == joaat("LAYOUT_VAN_JOURNEY")) || iVar0 == joaat("LAYOUT_VAN_MULE")) || iVar0 == joaat("LAYOUT_VAN_POLICE")) || iVar0 == joaat("LAYOUT_VAN_TRASH")) || iVar0 == joaat("LAYOUT_4X4")) || iVar0 == joaat("LAYOUT_BISON")) || iVar0 == joaat("LAYOUT_RANGER")) || iVar0 == joaat("LAYOUT_RANGER_SWAT"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_173()
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

void func_174()
{
	if (!bLocal_61)
	{
		func_176(39, 1);
		func_176(40, 1);
		func_176(41, 1);
		func_176(42, 1);
		func_176(43, 1);
		func_176(44, 1);
		UNK_0x536F1BE96C726C4B(vLocal_68, 8f, 1, 0, 0, false);
		UNK_0x7D6CA5F52B3748BF(vLocal_68 - Vector(8f, 8f, 8f), vLocal_68 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		UNK_0xE342F209E49C5314(vLocal_76 - Vector(10f, 15f, 15f), vLocal_76 + Vector(10f, 15f, 15f), false, 1);
		UNK_0xE342F209E49C5314(vLocal_81 - Vector(10f, 15f, 15f), vLocal_81 + Vector(10f, 15f, 15f), false, 1);
		UNK_0x5D96D8530B3D0904(&uLocal_150, 5);
		if (func_22() == 0)
		{
			func_175(&uLocal_173, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		}
		else if (func_22() == 1)
		{
			func_175(&uLocal_173, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		}
		else if (func_22() == 2)
		{
			func_175(&uLocal_173, 2, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
		}
		UNK_0xF63400DBE3303D26("rghDrunkPeds", &bLocal_100);
		bLocal_94 = UNK_0x122AAB0B1D6F55AD(bLocal_98, vLocal_76, bLocal_79, true, true, false);
		UNK_0x2F625BED8BF7F26A(bLocal_94);
		UNK_0xB9FD7450C0DAB575(bLocal_94, 1084227584 /* Float: 5f */);
		UNK_0xAB8E2DDC7AF955E0(bLocal_98, true);
		UNK_0x71EDC33E5A423750(bLocal_94, 3);
		UNK_0xF3F7BF451A720FDF(bLocal_94, 1);
		iLocal_80 = UNK_0x7F6DC62EA9922664(bLocal_94);
		iLocal_91[0] = UNK_0x36F2404464202779(26, bLocal_96, vLocal_68, bLocal_71, 1, true);
		UNK_0x11AD11297DC58CC7(iLocal_91[0], true);
		UNK_0x6DF7BF67E86AAE86(iLocal_91[0], bLocal_100);
		UNK_0x4E885A246A9D983A(iLocal_91[0], 185, true);
		UNK_0xBAFED2F6486F771A(iLocal_91[0], 65536, true);
		UNK_0x71199B01895C6202(bLocal_96);
		UNK_0x33CE5A9E32EA10B2(iLocal_91[0], 1);
		iLocal_91[1] = UNK_0x36F2404464202779(26, bLocal_97, vLocal_72, bLocal_75, 1, true);
		UNK_0x11AD11297DC58CC7(iLocal_91[1], true);
		UNK_0x6DF7BF67E86AAE86(iLocal_91[1], bLocal_100);
		UNK_0x4E885A246A9D983A(iLocal_91[1], 185, true);
		UNK_0xBAFED2F6486F771A(iLocal_91[1], 65536, true);
		UNK_0x33CE5A9E32EA10B2(iLocal_91[1], 1);
		UNK_0x0E2400AB9174FA81(5, bLocal_100, joaat("PLAYER"));
		UNK_0x71199B01895C6202(bLocal_97);
		if (iLocal_54 == 1)
		{
			UNK_0xC6EB89C59F2AF6B8(iLocal_91[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, false, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(iLocal_91[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, false, 0, 0, 0);
			UNK_0x79C43E2BAC7C696F(iLocal_91[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000 /* Float: 0.25f */);
			UNK_0x79C43E2BAC7C696F(iLocal_91[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000 /* Float: 0.25f */);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[0], false, true, 2, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[0], 3, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[0], 4, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[1], false, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[1], 3, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[1], 4, false, true, 0);
			UNK_0x920D29D81E211607(bLocal_94, true);
			UNK_0x4E885A246A9D983A(iLocal_91[0], 206, true);
			UNK_0x4E885A246A9D983A(iLocal_91[0], 299, true);
			UNK_0x25C5402CC10F76CD(iLocal_91[0], false);
			UNK_0x4F39CC3882DD074E(iLocal_91[0], "REDR1Drunk1_AI_Drunk");
			UNK_0x4F39CC3882DD074E(iLocal_91[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_175(&uLocal_173, 3, iLocal_91[0], "REDR1Drunk1", 0, 1);
			func_175(&uLocal_173, 4, iLocal_91[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_54 == 2)
		{
			UNK_0x7D6CA5F52B3748BF(vLocal_81 - Vector(10f, 50f, 30f), vLocal_81 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			UNK_0x44A200C9B6E1CEA6(bLocal_94, true);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[1], false, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[1], 2, false, 2, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[1], 3, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[1], 4, true, 2, 0);
			UNK_0x64F9F278AB9DCA2C(iLocal_91[1], 8, false, false, 0);
			UNK_0x4E885A246A9D983A(iLocal_91[0], 134, true);
			UNK_0x4E885A246A9D983A(iLocal_91[1], 134, true);
			UNK_0x4E885A246A9D983A(iLocal_91[0], 26, true);
			UNK_0x4E885A246A9D983A(iLocal_91[1], 26, true);
			UNK_0x4E885A246A9D983A(iLocal_91[0], 206, true);
			UNK_0x4E885A246A9D983A(iLocal_91[1], 206, true);
			UNK_0x25C5402CC10F76CD(iLocal_91[0], false);
			UNK_0x25C5402CC10F76CD(iLocal_91[1], false);
			UNK_0x509B8296EBA9B408(iLocal_91[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			UNK_0x0C8C0C840C2D1AD2(iLocal_91[0], iLocal_91[1], -1, 2060, 4);
			UNK_0x509B8296EBA9B408(iLocal_91[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			UNK_0xA245D14CC59CDD36(iLocal_91[1], 0);
			UNK_0x0C8C0C840C2D1AD2(iLocal_91[1], iLocal_91[0], -1, 2060, 4);
			UNK_0x79C43E2BAC7C696F(iLocal_91[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000 /* Float: 0.25f */);
			UNK_0x79C43E2BAC7C696F(iLocal_91[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000 /* Float: 0.25f */);
			UNK_0x4F39CC3882DD074E(iLocal_91[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			UNK_0x4F39CC3882DD074E(iLocal_91[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_175(&uLocal_173, 3, iLocal_91[0], "REDR2DrunkM", 0, 1);
			func_175(&uLocal_173, 4, iLocal_91[1], "REDR2DrunkF", 0, 1);
		}
		bLocal_61 = true;
	}
}

void func_175(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_180(iParam0, 2, 1))
		{
			func_179(iParam0, 2, 1);
		}
	}
	else if (func_180(iParam0, 2, 1))
	{
		func_177(iParam0, 2, 1);
	}
}

void func_177(int iParam0, bool bParam1, bool bParam2)
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
		if (func_44() == 0)
		{
			bVar0 = func_89(func_178(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_85(func_178(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

int func_178(int iParam0)
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

void func_179(int iParam0, bool bParam1, bool bParam2)
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
		if (func_44() == 0)
		{
			bVar0 = func_89(func_178(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_85(func_178(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_180(int iParam0, bool bParam1, bool bParam2)
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
		if (func_44() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_89(func_178(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_181()
{
	UNK_0x523BCC9DC80CD82F(bLocal_96);
	UNK_0x523BCC9DC80CD82F(bLocal_98);
	UNK_0x523BCC9DC80CD82F(bLocal_97);
	if (iLocal_54 == 1)
	{
		UNK_0x9E5E60D8C63FD9D1();
		UNK_0x3F423BF5B8125A50("random@drunk_driver_1");
		UNK_0x4942FBD1EF896E39("MOVE_M@DRUNK@VERYDRUNK");
		UNK_0xAE317D00A5A55DF6("Taxi_Vomit", 0, -1);
	}
	else if (iLocal_54 == 2)
	{
		UNK_0x3F423BF5B8125A50("random@drunk_driver_2");
		UNK_0x3F423BF5B8125A50("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		UNK_0x3F423BF5B8125A50("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	UNK_0x4942FBD1EF896E39("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((UNK_0xB87F6CF6E5628C67(bLocal_96) && UNK_0xB87F6CF6E5628C67(bLocal_98)) && UNK_0xDF3FDDA1EADEDD07("MOVE_M@DRUNK@MODERATEDRUNK")) && UNK_0xB87F6CF6E5628C67(bLocal_97))
	{
		if (iLocal_54 == 1)
		{
			if (((UNK_0x25F7A4D42AF2AB93() && UNK_0xB4AE0788C1587752("random@drunk_driver_1")) && UNK_0xDF3FDDA1EADEDD07("MOVE_M@DRUNK@VERYDRUNK")) && UNK_0xAE317D00A5A55DF6("CONSTRUCTION_ACCIDENT_1", 0, -1))
			{
				bLocal_56 = true;
			}
		}
		else if (iLocal_54 == 2)
		{
			if ((UNK_0xB4AE0788C1587752("random@drunk_driver_2") && UNK_0xB4AE0788C1587752("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && UNK_0xB4AE0788C1587752("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				bLocal_56 = true;
			}
		}
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(bLocal_96);
		UNK_0x523BCC9DC80CD82F(bLocal_98);
		UNK_0x523BCC9DC80CD82F(bLocal_97);
		if (iLocal_54 == 1)
		{
			UNK_0x9E5E60D8C63FD9D1();
			UNK_0x3F423BF5B8125A50("random@drunk_driver_1");
			UNK_0x4942FBD1EF896E39("MOVE_M@DRUNK@VERYDRUNK");
			UNK_0xAE317D00A5A55DF6("Taxi_Vomit", 0, -1);
		}
		else if (iLocal_54 == 2)
		{
			UNK_0x3F423BF5B8125A50("random@drunk_driver_2");
			UNK_0x3F423BF5B8125A50("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			UNK_0x3F423BF5B8125A50("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		UNK_0x4942FBD1EF896E39("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_182()
{
	if (iLocal_54 == 1)
	{
		vLocal_152 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_90 = 2;
		bLocal_96 = joaat("A_M_Y_BEACHVESP_01");
		bLocal_97 = joaat("A_M_Y_BEACHVESP_02");
		vLocal_68 = { -1016.762f, -1356.459f, 4.5531f };
		bLocal_71 = 247.8087f;
		vLocal_72 = { -1015.572f, -1357.081f, 4.552f };
		bLocal_75 = 66.3861f;
		vLocal_76 = { -1027.762f, -1341.644f, 4.4614f };
		bLocal_79 = 76.9418f;
		bLocal_98 = joaat("BALLER2");
		vLocal_81 = { 160.8892f, -111.4167f, 61.2999f };
		vLocal_84 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_60 = true;
	}
	if (iLocal_54 == 2)
	{
		vLocal_152 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_90 = 2;
		bLocal_96 = joaat("A_M_Y_GENSTREET_01");
		bLocal_97 = joaat("A_F_Y_HIPSTER_03");
		vLocal_68 = { 1893.856f, 3714.346f, 31.7771f };
		bLocal_71 = 252.0142f;
		vLocal_72 = { 1894.763f, 3714.16f, 31.7605f };
		bLocal_75 = 86.1102f;
		vLocal_76 = { 1888.256f, 3717.189f, 31.8394f };
		bLocal_79 = 299.4672f;
		bLocal_98 = joaat("EMPEROR");
		vLocal_81 = { 1120.551f, 2647.307f, 36.9963f };
		vLocal_84 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_60 = true;
	}
}

bool func_183()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_44) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_194())
		{
			return false;
		}
	}
	if (func_190())
	{
		return true;
	}
	if (func_184(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_184(float fParam0, bool bParam1)
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
		if (func_24(func_22()))
		{
			iVar36 = func_54();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_185(iVar32, &Var0);
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

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			Jump @4471; //curOff = 3117
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			Jump @4471; //curOff = 3182
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			Jump @4471; //curOff = 3248
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			Jump @4471; //curOff = 3314
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			Jump @4471; //curOff = 3379
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 3443
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 3509
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			Jump @4471; //curOff = 3575
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 3643
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 3709
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			Jump @4471; //curOff = 3774
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			Jump @4471; //curOff = 3838
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			Jump @4471; //curOff = 3902
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			Jump @4471; //curOff = 3966
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			Jump @4471; //curOff = 4030
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			Jump @4471; //curOff = 4095
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 4159
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 4228
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 4297
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 4349
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			Jump @4471; //curOff = 4400
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
		}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_187(int iParam0)
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

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_189(iParam0) };
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

struct<2> func_189(int iParam0)
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

bool func_190()
{
	if (func_193() && !func_194())
	{
		return true;
	}
	if (func_192() && func_191())
	{
		return true;
	}
	return false;
}

bool func_191()
{
	return Global_111356 > 0;
}

bool func_192()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_193()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_194()
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

bool func_195()
{
	if (!func_165(5))
	{
		return true;
	}
	if (func_190())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_194())
		{
			return false;
		}
	}
	if (func_184(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_196()
{
	if ((Global_111627 == func_58() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_197(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_199(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_198();
}

void func_198()
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

void func_199(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_200(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_58();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_241())
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
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_194())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_39(0))
		{
			return false;
		}
		if (func_190())
		{
			return false;
		}
		if (func_240())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_24(func_22()))
		{
			if (func_184(100f, 1) != -1)
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
		if (!func_239(iParam3))
		{
			return false;
		}
		if (func_24(func_22()))
		{
			if (func_238(func_22()) == 4 || func_238(func_22()) == 5)
			{
				return false;
			}
		}
		if (func_24(func_22()))
		{
			if (!func_237(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_236(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_235())
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
		if (!func_226(4))
		{
			return false;
		}
		if (!func_165(5))
		{
			return false;
		}
		if (func_225(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_225(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_239(30) && !func_225(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_24(func_22()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_224(bVar8))
				{
					if (func_202(iVar4))
					{
						if (!func_201(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_22() != iVar4)
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

bool func_201(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_202(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_203(bVar0);
}

int func_203(bool bParam0)
{
	return func_204(bParam0, 1);
}

int func_204(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_224(bParam0))
	{
		return 0;
	}
	func_205(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_205(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_206(func_217(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_206(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_216(bParam0, bParam1))
	{
		iVar0 = func_215(bParam1);
		iVar1 = func_213(bParam0);
		iVar2 = (func_213(bParam0) - func_213(bParam1));
		iVar3 = (func_215(bParam0) - func_215(bParam1));
		iVar4 = (func_212(bParam0) - func_212(bParam1));
		iVar5 = (func_211(bParam0) - func_211(bParam1));
		iVar6 = (func_210(bParam0) - func_210(bParam1));
		iVar7 = (func_209(bParam0) - func_209(bParam1));
	}
	else
	{
		iVar0 = func_215(bParam0);
		iVar1 = func_213(bParam1);
		iVar2 = (func_213(bParam1) - func_213(bParam0));
		iVar3 = (func_215(bParam1) - func_215(bParam0));
		iVar4 = (func_212(bParam1) - func_212(bParam0));
		iVar5 = (func_211(bParam1) - func_211(bParam0));
		iVar6 = (func_210(bParam1) - func_210(bParam0));
		iVar7 = (func_209(bParam1) - func_209(bParam0));
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
		iVar4 = (iVar4 + func_208(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_207(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_207(float fParam0, float fParam1, float fParam2)
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

int func_208(bool bParam0, int iParam1)
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

int func_209(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_210(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_211(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_212(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_213(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_214(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_214(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_215(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_216(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_224(bParam1) || !func_224(bParam0))
	{
		return true;
	}
	bVar0 = func_213(bParam0);
	bVar1 = func_213(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_215(bParam0);
	bVar1 = func_215(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_212(bParam0);
	bVar1 = func_212(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_211(bParam0);
	bVar1 = func_211(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_210(bParam0);
	bVar1 = func_210(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_209(bParam0);
	bVar1 = func_209(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_217()
{
	var uVar0;

	func_223(&uVar0, UNK_0x4460E481B9E33ADA());
	func_222(&uVar0, UNK_0x8D199E381D262EEF());
	func_221(&uVar0, UNK_0xD8A54335F18763BA());
	func_220(&uVar0, UNK_0x972A296334C9D57B());
	func_219(&uVar0, UNK_0x118229AD063C3C1D());
	func_218(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_218(bool bParam0, int iParam1)
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

void func_219(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_220(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_215(*bParam0);
	iVar1 = func_213(*bParam0);
	if (iParam1 < 1 || iParam1 > func_208(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_221(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_222(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_223(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_224(bool bParam0)
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
	iVar0 = func_209(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_210(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_211(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_213(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_215(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_212(bParam0);
	if (iVar5 < 1 || iVar5 > func_208(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_225(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_226(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_22();
				if (!func_24(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_234()) || Global_110685) || Global_30770) || func_233()) || func_30(8, -1)) || func_232()) || func_231()) || func_230()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_234()) || Global_30770) || func_233()) || func_30(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_234()) || Global_110685) || Global_30770) || func_233()) || func_30(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_234()) || Global_110685) || Global_30770) || func_233()) || func_30(8, -1)) || func_232()) || func_231()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_234() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_30(8, -1)) || func_229()) || func_228()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_30(8, -1) || func_232()) || func_231()) || func_228()) || func_227())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_234()) || Global_30770) || func_233()) || func_30(8, -1)) || func_231()) || func_230()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_234()) || func_231()) || Global_110685) || Global_30770) || func_233()) || Global_42596) || func_30(8, -1)) || func_230()) || func_228()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_234()) || Global_110685) || Global_30770) || func_233()) || func_30(8, -1)) || func_230()) || func_228()) || func_232()) || func_231()) || func_229())
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

bool func_227()
{
	return Global_98783.f_1;
}

bool func_228()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_229()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_230()
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

bool func_231()
{
	return Global_98796.f_346 > 0;
}

bool func_232()
{
	return Global_98796.f_345 > 0;
}

bool func_233()
{
	return Global_1312877;
}

bool func_234()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_235()
{
	func_21();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_236(bool bParam0)
{
	return func_216(func_217(), bParam0);
}

bool func_237(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_22();
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

int func_238(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_239(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_241())
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

bool func_240()
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

bool func_241()
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

void func_242()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if ((UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_enter_m", 3) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_idle_m", 3)) || UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
		}
	}
	if (bLocal_172)
	{
		func_279(0);
		if (Global_31009)
		{
			UNK_0xC92DB9682A650680("AC_STOP");
		}
		func_278();
		func_6();
		UNK_0x707318B0EDF0FF50(0);
		UNK_0xB547E3FFEB27073E();
		UNK_0xE342F209E49C5314(vLocal_76 - Vector(10f, 15f, 15f), vLocal_76 + Vector(10f, 15f, 15f), true, 1);
		UNK_0xE342F209E49C5314(vLocal_81 - Vector(10f, 15f, 15f), vLocal_81 + Vector(10f, 15f, 15f), true, 1);
		func_158(0);
		if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
		{
			if (!UNK_0xAF6690C489CC6203(UNK_0x728870EB733D12A1()))
			{
				UNK_0x73270B3C9CC833FD(UNK_0x728870EB733D12A1(), true, 0);
			}
		}
		if (!UNK_0x437347B10A200C4B(bLocal_95, 0))
		{
			if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_95, 0) && func_147(UNK_0x16F2683693E537C9(), bLocal_95, 1) > 50f)
			{
				func_254(bLocal_95, 0, 145);
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_91[0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[0]))
			{
				UNK_0x4E885A246A9D983A(iLocal_91[0], 317, true);
				if (!UNK_0x405E212DDE472467(iLocal_91[0], 0))
				{
					UNK_0x61F0DE0226FF7252(iLocal_91[0]);
				}
				if (UNK_0x16102BEDC7435774(iLocal_91[0]))
				{
					UNK_0x0A94A109271BE75A(iLocal_91[0]);
				}
			}
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (UNK_0xC844350D5D58C99A(iLocal_91[iLocal_63]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_91[iLocal_63]))
				{
					UNK_0x4E885A246A9D983A(iLocal_91[iLocal_63], 317, true);
					if (!UNK_0x405E212DDE472467(iLocal_91[iLocal_63], 0))
					{
						UNK_0x61F0DE0226FF7252(iLocal_91[iLocal_63]);
					}
					UNK_0x25C5402CC10F76CD(iLocal_91[iLocal_63], true);
					UNK_0x0E2400AB9174FA81(255, bLocal_100, joaat("PLAYER"));
					UNK_0x11AD11297DC58CC7(iLocal_91[iLocal_63], false);
				}
				UNK_0x6DAD7906B73F064D(&(iLocal_91[iLocal_63]));
			}
			iLocal_63++;
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_155[iLocal_63]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_155[iLocal_63]));
			}
			iLocal_63++;
		}
		if (iLocal_54 == 1)
		{
			UNK_0xF5894FEB702E7E76(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (UNK_0x9F4FE516EAACCFC5(iLocal_127))
		{
			if (UNK_0xFBB4F23D534EB790(iLocal_127))
			{
				UNK_0xE3BB8E05FCEB3FBE(iLocal_127, false);
			}
		}
	}
	func_243(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_243(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_196())
	{
		func_247(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_246(30000);
		StringCopy(&cVar0, func_245(Global_111627, 1), 64);
		if (func_57(Global_111627) > 0)
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
	func_244(&Global_30827);
	Global_111628 = 0;
	func_199(-1);
}

void func_244(var uParam0)
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

char* func_245(int iParam0, bool bParam1)
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

void func_246(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_247(int iParam0)
{
	func_248(iParam0, 0, func_253(iParam0));
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_217();
	func_251(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_250(iParam0, &bVar0);
	Var1 = { func_249(&bVar0) };
}

struct<16> func_249(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_211(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_210(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_209(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_212(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_215(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_213(*bParam0), 64);
	return Var0;
}

void func_250(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_251(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_213(*bParam0);
	bVar1 = func_215(*bParam0);
	iVar2 = func_212(*bParam0);
	iVar3 = func_211(*bParam0);
	iVar4 = func_210(*bParam0);
	iVar5 = func_209(*bParam0);
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
	iVar6 = func_208(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_208(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_252(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_252(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_223(bParam0, iParam1);
	func_222(bParam0, iParam2);
	func_221(bParam0, iParam3);
	func_219(bParam0, bParam5);
	func_220(bParam0, iParam4);
	func_218(bParam0, iParam6);
}

int func_253(int iParam0)
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

int func_254(bool bParam0, int iParam1, int iParam2)
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
	func_255(bParam0, iParam2);
	return 1;
}

void func_255(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_261(bParam0))
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
	func_256(bParam0, &(Global_111638.f_32744.f_5510));
}

void func_256(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_260(uParam1);
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
		if (uParam1->f_65 == -1 && !func_259(uParam1->f_66))
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
		func_258(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_257(iVar0 + 1));
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

int func_257(int iParam0)
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

int func_258(bool bParam0, var uParam1, var uParam2)
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

bool func_259(int iParam0)
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

void func_260(var uParam0)
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

bool func_261(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_276(bParam0, 0, 0)) || func_276(bParam0, 1, 0)) || func_276(bParam0, 2, 0)) || func_275(bParam0) != 145) || func_274(bParam0)) || func_273(bParam0)) || func_272(bParam0)) || func_271(bParam0)) || !func_262(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_273(bParam0))
		{
		}
		if (func_273(bParam0))
		{
		}
		if (func_276(bParam0, 0, 0))
		{
		}
		if (func_276(bParam0, 1, 0))
		{
		}
		if (func_276(bParam0, 2, 0))
		{
		}
		if (func_275(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_262(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_263(bParam0, 0))
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

bool func_263(bool bParam0, bool bParam1)
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
		if (!func_241())
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
		if ((((!func_270() && !func_269()) && !func_268()) && !func_267()) && !func_241())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_268())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_266(bParam0))
		{
			return false;
		}
	}
	if (!func_264(bParam0))
	{
		return false;
	}
	return true;
}

bool func_264(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_265())
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

bool func_265()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_266(bool bParam0)
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

bool func_267()
{
	return false;
}

bool func_268()
{
	return true;
}

bool func_269()
{
	return true;
}

bool func_270()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_271(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_263(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_272(bool bParam0)
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

bool func_273(bool bParam0)
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

bool func_274(bool bParam0)
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

int func_275(bool bParam0)
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

bool func_276(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_277(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_277(int iParam0, int iParam1, char* sParam2, int iParam3)
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

void func_278()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_279(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_176(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_280()
{
	float fVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_339, 1);
		iLocal_338 = 1;
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_342, 1) < fVar0)
		{
			fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_342, 1);
			iLocal_338 = 2;
		}
		if (iLocal_338 == 1)
		{
			bLocal_345 = true;
			iLocal_54 = 1;
			return vLocal_339;
		}
		if (iLocal_338 == 2)
		{
			bLocal_345 = 2;
			iLocal_54 = 2;
			return vLocal_342;
		}
	}
	return 0f, 0f, 0f;
}

