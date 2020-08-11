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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	bool bLocal_53 = false;
	bool bLocal_54 = false;
	vector3 vLocal_55[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_62[2] = { 0f, 0f };
	vector3 vLocal_65[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_75[3] = { 0f, 0f, 0f };
	vector3 vLocal_79[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_92[4] = { 0f, 0f, 0f, 0f };
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	bool bLocal_106 = false;
	vector3 vLocal_107 = { 0f, 0f, 0f };
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114[2] = { 0, 0 };
	int iLocal_117[3] = { 0, 0, 0 };
	int iLocal_121[4] = { 0, 0, 0, 0 };
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	vector3 vLocal_128 = { 0f, 0f, 0f };
	vector3 vLocal_131 = { 0f, 0f, 0f };
	bool bLocal_134 = false;
	bool bLocal_135 = false;
	bool bLocal_136 = false;
	bool bLocal_137 = false;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	int iLocal_141[2] = { 0, 0 };
	int iLocal_144[2] = { 0, 0 };
	bool bLocal_147 = false;
	bool bLocal_148 = false;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = false;
	bool bLocal_155 = false;
	bool bLocal_156 = false;
	bool bLocal_157 = false;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	bool bLocal_160 = false;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	bool bLocal_166 = false;
	bool bLocal_167 = false;
	int iLocal_168[2] = { 0, 0 };
	bool bLocal_171 = false;
	vector3 vLocal_172 = { 0f, 0f, 0f };
	bool bLocal_175 = false;
	bool bLocal_176 = false;
	bool bLocal_177 = false;
	bool bLocal_178 = false;
	bool bLocal_179 = false;
	bool bLocal_180 = false;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	bool bLocal_184 = false;
	int iLocal_185[2] = { 0, 0 };
	bool bLocal_188 = false;
	bool bLocal_189 = false;
	bool bLocal_190 = false;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	vector3 vLocal_194 = { 0f, 0f, 0f };
	float fLocal_197 = 0f;
	vector3 vLocal_198 = { 0f, 0f, 0f };
	vector3 vLocal_201 = { 0f, 0f, 0f };
	vector3 vLocal_204 = { 0f, 0f, 0f };
	vector3 vLocal_207 = { 0f, 0f, 0f };
	int iLocal_210 = 0;
	bool bLocal_211 = false;
	bool bLocal_212 = false;
	bool bLocal_213 = false;
	bool bLocal_214 = false;
	bool bLocal_215 = false;
	int iLocal_216 = 0;
	float fLocal_217 = 0f;
	bool bLocal_218 = false;
	bool bLocal_219 = false;
	bool bLocal_220 = false;
	bool bLocal_221 = false;
	bool bLocal_222 = false;
	bool bLocal_223 = false;
	bool bLocal_224 = false;
	bool bLocal_225 = false;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 16;
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
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
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
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

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
	vLocal_128 = { -824.1719f, -187.654f, 36.5707f };
	vLocal_131 = { -1202.94f, -779.74f, 17.33f };
	vLocal_50 = { ScriptParam_0.f_1[0 /*3*/] };
	func_250();
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_248();
		func_236();
	}
	if (iLocal_49 == 1)
	{
		if (!func_235(0) || !func_234(0))
		{
			UNK_0x10FAF14A60A0DBE1();
		}
	}
	else if (iLocal_49 == 2)
	{
		if (!func_235(14) || !func_234(14))
		{
			UNK_0x10FAF14A60A0DBE1();
		}
	}
	if (func_204(vLocal_50, 5, bLocal_134, 0, 0))
	{
		func_201(5);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0x338D6FF72D84D90F() || bLocal_164)
		{
			if (!func_200())
			{
				if (func_199())
				{
					func_236();
				}
			}
			UNK_0x1A6DFFFEEC27BF4F("RE_SR", 0);
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (bLocal_53)
						{
							bLocal_223 = true;
							iLocal_48 = 1;
						}
						else
						{
							if (func_187())
							{
								func_236();
							}
							if (!bLocal_54)
							{
								func_186();
							}
							if (bLocal_54)
							{
								func_185();
							}
						}
						break;
					case 1:
						switch (iLocal_46)
						{
							case 0:
								if (!bLocal_137)
								{
									func_184();
									if (UNK_0xBD307E66C0669BFC(iLocal_153))
									{
										func_178();
										bLocal_137 = true;
									}
								}
								else
								{
									if (iLocal_49 == 1)
									{
										UNK_0x9501364A300048C6();
									}
									func_175();
									UNK_0x25BB71BA267FE042(iLocal_153);
									if (func_174())
									{
										if (!bLocal_159)
										{
											if (iLocal_49 == 1)
											{
												if (func_173(&uLocal_232, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													bLocal_159 = true;
												}
											}
											else if (iLocal_49 == 2)
											{
												if (func_173(&uLocal_232, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													bLocal_159 = true;
												}
											}
										}
									}
									if (func_172())
									{
										if (UNK_0xE4EDC4B0E92C078B(iLocal_193))
										{
											UNK_0x142CC44DB769B57E(&iLocal_193);
										}
										UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
										UNK_0x51B096AAC60548C1(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_114)
										{
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar0]))
											{
												UNK_0x6C3AE6E278DB3D0E(iLocal_114[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
												UNK_0xFADC0A217229F6B5(iLocal_114[iVar0], true);
												if (!UNK_0xE4EDC4B0E92C078B(iLocal_185[iVar0]))
												{
													iLocal_185[iVar0] = func_171(iLocal_114[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_49 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_117)
											{
												if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[iVar0]))
												{
													UNK_0x8BE3D040D15AEA1D(iLocal_117[iVar0], -1);
													UNK_0xFADC0A217229F6B5(iLocal_117[iVar0], true);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_121)
											{
												if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[iVar0]))
												{
													UNK_0x8BE3D040D15AEA1D(iLocal_121[iVar0], -1);
													UNK_0xFADC0A217229F6B5(iLocal_121[iVar0], true);
												}
												iVar0++;
											}
										}
										UNK_0xF690C84DADBB3551(&bLocal_167);
										bLocal_140 = true;
										iLocal_46 = 1;
										iLocal_47 = 3;
									}
									if (func_170())
									{
										func_163(1);
										SYSTEM::SETTIMERA(0);
										UNK_0x7D0D8317DC09FF68(90, vLocal_194, 15000f);
										iLocal_46 = 1;
									}
								}
								break;
							case 1:
								UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
								func_175();
								iVar1 = 0;
								while (iVar1 < iLocal_117)
								{
									if (UNK_0xC844350D5D58C99A(iLocal_117[iVar1]))
									{
										if (UNK_0xB87D13D0C064E9D1(iLocal_117[iVar1], UNK_0x16F2683693E537C9(), 1))
										{
											func_162();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_121)
								{
									if (UNK_0xC844350D5D58C99A(iLocal_121[iVar1]))
									{
										if (UNK_0xB87D13D0C064E9D1(iLocal_121[iVar1], UNK_0x16F2683693E537C9(), 1))
										{
											func_162();
										}
									}
									iVar1++;
								}
								switch (iLocal_47)
								{
									case 0:
										if (func_170())
										{
											func_158();
											func_156();
										}
										break;
									case 1:
										func_155();
										func_156();
										break;
									case 2:
										func_154();
										func_153();
										func_152();
										if (SYSTEM::TIMERB() > 500)
										{
											if (UNK_0xC844350D5D58C99A(bLocal_167))
											{
												if (!UNK_0xD59B17D2DFF98E26(bLocal_167))
												{
													func_151();
													UNK_0x5745EA6329A91E29(iLocal_114[0], joaat("WEAPON_UNARMED"), true);
													UNK_0x9F528B1B53FBC5D9(bLocal_167, iLocal_114[0], UNK_0x4A089F2B762B8D33(iLocal_114[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (UNK_0x723EE7F83DF1497D(vLocal_194 - Vector(20f, 20f, 20f), vLocal_194 + Vector(20f, 20f, 20f), 0))
										{
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[1]))
											{
												UNK_0xEEB67C3D0A71A47B(iLocal_117[1], vLocal_103, 150f, -1, 0, 0);
												UNK_0x11AD11297DC58CC7(iLocal_117[1], false);
												UNK_0x6DAD7906B73F064D(&(iLocal_117[1]));
											}
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[2]))
											{
												UNK_0xEEB67C3D0A71A47B(iLocal_117[2], vLocal_103, 150f, -1, 0, 0);
												UNK_0x11AD11297DC58CC7(iLocal_117[2], false);
												UNK_0x6DAD7906B73F064D(&(iLocal_117[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_113 - 1))
											{
												if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[iVar2]))
												{
													UNK_0xE8832A9E16A57A1F(iLocal_121[iVar2], true, 1);
													UNK_0xDD353D0E9C789D0E(&iLocal_152);
													if (iLocal_49 == 1)
													{
														UNK_0xC6EB89C59F2AF6B8(false, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_49 == 2)
													{
														UNK_0x96167B03C5A77156(false, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
													}
													UNK_0xEEB67C3D0A71A47B(false, vLocal_103, 150f, -1, 0, 0);
													UNK_0x75ABDC5F81978924(iLocal_152);
													UNK_0x78ADC381772E3D54(iLocal_121[iVar2], iLocal_152);
													UNK_0xF82EA857DA10E0CD(&iLocal_152);
													UNK_0xFADC0A217229F6B5(iLocal_121[iVar2], true);
													UNK_0x11AD11297DC58CC7(iLocal_121[iVar2], false);
													UNK_0x25C5402CC10F76CD(iLocal_121[iVar2], true);
													UNK_0x6DAD7906B73F064D(&(iLocal_121[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_150() || SYSTEM::TIMERA() > 20000)
										{
											if (!bLocal_164)
											{
												if (!UNK_0x437347B10A200C4B(iLocal_114[0], 0))
												{
													func_142(0, 1, 1, 0, 0, 0);
													func_135(0);
													UNK_0x8BCB70EB440DED83(1);
													UNK_0xBFE31971E49FA500(1);
													UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
													UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, false, 0, 0, 0);
													if (iLocal_49 == 1)
													{
														if (UNK_0xC844350D5D58C99A(bLocal_167))
														{
															UNK_0x4A4806F9D471E491(bLocal_167, false, 0);
															UNK_0x20641932E5104B25(bLocal_167, false, 0);
														}
													}
													else if (iLocal_49 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_117)
													{
														if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[iVar1]))
														{
															UNK_0x11AD11297DC58CC7(iLocal_117[iVar1], false);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_121)
													{
														if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[iVar1]))
														{
															UNK_0x11AD11297DC58CC7(iLocal_121[iVar1], false);
														}
														iVar1++;
													}
													if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
													{
														UNK_0x11AD11297DC58CC7(iLocal_117[0], true);
														UNK_0xDD353D0E9C789D0E(&iLocal_152);
														UNK_0xC6EB89C59F2AF6B8(false, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, false, 0, 0, 0);
														UNK_0x75ABDC5F81978924(iLocal_152);
														UNK_0x78ADC381772E3D54(iLocal_117[0], iLocal_152);
														UNK_0xF82EA857DA10E0CD(&iLocal_152);
														UNK_0xFADC0A217229F6B5(iLocal_117[0], true);
													}
													if (!func_134())
													{
														func_118(&uLocal_232, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													bLocal_164 = true;
												}
											}
										}
										if (!bLocal_139)
										{
											if (UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (UNK_0x8CA9406E01C7EE58(UNK_0x16F2683693E537C9(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (UNK_0x8CA9406E01C7EE58(UNK_0x16F2683693E537C9(), "random@shop_robbery", "kneel_getup_p") > 0.6f && func_117(64)))
												{
													UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
													bLocal_139 = true;
												}
											}
										}
										if (iLocal_49 == 1)
										{
											if (!func_170())
											{
												if (!bLocal_180)
												{
													bLocal_180 = true;
												}
											}
											if (!bLocal_161)
											{
												func_116();
											}
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]) && UNK_0xDF1306B443CD3D15(bLocal_175, 0))
											{
												if (UNK_0xC42A92762C58E1B9(iLocal_114[0], bLocal_175, 0))
												{
													if (UNK_0xC844350D5D58C99A(bLocal_167))
													{
														UNK_0xF690C84DADBB3551(&bLocal_167);
														bLocal_161 = true;
													}
												}
											}
											if (func_115() && !bLocal_162)
											{
												if (UNK_0xE4EDC4B0E92C078B(iLocal_185[0]))
												{
													UNK_0x142CC44DB769B57E(&(iLocal_185[0]));
												}
												if (UNK_0xE4EDC4B0E92C078B(iLocal_185[1]))
												{
													UNK_0x142CC44DB769B57E(&(iLocal_185[1]));
												}
												if (!UNK_0xE4EDC4B0E92C078B(iLocal_191))
												{
													iLocal_191 = func_113(bLocal_175, 1, 0);
												}
												bLocal_161 = true;
												if (!UNK_0xEB6A8945D1AC98A1(bLocal_184))
												{
													UNK_0xAFF39FB306F8E232(bLocal_184, 17, true);
													UNK_0xAFF39FB306F8E232(bLocal_184, 6, true);
													UNK_0xAFF39FB306F8E232(bLocal_184, 1, true);
													UNK_0x89258193691A7600(bLocal_184, bLocal_175, UNK_0x16F2683693E537C9(), 8, 16f, 786469, -1f, -1f, 1);
													UNK_0xFADC0A217229F6B5(bLocal_184, true);
													bLocal_162 = true;
												}
											}
											if (bLocal_162 && !bLocal_224)
											{
												if (UNK_0xDF1306B443CD3D15(bLocal_175, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_184))
												{
													if (!UNK_0x5A91F08DF773C39D(bLocal_175, vLocal_55[0 /*3*/], 20f, 20f, 10f, false, true, 0))
													{
														UNK_0x89258193691A7600(bLocal_184, bLocal_175, UNK_0x16F2683693E537C9(), 8, 19f, 786469, -1f, -1f, 1);
														bLocal_224 = true;
													}
												}
											}
											if (func_112())
											{
												if (!UNK_0xEB6A8945D1AC98A1(bLocal_184))
												{
													if (UNK_0xDF1306B443CD3D15(bLocal_175, 0))
													{
														if (!bLocal_163)
														{
															UNK_0xAFF39FB306F8E232(bLocal_184, 17, true);
															UNK_0xAFF39FB306F8E232(bLocal_184, 6, true);
															UNK_0xAFF39FB306F8E232(bLocal_184, 1, true);
															UNK_0x89258193691A7600(bLocal_184, bLocal_175, UNK_0x16F2683693E537C9(), 8, 17f, 786469, -1f, -1f, 1);
															bLocal_163 = true;
														}
														if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
														{
															if (UNK_0xC42A92762C58E1B9(iLocal_114[0], bLocal_175, 0))
															{
																if (UNK_0xE4EDC4B0E92C078B(iLocal_185[0]))
																{
																	UNK_0x142CC44DB769B57E(&(iLocal_185[0]));
																}
																if (UNK_0xE4EDC4B0E92C078B(iLocal_185[1]))
																{
																	UNK_0x142CC44DB769B57E(&(iLocal_185[1]));
																}
																if (!UNK_0xE4EDC4B0E92C078B(iLocal_191))
																{
																	iLocal_191 = func_113(bLocal_175, 1, 0);
																}
																bLocal_161 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= (iLocal_111 - 1))
												{
													if (!iLocal_141[iVar3])
													{
														if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar3]))
														{
															if (UNK_0x405E212DDE472467(iLocal_114[iVar3], 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_184))
															{
																UNK_0xFFDDE8CC59EB6D40(iLocal_114[iVar3], UNK_0x16F2683693E537C9(), false, 0.3f, 0.7f, 1.9f, -1f, 15, 0, -753768974);
																iLocal_141[iVar3] = 1;
															}
															else if (!UNK_0xE4EDC4B0E92C078B(iLocal_192))
															{
																UNK_0x6C3AE6E278DB3D0E(iLocal_114[iVar3], UNK_0x16F2683693E537C9(), 0, 16);
																UNK_0xFADC0A217229F6B5(iLocal_114[iVar3], true);
																if (UNK_0xE4EDC4B0E92C078B(iLocal_191))
																{
																	UNK_0x142CC44DB769B57E(&iLocal_191);
																}
																if (!UNK_0xE4EDC4B0E92C078B(iLocal_185[iVar3]))
																{
																	iLocal_185[iVar3] = func_171(iLocal_114[iVar3], 1, 145);
																}
																iLocal_141[iVar3] = 1;
															}
														}
													}
													if (!iLocal_144[iVar3])
													{
														if (UNK_0xDF1306B443CD3D15(bLocal_175, 0))
														{
															if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar3]))
															{
																if ((UNK_0xEB6A8945D1AC98A1(bLocal_184) || UNK_0xBBA8A868118C90ED(bLocal_175, -1, 0)) || UNK_0x4E861BC5B1EDA7BD(iLocal_114[iVar3]))
																{
																	UNK_0xE8832A9E16A57A1F(iLocal_114[iVar3], true, 1);
																	UNK_0xDD353D0E9C789D0E(&iLocal_152);
																	UNK_0x75CDA8644CD3B5F5(false, 0, 0);
																	UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
																	UNK_0x75ABDC5F81978924(iLocal_152);
																	UNK_0x78ADC381772E3D54(iLocal_114[iVar3], iLocal_152);
																	UNK_0xF82EA857DA10E0CD(&iLocal_152);
																	UNK_0xFADC0A217229F6B5(iLocal_114[iVar3], true);
																	if (!UNK_0xEB6A8945D1AC98A1(bLocal_184))
																	{
																		UNK_0xE8832A9E16A57A1F(bLocal_184, true, 1);
																		UNK_0xDD353D0E9C789D0E(&iLocal_152);
																		UNK_0x75CDA8644CD3B5F5(false, 0, 0);
																		UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
																		UNK_0x75ABDC5F81978924(iLocal_152);
																		UNK_0x78ADC381772E3D54(bLocal_184, iLocal_152);
																		UNK_0xF82EA857DA10E0CD(&iLocal_152);
																		UNK_0xFADC0A217229F6B5(bLocal_184, true);
																	}
																	if (!UNK_0xE4EDC4B0E92C078B(iLocal_192))
																	{
																		if (UNK_0xE4EDC4B0E92C078B(iLocal_191))
																		{
																			UNK_0x142CC44DB769B57E(&iLocal_191);
																		}
																		if (!UNK_0xE4EDC4B0E92C078B(iLocal_185[iVar3]))
																		{
																			iLocal_185[iVar3] = func_171(iLocal_114[iVar3], 1, 145);
																		}
																	}
																	iLocal_144[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar3]))
															{
																UNK_0xE8832A9E16A57A1F(iLocal_114[iVar3], true, 1);
																UNK_0xDD353D0E9C789D0E(&iLocal_152);
																UNK_0x75CDA8644CD3B5F5(false, 0, 0);
																UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
																UNK_0x75ABDC5F81978924(iLocal_152);
																UNK_0x78ADC381772E3D54(iLocal_114[iVar3], iLocal_152);
																UNK_0xF82EA857DA10E0CD(&iLocal_152);
																UNK_0xFADC0A217229F6B5(iLocal_114[iVar3], true);
															}
															if (!UNK_0xEB6A8945D1AC98A1(bLocal_184))
															{
																UNK_0xE8832A9E16A57A1F(bLocal_184, true, 1);
																UNK_0xDD353D0E9C789D0E(&iLocal_152);
																UNK_0x75CDA8644CD3B5F5(false, 0, 0);
																UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
																UNK_0x75ABDC5F81978924(iLocal_152);
																UNK_0x78ADC381772E3D54(bLocal_184, iLocal_152);
																UNK_0xF82EA857DA10E0CD(&iLocal_152);
																UNK_0xFADC0A217229F6B5(bLocal_184, true);
															}
															if (!UNK_0xE4EDC4B0E92C078B(iLocal_192))
															{
																if (UNK_0xE4EDC4B0E92C078B(iLocal_191))
																{
																	UNK_0x142CC44DB769B57E(&iLocal_191);
																}
																if (!UNK_0xE4EDC4B0E92C078B(iLocal_185[iVar3]))
																{
																	iLocal_185[iVar3] = func_171(iLocal_114[iVar3], 1, 145);
																}
																iLocal_144[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (bLocal_161)
											{
												if (func_111())
												{
													func_110();
													func_107();
													iLocal_47 = 9;
												}
											}
										}
										else if (iLocal_49 == 2)
										{
											if (UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
											{
												if (UNK_0xE4EDC4B0E92C078B(iLocal_185[0]))
												{
													func_106(&uLocal_232, 3);
													UNK_0x142CC44DB769B57E(&(iLocal_185[0]));
												}
											}
											if (UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
											{
												if (UNK_0xE4EDC4B0E92C078B(iLocal_185[1]))
												{
													func_106(&uLocal_232, 4);
													UNK_0x142CC44DB769B57E(&(iLocal_185[1]));
												}
											}
											if (UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
											{
												if (UNK_0xC844350D5D58C99A(bLocal_167))
												{
													if (UNK_0xD59B17D2DFF98E26(bLocal_167))
													{
														UNK_0x15AFB6CBDE990FB6(bLocal_167, 1, true);
													}
													UNK_0xF690C84DADBB3551(&bLocal_167);
													func_110();
													func_107();
													iLocal_47 = 9;
												}
											}
											else if (UNK_0xB87D13D0C064E9D1(iLocal_114[0], UNK_0x16F2683693E537C9(), 1))
											{
												if (UNK_0xC844350D5D58C99A(bLocal_167))
												{
													if (UNK_0xD59B17D2DFF98E26(bLocal_167))
													{
														UNK_0x15AFB6CBDE990FB6(bLocal_167, 1, true);
													}
													UNK_0xF690C84DADBB3551(&bLocal_167);
													func_110();
													func_107();
													iLocal_47 = 9;
												}
											}
										}
										break;
									case 3:
										func_155();
										break;
									case 9:
										func_154();
										func_104();
										break;
									case 10:
										func_101(2);
										func_100(iLocal_193, &uLocal_229);
										if (iLocal_49 == 1)
										{
											if (!bLocal_160)
											{
												UNK_0x3F423BF5B8125A50("random@robbery");
												if (!UNK_0xB4AE0788C1587752("random@robbery"))
												{
													UNK_0x3F423BF5B8125A50("random@robbery");
												}
												else if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
												{
													UNK_0xA47B46945FF6DE74(iLocal_117[0], -818.5553f, -185.4815f, 36.5689f, 1, 0, 0, 1);
													UNK_0xD8F6A53F4799FAFE(iLocal_117[0], 47.0582f);
													UNK_0xC6EB89C59F2AF6B8(iLocal_117[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, false, 0, 0, 0);
													if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[1]))
													{
														UNK_0xEEB67C3D0A71A47B(iLocal_117[1], vLocal_103, 150f, -1, 0, 0);
														UNK_0x11AD11297DC58CC7(iLocal_117[1], false);
														UNK_0x6DAD7906B73F064D(&(iLocal_117[1]));
													}
													if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[2]))
													{
														UNK_0xEEB67C3D0A71A47B(iLocal_117[2], vLocal_103, 150f, -1, 0, 0);
														UNK_0x11AD11297DC58CC7(iLocal_117[2], false);
														UNK_0x6DAD7906B73F064D(&(iLocal_117[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_113 - 1))
													{
														if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[iVar4]))
														{
															UNK_0xDD353D0E9C789D0E(&iLocal_152);
															UNK_0xC6EB89C59F2AF6B8(false, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															UNK_0xEEB67C3D0A71A47B(false, vLocal_103, 150f, -1, 0, 0);
															UNK_0x75ABDC5F81978924(iLocal_152);
															UNK_0x78ADC381772E3D54(iLocal_121[iVar4], iLocal_152);
															UNK_0xF82EA857DA10E0CD(&iLocal_152);
															UNK_0xFADC0A217229F6B5(iLocal_121[iVar4], true);
															UNK_0x11AD11297DC58CC7(iLocal_121[iVar4], false);
															UNK_0x25C5402CC10F76CD(iLocal_121[iVar4], true);
															UNK_0x6DAD7906B73F064D(&(iLocal_121[iVar4]));
														}
														iVar4++;
													}
													bLocal_160 = true;
												}
											}
											func_76(6, 3);
											func_76(7, 3);
										}
										else if (iLocal_49 == 2)
										{
											if (!bLocal_160)
											{
												UNK_0x3F423BF5B8125A50("random@robbery");
												if (!UNK_0xB4AE0788C1587752("random@robbery"))
												{
													UNK_0x3F423BF5B8125A50("random@robbery");
												}
												else if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
												{
													UNK_0xA47B46945FF6DE74(iLocal_117[0], -1197.455f, -776.0289f, 16.3254f, 1, 0, 0, 1);
													UNK_0xD8F6A53F4799FAFE(iLocal_117[0], 205.7753f);
													UNK_0xC6EB89C59F2AF6B8(iLocal_117[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, false, 0, 0, 0);
													if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[1]))
													{
														UNK_0xEEB67C3D0A71A47B(iLocal_117[1], vLocal_103, 150f, -1, 0, 0);
														UNK_0x11AD11297DC58CC7(iLocal_117[1], false);
														UNK_0x6DAD7906B73F064D(&(iLocal_117[1]));
													}
													if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[2]))
													{
														UNK_0xEEB67C3D0A71A47B(iLocal_117[2], vLocal_103, 150f, -1, 0, 0);
														UNK_0x11AD11297DC58CC7(iLocal_117[2], false);
														UNK_0x6DAD7906B73F064D(&(iLocal_117[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_113 - 1))
													{
														if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[iVar5]))
														{
															UNK_0xEEB67C3D0A71A47B(iLocal_121[iVar5], vLocal_103, 150f, -1, 0, 0);
															UNK_0x11AD11297DC58CC7(iLocal_121[iVar5], false);
															UNK_0x25C5402CC10F76CD(iLocal_121[iVar5], true);
															UNK_0x6DAD7906B73F064D(&(iLocal_121[iVar5]));
														}
														iVar5++;
													}
													bLocal_160 = true;
												}
											}
											if (UNK_0xBF75E4DF4C367CD9(-1201.43f, -776.86f, 17.99f, 6f, joaat("V_ILEV_CLOTHMIDDOOR"), 0))
											{
												UNK_0x6DA3AC47D5DB9EED(joaat("V_ILEV_CLOTHMIDDOOR"), -1201.43f, -776.86f, 17.99f, false, 0f, 0);
											}
										}
										if (func_174())
										{
										}
										if ((func_170() && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && !UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_47 = 11;
										}
										if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), func_250()) > (fLocal_197 + 150f))
										{
											iLocal_47 = 12;
										}
										if (SYSTEM::TIMERA() > 120000)
										{
											iLocal_47 = 14;
										}
										if (UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
										{
											func_75(2);
											func_55();
										}
										else if (UNK_0xB87D13D0C064E9D1(iLocal_117[0], UNK_0x16F2683693E537C9(), 1))
										{
											func_75(2);
											func_55();
										}
										break;
									case 11:
										func_1();
										break;
									case 12:
										func_75(2);
										func_55();
										break;
									case 7:
										func_55();
										break;
									case 14:
										func_75(2);
										func_55();
										break;
									case 13:
										if (!bLocal_225)
										{
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
											{
												UNK_0xA3BF0AA5A2608191(iLocal_117[0]);
												if (iLocal_49 == 1)
												{
													func_118(&uLocal_232, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_49 == 2)
												{
													func_118(&uLocal_232, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												UNK_0x1DC614CBE22FFB4F(iLocal_117[0], 20000);
												UNK_0xFADC0A217229F6B5(iLocal_117[0], true);
												UNK_0x11AD11297DC58CC7(iLocal_117[0], false);
												bLocal_225 = true;
											}
										}
										if (!func_134())
										{
											iLocal_46 = 2;
										}
										break;
								}
								break;
							case 2:
								func_162();
								break;
						}
						break;
				}
			}
		}
		else
		{
			func_236();
		}
	}
}

void func_1()
{
	if (func_170())
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_193))
		{
			UNK_0x142CC44DB769B57E(&iLocal_193);
		}
		if (!bLocal_182)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
			{
				func_142(1, 1, 1, 0, 0, 0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				UNK_0xA37A90C62806D848(1);
				UNK_0x679C321F8CAA2CFA(UNK_0x68F4C0EC296D3901(iLocal_117[0], true), 20f, 0);
				UNK_0x8BCB70EB440DED83(0);
				UNK_0xBFE31971E49FA500(0);
				if (iLocal_49 == 1)
				{
					bLocal_181 = true;
				}
				else if (iLocal_49 == 2)
				{
				}
				bLocal_182 = true;
			}
		}
	}
	if (!bLocal_181)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
		{
			bLocal_181 = true;
		}
	}
	if (bLocal_181)
	{
		if (!bLocal_183)
		{
			UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), true);
			UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
			if (UNK_0xE4EDC4B0E92C078B(iLocal_193))
			{
				UNK_0x142CC44DB769B57E(&iLocal_193);
			}
			vLocal_198 = { UNK_0x68F4C0EC296D3901(iLocal_117[0], false) };
			if (iLocal_49 == 1)
			{
				vLocal_198 = { -820.77f, -186.514f, 36.569f };
				vLocal_204 = { 0f, 0f, -60f };
				fLocal_217 = 0.855f;
				bLocal_211 = "random@robbery";
				bLocal_212 = "return_bag_stand_b";
				bLocal_213 = "return_bag_stand_b_female";
				bLocal_214 = "return_bag_stand_b_bag";
				bLocal_215 = "return_bag_stand_b_cam";
			}
			else if (iLocal_49 == 2)
			{
				vLocal_198 = { -1198.295f, -776.533f, 16.326f };
				vLocal_204 = { 0f, 0f, -60.25f };
				fLocal_217 = 0.785f;
				bLocal_211 = "random@robbery";
				bLocal_212 = "return_bag_stand_c_rt";
				bLocal_213 = "return_bag_stand_c_rt_female";
				bLocal_214 = "return_bag_stand_c_rt_bag";
				bLocal_215 = "return_bag_stand_c_rt_cam";
			}
			iLocal_216 = UNK_0xE9744DB7B8CA6965(vLocal_198, vLocal_204, 2);
			iLocal_210 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
			UNK_0x93E9ED66DAB9FBE3(iLocal_210, iLocal_216, bLocal_215, bLocal_211);
			UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_216, bLocal_211, bLocal_212, 1000f, -2f, 5, 0, 1148846080, 0);
			UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
			UNK_0x327AAEE25F323797(iLocal_117[0]);
			UNK_0x915804B434753CBD(iLocal_117[0], iLocal_216, bLocal_211, bLocal_213, 1000f, -2f, 4, 0, 1148846080, 0);
			UNK_0xF895E10BF4C72645(iLocal_117[0], 0, 0);
			bLocal_167 = UNK_0x7707E48765093646(joaat("PROP_CS_DUFFEL_01"), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), true, true, false);
			UNK_0xE14EC663EED44AD5(bLocal_167, iLocal_216, bLocal_214, bLocal_211, 1000f, 1090519040, 0, 1148846080 /* Float: 1000f */);
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
			{
				func_54();
				UNK_0xE3BB8E05FCEB3FBE(iLocal_210, true);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				SYSTEM::SETTIMERA(0);
				bLocal_183 = true;
			}
		}
	}
	if ((SYSTEM::TIMERA() > 1500 && bLocal_183) && !bLocal_158)
	{
		func_52();
		SYSTEM::WAIT(0);
		if (iLocal_49 == 1)
		{
			func_118(&uLocal_232, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_49 == 2)
		{
			func_118(&uLocal_232, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		bLocal_158 = true;
	}
	if (UNK_0xA45992A6CE82FB43(iLocal_216) > fLocal_217 && bLocal_183)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
		{
			UNK_0x6D80F1AEBA734886(iLocal_117[0], bLocal_189);
			UNK_0xA3BF0AA5A2608191(iLocal_117[0]);
			UNK_0xDD353D0E9C789D0E(&iLocal_152);
			UNK_0xC6EB89C59F2AF6B8(false, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_152);
			UNK_0x78ADC381772E3D54(iLocal_117[0], iLocal_152);
			UNK_0xF82EA857DA10E0CD(&iLocal_152);
			UNK_0xFADC0A217229F6B5(iLocal_117[0], true);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_167))
		{
			UNK_0xF690C84DADBB3551(&bLocal_167);
		}
		UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
		UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_WALK"), false, 0, 0);
		UNK_0x5A9FF5F994E904B8(UNK_0xD803B885F5E47A62(), 1f, 650, false, 1, 0);
		func_142(0, 1, 1, 0, 0, 0);
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, 4);
		UNK_0x8BCB70EB440DED83(1);
		UNK_0xBFE31971E49FA500(1);
		UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), false);
		UNK_0x2FB9A57162E54BAB(0f);
		UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
		UNK_0x9A8DDC7C522F5BF5(iLocal_210, 0);
		func_51();
		func_50(joaat("RC_WALLETS_RETURNED"), 1);
		if (iLocal_49 == 1)
		{
			func_12(func_44(), 1, bLocal_189);
			func_2(0, func_44(), 1);
		}
		else if (iLocal_49 == 2)
		{
			func_12(func_44(), 1, bLocal_189);
			func_2(14, func_44(), 1);
		}
		func_75(3);
		func_55();
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (bParam1)
	{
		case 0:
			bVar0 = 5;
			break;
		case 1:
			bVar0 = 7;
			break;
		case 2:
			bVar0 = 6;
			break;
		default:
			return;
	}
	if (bParam2)
	{
		if (!func_11(iParam0, bVar0, 0))
		{
			func_10(iParam0, bVar0, 0);
		}
	}
	else if (func_11(iParam0, bVar0, 0))
	{
		func_3(iParam0, bVar0, 0);
	}
}

void func_3(int iParam0, bool bParam1, bool bParam2)
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
		if (func_9() == 0)
		{
			bVar0 = func_7(func_8(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_4(func_8(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_4(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1312745;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_5(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_8(int iParam0)
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

int func_9()
{
	return Global_30768;
}

void func_10(int iParam0, bool bParam1, bool bParam2)
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
		if (func_9() == 0)
		{
			bVar0 = func_7(func_8(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_4(func_8(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_11(int iParam0, bool bParam1, bool bParam2)
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
		if (func_9() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_7(func_8(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_12(bool bParam0, int iParam1, bool bParam2)
{
	if (func_43(bParam0) == 3)
	{
		return 0;
	}
	if (func_43(bParam0) == 4)
	{
		return 0;
	}
	return func_13(func_43(bParam0), 0, iParam1, bParam2, 0);
}

int func_13(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	func_42();
	if (bParam3 < 1)
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
					func_41(99, 1);
					func_50(joaat("SP0_MONEY_TOTAL_SPENT"), bParam3);
					break;
				case 1:
					func_50(joaat("SP1_MONEY_TOTAL_SPENT"), bParam3);
					break;
				case 2:
					func_50(joaat("SP2_MONEY_TOTAL_SPENT"), bParam3);
					break;
			}
			func_25(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_21(5))
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
							func_50(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
						case 1:
							func_50(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
						case 2:
							func_50(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), bParam3);
							break;
					}
					if (func_21(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("SP0_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
						case 1:
							func_50(joaat("SP1_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
						case 2:
							func_50(joaat("SP2_MONEY_SPENT_ON_TAXIS"), bParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
						case 1:
							func_50(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
							break;
						case 2:
							func_50(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), bParam3);
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
							func_50(joaat("SP0_MONEY_SPENT_PROPERTY"), bParam3);
							break;
						case 1:
							func_50(joaat("SP1_MONEY_SPENT_PROPERTY"), bParam3);
							break;
						case 2:
							func_50(joaat("SP2_MONEY_SPENT_PROPERTY"), bParam3);
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
									func_50(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
								case 1:
									func_50(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
								case 2:
									func_50(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), bParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
								case 1:
									func_50(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
								case 2:
									func_50(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), bParam3);
									break;
							}
							if (func_21(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
								case 1:
									func_50(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
								case 2:
									func_50(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), bParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("SP0_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
								case 1:
									func_50(joaat("SP1_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
								case 2:
									func_50(joaat("SP2_MONEY_SPENT_CAR_MODS"), bParam3);
									break;
							}
							func_20(bParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, bParam3);
					break;
				case 1:
					func_41(97, bParam3);
					break;
				case 2:
					func_41(96, bParam3);
					break;
			}
			func_41(98, bParam3);
			break;
	}
	iVar2 = iParam0;
	bParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(bParam3)));
	iVar3 = 0;
	bVar4 = bParam3;
	if (fVar0 == 0f)
	{
		func_16(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_16(bVar1);
	}
	iVar5 = (Global_58686[iVar2] + bParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && bParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + bParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_50(joaat("SP0_TOTAL_CASH_EARNED"), bParam3);
					break;
				case 1:
					func_50(joaat("SP1_TOTAL_CASH_EARNED"), bParam3);
					break;
				case 2:
					func_50(joaat("SP2_TOTAL_CASH_EARNED"), bParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - bParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - bParam3);
			if (bParam4)
			{
				bVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (bVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = bParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_15(iParam0);
	if (Global_41431 == 15)
	{
		func_14(0);
	}
	return 1;
}

void func_14(bool bParam0)
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

void func_15(int iParam0)
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

void func_16(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_19(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_19(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_19(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_19(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_4(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_4(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_4(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_4(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_4(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_4(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_18() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_18() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_17(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_17(bool bParam0)
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

int func_18()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

int func_19(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_6();
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

void func_20(bool bParam0)
{
	func_41(93, bParam0);
	func_41(29, bParam0);
	func_41(30, bParam0);
}

bool func_21(bool bParam0)
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
		return func_22(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_22(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_22(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_22(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_7(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_7(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_7(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_7(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_7(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_7(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_18() /*10930*/].f_6174.f_10, bParam0);
}

int func_22(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_6();
	}
	iVar1 = func_24(iParam0, bParam1);
	iVar2 = func_23(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_23(int iParam0)
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_6();
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

int func_25(bool bParam0)
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
		func_40(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1)
{
	if (func_39(14) && !func_38(iParam0))
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
	if (func_37(&Global_4270065))
	{
		if (func_35(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_28(&Global_4270065, iParam0))
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

bool func_28(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return false;
	}
	if (func_35(uParam0, iParam1))
	{
		return false;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_29(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_30(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_30(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_31(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_32(uParam0, iVar0);
		iVar0++;
	}
	func_33(uParam0, (Global_4270064 - 0.5f));
}

void func_32(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_33(var uParam0, float fParam1)
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

float func_34(var uParam0)
{
	return uParam0->f_80;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1)
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

bool func_37(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_38(int iParam0)
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

bool func_39(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_40(int iParam0, bool bParam1)
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

void func_41(int iParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1 < 1)
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
		bVar0 = (bVar0 + bParam1);
		UNK_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, bVar0, 1);
	}
}

void func_42()
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

int func_43(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_17;
}

bool func_44()
{
	func_45();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_45()
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_48(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			bVar0 = func_47(UNK_0x16F2683693E537C9());
			if (func_46(bVar0) && (!func_39(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != bVar0 && func_46(Global_111638.f_2358.f_539.f_4321))
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

bool func_46(bool bParam0)
{
	return bParam0 < 3;
}

int func_47(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(bool bParam0)
{
	if (func_46(bParam0))
	{
		return func_49(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

var func_49(bool bParam0)
{
	return Global_1798[bParam0 /*29*/];
}

void func_50(int iParam0, bool bParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + bParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_51()
{
	if (iLocal_49 == 1)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_117[0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
			{
				UNK_0x11AD11297DC58CC7(iLocal_117[0], false);
				UNK_0x6DAD7906B73F064D(&(iLocal_117[0]));
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_117[1]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[1]))
			{
				UNK_0x11AD11297DC58CC7(iLocal_117[1], false);
				UNK_0x6DAD7906B73F064D(&(iLocal_117[1]));
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_121[0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[0]))
			{
				UNK_0x11AD11297DC58CC7(iLocal_121[0], false);
				UNK_0x6DAD7906B73F064D(&(iLocal_121[0]));
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_121[1]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[1]))
			{
				UNK_0x11AD11297DC58CC7(iLocal_121[1], false);
				UNK_0x6DAD7906B73F064D(&(iLocal_121[1]));
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_121[2]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[2]))
			{
				UNK_0xA47B46945FF6DE74(iLocal_121[2], -820.424f, -181.9059f, 36.5687f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(iLocal_121[2], 167.7909f);
				UNK_0x11AD11297DC58CC7(iLocal_121[2], false);
				UNK_0x6DAD7906B73F064D(&(iLocal_121[2]));
			}
		}
	}
}

void func_52()
{
	Global_19671 = 0;
	func_53();
}

void func_53()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_54()
{
	if (iLocal_49 == 1)
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 8f, 8f, 8f, false, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, false, true, 0))
			{
				UNK_0xA47B46945FF6DE74(UNK_0x728870EB733D12A1(), -831.9709f, -192.0823f, 36.5008f, 0, 0, 0, 1);
				UNK_0xB9FD7450C0DAB575(UNK_0x728870EB733D12A1(), 1084227584 /* Float: 5f */);
			}
		}
		UNK_0x536F1BE96C726C4B(-823.1281f, -187.9591f, 36.6189f, 3f, 1, 0, 0, false);
	}
	else if (iLocal_49 == 2)
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 8f, 8f, 8f, false, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), -1201.017f, -777.5527f, 16.3398f, 8f, 8f, 8f, false, true, 0))
			{
				UNK_0xA47B46945FF6DE74(UNK_0x728870EB733D12A1(), -1205.936f, -781.2014f, 16.0088f, 0, 0, 0, 1);
				UNK_0xB9FD7450C0DAB575(UNK_0x728870EB733D12A1(), 1084227584 /* Float: 5f */);
			}
		}
		UNK_0x536F1BE96C726C4B(-1201.017f, -777.5527f, 16.3398f, 8f, 1, 0, 0, false);
	}
}

void func_55()
{
	while (!func_74())
	{
		SYSTEM::WAIT(0);
	}
	UNK_0x94FD98915D03BAC2(UNK_0xD803B885F5E47A62(), 1, 0);
	func_59(5, bLocal_134);
	func_56();
	func_236();
}

void func_56()
{
	func_57();
}

int func_57()
{
	if (func_58(0))
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

bool func_58(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_59(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_71(iParam0))
	{
		func_70(iParam0, bParam1);
		if (!func_69(51))
		{
			func_65("RE_REWARD", 1, 0, 4000, 10000, func_68(), 0, 138, 0);
			func_64(51);
		}
		if (func_63(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_62(iParam0, bParam1) != 322)
		{
			func_60(func_62(iParam0, bParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_75(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_75(7);
			}
			else
			{
				func_75(1);
			}
		}
	}
}

void func_60(int iParam0, var uParam1, var uParam2)
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
		func_19((891 + iParam0), 1, -1, 1);
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
		func_61();
	}
}

void func_61()
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
		func_40(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_9() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_57();
				}
			}
		}
	}
}

int func_62(int iParam0, bool bParam1)
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

bool func_63(int iParam0)
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

void func_64(int iParam0)
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

void func_65(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_66(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_66(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_67();
	}
}

void func_67()
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

int func_68()
{
	func_45();
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

bool func_69(int iParam0)
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

void func_70(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_71(int iParam0)
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

int func_72()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_73(Var0);
	return iVar16;
}

int func_73(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_74()
{
	return true;
}

void func_75(int iParam0)
{
	Global_111624 = iParam0;
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != 226)
	{
		if (Global_76622)
		{
			iVar0 = Global_2439138.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111638.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				UNK_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
				Global_37690[iParam0] = iParam1;
			}
			else if (Global_76622)
			{
				Global_2439138.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111638.f_7256[iParam0] = iParam1;
			}
			UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_78(iParam0);
			if (UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_77(iParam0);
			}
		}
	}
}

void func_77(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		UNK_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_78(int iParam0)
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (!func_98())
	{
		return;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_97(iParam0) };
	if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_83(iParam0, &Var0);
	}
	if (!UNK_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (UNK_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = UNK_0x0EB28750412C3A5A(Var0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1);
	if ((UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		UNK_0x0674E58A79778E99(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("STARTUP_POSITIONING")) == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						Global_98796.f_343 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = UNK_0xFBD08BECC9B87937(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					UNK_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			UNK_0x0674E58A79778E99(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, false))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_80(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, true) && UNK_0x8A22C4C08282BF26(joaat("AMBIENT_SOLOMON")) == 0)
	{
		if (func_79())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111638.f_7256[iParam0];
	}
	if (Global_37917[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37217)
		{
		}
		else
		{
			if (!UNK_0x76395FF5E8D5E643(Var0.f_5))
			{
				UNK_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0, false, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || UNK_0x755FF954DAE327E1(UNK_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar14 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
						iVar15 = UNK_0xFBD08BECC9B87937(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
						}
						UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 1);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
			}
		}
		if (bVar8)
		{
			UNK_0x0674E58A79778E99(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_77(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

bool func_79()
{
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		return false;
	}
	switch (func_44())
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return true;
			}
			break;
		case 1:
			if (Global_111638.f_9080.f_99.f_58[66])
			{
				return true;
			}
			break;
		case 2:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return true;
			}
			break;
	}
	return false;
}

int func_80(int iParam0)
{
	bool bVar0;

	bVar0 = func_44();
	if (func_81(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], false) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], false))
			{
				return 0;
			}
		}
		if (func_46(bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_93771[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[0], false))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], false))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[5], bVar0))
				{
					return 0;
				}
			}
			break;
		case 50:
			if (bVar0 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], false))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[6], bVar0))
				{
					return 0;
				}
			}
			break;
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[2], false))
				{
					return 0;
				}
				if (func_46(bVar0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_93771[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[1], false))
				{
					return 0;
				}
				if (func_46(bVar0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_93771[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		case 53:
			if (bVar0 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[3], false))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[3], bVar0))
				{
					return 0;
				}
			}
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_81(int iParam0)
{
	int iVar0;

	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				iVar0 = UNK_0x134B62B726CEC8E6(func_82(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1)));
				switch (iVar0)
				{
					case joaat("UTILLITRUCK"):
					case joaat("MONSTER"):
						return true;
				}
			}
		}
	}
	return false;
}

int func_82(int iParam0)
{
	return iParam0;
}

void func_83(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	bVar0 = func_86();
	iVar1 = func_85(bVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_84(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_84(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 141:
		case 142:
			if (func_84(iParam0))
			{
				if ((UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) == 0 && UNK_0x8A22C4C08282BF26(joaat("JEWELRY_SETUP1")) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111638.f_9080.f_99.f_58[4])
				{
					Global_111638.f_7256[iParam0] = 0;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) == 0 && UNK_0x8A22C4C08282BF26(joaat("JEWELRY_SETUP1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
			}
			break;
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_84(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 147:
		case 148:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_84(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 158:
		case 159:
			if (UNK_0x8A22C4C08282BF26(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 160:
		case 161:
			if (UNK_0x8A22C4C08282BF26(joaat("OMEGA2")) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 70:
		case 71:
		case 72:
			if (!func_84(iParam0) && UNK_0x8A22C4C08282BF26(Global_89532[26 /*34*/].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_84(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[43 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 190:
		case 191:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 193:
			if (!func_84(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[93 /*34*/].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 198:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 80:
			if (!func_84(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[8 /*34*/].f_6) == 0 && UNK_0x8A22C4C08282BF26(Global_89532[10 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 205:
		case 206:
			if (!func_84(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[47 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 207:
			if (UNK_0x8A22C4C08282BF26(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (UNK_0x8A22C4C08282BF26(Global_89532[48 /*34*/].f_6) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 99:
		case 100:
			if (UNK_0x8A22C4C08282BF26(Global_89532[39 /*34*/].f_6) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 216:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 217:
		case 218:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
	}
}

bool func_84(int iParam0)
{
	struct<7> Var0;
	int iVar7;

	Var0 = { func_97(iParam0) };
	iVar7 = UNK_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_85(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

bool func_86()
{
	var uVar0;

	func_96(&uVar0, UNK_0x4460E481B9E33ADA());
	func_95(&uVar0, UNK_0x8D199E381D262EEF());
	func_94(&uVar0, UNK_0xD8A54335F18763BA());
	func_89(&uVar0, UNK_0x972A296334C9D57B());
	func_88(&uVar0, UNK_0x118229AD063C3C1D());
	func_87(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_87(bool bParam0, int iParam1)
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

void func_88(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_89(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_93(*bParam0);
	iVar1 = func_91(*bParam0);
	if (iParam1 < 1 || iParam1 > func_90(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_90(bool bParam0, int iParam1)
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

int func_91(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_92(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_92(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_93(bool bParam0)
{
	return (bParam0 && 15);
}

void func_94(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_95(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_96(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_97(int iParam0)
{
	struct<7> Var0;

	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		case 1:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		case 2:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		case 3:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		case 4:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		case 5:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		case 6:
			Var0.f_3 = joaat("V_ILEV_HD_DOOR_L");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		case 7:
			Var0.f_3 = joaat("V_ILEV_HD_DOOR_R");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		case 8:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		case 9:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		case 10:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		case 11:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		case 12:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		case 13:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		case 14:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		case 15:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		case 16:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		case 17:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		case 18:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		case 19:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		case 20:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		case 21:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		case 22:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		case 23:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		case 24:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		case 25:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		case 26:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		case 27:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		case 28:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		case 29:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		case 30:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		case 31:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		case 32:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		case 33:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		case 34:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		case 35:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		case 36:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		case 37:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		case 38:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_L");
			Var0 = { -817f, 179f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		case 39:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_R");
			Var0 = { -816f, 178f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		case 40:
			Var0.f_3 = joaat("PROP_LD_GARAGED_01");
			Var0 = { -815f, 186f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		case 41:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -797f, 177f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		case 42:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -795f, 178f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		case 43:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -793f, 181f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		case 44:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -794f, 183f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		case 45:
			Var0.f_3 = joaat("PROP_BH1_48_GATE_1");
			Var0 = { -849f, 179f, 70f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		case 46:
			Var0.f_3 = joaat("V_ILEV_MM_WINDOWWC");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		case 47:
			Var0.f_3 = joaat("V_ILEV_FA_FRONTDOOR");
			Var0 = { -14f, -1441f, 31f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		case 48:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { -15f, -1427f, 31f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		case 49:
			Var0.f_3 = joaat("PROP_SC1_21_G_DOOR_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		case 50:
			Var0.f_3 = joaat("V_ILEV_FH_FRONTDOOR");
			Var0 = { 7.52f, 539.53f, 176.18f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		case 51:
			Var0.f_3 = joaat("V_ILEV_TREVTRAILDR");
			Var0 = { 1973f, 3815f, 34f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		case 52:
			Var0.f_3 = joaat("PROP_CS4_10_TR_GD_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		case 53:
			Var0.f_3 = joaat("V_ILEV_TREV_DOORFRONT");
			Var0 = { -1150f, -1521f, 11f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		case 55:
			Var0.f_3 = joaat("PROP_ID2_11_GDOOR");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		case 56:
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		case 57:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		case 58:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		case 59:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		case 60:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		case 225:
			Var0.f_3 = joaat("LR_PROP_SUPERMOD_DOOR_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		case 61:
			Var0.f_3 = joaat("V_ILEV_JANITOR_FRONTDOOR");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		case 62:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		case 63:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		case 64:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		case 65:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		case 66:
			Var0.f_3 = joaat("V_ILEV_STORE_DOOR");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		case 67:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		case 68:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		case 69:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		case 70:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 71:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 72:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 73:
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		case 74:
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		case 75:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORFRONT");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		case 76:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		case 77:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		case 78:
			Var0.f_3 = joaat("V_ILEV_DEVIANTFRONTDOOR");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		case 79:
			Var0.f_3 = joaat("PROP_COM_GAR_DOOR_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		case 80:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 81:
			Var0.f_3 = joaat("PROP_STRIP_DOOR_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		case 82:
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		case 83:
			Var0.f_3 = joaat("PROP_MOTEL_DOOR_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		case 84:
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 85:
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 86:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		case 87:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		case 88:
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_L");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		case 89:
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_R");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		case 90:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		case 91:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		case 92:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		case 93:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		case 94:
			Var0.f_3 = joaat("PROP_GAR_DOOR_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		case 95:
			Var0.f_3 = joaat("PROP_GAR_DOOR_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		case 96:
			Var0.f_3 = joaat("PROP_MAP_DOOR_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		case 97:
			Var0.f_3 = joaat("V_ILEV_FIB_DOOR1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		case 98:
			Var0.f_3 = joaat("V_ILEV_TORT_DOOR");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		case 99:
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 100:
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 101:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 102:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 103:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 104:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 105:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		case 106:
			Var0.f_3 = joaat("V_ILEV_FH_DOOR4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		case 107:
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_L");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 108:
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_R");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 109:
			Var0.f_3 = joaat("V_ILEV_EPSSTOREDOOR");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		case 110:
			Var0.f_3 = joaat("PROP_CH2_09C_GARAGE_DOOR");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		case 111:
			Var0.f_3 = joaat("V_ILEV_DOOR_ORANGESOLID");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		case 112:
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		case 113:
			Var0.f_3 = joaat("PROP_CS4_05_TDOOR");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		case 114:
			Var0.f_3 = joaat("V_ILEV_HOUSEDOOR1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		case 115:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		case 116:
			Var0.f_3 = joaat("P_CUT_DOOR_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		case 117:
			Var0.f_3 = joaat("P_CUT_DOOR_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		case 118:
			Var0.f_3 = joaat("V_ILEV_PO_DOOR");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		case 119:
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_L");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		case 120:
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_R");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		case 121:
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		case 122:
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		case 123:
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 124:
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 125:
			Var0.f_3 = joaat("AP1_02_DOOR_L");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		case 126:
			Var0.f_3 = joaat("AP1_02_DOOR_R");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		case 128:
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTL");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		case 129:
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTR");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		case 130:
			Var0.f_3 = joaat("V_ILEV_FB_DOOR01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		case 131:
			Var0.f_3 = joaat("V_ILEV_FB_DOOR02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		case 127:
			Var0.f_3 = joaat("V_ILEV_GTDOOR");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		case 132:
			Var0.f_3 = joaat("PROP_DAMDOOR_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		case 133:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 134:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 135:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 136:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 137:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 138:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 139:
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		case 140:
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		case 141:
			Var0.f_3 = joaat("P_JEWEL_DOOR_L");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 142:
			Var0.f_3 = joaat("P_JEWEL_DOOR_R1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 145:
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 146:
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 143:
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 144:
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 148:
			Var0.f_3 = joaat("HEI_V_ILEV_BK_GATE_PRIS");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 147:
			Var0.f_3 = joaat("V_ILEV_BK_DOOR");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 149:
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		case 150:
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		case 151:
			Var0.f_3 = joaat("V_ILEV_SHRFDOOR");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		case 152:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 153:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 154:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 155:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 156:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 157:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 158:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01L");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 159:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01R");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 160:
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_L");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 161:
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_R");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 162:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		case 163:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		case 165:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		case 166:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		case 167:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		case 168:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		case 169:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		case 170:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		case 171:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		case 172:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		case 173:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		case 174:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		case 175:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		case 176:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		case 177:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		case 178:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		case 179:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		case 180:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		case 181:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		case 182:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		case 183:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		case 184:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		case 164:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 185:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 186:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		case 187:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		case 188:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		case 189:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		case 190:
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_L");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 191:
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_R");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 192:
			Var0.f_3 = joaat("V_ILEV_CBANKCOUNTDOOR01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		case 193:
			Var0.f_3 = joaat("PROP_FNCLINK_03GATE5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		case 197:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		case 194:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		case 195:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		case 198:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 199:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 200:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 201:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 202:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 205:
			Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 206:
			Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 207:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 208:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 209:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 210:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 211:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 212:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 213:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 214:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 215:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 216:
			Var0.f_3 = joaat("PROP_GAR_DOOR_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 217:
			Var0.f_3 = joaat("PROP_GATE_TEP_01_L");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 218:
			Var0.f_3 = joaat("PROP_GATE_TEP_01_R");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 219:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 220:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 221:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 222:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 223:
			Var0.f_3 = joaat("PROP_FNCLINK_07GATE1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		case 203:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 204:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 224:
			Var0.f_3 = joaat("PROP_ABAT_SLIDE");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

bool func_98()
{
	if ((func_9() == -1 || func_9() == 999) && !func_99() == 0)
	{
		return true;
	}
	return false;
}

int func_99()
{
	return Global_30769;
}

void func_100(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (*uParam1 == -99)
	{
		*uParam1 = UNK_0x1C0640BA9A7327B3();
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		iVar0 = (UNK_0x1C0640BA9A7327B3() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (UNK_0x4FA921CB56EDB0F8(iParam0) != 255)
				{
					UNK_0x7F010F50CE03A8AF(iParam0, 255);
				}
			}
			else if (UNK_0x4FA921CB56EDB0F8(iParam0) != 0)
			{
				UNK_0x7F010F50CE03A8AF(iParam0, false);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (UNK_0x4FA921CB56EDB0F8(iParam0) != 255)
			{
				UNK_0x7F010F50CE03A8AF(iParam0, 255);
			}
		}
	}
}

void func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_102(func_103(iParam0), -1);
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
					func_102(func_103(iParam0), -1);
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
					func_102(func_103(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_102(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_103(int iParam0)
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

void func_104()
{
	if (UNK_0xEB751B41BC4080D4(iLocal_110))
	{
		func_50(joaat("RC_WALLETS_RECOVERED"), 1);
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
		{
			iLocal_193 = func_171(iLocal_117[0], 0, 145);
		}
		func_105(&uLocal_229);
		fLocal_197 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), func_250());
		SYSTEM::SETTIMERA(0);
		iLocal_47 = 10;
	}
	if (UNK_0x762119754C50557A(iLocal_110))
	{
		if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0xE925E52ACABA4CE7(iLocal_110)) > 200f)
		{
			func_162();
		}
	}
}

void func_105(var uParam0)
{
	*uParam0 = -99;
}

void func_106(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_107()
{
	int iVar0;

	if (!UNK_0x762119754C50557A(iLocal_110))
	{
		UNK_0x5D96D8530B3D0904(&bLocal_106, 3);
		UNK_0x5D96D8530B3D0904(&bLocal_106, 4);
		UNK_0x5D96D8530B3D0904(&bLocal_106, true);
		if (!bLocal_161)
		{
			if (UNK_0x437347B10A200C4B(iLocal_114[0], 0))
			{
				if (UNK_0xC844350D5D58C99A(iLocal_114[0]))
				{
					vLocal_107 = { UNK_0xC6151A4F2BB0AC79(iLocal_114[0], 1067030938 /* Float: 1.2f */, 1069547520 /* Float: 1.5f */) };
				}
			}
			else
			{
				vLocal_107 = { UNK_0x550B1459B4642A86(UNK_0x68F4C0EC296D3901(iLocal_114[0], true), 1.2f, 1.5f) };
			}
		}
		else if (UNK_0xC844350D5D58C99A(bLocal_175))
		{
			vLocal_107 = { UNK_0x550B1459B4642A86(UNK_0x68F4C0EC296D3901(bLocal_175, false), 1.2f, 1.5f) };
		}
		vLocal_107 = { vLocal_107.x, vLocal_107.y, (vLocal_107.z + 0.25f) };
		iLocal_110 = UNK_0xA6FF0828D17CF374(joaat("PICKUP_MONEY_MED_BAG"), vLocal_107, bLocal_106, bLocal_189, 1, joaat("PROP_CS_DUFFEL_01"));
		iLocal_192 = func_108(iLocal_110);
		if (iLocal_49 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_111 - 1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar0]))
				{
					UNK_0xE8832A9E16A57A1F(iLocal_114[iVar0], true, 1);
					UNK_0xA3BF0AA5A2608191(iLocal_114[iVar0]);
					UNK_0xDD353D0E9C789D0E(&iLocal_152);
					UNK_0x75CDA8644CD3B5F5(false, 0, 0);
					UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_152);
					UNK_0x78ADC381772E3D54(iLocal_114[iVar0], iLocal_152);
					UNK_0xF82EA857DA10E0CD(&iLocal_152);
					UNK_0xFADC0A217229F6B5(iLocal_114[iVar0], true);
				}
				iVar0++;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
			{
				UNK_0x8FB4E06C94958F84(iLocal_114[0]);
				if (!UNK_0x46BC6F5F089F3AFF(iLocal_114[0]))
				{
					func_52();
					SYSTEM::WAIT(0);
					func_118(&uLocal_232, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_108(int iParam0)
{
	int iVar0;

	if (!UNK_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = UNK_0xA0556E31F2661AF4(iParam0);
	UNK_0x516E63E474722206(iVar0, func_109(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

float func_109(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_110()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_192))
	{
		UNK_0x142CC44DB769B57E(&iLocal_192);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_193))
	{
		UNK_0x142CC44DB769B57E(&iLocal_193);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_191))
	{
		UNK_0x142CC44DB769B57E(&iLocal_191);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_185[0]))
	{
		UNK_0x142CC44DB769B57E(&(iLocal_185[0]));
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_185[1]))
	{
		UNK_0x142CC44DB769B57E(&(iLocal_185[1]));
	}
}

bool func_111()
{
	if (!UNK_0xC844350D5D58C99A(iLocal_114[0]))
	{
		iLocal_149 = 1;
	}
	else if (UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
	{
		iLocal_149 = 1;
	}
	if (!bLocal_161)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_114[1]))
		{
			iLocal_150 = 1;
		}
		else if (UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
		{
			iLocal_150 = 1;
		}
	}
	else
	{
		iLocal_150 = 1;
	}
	if (!UNK_0xC844350D5D58C99A(bLocal_184))
	{
		iLocal_151 = 1;
	}
	else if (UNK_0xEB6A8945D1AC98A1(bLocal_184) || !UNK_0x405E212DDE472467(bLocal_184, 0))
	{
		iLocal_151 = 1;
	}
	if ((iLocal_149 && iLocal_150) || iLocal_151)
	{
		return true;
	}
	return false;
}

bool func_112()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (UNK_0xC844350D5D58C99A(iLocal_114[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar0]) || UNK_0x437347B10A200C4B(iLocal_114[iVar0], 0))
			{
				if (UNK_0xB87D13D0C064E9D1(iLocal_114[iVar0], UNK_0x16F2683693E537C9(), 1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (UNK_0xC844350D5D58C99A(iLocal_114[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar0]))
			{
				if (UNK_0x36646919F20EAFFC(iLocal_114[iVar0]))
				{
					if (UNK_0x710D117BA581D7D2(iLocal_114[iVar0]) == UNK_0x16F2683693E537C9())
					{
						UNK_0xE8832A9E16A57A1F(iLocal_114[iVar0], true, 1);
						UNK_0xF3268524E9BE6D6E(iLocal_114[iVar0], UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(iLocal_114[iVar0], true);
						SYSTEM::WAIT(0);
						UNK_0x6DAD7906B73F064D(&(iLocal_114[iVar0]));
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_184))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_184) || UNK_0x437347B10A200C4B(bLocal_184, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_184, UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_184))
		{
			if (UNK_0x15D0A3E61766C539(UNK_0x16F2683693E537C9(), joaat("WEAPON_STUNGUN")))
			{
				return true;
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_184))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_184))
		{
			if (UNK_0x36646919F20EAFFC(bLocal_184))
			{
				if (UNK_0x710D117BA581D7D2(bLocal_184) == UNK_0x16F2683693E537C9())
				{
					UNK_0xE8832A9E16A57A1F(bLocal_184, true, 1);
					UNK_0xF3268524E9BE6D6E(bLocal_184, UNK_0x16F2683693E537C9(), 250f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_184, true);
					SYSTEM::WAIT(0);
					UNK_0x6DAD7906B73F064D(&bLocal_184);
					return true;
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_175))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_175, 0) || UNK_0x437347B10A200C4B(bLocal_175, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_175, UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
{
	return func_114(bParam0, !bParam1, bParam2);
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_109(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_109(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_109(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_115()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_175, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
		{
			if (UNK_0xC42A92762C58E1B9(iLocal_114[0], bLocal_175, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
				{
					if (UNK_0xC42A92762C58E1B9(iLocal_114[1], bLocal_175, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_116()
{
	if (UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
	{
		if (UNK_0xC844350D5D58C99A(bLocal_167))
		{
			if (UNK_0xD59B17D2DFF98E26(bLocal_167))
			{
				UNK_0x15AFB6CBDE990FB6(bLocal_167, 1, true);
			}
			UNK_0xF690C84DADBB3551(&bLocal_167);
			func_110();
			func_107();
			iLocal_47 = 9;
		}
	}
	else if (UNK_0xB87D13D0C064E9D1(iLocal_114[0], UNK_0x16F2683693E537C9(), 1))
	{
		if (UNK_0xC844350D5D58C99A(bLocal_167))
		{
			if (UNK_0xD59B17D2DFF98E26(bLocal_167))
			{
				UNK_0x15AFB6CBDE990FB6(bLocal_167, 1, true);
			}
			UNK_0xF690C84DADBB3551(&bLocal_167);
			func_110();
			func_107();
			iLocal_47 = 9;
		}
	}
}

bool func_117(int iParam0)
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

bool func_118(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_133(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_119(sParam2, iParam3, 0);
}

int func_119(char* sParam0, int iParam1, bool bParam2)
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
					func_132();
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
		if (func_131(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_130();
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
				func_129();
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
				if (func_128())
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
			if (func_127())
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
			func_126();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_125();
		func_120();
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
		func_132();
	}
	return 0;
}

void func_120()
{
	if (!func_121())
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

bool func_121()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_124())
	{
		return false;
	}
	if (func_122(UNK_0xD803B885F5E47A62()))
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

bool func_122(int iParam0)
{
	return func_123(iParam0, 20);
}

bool func_123(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_124()
{
	return -1;
}

void func_125()
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

void func_126()
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

bool func_127()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_128()
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

void func_129()
{
	if (func_39(14))
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
		Global_19486 = func_44();
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

void func_130()
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

bool func_131(bool bParam0, int iParam1)
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

void func_132()
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

void func_133(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_134()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_135(bool bParam0)
{
	if (bParam0)
	{
		func_141();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_140(0))
		{
			func_136(0);
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

void func_136(int iParam0)
{
	if (func_139())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_138())
		{
			func_137(1, 1);
		}
		else
		{
			func_137(0, 0);
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
	if (!func_127())
	{
		Global_19486.f_1 = 3;
	}
}

void func_137(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_140(0))
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

bool func_138()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_139()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_140(int iParam0)
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

void func_141()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_142(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_149(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_127())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_148(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_149(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_148(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_146(UNK_0xD803B885F5E47A62())) && !func_144(UNK_0xD803B885F5E47A62(), 0)) && !func_143()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_146(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_143()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_144(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_145(-1, 0) == 8;
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

int func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

bool func_146(bool bParam0)
{
	if (func_144(bParam0, 0))
	{
		return true;
	}
	if (func_147())
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

bool func_147()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_148(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_149(int iParam0)
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

bool func_150()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
	{
		if (iLocal_49 == 1)
		{
			if (!bLocal_165)
			{
				if (!UNK_0x3D1053F9EB43B7AD(iLocal_114[0], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, true, 0))
				{
					bLocal_165 = true;
				}
			}
			if (!bLocal_166)
			{
				if (!UNK_0x3D1053F9EB43B7AD(iLocal_114[1], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, true, 0))
				{
					bLocal_166 = true;
				}
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!bLocal_165)
			{
				if ((!UNK_0x3D1053F9EB43B7AD(iLocal_114[0], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(iLocal_114[0], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(iLocal_114[0], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
				{
					UNK_0xF3268524E9BE6D6E(iLocal_114[0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					bLocal_165 = true;
				}
			}
			if (!bLocal_166)
			{
				if ((!UNK_0x3D1053F9EB43B7AD(iLocal_114[1], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(iLocal_114[1], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(iLocal_114[1], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
				{
					UNK_0xF3268524E9BE6D6E(iLocal_114[1], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					bLocal_166 = true;
				}
			}
		}
	}
	if (bLocal_165 && bLocal_166)
	{
		return true;
	}
	return false;
}

void func_151()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_167, true) };
	vVar3 = { UNK_0x835730A2D89F6093(bLocal_167, 2) };
	UNK_0xF690C84DADBB3551(&bLocal_167);
	bLocal_167 = UNK_0x7707E48765093646(joaat("PROP_CS_DUFFEL_01"), vVar0, true, true, false);
	UNK_0xC023D1C4BF532815(bLocal_167, vVar3, 2, 1);
}

void func_152()
{
	if (UNK_0xC844350D5D58C99A(iLocal_114[0]))
	{
		if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(iLocal_114[0], false)) > 200f && UNK_0x03068588A1FCED1A(iLocal_114[0]))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_185[0]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_185[0]));
			}
			UNK_0x6DAD7906B73F064D(&(iLocal_114[0]));
			bLocal_147 = true;
		}
	}
	else
	{
		bLocal_147 = true;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_175))
	{
		if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_175, false)) > 200f && UNK_0x03068588A1FCED1A(bLocal_175))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_191))
			{
				UNK_0x142CC44DB769B57E(&iLocal_191);
			}
			UNK_0x046C362CF15F1935(&bLocal_175);
			bLocal_148 = true;
		}
	}
	else
	{
		bLocal_148 = true;
	}
	if (bLocal_161)
	{
		if (bLocal_148)
		{
			if (func_170())
			{
				iLocal_47 = 13;
			}
			else
			{
				SYSTEM::WAIT(0);
				iLocal_46 = 2;
			}
		}
	}
	else if (bLocal_147)
	{
		SYSTEM::WAIT(0);
		if (func_170())
		{
			iLocal_47 = 13;
		}
		else
		{
			iLocal_46 = 2;
		}
	}
}

void func_153()
{
	if (!UNK_0x437347B10A200C4B(bLocal_175, 0))
	{
		if (UNK_0x7F6DC62EA9922664(bLocal_175) < 800)
		{
			UNK_0xD458AC1C1D29C3B4(bLocal_175, false, false);
			UNK_0x5DAB50E08C3C504A(bLocal_175, 10f);
		}
	}
}

void func_154()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (UNK_0xC844350D5D58C99A(iLocal_114[iVar0]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar0]))
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_185[iVar0]))
				{
					UNK_0x142CC44DB769B57E(&(iLocal_185[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_155()
{
	int iVar0;
	int iVar1;

	if (iLocal_49 == 1)
	{
		if (UNK_0xEB6A8945D1AC98A1(iLocal_114[0]) && UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
		{
			iLocal_47 = 7;
		}
	}
	else if (iLocal_49 == 2)
	{
		if (UNK_0xEB6A8945D1AC98A1(iLocal_114[0]) && UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
		{
			iLocal_47 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_114)
	{
		if (UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar0]))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_185[iVar0]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_185[iVar0]));
			}
		}
		iVar0++;
	}
	if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
	{
		if (!bLocal_140)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_111 - 1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar1]))
				{
					UNK_0x6C3AE6E278DB3D0E(iLocal_114[iVar1], UNK_0x16F2683693E537C9(), 0, 16);
				}
				iVar1++;
			}
			bLocal_140 = true;
			if (UNK_0xD59B17D2DFF98E26(bLocal_167))
			{
				iLocal_47 = 5;
			}
		}
	}
	if (!bLocal_154 && !bLocal_140)
	{
		UNK_0xC92DB9682A650680("RE51A_SHOP");
		func_52();
		SYSTEM::WAIT(0);
		if (iLocal_49 == 1)
		{
			if (func_118(&uLocal_232, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				bLocal_154 = true;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (func_118(&uLocal_232, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				bLocal_154 = true;
			}
		}
	}
	if ((bLocal_154 && !bLocal_155) && !bLocal_140)
	{
		if (!func_134())
		{
			if (func_44() == 0)
			{
				func_118(&uLocal_232, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_44() == 1)
			{
				func_118(&uLocal_232, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_44() == 2)
			{
				func_118(&uLocal_232, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			bLocal_155 = true;
		}
	}
	if (!bLocal_140)
	{
		if (!func_134())
		{
			if (bLocal_155 && !bLocal_156)
			{
				if (iLocal_49 == 1)
				{
					if (func_173(&uLocal_232, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						bLocal_156 = true;
					}
				}
				else if (iLocal_49 == 2)
				{
					if (func_173(&uLocal_232, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						bLocal_156 = true;
					}
				}
			}
		}
		if (iLocal_49 == 1)
		{
			if (!func_134())
			{
				if (!bLocal_157)
				{
					if (iLocal_49 == 1)
					{
						func_118(&uLocal_232, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_49 == 2)
					{
						func_118(&uLocal_232, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					bLocal_157 = true;
				}
			}
		}
		else if (iLocal_49 == 2)
		{
			if (SYSTEM::TIMERA() > 4000)
			{
				if (!bLocal_157)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_167))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
						{
							bLocal_157 = true;
						}
					}
				}
			}
			if (UNK_0xC844350D5D58C99A(bLocal_167) && !UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
			{
				if (!bLocal_178)
				{
					bLocal_178 = true;
				}
			}
		}
		if (!bLocal_138)
		{
			if (iLocal_49 == 1)
			{
				if (SYSTEM::TIMERA() > 14100)
				{
					UNK_0xF690C84DADBB3551(&(iLocal_168[0]));
					UNK_0xF690C84DADBB3551(&(iLocal_168[1]));
					if (UNK_0xDF1306B443CD3D15(bLocal_175, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
						{
							UNK_0xA3BF0AA5A2608191(iLocal_114[0]);
							UNK_0xDD353D0E9C789D0E(&iLocal_152);
							UNK_0xBC43ED9FE28DB191(false);
							UNK_0x5B1D360B9C6F0A09(false, bLocal_175, -1, false, 2f, 1, 0);
							UNK_0x75ABDC5F81978924(iLocal_152);
							UNK_0x78ADC381772E3D54(iLocal_114[0], iLocal_152);
							UNK_0xF82EA857DA10E0CD(&iLocal_152);
						}
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
						{
							UNK_0xBD453909DC26A85D(iLocal_114[1], joaat("MOTIONSTATE_RUN"), true, 0, 0);
							UNK_0xDD353D0E9C789D0E(&iLocal_152);
							UNK_0xBC43ED9FE28DB191(false);
							UNK_0x5B1D360B9C6F0A09(false, bLocal_175, -1, true, 2f, 1, 0);
							UNK_0x75ABDC5F81978924(iLocal_152);
							UNK_0x78ADC381772E3D54(iLocal_114[1], iLocal_152);
							UNK_0xF82EA857DA10E0CD(&iLocal_152);
						}
						iLocal_47 = 2;
						bLocal_138 = true;
					}
					else
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
						{
							UNK_0xE8832A9E16A57A1F(iLocal_114[0], true, 1);
							UNK_0x327AAEE25F323797(iLocal_114[0]);
							UNK_0xDD353D0E9C789D0E(&iLocal_152);
							UNK_0xBC43ED9FE28DB191(false);
							UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_152);
							UNK_0x78ADC381772E3D54(iLocal_114[0], iLocal_152);
							UNK_0xF82EA857DA10E0CD(&iLocal_152);
						}
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
						{
							UNK_0xE8832A9E16A57A1F(iLocal_114[1], true, 1);
							UNK_0x327AAEE25F323797(iLocal_114[1]);
							UNK_0xDD353D0E9C789D0E(&iLocal_152);
							UNK_0xBC43ED9FE28DB191(false);
							UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_152);
							UNK_0x78ADC381772E3D54(iLocal_114[1], iLocal_152);
							UNK_0xF82EA857DA10E0CD(&iLocal_152);
						}
						iLocal_47 = 2;
						bLocal_138 = true;
					}
				}
			}
			else if (iLocal_49 == 2)
			{
				if (UNK_0xA45992A6CE82FB43(iLocal_216) > 0.453f)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
					{
						UNK_0x11AD11297DC58CC7(iLocal_117[0], true);
						UNK_0xDD353D0E9C789D0E(&iLocal_152);
						UNK_0xC6EB89C59F2AF6B8(false, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, false, 0, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_152);
						UNK_0x78ADC381772E3D54(iLocal_117[0], iLocal_152);
						UNK_0xF82EA857DA10E0CD(&iLocal_152);
						UNK_0xFADC0A217229F6B5(iLocal_117[0], true);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]))
					{
						UNK_0xA3BF0AA5A2608191(iLocal_114[0]);
						UNK_0xBAFED2F6486F771A(iLocal_114[0], 128, true);
						UNK_0xBAFED2F6486F771A(iLocal_114[0], 1, true);
						UNK_0xAFF39FB306F8E232(iLocal_114[0], 17, true);
						UNK_0xCAF7AE54F764D5AA(iLocal_114[0], 1.6f);
						UNK_0xE8832A9E16A57A1F(iLocal_114[0], true, 1);
						UNK_0xDD353D0E9C789D0E(&iLocal_152);
						UNK_0xC6EB89C59F2AF6B8(false, "random@robbery", "run", 2f, -2f, -1, 49, false, 0, 0, 0);
						UNK_0xF44B0E19CAC31C33(false, "re_shoprobbery", 0, 0, 16);
						UNK_0xBC43ED9FE28DB191(false);
						UNK_0x75ABDC5F81978924(iLocal_152);
						UNK_0x78ADC381772E3D54(iLocal_114[0], iLocal_152);
						UNK_0xF82EA857DA10E0CD(&iLocal_152);
						UNK_0xFADC0A217229F6B5(iLocal_114[0], true);
						SYSTEM::SETTIMERB(0);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
					{
						UNK_0xBAFED2F6486F771A(iLocal_114[1], 128, true);
						UNK_0xBAFED2F6486F771A(iLocal_114[1], 1, true);
						UNK_0xAFF39FB306F8E232(iLocal_114[1], 17, true);
						UNK_0xCAF7AE54F764D5AA(iLocal_114[1], 1.6f);
						UNK_0xE8832A9E16A57A1F(iLocal_114[1], true, 1);
						UNK_0xDD353D0E9C789D0E(&iLocal_152);
						UNK_0xBC43ED9FE28DB191(false);
						UNK_0xF44B0E19CAC31C33(false, "re_shoprobbery2", 0, 0, 17);
						UNK_0x75ABDC5F81978924(iLocal_152);
						UNK_0x78ADC381772E3D54(iLocal_114[1], iLocal_152);
						UNK_0xF82EA857DA10E0CD(&iLocal_152);
						UNK_0xFADC0A217229F6B5(iLocal_114[1], true);
					}
					iLocal_47 = 2;
					bLocal_138 = true;
				}
			}
			UNK_0x51B096AAC60548C1(0f);
		}
	}
}

void func_156()
{
	switch (iLocal_227)
	{
		case 0:
			func_142(1, 1, 1, 0, 0, 0);
			UNK_0x745CE398A4B0A3C6(func_157(UNK_0xD803B885F5E47A62()), 10f, 0);
			iLocal_226 = UNK_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
			UNK_0xE3BB8E05FCEB3FBE(iLocal_226, true);
			UNK_0x93E9ED66DAB9FBE3(iLocal_226, iLocal_216, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_49 == 1)
			{
				UNK_0xB8842F7C7761A196("Hair_room");
			}
			UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			iLocal_228 = UNK_0x1C0640BA9A7327B3() + 3500;
			iLocal_227++;
			break;
		case 1:
			if (iLocal_228 < UNK_0x1C0640BA9A7327B3())
			{
				if (iLocal_49 == 1)
				{
					UNK_0x2FB9A57162E54BAB(115f);
					UNK_0xEF6276132B396452(-9.1222f, 1065353216 /* Float: 1f */);
				}
				else if (iLocal_49 == 2)
				{
					UNK_0x2FB9A57162E54BAB(44.5236f);
					UNK_0xEF6276132B396452(-18.1582f, 1065353216 /* Float: 1f */);
				}
				UNK_0x486B4ADE317F0689();
				UNK_0xE3BB8E05FCEB3FBE(iLocal_226, false);
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				func_54();
				func_142(0, 1, 1, 0, 0, 0);
				iLocal_227++;
			}
			break;
		case 2:
			break;
	}
}

Vector3 func_157(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_158()
{
	int iVar0;

	if (!bLocal_136 && func_161(1, 0, 1))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_193))
		{
			UNK_0x142CC44DB769B57E(&iLocal_193);
		}
		func_142(1, 1, 1, 0, 0, 0);
		UNK_0xA37A90C62806D848(1);
		UNK_0x8BCB70EB440DED83(0);
		UNK_0xBFE31971E49FA500(0);
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
		UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
		if (iLocal_49 == 1)
		{
			if (!bLocal_177)
			{
				iLocal_216 = UNK_0xE9744DB7B8CA6965(vLocal_201, vLocal_207, 2);
				UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
				UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_216, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1148846080, 0);
				UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 1, 0);
				if (((!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_114[1])) && !UNK_0xEB6A8945D1AC98A1(iLocal_117[0])) && UNK_0xC844350D5D58C99A(bLocal_167))
				{
					UNK_0x915804B434753CBD(iLocal_114[0], iLocal_216, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1148846080, 0);
					UNK_0x915804B434753CBD(iLocal_114[1], iLocal_216, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1148846080, 0);
					UNK_0x915804B434753CBD(iLocal_117[0], iLocal_216, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1148846080, 0);
					UNK_0xE14EC663EED44AD5(bLocal_167, iLocal_216, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1148846080 /* Float: 1000f */);
				}
				UNK_0x57E0CF9BF653D99A(iLocal_216, 0.06f);
				bLocal_177 = true;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[0]))
			{
				UNK_0xA3BF0AA5A2608191(iLocal_117[0]);
				UNK_0xC6EB89C59F2AF6B8(iLocal_117[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, false, 0, 0, 0);
			}
			UNK_0x9E632F16E887F781(-1195.062f, -773.2098f, 16.324f, 20f, 4);
			iLocal_216 = UNK_0xE9744DB7B8CA6965(vLocal_201, vLocal_207, 2);
			if (((!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_114[1])) && !UNK_0xEB6A8945D1AC98A1(iLocal_117[0])) && UNK_0xC844350D5D58C99A(bLocal_167))
			{
				UNK_0x915804B434753CBD(iLocal_114[0], iLocal_216, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1148846080, 0);
				UNK_0x915804B434753CBD(iLocal_117[0], iLocal_216, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1148846080, 0);
				if (UNK_0xC844350D5D58C99A(iLocal_168[0]) && UNK_0xC844350D5D58C99A(iLocal_168[1]))
				{
					UNK_0x9F528B1B53FBC5D9(iLocal_168[0], iLocal_117[0], UNK_0x4A089F2B762B8D33(iLocal_117[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					UNK_0x9F528B1B53FBC5D9(iLocal_168[1], iLocal_117[0], UNK_0x4A089F2B762B8D33(iLocal_117[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			UNK_0x57E0CF9BF653D99A(iLocal_216, 0.05f);
			vLocal_201 = { -1199.369f, -776.1991f, 16.3235f };
			vLocal_207 = { 0f, 0f, -60f };
			iLocal_216 = UNK_0xE9744DB7B8CA6965(vLocal_201, vLocal_207, 2);
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
			{
				UNK_0x915804B434753CBD(iLocal_114[1], iLocal_216, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1148846080, 0);
			}
			UNK_0x57E0CF9BF653D99A(iLocal_216, 0.06f);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1200.455f, -777.6201f, 16.3244f, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 305.3806f);
			UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
			UNK_0xDD353D0E9C789D0E(&iLocal_152);
			UNK_0xC6EB89C59F2AF6B8(false, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, 0, 0, 0);
			UNK_0xC6EB89C59F2AF6B8(false, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, false, 0, 0, 0);
			UNK_0x75ABDC5F81978924(iLocal_152);
			UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iLocal_152);
			UNK_0xF82EA857DA10E0CD(&iLocal_152);
			UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
		}
		bLocal_136 = true;
	}
	if (!bLocal_176)
	{
		func_159();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_185[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar0]))
			{
				iLocal_185[iVar0] = func_171(iLocal_114[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_49 == 1 && UNK_0xC844350D5D58C99A(bLocal_175)) || iLocal_49 == 2)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_47 = 1;
	}
}

void func_159()
{
	bool bVar0;

	bVar0 = joaat("BALLER");
	if (!bLocal_179)
	{
		UNK_0x523BCC9DC80CD82F(bVar0);
		if (UNK_0xB87F6CF6E5628C67(bVar0))
		{
			bLocal_179 = true;
		}
		else
		{
			UNK_0x523BCC9DC80CD82F(bVar0);
		}
	}
	else if (UNK_0xB87F6CF6E5628C67(bVar0))
	{
		if (func_160())
		{
			if (UNK_0x3D1053F9EB43B7AD(bLocal_171, -828.3692f, -194.4669f, 36.41385f, -824.5801f, -201.1353f, 39.39436f, 4.3125f, 0, true, 0))
			{
				vLocal_172 = { -822.1784f, -205.811f, 36.3444f };
			}
			else
			{
				vLocal_172 = { -826.2828f, -197.8547f, 36.3995f };
			}
		}
		else
		{
			vLocal_172 = { -826.2828f, -197.8547f, 36.3995f };
		}
		bLocal_175 = UNK_0x122AAB0B1D6F55AD(bVar0, vLocal_172, 31.9252f, true, true, false);
		UNK_0xE8832A9E16A57A1F(bLocal_175, true, 1);
		UNK_0xB9FD7450C0DAB575(bLocal_175, 1084227584 /* Float: 5f */);
		UNK_0x56FDC9ADE35F7DB0(bLocal_175, true, true, 0);
		bLocal_184 = UNK_0x852A19533F896693(bLocal_175, 26, joaat("G_M_Y_KOREAN_01"), -1, 1, true);
		UNK_0x4E885A246A9D983A(bLocal_184, 134, true);
		UNK_0x11AD11297DC58CC7(bLocal_184, true);
		UNK_0x6DF7BF67E86AAE86(bLocal_184, bLocal_190);
		UNK_0xAFF39FB306F8E232(bLocal_184, 8, false);
		UNK_0x083F03A847B640E9(bLocal_184, 0);
		UNK_0x298903DD96203C2C(bLocal_184, 13);
		UNK_0x262EF6C6306BEA6C(bLocal_184, joaat("WEAPON_PISTOL"), -1, true, true);
		UNK_0xE2F0767314863BD8(bLocal_184, 1, 0);
		UNK_0x4E885A246A9D983A(bLocal_184, 42, true);
		bLocal_176 = true;
	}
}

bool func_160()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		if (UNK_0x5A91F08DF773C39D(bVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, false, true, 0))
		{
			bLocal_171 = bVar0;
			if (!UNK_0xAF6690C489CC6203(bLocal_171))
			{
				UNK_0x73270B3C9CC833FD(bLocal_171, true, 0);
			}
			return true;
		}
	}
	return false;
}

bool func_161(bool bParam0, bool bParam1, bool bParam2)
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

void func_162()
{
	func_236();
}

int func_163(bool bParam0)
{
	if (func_164())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_63(Global_111627))
		{
			func_101(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_63(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

bool func_164()
{
	switch (func_165(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_165(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_169(0))
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
		if (!func_167(iParam2))
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
			func_166(uParam0, iParam4);
		}
	}
	return 2;
}

void func_166(var uParam0, int iParam1)
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

bool func_167(int iParam0)
{
	return func_168(iParam0, Global_41431);
}

int func_168(int iParam0, int iParam1)
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

bool func_169(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_167(iParam0))
	{
		return false;
	}
	return true;
}

bool func_170()
{
	if (iLocal_49 == 1)
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -803.4598f, -175.8135f, 36.28367f, -823.0242f, -187.0462f, 40.53547f, 11.9375f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -823.3706f, -188.0602f, 36.62162f, -822.8361f, -187.7466f, 39.06914f, 1.5f, 0, true, 0))
		{
			return true;
		}
	}
	else if (iLocal_49 == 2)
	{
		if (((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1203.899f, -776.9178f, 20.16803f, -1201.289f, -780.4698f, 15.61526f, 3.9375f, 0, true, 0)) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
		{
			return true;
		}
	}
	return false;
}

int func_171(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_114(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

bool func_172()
{
	int iVar0;

	if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, false, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -1201.017f, -777.5527f, 16.3398f, 12f, 12f, 12f, false, true, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_114[0], UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(iLocal_114[1], UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
			if (UNK_0xE115347EA59F7B86(iLocal_114[0], UNK_0x16F2683693E537C9()) || UNK_0xE115347EA59F7B86(iLocal_114[1], UNK_0x16F2683693E537C9()))
			{
				if (((UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_114[0]) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_114[0])) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_114[1])) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_114[1]))
				{
					if (iLocal_126 == -1)
					{
						iLocal_126 = UNK_0x1C0640BA9A7327B3();
					}
				}
				else
				{
					iLocal_126 = -1;
				}
				if (iLocal_126 != -1 && UNK_0x1C0640BA9A7327B3() > iLocal_126 + 1500)
				{
					return true;
				}
			}
		}
	}
	if (UNK_0x372F6F38C16E36DA(-1, vLocal_194 - Vector(20f, 20f, 20f), vLocal_194 + Vector(20f, 20f, 20f)))
	{
		return true;
	}
	if (UNK_0x437347B10A200C4B(iLocal_114[0], 0) || UNK_0x437347B10A200C4B(iLocal_114[1], 0))
	{
		return true;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && func_170())
	{
		return true;
	}
	if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) && func_170())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_114[1]))
	{
		if (((UNK_0x4A42C22237F5FF76(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(iLocal_114[1], true) - Vector(12f, 12f, 12f), UNK_0x68F4C0EC296D3901(iLocal_114[1], true) + Vector(12f, 12f, 12f), 0, 1) && !UNK_0x52AE17073D025311(UNK_0x16F2683693E537C9())) || UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(iLocal_114[0], true), 3f, true)) || UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(iLocal_114[1], true), 3f, true))
		{
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_117)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_117[iVar0]))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_117[iVar0], UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_121)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_121[iVar0]))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_121[iVar0], UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_173(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_133(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_119(sParam2, iParam4, 0);
}

bool func_174()
{
	if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, false, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -1201.017f, -777.5527f, 16.3398f, 4f, 4f, 4f, false, true, 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 22, 1);
		UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), 1f);
		UNK_0xD5EF6A937E06E46F(UNK_0x16F2683693E537C9(), 0, 1, 0);
		return true;
	}
	return false;
}

void func_175()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[1]))
	{
		if (UNK_0xCED082ADD3739B9F(iLocal_117[1]))
		{
			func_176(iLocal_117[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_176(iLocal_117[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		UNK_0x08082071A5F7C155(iLocal_117[1], 26, 0f, 0);
	}
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[1]))
	{
		func_176(iLocal_121[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		UNK_0x08082071A5F7C155(iLocal_121[1], 3, 0f, 0);
	}
}

void func_176(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_177(iParam3), 0);
}

int func_177(int iParam0)
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

void func_178()
{
	int iVar0;

	UNK_0x060F249A9A3E3F4E(false);
	UNK_0xF63400DBE3303D26("ROBBERS", &bLocal_190);
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		iLocal_114[iVar0] = UNK_0x36F2404464202779(26, bLocal_222, vLocal_55[iVar0 /*3*/], fLocal_62[iVar0], 1, true);
		UNK_0x11AD11297DC58CC7(iLocal_114[iVar0], true);
		UNK_0x6DF7BF67E86AAE86(iLocal_114[iVar0], bLocal_190);
		UNK_0xAFF39FB306F8E232(iLocal_114[iVar0], 8, false);
		UNK_0x083F03A847B640E9(iLocal_114[iVar0], 0);
		UNK_0x298903DD96203C2C(iLocal_114[iVar0], 13);
		UNK_0x262EF6C6306BEA6C(iLocal_114[iVar0], joaat("WEAPON_PISTOL"), -1, true, true);
		UNK_0xE2F0767314863BD8(iLocal_114[iVar0], 1, 0);
		UNK_0x4E885A246A9D983A(iLocal_114[iVar0], 42, true);
		UNK_0x4E885A246A9D983A(iLocal_114[iVar0], 269, true);
		UNK_0x4E885A246A9D983A(iLocal_114[iVar0], 188, true);
		UNK_0xF4CB0B98F8F79D8D(iLocal_114[iVar0], 0);
		UNK_0xBAFED2F6486F771A(iLocal_114[iVar0], 128, true);
		UNK_0xBAFED2F6486F771A(iLocal_114[iVar0], 8, true);
		iVar0++;
	}
	UNK_0x5F2AA9E2843E9403(iLocal_114[0], "pedRobber[0]");
	UNK_0x5F2AA9E2843E9403(iLocal_114[1], "pedRobber[1]");
	UNK_0x0E2400AB9174FA81(5, bLocal_190, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_190);
	UNK_0x0E2400AB9174FA81(5, bLocal_190, joaat("COP"));
	UNK_0x0E2400AB9174FA81(5, joaat("COP"), bLocal_190);
	if (func_44() == 0)
	{
		func_183(&uLocal_232, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_183(&uLocal_232, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_183(&uLocal_232, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	bLocal_167 = UNK_0x7707E48765093646(bLocal_188, vLocal_97, true, true, false);
	if (iLocal_49 == 1)
	{
		UNK_0x7D6CA5F52B3748BF(vLocal_128 - Vector(20f, 20f, 20f), vLocal_128 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		UNK_0xAB8E2DDC7AF955E0(joaat("BALLER"), true);
		iLocal_168[0] = UNK_0x7707E48765093646(joaat("PROP_ANIM_CASH_PILE_01"), vLocal_97, true, true, false);
		iLocal_168[1] = UNK_0x7707E48765093646(joaat("PROP_ANIM_CASH_PILE_01"), vLocal_97 - Vector(0.1f, 0f, 0f), true, true, false);
		UNK_0x4F39CC3882DD074E(iLocal_114[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		UNK_0x4F39CC3882DD074E(iLocal_114[1], "G_M_Y_Korean_01_Korean_MINI_02");
		vLocal_201 = { -821.565f, -186.467f, 36.6f };
		vLocal_207 = { 0f, 0f, -59.96f };
		iLocal_216 = UNK_0xE9744DB7B8CA6965(vLocal_201, vLocal_207, 2);
		UNK_0xC90224D9E95E5E3A(iLocal_216, true);
		UNK_0x915804B434753CBD(iLocal_114[1], iLocal_216, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1148846080, 0);
		UNK_0xE14EC663EED44AD5(bLocal_167, iLocal_216, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 1090519040, 0, 1148846080 /* Float: 1000f */);
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			iLocal_117[iVar0] = UNK_0x36F2404464202779(26, bLocal_219, vLocal_65[iVar0 /*3*/], fLocal_75[iVar0], 1, true);
			UNK_0xAFF39FB306F8E232(iLocal_117[iVar0], 17, true);
			UNK_0x11AD11297DC58CC7(iLocal_117[iVar0], true);
			UNK_0x25C5402CC10F76CD(iLocal_117[iVar0], false);
			UNK_0x4E885A246A9D983A(iLocal_117[iVar0], 269, true);
			iVar0++;
		}
		UNK_0x5F2AA9E2843E9403(iLocal_117[0], "pedWorker[0]");
		UNK_0x5F2AA9E2843E9403(iLocal_117[1], "pedWorker[1]");
		UNK_0x5F2AA9E2843E9403(iLocal_117[2], "pedWorker[2]");
		iLocal_121[0] = UNK_0x36F2404464202779(26, bLocal_220, vLocal_79[0 /*3*/], fLocal_92[0], 1, true);
		UNK_0xAFF39FB306F8E232(iLocal_121[0], 17, true);
		UNK_0x11AD11297DC58CC7(iLocal_121[0], true);
		UNK_0x25C5402CC10F76CD(iLocal_121[0], false);
		UNK_0x4E885A246A9D983A(iLocal_121[0], 269, true);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_121[iVar0] = UNK_0x36F2404464202779(26, bLocal_221, vLocal_79[iVar0 /*3*/], fLocal_92[iVar0], 1, true);
			UNK_0xAFF39FB306F8E232(iLocal_121[iVar0], 17, true);
			UNK_0x11AD11297DC58CC7(iLocal_121[iVar0], true);
			UNK_0x25C5402CC10F76CD(iLocal_121[iVar0], false);
			UNK_0x4E885A246A9D983A(iLocal_121[iVar0], 269, true);
			iVar0++;
		}
		UNK_0x5F2AA9E2843E9403(iLocal_121[0], "pedShopper[0]");
		UNK_0x5F2AA9E2843E9403(iLocal_121[1], "pedShopper[1]");
		UNK_0x5F2AA9E2843E9403(iLocal_121[2], "pedShopper[2]");
		UNK_0x64F9F278AB9DCA2C(iLocal_117[0], false, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[0], 2, true, true, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[0], 3, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[0], 4, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[0], 5, false, false, 0);
		UNK_0x915804B434753CBD(iLocal_117[0], iLocal_216, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1148846080, 0);
		UNK_0x4F39CC3882DD074E(iLocal_117[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_183(&uLocal_232, 5, iLocal_117[0], "REROBShopworker", 0, 1);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[1], false, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[1], 2, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[1], 3, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[1], 4, true, 2, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[1], 5, false, false, 0);
		UNK_0x8BE3D040D15AEA1D(iLocal_117[1], -1);
		UNK_0xFADC0A217229F6B5(iLocal_117[1], true);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[2], false, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[2], 2, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[2], 3, false, 2, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[2], 4, true, 2, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_117[2], 5, false, false, 0);
		UNK_0x8BE3D040D15AEA1D(iLocal_117[2], -1);
		UNK_0xFADC0A217229F6B5(iLocal_117[2], true);
		iLocal_216 = UNK_0xE9744DB7B8CA6965(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		UNK_0xC90224D9E95E5E3A(iLocal_216, true);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[0], false, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[0], 2, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[0], 3, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[0], 4, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[0], 8, false, false, 0);
		UNK_0x915804B434753CBD(iLocal_121[0], iLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		UNK_0xFADC0A217229F6B5(iLocal_121[0], true);
		iLocal_216 = UNK_0xE9744DB7B8CA6965(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		UNK_0xC90224D9E95E5E3A(iLocal_216, true);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[1], false, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[1], 2, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[1], 3, true, true, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[1], 4, true, true, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[1], 8, false, false, 0);
		UNK_0x915804B434753CBD(iLocal_121[1], iLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		UNK_0xFADC0A217229F6B5(iLocal_121[1], true);
		iLocal_216 = UNK_0xE9744DB7B8CA6965(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		UNK_0xC90224D9E95E5E3A(iLocal_216, true);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[2], false, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[2], 2, false, 2, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[2], 3, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[2], 4, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(iLocal_121[2], 8, false, false, 0);
		UNK_0x915804B434753CBD(iLocal_121[2], iLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		UNK_0xFADC0A217229F6B5(iLocal_121[2], true);
		UNK_0x9BE7E7B6B488CC55(iLocal_114[0], iLocal_117[0], -1, 0);
		UNK_0xF858EFDE1871B5F2(-871f, -246f, 0f, -798f, -163f, 50f, false, 1);
		UNK_0x8A222F0405967452("Hairdresser1");
		func_182(0, 1);
		func_181(0);
		SYSTEM::WAIT(500);
		func_179(0, 0, 0);
	}
	else if (iLocal_49 == 2)
	{
		UNK_0x7D6CA5F52B3748BF(vLocal_131 - Vector(20f, 20f, 20f), vLocal_131 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		UNK_0xC023D1C4BF532815(bLocal_167, vLocal_100, 2, 1);
		iLocal_117[0] = UNK_0x36F2404464202779(26, bLocal_219, vLocal_65[0 /*3*/], fLocal_75[0], 1, true);
		UNK_0x5F2AA9E2843E9403(iLocal_117[0], "pedWorker[0]");
		UNK_0x4F39CC3882DD074E(iLocal_117[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_183(&uLocal_232, 6, iLocal_117[0], "REROBShopworker2", 0, 1);
		iLocal_117[1] = UNK_0x36F2404464202779(26, bLocal_218, vLocal_65[1 /*3*/], fLocal_75[1], 1, true);
		UNK_0x5F2AA9E2843E9403(iLocal_117[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			UNK_0xAFF39FB306F8E232(iLocal_117[iVar0], 17, true);
			UNK_0x11AD11297DC58CC7(iLocal_117[iVar0], true);
			UNK_0x25C5402CC10F76CD(iLocal_117[iVar0], false);
			UNK_0x4E885A246A9D983A(iLocal_117[iVar0], 269, true);
			iVar0++;
		}
		iLocal_121[0] = UNK_0x36F2404464202779(26, bLocal_220, vLocal_79[0 /*3*/], fLocal_92[0], 1, true);
		UNK_0x5F2AA9E2843E9403(iLocal_121[0], "pedShopper[0]");
		iLocal_121[1] = UNK_0x36F2404464202779(26, bLocal_221, vLocal_79[1 /*3*/], fLocal_92[1], 1, true);
		UNK_0x5F2AA9E2843E9403(iLocal_121[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_113 - 1))
		{
			UNK_0xAFF39FB306F8E232(iLocal_121[iVar0], 17, true);
			UNK_0x11AD11297DC58CC7(iLocal_121[iVar0], true);
			UNK_0x25C5402CC10F76CD(iLocal_121[iVar0], false);
			UNK_0x4E885A246A9D983A(iLocal_121[iVar0], 269, true);
			iVar0++;
		}
		UNK_0xC6EB89C59F2AF6B8(iLocal_117[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, false, 0, 0, 0);
		UNK_0xFADC0A217229F6B5(iLocal_117[0], true);
		UNK_0xC6EB89C59F2AF6B8(iLocal_117[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, false, 0, 0, 0);
		UNK_0xFADC0A217229F6B5(iLocal_117[1], true);
		UNK_0x8BE3D040D15AEA1D(iLocal_121[0], -1);
		UNK_0xFADC0A217229F6B5(iLocal_121[0], true);
		UNK_0xC6EB89C59F2AF6B8(iLocal_121[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, false, 0, 0, 0);
		UNK_0xFADC0A217229F6B5(iLocal_121[1], true);
		vLocal_201 = { -1192.01f, -768.929f, 16.358f };
		vLocal_207 = { 0f, 0f, -59.5f };
		iLocal_216 = UNK_0xE9744DB7B8CA6965(vLocal_201, vLocal_207, 2);
		UNK_0xC90224D9E95E5E3A(iLocal_216, true);
		UNK_0x915804B434753CBD(iLocal_114[0], iLocal_216, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1148846080, 0);
		UNK_0x915804B434753CBD(iLocal_117[0], iLocal_216, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1148846080, 0);
		UNK_0xC6EB89C59F2AF6B8(iLocal_114[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, false, 0, 0, 0);
		func_182(14, 1);
		func_181(14);
		SYSTEM::WAIT(500);
		func_179(14, 0, 0);
	}
	func_183(&uLocal_232, 3, iLocal_114[0], "REROBRobber1", 0, 1);
	func_183(&uLocal_232, 4, iLocal_114[1], "REROBRobber2", 0, 1);
	UNK_0x71199B01895C6202(joaat("A_F_Y_BEVHILLS_02"));
	UNK_0x71199B01895C6202(joaat("A_M_Y_BEVHILLS_02"));
	UNK_0x71199B01895C6202(joaat("A_M_Y_HIPSTER_01"));
	UNK_0x71199B01895C6202(joaat("A_F_Y_HIPSTER_04"));
	UNK_0x71199B01895C6202(joaat("G_M_Y_KOREAN_01"));
}

void func_179(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = func_180(iParam0, 0);
	if (iVar1 != 226)
	{
		func_76(iVar1, iVar0);
	}
	iVar1 = func_180(iParam0, 1);
	if (iVar1 != 226)
	{
		func_76(iVar1, iVar0);
	}
}

int func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

void func_181(int iParam0)
{
	func_10(iParam0, 9, 1);
}

void func_182(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_11(iParam0, 4, 1))
		{
			func_10(iParam0, 4, 1);
			func_41(137, 1);
		}
	}
	else if (func_11(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
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

void func_184()
{
	if (!bLocal_135)
	{
		iLocal_153 = UNK_0xFBD08BECC9B87937(vLocal_55[0 /*3*/]);
		UNK_0x0007C2367F4F23F3(iLocal_153);
		bLocal_135 = true;
	}
}

void func_185()
{
	UNK_0x523BCC9DC80CD82F(bLocal_219);
	UNK_0x523BCC9DC80CD82F(bLocal_220);
	UNK_0x523BCC9DC80CD82F(bLocal_221);
	UNK_0x523BCC9DC80CD82F(bLocal_222);
	UNK_0x523BCC9DC80CD82F(joaat("PROP_ANIM_CASH_PILE_01"));
	UNK_0x523BCC9DC80CD82F(joaat("PROP_CS_DUFFEL_01"));
	UNK_0x29398344B9E5B8A7("re_shoprobbery");
	UNK_0x29398344B9E5B8A7("re_shoprobbery2");
	UNK_0x3F423BF5B8125A50("random@robbery");
	UNK_0x3F423BF5B8125A50("random@shop_robbery");
	UNK_0x13896FDECC859926("RE51A_SHOP");
	if ((((((((((UNK_0xB87F6CF6E5628C67(bLocal_219) && UNK_0xB87F6CF6E5628C67(bLocal_220)) && UNK_0xB87F6CF6E5628C67(bLocal_221)) && UNK_0xB87F6CF6E5628C67(bLocal_222)) && UNK_0xB87F6CF6E5628C67(joaat("PROP_ANIM_CASH_PILE_01"))) && UNK_0xB87F6CF6E5628C67(joaat("PROP_CS_DUFFEL_01"))) && UNK_0x1C2E18E9C63BEB77("re_shoprobbery")) && UNK_0x1C2E18E9C63BEB77("re_shoprobbery2")) && UNK_0xB4AE0788C1587752("random@robbery")) && UNK_0xB4AE0788C1587752("random@shop_robbery")) && UNK_0x13896FDECC859926("RE51A_SHOP"))
	{
		bLocal_53 = true;
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(bLocal_219);
		UNK_0x523BCC9DC80CD82F(bLocal_220);
		UNK_0x523BCC9DC80CD82F(bLocal_221);
		UNK_0x523BCC9DC80CD82F(bLocal_222);
		UNK_0x523BCC9DC80CD82F(joaat("PROP_ANIM_CASH_PILE_01"));
		UNK_0x523BCC9DC80CD82F(joaat("PROP_CS_DUFFEL_01"));
		UNK_0x3F423BF5B8125A50("random@robbery");
		UNK_0x3F423BF5B8125A50("random@shop_robbery");
		UNK_0x13896FDECC859926("RE51A_SHOP");
	}
}

void func_186()
{
	iLocal_141[0] = 0;
	iLocal_141[1] = 0;
	if (iLocal_49 == 1)
	{
		bLocal_219 = joaat("A_F_Y_BEVHILLS_02");
		bLocal_220 = joaat("A_M_Y_BEVHILLS_02");
		bLocal_221 = joaat("A_F_Y_BEVHILLS_02");
		bLocal_222 = joaat("G_M_Y_KOREAN_01");
		iLocal_111 = 2;
		iLocal_112 = 3;
		iLocal_113 = 3;
		vLocal_55[0 /*3*/] = { -821.4461f, -184.8474f, 37.5668f };
		fLocal_62[0] = 252.381f;
		vLocal_55[1 /*3*/] = { -819.4664f, -186.8146f, 36.5671f };
		fLocal_62[1] = -153.9562f;
		vLocal_65[0 /*3*/] = { -821.941f, -183.3325f, 36.5689f };
		fLocal_75[0] = 203.3684f;
		vLocal_65[1 /*3*/] = { -813.6672f, -185.5652f, 36.5689f };
		fLocal_75[1] = 90.1761f;
		vLocal_65[2 /*3*/] = { -816.1049f, -183.9966f, 36.5689f };
		fLocal_75[2] = 192.7338f;
		vLocal_79[0 /*3*/] = { -813.008f, -184.931f, 37.869f };
		fLocal_92[0] = 337.68f;
		vLocal_79[1 /*3*/] = { -817.5606f, -190.8273f, 37.3114f };
		fLocal_92[1] = 25.8399f;
		vLocal_79[2 /*3*/] = { -816.1862f, -182.897f, 37.6304f };
		fLocal_92[2] = 30f;
		vLocal_97 = { -822.2148f, -184.0822f, 37.7027f };
		vLocal_100 = { -1.8236f, 0.6172f, 75.8024f };
		vLocal_103 = { -808.5918f, -180.0378f, 36.5689f };
		bLocal_188 = joaat("PROP_CS_DUFFEL_01");
		bLocal_189 = 2000;
		vLocal_194 = { -822.8538f, -187.7645f, 36.5792f };
	}
	else if (iLocal_49 == 2)
	{
		bLocal_218 = joaat("A_M_Y_HIPSTER_01");
		bLocal_219 = joaat("A_F_Y_HIPSTER_04");
		bLocal_220 = joaat("A_M_Y_HIPSTER_01");
		bLocal_221 = joaat("A_F_Y_HIPSTER_04");
		bLocal_222 = joaat("G_M_Y_STRPUNK_02");
		iLocal_111 = 2;
		iLocal_112 = 2;
		iLocal_113 = 2;
		vLocal_55[0 /*3*/] = { -1193.045f, -769.304f, 16.321f };
		fLocal_62[0] = -85.5f;
		vLocal_55[1 /*3*/] = { -1199.045f, -778.8358f, 16.3277f };
		fLocal_62[1] = 329.1899f;
		vLocal_65[0 /*3*/] = { -1193.802f, -766.8922f, 16.331f };
		fLocal_75[0] = 221.3152f;
		vLocal_65[1 /*3*/] = { -1193.85f, -771.4392f, 16.3227f };
		fLocal_75[1] = 247.1149f;
		vLocal_79[0 /*3*/] = { -1184.359f, -767.0463f, 16.3468f };
		fLocal_92[0] = 103.3015f;
		vLocal_79[1 /*3*/] = { -1185.932f, -770.624f, 16.344f };
		fLocal_92[1] = 43.215f;
		vLocal_97 = { -1192.968f, -767.0651f, 17.2968f };
		vLocal_100 = { 0f, 0f, -128.52f };
		vLocal_103 = { -1180.457f, -763.9163f, 16.3267f };
		bLocal_188 = joaat("PROP_CS_DUFFEL_01");
		bLocal_189 = 2000;
		vLocal_194 = { -1201.006f, -777.4955f, 16.3235f };
	}
	bLocal_54 = true;
}

bool func_187()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_198())
		{
			return false;
		}
	}
	if (func_194())
	{
		return true;
	}
	if (func_188(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_188(float fParam0, bool bParam1)
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
		if (func_46(func_44()))
		{
			iVar36 = func_68();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_189(iVar32, &Var0);
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

void func_189(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_190(uParam1, "Abigail1", func_192(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 1:
			func_190(uParam1, "Abigail2", func_192(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 2:
			func_190(uParam1, "Barry1", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 3:
			func_190(uParam1, "Barry2", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		case 4:
			func_190(uParam1, "Barry3", func_192(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 5:
			func_190(uParam1, "Barry3A", func_192(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 6:
			func_190(uParam1, "Barry3C", func_192(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 7:
			func_190(uParam1, "Barry4", func_192(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_191(iParam0), 0, 0);
			break;
		case 8:
			func_190(uParam1, "Dreyfuss1", func_192(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 9:
			func_190(uParam1, "Epsilon1", func_192(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 10:
			func_190(uParam1, "Epsilon2", func_192(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 11:
			func_190(uParam1, "Epsilon3", func_192(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 12:
			func_190(uParam1, "Epsilon4", func_192(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 13:
			func_190(uParam1, "Epsilon5", func_192(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 14:
			func_190(uParam1, "Epsilon6", func_192(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 15:
			func_190(uParam1, "Epsilon7", func_192(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 16:
			func_190(uParam1, "Epsilon8", func_192(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 17:
			func_190(uParam1, "Extreme1", func_192(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 18:
			func_190(uParam1, "Extreme2", func_192(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 19:
			func_190(uParam1, "Extreme3", func_192(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 20:
			func_190(uParam1, "Extreme4", func_192(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 21:
			func_190(uParam1, "Fanatic1", func_192(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_191(iParam0), 1, 0);
			break;
		case 22:
			func_190(uParam1, "Fanatic2", func_192(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_191(iParam0), 1, 0);
			break;
		case 23:
			func_190(uParam1, "Fanatic3", func_192(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_191(iParam0), 0, 1);
			break;
		case 24:
			func_190(uParam1, "Hao1", func_192(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_191(iParam0), 0, 1);
			break;
		case 25:
			func_190(uParam1, "Hunting1", func_192(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 26:
			func_190(uParam1, "Hunting2", func_192(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 27:
			func_190(uParam1, "Josh1", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 28:
			func_190(uParam1, "Josh2", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		case 29:
			func_190(uParam1, "Josh3", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		case 30:
			func_190(uParam1, "Josh4", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 31:
			func_190(uParam1, "Maude1", func_192(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 32:
			func_190(uParam1, "Minute1", func_192(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 33:
			func_190(uParam1, "Minute2", func_192(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 34:
			func_190(uParam1, "Minute3", func_192(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 35:
			func_190(uParam1, "MrsPhilips1", func_192(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 36:
			func_190(uParam1, "MrsPhilips2", func_192(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 37:
			func_190(uParam1, "Nigel1", func_192(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 38:
			func_190(uParam1, "Nigel1A", func_192(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		case 39:
			func_190(uParam1, "Nigel1B", func_192(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		case 40:
			func_190(uParam1, "Nigel1C", func_192(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		case 41:
			func_190(uParam1, "Nigel1D", func_192(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		case 42:
			func_190(uParam1, "Nigel2", func_192(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		case 43:
			func_190(uParam1, "Nigel3", func_192(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		case 44:
			func_190(uParam1, "Omega1", func_192(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 45:
			func_190(uParam1, "Omega2", func_192(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 46:
			func_190(uParam1, "Paparazzo1", func_192(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 47:
			func_190(uParam1, "Paparazzo2", func_192(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 48:
			func_190(uParam1, "Paparazzo3", func_192(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 49:
			func_190(uParam1, "Paparazzo3A", func_192(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 50:
			func_190(uParam1, "Paparazzo3B", func_192(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 51:
			func_190(uParam1, "Paparazzo4", func_192(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 52:
			func_190(uParam1, "Rampage1", func_192(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 54:
			func_190(uParam1, "Rampage3", func_192(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 55:
			func_190(uParam1, "Rampage4", func_192(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 56:
			func_190(uParam1, "Rampage5", func_192(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		case 53:
			func_190(uParam1, "Rampage2", func_192(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		case 57:
			func_190(uParam1, "TheLastOne", func_192(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 58:
			func_190(uParam1, "Tonya1", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 59:
			func_190(uParam1, "Tonya2", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 60:
			func_190(uParam1, "Tonya3", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 61:
			func_190(uParam1, "Tonya4", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		case 62:
			func_190(uParam1, "Tonya5", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_190(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_191(int iParam0)
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

struct<2> func_192(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_193(iParam0) };
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

struct<2> func_193(int iParam0)
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

bool func_194()
{
	if (func_197() && !func_198())
	{
		return true;
	}
	if (func_196() && func_195())
	{
		return true;
	}
	return false;
}

bool func_195()
{
	return Global_111356 > 0;
}

bool func_196()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_197()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_198()
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

bool func_199()
{
	if (!func_167(5))
	{
		return true;
	}
	if (func_194())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_198())
		{
			return false;
		}
	}
	if (func_188(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_200()
{
	if ((Global_111627 == func_72() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_201(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_203(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_202();
}

void func_202()
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

void func_203(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_204(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_72();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_233())
		{
			return false;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_198())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_58(0))
		{
			return false;
		}
		if (func_194())
		{
			return false;
		}
		if (func_232())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_46(func_44()))
		{
			if (func_188(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return false;
			}
		}
		if (!func_231(iParam3))
		{
			return false;
		}
		if (func_46(func_44()))
		{
			if (func_230(func_44()) == 4 || func_230(func_44()) == 5)
			{
				return false;
			}
		}
		if (func_46(func_44()))
		{
			if (!func_229(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_228(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_227())
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
		if (!func_218(4))
		{
			return false;
		}
		if (!func_167(5))
		{
			return false;
		}
		if (func_217(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_217(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_231(30) && !func_217(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_46(func_44()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_216(bVar8))
				{
					if (func_206(iVar4))
					{
						if (!func_205(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_44() != iVar4)
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

bool func_205(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_206(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_207(bVar0);
}

int func_207(bool bParam0)
{
	return func_208(bParam0, 1);
}

int func_208(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_216(bParam0))
	{
		return 0;
	}
	func_209(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_209(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_210(func_86(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_210(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_215(bParam0, bParam1))
	{
		bVar0 = func_93(bParam1);
		iVar1 = func_91(bParam0);
		iVar2 = (func_91(bParam0) - func_91(bParam1));
		iVar3 = (func_93(bParam0) - func_93(bParam1));
		iVar4 = (func_214(bParam0) - func_214(bParam1));
		iVar5 = (func_85(bParam0) - func_85(bParam1));
		iVar6 = (func_213(bParam0) - func_213(bParam1));
		iVar7 = (func_212(bParam0) - func_212(bParam1));
	}
	else
	{
		bVar0 = func_93(bParam0);
		iVar1 = func_91(bParam1);
		iVar2 = (func_91(bParam1) - func_91(bParam0));
		iVar3 = (func_93(bParam1) - func_93(bParam0));
		iVar4 = (func_214(bParam1) - func_214(bParam0));
		iVar5 = (func_85(bParam1) - func_85(bParam0));
		iVar6 = (func_213(bParam1) - func_213(bParam0));
		iVar7 = (func_212(bParam1) - func_212(bParam0));
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
		iVar4 = (iVar4 + func_90(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = SYSTEM::ROUND(func_211(SYSTEM::TO_FLOAT(bVar0 + 1), 0f, 12f));
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

float func_211(float fParam0, float fParam1, float fParam2)
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

int func_212(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_213(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_214(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_215(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_216(bParam1) || !func_216(bParam0))
	{
		return true;
	}
	bVar0 = func_91(bParam0);
	bVar1 = func_91(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_93(bParam0);
	bVar1 = func_93(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_214(bParam0);
	bVar1 = func_214(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_85(bParam0);
	bVar1 = func_85(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
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
	bVar0 = func_212(bParam0);
	bVar1 = func_212(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_216(bool bParam0)
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
	iVar0 = func_212(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_213(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_85(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_91(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_93(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_214(bParam0);
	if (iVar5 < 1 || iVar5 > func_90(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_217(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_218(int iParam0)
{
	bool bVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				bVar0 = func_44();
				if (!func_46(bVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_226()) || Global_110685) || Global_30770) || func_225()) || func_131(8, -1)) || func_224()) || func_223()) || func_222()) || func_221()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_226()) || Global_30770) || func_225()) || func_131(8, -1)) || func_222()) || func_224()) || func_223()) || func_221()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_226()) || Global_110685) || Global_30770) || func_225()) || func_131(8, -1)) || func_222()) || func_224()) || func_223()) || func_221()) || Global_111638.f_7683.f_919[bVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_226()) || Global_110685) || Global_30770) || func_225()) || func_131(8, -1)) || func_224()) || func_223()) || func_221()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_226() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_131(8, -1)) || func_221()) || func_220()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_131(8, -1) || func_224()) || func_223()) || func_220()) || func_219())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_226()) || Global_30770) || func_225()) || func_131(8, -1)) || func_223()) || func_222()) || func_221()) || Global_111638.f_7683.f_919[bVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_226()) || func_223()) || Global_110685) || Global_30770) || func_225()) || Global_42596) || func_131(8, -1)) || func_222()) || func_220()) || func_221()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_226()) || Global_110685) || Global_30770) || func_225()) || func_131(8, -1)) || func_222()) || func_220()) || func_224()) || func_223()) || func_221())
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

bool func_219()
{
	return Global_98783.f_1;
}

bool func_220()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_221()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_222()
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

bool func_223()
{
	return Global_98796.f_346 > 0;
}

bool func_224()
{
	return Global_98796.f_345 > 0;
}

bool func_225()
{
	return Global_1312877;
}

bool func_226()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_227()
{
	func_129();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_228(bool bParam0)
{
	return func_215(func_86(), bParam0);
}

bool func_229(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = func_44();
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

int func_230(bool bParam0)
{
	if (!func_46(bParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[bParam0];
}

bool func_231(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_233())
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

bool func_232()
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

bool func_233()
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

bool func_234(int iParam0)
{
	return func_11(iParam0, 0, 0);
}

bool func_235(int iParam0)
{
	return func_11(iParam0, 7, 1);
}

void func_236()
{
	int iVar0;

	if (bLocal_223)
	{
		func_135(0);
		UNK_0x38DC636F3D2D2FA8("RE51A_SHOP");
		UNK_0xB547E3FFEB27073E();
		UNK_0xF5894FEB702E7E76(-871f, -246f, 0f, -798f, -163f, 50f, 1);
		UNK_0x2F3540C2227116A3("re_shoprobbery");
		UNK_0x2F3540C2227116A3("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			if (UNK_0xC844350D5D58C99A(iLocal_114[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_114[iVar0]) && !UNK_0x405E212DDE472467(iLocal_114[iVar0], 0))
				{
					UNK_0xEEB67C3D0A71A47B(iLocal_114[iVar0], vLocal_103, 150f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(iLocal_114[iVar0], true);
				}
				UNK_0x6DAD7906B73F064D(&(iLocal_114[iVar0]));
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_185[iVar0]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_185[iVar0]));
			}
			iVar0++;
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_192))
		{
			UNK_0x142CC44DB769B57E(&iLocal_192);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_113 - 1))
		{
			if (UNK_0xC844350D5D58C99A(iLocal_121[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_121[iVar0]))
				{
					UNK_0xE8832A9E16A57A1F(iLocal_121[iVar0], true, 1);
					UNK_0xDD353D0E9C789D0E(&iLocal_152);
					if (iLocal_49 == 1)
					{
						UNK_0xC6EB89C59F2AF6B8(false, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_49 == 2)
					{
						UNK_0xA3BF0AA5A2608191(iLocal_121[iVar0]);
						UNK_0x96167B03C5A77156(false, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					}
					UNK_0xEEB67C3D0A71A47B(false, vLocal_103, 150f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_152);
					UNK_0x78ADC381772E3D54(iLocal_121[iVar0], iLocal_152);
					UNK_0xF82EA857DA10E0CD(&iLocal_152);
					UNK_0xFADC0A217229F6B5(iLocal_121[iVar0], true);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			if (UNK_0xC844350D5D58C99A(iLocal_117[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_117[iVar0]))
				{
					UNK_0x4E885A246A9D983A(iLocal_117[iVar0], 317, true);
					UNK_0xE8832A9E16A57A1F(iLocal_117[iVar0], true, 1);
					if (iVar0 == 0)
					{
						if (!bLocal_183)
						{
							UNK_0xA3BF0AA5A2608191(iLocal_117[iVar0]);
							UNK_0xEEB67C3D0A71A47B(iLocal_117[iVar0], vLocal_103, 150f, -1, 0, 0);
						}
						else
						{
							UNK_0x11AD11297DC58CC7(iLocal_117[iVar0], false);
						}
					}
					else
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_152);
						if (iLocal_49 == 2)
						{
							UNK_0xA3BF0AA5A2608191(iLocal_117[iVar0]);
							UNK_0x96167B03C5A77156(false, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						}
						UNK_0xEEB67C3D0A71A47B(false, vLocal_103, 150f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_152);
						UNK_0x78ADC381772E3D54(iLocal_117[iVar0], iLocal_152);
						UNK_0xF82EA857DA10E0CD(&iLocal_152);
					}
					UNK_0x11AD11297DC58CC7(iLocal_117[iVar0], false);
					UNK_0x25C5402CC10F76CD(iLocal_117[iVar0], true);
				}
			}
			iVar0++;
		}
		if (UNK_0xC844350D5D58C99A(bLocal_184))
		{
			UNK_0x6DAD7906B73F064D(&bLocal_184);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_167))
		{
			if (UNK_0xD59B17D2DFF98E26(bLocal_167))
			{
				UNK_0x15AFB6CBDE990FB6(bLocal_167, 1, true);
			}
			UNK_0xEEEE2E5FA6F78DF0(&bLocal_167);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_175))
		{
			UNK_0x046C362CF15F1935(&bLocal_175);
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
		}
		UNK_0x8BCB70EB440DED83(1);
		UNK_0xBFE31971E49FA500(1);
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x34D79252800B23FF(5);
		UNK_0x060F249A9A3E3F4E(true);
		if (iLocal_49 == 1)
		{
			func_182(0, 0);
			func_179(0, 1, 0);
		}
		else if (iLocal_49 == 2)
		{
			func_182(14, 0);
			func_179(14, 1, 0);
		}
	}
	func_237(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_237(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_200())
	{
		func_241(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_111627, 1), 64);
		if (func_71(Global_111627) > 0)
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
	func_238(&Global_30827);
	Global_111628 = 0;
	func_203(-1);
}

void func_238(var uParam0)
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

char* func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_86();
	func_245(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &bVar0);
	Var1 = { func_243(&bVar0) };
}

struct<16> func_243(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_85(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_213(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_212(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_214(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_93(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_91(*bParam0), 64);
	return Var0;
}

void func_244(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_245(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_91(*bParam0);
	bVar1 = func_93(*bParam0);
	iVar2 = func_214(*bParam0);
	iVar3 = func_85(*bParam0);
	iVar4 = func_213(*bParam0);
	iVar5 = func_212(*bParam0);
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
	iVar6 = func_90(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_90(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_246(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_96(bParam0, iParam1);
	func_95(bParam0, iParam2);
	func_94(bParam0, iParam3);
	func_88(bParam0, bParam5);
	func_89(bParam0, iParam4);
	func_87(bParam0, iParam6);
}

int func_247(int iParam0)
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

void func_248()
{
	Global_19671 = 0;
	func_249();
}

void func_249()
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

Vector3 func_250()
{
	float fVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_128, 1);
		iLocal_127 = 1;
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_131, 1) < fVar0)
		{
			fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_131, 1);
			iLocal_127 = 2;
		}
		if (iLocal_127 == 1)
		{
			bLocal_134 = true;
			iLocal_49 = 1;
			return vLocal_128;
		}
		else if (iLocal_127 == 2)
		{
			bLocal_134 = 2;
			iLocal_49 = 2;
			return vLocal_131;
		}
	}
	return 0f, 0f, 0f;
}

