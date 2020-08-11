#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_52 = 0f;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 16;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
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
	bool bLocal_220 = false;
	bool bLocal_221 = false;
	bool bLocal_222 = false;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_246 = { 0f, 0f, 0f };
	vector3 vLocal_249 = { 0f, 0f, 0f };
	vector3 vLocal_252 = { 0f, 0f, 0f };
	vector3 vLocal_255 = { 0f, 0f, 0f };
	vector3 vLocal_258 = { 0f, 0f, 0f };
	vector3 vLocal_261 = { 0f, 0f, 0f };
	vector3 vLocal_264 = { 0f, 0f, 0f };
	vector3 vLocal_267 = { 0f, 0f, 0f };
	vector3 vLocal_270 = { 0f, 0f, 0f };
	vector3 vLocal_273 = { 0f, 0f, 0f };
	bool bLocal_276 = false;
	bool bLocal_277 = false;
	bool bLocal_278 = false;
	bool bLocal_279 = false;
	bool bLocal_280 = false;
	bool bLocal_281 = false;
	bool bLocal_282 = false;
	bool bLocal_283 = false;
	bool bLocal_284 = false;
	int iLocal_285[2] = { 0, 0 };
	int iLocal_288 = 0;
	bool bLocal_289 = false;
	int iLocal_290[2] = { 0, 0 };
	int iLocal_293[5] = { 0, 0, 0, 0, 0 };
	int iLocal_299[3] = { 0, 0, 0 };
	int iLocal_303[2] = { 0, 0 };
	bool bLocal_306 = false;
	bool bLocal_307 = false;
	bool bLocal_308 = false;
	int iLocal_309 = 0;
	bool bLocal_310 = false;
	bool bLocal_311 = false;
	bool bLocal_312 = false;
	bool bLocal_313 = false;
	var uLocal_314 = 8;
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
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 1;
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
	struct<9> Var1;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
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
	iLocal_47 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_48 = UNK_0x817B3657F78A517A();
	fLocal_52 = -1f;
	bLocal_220 = true;
	iLocal_229 = -1;
	iLocal_230 = -1;
	vLocal_246 = { 370.2576f, -1597.488f, 35.94954f };
	vLocal_249 = { 824.992f, -1289.267f, 27.24564f };
	vLocal_252 = { 450.1889f, -981.6754f, 42.69174f };
	vLocal_255 = { -1088.37f, -842.2911f, 30.27554f };
	vLocal_258 = { 608.9076f, 0.806411f, 100.2497f };
	vLocal_261 = { -562.0159f, -130.8113f, 37.4369f };
	vLocal_264 = { 1855.237f, 3683.236f, 33.29165f };
	vLocal_267 = { -443.5063f, 6016.231f, 30.71787f };
	vLocal_270 = { -1034.6f, 4918.6f, 205.9f };
	iVar0 = 0;
	iVar10 = 0;
	vLocal_234 = { ScriptParam_0.f_1[0 /*3*/] };
	Var1 = joaat("G_M_Y_MEXGOON_02");
	Var1.f_1 = joaat("HC_GUNMAN");
	Var1.f_2 = joaat("MP_M_SHOPKEEP_01");
	Var1.f_3 = joaat("A_F_Y_SOUCENT_01");
	Var1.f_4 = joaat("A_M_M_SOUCENT_01");
	Var1.f_5 = joaat("S_M_Y_COP_01");
	Var1.f_6 = joaat("POLICE3");
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]))
		{
			if (UNK_0x16102BEDC7435774(iLocal_290[0]))
			{
				UNK_0x0A94A109271BE75A(iLocal_290[0]);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
		{
			if (UNK_0x16102BEDC7435774(iLocal_290[1]))
			{
				UNK_0x0A94A109271BE75A(iLocal_290[1]);
			}
		}
		func_246(Var1, &iLocal_290, uVar12);
	}
	func_245(&uLocal_314, 3);
	if (func_214(vLocal_234, -1, 0, 0, 0))
	{
		func_211(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (iVar0 != 7)
	{
		iVar18 = 0;
		func_208(&uLocal_314);
		if (!UNK_0x338D6FF72D84D90F() && !func_207())
		{
			iVar18 = 0;
			iVar0 = 7;
			func_246(Var1, &iLocal_290, uVar12);
		}
		if (!func_207())
		{
			if (func_206() || func_205(7))
			{
				iVar18 = 0;
				iVar0 = 7;
				func_246(Var1, &iLocal_290, uVar12);
			}
		}
		UNK_0x1A6DFFFEEC27BF4F("RE_GD", 0);
		if (func_204())
		{
			if (UNK_0xC844350D5D58C99A(iLocal_290[0]))
			{
				UNK_0xEBA53F35D0085654(&(iLocal_290[0]));
			}
			if (UNK_0xC844350D5D58C99A(iLocal_290[1]))
			{
				UNK_0xEBA53F35D0085654(&(iLocal_290[1]));
			}
			while (!func_203())
			{
				SYSTEM::WAIT(0);
			}
			func_199(9, 0);
			func_190(-1, 0);
			func_187();
			iVar18 = 0;
			iVar0 = 7;
			func_246(Var1, &iLocal_290, uVar12);
		}
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) && !UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0x029064EA9141FCC2(func_186(UNK_0xD803B885F5E47A62()) - Vector(10f, 20f, 20f), func_186(UNK_0xD803B885F5E47A62()) + Vector(10f, 20f, 20f)) || UNK_0x9E9FD30CF64A88A8(func_186(UNK_0xD803B885F5E47A62()) - Vector(10f, 20f, 20f), func_186(UNK_0xD803B885F5E47A62()) + Vector(10f, 20f, 20f)))
			{
				if ((((!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1])) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 0)) && UNK_0xC42A92762C58E1B9(iLocal_290[0], UNK_0x728870EB733D12A1(), 0)) && UNK_0xC42A92762C58E1B9(iLocal_290[1], UNK_0x728870EB733D12A1(), 0))
				{
					if (UNK_0x9C66D99E63E8E24C(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) < 0.2f)
					{
						if (iLocal_230 == -1)
						{
							iLocal_230 = UNK_0x1C0640BA9A7327B3();
						}
					}
					else
					{
						iLocal_230 = -1;
					}
					if (iLocal_230 != -1 && UNK_0x1C0640BA9A7327B3() > iLocal_230 + 1000)
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_230 != -1 && UNK_0x1C0640BA9A7327B3() > iLocal_230 + 10000)
						{
							func_169();
							SYSTEM::WAIT(0);
							func_171(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_309);
								UNK_0x75CDA8644CD3B5F5(false, 0, 0);
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_309);
								UNK_0x78ADC381772E3D54(iLocal_290[0], iLocal_309);
								UNK_0xF82EA857DA10E0CD(&iLocal_309);
								UNK_0xFADC0A217229F6B5(iLocal_290[0], true);
							}
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_309);
								UNK_0x75CDA8644CD3B5F5(false, 500, 0);
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_309);
								UNK_0x78ADC381772E3D54(iLocal_290[1], iLocal_309);
								UNK_0xF82EA857DA10E0CD(&iLocal_309);
								UNK_0xFADC0A217229F6B5(iLocal_290[1], true);
							}
							iVar18 = 0;
							iVar0 = 7;
							func_246(Var1, &iLocal_290, uVar12);
						}
					}
				}
			}
		}
		if (iVar10 > 1)
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				UNK_0x0E2400AB9174FA81(255, bLocal_310, joaat("AMBIENT_GANG_BALLAS"));
				UNK_0x0E2400AB9174FA81(255, bLocal_310, joaat("AMBIENT_GANG_FAMILY"));
				UNK_0x0E2400AB9174FA81(255, joaat("AMBIENT_GANG_BALLAS"), bLocal_310);
				UNK_0x0E2400AB9174FA81(255, joaat("AMBIENT_GANG_FAMILY"), bLocal_310);
			}
			else
			{
				UNK_0x0E2400AB9174FA81(1, bLocal_310, joaat("AMBIENT_GANG_BALLAS"));
				UNK_0x0E2400AB9174FA81(1, bLocal_310, joaat("AMBIENT_GANG_FAMILY"));
				UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_BALLAS"), bLocal_310);
				UNK_0x0E2400AB9174FA81(1, joaat("AMBIENT_GANG_FAMILY"), bLocal_310);
			}
		}
		if ((iVar10 > 1 && iVar10 < 7) && !bLocal_283)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_289))
			{
				if (UNK_0xB87D13D0C064E9D1(bLocal_289, UNK_0x16F2683693E537C9(), 1))
				{
					func_169();
					SYSTEM::WAIT(0);
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]))
					{
						UNK_0xF3268524E9BE6D6E(iLocal_290[0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
					{
						UNK_0xF3268524E9BE6D6E(iLocal_290[1], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, uVar12);
				}
			}
		}
		if ((iVar10 > 7 && iVar10 < 18) && !bLocal_283)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_290[0]) && UNK_0xC844350D5D58C99A(iLocal_290[1]))
			{
				if (UNK_0xEB6A8945D1AC98A1(iLocal_290[1]) || !UNK_0x12DE711B1C681E9E(iLocal_290[0], UNK_0x16F2683693E537C9(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						UNK_0x75CDA8644CD3B5F5(false, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(iLocal_290[0], iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
						UNK_0xFADC0A217229F6B5(iLocal_290[0], true);
						func_169();
						SYSTEM::WAIT(0);
						func_171(&uLocal_55, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, uVar12);
				}
				if (UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) || !UNK_0x12DE711B1C681E9E(iLocal_290[1], UNK_0x16F2683693E537C9(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						UNK_0x75CDA8644CD3B5F5(false, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(iLocal_290[1], iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
						UNK_0xFADC0A217229F6B5(iLocal_290[1], true);
						func_169();
						SYSTEM::WAIT(0);
						func_171(&uLocal_55, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, uVar12);
				}
			}
		}
		if (func_168(&iLocal_290, UNK_0x728870EB733D12A1(), 180f))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_290[0], UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(iLocal_290[0], UNK_0x16F2683693E537C9(), 1))
			{
				bLocal_283 = true;
			}
			if (bLocal_283)
			{
				if (!bLocal_278)
				{
					func_167();
				}
				if (!bLocal_279)
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						if (UNK_0xB4ECF989E2C1DAC8(bLocal_289, "random@getawaydriver", "idle_a", 3) || UNK_0xB4ECF989E2C1DAC8(bLocal_289, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, false, 0, 0, 0);
						}
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 2052, 4);
						UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, 5f, 3f, 1073741824 /* Float: 2f */, 0);
						UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, false, 0, 0, 0);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 3000);
						UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(bLocal_289, iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
						UNK_0xFADC0A217229F6B5(bLocal_289, true);
						bLocal_279 = true;
					}
				}
			}
			else
			{
				iVar18 = 0;
				iVar0 = 7;
				func_246(Var1, &iLocal_290, uVar12);
			}
			if (bLocal_278)
			{
				UNK_0x51B096AAC60548C1(1f);
				UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_299[0]))
				{
					if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
					{
						if (UNK_0x12DE711B1C681E9E(iLocal_299[0], UNK_0x16F2683693E537C9(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_185())
							{
								UNK_0x0C8C0C840C2D1AD2(iLocal_299[0], UNK_0x16F2683693E537C9(), 1000, 2052, 4);
								func_171(&uLocal_55, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
							}
							else
							{
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_299[0]))
								{
									UNK_0x11AD11297DC58CC7(iLocal_299[0], false);
								}
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_299[1]))
								{
									UNK_0x11AD11297DC58CC7(iLocal_299[1], false);
								}
								if (SYSTEM::TIMERB() > 3000)
								{
									while (!func_203())
									{
										SYSTEM::WAIT(0);
									}
									func_199(9, 0);
									func_166(5);
									func_190(-1, 0);
									func_187();
									iVar18 = 0;
									iVar0 = 7;
									func_246(Var1, &iLocal_290, uVar12);
								}
							}
						}
						else if (!UNK_0x12DE711B1C681E9E(iLocal_299[0], UNK_0x16F2683693E537C9(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar18 = 0;
							iVar0 = 7;
							func_246(Var1, &iLocal_290, uVar12);
						}
					}
					else
					{
						UNK_0xA3BF0AA5A2608191(iLocal_299[0]);
						func_169();
						SYSTEM::WAIT(0);
						iVar18 = 0;
						iVar0 = 7;
						func_246(Var1, &iLocal_290, uVar12);
					}
				}
				else if (UNK_0xEB6A8945D1AC98A1(bLocal_289))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, uVar12);
				}
			}
			if (bLocal_279)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
				{
					if (UNK_0x12DE711B1C681E9E(bLocal_289, UNK_0x16F2683693E537C9(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_185())
						{
							UNK_0x0C8C0C840C2D1AD2(bLocal_289, UNK_0x16F2683693E537C9(), 3000, 2048, 2);
							func_171(&uLocal_55, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
							{
								UNK_0x25C5402CC10F76CD(bLocal_289, true);
							}
							while (func_185())
							{
								SYSTEM::WAIT(0);
							}
							while (!func_203())
							{
								SYSTEM::WAIT(0);
							}
							UNK_0x68F065432F4692FB(1);
							func_199(9, 0);
							func_166(5);
							func_190(-1, 0);
							func_187();
							iVar18 = 0;
							iVar0 = 7;
							func_246(Var1, &iLocal_290, uVar12);
						}
					}
					else if (!UNK_0x12DE711B1C681E9E(bLocal_289, UNK_0x16F2683693E537C9(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar18 = 0;
						iVar0 = 7;
						func_246(Var1, &iLocal_290, uVar12);
					}
				}
				else if (UNK_0xEB6A8945D1AC98A1(iLocal_299[0]))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, uVar12);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_154())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, uVar12);
				}
				if (func_142(1, Var1))
				{
					iVar18 = 0;
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_130(3))
				{
					bLocal_313 = true;
					func_129(1);
					iVar17 = UNK_0x1C0640BA9A7327B3();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar18 = 0;
				break;
			case 4:
				iVar18 = 0;
				UNK_0x5D96D8530B3D0904(&uVar11, 4);
				UNK_0x5D96D8530B3D0904(&uVar11, true);
				UNK_0x5D96D8530B3D0904(&uVar11, 5);
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
					{
						if (func_128())
						{
							if (UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0))
							{
								if ((UNK_0xBBA8A868118C90ED(UNK_0x728870EB733D12A1(), false, 0) && UNK_0xBBA8A868118C90ED(UNK_0x728870EB733D12A1(), 2, 0)) && UNK_0xBBA8A868118C90ED(UNK_0x728870EB733D12A1(), true, 0))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				UNK_0xC55B75EFB7DDC5D6(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), &uVar13, &uVar16, 1, 1077936128 /* Float: 3f */, 0);
				if (func_127(iVar17, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			case 5:
				if (iVar10 > 1)
				{
					if (!func_207())
					{
						if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							iVar18 = 0;
							iVar0 = 6;
						}
						else
						{
							if (!bLocal_282)
							{
								if (UNK_0x4A42C22237F5FF76(UNK_0x16F2683693E537C9(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
								{
									iVar19 = 0;
									while (iVar19 < iLocal_293)
									{
										if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[iVar19]))
										{
											UNK_0xF3268524E9BE6D6E(iLocal_293[iVar19], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
											UNK_0xFADC0A217229F6B5(iLocal_293[iVar19], true);
										}
										iVar19++;
									}
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
									{
										UNK_0xF3268524E9BE6D6E(bLocal_289, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
										UNK_0xFADC0A217229F6B5(bLocal_289, true);
									}
									bLocal_282 = true;
								}
							}
							Jump @3498; //curOff = 3468
							if (func_154())
							{
								iVar18 = 0;
								iVar0 = 7;
								func_246(Var1, &iLocal_290, uVar12);
							}
							if (iVar0 != 6)
							{
								if (func_1(&iVar10, Var1, &iLocal_290, &iVar18, &uVar12))
								{
									iVar0 = 6;
								}
								else
								{
									Jump @3566; //curOff = 3531
									iVar18 = 0;
									iVar0 = 7;
									func_246(Var1, &iLocal_290, uVar12);
									Jump @3566; //curOff = 3554
									Jump @3566; //curOff = 3557
									iVar18 = 0;
								}
								if (iVar0 != 7)
								{
									SYSTEM::WAIT(iVar18);
								}
								func_246(Var1, &iLocal_290, uVar12);
							}
						}
					}
				}
				default:
					break;
		}
	}
}

bool func_1(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, var uParam12)
{
	int iVar0;
	vector3 vVar1[2];
	float fVar8[2];
	vector3 vVar11;
	bool bVar14;
	vector3 vVar15[5];
	float fVar31;
	vector3 vVar32[5];
	int iVar48;
	vector3 vVar49;
	int iVar52[3];
	vector3 vVar56;
	vector3 vVar59;
	bool bVar62;
	bool bVar63;
	int iVar64;
	int iVar65;

	vVar15[0 /*3*/] = { -56.7157f, -1317.766f, 27.9845f };
	vVar15[1 /*3*/] = { 457.5345f, -813.3361f, 26.511f };
	vVar15[2 /*3*/] = { 884.047f, -2239.43f, 29.4387f };
	vVar15[3 /*3*/] = { -1339.328f, -762.4225f, 19.314f };
	vVar15[4 /*3*/] = { -461.6898f, 283.665f, 82.2492f };
	vVar32[0 /*3*/] = { -45.2654f, -1290.126f, 28.1977f };
	vVar32[1 /*3*/] = { 470.193f, -731.1867f, 26.412f };
	vVar32[2 /*3*/] = { 889.9938f, -2177.638f, 29.5195f };
	vVar32[3 /*3*/] = { -1334.826f, -792.1527f, 18.8175f };
	vVar32[4 /*3*/] = { -424.5901f, 288.3558f, 82.2293f };
	switch (*iParam0)
	{
		case 0:
			if (func_126(vLocal_234, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		case 1:
			*iParam11 = 0;
			func_120(39, 1);
			func_120(40, 1);
			func_120(41, 1);
			func_120(42, 1);
			func_120(43, 1);
			func_120(44, 1);
			if (func_119() == 0)
			{
				func_118(&uLocal_55, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			}
			else if (func_119() == 1)
			{
				func_118(&uLocal_55, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			}
			else if (func_119() == 2)
			{
				func_118(&uLocal_55, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
			}
			if (SYSTEM::VDIST(vLocal_234, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				vVar1[0 /*3*/] = { 943.1853f, 3647.218f, 31.3603f };
				fVar8[0] = 58.2967f;
				vVar1[1 /*3*/] = { 941.3207f, 3650.301f, 31.3111f };
				fVar8[1] = 92.7793f;
				vVar11 = { 939.2422f, 3649.755f, 31.3536f };
				bVar14 = 260.4475f;
			}
			else if (SYSTEM::VDIST(vLocal_234, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				vVar1[0 /*3*/] = { 66.0644f, -1564.218f, 28.4602f };
				fVar8[0] = 198.4093f;
				vVar1[1 /*3*/] = { 63.5055f, -1568.178f, 28.4602f };
				fVar8[1] = 254.133f;
				vVar11 = { 68.4259f, -1569.067f, 28.6027f };
				bVar14 = 64.1114f;
			}
			iLocal_233 = UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62());
			UNK_0xE342F209E49C5314(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 1);
			UNK_0x7D6CA5F52B3748BF(vLocal_234 - Vector(50f, 50f, 50f), vLocal_234 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			UNK_0x17E8C6920A1E386F(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 0);
			UNK_0xF858EFDE1871B5F2(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 1);
			UNK_0x523BCC9DC80CD82F(joaat("PICADOR"));
			UNK_0x523BCC9DC80CD82F(joaat("STANIER"));
			UNK_0x523BCC9DC80CD82F(joaat("PATRIOT"));
			while ((!UNK_0xB87F6CF6E5628C67(joaat("PICADOR")) || !UNK_0xB87F6CF6E5628C67(joaat("STANIER"))) || !UNK_0xB87F6CF6E5628C67(joaat("PATRIOT")))
			{
				SYSTEM::WAIT(0);
			}
			iVar52[0] = UNK_0x122AAB0B1D6F55AD(joaat("PICADOR"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, true, true, false);
			iVar52[1] = UNK_0x122AAB0B1D6F55AD(joaat("STANIER"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, true, true, false);
			iVar52[2] = UNK_0x122AAB0B1D6F55AD(joaat("PATRIOT"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, true, true, false);
			UNK_0xB9FD7450C0DAB575(iVar52[0], 1084227584 /* Float: 5f */);
			UNK_0xB9FD7450C0DAB575(iVar52[1], 1084227584 /* Float: 5f */);
			UNK_0xB9FD7450C0DAB575(iVar52[2], 1084227584 /* Float: 5f */);
			if (iLocal_231 == 0)
			{
			}
			UNK_0xF63400DBE3303D26("reCriminals", &bLocal_310);
			UNK_0xF63400DBE3303D26("reShopKeep", &bLocal_311);
			UNK_0xF63400DBE3303D26("reCops", &bLocal_312);
			UNK_0x0E2400AB9174FA81(5, bLocal_310, joaat("COP"));
			UNK_0x0E2400AB9174FA81(5, bLocal_312, bLocal_310);
			UNK_0x0E2400AB9174FA81(5, joaat("COP"), bLocal_310);
			UNK_0x0E2400AB9174FA81(1, joaat("COP"), bLocal_312);
			UNK_0x0E2400AB9174FA81(1, bLocal_312, joaat("COP"));
			(*iParam10)[0] = UNK_0x36F2404464202779(22, Param1, vVar1[0 /*3*/], fVar8[0], 1, true);
			UNK_0x11AD11297DC58CC7((*iParam10)[0], true);
			UNK_0x71199B01895C6202(Param1);
			UNK_0x6DF7BF67E86AAE86((*iParam10)[0], bLocal_310);
			UNK_0x262EF6C6306BEA6C((*iParam10)[0], joaat("WEAPON_APPISTOL"), -1, true, true);
			UNK_0x6D80F1AEBA734886((*iParam10)[0], UNK_0x09AC81E49EA267F7(800, 2000));
			UNK_0x4E885A246A9D983A((*iParam10)[0], 206, true);
			UNK_0xBAFED2F6486F771A((*iParam10)[0], 2, false);
			UNK_0xBAFED2F6486F771A((*iParam10)[0], 1024, true);
			UNK_0xBAFED2F6486F771A((*iParam10)[0], 65536, true);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[0], 9, true, false, 0);
			func_118(&uLocal_55, 2, (*iParam10)[0], "REGETRobber2", 0, 1);
			(*iParam10)[1] = UNK_0x36F2404464202779(22, Param1.f_1, vVar1[1 /*3*/], fVar8[1], 1, true);
			UNK_0x11AD11297DC58CC7((*iParam10)[1], true);
			UNK_0x71199B01895C6202(Param1.f_1);
			UNK_0x6DF7BF67E86AAE86((*iParam10)[1], bLocal_310);
			UNK_0x262EF6C6306BEA6C((*iParam10)[1], joaat("WEAPON_PISTOL"), -1, true, true);
			UNK_0x6D80F1AEBA734886((*iParam10)[1], UNK_0x09AC81E49EA267F7(800, 2000));
			UNK_0x4E885A246A9D983A((*iParam10)[1], 206, true);
			UNK_0xBAFED2F6486F771A((*iParam10)[1], 2, false);
			UNK_0xBAFED2F6486F771A((*iParam10)[1], 1024, true);
			UNK_0xBAFED2F6486F771A((*iParam10)[1], 65536, true);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], false, 5, false, 0);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], true, true, false, 0);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], 2, true, false, 0);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], 3, 6, false, 0);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], 4, 6, 2, 0);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], 8, false, false, 0);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], 9, false, false, 0);
			UNK_0x64F9F278AB9DCA2C((*iParam10)[1], 10, true, false, 0);
			UNK_0x4F39CC3882DD074E((*iParam10)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_118(&uLocal_55, 1, (*iParam10)[1], "PACKIE", 0, 1);
			bLocal_289 = UNK_0x36F2404464202779(4, Param1.f_2, vVar11, bVar14, 1, true);
			UNK_0x71199B01895C6202(Param1.f_2);
			UNK_0x11AD11297DC58CC7(bLocal_289, true);
			UNK_0x6DF7BF67E86AAE86(bLocal_289, bLocal_311);
			UNK_0x4F39CC3882DD074E(bLocal_289, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_118(&uLocal_55, 3, bLocal_289, "StoreOwner", 0, 1);
			iLocal_293[0] = UNK_0x36F2404464202779(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, true);
			UNK_0x71199B01895C6202(Param1.f_3);
			UNK_0xAFF39FB306F8E232(iLocal_293[0], 17, true);
			UNK_0x8BE3D040D15AEA1D(iLocal_293[0], -1);
			iLocal_293[2] = UNK_0x36F2404464202779(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, true);
			UNK_0x71199B01895C6202(Param1.f_3);
			UNK_0xAFF39FB306F8E232(iLocal_293[2], 17, true);
			UNK_0x509B8296EBA9B408(iLocal_293[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_293[3] = UNK_0x36F2404464202779(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, true);
			UNK_0x71199B01895C6202(Param1.f_4);
			UNK_0xAFF39FB306F8E232(iLocal_293[3], 17, true);
			*iParam0 = 2;
			break;
		case 2:
			if (((((!UNK_0x437347B10A200C4B(bLocal_289, 0) && !UNK_0x437347B10A200C4B(iLocal_293[0], 0)) && !UNK_0x437347B10A200C4B(iLocal_293[2], 0)) && !UNK_0x437347B10A200C4B(iLocal_293[3], 0)) && !UNK_0x437347B10A200C4B((*iParam10)[0], 0)) && !UNK_0x437347B10A200C4B((*iParam10)[1], 0))
			{
				if (((((UNK_0x8A83E339B374E53A(bLocal_289) && UNK_0x8A83E339B374E53A(iLocal_293[0])) && UNK_0x8A83E339B374E53A(iLocal_293[2])) && UNK_0x8A83E339B374E53A(iLocal_293[3])) && UNK_0x8A83E339B374E53A((*iParam10)[0])) && UNK_0x8A83E339B374E53A((*iParam10)[1]))
				{
					UNK_0x3F423BF5B8125A50("random@getawaydriver@thugs");
					UNK_0x3F423BF5B8125A50("combat@gestures@pistol@halt");
					UNK_0x3F423BF5B8125A50("misslamar1ig_20");
					UNK_0x3F423BF5B8125A50("random@getawaydriver");
					while (((!UNK_0xB4AE0788C1587752("random@getawaydriver@thugs") || !UNK_0xB4AE0788C1587752("combat@gestures@pistol@halt")) || !UNK_0xB4AE0788C1587752("misslamar1ig_20")) || !UNK_0xB4AE0788C1587752("random@getawaydriver"))
					{
						SYSTEM::WAIT(0);
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
					{
						UNK_0xF9B5DB58254657F1(bLocal_289, -1, false, -1, 0);
						if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]))
						{
							UNK_0xC6EB89C59F2AF6B8((*iParam10)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, false, 0, 0, 0);
							UNK_0x0C8C0C840C2D1AD2((*iParam10)[0], UNK_0x16F2683693E537C9(), -1, 2052, 4);
						}
						if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
						{
							UNK_0xC6EB89C59F2AF6B8((*iParam10)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, false, 0, 0, 0);
							UNK_0x0C8C0C840C2D1AD2((*iParam10)[1], UNK_0x16F2683693E537C9(), -1, 2052, 4);
						}
					}
					SYSTEM::SETTIMERA(0);
					*iParam0 = 3;
				}
			}
			break;
		case 3:
			if (SYSTEM::TIMERA() > 0)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[0]))
				{
					func_116(iLocal_293[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[2]))
				{
					func_116(iLocal_293[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 2000)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[3]))
				{
					func_116(iLocal_293[3], "GENERIC_FRIGHTENED_HIGH", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, true, 0))
			{
				if (!bLocal_282)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[0]))
					{
						UNK_0xEEB67C3D0A71A47B(iLocal_293[0], vLocal_234, 200f, -1, 0, 0);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[2]))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						UNK_0x78A77CDD64392938(false, 250);
						UNK_0xEEB67C3D0A71A47B(false, vLocal_234, 200f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(iLocal_293[2], iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[3]))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						UNK_0x78A77CDD64392938(false, 500);
						UNK_0xEEB67C3D0A71A47B(false, vLocal_234, 200f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(iLocal_293[3], iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
					}
					bLocal_282 = true;
				}
			}
			if (func_77(iParam10, UNK_0x728870EB733D12A1()))
			{
				*iParam0 = 4;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			if (UNK_0x029064EA9141FCC2(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)) || UNK_0x9E9FD30CF64A88A8(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
				{
					UNK_0xF3268524E9BE6D6E((*iParam10)[0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					UNK_0xF3268524E9BE6D6E((*iParam10)[1], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		case 4:
			if (!func_185())
			{
				if ((!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[1])) && !UNK_0xEB6A8945D1AC98A1(bLocal_289))
				{
				}
				if (UNK_0xC844350D5D58C99A(bLocal_289))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						UNK_0x0C8C0C840C2D1AD2((*iParam10)[0], UNK_0x16F2683693E537C9(), 10000, 2052, 4);
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
						UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, false, 0, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(bLocal_289, iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
					}
					*iParam0 = 5;
				}
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			if (((UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) || UNK_0x838876B8BA050A8A(UNK_0x16F2683693E537C9())) || UNK_0x029064EA9141FCC2(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f))) || UNK_0x9E9FD30CF64A88A8(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
				{
					UNK_0xF3268524E9BE6D6E((*iParam10)[0], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					UNK_0xF3268524E9BE6D6E((*iParam10)[1], UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		case 5:
			if (UNK_0xEB6A8945D1AC98A1(bLocal_289))
			{
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
				{
					UNK_0xF96A174EE26D7588((*iParam10)[0], UNK_0x16F2683693E537C9(), -1);
					UNK_0xF96A174EE26D7588((*iParam10)[1], UNK_0x16F2683693E537C9(), -1);
				}
			}
			else if (UNK_0xD1960163A3042274(bLocal_289, 242628503) != 1 && UNK_0xD1960163A3042274(bLocal_289, 242628503) != 0)
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_309);
				UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_309);
				UNK_0x78ADC381772E3D54(bLocal_289, iLocal_309);
				UNK_0xF82EA857DA10E0CD(&iLocal_309);
			}
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
					{
						if (UNK_0x9C66D99E63E8E24C(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) < 0.1f)
						{
							if (func_128() && UNK_0xF79A7BCA9E38BBBC(UNK_0x728870EB733D12A1()))
							{
								UNK_0xD4D331DFE794EACD(UNK_0x134B62B726CEC8E6(UNK_0x728870EB733D12A1()), 3);
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
								{
									vLocal_273 = { UNK_0x68F4C0EC296D3901(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), false) };
									vVar56 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), -1.5f, -1.5f, 0f) };
									vVar59 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1.5f, 0f, 0f) };
									UNK_0xDD353D0E9C789D0E(&iLocal_309);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 2096, 4);
									UNK_0x9BE7E7B6B488CC55(false, bLocal_289, 1500, 0);
									UNK_0xE20F700AC2AFCA92(false, vVar56, bLocal_289, 3f, false, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 2096, 4);
									UNK_0x75ABDC5F81978924(iLocal_309);
									UNK_0x78ADC381772E3D54(iLocal_290[0], iLocal_309);
									UNK_0xF82EA857DA10E0CD(&iLocal_309);
									UNK_0xDD353D0E9C789D0E(&iLocal_309);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 2096, 4);
									UNK_0x9BE7E7B6B488CC55(false, bLocal_289, 2500, 0);
									UNK_0xE20F700AC2AFCA92(false, vVar59, bLocal_289, 3f, false, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 10000, 2096, 4);
									UNK_0x75ABDC5F81978924(iLocal_309);
									UNK_0x78ADC381772E3D54(iLocal_290[1], iLocal_309);
									UNK_0xF82EA857DA10E0CD(&iLocal_309);
								}
								else
								{
									UNK_0xE25C96A9C36BE5D2(iLocal_290[0], func_75());
									UNK_0xE25C96A9C36BE5D2(iLocal_290[1], func_75());
									UNK_0xBF541ED34EA81209(iLocal_290[0], true);
									UNK_0xBF541ED34EA81209(iLocal_290[1], false);
									if (UNK_0x134B62B726CEC8E6(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9())) == joaat("BUS"))
									{
										if (!UNK_0xBBA8A868118C90ED(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), true, 0))
										{
											bVar62 = UNK_0xA30B8362589C124A(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), true, 0);
											if (!UNK_0xAF6690C489CC6203(bVar62))
											{
												UNK_0x73270B3C9CC833FD(bVar62, true, 0);
												UNK_0xEBA53F35D0085654(&bVar62);
											}
										}
										if (!UNK_0xBBA8A868118C90ED(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), false, 0))
										{
											bVar62 = UNK_0xA30B8362589C124A(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), false, 0);
											if (!UNK_0xAF6690C489CC6203(bVar62))
											{
												UNK_0x73270B3C9CC833FD(bVar62, true, 0);
												UNK_0xEBA53F35D0085654(&bVar62);
											}
										}
									}
									UNK_0x7BECA8F360B1686D(iLocal_290[0], 1);
									UNK_0x7BECA8F360B1686D(iLocal_290[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!bLocal_280)
							{
								if (!func_185())
								{
									func_171(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									UNK_0x0C8C0C840C2D1AD2(iLocal_290[1], UNK_0x16F2683693E537C9(), -1, 2096, 4);
									bLocal_280 = true;
								}
							}
						}
					}
				}
				else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), (*iParam10)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!bLocal_280)
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							UNK_0x0C8C0C840C2D1AD2(iLocal_290[1], UNK_0x16F2683693E537C9(), -1, 2096, 4);
							bLocal_280 = true;
						}
					}
				}
			}
			if (bLocal_280 || bLocal_281)
			{
				if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) < 0.2f)
				{
					if (iLocal_230 == -1)
					{
						iLocal_230 = UNK_0x1C0640BA9A7327B3();
					}
				}
				else
				{
					iLocal_230 = -1;
				}
				if (iLocal_230 != -1 && UNK_0x1C0640BA9A7327B3() > iLocal_230 + 10000)
				{
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]))
					{
						UNK_0xF3268524E9BE6D6E(iLocal_290[0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(iLocal_290[0], true);
						SYSTEM::WAIT(0);
						UNK_0x6DAD7906B73F064D(&(iLocal_290[0]));
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
					{
						UNK_0xF3268524E9BE6D6E(iLocal_290[1], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
						UNK_0xFADC0A217229F6B5(iLocal_290[1], true);
						SYSTEM::WAIT(0);
						UNK_0x6DAD7906B73F064D(&(iLocal_290[1]));
					}
					*iParam11 = 0;
					*iParam0 = 20;
				}
			}
			func_74(iParam10, 120f);
			if (func_76())
			{
				*iParam0 = 18;
			}
			if (((UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) || UNK_0x838876B8BA050A8A(UNK_0x16F2683693E537C9())) || UNK_0x029064EA9141FCC2(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f))) || UNK_0x9E9FD30CF64A88A8(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
				{
					UNK_0xF3268524E9BE6D6E((*iParam10)[0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0xF3268524E9BE6D6E((*iParam10)[1], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		case 6:
			*iParam0 = 7;
			break;
		case 7:
			*iParam11 = 0;
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (!func_73(iParam10, UNK_0x728870EB733D12A1(), 120f) || !bLocal_276)
				{
					if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_273, 2f, 2f, 2f, false, true, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
						{
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
							{
								if (func_128() && UNK_0xF79A7BCA9E38BBBC(UNK_0x728870EB733D12A1()))
								{
									UNK_0xD4D331DFE794EACD(UNK_0x134B62B726CEC8E6(UNK_0x728870EB733D12A1()), 3);
									while (!UNK_0x1F04E7FA44219580(UNK_0x134B62B726CEC8E6(UNK_0x728870EB733D12A1())))
									{
										SYSTEM::WAIT(0);
									}
									if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
									{
										if (!UNK_0x16102BEDC7435774(iLocal_290[0]) && !UNK_0x16102BEDC7435774(iLocal_290[1]))
										{
											UNK_0xA3BF0AA5A2608191(iLocal_290[0]);
											UNK_0xA3BF0AA5A2608191(iLocal_290[1]);
											UNK_0x0C8C0C840C2D1AD2(iLocal_290[1], UNK_0x16F2683693E537C9(), 10000, 2052, 4);
											UNK_0xE25C96A9C36BE5D2(iLocal_290[0], func_75());
											UNK_0xE25C96A9C36BE5D2(iLocal_290[1], func_75());
											UNK_0xBF541ED34EA81209(iLocal_290[0], true);
											UNK_0xBF541ED34EA81209(iLocal_290[1], false);
											if (UNK_0x134B62B726CEC8E6(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9())) == joaat("BUS"))
											{
												if (!UNK_0xBBA8A868118C90ED(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), true, 0))
												{
													bVar63 = UNK_0xA30B8362589C124A(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), true, 0);
													if (!UNK_0xAF6690C489CC6203(bVar63))
													{
														UNK_0x73270B3C9CC833FD(bVar63, true, 0);
														UNK_0xEBA53F35D0085654(&bVar63);
													}
												}
												if (!UNK_0xBBA8A868118C90ED(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), false, 0))
												{
													bVar63 = UNK_0xA30B8362589C124A(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), false, 0);
													if (!UNK_0xAF6690C489CC6203(bVar63))
													{
														UNK_0x73270B3C9CC833FD(bVar63, true, 0);
														UNK_0xEBA53F35D0085654(&bVar63);
													}
												}
											}
											UNK_0x7BECA8F360B1686D(iLocal_290[0], 1);
											UNK_0x7BECA8F360B1686D(iLocal_290[1], 1);
										}
									}
								}
								else if (!bLocal_280)
								{
									if (!func_185())
									{
										func_171(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										bLocal_280 = true;
									}
								}
							}
							else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), (*iParam10)[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!bLocal_280)
								{
									if (!func_185())
									{
										func_171(&uLocal_55, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										bLocal_280 = true;
									}
								}
							}
						}
					}
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]))
			{
				if (!UNK_0x16102BEDC7435774(iLocal_290[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
					{
						if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
						{
							if ((UNK_0xD1960163A3042274(iLocal_290[0], 242628503) != 1 && UNK_0xD1960163A3042274(iLocal_290[0], 242628503) != 0) || UNK_0xD1960163A3042274(iLocal_290[0], 242628503) == 7)
							{
								UNK_0xE25C96A9C36BE5D2(iLocal_290[0], func_75());
								UNK_0x7BECA8F360B1686D(iLocal_290[0], 1);
							}
						}
					}
					else
					{
						UNK_0xE25C96A9C36BE5D2(iLocal_290[0], func_75());
						UNK_0x7BECA8F360B1686D(iLocal_290[0], 1);
					}
				}
				else
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((!UNK_0x81A5359F25512A04(iLocal_290[0]) && !UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_273, 2f, 2f, 2f, false, true, 0)) && !UNK_0x5A91F08DF773C39D(iLocal_290[0], UNK_0x68F4C0EC296D3901(UNK_0x728870EB733D12A1(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							UNK_0xDEAC6BC509D10068(iLocal_290[0], 2f);
						}
					}
					if (UNK_0xD1960163A3042274(iLocal_290[0], -875674219) == 1 || UNK_0xD1960163A3042274(iLocal_290[0], -875674219) == 0)
					{
					}
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
			{
				if (!UNK_0x16102BEDC7435774(iLocal_290[1]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
					{
						if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
						{
							if ((UNK_0xD1960163A3042274(iLocal_290[1], 242628503) != 1 && UNK_0xD1960163A3042274(iLocal_290[1], 242628503) != 0) || UNK_0xD1960163A3042274(iLocal_290[1], 242628503) == 7)
							{
								UNK_0xE25C96A9C36BE5D2(iLocal_290[1], func_75());
								UNK_0x7BECA8F360B1686D(iLocal_290[1], 1);
							}
						}
					}
					else
					{
						UNK_0xE25C96A9C36BE5D2(iLocal_290[1], func_75());
						UNK_0x7BECA8F360B1686D(iLocal_290[1], 1);
					}
				}
				else
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((!UNK_0x81A5359F25512A04(iLocal_290[1]) && !UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_273, 2f, 2f, 2f, false, true, 0)) && !UNK_0x5A91F08DF773C39D(iLocal_290[1], UNK_0x68F4C0EC296D3901(UNK_0x728870EB733D12A1(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							UNK_0xDEAC6BC509D10068(iLocal_290[1], 2f);
						}
					}
					if (UNK_0xD1960163A3042274(iLocal_290[1], -875674219) == 1 || UNK_0xD1960163A3042274(iLocal_290[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_276)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if ((!UNK_0x437347B10A200C4B(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
					{
						if ((UNK_0xC42A92762C58E1B9(iLocal_290[0], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) && !UNK_0xC42A92762C58E1B9(iLocal_290[1], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_290[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_276 = true;
						}
						if ((UNK_0xC42A92762C58E1B9(iLocal_290[1], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) && !UNK_0xC42A92762C58E1B9(iLocal_290[0], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_290[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_276 = true;
						}
					}
				}
			}
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (func_73(iParam10, UNK_0x728870EB733D12A1(), 120f) || bLocal_276)
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(bLocal_289, iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
						UNK_0xFADC0A217229F6B5(bLocal_289, true);
						UNK_0x6DAD7906B73F064D(&bLocal_289);
					}
					func_72();
					if (!UNK_0x8E28E832BEAC3DCE(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						bLocal_307 = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, true, true, false);
						iLocal_303[0] = UNK_0x852A19533F896693(bLocal_307, 6, joaat("S_M_Y_COP_01"), -1, 1, true);
						iLocal_303[1] = UNK_0x852A19533F896693(bLocal_307, 6, joaat("S_M_Y_COP_01"), false, 1, true);
						UNK_0x262EF6C6306BEA6C(iLocal_303[0], joaat("WEAPON_PISTOL"), -1, false, true);
						UNK_0x262EF6C6306BEA6C(iLocal_303[1], joaat("WEAPON_PISTOL"), -1, false, true);
						UNK_0x26A6B1686E33113F(iLocal_303[0], 0);
					}
					if (!UNK_0x8E28E832BEAC3DCE(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						bLocal_307 = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, true, true, false);
						iLocal_303[0] = UNK_0x852A19533F896693(bLocal_307, 6, joaat("S_M_Y_COP_01"), -1, 1, true);
						iLocal_303[1] = UNK_0x852A19533F896693(bLocal_307, 6, joaat("S_M_Y_COP_01"), false, 1, true);
						UNK_0x262EF6C6306BEA6C(iLocal_303[0], joaat("WEAPON_PISTOL"), -1, false, true);
						UNK_0x262EF6C6306BEA6C(iLocal_303[1], joaat("WEAPON_PISTOL"), -1, false, true);
						UNK_0x26A6B1686E33113F(iLocal_303[0], 0);
					}
					if (!UNK_0x8E28E832BEAC3DCE(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						bLocal_307 = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, true, true, false);
						iLocal_303[0] = UNK_0x852A19533F896693(bLocal_307, 6, joaat("S_M_Y_COP_01"), -1, 1, true);
						iLocal_303[1] = UNK_0x852A19533F896693(bLocal_307, 6, joaat("S_M_Y_COP_01"), false, 1, true);
						UNK_0x262EF6C6306BEA6C(iLocal_303[0], joaat("WEAPON_PISTOL"), -1, false, true);
						UNK_0x262EF6C6306BEA6C(iLocal_303[1], joaat("WEAPON_PISTOL"), -1, false, true);
						UNK_0x26A6B1686E33113F(iLocal_303[0], 0);
					}
					UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					UNK_0x71A357CDEB34742E(UNK_0x728870EB733D12A1(), 1);
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 2, 0);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
					UNK_0x0F52891B1CED828B(UNK_0xD803B885F5E47A62(), 0f);
					UNK_0x0E2400AB9174FA81(5, joaat("COP"), bLocal_310);
					UNK_0x0E2400AB9174FA81(5, bLocal_310, joaat("COP"));
					SYSTEM::WAIT(1000);
					if (!bLocal_276)
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[iVar48]))
					{
						UNK_0xE910A68AA670B4AA((*iParam10)[iVar48]);
					}
					iLocal_224 = UNK_0x1C0640BA9A7327B3();
					*iParam0 = 8;
				}
			}
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, true, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
				{
					UNK_0xF3268524E9BE6D6E((*iParam10)[0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0xF3268524E9BE6D6E((*iParam10)[1], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_74(iParam10, 120f);
			func_71();
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		case 8:
			func_70(iLocal_53);
			if (func_127(iLocal_224, 3000))
			{
				*iParam0 = 9;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		case 9:
			func_69(iParam10);
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				UNK_0x0E2400AB9174FA81(1, joaat("COP"), bLocal_310);
				UNK_0x0E2400AB9174FA81(1, bLocal_310, joaat("COP"));
				if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
				{
					UNK_0x71A357CDEB34742E(UNK_0x728870EB733D12A1(), 0);
				}
				if (!UNK_0x437347B10A200C4B(bLocal_307, 0))
				{
					UNK_0x046C362CF15F1935(&bLocal_307);
				}
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_303[0]))
				{
					UNK_0x6DAD7906B73F064D(&(iLocal_303[0]));
				}
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_303[1]))
				{
					UNK_0x6DAD7906B73F064D(&(iLocal_303[1]));
				}
				func_70(iLocal_53);
				*iParam0 = 10;
			}
			iVar48 = 0;
			while (iVar48 < *iParam10)
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[iVar48]))
				{
					if (!UNK_0x82CCEAB29E9451DD((*iParam10)[iVar48], UNK_0x728870EB733D12A1()))
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar48]))
						{
							iLocal_285[iVar48] = func_67((*iParam10)[iVar48], 0, 145);
							func_70(iLocal_53);
						}
					}
				}
				iVar48++;
			}
			func_74(iParam10, 120f);
			func_71();
			if (func_65())
			{
				*iParam0 = 12;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		case 10:
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				UNK_0x0E2400AB9174FA81(5, joaat("COP"), bLocal_310);
				UNK_0x0E2400AB9174FA81(5, bLocal_310, joaat("COP"));
				func_70(iLocal_53);
				*iParam0 = 8;
			}
			else
			{
				UNK_0x0E2400AB9174FA81(1, joaat("COP"), bLocal_310);
				UNK_0x0E2400AB9174FA81(1, bLocal_310, joaat("COP"));
				vVar49 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				fVar31 = 9999f;
				iVar64 = 0;
				while (iVar64 < vVar15.x)
				{
					if (SYSTEM::VDIST(vVar49, vVar15[iVar64 /*3*/]) < fVar31)
					{
						fVar31 = SYSTEM::VDIST(vVar49, vVar15[iVar64 /*3*/]);
						iLocal_223 = iVar64;
					}
					iVar64++;
				}
				if (func_64(vVar15[iLocal_223 /*3*/], 0f, 0f, 0f, 0))
				{
					iLocal_223 = 0;
				}
				iLocal_53 = func_62(vVar15[iLocal_223 /*3*/], 1);
				if (func_119() == 2 && !func_61())
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_288))
					{
						iLocal_288 = func_62(vLocal_270, 0);
						UNK_0xBC8E0A7390523199(iLocal_288, 269);
						func_59();
					}
				}
				iLocal_224 = UNK_0x1C0640BA9A7327B3();
				if (!bLocal_222)
				{
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					bLocal_222 = true;
				}
				*iParam0 = 11;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		case 11:
			*iParam11 = 0;
			func_58(iParam10);
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				func_70(iLocal_53);
				*iParam0 = 8;
			}
			else
			{
				if (func_57(vVar15[iLocal_223 /*3*/]))
				{
					func_171(&uLocal_55, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_55())
				{
					func_169();
					SYSTEM::WAIT(0);
					if (func_54())
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
				{
					if ((UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vVar15[iLocal_223 /*3*/], Global_19, true, true, 0) && UNK_0x5A91F08DF773C39D(iLocal_290[0], vVar15[iLocal_223 /*3*/], 20f, 20f, 20f, false, true, 0)) && UNK_0x5A91F08DF773C39D(iLocal_290[1], vVar15[iLocal_223 /*3*/], 20f, 20f, 20f, false, true, 0))
					{
						func_70(iLocal_53);
						iVar48 = 0;
						while (iVar48 <= (*iParam10 - 1))
						{
							if (bLocal_220)
							{
								UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), 10.5f, 2, 0);
								SYSTEM::WAIT(1000);
								bLocal_220 = false;
							}
							if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[iVar48]))
							{
								UNK_0xE910A68AA670B4AA((*iParam10)[iVar48]);
								UNK_0x0A94A109271BE75A((*iParam10)[iVar48]);
								UNK_0x4064D48958EACC19(iLocal_233);
							}
							iVar48++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar48 = 0;
			while (iVar48 < *iParam10)
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[iVar48]))
				{
					if (!UNK_0x82CCEAB29E9451DD((*iParam10)[iVar48], UNK_0x728870EB733D12A1()))
					{
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar48]))
						{
							iLocal_285[iVar48] = func_67((*iParam10)[iVar48], 0, 145);
						}
					}
				}
				iVar48++;
			}
			func_74(iParam10, 120f);
			func_71();
			if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) < 0.2f)
			{
				if (iLocal_230 == -1)
				{
					iLocal_230 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else
			{
				iLocal_230 = -1;
			}
			if (iLocal_230 != -1 && UNK_0x1C0640BA9A7327B3() > (iLocal_230 + 60000))
			{
				func_169();
				SYSTEM::WAIT(0);
				func_171(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]))
				{
					UNK_0xF3268524E9BE6D6E(iLocal_290[0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(iLocal_290[0], true);
				}
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
				{
					UNK_0xF3268524E9BE6D6E(iLocal_290[1], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(iLocal_290[1], true);
				}
				*iParam11 = 0;
				*iParam0 = 20;
			}
			if (func_65())
			{
				*iParam0 = 12;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		case 12:
			func_167();
			if (bLocal_278)
			{
				UNK_0x0A94A109271BE75A(iLocal_290[0]);
				UNK_0x0A94A109271BE75A(iLocal_290[1]);
				UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
				func_169();
				SYSTEM::WAIT(0);
				func_171(&uLocal_55, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_309);
					UNK_0x75CDA8644CD3B5F5(false, 0, 4194304);
					UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_309);
					UNK_0x78ADC381772E3D54((*iParam10)[0], iLocal_309);
					UNK_0xF82EA857DA10E0CD(&iLocal_309);
					UNK_0xFADC0A217229F6B5((*iParam10)[0], true);
				}
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_309);
					UNK_0x75CDA8644CD3B5F5(false, 500, 4194304);
					UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_309);
					UNK_0x78ADC381772E3D54((*iParam10)[1], iLocal_309);
					UNK_0xF82EA857DA10E0CD(&iLocal_309);
					UNK_0xFADC0A217229F6B5((*iParam10)[1], true);
				}
				*iParam0 = 20;
			}
			break;
		case 13:
			if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) < 5f)
			{
				iVar48 = 0;
				while (iVar48 <= (*iParam10 - 1))
				{
					if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[iVar48]))
					{
						if (UNK_0xD1960163A3042274((*iParam10)[iVar48], 242628503) != 1 || UNK_0xD1960163A3042274((*iParam10)[iVar48], 242628503) != 0)
						{
							if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[iVar48]))
							{
								iVar0 = 0;
								iLocal_228 = iVar48;
							}
						}
					}
					iVar48++;
				}
				*iParam0 = 14;
			}
			break;
		case 14:
			iVar48 = 0;
			while (iVar48 < *iParam10)
			{
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]))
				{
					UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), (*iParam10)[iVar48], 4000, 2048, 2);
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0x75CDA8644CD3B5F5(false, 0, 4194816);
					UNK_0x96167B03C5A77156(false, vVar32[iLocal_223 /*3*/], 2f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54((*iParam10)[0], iVar0);
					UNK_0xF82EA857DA10E0CD(&iVar0);
					if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
					{
						UNK_0xDD353D0E9C789D0E(&iVar0);
						UNK_0x75CDA8644CD3B5F5(false, 2000, 4194816);
						UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 3000, 2052, 2);
						UNK_0x96167B03C5A77156(false, vVar32[iLocal_223 /*3*/], 2f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar0);
						UNK_0x78ADC381772E3D54((*iParam10)[1], iVar0);
						UNK_0xF82EA857DA10E0CD(&iVar0);
					}
					iVar0 = 0;
					UNK_0xFADC0A217229F6B5((*iParam10)[iVar48], true);
					UNK_0x0C8C0C840C2D1AD2((*iParam10)[iVar48], UNK_0x16F2683693E537C9(), 4000, 2052, 2);
					func_169();
					SYSTEM::WAIT(0);
					if (iLocal_228 > 0)
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar48++;
			}
			break;
		case 15:
			if (!*uParam12)
			{
				if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
				{
					if (!bLocal_220)
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						bLocal_220 = true;
					}
					func_18(func_119(), 1, 1000, 0, 1);
					*uParam12 = 1;
				}
			}
			else if (!UNK_0xEB6A8945D1AC98A1((*iParam10)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam10)[1]))
			{
				if (!UNK_0x405E212DDE472467((*iParam10)[0], 0) && !UNK_0x405E212DDE472467((*iParam10)[1], 0))
				{
					UNK_0x790015DC92C918E2();
					UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
					while (!func_203())
					{
						SYSTEM::WAIT(0);
					}
					func_3(10, 0);
					if (func_2(77))
					{
						func_199(9, 0);
					}
					func_166(6);
					func_190(-1, 0);
					func_187();
					*iParam0 = 20;
				}
			}
			break;
		case 16:
			*uParam12 = 1;
			*iParam0 = 20;
			break;
		case 17:
			break;
		case 18:
			bLocal_283 = true;
			UNK_0x0E2400AB9174FA81(5, bLocal_310, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(1, bLocal_310, bLocal_310);
			UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
			UNK_0x51B096AAC60548C1(0f);
			UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
			iVar65 = 0;
			while (iVar65 < iLocal_290)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[iVar65]))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar65]))
					{
						UNK_0x142CC44DB769B57E(&(iLocal_285[iVar65]));
						if (UNK_0x405E212DDE472467(iLocal_290[iVar65], 0))
						{
							UNK_0x75CDA8644CD3B5F5(iLocal_290[iVar65], 0, 0);
						}
						if (UNK_0xE4EDC4B0E92C078B(iLocal_53))
						{
							UNK_0x142CC44DB769B57E(&iLocal_53);
						}
						UNK_0x0A94A109271BE75A(iLocal_290[iVar65]);
						UNK_0x6C3AE6E278DB3D0E(iLocal_290[iVar65], UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0xFADC0A217229F6B5(iLocal_290[iVar65], true);
					}
				}
				iVar65++;
			}
			func_169();
			SYSTEM::WAIT(0);
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
			{
				func_171(&uLocal_55, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]))
			{
				func_171(&uLocal_55, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_279)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
				{
					UNK_0x25C5402CC10F76CD(bLocal_289, false);
					UNK_0xC6EB89C59F2AF6B8(bLocal_289, "random@getawaydriver", "base", 4f, -4f, -1, 1, false, 0, 0, 0);
				}
			}
			iVar65 = 0;
			while (iVar65 < iLocal_293)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[iVar65]))
				{
					UNK_0xF3268524E9BE6D6E(iLocal_293[iVar65], UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(iLocal_293[iVar65], true);
				}
				iVar65++;
			}
			*iParam0 = 19;
			break;
		case 19:
			UNK_0x0E2400AB9174FA81(5, bLocal_310, joaat("PLAYER"));
			iVar65 = 0;
			while (iVar65 < iLocal_290)
			{
				if (UNK_0xEB6A8945D1AC98A1(iLocal_290[iVar65]))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar65]))
					{
						UNK_0x142CC44DB769B57E(&(iLocal_285[iVar65]));
					}
				}
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[iVar65]))
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar65]))
					{
						iLocal_285[iVar65] = func_67(iLocal_290[iVar65], 1, 145);
					}
					if (UNK_0x16102BEDC7435774(iLocal_290[iVar65]))
					{
						UNK_0x0A94A109271BE75A(iLocal_290[iVar65]);
					}
					if (UNK_0x405E212DDE472467(iLocal_290[iVar65], 0))
					{
						UNK_0x75CDA8644CD3B5F5(iLocal_290[iVar65], 0, 0);
						UNK_0x6C3AE6E278DB3D0E(iLocal_290[iVar65], UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0xFADC0A217229F6B5(iLocal_290[iVar65], true);
					}
					else
					{
						UNK_0x6C3AE6E278DB3D0E(iLocal_290[iVar65], UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0xFADC0A217229F6B5(iLocal_290[iVar65], true);
					}
				}
				iVar65++;
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_53))
			{
				UNK_0x142CC44DB769B57E(&iLocal_53);
			}
			break;
		case 20:
			if (!func_185())
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_3(bool bParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_116), bParam0);
	switch (bParam0)
	{
		case 10:
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), 14);
			break;
		case 13:
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), 16);
			break;
		case 12:
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), 15);
			break;
		case 11:
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (func_17(bParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			case 3:
				iVar0 = 4;
				break;
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = func_15(bParam0);
		UNK_0x1E64CE678ED5F61E("FEED_CREW_U");
		UNK_0x6B012227B3921E18(func_15(bParam0));
		UNK_0x1AEA174B291A9906(sVar1, sVar1, 0, iVar0, "", 0);
		if (!func_14(45))
		{
			func_4("AM_H_CREWU", 2, 0, 20000, 10000, func_7(), 0, 131, 0);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_6();
	}
}

void func_6()
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

int func_7()
{
	func_8();
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

void func_8()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_12(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_11(UNK_0x16F2683693E537C9());
			if (func_10(iVar0) && (!func_9(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_10(Global_111638.f_2358.f_539.f_4321))
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

bool func_9(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_14(int iParam0)
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

char* func_15(bool bParam0)
{
	return func_16(bParam0);
}

char* func_16(bool bParam0)
{
	switch (bParam0)
	{
		case 1:
			return "HC_N_GUS";
		case 2:
			return "HC_N_KAR";
		case 10:
			return "HC_N_PAC";
		case 11:
			return "HC_N_CHE";
		case 3:
			return "HC_N_HUG";
		case 4:
			return "HC_N_NOR";
		case 5:
			return "HC_N_DAR";
		case 6:
			return "HC_N_PAI";
		case 7:
			return "HC_N_CHR";
		case 12:
			return "HC_N_RIC";
		case 8:
			return "HC_N_EDD";
		case 13:
			return "HC_N_TAL";
		case 9:
			return "HC_N_KRM";
	}
	return "ERROR!";
}

int func_17(bool bParam0)
{
	return Global_94619[bParam0 /*5*/];
}

void func_18(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_53(iParam0) == 3)
	{
		return;
	}
	if (func_53(iParam0) == 4)
	{
		return;
	}
	func_19(func_53(iParam0), 1, iParam1, iParam2, 0);
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

int func_19(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_52();
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
					func_51(99, 1);
					func_50(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_50(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_50(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_35(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_30(5))
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
							func_50(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_50(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_50(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_30(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_50(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_50(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_50(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_50(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_50(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_50(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_50(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_50(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_50(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_50(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_50(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_50(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_30(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_50(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_50(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_50(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_50(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_29(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_51(95, iParam3);
					break;
				case 1:
					func_51(97, iParam3);
					break;
				case 2:
					func_51(96, iParam3);
					break;
			}
			func_51(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_22(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_22(bVar1);
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
					func_50(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_50(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_50(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_21(iParam0);
	if (Global_41431 == 15)
	{
		func_20(0);
	}
	return 1;
}

void func_20(bool bParam0)
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

void func_21(int iParam0)
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

void func_22(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_28(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_28(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_28(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_28(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_25(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_25(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_25(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_25(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_25(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_25(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_24() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_24() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_23(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_23(bool bParam0)
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

int func_24()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_25(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
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

int func_28(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_27();
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

void func_29(int iParam0)
{
	func_51(93, iParam0);
	func_51(29, iParam0);
	func_51(30, iParam0);
}

bool func_30(bool bParam0)
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
		return func_32(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_32(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_32(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_32(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_31(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_31(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_31(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_31(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_31(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_31(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_24() /*10930*/].f_6174.f_10, bParam0);
}

int func_31(int iParam0, int iParam1, int iParam2)
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

int func_32(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_27();
	}
	iVar1 = func_34(iParam0, bParam1);
	iVar2 = func_33(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_33(int iParam0)
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

int func_34(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_27();
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

int func_35(bool bParam0)
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
		func_49(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_36(27, 1);
	return 1;
}

int func_36(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_37(iParam0, iParam1);
}

int func_37(int iParam0, int iParam1)
{
	if (func_9(14) && !func_48(iParam0))
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
	if (func_47(&Global_4270065))
	{
		if (func_45(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_38(&Global_4270065, iParam0))
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

bool func_38(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_9(14) && !func_48(iParam1))
	{
		return false;
	}
	if (func_45(uParam0, iParam1))
	{
		return false;
	}
	if (func_44(uParam0) < 0f)
	{
		func_43(uParam0, 0);
	}
	func_41(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_39(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_39(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_48(iParam1))
	{
		return 0;
	}
	if (func_45(uParam0, iParam1))
	{
		return 0;
	}
	if (func_44(uParam0) < 0f)
	{
		func_43(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_40(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_40(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_41(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_42(uParam0, iVar0);
		iVar0++;
	}
	func_43(uParam0, (Global_4270064 - 0.5f));
}

void func_42(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_43(var uParam0, float fParam1)
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

float func_44(var uParam0)
{
	return uParam0->f_80;
}

bool func_45(var uParam0, int iParam1)
{
	return func_46(uParam0, iParam1) != -1;
}

int func_46(var uParam0, int iParam1)
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

bool func_47(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_48(int iParam0)
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

int func_49(int iParam0, bool bParam1)
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

void func_50(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_51(int iParam0, int iParam1)
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

void func_52()
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

int func_53(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

bool func_54()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_55()
{
	if (func_119() == 2)
	{
		if (func_56())
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

bool func_56()
{
	return Global_31005;
}

bool func_57(vector3 vParam0)
{
	if (func_119() == 2)
	{
		if (func_56() && !Global_31008)
		{
			if (fLocal_52 == -1f)
			{
				fLocal_52 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0);
			}
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0) > (fLocal_52 + 200f) || UNK_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), false), 1) < 400f)
			{
				Global_31008 = 1;
				return true;
			}
		}
	}
	return false;
}

void func_58(int iParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam0)[1]))
	{
		if (UNK_0x12DE711B1C681E9E((*iParam0)[0], (*iParam0)[1], 15f, 15f, 15f, 0, 1, 0) && UNK_0x12DE711B1C681E9E((*iParam0)[0], UNK_0x16F2683693E537C9(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_227)
			{
				case 0:
					iLocal_226 = UNK_0x1C0640BA9A7327B3();
					iLocal_227++;
					break;
				case 1:
					if (func_127(iLocal_226, 2000))
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_227++;
						}
					}
					break;
				case 2:
					if (!func_185())
					{
						if (func_119() == 0)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_119() == 1)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_119() == 2)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_227++;
					}
					break;
			}
		}
	}
}

void func_59()
{
	if (func_119() == 2)
	{
		if (!Global_31007)
		{
			func_60("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_60(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_61()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return true;
	}
	return false;
}

int func_62(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_63(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_64(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_65()
{
	if (func_66())
	{
		if (((((((UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_246, 50f, 50f, 50f, false, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_249, 50f, 50f, 50f, false, true, 0)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_252, 50f, 50f, 50f, false, true, 0)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_255, 50f, 50f, 50f, false, true, 0)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_258, 50f, 50f, 50f, false, true, 0)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_261, 50f, 50f, 50f, false, true, 0)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_264, 50f, 50f, 50f, false, true, 0)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_267, 50f, 50f, 50f, false, true, 0))
		{
			if (UNK_0x9C66D99E63E8E24C(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) < 0.2f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_66()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
			{
				if (UNK_0xC42A92762C58E1B9(iLocal_290[0], bVar0, 0) && UNK_0xC42A92762C58E1B9(iLocal_290[1], bVar0, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_67(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_68(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_63(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_63(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_63(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_69(int iParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[0]) && !UNK_0xEB6A8945D1AC98A1((*iParam0)[1]))
	{
		if (UNK_0x12DE711B1C681E9E((*iParam0)[0], (*iParam0)[1], 15f, 15f, 15f, 0, 1, 0) && UNK_0x12DE711B1C681E9E((*iParam0)[0], UNK_0x16F2683693E537C9(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_225)
			{
				case 0:
					iLocal_226 = UNK_0x1C0640BA9A7327B3();
					iLocal_225++;
					break;
				case 1:
					if (func_127(iLocal_226, 2000))
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_225++;
						}
					}
					break;
				case 2:
					if (!func_185())
					{
						if (func_119() == 0)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_119() == 1)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_119() == 2)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_225++;
					}
					break;
			}
		}
	}
}

void func_70(int iParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		UNK_0x142CC44DB769B57E(&iParam0);
	}
}

void func_71()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < iLocal_290)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[iVar0]))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				if (!func_128())
				{
					UNK_0x11AD11297DC58CC7(iLocal_290[iVar0], true);
					if (UNK_0x16102BEDC7435774(iLocal_290[iVar0]))
					{
						UNK_0x0A94A109271BE75A(iLocal_290[iVar0]);
					}
					if (UNK_0xD1960163A3042274(iLocal_290[iVar0], 1227113341) != 1 && UNK_0xD1960163A3042274(iLocal_290[iVar0], 1227113341) != 0)
					{
						UNK_0xE185F110925D87DB(iLocal_290[iVar0], UNK_0x16F2683693E537C9(), -1, 6f, 2f, 1073741824 /* Float: 2f */, 0);
					}
					if (UNK_0x405E212DDE472467(iLocal_290[iVar0], 0))
					{
						UNK_0x75CDA8644CD3B5F5(iLocal_290[iVar0], 0, 0);
					}
					if (!bLocal_281)
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							bLocal_281 = true;
						}
					}
				}
				else
				{
					bLocal_281 = false;
					UNK_0x11AD11297DC58CC7(iLocal_290[iVar0], false);
					if (UNK_0xD1960163A3042274(iLocal_290[iVar0], 1227113341) == 1 && UNK_0xD1960163A3042274(iLocal_290[iVar0], 1227113341) == 0)
					{
						UNK_0xA3BF0AA5A2608191(iLocal_290[iVar0]);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
					{
						UNK_0xBF541ED34EA81209(iLocal_290[0], true);
						UNK_0xBF541ED34EA81209(iLocal_290[1], false);
						if (UNK_0x134B62B726CEC8E6(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9())) == joaat("BUS"))
						{
							if (!UNK_0xBBA8A868118C90ED(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), true, 0))
							{
								bVar1 = UNK_0xA30B8362589C124A(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), true, 0);
								if (!UNK_0xAF6690C489CC6203(bVar1))
								{
									UNK_0x73270B3C9CC833FD(bVar1, true, 0);
									UNK_0xEBA53F35D0085654(&bVar1);
								}
							}
							if (!UNK_0xBBA8A868118C90ED(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), false, 0))
							{
								bVar2 = UNK_0xA30B8362589C124A(UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9()), false, 0);
								if (!UNK_0xAF6690C489CC6203(bVar2))
								{
									UNK_0x73270B3C9CC833FD(bVar2, true, 0);
									UNK_0xEBA53F35D0085654(&bVar2);
								}
							}
						}
					}
				}
			}
			else if (!UNK_0x16102BEDC7435774(iLocal_290[iVar0]))
			{
				UNK_0xA3BF0AA5A2608191(iLocal_290[iVar0]);
				UNK_0xE25C96A9C36BE5D2(iLocal_290[iVar0], func_75());
				UNK_0x7BECA8F360B1686D(iLocal_290[iVar0], 1);
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
				{
					UNK_0xBF541ED34EA81209(iLocal_290[0], true);
					UNK_0xBF541ED34EA81209(iLocal_290[1], false);
				}
			}
		}
		iVar0++;
	}
}

void func_72()
{
	if (!func_61())
	{
		if (func_119() == 2)
		{
			Global_31005 = 1;
		}
	}
}

bool func_73(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
		{
			if (!UNK_0xC42A92762C58E1B9((*iParam0)[iVar0], bParam1, 0))
			{
				if (bParam2 > 0f)
				{
					if (UNK_0x12DE711B1C681E9E((*iParam0)[iVar0], UNK_0x16F2683693E537C9(), bParam2, bParam2, bParam2, 0, 1, 0))
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_74(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar0]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_285[iVar0]));
			}
		}
		else
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
				{
					if (UNK_0xC42A92762C58E1B9((*iParam0)[iVar0], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
					{
						if (UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar0]))
						{
							UNK_0x142CC44DB769B57E(&(iLocal_285[iVar0]));
						}
					}
					else if (!UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar0]))
					{
						iLocal_285[iVar0] = func_67((*iParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar0]))
			{
				iLocal_285[iVar0] = func_67((*iParam0)[iVar0], 0, 145);
			}
			if (!UNK_0x12DE711B1C681E9E((*iParam0)[iVar0], UNK_0x16F2683693E537C9(), bParam1, bParam1, bParam1, 0, 1, 0))
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar0]))
				{
					UNK_0x142CC44DB769B57E(&(iLocal_285[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

int func_75()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

bool func_76()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_290)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_290[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[iVar0]))
			{
				if (!UNK_0x16102BEDC7435774(iLocal_290[iVar0]))
				{
					if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
					{
						if (UNK_0x6AB6A474D29FA7D8(iLocal_290[iVar0], UNK_0x16F2683693E537C9()))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_290[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_290[1]))
							{
								if (((UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_290[0]) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_290[0])) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_290[1])) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_290[1]))
								{
									if (iLocal_229 == -1)
									{
										iLocal_229 = UNK_0x1C0640BA9A7327B3();
									}
								}
								else
								{
									iLocal_229 = -1;
								}
							}
						}
					}
					if (!bLocal_284)
					{
						if (iLocal_229 != -1 && UNK_0x1C0640BA9A7327B3() > iLocal_229 + 1000)
						{
							func_169();
							SYSTEM::WAIT(0);
							func_171(&uLocal_55, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							bLocal_284 = true;
						}
					}
					if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
					{
						if (UNK_0xB87D13D0C064E9D1(iLocal_290[iVar0], UNK_0x728870EB733D12A1(), 1))
						{
							return true;
						}
					}
					if ((UNK_0xB87D13D0C064E9D1(iLocal_290[iVar0], UNK_0x16F2683693E537C9(), 1) && UNK_0x7F6DC62EA9922664(iLocal_290[iVar0]) < 190) || (iLocal_229 != -1 && UNK_0x1C0640BA9A7327B3() > iLocal_229 + 5000))
					{
						return true;
					}
				}
			}
			else
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
				{
					if (UNK_0xB87D13D0C064E9D1(iLocal_290[iVar0], UNK_0x728870EB733D12A1(), 1))
					{
						return true;
					}
				}
				if (UNK_0xB87D13D0C064E9D1(iLocal_290[iVar0], UNK_0x16F2683693E537C9(), 1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_77(int iParam0, bool bParam1)
{
	int iVar0;

	if (!bLocal_221)
	{
		iVar0 = 0;
		while (iVar0 <= (*iParam0 - 1))
		{
			if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, true, 0) && !UNK_0x03068588A1FCED1A((*iParam0)[iVar0])) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_285[iVar0]))
					{
						if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
						{
							if (!func_207())
							{
								func_106(1);
								func_105(1);
								if (!UNK_0x437347B10A200C4B(bLocal_308, 0))
								{
									if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_308, 0) && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_308, 50f, 50f, 50f, 0, 1, 0))
									{
										func_80(bLocal_308, 0, 145);
									}
								}
							}
							iLocal_285[iVar0] = func_67((*iParam0)[iVar0], 0, 145);
							UNK_0xF2D30B8ACAF12A39(iLocal_285[iVar0], false);
							func_70(iLocal_54);
						}
					}
					if (!func_185())
					{
						if (iLocal_232 < UNK_0x1C0640BA9A7327B3())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_232 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(3500, 4000));
						}
					}
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
					{
						func_78();
						if (!UNK_0x437347B10A200C4B(bParam1, 0))
						{
							if (!func_185())
							{
								if (func_128() && UNK_0xF79A7BCA9E38BBBC(UNK_0x728870EB733D12A1()))
								{
									func_171(&uLocal_55, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									bLocal_221 = true;
								}
								else
								{
									func_171(&uLocal_55, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									bLocal_221 = true;
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_285[0]))
								{
									UNK_0xF2D30B8ACAF12A39(iLocal_285[0], true);
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_285[1]))
								{
									UNK_0xF2D30B8ACAF12A39(iLocal_285[1], true);
								}
								if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[1]) && !UNK_0xEB6A8945D1AC98A1(bLocal_289))
								{
									UNK_0x9DD8618CA5BF832D((*iParam0)[1], 156, true);
									UNK_0xDD353D0E9C789D0E(&iLocal_309);
									UNK_0xC6EB89C59F2AF6B8(false, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, false, 0, 0, 0);
									UNK_0xC6EB89C59F2AF6B8(false, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, false, 0, 0, 0);
									UNK_0x9BE7E7B6B488CC55(false, bLocal_289, -1, 0);
									UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2096, 4);
									UNK_0x75ABDC5F81978924(iLocal_309);
									UNK_0x78ADC381772E3D54((*iParam0)[1], iLocal_309);
									UNK_0xF82EA857DA10E0CD(&iLocal_309);
								}
								UNK_0x0C8C0C840C2D1AD2((*iParam0)[iVar0], UNK_0x16F2683693E537C9(), -1, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_78()
{
	Global_19671 = 0;
	func_79();
}

void func_79()
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

int func_80(bool bParam0, int iParam1, int iParam2)
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
	func_81(bParam0, iParam2);
	return 1;
}

void func_81(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_87(bParam0))
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
	func_82(bParam0, &(Global_111638.f_32744.f_5510));
}

void func_82(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_86(uParam1);
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
		if (uParam1->f_65 == -1 && !func_85(uParam1->f_66))
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
		func_84(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_83(iVar0 + 1));
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

int func_83(int iParam0)
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

int func_84(bool bParam0, var uParam1, var uParam2)
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

bool func_85(int iParam0)
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

void func_86(var uParam0)
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

bool func_87(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_103(bParam0, 0, 0)) || func_103(bParam0, 1, 0)) || func_103(bParam0, 2, 0)) || func_102(bParam0) != 145) || func_101(bParam0)) || func_100(bParam0)) || func_99(bParam0)) || func_98(bParam0)) || !func_88(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_100(bParam0))
		{
		}
		if (func_100(bParam0))
		{
		}
		if (func_103(bParam0, 0, 0))
		{
		}
		if (func_103(bParam0, 1, 0))
		{
		}
		if (func_103(bParam0, 2, 0))
		{
		}
		if (func_102(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_88(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_89(bParam0, 0))
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

bool func_89(bool bParam0, bool bParam1)
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
		if (!func_97())
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
		if ((((!func_96() && !func_95()) && !func_94()) && !func_93()) && !func_97())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_94())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_92(bParam0))
		{
			return false;
		}
	}
	if (!func_90(bParam0))
	{
		return false;
	}
	return true;
}

bool func_90(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_91())
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

bool func_91()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_92(bool bParam0)
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

bool func_93()
{
	return false;
}

bool func_94()
{
	return true;
}

bool func_95()
{
	return true;
}

bool func_96()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_97()
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

bool func_98(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_89(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_99(bool bParam0)
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

bool func_100(bool bParam0)
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

bool func_101(bool bParam0)
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

int func_102(bool bParam0)
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

bool func_103(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_104(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_104(int iParam0, int iParam1, char* sParam2, int iParam3)
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

void func_105(bool bParam0)
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

int func_106(bool bParam0)
{
	if (func_110())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_109(Global_111627))
		{
			func_107(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_109(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_60(func_108(iParam0), -1);
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
					func_60(func_108(iParam0), -1);
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
					func_60(func_108(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

bool func_108(int iParam0)
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

bool func_109(int iParam0)
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

bool func_110()
{
	switch (func_111(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_111(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_115(0))
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
		if (!func_113(iParam2))
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
			func_112(uParam0, iParam4);
		}
	}
	return 2;
}

void func_112(var uParam0, int iParam1)
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

bool func_113(int iParam0)
{
	return func_114(iParam0, Global_41431);
}

int func_114(int iParam0, int iParam1)
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

bool func_115(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_113(iParam0))
	{
		return false;
	}
	return true;
}

void func_116(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_117(iParam2), 1);
}

int func_117(int iParam0)
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

void func_118(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_119()
{
	func_8();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_120(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_125(iParam0, 2, 1))
		{
			func_124(iParam0, 2, 1);
		}
	}
	else if (func_125(iParam0, 2, 1))
	{
		func_121(iParam0, 2, 1);
	}
}

void func_121(int iParam0, bool bParam1, bool bParam2)
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
		if (func_123() == 0)
		{
			bVar0 = func_31(func_122(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_25(func_122(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

int func_122(int iParam0)
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

int func_123()
{
	return Global_30768;
}

void func_124(int iParam0, bool bParam1, bool bParam2)
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
		if (func_123() == 0)
		{
			bVar0 = func_31(func_122(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_25(func_122(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_125(int iParam0, bool bParam1, bool bParam2)
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
		if (func_123() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_31(func_122(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

bool func_126(vector3 vParam0, bool bParam3, int iParam4)
{
	if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam0, bParam3, bParam3, bParam3, false, true, 0))
	{
		if (iParam4 == 0)
		{
			if (UNK_0x8E28E832BEAC3DCE(vParam0, 5f))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x1C0640BA9A7327B3();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_128()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			if (((((!UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()) && !UNK_0xC7BC967711A8A063(UNK_0x16F2683693E537C9())) && !UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9())) && !UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9())) && !UNK_0xEFAE7FB688EBF2B5(UNK_0x16F2683693E537C9())) && !UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("RHINO")))
			{
				if (UNK_0xD6DF381716822EFE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) >= 2)
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

void func_129(bool bParam0)
{
	if (bParam0)
	{
	}
}

bool func_130(int iParam0)
{
	if (UNK_0x338D6FF72D84D90F())
	{
		if (func_131(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_9(6) || func_9(7))
			{
				return true;
			}
			else
			{
				return func_131(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_113(5))
			{
				if (func_132(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_132(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_119();
				if (!func_10(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_141()) || Global_110685) || Global_30770) || func_140()) || func_139(8, -1)) || func_138()) || func_137()) || func_136()) || func_135()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_141()) || Global_30770) || func_140()) || func_139(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_141()) || Global_110685) || Global_30770) || func_140()) || func_139(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_141()) || Global_110685) || Global_30770) || func_140()) || func_139(8, -1)) || func_138()) || func_137()) || func_135()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_141() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_139(8, -1)) || func_135()) || func_134()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_139(8, -1) || func_138()) || func_137()) || func_134()) || func_133())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_141()) || Global_30770) || func_140()) || func_139(8, -1)) || func_137()) || func_136()) || func_135()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_141()) || func_137()) || Global_110685) || Global_30770) || func_140()) || Global_42596) || func_139(8, -1)) || func_136()) || func_134()) || func_135()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_141()) || Global_110685) || Global_30770) || func_140()) || func_139(8, -1)) || func_136()) || func_134()) || func_138()) || func_137()) || func_135())
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

bool func_133()
{
	return Global_98783.f_1;
}

bool func_134()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_135()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_136()
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

bool func_137()
{
	return Global_98796.f_346 > 0;
}

bool func_138()
{
	return Global_98796.f_345 > 0;
}

bool func_139(bool bParam0, int iParam1)
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

bool func_140()
{
	return Global_1312877;
}

bool func_141()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_142(int iParam0, struct<7> Param1, var uParam8, var uParam9)
{
	if (iParam0 == 1)
	{
		func_152(&uLocal_314, Param1);
		func_152(&uLocal_314, Param1.f_1);
		func_152(&uLocal_314, Param1.f_2);
		func_152(&uLocal_314, Param1.f_3);
		func_152(&uLocal_314, Param1.f_4);
		func_152(&uLocal_314, Param1.f_5);
		func_152(&uLocal_314, Param1.f_6);
		if (func_149(&uLocal_314))
		{
			return true;
		}
	}
	else
	{
		func_143(&uLocal_314, 0);
	}
	return false;
}

void func_143(var uParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		func_145(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_144(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_144(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_145(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			func_146(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_146(var uParam0)
{
	func_147(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		switch (func_148(bParam0))
		{
			case 0:
				UNK_0x71199B01895C6202(bParam2);
				break;
			case 1:
				UNK_0x8D17794CE3273D70(bParam1);
				break;
			case 2:
				UNK_0x413168EF79E35C7B(bParam1);
				break;
			case 3:
				UNK_0xF5A41F3D3B38EFE3(bParam1);
				break;
			case 4:
				UNK_0xDB8844D4B7C60440(bParam2, bParam1);
				break;
			case 5:
				UNK_0x2F3540C2227116A3(bParam1);
				break;
			case 6:
				UNK_0x8C26F31DFF77D124();
				break;
			case 7:
				UNK_0xB60B60856BF98DCE(bParam2);
				break;
			case 8:
				UNK_0x11CCD0ACA866C6C5(bParam2, UNK_0xEAE0D21A50E6C7F4(bParam0, 26));
				break;
			case 9:
				UNK_0x29D7581AEF4440C2();
				break;
			default:
				break;
		}
	}
}

bool func_148(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 10)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

bool func_149(var uParam0)
{
	int iVar0;

	if (!uParam0->f_145)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
			{
				return false;
			}
			if (!func_150(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return true;
}

bool func_150(var uParam0)
{
	return func_151(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

bool func_151(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, 29))
		{
			switch (func_148(bParam0))
			{
				case 0:
					return UNK_0xB87F6CF6E5628C67(bParam2);
				case 1:
					return UNK_0xB4AE0788C1587752(bParam1);
				case 2:
					return UNK_0x59F02DA2266A744C(bParam1);
				case 3:
					return UNK_0x27117E2CDD4D67C3(bParam1);
				case 4:
					return UNK_0x3DDA6C6A285628E4(bParam2, bParam1);
				case 5:
					return UNK_0x1C2E18E9C63BEB77(bParam1);
				case 6:
					return UNK_0xAE317D00A5A55DF6(bParam1, UNK_0xEAE0D21A50E6C7F4(bParam0, 27), -1);
				case 7:
					return UNK_0x64EF15C5E09BAD76(bParam2);
				case 8:
					return UNK_0x67C1D9E5B91B2E37(bParam2);
				case 9:
					return UNK_0x25F7A4D42AF2AB93();
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_152(var uParam0, int iParam1)
{
	func_153(uParam0, 0, iParam1, "NULL", 0);
}

void func_153(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!UNK_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (UNK_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], bParam1);
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

bool func_154()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_49) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_165())
		{
			return false;
		}
	}
	if (func_161())
	{
		return true;
	}
	if (func_155(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_155(float fParam0, bool bParam1)
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
		if (func_10(func_119()))
		{
			iVar36 = func_7();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_156(iVar32, &Var0);
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

void func_156(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_157(uParam1, "Abigail1", func_159(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 1:
			func_157(uParam1, "Abigail2", func_159(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 2:
			func_157(uParam1, "Barry1", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 3:
			func_157(uParam1, "Barry2", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		case 4:
			func_157(uParam1, "Barry3", func_159(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 5:
			func_157(uParam1, "Barry3A", func_159(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 6:
			func_157(uParam1, "Barry3C", func_159(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 7:
			func_157(uParam1, "Barry4", func_159(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_158(iParam0), 0, 0);
			break;
		case 8:
			func_157(uParam1, "Dreyfuss1", func_159(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 9:
			func_157(uParam1, "Epsilon1", func_159(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 10:
			func_157(uParam1, "Epsilon2", func_159(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 11:
			func_157(uParam1, "Epsilon3", func_159(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 12:
			func_157(uParam1, "Epsilon4", func_159(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 13:
			func_157(uParam1, "Epsilon5", func_159(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 14:
			func_157(uParam1, "Epsilon6", func_159(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 15:
			func_157(uParam1, "Epsilon7", func_159(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 16:
			func_157(uParam1, "Epsilon8", func_159(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 17:
			func_157(uParam1, "Extreme1", func_159(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 18:
			func_157(uParam1, "Extreme2", func_159(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 19:
			func_157(uParam1, "Extreme3", func_159(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 20:
			func_157(uParam1, "Extreme4", func_159(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 21:
			func_157(uParam1, "Fanatic1", func_159(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_158(iParam0), 1, 0);
			break;
		case 22:
			func_157(uParam1, "Fanatic2", func_159(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_158(iParam0), 1, 0);
			break;
		case 23:
			func_157(uParam1, "Fanatic3", func_159(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_158(iParam0), 0, 1);
			break;
		case 24:
			func_157(uParam1, "Hao1", func_159(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_158(iParam0), 0, 1);
			break;
		case 25:
			func_157(uParam1, "Hunting1", func_159(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 26:
			func_157(uParam1, "Hunting2", func_159(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 27:
			func_157(uParam1, "Josh1", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 28:
			func_157(uParam1, "Josh2", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		case 29:
			func_157(uParam1, "Josh3", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		case 30:
			func_157(uParam1, "Josh4", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 31:
			func_157(uParam1, "Maude1", func_159(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 32:
			func_157(uParam1, "Minute1", func_159(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 33:
			func_157(uParam1, "Minute2", func_159(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 34:
			func_157(uParam1, "Minute3", func_159(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 35:
			func_157(uParam1, "MrsPhilips1", func_159(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 36:
			func_157(uParam1, "MrsPhilips2", func_159(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 37:
			func_157(uParam1, "Nigel1", func_159(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 38:
			func_157(uParam1, "Nigel1A", func_159(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		case 39:
			func_157(uParam1, "Nigel1B", func_159(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		case 40:
			func_157(uParam1, "Nigel1C", func_159(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		case 41:
			func_157(uParam1, "Nigel1D", func_159(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		case 42:
			func_157(uParam1, "Nigel2", func_159(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		case 43:
			func_157(uParam1, "Nigel3", func_159(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		case 44:
			func_157(uParam1, "Omega1", func_159(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 45:
			func_157(uParam1, "Omega2", func_159(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 46:
			func_157(uParam1, "Paparazzo1", func_159(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 47:
			func_157(uParam1, "Paparazzo2", func_159(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 48:
			func_157(uParam1, "Paparazzo3", func_159(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 49:
			func_157(uParam1, "Paparazzo3A", func_159(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 50:
			func_157(uParam1, "Paparazzo3B", func_159(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 51:
			func_157(uParam1, "Paparazzo4", func_159(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 52:
			func_157(uParam1, "Rampage1", func_159(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 54:
			func_157(uParam1, "Rampage3", func_159(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 55:
			func_157(uParam1, "Rampage4", func_159(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 56:
			func_157(uParam1, "Rampage5", func_159(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		case 53:
			func_157(uParam1, "Rampage2", func_159(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		case 57:
			func_157(uParam1, "TheLastOne", func_159(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 58:
			func_157(uParam1, "Tonya1", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 59:
			func_157(uParam1, "Tonya2", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 60:
			func_157(uParam1, "Tonya3", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 61:
			func_157(uParam1, "Tonya4", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		case 62:
			func_157(uParam1, "Tonya5", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_157(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_158(int iParam0)
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

struct<2> func_159(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_160(iParam0) };
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

struct<2> func_160(int iParam0)
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

bool func_161()
{
	if (func_164() && !func_165())
	{
		return true;
	}
	if (func_163() && func_162())
	{
		return true;
	}
	return false;
}

bool func_162()
{
	return Global_111356 > 0;
}

bool func_163()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_164()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_165()
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

void func_166(int iParam0)
{
	Global_111624 = iParam0;
}

void func_167()
{
	if (!bLocal_278)
	{
		UNK_0x4490D017C57827E9(func_186(UNK_0xD803B885F5E47A62()) - Vector(0f, 10f, 0f), UNK_0x09AC81E49EA267F7(5, 15), &vLocal_243, 1, 3f, 0f);
		if (!UNK_0x8E28E832BEAC3DCE(vLocal_243, 10f))
		{
			vLocal_237 = { vLocal_243 };
			bLocal_277 = true;
		}
		else
		{
			UNK_0x4490D017C57827E9(func_186(UNK_0xD803B885F5E47A62()) + Vector(0f, 10f, 0f), UNK_0x09AC81E49EA267F7(5, 15), &vLocal_243, 1, 3f, 0f);
			if (!UNK_0x8E28E832BEAC3DCE(vLocal_243, 10f))
			{
				vLocal_237 = { vLocal_243 };
				bLocal_277 = true;
			}
			if (bLocal_277)
			{
				if (!UNK_0xC844350D5D58C99A(iLocal_299[0]))
				{
					iLocal_299[0] = UNK_0x36F2404464202779(6, joaat("S_M_Y_COP_01"), vLocal_237 + Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_65())
					{
						UNK_0x262EF6C6306BEA6C(iLocal_299[0], joaat("WEAPON_PISTOL"), -1, true, true);
						UNK_0x6DF7BF67E86AAE86(iLocal_299[0], bLocal_312);
						UNK_0x11AD11297DC58CC7(iLocal_299[0], true);
						UNK_0x7C8478BF70C1E072(iLocal_299[0], 50f, 0);
						UNK_0xFADC0A217229F6B5(iLocal_299[0], true);
					}
					else
					{
						UNK_0x11AD11297DC58CC7(iLocal_299[0], true);
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, 6f, 3f, 1073741824 /* Float: 2f */, 0);
						UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, false, 0, 0, 0);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0x93D47DFD0AE94949(false, 3000);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(iLocal_299[0], iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
						UNK_0xFADC0A217229F6B5(iLocal_299[0], true);
						func_118(&uLocal_55, 4, iLocal_299[0], "REGETCop", 0, 1);
					}
				}
				if (!UNK_0xC844350D5D58C99A(iLocal_299[1]))
				{
					iLocal_299[1] = UNK_0x36F2404464202779(6, joaat("S_M_Y_COP_01"), vLocal_237 - Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_65())
					{
						UNK_0x262EF6C6306BEA6C(iLocal_299[0], joaat("WEAPON_PISTOL"), -1, false, true);
						UNK_0x6DF7BF67E86AAE86(iLocal_299[1], bLocal_312);
						UNK_0x11AD11297DC58CC7(iLocal_299[1], true);
						UNK_0x7C8478BF70C1E072(iLocal_299[1], 50f, 0);
						UNK_0xFADC0A217229F6B5(iLocal_299[1], true);
					}
					else
					{
						UNK_0x11AD11297DC58CC7(iLocal_299[1], true);
						UNK_0xB87AD42E3FA06BDE(iLocal_299[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, -1082130432 /* Float: -1f */);
						UNK_0xFADC0A217229F6B5(iLocal_299[1], true);
					}
				}
				if (!UNK_0xC844350D5D58C99A(bLocal_306))
				{
					bLocal_306 = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), vLocal_237, false, true, true, false);
					vLocal_240 = { func_186(UNK_0xD803B885F5E47A62()) - UNK_0x68F4C0EC296D3901(bLocal_306, true) };
					UNK_0xD8F6A53F4799FAFE(bLocal_306, UNK_0xE7D606C557C86100(vLocal_240.x, vLocal_240.y));
					UNK_0xAA280AF45BCCCF21(bLocal_306, 1);
				}
				if (!UNK_0xC844350D5D58C99A(iLocal_299[2]))
				{
					iLocal_299[2] = UNK_0x852A19533F896693(bLocal_306, 6, joaat("S_M_Y_COP_01"), -1, 1, true);
					if (func_65())
					{
						UNK_0x262EF6C6306BEA6C(iLocal_299[2], joaat("WEAPON_PISTOL"), -1, true, true);
						UNK_0x6DF7BF67E86AAE86(iLocal_299[2], bLocal_312);
						UNK_0xAFF39FB306F8E232(iLocal_299[2], 1, true);
						UNK_0xAFF39FB306F8E232(iLocal_299[2], 3, false);
						UNK_0x11AD11297DC58CC7(iLocal_299[2], true);
						UNK_0x89258193691A7600(iLocal_299[2], bLocal_306, iLocal_290[1], 6, 15f, 2, -1f, -1f, 1);
						UNK_0xFADC0A217229F6B5(iLocal_299[2], true);
					}
					else
					{
						UNK_0x11AD11297DC58CC7(iLocal_299[2], true);
						UNK_0xDD353D0E9C789D0E(&iLocal_309);
						UNK_0xE9362E4D600DD12A(false, bLocal_306, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("POLICE"), 786469, 1f, -1f);
						UNK_0x93D47DFD0AE94949(false, 5000);
						UNK_0x75ABDC5F81978924(iLocal_309);
						UNK_0x78ADC381772E3D54(iLocal_299[2], iLocal_309);
						UNK_0xF82EA857DA10E0CD(&iLocal_309);
						UNK_0xFADC0A217229F6B5(iLocal_299[2], true);
					}
				}
				bLocal_278 = true;
			}
		}
	}
}

bool func_168(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (UNK_0xC844350D5D58C99A((*iParam0)[iVar0]))
		{
			if (UNK_0xC844350D5D58C99A(bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(bParam1, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
					{
						if (UNK_0xC42A92762C58E1B9((*iParam0)[iVar0], bParam1, 0))
						{
							return false;
						}
						if (bParam2 > 0f)
						{
							if (UNK_0x12DE711B1C681E9E((*iParam0)[iVar0], UNK_0x16F2683693E537C9(), bParam2, bParam2, bParam2, 0, 1, 0))
							{
								return false;
							}
						}
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
		iVar0++;
	}
	return true;
}

void func_169()
{
	Global_19671 = 0;
	func_170();
}

void func_170()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

int func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_184(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_172(sParam2, iParam3, 0);
}

int func_172(char* sParam0, int iParam1, bool bParam2)
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
					func_79();
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
		if (func_139(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_183();
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
				func_182();
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
				if (func_181())
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
			if (func_180())
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
			func_179();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_178();
		func_173();
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
		func_79();
	}
	return 0;
}

void func_173()
{
	if (!func_174())
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

bool func_174()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_177())
	{
		return false;
	}
	if (func_175(UNK_0xD803B885F5E47A62()))
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

bool func_175(int iParam0)
{
	return func_176(iParam0, 20);
}

bool func_176(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_177()
{
	return -1;
}

void func_178()
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

void func_179()
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

bool func_180()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_181()
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

void func_182()
{
	if (func_9(14))
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
		Global_19486 = func_119();
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

void func_183()
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

void func_184(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_185()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

Vector3 func_186(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_187()
{
	func_188();
}

int func_188()
{
	if (func_189(0))
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

bool func_189(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_190(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_196(iParam0))
	{
		func_195(iParam0, bParam1);
		if (!func_14(51))
		{
			func_4("RE_REWARD", 1, 0, 4000, 10000, func_7(), 0, 138, 0);
			func_194(51);
		}
		if (func_109(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_193(iParam0, bParam1) != 322)
		{
			func_191(func_193(iParam0, bParam1), vLocal_49.x, vLocal_49.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_166(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_166(7);
			}
			else
			{
				func_166(1);
			}
		}
	}
}

void func_191(int iParam0, var uParam1, var uParam2)
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
		func_28((891 + iParam0), 1, -1, 1);
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
		func_192();
	}
}

void func_192()
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
		func_49(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_123() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_188();
				}
			}
		}
	}
}

int func_193(int iParam0, bool bParam1)
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

void func_194(int iParam0)
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

void func_195(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_196(int iParam0)
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

int func_197()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_198(Var0);
	return iVar16;
}

int func_198(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_199(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 >= 0 && bVar0 <= 31)
	{
		if (!func_202(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_26429.f_1), bVar0);
			if (!bParam1)
			{
				func_200(func_201(bParam0));
			}
		}
	}
}

void func_200(char* sParam0)
{
	UNK_0x1E64CE678ED5F61E("");
	UNK_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_201(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "CM_HSTCHE";
		case 1:
			return "CM_HSTCHR";
		case 2:
			return "CM_HSTDAR";
		case 3:
			return "CM_HSTEDD";
		case 4:
			return "CM_HSTGUS";
		case 5:
			return "CM_HSTHUG";
		case 6:
			return "CM_HSTKRM";
		case 7:
			return "CM_HSTKAR";
		case 8:
			return "CM_HSTNOR";
		case 9:
			return "CM_HSTPAC";
		case 10:
			return "CM_HSTPAI";
		case 11:
			return "CM_HSTRIC";
		case 12:
			return "CM_HSTTAL";
	}
	return "ERROR!";
}

bool func_202(bool bParam0)
{
	if (bParam0 != -1 && bParam0 != 13)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_26429.f_1, bParam0);
	}
	return false;
}

bool func_203()
{
	return true;
}

bool func_204()
{
	if (Global_31006)
	{
		func_166(4);
		return true;
	}
	return false;
}

bool func_205(int iParam0)
{
	return func_125(iParam0, 5, 1);
}

bool func_206()
{
	if (!func_113(5))
	{
		return true;
	}
	if (func_161())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_165())
		{
			return false;
		}
	}
	if (func_155(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_207()
{
	if ((Global_111627 == func_197() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_208(var uParam0)
{
	int iVar0;

	if (uParam0->f_145)
	{
		if ((UNK_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_146 + uParam0->f_147) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
					{
						func_209(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = UNK_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_209(bool bParam0)
{
	func_210(bParam0, &(bParam0->f_2), bParam0->f_1);
}

void func_210(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 30))
	{
		switch (func_148(*bParam0))
		{
			case 0:
				UNK_0x523BCC9DC80CD82F(bParam2);
				break;
			case 1:
				UNK_0x3F423BF5B8125A50(bParam1);
				break;
			case 2:
				UNK_0x4E09E67A27F104A7(bParam1);
				break;
			case 3:
				UNK_0x0D3BE1DE0262A012(bParam1, UNK_0xEAE0D21A50E6C7F4(*bParam0, 28));
				break;
			case 4:
				UNK_0x36187931D29E5BBE(bParam2, bParam1);
				break;
			case 5:
				UNK_0x29398344B9E5B8A7(bParam1);
				break;
			case 6:
				UNK_0xAE317D00A5A55DF6(bParam1, UNK_0xEAE0D21A50E6C7F4(*bParam0, 27), -1);
				break;
			case 7:
				UNK_0x8CFFBE74CB5C864A(bParam2);
				break;
			case 8:
				UNK_0xD7992BEF7A9D109E(bParam1, bParam2);
				break;
			case 9:
				UNK_0x9E5E60D8C63FD9D1();
				break;
			default:
				break;
		}
		UNK_0x5D96D8530B3D0904(bParam0, 29);
	}
}

void func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_213(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_212();
}

void func_212()
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

void func_213(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_214(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_197();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_97())
		{
			return false;
		}
	}
	vLocal_49 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_165())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_189(0))
		{
			return false;
		}
		if (func_161())
		{
			return false;
		}
		if (func_244())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_10(func_119()))
		{
			if (func_155(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_49.z) > 50f)
			{
				return false;
			}
		}
		if (!func_243(iParam3))
		{
			return false;
		}
		if (func_10(func_119()))
		{
			if (func_242(func_119()) == 4 || func_242(func_119()) == 5)
			{
				return false;
			}
		}
		if (func_10(func_119()))
		{
			if (!func_241(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_240(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_239())
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
		if (!func_132(4))
		{
			return false;
		}
		if (!func_113(5))
		{
			return false;
		}
		if (func_238(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_238(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_243(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_10(func_119()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_237(bVar8))
				{
					if (func_215(iVar4))
					{
						if (!func_64(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_119() != iVar4)
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

int func_215(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_216(bVar0);
}

int func_216(bool bParam0)
{
	return func_217(bParam0, 1);
}

int func_217(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_237(bParam0))
	{
		return 0;
	}
	func_218(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_219(func_230(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_219(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_229(bParam0, bParam1))
	{
		iVar0 = func_228(bParam1);
		iVar1 = func_226(bParam0);
		iVar2 = (func_226(bParam0) - func_226(bParam1));
		iVar3 = (func_228(bParam0) - func_228(bParam1));
		iVar4 = (func_225(bParam0) - func_225(bParam1));
		iVar5 = (func_224(bParam0) - func_224(bParam1));
		iVar6 = (func_223(bParam0) - func_223(bParam1));
		iVar7 = (func_222(bParam0) - func_222(bParam1));
	}
	else
	{
		iVar0 = func_228(bParam0);
		iVar1 = func_226(bParam1);
		iVar2 = (func_226(bParam1) - func_226(bParam0));
		iVar3 = (func_228(bParam1) - func_228(bParam0));
		iVar4 = (func_225(bParam1) - func_225(bParam0));
		iVar5 = (func_224(bParam1) - func_224(bParam0));
		iVar6 = (func_223(bParam1) - func_223(bParam0));
		iVar7 = (func_222(bParam1) - func_222(bParam0));
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
		iVar4 = (iVar4 + func_221(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_220(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_220(float fParam0, float fParam1, float fParam2)
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

int func_221(bool bParam0, int iParam1)
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

int func_222(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_223(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_224(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_225(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_226(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_227(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_227(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_228(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_229(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_237(bParam1) || !func_237(bParam0))
	{
		return true;
	}
	bVar0 = func_226(bParam0);
	bVar1 = func_226(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_228(bParam0);
	bVar1 = func_228(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_225(bParam0);
	bVar1 = func_225(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_224(bParam0);
	bVar1 = func_224(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_223(bParam0);
	bVar1 = func_223(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_222(bParam0);
	bVar1 = func_222(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_230()
{
	var uVar0;

	func_236(&uVar0, UNK_0x4460E481B9E33ADA());
	func_235(&uVar0, UNK_0x8D199E381D262EEF());
	func_234(&uVar0, UNK_0xD8A54335F18763BA());
	func_233(&uVar0, UNK_0x972A296334C9D57B());
	func_232(&uVar0, UNK_0x118229AD063C3C1D());
	func_231(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_231(bool bParam0, int iParam1)
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

void func_232(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_233(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_228(*bParam0);
	iVar1 = func_226(*bParam0);
	if (iParam1 < 1 || iParam1 > func_221(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_234(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_235(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_236(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_237(bool bParam0)
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
	iVar0 = func_222(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_223(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_224(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_226(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_228(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_225(bParam0);
	if (iVar5 < 1 || iVar5 > func_221(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_238(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_239()
{
	func_182();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_240(bool bParam0)
{
	return func_229(func_230(), bParam0);
}

bool func_241(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_119();
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

int func_242(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_243(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_97())
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

bool func_244()
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

void func_245(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_246(struct<9> Param0, int iParam9, bool bParam10)
{
	int iVar0;

	if (bLocal_313)
	{
		func_259(0);
		if (Global_31009)
		{
			UNK_0xC92DB9682A650680("AC_STOP");
		}
		func_258();
		func_105(0);
		UNK_0xE342F209E49C5314(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), true, 1);
		UNK_0xB547E3FFEB27073E();
		UNK_0x9FE27D475353EFE9(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), 0);
		UNK_0xF5894FEB702E7E76(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), 1);
		UNK_0x9EBC57EECAF8C953(UNK_0xD803B885F5E47A62());
		UNK_0x51B096AAC60548C1(1f);
		if (!UNK_0x437347B10A200C4B(bLocal_308, 0))
		{
			func_80(bLocal_308, 0, 145);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_289))
		{
			if (UNK_0xB4ECF989E2C1DAC8(bLocal_289, "random@getawaydriver", "idle_a", 3) || UNK_0xB4ECF989E2C1DAC8(bLocal_289, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_309);
				UNK_0xC6EB89C59F2AF6B8(false, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, false, 0, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1((*iParam9)[0]))
				{
					UNK_0xF3268524E9BE6D6E(false, (*iParam9)[0], 150f, -1, 0, 0);
				}
				else if (!UNK_0xEB6A8945D1AC98A1((*iParam9)[1]))
				{
					UNK_0xF3268524E9BE6D6E(false, (*iParam9)[1], 150f, -1, 0, 0);
				}
				UNK_0x75ABDC5F81978924(iLocal_309);
				UNK_0x78ADC381772E3D54(bLocal_289, iLocal_309);
				UNK_0xF82EA857DA10E0CD(&iLocal_309);
				UNK_0xFADC0A217229F6B5(bLocal_289, true);
			}
			UNK_0x8FB4E06C94958F84(bLocal_289);
			UNK_0xAFF39FB306F8E232(bLocal_289, 17, true);
			UNK_0x11AD11297DC58CC7(bLocal_289, false);
		}
		if (!UNK_0xEB6A8945D1AC98A1((*iParam9)[0]))
		{
			UNK_0x4E885A246A9D983A((*iParam9)[0], 317, true);
			UNK_0xAFF39FB306F8E232((*iParam9)[0], 17, true);
			UNK_0x0A94A109271BE75A((*iParam9)[0]);
			UNK_0x25C5402CC10F76CD((*iParam9)[0], true);
			UNK_0x11AD11297DC58CC7((*iParam9)[0], false);
		}
		if (!UNK_0xEB6A8945D1AC98A1((*iParam9)[1]))
		{
			UNK_0x4E885A246A9D983A((*iParam9)[1], 317, true);
			UNK_0xAFF39FB306F8E232((*iParam9)[1], 17, true);
			UNK_0x0A94A109271BE75A((*iParam9)[1]);
			UNK_0x25C5402CC10F76CD((*iParam9)[1], true);
			UNK_0x11AD11297DC58CC7((*iParam9)[1], false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_293)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_293[iVar0]))
			{
				UNK_0x11AD11297DC58CC7(iLocal_293[iVar0], false);
			}
			iVar0++;
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_299[0]))
		{
			UNK_0x262EF6C6306BEA6C(iLocal_299[0], joaat("WEAPON_PISTOL"), -1, false, true);
			UNK_0x11AD11297DC58CC7(iLocal_299[0], false);
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_299[1]))
		{
			UNK_0x262EF6C6306BEA6C(iLocal_299[1], joaat("WEAPON_PISTOL"), -1, false, true);
			UNK_0x11AD11297DC58CC7(iLocal_299[1], false);
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_299[2]))
		{
			UNK_0x262EF6C6306BEA6C(iLocal_299[2], joaat("WEAPON_PISTOL"), -1, false, true);
			UNK_0x11AD11297DC58CC7(iLocal_299[2], false);
		}
		if (!bParam10)
		{
			if (!UNK_0xEB6A8945D1AC98A1((*iParam9)[0]))
			{
				UNK_0xEEB67C3D0A71A47B((*iParam9)[0], func_186(UNK_0xD803B885F5E47A62()), 200f, -1, 0, 0);
			}
			if (!UNK_0xEB6A8945D1AC98A1((*iParam9)[1]))
			{
				UNK_0xEEB67C3D0A71A47B((*iParam9)[1], func_186(UNK_0xD803B885F5E47A62()), 200f, -1, 0, 0);
			}
		}
		if (!bLocal_220)
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			bLocal_220 = true;
		}
		func_70(iLocal_53);
		if (UNK_0xE4EDC4B0E92C078B(iLocal_288))
		{
			UNK_0x142CC44DB769B57E(&iLocal_288);
		}
		func_70(iLocal_54);
		func_129(0);
		func_142(0, Param0);
	}
	func_247(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_247(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_207())
	{
		func_251(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_250(30000);
		StringCopy(&cVar0, func_249(Global_111627, 1), 64);
		if (func_196(Global_111627) > 0)
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
	func_248(&Global_30827);
	Global_111628 = 0;
	func_213(-1);
}

void func_248(var uParam0)
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

char* func_249(int iParam0, bool bParam1)
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

void func_250(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_251(int iParam0)
{
	func_252(iParam0, 0, func_257(iParam0));
}

void func_252(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_230();
	func_255(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_254(iParam0, &bVar0);
	Var1 = { func_253(&bVar0) };
}

struct<16> func_253(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_224(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_223(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_222(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_225(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_228(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_226(*bParam0), 64);
	return Var0;
}

void func_254(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_255(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_226(*bParam0);
	bVar1 = func_228(*bParam0);
	iVar2 = func_225(*bParam0);
	iVar3 = func_224(*bParam0);
	iVar4 = func_223(*bParam0);
	iVar5 = func_222(*bParam0);
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
	iVar6 = func_221(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_221(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_256(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_256(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_236(bParam0, iParam1);
	func_235(bParam0, iParam2);
	func_234(bParam0, iParam3);
	func_232(bParam0, bParam5);
	func_233(bParam0, iParam4);
	func_231(bParam0, iParam6);
}

int func_257(int iParam0)
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

void func_258()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_259(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_120(iVar0, bParam0);
		iVar0++;
	}
}

