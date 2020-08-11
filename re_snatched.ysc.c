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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
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
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	bool bLocal_55 = false;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	bool bLocal_73 = false;
	bool bLocal_74 = false;
	bool bLocal_75 = false;
	bool bLocal_76 = false;
	bool bLocal_77 = false;
	bool bLocal_78 = false;
	var uLocal_79 = 0;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	bool bLocal_83 = false;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_90[2] = { 0, 0 };
	int iLocal_93[2] = { 0, 0 };
	int iLocal_96[2] = { 0, 0 };
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	int iLocal_104 = 0;
	bool bLocal_105 = false;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	vector3 vLocal_110 = { 0f, 0f, 0f };
	vector3 vLocal_113 = { 0f, 0f, 0f };
	bool bLocal_116 = false;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125[2] = { 0, 0 };
	int iLocal_128[2] = { 0, 0 };
	int iLocal_131[2] = { 0, 0 };
	int iLocal_134[4] = { 0, 0, 0, 0 };
	int iLocal_139 = 0;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	bool bLocal_142 = false;
	bool bLocal_143 = false;
	int iLocal_144[2] = { 0, 0 };
	int iLocal_147[2] = { 0, 0 };
	int iLocal_150[4] = { 0, 0, 0, 0 };
	bool bLocal_155 = false;
	int iLocal_156[2] = { 0, 0 };
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	vector3 vLocal_165 = { 0f, 0f, 0f };
	vector3 vLocal_168 = { 0f, 0f, 0f };
	vector3 vLocal_171 = { 0f, 0f, 0f };
	char* sLocal_174 = NULL;
	bool bLocal_175 = false;
	var uLocal_176 = 16;
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
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = -1;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 1000;
	var uLocal_351 = 1000;
	var uLocal_352 = 0;
	vector3 vLocal_353 = { 0f, 0f, 0f };
	vector3 vLocal_356 = { 0f, 0f, 0f };
	float fLocal_359 = 0f;
	var uLocal_360 = 0;
	bool bLocal_361 = false;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	bool bLocal_365 = false;
	bool bLocal_366 = false;
	bool bLocal_367 = false;
	var uLocal_368 = 0;
	bool bLocal_369 = false;
	bool bLocal_370 = false;
	bool bLocal_371 = false;
	bool bLocal_372 = false;
	bool bLocal_373 = false;
	bool bLocal_374 = false;
	bool bLocal_375 = false;
	bool bLocal_376 = false;
	bool bLocal_377 = false;
	char cLocal_378[48] = "";
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	bool bLocal_386 = false;
	char[] cLocal_387[8] = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	struct<19> Local_392 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	bool bLocal_415 = false;
	struct<7> Local_416[2];
	int iLocal_431[2] = { 0, 0 };
	int iLocal_434[2] = { 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	iLocal_3 = 3;
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
	sLocal_20 = "NULL";
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
	vLocal_56 = { -1511.194f, 436.5252f, 109.7818f };
	vLocal_59 = { 968.0051f, -127.6078f, 73.3543f };
	vLocal_65 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_70 = { 0.5f, 0.1f, 0.56f };
	bLocal_175 = "chassis";
	vLocal_353 = { 0f, -5f, 0f };
	vLocal_356 = { 1f, -1f, 0f };
	bLocal_369 = joaat("GBURRITO");
	bLocal_370 = joaat("DAEMON");
	bLocal_371 = joaat("G_M_Y_LOST_01");
	bLocal_372 = joaat("G_M_Y_LOST_02");
	bLocal_373 = joaat("U_F_Y_BIKERCHIC");
	StringCopy(&cLocal_378, "", 24);
	iLocal_384 = -1;
	bLocal_386 = "RANDOM@KIDNAP_GIRL";
	cLocal_387 = "RESNAAU";
	iLocal_438 = -1;
	vLocal_52 = { ScriptParam_0.f_1[0 /*3*/] };
	bLocal_55 = ScriptParam_0.f_17[0];
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
		{
			if (UNK_0xBFDE4EE64C4BF2D6(bLocal_140, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
			{
				UNK_0x0A94A109271BE75A(bLocal_140);
				UNK_0x01E4BB5190DF7317(bLocal_140, 1193033728, 0);
				UNK_0xAFF39FB306F8E232(bLocal_140, 17, true);
				UNK_0xBAFED2F6486F771A(bLocal_140, 2, false);
				UNK_0x11AD11297DC58CC7(bLocal_140, false);
				UNK_0xFADC0A217229F6B5(bLocal_140, true);
			}
			else if (!UNK_0xB4ECF989E2C1DAC8(bLocal_140, bLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
			{
				UNK_0x00A6D36F507FD6EA(bLocal_140, 1);
				UNK_0xEEB67C3D0A71A47B(bLocal_140, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 150f, -1, 0, 0);
				UNK_0xFADC0A217229F6B5(bLocal_140, true);
			}
		}
		func_255();
	}
	if (func_214(vLocal_52, -1, 0, 0, 0))
	{
		func_211(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", false);
	func_210();
	bLocal_83 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!bLocal_105)
		{
			func_209(1);
			bLocal_105 = true;
		}
		if (!func_208())
		{
			if (func_207())
			{
				func_255();
			}
		}
		UNK_0x1A6DFFFEEC27BF4F("RE_SN", 0);
		func_206();
		func_205();
		func_203();
		if (!func_208())
		{
			if (UNK_0x338D6FF72D84D90F())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_189())
						{
							UNK_0x34D79252800B23FF(0);
							iLocal_48 = 1;
						}
						else if (func_177())
						{
							func_255();
						}
						break;
					case 1:
						func_176();
						UNK_0xD60411959D5D930B(0.2f);
						if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0xEB6A8945D1AC98A1(bLocal_141)) && !UNK_0xEB6A8945D1AC98A1(bLocal_140))
						{
							if (!UNK_0xE4EDC4B0E92C078B(iLocal_123))
							{
								if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(bLocal_140, false) - Vector(7f, 0f, 0f), 142f, 83.75f, 35.25f, false, true, 0))
								{
									if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
									{
										UNK_0x142CC44DB769B57E(&iLocal_120);
									}
									if (!UNK_0xE4EDC4B0E92C078B(iLocal_123))
									{
										UNK_0x4A51D2E4732BD556();
										iLocal_123 = func_175(bLocal_142, 1, 0);
									}
								}
							}
							if (iLocal_439 == 0)
							{
								if ((!UNK_0x03068588A1FCED1A(bLocal_155) || !UNK_0x03068588A1FCED1A(bLocal_141)) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_140, 40f, 40f, 20f, 0, 1, 0))
								{
									SYSTEM::SETTIMERB(0);
									iLocal_439 = 1;
								}
							}
							if (iLocal_439 == 3)
							{
								UNK_0x51B096AAC60548C1(0f);
								UNK_0xA22F71BBC8173C39(bLocal_155, true);
								func_166(0);
							}
							else if (!bLocal_101)
							{
								if (func_165() == 2)
								{
									if ((SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_52) < 40f && UNK_0xC844350D5D58C99A(bLocal_155)) && !UNK_0x03068588A1FCED1A(bLocal_155))
									{
										if (func_164(&uLocal_176, cLocal_387, "RESNA_LOST", 8, 0, 0, 0))
										{
											bLocal_101 = true;
										}
									}
								}
							}
						}
						else
						{
							func_163();
							func_156();
						}
						break;
				}
			}
			else
			{
				func_255();
			}
		}
		else if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_140, 150f, 150f, 50f, 0, 1, 0) || (UNK_0xDF1306B443CD3D15(bLocal_155, 0) && !UNK_0x03068588A1FCED1A(bLocal_155)))
			{
				switch (iLocal_50)
				{
					case 0:
						UNK_0x9501364A300048C6();
						if (UNK_0xDF1306B443CD3D15(bLocal_155, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_142))
						{
							if (UNK_0xC42A92762C58E1B9(bLocal_142, bLocal_155, 0))
							{
								if (UNK_0xD59B17D2DFF98E26(bLocal_140) && UNK_0xD1960163A3042274(bLocal_142, 242628503) == 7)
								{
									UNK_0x0C8C0C840C2D1AD2(bLocal_140, UNK_0x16F2683693E537C9(), -1, 0, 2);
									UNK_0xDD353D0E9C789D0E(&iLocal_159);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, vLocal_62, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, -859.6284f, 382.7891f, 86.4466f, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, -703.2946f, 287.229f, 82.6848f, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, -496.6651f, 246.5268f, 82.0747f, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, -166.6776f, 250.8786f, 92.4768f, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, 74.5106f, 236.4861f, 108.1344f, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, 278.7988f, 161.9029f, 103.446f, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, 425.6758f, 108.9366f, 99.4329f, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, 729.2792f, -19.616f, 81.9823f, 50f, 0, false, 786469, 7f, 15f);
									UNK_0xE9362E4D600DD12A(false, bLocal_155, vLocal_59, 50f, 0, false, 786469, 7f, 15f);
									UNK_0x75ABDC5F81978924(iLocal_159);
									UNK_0x78ADC381772E3D54(bLocal_142, iLocal_159);
									UNK_0xF82EA857DA10E0CD(&iLocal_159);
									iLocal_50 = 1;
								}
							}
						}
						else
						{
							func_154();
							iLocal_50 = 1;
						}
						break;
					case 1:
						UNK_0x9501364A300048C6();
						func_153();
						func_124();
						func_123(iLocal_123, bLocal_141, 150f, 1061158912 /* Float: 0.75f */, 0);
						if (((((func_122() || func_121()) || func_119()) || func_118()) || func_117()) || UNK_0xB87D13D0C064E9D1(bLocal_140, UNK_0x16F2683693E537C9(), 1))
						{
							UNK_0xE910A68AA670B4AA(bLocal_140);
							if (UNK_0xE4EDC4B0E92C078B(iLocal_123))
							{
								if (UNK_0x8FBD6436A27198B4(iLocal_123) != 1)
								{
									UNK_0x321E019A46034F39(iLocal_123, false);
									UNK_0x61755AC17D8F538E(iLocal_123, true);
								}
							}
							func_154();
							func_115(&uLocal_341, 0, 0);
							iLocal_50 = 2;
						}
						else if (bLocal_366 || bLocal_81)
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_123))
							{
								if (UNK_0x8FBD6436A27198B4(iLocal_123) != 1)
								{
									UNK_0x321E019A46034F39(iLocal_123, false);
									UNK_0x61755AC17D8F538E(iLocal_123, true);
								}
							}
						}
						else if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
						{
							if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_155, 25f, 25f, 5f, 0, 1, 0) && UNK_0x9C66D99E63E8E24C(bLocal_155) > 10f)
							{
								if (UNK_0x1C0640BA9A7327B3() > iLocal_109 + 5000)
								{
									bLocal_81 = true;
								}
							}
							else
							{
								iLocal_109 = UNK_0x1C0640BA9A7327B3();
							}
						}
						break;
					case 2:
						UNK_0x9501364A300048C6();
						if (!bLocal_83)
						{
							bLocal_83 = true;
						}
						if (UNK_0xC844350D5D58C99A(bLocal_155) && UNK_0xC844350D5D58C99A(bLocal_140))
						{
							if (UNK_0x50B5F6F3C29E9380(bLocal_140, bLocal_155))
							{
								if (UNK_0x437347B10A200C4B(bLocal_155, 0))
								{
									UNK_0xE121AE1BBF90E186(bLocal_140, false);
									UNK_0x15AFB6CBDE990FB6(bLocal_140, 1, false);
								}
							}
						}
						if (bLocal_74)
						{
							if (bLocal_76)
							{
								func_114();
							}
							else
							{
								func_113();
							}
						}
						else
						{
							bLocal_77 = true;
						}
						func_163();
						func_110();
						if (bLocal_77)
						{
							if (bLocal_78)
							{
								func_110();
								iLocal_50 = 3;
								UNK_0xE121AE1BBF90E186(bLocal_140, false);
							}
						}
						break;
					case 3:
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_122))
						{
							iLocal_122 = func_175(bLocal_140, 0, 0);
						}
						switch (iLocal_385)
						{
							case 0:
								if (UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1()))
								{
									if (!UNK_0xC844350D5D58C99A(bLocal_163))
									{
										bLocal_163 = UNK_0x728870EB733D12A1();
										UNK_0x73270B3C9CC833FD(bLocal_163, true, 1);
									}
								}
								if (func_109(1, 0, 1) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_140, 2.5f, 2.5f, 2.5f, 0, 1, 1))
								{
									UNK_0x679C321F8CAA2CFA(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, 0);
									UNK_0x4E885A246A9D983A(bLocal_140, 118, false);
									func_108();
									func_100(1, 1, 1, 0, 0, 0);
									UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
									UNK_0x3FC8DBCC154CA56B();
									Local_392 = { -1.2232f, -4.3354f, 1.3385f };
									if (!UNK_0x437347B10A200C4B(bLocal_155, 0))
									{
										UNK_0x1BF8B16C32704027(bLocal_155, -8f, 1);
										UNK_0x1E9649458B15960F(bLocal_155, false);
										UNK_0x71EDC33E5A423750(bLocal_155, 1);
										Local_392.f_3 = { -22.8598f, 0f, (UNK_0xD9522BA9E27E1349(bLocal_155) - 60f) };
									}
									Local_392.f_6 = { -1.4334f, -4.6656f, 1.3733f };
									Local_392.f_9 = { -22.8598f, 0f, -106.3162f };
									Local_392.f_12 = 55f;
									Local_392.f_13 = 3000;
									Local_392.f_18 = 0;
									func_96(&Local_392, bLocal_155, 1);
									UNK_0xA47B46945FF6DE74(bLocal_140, UNK_0x68F4C0EC296D3901(bLocal_155, false), 1, 0, 0, 1);
									vLocal_110 = { 0f, 0f, 0f };
									vLocal_113 = { 0f, 0f, 0f };
									iLocal_108 = UNK_0xE9744DB7B8CA6965(vLocal_110, vLocal_113, 2);
									if (UNK_0xD59B17D2DFF98E26(bLocal_140))
									{
										UNK_0x15AFB6CBDE990FB6(bLocal_140, 1, false);
									}
									UNK_0x6BE2EAE992FD7C26(iLocal_108, bLocal_155, UNK_0xF653B9B22DA806A9(bLocal_155, bLocal_175));
									UNK_0x83CBE93AD851E045(iLocal_108, vLocal_110, vLocal_113, 2);
									UNK_0x0C8C0C840C2D1AD2(bLocal_140, UNK_0x16F2683693E537C9(), -1, 0, 2);
									UNK_0x915804B434753CBD(bLocal_140, iLocal_108, bLocal_386, "IG_1_ALT1_EXIT_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
									UNK_0xEFC3DF9D33E248D8(iLocal_108, false);
									UNK_0xFADC0A217229F6B5(bLocal_140, true);
									iLocal_412 = UNK_0x92B061D59B9B540A(964613260, 1);
									UNK_0x93E9ED66DAB9FBE3(iLocal_412, iLocal_108, "IG_1_ALT1_EXIT_VAN_CAM", bLocal_386);
									UNK_0x1E9649458B15960F(bLocal_155, true);
									UNK_0x611DFA9294B339CA(bLocal_155, 2, 0, false);
									UNK_0x611DFA9294B339CA(bLocal_155, 3, 0, false);
									vLocal_110 = { UNK_0x68F4C0EC296D3901(bLocal_155, false) };
									vLocal_113.f_2 = UNK_0xD9522BA9E27E1349(bLocal_155);
									vVar0 = { UNK_0x68E4ADDDDCD7BDDE(bLocal_155, 0f, -4.7f, 0f) };
									UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
									UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), UNK_0xD9522BA9E27E1349(bLocal_155));
									UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
									if (func_92(bLocal_163))
									{
										func_91();
									}
									if (UNK_0xC844350D5D58C99A(bLocal_141))
									{
										if (UNK_0x437347B10A200C4B(bLocal_141, 0) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_141, false), UNK_0x68F4C0EC296D3901(bLocal_140, false)) < 3f)
										{
											UNK_0xEBA53F35D0085654(&bLocal_141);
										}
										if (UNK_0x437347B10A200C4B(bLocal_143, 0) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_143, false), UNK_0x68F4C0EC296D3901(bLocal_143, false)) < 3f)
										{
											UNK_0xEBA53F35D0085654(&bLocal_143);
										}
									}
									UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), true);
									UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
									UNK_0x71199B01895C6202(bLocal_369);
									UNK_0x3FC8DBCC154CA56B();
									iLocal_385++;
								}
								break;
							case 1:
								if (UNK_0xC844350D5D58C99A(bLocal_155))
								{
									iLocal_385++;
								}
								break;
							case 2:
								if (func_165() == 0)
								{
									sVar3 = "RESNA_THX";
								}
								else if (func_165() == 1)
								{
									sVar3 = "RESNA_THX1";
								}
								else
								{
									sVar3 = "RESNA_THX2";
								}
								if (!func_90())
								{
									if (func_164(&uLocal_176, cLocal_387, sVar3, 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							case 3:
								if (!func_90())
								{
									if (func_164(&uLocal_176, cLocal_387, "RESNA_THX3", 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							case 4:
								if (UNK_0x69DF961355195C3C(iLocal_108))
								{
									if (UNK_0xA45992A6CE82FB43(iLocal_108) > 0.3746479f && !bLocal_116)
									{
										if (UNK_0x6C3F127AAF415E69() == 4)
										{
											UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
											UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
											bLocal_116 = true;
										}
									}
									if (UNK_0xA45992A6CE82FB43(iLocal_108) > 0.4f)
									{
										iLocal_385++;
									}
								}
								break;
							case 5:
								UNK_0xA3BF0AA5A2608191(bLocal_140);
								UNK_0xE121AE1BBF90E186(bLocal_140, false);
								UNK_0x4E885A246A9D983A(bLocal_140, 118, true);
								vLocal_171 = { UNK_0x1BB04F10296A1C5E(bLocal_386, "IG_1_ALT1_EXIT_VAN", vLocal_110, vLocal_113, 1f, 2) };
								UNK_0xE82754C349C7B581(vLocal_171, &(vLocal_171.f_2), 0, 0);
								UNK_0xA47B46945FF6DE74(bLocal_140, vLocal_171, 1, 0, 0, 1);
								vLocal_171 = { UNK_0xEEB20D14BD38615E(bLocal_386, "IG_1_ALT1_EXIT_VAN", vLocal_110, vLocal_113, 1f, 2) };
								UNK_0xD8F6A53F4799FAFE(bLocal_140, vLocal_171.z);
								if (UNK_0x69DF961355195C3C(iLocal_108))
								{
									UNK_0x57E0CF9BF653D99A(iLocal_108, 1f);
								}
								UNK_0xF895E10BF4C72645(bLocal_140, 0, 0);
								UNK_0x6C5B8C4234CEA349(UNK_0x16F2683693E537C9(), false);
								if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
								{
									UNK_0x1E9649458B15960F(bLocal_155, false);
									if (UNK_0xB4ECF989E2C1DAC8(bLocal_155, bLocal_386, "IG_1_ALT1_EXIT_VAN", 3))
									{
										UNK_0x7720CBBC7DD82563(bLocal_155, "IG_1_ALT1_EXIT_VAN", bLocal_386, -8f);
									}
								}
								UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
								if (UNK_0x9F4FE516EAACCFC5(iLocal_412))
								{
									UNK_0x9A8DDC7C522F5BF5(iLocal_412, 0);
								}
								UNK_0x2FB9A57162E54BAB(0f);
								UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
								func_100(0, 1, 1, 0, 0, 0);
								UNK_0x46CB381A452EF99D(bLocal_140, 1);
								func_88(vLocal_56);
								if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
								{
									UNK_0x71EDC33E5A423750(bLocal_155, 1);
								}
								iLocal_50 = 4;
								break;
						}
						if (iLocal_385 > 0 && iLocal_385 < 5)
						{
							UNK_0x3FC8DBCC154CA56B();
							if ((func_86(1000) || !UNK_0x69DF961355195C3C(iLocal_108)) || (UNK_0x69DF961355195C3C(iLocal_108) && UNK_0xA45992A6CE82FB43(iLocal_108) > 0.4f))
							{
								iLocal_385 = 5;
							}
						}
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_122))
						{
							iLocal_122 = func_175(bLocal_140, 0, 0);
						}
						break;
					case 4:
						if (UNK_0x02A813E6E0380440() == 0)
						{
							UNK_0x34D79252800B23FF(5);
							UNK_0x51B096AAC60548C1(0f);
						}
						if (UNK_0xC844350D5D58C99A(bLocal_142))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_142, false)) > 10000f && UNK_0x03068588A1FCED1A(bLocal_142))
							{
								UNK_0x6DAD7906B73F064D(&bLocal_142);
							}
						}
						if (UNK_0xC844350D5D58C99A(bLocal_143))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_143, false)) > 10000f && UNK_0x03068588A1FCED1A(bLocal_143))
							{
								UNK_0x6DAD7906B73F064D(&bLocal_143);
							}
						}
						if (UNK_0xC844350D5D58C99A(bLocal_141))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_141, false)) > 10000f && UNK_0x03068588A1FCED1A(bLocal_141))
							{
								UNK_0x6DAD7906B73F064D(&bLocal_141);
							}
						}
						if (UNK_0xC844350D5D58C99A(bLocal_155))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_155, false)) > 10000f && UNK_0x03068588A1FCED1A(bLocal_155))
							{
								UNK_0x046C362CF15F1935(&bLocal_155);
							}
						}
						func_63();
						if (UNK_0xE4EDC4B0E92C078B(iLocal_122))
						{
							if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_140, 10f, 10f, 10f, 0, 1, 0))
							{
								if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
								{
									if (UNK_0xD1960163A3042274(bLocal_140, 474215631) != 7)
									{
										UNK_0xA3BF0AA5A2608191(bLocal_140);
									}
									UNK_0xBC43ED9FE28DB191(bLocal_140);
									UNK_0xE25C96A9C36BE5D2(bLocal_140, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62()));
									UNK_0xBF541ED34EA81209(bLocal_140, false);
									UNK_0x142CC44DB769B57E(&iLocal_122);
									if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
									{
										UNK_0x142CC44DB769B57E(&iLocal_120);
									}
									func_58();
									iLocal_120 = func_57(vLocal_56, 1);
								}
							}
						}
						else if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
						{
							if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_56, Global_19, true, true, 0))
							{
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x405E212DDE472467(bLocal_140, 0))
								{
									if ((UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0) && UNK_0xF79A7BCA9E38BBBC(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))) && UNK_0x10BA239D3B8FDC7F(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 90f))
									{
										iLocal_50 = 6;
										func_56();
										UNK_0x142CC44DB769B57E(&iLocal_120);
									}
								}
								else
								{
									iLocal_50 = 6;
									func_56();
									UNK_0x142CC44DB769B57E(&iLocal_120);
								}
							}
							else
							{
								if (!UNK_0xBFDE4EE64C4BF2D6(bLocal_140, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
								{
									func_56();
									UNK_0x142CC44DB769B57E(&iLocal_120);
									if (!UNK_0xE4EDC4B0E92C078B(iLocal_122))
									{
										iLocal_122 = func_54(bLocal_140, 0, 145);
									}
								}
								if (!bLocal_73 && !bLocal_75)
								{
									func_51();
									iLocal_69 = UNK_0x1C0640BA9A7327B3();
								}
								else if (!bLocal_75)
								{
									if ((UNK_0x1C0640BA9A7327B3() - iLocal_69) > 5000)
									{
										iLocal_69 = (UNK_0x1C0640BA9A7327B3() - 5000);
									}
									func_48();
									iVar4 = 0;
									while (iVar4 < iLocal_156)
									{
										if (((func_47(iLocal_144[iVar4]) || func_47(iLocal_147[iVar4])) || SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_56) < 400f) || SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_65) < 400f)
										{
											if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
											{
												UNK_0x142CC44DB769B57E(&iLocal_120);
											}
											func_56();
											iLocal_391 = iLocal_390;
											if (iLocal_391 < 6)
											{
												if (iLocal_388 > 0)
												{
													iLocal_391++;
												}
											}
											func_45();
											bLocal_75 = false;
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_144[iVar4]))
											{
												UNK_0x545E1397F38D9D5A(iLocal_144[iVar4], 3);
											}
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_147[iVar4]))
											{
												UNK_0x545E1397F38D9D5A(iLocal_147[iVar4], 3);
											}
											iLocal_50 = 5;
										}
										iVar4++;
									}
								}
							}
						}
						func_163();
						if (func_44())
						{
							UNK_0xEBA53F35D0085654(&bLocal_140);
							func_13();
						}
						break;
					case 5:
						if (UNK_0x02A813E6E0380440() != 0)
						{
							UNK_0x34D79252800B23FF(0);
							UNK_0x51B096AAC60548C1(0f);
						}
						func_163();
						func_12();
						func_48();
						if (!bLocal_367)
						{
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_205(), 0, 0))
								{
									bLocal_367 = true;
									iLocal_119 = UNK_0x1C0640BA9A7327B3();
								}
							}
							else
							{
								bLocal_367 = true;
							}
						}
						else if ((UNK_0x1C0640BA9A7327B3() - iLocal_119) > 2000 && !func_90())
						{
							if (!bLocal_99)
							{
								if (func_11() && func_10() < 30f)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_140) && !UNK_0xEB6A8945D1AC98A1(iLocal_144[0]))
									{
										if (UNK_0x405E212DDE472467(bLocal_140, 0))
										{
											UNK_0xFFDDE8CC59EB6D40(bLocal_140, iLocal_144[0], false, 0f, 0f, 0f, 50f, 90, 0, joaat("FIRING_PATTERN_SINGLE_SHOT"));
										}
										bLocal_99 = true;
									}
								}
							}
							else if (!bLocal_100)
							{
								if (UNK_0x405E212DDE472467(bLocal_140, 0))
								{
									if (UNK_0xAF13E0A7B3EB8858(bLocal_140))
									{
										if (func_164(&uLocal_176, cLocal_387, "RESNA_FINGER", 8, 0, 0, 0))
										{
											bLocal_100 = true;
										}
									}
								}
							}
						}
						iVar5 = 0;
						while (iVar5 < iLocal_156)
						{
							bVar6 = false;
							if ((UNK_0xC844350D5D58C99A(iLocal_144[iVar5]) && !UNK_0xEB6A8945D1AC98A1(iLocal_144[iVar5])) && !UNK_0x437347B10A200C4B(iLocal_144[iVar5], 0))
							{
								if (UNK_0xDF1306B443CD3D15(iLocal_156[iVar5], 0) && UNK_0xC42A92762C58E1B9(iLocal_144[iVar5], iLocal_156[iVar5], 0))
								{
									if (UNK_0xE4EDC4B0E92C078B(iLocal_125[iVar5]))
									{
										UNK_0x142CC44DB769B57E(&(iLocal_125[iVar5]));
									}
									bVar6 = true;
								}
								if (!UNK_0xE4EDC4B0E92C078B(iLocal_125[iVar5]) && !UNK_0x405E212DDE472467(iLocal_144[iVar5], 0))
								{
									iLocal_125[iVar5] = func_54(iLocal_144[iVar5], 1, 145);
								}
							}
							else if (UNK_0xE4EDC4B0E92C078B(iLocal_125[iVar5]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_125[iVar5]));
							}
							if ((UNK_0xC844350D5D58C99A(iLocal_147[iVar5]) && !UNK_0xEB6A8945D1AC98A1(iLocal_147[iVar5])) && !UNK_0x437347B10A200C4B(iLocal_147[iVar5], 0))
							{
								if (UNK_0xDF1306B443CD3D15(iLocal_156[iVar5], 0) && UNK_0xC42A92762C58E1B9(iLocal_147[iVar5], iLocal_156[iVar5], 0))
								{
									if (UNK_0xE4EDC4B0E92C078B(iLocal_128[iVar5]))
									{
										UNK_0x142CC44DB769B57E(&(iLocal_128[iVar5]));
									}
									bVar6 = true;
								}
								if (!UNK_0xE4EDC4B0E92C078B(iLocal_128[iVar5]) && !UNK_0x405E212DDE472467(iLocal_147[iVar5], 0))
								{
									iLocal_128[iVar5] = func_54(iLocal_147[iVar5], 1, 145);
								}
							}
							else if (UNK_0xE4EDC4B0E92C078B(iLocal_128[iVar5]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_128[iVar5]));
							}
							func_7(iVar5, (bVar6 && UNK_0xDF1306B443CD3D15(iLocal_156[iVar5], 0)));
							iVar5++;
						}
						if (func_6())
						{
							iLocal_85 = 0;
							while (iLocal_85 < 2)
							{
								if (UNK_0xDF1306B443CD3D15(iLocal_156[iLocal_85], 0))
								{
									UNK_0x046C362CF15F1935(&(iLocal_156[iLocal_85]));
								}
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_144[iLocal_85]))
								{
									UNK_0x6DAD7906B73F064D(&(iLocal_144[iLocal_85]));
								}
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_147[iLocal_85]))
								{
									UNK_0x6DAD7906B73F064D(&(iLocal_147[iLocal_85]));
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_125[iLocal_85]))
								{
									UNK_0x142CC44DB769B57E(&(iLocal_125[iLocal_85]));
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_128[iLocal_85]))
								{
									UNK_0x142CC44DB769B57E(&(iLocal_128[iLocal_85]));
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_131[iLocal_85]))
								{
									UNK_0x142CC44DB769B57E(&(iLocal_131[iLocal_85]));
								}
								UNK_0x71199B01895C6202(bLocal_370);
								UNK_0x71199B01895C6202(bLocal_371);
								UNK_0x71199B01895C6202(bLocal_372);
								iLocal_85++;
							}
							func_58();
							iLocal_120 = func_57(vLocal_56, 1);
							func_5(-1);
							bLocal_75 = true;
							UNK_0xA3BF0AA5A2608191(bLocal_140);
							if (!UNK_0xBFDE4EE64C4BF2D6(bLocal_140, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
							{
								UNK_0xE25C96A9C36BE5D2(bLocal_140, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62()));
							}
							iLocal_50 = 4;
						}
						break;
					case 6:
						if (func_2())
						{
							func_13();
						}
						break;
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
				{
					UNK_0xF2D30B8ACAF12A39(iLocal_120, bLocal_83);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_121))
				{
					UNK_0xF2D30B8ACAF12A39(iLocal_121, bLocal_83);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_122))
				{
					UNK_0xF2D30B8ACAF12A39(iLocal_122, bLocal_83);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_123))
				{
					UNK_0xF2D30B8ACAF12A39(iLocal_123, bLocal_83);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_124))
				{
					UNK_0xF2D30B8ACAF12A39(iLocal_124, bLocal_83);
				}
			}
			else
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
				{
					UNK_0xA954465BA6FDEFE2(&bLocal_155);
				}
				func_255();
			}
		}
		else
		{
			func_1();
			func_255();
		}
	}
}

void func_1()
{
	func_154();
	SYSTEM::WAIT(0);
}

bool func_2()
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		switch (iLocal_437)
		{
			case 0:
				func_100(1, 1, 0, 0, 0, 0);
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					while (!func_3(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1093140480 /* Float: 10.5f */, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
				{
					if (UNK_0x16102BEDC7435774(bLocal_140))
					{
						UNK_0x0A94A109271BE75A(bLocal_140);
					}
				}
				func_45();
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 1280);
				while (!func_164(&uLocal_176, cLocal_387, "RESNA_ARRV", 4, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!UNK_0x405E212DDE472467(bLocal_140, 0))
				{
					UNK_0xF96A174EE26D7588(bLocal_140, UNK_0x16F2683693E537C9(), 0);
				}
				UNK_0x0C8C0C840C2D1AD2(bLocal_140, UNK_0x16F2683693E537C9(), 30000, 2052, 2);
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_140, 30000, 2052, 2);
				iLocal_437++;
				break;
			case 1:
				if (!func_90())
				{
					UNK_0xDD353D0E9C789D0E(&iVar0);
					if (UNK_0x405E212DDE472467(bLocal_140, 0))
					{
						UNK_0x75CDA8644CD3B5F5(false, 0, 0);
					}
					UNK_0x96167B03C5A77156(false, -3069.737f, 455.0024f, 8.6478f, 1f, 30000, 0.25f, 0, 1193033728);
					UNK_0xE655C47E46F9A7E4(false, 73.0132f, 0);
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(bLocal_140, iVar0);
					UNK_0xF82EA857DA10E0CD(&iVar0);
					iLocal_437++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			case 2:
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
				{
					if (!UNK_0x405E212DDE472467(bLocal_140, 0))
					{
						SYSTEM::SETTIMERA(0);
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						func_100(0, 1, 0, 0, 0, 0);
						iLocal_437++;
					}
				}
				break;
			case 3:
				if (SYSTEM::TIMERA() > 1000)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_3(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_4(bParam0);
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

void func_4(bool bParam0)
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

void func_5(int iParam0)
{
	iLocal_389 = UNK_0x1C0640BA9A7327B3();
	iLocal_390 = iParam0;
	iLocal_388 = 0;
}

bool func_6()
{
	float fVar0;

	fVar0 = func_10();
	if (fVar0 == -1f || fVar0 > 300f)
	{
		return true;
	}
	return false;
}

void func_7(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (bParam1)
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_131[iParam0]))
		{
			iLocal_131[iParam0] = func_8(UNK_0x68F4C0EC296D3901(iLocal_156[iParam0], false), 0);
			UNK_0x61755AC17D8F538E(iLocal_131[iParam0], true);
			UNK_0x2A065371C9D96655(iLocal_131[iParam0], 9);
		}
		else
		{
			vVar0 = { UNK_0xAC14F6E4B17D7835(iLocal_131[iParam0]) };
			vVar3 = { UNK_0x68F4C0EC296D3901(iLocal_156[iParam0], false) };
			vVar0.x = (vVar0.x + ((vVar3.x - vVar0.x) / 25f));
			vVar0.f_1 = (vVar0.y + ((vVar3.y - vVar0.y) / 25f));
			vVar0.f_2 = (vVar0.z + ((vVar3.z - vVar0.z) / 25f));
			UNK_0x2F9282246F89FFD1(iLocal_131[iParam0], vVar0);
		}
	}
	else if (UNK_0xE4EDC4B0E92C078B(iLocal_131[iParam0]))
	{
		UNK_0x142CC44DB769B57E(&(iLocal_131[iParam0]));
	}
}

int func_8(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_9(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_9(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_10()
{
	int iVar0;
	float fVar1;

	fVar1 = -1f;
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if ((UNK_0xC844350D5D58C99A(iLocal_144[iVar0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_144[iVar0])) && !UNK_0x437347B10A200C4B(iLocal_144[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(iLocal_144[iVar0], false));
			}
			else if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(iLocal_144[iVar0], false)) < fVar1)
			{
				fVar1 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(iLocal_144[iVar0], false));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_147)
	{
		if ((UNK_0xC844350D5D58C99A(iLocal_147[iVar0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_147[iVar0])) && !UNK_0x437347B10A200C4B(iLocal_147[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(iLocal_147[iVar0], false));
			}
			else if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(iLocal_147[iVar0], false)) < fVar1)
			{
				fVar1 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(iLocal_147[iVar0], false));
			}
		}
		iVar0++;
	}
	return fVar1;
}

bool func_11()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && UNK_0xC42A92762C58E1B9(bLocal_140, UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
		{
			return true;
		}
		if ((!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x405E212DDE472467(bLocal_140, 0)) && !UNK_0x869EFD0BC0868856(bLocal_140))
		{
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bLocal_140, false), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false)) < 400f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_12()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { -20f, -20f, -20f };
	vVar3 = { 20f, 20f, 20f };
	if (!bLocal_367)
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_140, false) + vVar0 };
		vVar3 = { UNK_0x68F4C0EC296D3901(bLocal_140, false) + vVar3 };
		if (func_164(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_205(), 0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_140) && !UNK_0xEB6A8945D1AC98A1(iLocal_147[0]))
			{
				UNK_0x0C8C0C840C2D1AD2(bLocal_140, iLocal_144[0], 20000, 16, 3);
			}
			bLocal_367 = true;
		}
	}
}

void func_13()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		UNK_0x4E885A246A9D983A(bLocal_140, 317, true);
	}
	func_18(-1, 0);
	func_17();
	func_14();
	func_255();
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

int func_17()
{
	return 1;
}

void func_18(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_41(iParam0))
	{
		func_40(iParam0, bParam1);
		if (!func_39(51))
		{
			func_29("RE_REWARD", 1, 0, 4000, 10000, func_32(), 0, 138, 0);
			func_28(51);
		}
		if (func_27(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_26(iParam0, bParam1) != 322)
		{
			func_20(func_26(iParam0, bParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_19(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_111624 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
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
		func_24((891 + iParam0), 1, -1, 1);
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
		func_21();
	}
}

void func_21()
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
		func_23(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_22() == 2 == 0 && !UNK_0x8CD06866876216F2())
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

int func_22()
{
	return Global_30768;
}

int func_23(int iParam0, bool bParam1)
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

int func_24(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0, bool bParam1)
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

bool func_27(int iParam0)
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

void func_28(int iParam0)
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

void func_29(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_30(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_30(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_31();
	}
}

void func_31()
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

int func_32()
{
	func_33();
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

void func_33()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_37(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_36(UNK_0x16F2683693E537C9());
			if (func_35(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_35(Global_111638.f_2358.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_35(int iParam0)
{
	return iParam0 < 3;
}

int func_36(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_35(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_39(int iParam0)
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

void func_40(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_41(int iParam0)
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

int func_42()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_43(Var0);
	return iVar16;
}

int func_43(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_44()
{
	if (Global_31006)
	{
		func_19(4);
		return true;
	}
	return false;
}

void func_45()
{
	Global_19671 = 0;
	func_46();
}

void func_46()
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

int func_47(bool bParam0)
{
	int iVar0;

	if ((UNK_0xC844350D5D58C99A(bParam0) && !UNK_0xEB6A8945D1AC98A1(bParam0)) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (!UNK_0x03068588A1FCED1A(bParam0) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bParam0, false)) < 10000f)
		{
			iVar0 = 1;
		}
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bParam0, false)) < 2500f)
		{
			iVar0 = 1;
		}
		if (UNK_0xB87D13D0C064E9D1(UNK_0x16F2683693E537C9(), bParam0, 1))
		{
			iVar0 = 1;
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_140) && UNK_0x405E212DDE472467(bLocal_140, 0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(bLocal_140, 0), 0))
			{
				if (UNK_0xB87D13D0C064E9D1(UNK_0x6937EA2286828455(bLocal_140, 0), bParam0, 1))
				{
					iVar0 = 1;
				}
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0) != UNK_0x6937EA2286828455(bLocal_140, 0))
			{
				if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
				{
					if (UNK_0xB87D13D0C064E9D1(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), bParam0, 1))
					{
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

void func_48()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bLocal_415))
	{
		UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_TEST_01"));
		if (UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_TEST_01")))
		{
			bLocal_415 = UNK_0x7707E48765093646(joaat("PROP_LD_TEST_01"), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) + Vector(2f, 0f, 0f), true, true, false);
			UNK_0x20641932E5104B25(bLocal_415, false, 0);
			UNK_0x4A4806F9D471E491(bLocal_415, false, 0);
			UNK_0x1E9649458B15960F(bLocal_415, true);
		}
	}
	UNK_0x26F63FD28070F2CE("Checking for warp", 0.89f, 0.02f, 0f, 0, 0, 255, 255);
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if ((UNK_0xDF1306B443CD3D15(iLocal_156[iVar1], 0) && !UNK_0xEB6A8945D1AC98A1(iLocal_144[iVar1])) && UNK_0x82CCEAB29E9451DD(iLocal_144[iVar1], iLocal_156[iVar1]))
			{
				vVar2 = { UNK_0x68F4C0EC296D3901(iLocal_156[iVar1], false) };
				vVar5 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
				if (SYSTEM::VDIST2(vVar5, Local_416[0 /*7*/]) > 400f && SYSTEM::VDIST2(vVar5, Local_416[1 /*7*/]) > 400f)
				{
					if (SYSTEM::VDIST2(vVar5, Local_416[iVar1 /*7*/]) > 900f)
					{
						if (func_50(iLocal_156[iVar1], bVar0, bLocal_415, vVar5, UNK_0x835730A2D89F6093(bVar0, 2)))
						{
							Local_416[iVar1 /*7*/] = { vVar5 };
							Local_416[iVar1 /*7*/].f_3 = { UNK_0x835730A2D89F6093(bVar0, 2) };
							Local_416[iVar1 /*7*/].f_6 = SYSTEM::VMAG(UNK_0x56E9E0FD5ACCD35D(iLocal_156[iVar1]));
						}
					}
				}
				if (!func_49(Local_416[iVar1 /*7*/]))
				{
					if (!UNK_0x03068588A1FCED1A(iLocal_156[iVar1]))
					{
						iLocal_434[iVar1] = UNK_0x1C0640BA9A7327B3();
					}
					else if (((UNK_0x1C0640BA9A7327B3() - iLocal_434[iVar1]) > 1000 && (UNK_0x1C0640BA9A7327B3() - iLocal_431[0]) > 2000) && (UNK_0x1C0640BA9A7327B3() - iLocal_431[1]) > 2000)
					{
						if (!UNK_0x8E28E832BEAC3DCE(Local_416[iVar1 /*7*/], 3f) && !UNK_0x8E28E832BEAC3DCE(vVar2, 3f))
						{
							fVar8 = 99f;
							iVar9 = 0;
							if (iVar1 == 0)
							{
								iVar9 = 1;
							}
							if (UNK_0xDF1306B443CD3D15(iLocal_156[iVar9], 0))
							{
								fVar8 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(iLocal_156[iVar9], false), Local_416[iVar1 /*7*/]);
							}
							if ((((SYSTEM::VDIST2(vVar2, vVar5) > 625f && SYSTEM::VDIST2(vVar2, Local_416[iVar1 /*7*/]) < SYSTEM::VDIST2(vVar2, vVar5)) && SYSTEM::VDIST2(vVar5, Local_416[iVar1 /*7*/]) > 400f) && fVar8 > 5f) && func_50(iLocal_156[iVar1], bVar0, bLocal_415, Local_416[iVar1 /*7*/], Local_416[iVar1 /*7*/].f_3))
							{
								UNK_0x745CE398A4B0A3C6(Local_416[iVar1 /*7*/], 3f, 0);
								UNK_0x28F5E4DA506AC0CA(Local_416[iVar1 /*7*/], 3f, 0, 0, 0, 0, false, 0);
								UNK_0xA47B46945FF6DE74(iLocal_156[iVar1], Local_416[iVar1 /*7*/], 1, 0, 0, 1);
								UNK_0xC023D1C4BF532815(iLocal_156[iVar1], Local_416[iVar1 /*7*/].f_3, 2, 1);
								UNK_0xB9FD7450C0DAB575(iLocal_156[iVar1], 1084227584 /* Float: 5f */);
								UNK_0x1AEF7184B203A58D(iLocal_156[iVar1], (Local_416[iVar1 /*7*/].f_6 + 5f));
								UNK_0x0D88E2F7C05BF3A2(iLocal_144[iVar1], UNK_0x16F2683693E537C9());
								UNK_0x56FDC9ADE35F7DB0(iLocal_156[iVar1], true, true, 0);
								iLocal_431[iVar1] = UNK_0x1C0640BA9A7327B3();
								iLocal_68 = UNK_0x1C0640BA9A7327B3() + 1000;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	if (iLocal_68 > UNK_0x1C0640BA9A7327B3())
	{
		UNK_0x9501364A300048C6();
	}
}

bool func_49(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_50(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	int iVar35;

	if (UNK_0xC844350D5D58C99A(bParam2))
	{
		UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &vVar7, &vVar10);
		UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam1), &vVar13, &uVar16);
		fVar19 = UNK_0x755FF954DAE327E1((vVar10.z - vVar7.z));
		fVar20 = UNK_0x755FF954DAE327E1((vVar10.x - vVar7.x));
		fVar21 = UNK_0x755FF954DAE327E1((vVar10.y - vVar7.y));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - UNK_0x755FF954DAE327E1(vVar7.z));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - UNK_0x755FF954DAE327E1(vVar7.x));
		}
		vVar24.f_2 = (vVar24.z + (vVar13.z - vVar7.z));
		UNK_0xA47B46945FF6DE74(bParam2, vParam3, 1, 0, 0, 1);
		UNK_0xC023D1C4BF532815(bParam2, vParam6, 2, 1);
		vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + vVar24) };
		vVar4 = { UNK_0x68E4ADDDDCD7BDDE(bParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + vVar24) };
		iVar35 = UNK_0x6D4C9F7CF124AE37(vVar4, vVar1, fVar22, 19, UNK_0x16F2683693E537C9(), 4);
		if (UNK_0x1EC301670B54C6DE(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_51()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_56) < 1500f || SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_65) < 1500f)
			{
				if (func_52())
				{
					bLocal_73 = true;
				}
			}
		}
	}
}

bool func_52()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	iVar0 = 524852;
	iVar1 = 6;
	if (UNK_0xDF1306B443CD3D15(iLocal_156[0], 0) && UNK_0xDF1306B443CD3D15(iLocal_156[1], 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_144[0]))
		{
			if (UNK_0xD1960163A3042274(iLocal_144[0], -1273030092) == 1)
			{
				if (!UNK_0x6B4464DA5794D055(iLocal_144[0]))
				{
					UNK_0xFFDDE8CC59EB6D40(iLocal_144[0], UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_144[1]))
		{
			if (UNK_0xD1960163A3042274(iLocal_144[1], -1273030092) == 1)
			{
				if (!UNK_0x6B4464DA5794D055(iLocal_144[1]))
				{
					UNK_0xFFDDE8CC59EB6D40(iLocal_144[1], UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		return true;
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(bLocal_370);
		UNK_0x523BCC9DC80CD82F(bLocal_372);
		UNK_0x523BCC9DC80CD82F(bLocal_371);
		if ((UNK_0xB87F6CF6E5628C67(bLocal_370) && UNK_0xB87F6CF6E5628C67(bLocal_372)) && UNK_0xB87F6CF6E5628C67(bLocal_371))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				vVar5 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
				if (UNK_0x8F91E660145F47FF(&vVar5, &vVar2, &vVar8, 0f, 180f, 30f, false, 1, 1))
				{
					if ((func_53(vVar2) && !UNK_0x8E28E832BEAC3DCE(vVar2, 5f)) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar2) > 100f)
					{
						iVar11 = 0;
						while (iVar11 < 2)
						{
							UNK_0x536F1BE96C726C4B(vVar2, 3f, 0, 0, 0, false);
							vVar2.x = (vVar2.x + SYSTEM::TO_FLOAT(iVar11));
							iLocal_156[iVar11] = UNK_0x122AAB0B1D6F55AD(bLocal_370, vVar2, vVar8.z, true, true, false);
							iLocal_144[iVar11] = UNK_0x852A19533F896693(iLocal_156[iVar11], 22, bLocal_372, -1, 1, true);
							iLocal_147[iVar11] = UNK_0x852A19533F896693(iLocal_156[iVar11], 22, bLocal_371, false, 1, true);
							UNK_0x6DF7BF67E86AAE86(iLocal_147[iVar11], bLocal_374);
							UNK_0x6DF7BF67E86AAE86(iLocal_144[iVar11], bLocal_374);
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
								{
									UNK_0x0D88E2F7C05BF3A2(iLocal_144[iVar11], UNK_0x16F2683693E537C9());
								}
							}
							else
							{
								UNK_0x89258193691A7600(iLocal_144[iVar11], iLocal_156[iVar11], UNK_0x16F2683693E537C9(), iVar1, 50f, iVar0, 5f, 10f, 1);
							}
							UNK_0x00A6D36F507FD6EA(iLocal_144[iVar11], 0);
							UNK_0x00A6D36F507FD6EA(iLocal_147[iVar11], 0);
							UNK_0xFADC0A217229F6B5(iLocal_144[iVar11], true);
							UNK_0x262EF6C6306BEA6C(iLocal_144[iVar11], joaat("WEAPON_SAWNOFFSHOTGUN"), 999999, true, true);
							UNK_0x1AEF7184B203A58D(iLocal_156[iVar11], (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) + 5f));
							iVar1 = 11;
							UNK_0x262EF6C6306BEA6C(iLocal_147[iVar11], joaat("WEAPON_SAWNOFFSHOTGUN"), 999999, true, true);
							UNK_0xFFDDE8CC59EB6D40(iLocal_147[iVar11], UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 200f, 70, 0, -753768974);
							UNK_0xFADC0A217229F6B5(iLocal_147[iVar11], true);
							UNK_0x545E1397F38D9D5A(iLocal_144[iVar11], 1);
							UNK_0x545E1397F38D9D5A(iLocal_147[iVar11], 1);
							UNK_0x4E885A246A9D983A(iLocal_144[iVar11], 42, true);
							UNK_0x4E885A246A9D983A(iLocal_147[iVar11], 42, true);
							UNK_0x298903DD96203C2C(iLocal_144[iVar11], 15);
							UNK_0x298903DD96203C2C(iLocal_147[iVar11], 15);
							iVar11++;
						}
						func_108();
					}
				}
			}
		}
	}
	return false;
}

bool func_53(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { vParam0 - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	vVar3 = { UNK_0x08D89CE2E20AE305(UNK_0x16F2683693E537C9()) };
	if (UNK_0x755FF954DAE327E1(UNK_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, vVar0.x, vVar0.y)) >= 90f)
	{
		return true;
	}
	return false;
}

int func_54(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_55(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_9(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_9(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_9(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_56()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_139))
	{
		UNK_0x142CC44DB769B57E(&iLocal_139);
	}
}

int func_57(vector3 vParam0, int iParam3)
{
	return func_8(vParam0, iParam3);
}

void func_58()
{
	if (func_165() == 2)
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_139))
		{
			func_61();
			iLocal_139 = func_57(vLocal_65, 0);
			UNK_0xBC8E0A7390523199(iLocal_139, 269);
			func_59();
		}
	}
}

void func_59()
{
	if (!func_60())
	{
		if (func_165() == 2)
		{
			Global_31005 = 1;
		}
	}
}

bool func_60()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return true;
	}
	return false;
}

void func_61()
{
	if (func_165() == 2)
	{
		if (!Global_31007)
		{
			func_62("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_62(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_63()
{
	struct<6> Var0;
	char* sVar6;
	bool bVar7;

	if (!iLocal_87[0])
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_140, false)) < 400f)
		{
			if (UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
			{
				iLocal_87[0] = 1;
			}
		}
	}
	if (!iLocal_90[0])
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_140, false)) < 400f && (UNK_0x1C0640BA9A7327B3() - iLocal_104) > 30000)
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x405E212DDE472467(bLocal_140, 0))
			{
				if (UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
				{
					if (!func_85(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
					{
						iLocal_90[0] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_90[1])
	{
		if (func_11())
		{
			iLocal_104 = UNK_0x1C0640BA9A7327B3();
			iLocal_90[0] = 0;
			iLocal_90[1] = 0;
		}
	}
	if (!iLocal_93[0])
	{
		if (func_11())
		{
			if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) < 1f)
			{
				fLocal_102 = (fLocal_102 + UNK_0x6117725E0134737F());
				if (fLocal_102 > 30f)
				{
					iLocal_93[0] = 1;
				}
			}
			else if (fLocal_102 > 0f)
			{
				fLocal_102 = (fLocal_102 - (UNK_0x6117725E0134737F() * 10f));
			}
		}
	}
	else if (iLocal_93[1])
	{
		fLocal_102 = 0f;
		iLocal_93[0] = 0;
		iLocal_93[1] = 0;
	}
	if (!iLocal_96[0])
	{
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x405E212DDE472467(bLocal_140, 0))
		{
			if (!UNK_0xC844350D5D58C99A(UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9())))
			{
				fLocal_103 = (fLocal_103 + UNK_0x6117725E0134737F());
				if (fLocal_103 > 15f)
				{
					iLocal_96[0] = 1;
				}
			}
		}
		else if (fLocal_103 > 0f)
		{
			fLocal_103 = (fLocal_103 - (UNK_0x6117725E0134737F() * 10f));
		}
	}
	if ((((!iLocal_93[0] || (iLocal_93[0] && iLocal_93[1])) && (!iLocal_87[0] || (iLocal_87[0] && iLocal_87[1]))) && (!iLocal_90[0] || (iLocal_90[0] && iLocal_90[1]))) && (!iLocal_96[0] || (iLocal_96[0] && iLocal_96[1])))
	{
		switch (iLocal_390)
		{
			case 0:
				switch (iLocal_388)
				{
					case 0:
						if (!func_90())
						{
							iLocal_388++;
						}
						break;
					case 1:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_HOME", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					case 2:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_RESP", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					case 3:
						if (func_11())
						{
							if (func_83())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_ADD", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							else if (func_164(&uLocal_176, cLocal_387, "RESNA_ADD2", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					case 4:
						if (!func_90())
						{
							func_5(1);
						}
						break;
				}
				break;
			case 1:
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_BANT", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						case 1:
							if (!func_90())
							{
								iLocal_388++;
							}
							break;
						case 2:
							if (func_165() == 2)
							{
								if (func_66("RESNA_B1T", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_11())
							{
								if (func_84("RESNA_B1", 0))
								{
									iLocal_388++;
								}
							}
							break;
						case 3:
							if (func_66("RESNA_B2", func_11()))
							{
								iLocal_388++;
							}
							break;
						case 4:
							if (func_11())
							{
								if (func_84("RESNA_B2", 0))
								{
									iLocal_388++;
								}
							}
							break;
						case 5:
							if (!func_90())
							{
								func_5(2);
							}
							break;
					}
				}
				break;
			case 2:
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_84("RESNA_B4", 0))
								{
									iLocal_388++;
								}
							}
							break;
						case 1:
							if (func_66("RESNA_B4", func_11()))
							{
								iLocal_388++;
							}
							break;
						case 2:
							if (func_11())
							{
								if (func_84("RESNA_B4", "b"))
								{
									iLocal_388++;
								}
							}
							break;
						case 3:
							if (func_66("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						case 4:
							if (!func_90())
							{
								func_5(5);
							}
							break;
					}
				}
				break;
			case 3:
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_B5", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						case 1:
							if (!func_90())
							{
								if (func_11())
								{
									if (func_84("RESNA_B5", 0))
									{
										iLocal_388++;
									}
								}
							}
							break;
						case 2:
							if (func_66("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						case 3:
							if (!func_90())
							{
								func_5(5);
							}
							break;
					}
				}
				break;
			case 4:
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_66("RESNA_B6", func_11()))
							{
								iLocal_388++;
							}
							break;
						case 1:
							if (func_11())
							{
								if (func_84("RESNA_B6", 0))
								{
									iLocal_388++;
								}
							}
							break;
						case 2:
							if (func_66("RESNA_RUNOUT", func_11()))
							{
								iLocal_388++;
							}
							break;
						case 3:
							if (!func_90())
							{
								func_5(5);
							}
							break;
					}
				}
				break;
			case 5:
				if (iLocal_388 > 1 && iLocal_388 < 3)
				{
					if (!UNK_0xFBF1556B75C783FC(bLocal_140))
					{
						UNK_0x8D4C354BB8991817(bLocal_140, 1, 1);
					}
				}
				else if (UNK_0xFBF1556B75C783FC(bLocal_140))
				{
					UNK_0x8D4C354BB8991817(bLocal_140, 0, 1);
				}
				switch (iLocal_388)
				{
					case 0:
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_389) > 10000)
						{
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_CELL1", 8, 0, 0, 0))
								{
									UNK_0xC722B6355F3075E5(bLocal_140, 0);
									UNK_0xA245D14CC59CDD36(bLocal_140, 0);
									UNK_0x9A7FB2EDC388D8BD(bLocal_140, 0, 0);
									iLocal_388++;
								}
							}
						}
						break;
					case 1:
						Var0 = { func_65() };
						if (UNK_0x7F8A39872A07D2CE(&Var0, "RESNA_CELL1_3"))
						{
							iLocal_388++;
						}
						break;
					case 2:
						if (!func_90())
						{
							iLocal_389 = UNK_0x1C0640BA9A7327B3();
							iLocal_388++;
						}
						break;
					case 3:
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_389) > 2000)
						{
							if (func_11() && !UNK_0x52FF53189897E1B9(bLocal_140))
							{
								if (func_84("RESNA_CELLR", 0))
								{
									UNK_0xC722B6355F3075E5(bLocal_140, 1);
									UNK_0xA245D14CC59CDD36(bLocal_140, 1);
									UNK_0x9A7FB2EDC388D8BD(bLocal_140, 1, 0);
									iLocal_388++;
								}
							}
						}
						break;
					case 4:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_CELLD", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
				}
				break;
			case -1:
				switch (iLocal_388)
				{
					case 0:
						if (func_164(&uLocal_176, cLocal_387, "RESNA_BANT2", 4, 0, 0, 0))
						{
							iLocal_388++;
						}
						break;
					case 1:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					case 2:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3B", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					case 3:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3B", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					case 4:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3C", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					case 5:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3C", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					case 6:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3D", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					case 7:
						if (!func_90())
						{
							iLocal_388++;
						}
						break;
					case 8:
						if (func_11())
						{
							if (func_165() == 2)
							{
								if (!func_90())
								{
									if (func_84("RESNA_B3D", 0))
									{
										iLocal_388++;
									}
								}
							}
							else if (func_165() == 0)
							{
								if (func_66("RESNA_B3DM", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_66("RESNA_B3DF", func_11()))
							{
								iLocal_388++;
							}
						}
						break;
					case 9:
						if (!func_90())
						{
							func_5(6);
						}
						break;
				}
				break;
			case 6:
				if (func_165() == 2 && (UNK_0x1C0640BA9A7327B3() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_88(vLocal_56))
							{
								iLocal_388++;
							}
							break;
						case 1:
							if (func_66("RESNA_TREV", func_11()))
							{
								iLocal_388++;
								iLocal_389 = UNK_0x1C0640BA9A7327B3();
							}
							break;
						case 2:
							if (func_88(vLocal_56))
							{
								iLocal_388++;
							}
							break;
						case 3:
							if (func_66("RESNA_CULT", func_11()))
							{
								iLocal_388++;
								iLocal_389 = UNK_0x1C0640BA9A7327B3();
							}
							break;
						case 4:
							if (func_88(vLocal_56) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vLocal_65) < 250f)
							{
								iLocal_388++;
							}
							break;
						case 5:
							if (func_66("RESNA_NEAR", func_11()))
							{
								iLocal_388++;
							}
							break;
					}
				}
				break;
		}
	}
	else if (func_90())
	{
		if (bLocal_376 && !bLocal_377)
		{
			cLocal_378 = { func_64() };
			func_45();
			bLocal_377 = true;
		}
	}
	else
	{
		if (iLocal_87[0] && !iLocal_87[1])
		{
			if (func_164(&uLocal_176, cLocal_387, "RESNA_JACK", 8, 0, 0, 0))
			{
				iLocal_87[1] = 1;
			}
		}
		if (iLocal_96[0] && !iLocal_96[1])
		{
			if (func_164(&uLocal_176, cLocal_387, "RESNA_NOVEH", 8, 0, 0, 0))
			{
				iLocal_96[1] = 1;
			}
		}
		if (iLocal_93[0] && !iLocal_93[1])
		{
			if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) < 3f)
			{
				if (func_164(&uLocal_176, cLocal_387, "RESNA_STOP", 8, 0, 0, 0))
				{
					iLocal_93[1] = 1;
				}
			}
			else
			{
				iLocal_93[0] = 0;
			}
		}
		if (iLocal_90[0] && !iLocal_90[1])
		{
			if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x405E212DDE472467(bLocal_140, 0)) && UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
			{
				bVar7 = UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0));
				if ((UNK_0x7D8B2A8F9EA82DB7(bVar7) || UNK_0xAD09C9A4B56FA133(bVar7)) || UNK_0xD1CC995EE5EB1EC1(bVar7))
				{
					sVar6 = "RESNA_VEH1";
				}
				else
				{
					sVar6 = "RESNA_VEH2";
				}
				if (func_164(&uLocal_176, cLocal_387, sVar6, 8, 0, 0, 0))
				{
					iLocal_90[1] = 1;
				}
			}
			else
			{
				iLocal_90[0] = 0;
			}
		}
	}
}

struct<6> func_64()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = UNK_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (UNK_0xEF07223F00EBE9C9(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (UNK_0xEF07223F00EBE9C9(&(Global_19673[iVar8 /*6*/])))
					{
						return Global_19673[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_65()
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

bool func_66(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!bLocal_376)
		{
			if (func_164(&uLocal_176, cLocal_387, sParam0, 8, 0, 0, 0))
			{
				bLocal_376 = true;
				bLocal_377 = false;
			}
		}
		else if (bLocal_377)
		{
			if (func_67(&uLocal_176, cLocal_387, sParam0, &cLocal_378, 8, 0, 0))
			{
				bLocal_377 = false;
			}
		}
		if ((bLocal_376 && !bLocal_377) && bParam1)
		{
			if (iLocal_384 == -1)
			{
				if (!func_90())
				{
					iLocal_384 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() - iLocal_384) > 500)
			{
				iLocal_384 = -1;
				bLocal_376 = false;
				bLocal_377 = false;
				return true;
			}
		}
	}
	else if (bLocal_376 && !bLocal_377)
	{
		cLocal_378 = { func_64() };
		func_45();
		bLocal_377 = true;
	}
	return false;
}

int func_67(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_68(sParam2, iParam4, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)
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
					func_81();
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
		if (func_80(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_79();
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
				func_78();
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
				if (func_77())
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
			if (func_76())
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
			func_75();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_74();
		func_69();
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
		func_81();
	}
	return 0;
}

void func_69()
{
	if (!func_70())
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

bool func_70()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_73())
	{
		return false;
	}
	if (func_71(UNK_0xD803B885F5E47A62()))
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

bool func_71(int iParam0)
{
	return func_72(iParam0, 20);
}

bool func_72(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_73()
{
	return -1;
}

void func_74()
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

void func_75()
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

bool func_76()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_77()
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

void func_78()
{
	if (func_34(14))
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
		Global_19486 = func_165();
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

void func_79()
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

bool func_80(bool bParam0, int iParam1)
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

void func_81()
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

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_83()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_84(char* sParam0, char* sParam1)
{
	vector3 vVar0[24];

	StringConCat(&cVar0, sParam0, 24);
	if (func_165() == 0)
	{
		StringConCat(&cVar0, "M", 24);
	}
	else if (func_165() == 1)
	{
		StringConCat(&cVar0, "F", 24);
	}
	else
	{
		StringConCat(&cVar0, "T", 24);
	}
	if (!UNK_0xEA6BC48857E0AC4C(sParam1))
	{
		StringConCat(&cVar0, sParam1, 24);
	}
	if (func_164(&uLocal_176, cLocal_387, &cVar0, 8, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_85(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0xBBA8A868118C90ED(bParam0, -1, 0))
		{
			return true;
		}
		if (UNK_0xBBA8A868118C90ED(bParam0, false, 0))
		{
			return true;
		}
		if (UNK_0xBBA8A868118C90ED(bParam0, true, 0))
		{
			return true;
		}
		if (UNK_0xBBA8A868118C90ED(bParam0, 2, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_86(int iParam0)
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
			if (func_87())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_87()
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

bool func_88(vector3 vParam0)
{
	if (func_165() == 2)
	{
		if (func_89() && !Global_31008)
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

bool func_89()
{
	return Global_31005;
}

bool func_90()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_91()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	var uVar7;

	vVar0 = { UNK_0x68E4ADDDDCD7BDDE(bLocal_155, 0f, -6f, 0f) };
	if (UNK_0xDF1306B443CD3D15(UNK_0x728870EB733D12A1(), 0))
	{
		if (UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), vVar0, 5f, 5f, 5f, false, true, 0))
		{
			UNK_0x4A13F7D4B1E239A0(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), iLocal_3, &vVar3, &bVar6, &uVar7, true, 1077936128, false);
			UNK_0xD8F6A53F4799FAFE(UNK_0x728870EB733D12A1(), bVar6);
			UNK_0xA47B46945FF6DE74(UNK_0x728870EB733D12A1(), vVar3, 1, 0, 0, 1);
		}
	}
}

bool func_92(bool bParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11[4];
	vector3 vVar24[4];
	vector3 vVar37[4];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	iVar0 = 0;
	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xC844350D5D58C99A(bLocal_155))
	{
		bVar1 = bParam0;
		UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bVar1), &vVar2, &vVar5);
		vVar8 = { vVar5 - vVar2 };
		vVar11[0 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bVar1, (-vVar8.x / 2f), (vVar8.y / 2f), 0f) };
		vVar11[1 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bVar1, (vVar8.x / 2f), (vVar8.y / 2f), 0f) };
		vVar11[2 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bVar1, (vVar8.x / 2f), (-vVar8.y / 2f), 0f) };
		vVar11[3 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bVar1, (-vVar8.x / 2f), (-vVar8.y / 2f), 0f) };
		vVar24[0 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bLocal_155, -1f, -2.5f, 0f) };
		vVar24[1 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bLocal_155, 1f, -2.5f, 0f) };
		vVar24[2 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bLocal_155, 0.75f, -5f, 0f) };
		vVar24[3 /*3*/] = { UNK_0x68E4ADDDDCD7BDDE(bLocal_155, -0.75f, -5f, 0f) };
		iVar50 = 0;
		while (iVar50 < vVar24.x)
		{
			iVar52 = iVar50 + 1;
			if (iVar52 == vVar24.x)
			{
				iVar52 = 0;
			}
			iVar51 = 0;
			while (iVar51 < vVar11.x)
			{
				iVar53 = iVar51 + 1;
				if (iVar53 == vVar11.x)
				{
					iVar53 = 0;
				}
				if (func_93(vVar24[iVar50 /*3*/], vVar24[iVar52 /*3*/], vVar11[iVar51 /*3*/], vVar11[iVar53 /*3*/], &(vVar37[iVar50 /*3*/])))
				{
					iVar0 = 1;
				}
				iVar51++;
			}
			iVar50++;
		}
	}
	return iVar0;
}

bool func_93(vector3 vParam0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	fVar0 = vParam0.x;
	fVar1 = Param3;
	fVar2 = Param6;
	fVar3 = Param9;
	fVar4 = vParam0.y;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return false;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_95(fVar0, fVar1) || fVar11 > func_94(fVar0, fVar1)) || fVar11 < func_95(fVar2, fVar3)) || fVar11 > func_94(fVar2, fVar3))
	{
		return false;
	}
	if (((fVar12 < func_95(fVar4, fVar5) || fVar12 > func_94(fVar4, fVar5)) || fVar12 < func_95(fVar6, fVar7)) || fVar12 > func_94(fVar6, fVar7))
	{
		return false;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = vParam0.z;
	return true;
}

float func_94(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_95(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_96(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (UNK_0x9F4FE516EAACCFC5(uParam0->f_14))
	{
		UNK_0x9A8DDC7C522F5BF5(uParam0->f_14, 0);
	}
	if (UNK_0x9F4FE516EAACCFC5(uParam0->f_15))
	{
		UNK_0x9A8DDC7C522F5BF5(uParam0->f_15, 0);
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		uParam0->f_14 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
		UNK_0x608A456FDD8A83D8(uParam0->f_14, UNK_0x68E4ADDDDCD7BDDE(bParam1, *uParam0));
		if (uParam0->f_18 == 1)
		{
			UNK_0xC5940439E4EB9A33(uParam0->f_14, bParam1, *uParam0, 1);
		}
		if (bParam2)
		{
			UNK_0x5F3CBA6EB9341C90(uParam0->f_14, uParam0->f_3, 2);
		}
		else
		{
			vVar0 = { func_99(UNK_0x68E4ADDDDCD7BDDE(bParam1, uParam0->f_3), UNK_0x68E4ADDDDCD7BDDE(bParam1, *uParam0)) };
			vVar3 = { func_97(vVar0) };
			UNK_0x5F3CBA6EB9341C90(uParam0->f_14, vVar3, 2);
		}
		UNK_0x5818C8D5303DCCF8(uParam0->f_14, uParam0->f_12);
		UNK_0xE3BB8E05FCEB3FBE(uParam0->f_14, true);
	}
}

Vector3 func_97(vector3 vParam0)
{
	vector3 vVar0;

	vParam0.f_2 = func_98(vParam0.z);
	vVar0.f_2 = UNK_0x5D8ABF6396A76564(-vParam0.x, vParam0.y);
	vVar0.x = UNK_0x822909BFEF2FF1A9(vParam0.z);
	vVar0.f_1 = 0f;
	return vVar0;
}

float func_98(float fParam0)
{
	if (fParam0 == 1f)
	{
		return 0.999999f;
	}
	if (fParam0 == -1f)
	{
		return -0.999999f;
	}
	return fParam0;
}

Vector3 func_99(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	fVar6 = SYSTEM::SQRT((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)));
	vVar3.x = (vVar0.x / fVar6);
	vVar3.f_1 = (vVar0.y / fVar6);
	vVar3.f_2 = (vVar0.z / fVar6);
	return vVar3;
}

void func_100(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_107(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_76())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_106(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_107(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_106(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_104(UNK_0xD803B885F5E47A62())) && !func_102(UNK_0xD803B885F5E47A62(), 0)) && !func_101()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_104(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_101()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_102(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_103(-1, 0) == 8;
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

int func_103(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

bool func_104(bool bParam0)
{
	if (func_102(bParam0, 0))
	{
		return true;
	}
	if (func_105())
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

bool func_105()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_106(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_107(int iParam0)
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

void func_108()
{
	Global_19671 = 0;
	func_81();
}

bool func_109(bool bParam0, bool bParam1, bool bParam2)
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

void func_110()
{
	int iVar0;

	if (UNK_0xEB6A8945D1AC98A1(bLocal_141))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_121))
		{
			UNK_0x142CC44DB769B57E(&iLocal_121);
		}
		iVar0++;
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_142))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_123))
		{
			UNK_0x142CC44DB769B57E(&iLocal_123);
		}
		iVar0++;
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_143))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_124))
		{
			UNK_0x142CC44DB769B57E(&iLocal_124);
		}
		iVar0++;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		if (UNK_0x1C0640BA9A7327B3() > iLocal_86 + 8000)
		{
			func_111(bLocal_140, "GENERIC_FRIGHTENED_HIGH", 3);
			iLocal_86 = UNK_0x1C0640BA9A7327B3();
		}
	}
	if (iVar0 == 3)
	{
		bLocal_78 = true;
	}
}

void func_111(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)
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

void func_113()
{
	int iVar0;
	vector3 vVar1[4];

	vVar1[0 /*3*/] = { 986.8661f, -113.7463f, 72.9153f };
	vVar1[1 /*3*/] = { 964.0147f, -144.0337f, 73.4875f };
	vVar1[2 /*3*/] = { 954.2817f, -137.429f, 73.4781f };
	vVar1[3 /*3*/] = { 976.5977f, -149.0529f, 73.2404f };
	if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_59, 10f, 10f, 10f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_150[iVar0] = UNK_0x36F2404464202779(22, bLocal_371, vVar1[iVar0 /*3*/], false, 1, true);
			UNK_0x262EF6C6306BEA6C(iLocal_150[iVar0], joaat("WEAPON_SAWNOFFSHOTGUN"), 999999, true, true);
			UNK_0x6DF7BF67E86AAE86(iLocal_150[iVar0], bLocal_374);
			UNK_0x6C3AE6E278DB3D0E(iLocal_150[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
			UNK_0x4E885A246A9D983A(iLocal_150[iVar0], 42, true);
			iLocal_134[iVar0] = func_175(iLocal_150[iVar0], 1, 0);
			iVar0++;
		}
		bLocal_76 = true;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (UNK_0xEB6A8945D1AC98A1(iLocal_150[iVar0]))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_134[iVar0]))
			{
				UNK_0x142CC44DB769B57E(&(iLocal_134[iVar0]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		bLocal_77 = true;
	}
}

void func_115(var uParam0, bool bParam1, int iParam2)
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
		if (func_116(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_116(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_116(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

int func_117()
{
	if (UNK_0xEB6A8945D1AC98A1(bLocal_142))
	{
		return 1;
	}
	else if (UNK_0xE3614539F8B5C807(bLocal_142))
	{
		return 1;
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_141))
	{
		return 1;
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_143))
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
	{
		if (UNK_0x5A91F08DF773C39D(bLocal_155, vLocal_59, 10f, 10f, 10f, false, true, 0))
		{
			bLocal_74 = true;
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
	{
		if (iLocal_84 > 0)
		{
			func_120();
		}
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_155, 20f, 20f, 10f, 0, 1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_155, UNK_0x16F2683693E537C9(), 1))
			{
				if (iLocal_438 == -1)
				{
					iLocal_438 = UNK_0x1C0640BA9A7327B3();
				}
				iLocal_84++;
				UNK_0xE910A68AA670B4AA(bLocal_155);
				if (SYSTEM::TIMERA() > 10000)
				{
					if (UNK_0x09AC81E49EA267F7(false, 100) > 49)
					{
						func_164(&uLocal_176, cLocal_387, "RESNA_STRG", 4, 0, 0, 0);
					}
					else if (!UNK_0xEB6A8945D1AC98A1(bLocal_142))
					{
						func_164(&uLocal_176, cLocal_387, "RESNA_FOFF", 4, 0, 0, 0);
					}
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_84 > 30)
			{
				return 1;
			}
		}
		else
		{
			iLocal_84 = 0;
		}
		if (UNK_0x5B17F10380E80E5B(bLocal_155))
		{
			return 1;
		}
	}
	return 0;
}

void func_120()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_142))
	{
		if (UNK_0x405E212DDE472467(bLocal_142, 0))
		{
			if (!UNK_0x6B4464DA5794D055(bLocal_142))
			{
				if (!UNK_0x440C646F2F11A2A1(bLocal_142, joaat("WEAPON_MICROSMG"), 0) || (UNK_0x440C646F2F11A2A1(bLocal_142, joaat("WEAPON_MICROSMG"), 0) && UNK_0xE4B99D229AA1A241(bLocal_142, joaat("AMMO_SHOTGUN")) == 0))
				{
					UNK_0x262EF6C6306BEA6C(bLocal_142, joaat("WEAPON_MICROSMG"), 68, true, true);
				}
				else
				{
					UNK_0x5745EA6329A91E29(bLocal_142, joaat("WEAPON_MICROSMG"), true);
				}
				UNK_0xFFDDE8CC59EB6D40(bLocal_142, UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 100f, 100, 1, -753768974);
			}
		}
	}
	if ((UNK_0x1C0640BA9A7327B3() - iLocal_438) > 250)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_141))
		{
			if ((UNK_0x405E212DDE472467(bLocal_141, 0) && UNK_0xD1960163A3042274(bLocal_141, 2104565373) != 1) && UNK_0xD1960163A3042274(bLocal_141, 2104565373) != 0)
			{
				UNK_0xA3BF0AA5A2608191(bLocal_141);
				UNK_0x262EF6C6306BEA6C(bLocal_141, joaat("WEAPON_MICROSMG"), 68, true, true);
				UNK_0xFFDDE8CC59EB6D40(bLocal_141, UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			}
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_143))
	{
		if ((UNK_0x405E212DDE472467(bLocal_143, 0) && UNK_0xD1960163A3042274(bLocal_143, 2104565373) != 1) && UNK_0xD1960163A3042274(bLocal_143, 2104565373) != 0)
		{
			UNK_0xA3BF0AA5A2608191(bLocal_143);
			UNK_0x262EF6C6306BEA6C(bLocal_143, joaat("WEAPON_PISTOL"), 68, true, true);
			UNK_0xFFDDE8CC59EB6D40(bLocal_143, UNK_0x16F2683693E537C9(), false, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			UNK_0xFADC0A217229F6B5(bLocal_143, true);
		}
	}
	if (!bLocal_366)
	{
		bLocal_366 = true;
	}
}

int func_121()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
	{
		if (UNK_0x6EE94F60DA2A2273(bLocal_155) < 700f || UNK_0xD96C5EC6FCB061BA(bLocal_155) < 700f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_122()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
	{
		if (((UNK_0x464B3D84B739AE72(bLocal_155, false, 0) || UNK_0x464B3D84B739AE72(bLocal_155, true, 0)) || UNK_0x464B3D84B739AE72(bLocal_155, 4, 0)) || UNK_0x464B3D84B739AE72(bLocal_155, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_123(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
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

void func_124()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
		{
			func_125(&uLocal_341, bLocal_155, 0, 0, 1, 1, 1);
		}
		else
		{
			func_115(&uLocal_341, 0, 0);
		}
	}
	else
	{
		func_115(&uLocal_341, 0, 0);
	}
}

void func_125(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_126(uParam0, bParam1, bParam2, iParam3, bParam4, bParam5, bParam6);
}

void func_126(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_127(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, bParam5, bParam6);
}

void func_127(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_116(bVar0))
	{
		func_152();
	}
	if (func_151(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
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
			if (func_146(uParam0, bParam7, bParam9, 0))
			{
				func_142(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_116(bVar0))
							{
								func_62(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_130(1);
								}
							}
						}
					}
				}
			}
			else if (func_131(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_116(bVar0))
						{
							func_62(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_130(1);
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
				if (func_116(bParam5))
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
						func_115(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_115(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_115(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_115(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_115(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_115(uParam0, bVar0, 1);
				}
			}
			if (!func_146(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_129(uParam0))
				{
					func_128(uParam0);
				}
			}
		}
	}
	else
	{
		func_115(uParam0, bVar0, 0);
	}
}

void func_128(var uParam0)
{
	if (func_151(UNK_0x16F2683693E537C9()))
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

bool func_129(var uParam0)
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

int func_130(bool bParam0)
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

bool func_131(bool bParam0)
{
	if (!func_132(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_116(bParam0)) || func_116("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_130(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_130(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_130(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_132(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_141(0))
	{
		return false;
	}
	if (func_140())
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
	if ((func_139() || func_138(Global_4456448.f_232883)) || func_137())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_136(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_135(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_133(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_133(bool bParam0)
{
	if (bParam0 != func_73())
	{
		if (func_134(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_134(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_134(bool bParam0, bool bParam1, bool bParam2)
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

bool func_135(bool bParam0, int iParam1)
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

bool func_136(bool bParam0, int iParam1)
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

bool func_137()
{
	return Global_2450632.f_17;
}

bool func_138(int iParam0)
{
	return iParam0 == 51;
}

bool func_139()
{
	return Global_2450632.f_16;
}

bool func_140()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_141(int iParam0)
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

void func_142(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
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
		func_115(uParam0, 0, 0);
	}
	if (func_145(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_143())
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

int func_143()
{
	return func_144(UNK_0xD803B885F5E47A62());
}

int func_144(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_145(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_146(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_150(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_129(uParam0))
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
						if (!func_150(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_150(bParam1, bParam2, bParam3))
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
					if (!func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_149(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_150(bParam1, bParam2, bParam3))
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
						if (func_148(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_147(bParam1, bParam2, bParam3))
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
					else if (func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_129(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_132(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_152();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

bool func_148(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

bool func_149(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

bool func_150(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

bool func_151(bool bParam0)
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

void func_152()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_153()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_143) && UNK_0xDF1306B443CD3D15(bLocal_155, 0))
	{
		if (!UNK_0xC42A92762C58E1B9(bLocal_143, bLocal_155, 0))
		{
			if (!UNK_0xB4ECF989E2C1DAC8(bLocal_155, bLocal_386, "IG_1_ALT1_EXIT_VAN_BURR", 3))
			{
				UNK_0xF821F915BC24D246(bLocal_143, bLocal_155, true);
			}
		}
	}
}

void func_154()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_142))
	{
		UNK_0x6C3AE6E278DB3D0E(bLocal_142, UNK_0x16F2683693E537C9(), 0, 16);
		UNK_0xFADC0A217229F6B5(bLocal_142, true);
		func_164(&uLocal_176, cLocal_387, "RESNA_ATT", 4, 0, 0, 0);
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_141))
	{
		UNK_0x262EF6C6306BEA6C(bLocal_141, joaat("WEAPON_SMG"), 68, true, true);
		UNK_0x5745EA6329A91E29(bLocal_141, joaat("WEAPON_SMG"), true);
		UNK_0x25C5402CC10F76CD(bLocal_141, true);
		UNK_0x6C3AE6E278DB3D0E(bLocal_141, UNK_0x16F2683693E537C9(), 0, 16);
		UNK_0xFADC0A217229F6B5(bLocal_141, true);
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_143))
	{
		UNK_0x262EF6C6306BEA6C(bLocal_143, joaat("WEAPON_PISTOL"), 68, true, true);
		UNK_0x5745EA6329A91E29(bLocal_143, joaat("WEAPON_PISTOL"), true);
		UNK_0x6C3AE6E278DB3D0E(bLocal_143, UNK_0x16F2683693E537C9(), 0, 16);
		UNK_0xFADC0A217229F6B5(bLocal_143, true);
	}
	func_155();
	UNK_0xF82EA857DA10E0CD(&iLocal_159);
	iLocal_50 = 2;
}

void func_155()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_142))
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_123))
		{
			iLocal_123 = func_175(bLocal_142, 1, 0);
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_141))
	{
		if (UNK_0x12DE711B1C681E9E(bLocal_141, UNK_0x16F2683693E537C9(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_121))
			{
				iLocal_121 = func_175(bLocal_141, 1, 0);
			}
		}
		else
		{
			UNK_0x6DAD7906B73F064D(&bLocal_141);
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_143))
	{
		if (UNK_0x12DE711B1C681E9E(bLocal_143, UNK_0x16F2683693E537C9(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_124))
			{
				iLocal_124 = func_175(bLocal_143, 1, 0);
			}
		}
		else
		{
			UNK_0x6DAD7906B73F064D(&bLocal_143);
		}
	}
}

void func_156()
{
	bool bVar0;

	bVar0 = false;
	if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
	{
		if (UNK_0xB87D13D0C064E9D1(bLocal_155, UNK_0x16F2683693E537C9(), 1))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_141))
	{
		bVar0 = true;
	}
	else if (UNK_0xB87D13D0C064E9D1(bLocal_141, UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = true;
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_142))
	{
		bVar0 = true;
	}
	else if (UNK_0xB87D13D0C064E9D1(bLocal_142, UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = true;
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_143))
	{
		bVar0 = true;
	}
	else if (UNK_0xB87D13D0C064E9D1(bLocal_143, UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = true;
	}
	if (UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		bVar0 = true;
	}
	else if (UNK_0xB87D13D0C064E9D1(bLocal_140, UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_162();
		if (bLocal_365)
		{
			if (UNK_0x69DF961355195C3C(iLocal_107))
			{
				if (UNK_0xA45992A6CE82FB43(iLocal_107) > 0.735f)
				{
					func_161();
				}
				else if (UNK_0xA45992A6CE82FB43(iLocal_107) > 0.4f)
				{
					func_160();
				}
			}
			else if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
			{
				UNK_0x8BE3D040D15AEA1D(bLocal_140, -1);
			}
			if (bLocal_82)
			{
				UNK_0x1E9649458B15960F(bLocal_155, false);
			}
			UNK_0x142CC44DB769B57E(&iLocal_120);
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_123))
			{
				iLocal_123 = func_175(bLocal_142, 1, 0);
			}
			UNK_0x51B096AAC60548C1(0.3f);
			if (!func_208())
			{
				func_166(1);
			}
			func_158();
			func_154();
		}
		else
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_142))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
				{
					UNK_0x89258193691A7600(bLocal_142, bLocal_155, UNK_0x16F2683693E537C9(), 8, 40f, 786469, -1f, -1f, 1);
				}
				else
				{
					UNK_0xF3268524E9BE6D6E(bLocal_142, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_142, true);
				}
			}
			func_157();
		}
	}
}

void func_157()
{
	if (UNK_0x69DF961355195C3C(iLocal_106))
	{
		UNK_0xB46854F2D1C7DFA9(iLocal_106);
	}
	if (UNK_0x69DF961355195C3C(iLocal_107))
	{
		UNK_0xB46854F2D1C7DFA9(iLocal_107);
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		UNK_0x00A6D36F507FD6EA(bLocal_140, 1);
		if (!UNK_0xB4ECF989E2C1DAC8(bLocal_140, bLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_140, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
			UNK_0xFADC0A217229F6B5(bLocal_140, true);
		}
	}
	func_154();
	func_255();
}

void func_158()
{
	Global_19671 = 0;
	func_159();
}

void func_159()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_160()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_155, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		UNK_0x9F528B1B53FBC5D9(bLocal_140, bLocal_155, UNK_0xF653B9B22DA806A9(bLocal_155, bLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, 1, 0, 0, 0, 2, 1);
		UNK_0xA47B46945FF6DE74(bLocal_140, UNK_0x68F4C0EC296D3901(bLocal_155, false), 1, 0, 0, 1);
		UNK_0x327AAEE25F323797(bLocal_140);
		UNK_0xC6EB89C59F2AF6B8(bLocal_140, bLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, false, 0, 0, 0);
		UNK_0xFADC0A217229F6B5(bLocal_140, true);
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_123))
		{
			iLocal_123 = func_175(bLocal_142, 1, 0);
		}
		if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
		{
			UNK_0x05CA0E7946B27A19(bLocal_155, 1);
		}
		bLocal_365 = false;
	}
}

void func_161()
{
	if (((UNK_0xDF1306B443CD3D15(bLocal_155, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_140)) && !UNK_0xEB6A8945D1AC98A1(bLocal_141)) && !UNK_0xEB6A8945D1AC98A1(bLocal_143))
	{
		UNK_0xF821F915BC24D246(bLocal_143, bLocal_155, 2);
		UNK_0xF821F915BC24D246(bLocal_141, bLocal_155, true);
		UNK_0x9F528B1B53FBC5D9(bLocal_140, bLocal_155, UNK_0xF653B9B22DA806A9(bLocal_155, bLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, 1, 0, 0, 0, 2, 1);
		UNK_0xA47B46945FF6DE74(bLocal_140, UNK_0x68F4C0EC296D3901(bLocal_155, false), 1, 0, 0, 1);
		UNK_0x327AAEE25F323797(bLocal_140);
		UNK_0xC6EB89C59F2AF6B8(bLocal_140, bLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, false, 0, 0, 0);
		UNK_0xFADC0A217229F6B5(bLocal_140, true);
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_123))
		{
			iLocal_123 = func_175(bLocal_142, 1, 0);
		}
		if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
		{
			UNK_0x05CA0E7946B27A19(bLocal_155, 0);
		}
		UNK_0x9501364A300048C6();
		bLocal_365 = false;
	}
}

void func_162()
{
	if (UNK_0x69DF961355195C3C(iLocal_118))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_141))
		{
			UNK_0xA3BF0AA5A2608191(bLocal_141);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_143))
		{
			UNK_0xA3BF0AA5A2608191(bLocal_143);
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
		{
			UNK_0xA3BF0AA5A2608191(bLocal_140);
		}
		UNK_0x1BF8B16C32704027(bLocal_155, -4f, 1);
	}
}

void func_163()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		if (UNK_0xB87D13D0C064E9D1(bLocal_140, UNK_0x16F2683693E537C9(), 1) || UNK_0x4E861BC5B1EDA7BD(bLocal_140))
		{
			if (UNK_0x69DF961355195C3C(iLocal_118))
			{
				func_162();
			}
			func_157();
		}
	}
}

bool func_164(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_68(sParam2, iParam3, 0);
}

int func_165()
{
	func_33();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_166(bool bParam0)
{
	if (func_169())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_27(Global_111627))
		{
			func_167(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_27(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_62(func_168(iParam0), -1);
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
					func_62(func_168(iParam0), -1);
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
					func_62(func_168(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

bool func_168(int iParam0)
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

bool func_169()
{
	switch (func_170(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_170(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_174(0))
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
		if (!func_172(iParam2))
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
			func_171(uParam0, iParam4);
		}
	}
	return 2;
}

void func_171(var uParam0, int iParam1)
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

bool func_172(int iParam0)
{
	return func_173(iParam0, Global_41431);
}

int func_173(int iParam0, int iParam1)
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

bool func_174(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_172(iParam0))
	{
		return false;
	}
	return true;
}

int func_175(bool bParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_54(bParam0, bParam1, 145);
}

void func_176()
{
	if (bLocal_361)
	{
	}
	else
	{
		bLocal_361 = true;
	}
}

bool func_177()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_44) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_188())
		{
			return false;
		}
	}
	if (func_184())
	{
		return true;
	}
	if (func_178(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_178(float fParam0, bool bParam1)
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
		if (func_35(func_165()))
		{
			iVar36 = func_32();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_179(iVar32, &Var0);
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

void func_179(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_180(uParam1, "Abigail1", func_182(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 1:
			func_180(uParam1, "Abigail2", func_182(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 2:
			func_180(uParam1, "Barry1", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 3:
			func_180(uParam1, "Barry2", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		case 4:
			func_180(uParam1, "Barry3", func_182(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 5:
			func_180(uParam1, "Barry3A", func_182(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 6:
			func_180(uParam1, "Barry3C", func_182(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 7:
			func_180(uParam1, "Barry4", func_182(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_181(iParam0), 0, 0);
			break;
		case 8:
			func_180(uParam1, "Dreyfuss1", func_182(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 9:
			func_180(uParam1, "Epsilon1", func_182(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 10:
			func_180(uParam1, "Epsilon2", func_182(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 11:
			func_180(uParam1, "Epsilon3", func_182(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 12:
			func_180(uParam1, "Epsilon4", func_182(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 13:
			func_180(uParam1, "Epsilon5", func_182(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 14:
			func_180(uParam1, "Epsilon6", func_182(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 15:
			func_180(uParam1, "Epsilon7", func_182(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 16:
			func_180(uParam1, "Epsilon8", func_182(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 17:
			func_180(uParam1, "Extreme1", func_182(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 18:
			func_180(uParam1, "Extreme2", func_182(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 19:
			func_180(uParam1, "Extreme3", func_182(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 20:
			func_180(uParam1, "Extreme4", func_182(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 21:
			func_180(uParam1, "Fanatic1", func_182(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_181(iParam0), 1, 0);
			break;
		case 22:
			func_180(uParam1, "Fanatic2", func_182(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_181(iParam0), 1, 0);
			break;
		case 23:
			func_180(uParam1, "Fanatic3", func_182(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_181(iParam0), 0, 1);
			break;
		case 24:
			func_180(uParam1, "Hao1", func_182(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_181(iParam0), 0, 1);
			break;
		case 25:
			func_180(uParam1, "Hunting1", func_182(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 26:
			func_180(uParam1, "Hunting2", func_182(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 27:
			func_180(uParam1, "Josh1", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 28:
			func_180(uParam1, "Josh2", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		case 29:
			func_180(uParam1, "Josh3", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		case 30:
			func_180(uParam1, "Josh4", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 31:
			func_180(uParam1, "Maude1", func_182(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 32:
			func_180(uParam1, "Minute1", func_182(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 33:
			func_180(uParam1, "Minute2", func_182(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 34:
			func_180(uParam1, "Minute3", func_182(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 35:
			func_180(uParam1, "MrsPhilips1", func_182(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 36:
			func_180(uParam1, "MrsPhilips2", func_182(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 37:
			func_180(uParam1, "Nigel1", func_182(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 38:
			func_180(uParam1, "Nigel1A", func_182(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		case 39:
			func_180(uParam1, "Nigel1B", func_182(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		case 40:
			func_180(uParam1, "Nigel1C", func_182(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		case 41:
			func_180(uParam1, "Nigel1D", func_182(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		case 42:
			func_180(uParam1, "Nigel2", func_182(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		case 43:
			func_180(uParam1, "Nigel3", func_182(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		case 44:
			func_180(uParam1, "Omega1", func_182(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 45:
			func_180(uParam1, "Omega2", func_182(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 46:
			func_180(uParam1, "Paparazzo1", func_182(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 47:
			func_180(uParam1, "Paparazzo2", func_182(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 48:
			func_180(uParam1, "Paparazzo3", func_182(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 49:
			func_180(uParam1, "Paparazzo3A", func_182(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 50:
			func_180(uParam1, "Paparazzo3B", func_182(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 51:
			func_180(uParam1, "Paparazzo4", func_182(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 52:
			func_180(uParam1, "Rampage1", func_182(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 54:
			func_180(uParam1, "Rampage3", func_182(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 55:
			func_180(uParam1, "Rampage4", func_182(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 56:
			func_180(uParam1, "Rampage5", func_182(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		case 53:
			func_180(uParam1, "Rampage2", func_182(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		case 57:
			func_180(uParam1, "TheLastOne", func_182(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 58:
			func_180(uParam1, "Tonya1", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 59:
			func_180(uParam1, "Tonya2", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 60:
			func_180(uParam1, "Tonya3", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 61:
			func_180(uParam1, "Tonya4", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		case 62:
			func_180(uParam1, "Tonya5", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_180(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_181(int iParam0)
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

struct<2> func_182(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_183(iParam0) };
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

struct<2> func_183(int iParam0)
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

bool func_184()
{
	if (func_187() && !func_188())
	{
		return true;
	}
	if (func_186() && func_185())
	{
		return true;
	}
	return false;
}

bool func_185()
{
	return Global_111356 > 0;
}

bool func_186()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_187()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_188()
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

bool func_189()
{
	func_195(39, 1);
	func_195(40, 1);
	func_195(41, 1);
	func_195(42, 1);
	func_195(43, 1);
	func_195(44, 1);
	bLocal_55 = 321f;
	UNK_0xC05DBA7D4F88D5E5(bLocal_372, true);
	UNK_0xC05DBA7D4F88D5E5(bLocal_373, true);
	UNK_0xC05DBA7D4F88D5E5(bLocal_371, true);
	UNK_0xAB8E2DDC7AF955E0(bLocal_369, true);
	UNK_0x523BCC9DC80CD82F(bLocal_373);
	UNK_0x523BCC9DC80CD82F(bLocal_371);
	UNK_0x523BCC9DC80CD82F(bLocal_372);
	UNK_0x523BCC9DC80CD82F(bLocal_369);
	UNK_0x3F423BF5B8125A50(bLocal_386);
	UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_TEST_01"));
	if (((((UNK_0xB87F6CF6E5628C67(bLocal_373) && UNK_0xB87F6CF6E5628C67(bLocal_371)) && UNK_0xB87F6CF6E5628C67(bLocal_372)) && UNK_0xB87F6CF6E5628C67(bLocal_369)) && UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_TEST_01"))) && UNK_0xB4AE0788C1587752(bLocal_386))
	{
		func_194();
		func_193();
		func_192();
		func_191();
		UNK_0x7D0D8317DC09FF68(111, vLocal_52, -1f);
		iLocal_162 = UNK_0x7D6CA5F52B3748BF(vLocal_59 - Vector(50f, 50f, 50f), vLocal_59 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		switch (func_165())
		{
			case 0:
				sLocal_174 = "MICHAEL";
				break;
			case 1:
				sLocal_174 = "FRANKLIN";
				break;
			case 2:
				sLocal_174 = "TREVOR";
				break;
		}
		func_190(&uLocal_176, 0, UNK_0x16F2683693E537C9(), sLocal_174, 0, 1);
		vLocal_165 = { -3057.362f, 441.8271f, 6.151212f };
		vLocal_168 = { -0.34992f, -0.199749f, -98.79861f };
		fLocal_359 = 116f;
		vLocal_56 = { -3053.721f, 440.9221f, 5.3566f };
		bLocal_164 = UNK_0x7707E48765093646(joaat("PROP_LD_TEST_01"), UNK_0x68F4C0EC296D3901(bLocal_155, false), true, true, false);
		UNK_0xC023D1C4BF532815(bLocal_164, UNK_0x835730A2D89F6093(bLocal_155, 2), 2, 1);
		UNK_0x1E9649458B15960F(bLocal_164, true);
		UNK_0x20641932E5104B25(bLocal_164, false, 0);
		return true;
	}
	return false;
}

void func_190(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_191()
{
	UNK_0x25C5402CC10F76CD(bLocal_141, false);
	UNK_0x7980D72D61BEF4D5(bLocal_155, true);
	UNK_0x71EDC33E5A423750(bLocal_155, 3);
	UNK_0x6DF7BF67E86AAE86(bLocal_142, bLocal_374);
	UNK_0x6DF7BF67E86AAE86(bLocal_143, bLocal_374);
	UNK_0x6DF7BF67E86AAE86(bLocal_141, bLocal_374);
	UNK_0x11AD11297DC58CC7(bLocal_143, true);
	UNK_0x11AD11297DC58CC7(bLocal_142, true);
	UNK_0x11AD11297DC58CC7(bLocal_141, true);
	UNK_0x4E885A246A9D983A(bLocal_142, 42, true);
	UNK_0x4E885A246A9D983A(bLocal_141, 42, true);
	UNK_0x4E885A246A9D983A(bLocal_143, 42, true);
	UNK_0xAFF39FB306F8E232(bLocal_143, 17, false);
	UNK_0xAFF39FB306F8E232(bLocal_143, 1, false);
	UNK_0xAFF39FB306F8E232(bLocal_143, 13, true);
	UNK_0xAFF39FB306F8E232(bLocal_143, 50, true);
	UNK_0xAFF39FB306F8E232(bLocal_141, 2, true);
	UNK_0xAFF39FB306F8E232(bLocal_142, 17, false);
	UNK_0xAFF39FB306F8E232(bLocal_142, 1, false);
	UNK_0xAFF39FB306F8E232(bLocal_142, 13, true);
	UNK_0xAFF39FB306F8E232(bLocal_142, 50, true);
	UNK_0xAFF39FB306F8E232(bLocal_142, 6, false);
	UNK_0xAFF39FB306F8E232(bLocal_141, 2, true);
	UNK_0xAFF39FB306F8E232(bLocal_141, 17, false);
	UNK_0xAFF39FB306F8E232(bLocal_141, 1, false);
	UNK_0xAFF39FB306F8E232(bLocal_141, 13, true);
	UNK_0xAFF39FB306F8E232(bLocal_141, 50, true);
	UNK_0xAFF39FB306F8E232(bLocal_141, 2, true);
	UNK_0x3CC33E4E9CE523F4(bLocal_143, 2);
	UNK_0x3CC33E4E9CE523F4(bLocal_142, 2);
	UNK_0x3CC33E4E9CE523F4(bLocal_141, 2);
	UNK_0x00A6D36F507FD6EA(bLocal_143, 0);
	UNK_0x00A6D36F507FD6EA(bLocal_142, 0);
	UNK_0x00A6D36F507FD6EA(bLocal_141, 0);
	UNK_0x262EF6C6306BEA6C(bLocal_143, joaat("WEAPON_PISTOL"), 68, false, true);
	UNK_0x262EF6C6306BEA6C(bLocal_142, joaat("WEAPON_SAWNOFFSHOTGUN"), 68, false, true);
	UNK_0x262EF6C6306BEA6C(bLocal_141, joaat("WEAPON_MICROSMG"), 68, false, true);
	UNK_0x52D1A852D4AB1A0B(bLocal_143, 0);
	UNK_0x52D1A852D4AB1A0B(bLocal_142, 0);
	UNK_0x52D1A852D4AB1A0B(bLocal_141, 0);
	UNK_0x4E885A246A9D983A(bLocal_142, 115, true);
	UNK_0x4E885A246A9D983A(bLocal_141, 115, true);
	UNK_0x4E885A246A9D983A(bLocal_143, 115, true);
	func_190(&uLocal_176, 2, bLocal_142, "LostKidnapper", 0, 1);
}

void func_192()
{
	bool bVar0;

	bVar0 = 500;
	if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
	{
		bLocal_140 = UNK_0x36F2404464202779(5, bLocal_373, UNK_0x68E4ADDDDCD7BDDE(bLocal_155, vLocal_353), bLocal_55, 1, true);
	}
	else
	{
		bLocal_140 = UNK_0x36F2404464202779(5, bLocal_373, UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), vLocal_353), bLocal_55, 1, true);
	}
	UNK_0x4F39CC3882DD074E(bLocal_140, "LostKidnapGirl");
	UNK_0x25C5402CC10F76CD(bLocal_140, false);
	UNK_0x00A6D36F507FD6EA(bLocal_140, 0);
	UNK_0xD458AC1C1D29C3B4(bLocal_140, bVar0, false);
	UNK_0x093A734E5AEA758F(bLocal_140, bVar0);
	UNK_0x11AD11297DC58CC7(bLocal_140, true);
	UNK_0x6DF7BF67E86AAE86(bLocal_140, bLocal_375);
	func_190(&uLocal_176, 1, bLocal_140, "LostKidnapGirl", 0, 1);
}

void func_193()
{
	vector3 vVar0;

	vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	if (vVar0.x > vLocal_52.x)
	{
		bLocal_155 = UNK_0x122AAB0B1D6F55AD(bLocal_369, -1116.946f, 560.8027f, 101.3588f, 116.0592f, true, true, false);
		vLocal_62 = { -1247.233f, 515.3996f, 94.1352f };
	}
	else
	{
		bLocal_155 = UNK_0x122AAB0B1D6F55AD(bLocal_369, vLocal_52, 305f, true, true, false);
		vLocal_62 = { -852.9832f, 441.7806f, 86.0437f };
	}
	UNK_0x2F625BED8BF7F26A(bLocal_155);
	UNK_0x56FDC9ADE35F7DB0(bLocal_155, true, true, 0);
	bLocal_142 = UNK_0x852A19533F896693(bLocal_155, 22, bLocal_372, -1, 1, true);
	UNK_0xAFF39FB306F8E232(bLocal_142, 2, true);
	UNK_0x262EF6C6306BEA6C(bLocal_142, joaat("WEAPON_SAWNOFFSHOTGUN"), 68, true, true);
	UNK_0x5745EA6329A91E29(bLocal_142, joaat("WEAPON_SAWNOFFSHOTGUN"), true);
	bLocal_143 = UNK_0x36F2404464202779(22, bLocal_372, UNK_0x68E4ADDDDCD7BDDE(bLocal_155, vLocal_356), bLocal_55, 1, true);
	bLocal_141 = UNK_0x36F2404464202779(22, bLocal_371, UNK_0x68E4ADDDDCD7BDDE(bLocal_155, vLocal_356), bLocal_55, 1, true);
	UNK_0x1E9649458B15960F(bLocal_155, true);
	bLocal_82 = true;
	UNK_0x29CD9554726C7577(bLocal_141, 25);
	UNK_0xAA714ADDDC372E0F(bLocal_141, -753768974);
	UNK_0x29CD9554726C7577(bLocal_143, 35);
	UNK_0xAA714ADDDC372E0F(bLocal_141, joaat("FIRING_PATTERN_SINGLE_SHOT"));
	UNK_0x298903DD96203C2C(bLocal_142, 12);
	UNK_0x298903DD96203C2C(bLocal_143, 10);
	UNK_0x298903DD96203C2C(bLocal_141, 15);
	UNK_0xA22F71BBC8173C39(bLocal_155, false);
	UNK_0x71199B01895C6202(bLocal_372);
	UNK_0x71199B01895C6202(bLocal_371);
	UNK_0x71199B01895C6202(bLocal_369);
	UNK_0x9A8BCD43DBDDCDCA(bLocal_155, 0, 0);
	UNK_0xF8CF67C6E39C23A9(bLocal_155, 2f);
}

void func_194()
{
	UNK_0xF63400DBE3303D26("re_snatched badGuys", &bLocal_374);
	UNK_0xF63400DBE3303D26("re_snatched pedVictim", &bLocal_375);
	UNK_0x0E2400AB9174FA81(5, bLocal_374, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(2, bLocal_374, bLocal_375);
	UNK_0x0E2400AB9174FA81(0, bLocal_375, joaat("PLAYER"));
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_202(iParam0, 2, 1))
		{
			func_201(iParam0, 2, 1);
		}
	}
	else if (func_202(iParam0, 2, 1))
	{
		func_196(iParam0, 2, 1);
	}
}

void func_196(int iParam0, bool bParam1, bool bParam2)
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
		if (func_22() == 0)
		{
			bVar0 = func_199(func_200(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_197(func_200(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_197(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_198(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_198(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_198(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_200(int iParam0)
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

void func_201(int iParam0, bool bParam1, bool bParam2)
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
		if (func_22() == 0)
		{
			bVar0 = func_199(func_200(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_197(func_200(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_202(int iParam0, bool bParam1, bool bParam2)
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
		if (func_22() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_199(func_200(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_203()
{
	float fVar0;

	if (((UNK_0xC844350D5D58C99A(bLocal_141) && UNK_0xC844350D5D58C99A(bLocal_143)) && UNK_0xC844350D5D58C99A(bLocal_140)) && UNK_0xC844350D5D58C99A(bLocal_155))
	{
		UNK_0x3F423BF5B8125A50("random@kidnap_girl");
		if (UNK_0xB4AE0788C1587752("random@kidnap_girl"))
		{
			fVar0 = 1.25f;
			switch (iLocal_439)
			{
				case 0:
					if (((UNK_0xDF1306B443CD3D15(bLocal_155, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_140)) && !UNK_0xEB6A8945D1AC98A1(bLocal_141)) && !UNK_0xEB6A8945D1AC98A1(bLocal_143))
					{
						if (!UNK_0x69DF961355195C3C(iLocal_117))
						{
							vLocal_110 = { 0f, 0f, 0f };
							vLocal_113 = { 0f, 0f, 0f };
							iLocal_117 = UNK_0xE9744DB7B8CA6965(vLocal_110, vLocal_113, 2);
							UNK_0x6BE2EAE992FD7C26(iLocal_117, bLocal_155, UNK_0xF653B9B22DA806A9(bLocal_155, bLocal_175));
							UNK_0xC90224D9E95E5E3A(iLocal_117, true);
							UNK_0x83CBE93AD851E045(iLocal_117, vLocal_110, vLocal_113, 2);
							UNK_0x915804B434753CBD(bLocal_140, iLocal_117, bLocal_386, "IG_1_GIRL_ON_PHONE_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(bLocal_141, iLocal_117, bLocal_386, "IG_1_GUY1_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							UNK_0x915804B434753CBD(bLocal_143, iLocal_117, bLocal_386, "IG_1_GUY2_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							UNK_0x46CB381A452EF99D(bLocal_140, 1);
						}
						else
						{
							func_156();
							func_163();
							if (func_204())
							{
								func_157();
							}
						}
					}
					break;
				case 1:
					if ((!UNK_0xEB6A8945D1AC98A1(bLocal_140) && !UNK_0xEB6A8945D1AC98A1(bLocal_141)) && !UNK_0xEB6A8945D1AC98A1(bLocal_143))
					{
						if (UNK_0x69DF961355195C3C(iLocal_117))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_141);
							UNK_0xA3BF0AA5A2608191(bLocal_140);
							UNK_0xA3BF0AA5A2608191(bLocal_143);
						}
						if (!UNK_0x69DF961355195C3C(iLocal_118))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
							{
								vLocal_110 = { 0f, 0f, 0f };
								vLocal_113 = { UNK_0x835730A2D89F6093(bLocal_155, 2) };
								iLocal_118 = UNK_0xE9744DB7B8CA6965(UNK_0x68F4C0EC296D3901(bLocal_155, false), vLocal_113.x, vLocal_113.y, UNK_0xD9522BA9E27E1349(bLocal_155), 2);
								if (bLocal_82)
								{
									UNK_0x1E9649458B15960F(bLocal_155, false);
									bLocal_82 = false;
								}
								UNK_0x5E4E98C6D98C9C57(iLocal_118, fVar0);
								UNK_0x915804B434753CBD(bLocal_140, iLocal_118, bLocal_386, "IG_1_GIRL_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								UNK_0x915804B434753CBD(bLocal_141, iLocal_118, bLocal_386, "IG_1_GUY1_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								UNK_0x915804B434753CBD(bLocal_143, iLocal_118, bLocal_386, "IG_1_GUY2_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								UNK_0xE14EC663EED44AD5(bLocal_155, iLocal_118, "DRAG_INTO_VAN_BURR", bLocal_386, 1000f, -4f, 1, 1148846080 /* Float: 1000f */);
							}
						}
						else
						{
							if (!bLocal_80)
							{
								if ((((UNK_0x69DF961355195C3C(iLocal_118) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), UNK_0x68F4C0EC296D3901(bLocal_155, false)) < 30f) && !func_90()) && UNK_0xA45992A6CE82FB43(iLocal_118) > 0.1f) && UNK_0xA45992A6CE82FB43(iLocal_118) < 0.4f)
								{
									if (func_164(&uLocal_176, cLocal_387, "RESNA_HELP", 4, func_205(), 0, 0))
									{
										bLocal_80 = true;
									}
								}
							}
							if (UNK_0xA45992A6CE82FB43(iLocal_118) > 0.502f)
							{
								UNK_0xE121AE1BBF90E186(bLocal_140, true);
								UNK_0xE121AE1BBF90E186(bLocal_141, true);
								UNK_0xE121AE1BBF90E186(bLocal_143, true);
								if (UNK_0xA45992A6CE82FB43(iLocal_118) < 0.732f)
								{
									if (!UNK_0xD59B17D2DFF98E26(bLocal_155))
									{
										UNK_0x46CB381A452EF99D(bLocal_141, 0);
										UNK_0x46CB381A452EF99D(bLocal_143, 0);
										if (!UNK_0xEB6A8945D1AC98A1(bLocal_142) && UNK_0xDF1306B443CD3D15(bLocal_155, 0))
										{
											UNK_0xD1F0F33C375B8446(bLocal_142, bLocal_155, 30, 6000);
										}
										UNK_0xE121AE1BBF90E186(bLocal_140, true);
										UNK_0x4E885A246A9D983A(bLocal_140, 106, true);
										UNK_0x4E885A246A9D983A(bLocal_141, 106, true);
										UNK_0x4E885A246A9D983A(bLocal_143, 106, true);
									}
									if (UNK_0x437347B10A200C4B(bLocal_155, 0))
									{
										func_162();
										if (UNK_0xC844350D5D58C99A(bLocal_140))
										{
											UNK_0xD458AC1C1D29C3B4(bLocal_140, false, false);
										}
										if (UNK_0xC844350D5D58C99A(bLocal_143))
										{
											UNK_0xD458AC1C1D29C3B4(bLocal_143, false, false);
										}
										if (UNK_0xC844350D5D58C99A(bLocal_141))
										{
											UNK_0xD458AC1C1D29C3B4(bLocal_141, false, false);
										}
										if (UNK_0xC844350D5D58C99A(bLocal_142))
										{
											UNK_0xD458AC1C1D29C3B4(bLocal_142, false, false);
										}
										UNK_0x15AFB6CBDE990FB6(bLocal_155, 1, false);
									}
								}
								else
								{
									UNK_0x46CB381A452EF99D(bLocal_141, 1);
									UNK_0x46CB381A452EF99D(bLocal_143, 1);
									UNK_0x4E885A246A9D983A(bLocal_140, 106, false);
									UNK_0x4E885A246A9D983A(bLocal_141, 106, false);
									UNK_0x4E885A246A9D983A(bLocal_143, 106, false);
									UNK_0xE121AE1BBF90E186(bLocal_141, false);
									UNK_0xE121AE1BBF90E186(bLocal_143, false);
									func_162();
									func_161();
									iLocal_439 = 3;
									SYSTEM::SETTIMERB(0);
								}
							}
							else
							{
								func_156();
								func_163();
								if (func_204())
								{
									func_157();
								}
							}
						}
					}
					break;
				case 3:
					break;
			}
		}
	}
}

bool func_204()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 10f, 10f, 3f };
	vVar3 = { -10f, -10f, -3f };
	if (UNK_0xD3DCEC81D13AAFB1(UNK_0x64430C979F516F7A(bLocal_140, 31086, 0f, 0f, 0f), 15f, true))
	{
		return true;
	}
	vVar0 = { vVar0 + UNK_0x64430C979F516F7A(bLocal_140, 31086, 0f, 0f, 0f) };
	vVar3 = { vVar3 + UNK_0x64430C979F516F7A(bLocal_140, 31086, 0f, 0f, 0f) };
	if (((UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_SMOKEGRENADE"), 1) || UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_GRENADE"), 1)) || UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("WEAPON_STICKYBOMB"), 1)) || UNK_0xBBE430A566D01EF3(vVar3, vVar0, joaat("VEHICLE_WEAPON_TANK"), 1))
	{
		return true;
	}
	if (UNK_0x4E861BC5B1EDA7BD(bLocal_140))
	{
		return true;
	}
	return false;
}

int func_205()
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { 75f, 75f, 20f };
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_140))
	{
		if (UNK_0x12DE711B1C681E9E(bLocal_140, UNK_0x16F2683693E537C9(), vVar1, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_206()
{
}

bool func_207()
{
	if (!func_172(5))
	{
		return true;
	}
	if (func_184())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_188())
		{
			return false;
		}
	}
	if (func_178(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_208()
{
	if ((Global_111627 == func_42() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_209(bool bParam0)
{
	UNK_0x536F1BE96C726C4B(vLocal_171, 15f, 1, 0, 0, false);
	UNK_0x536F1BE96C726C4B(-1133.993f, 558.3267f, 107.351f, 5f, 1, 0, 0, false);
	if (bParam0)
	{
		iLocal_414 = UNK_0x7D6CA5F52B3748BF(Vector(104.0503f, 560.4913f, -1126.376f) - Vector(5.75f, 19.25f, 39.75f), Vector(104.0503f, 560.4913f, -1126.376f) + Vector(5.75f, 19.25f, 39.75f), 0, 1, 1, 1);
		iLocal_413 = UNK_0x7D6CA5F52B3748BF(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), 0, 1, 1, 1);
	}
	else
	{
		UNK_0x2952D66A502EA873(iLocal_414, 0);
		UNK_0x2952D66A502EA873(iLocal_413, 0);
	}
	UNK_0xE342F209E49C5314(Vector(107.351f, 558.3267f, -1133.993f) + Vector(7.25f, 25.25f, 25f), Vector(107.351f, 558.3267f, -1133.993f) - Vector(7.25f, 25.25f, 25f), !bParam0, 1);
	UNK_0xE342F209E49C5314(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), !bParam0, 1);
}

void func_210()
{
}

void func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
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
		iParam3 = func_42();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_254())
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
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_188())
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
		if (func_184())
		{
			return false;
		}
		if (func_253())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_35(func_165()))
		{
			if (func_178(100f, 1) != -1)
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
		if (!func_252(iParam3))
		{
			return false;
		}
		if (func_35(func_165()))
		{
			if (func_251(func_165()) == 4 || func_251(func_165()) == 5)
			{
				return false;
			}
		}
		if (func_35(func_165()))
		{
			if (!func_250(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_249(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_248())
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
		if (!func_239(4))
		{
			return false;
		}
		if (!func_172(5))
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
		if (func_252(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_35(func_165()))
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
						if (!func_145(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_165() != iVar4)
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

bool func_239(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_165();
				if (!func_35(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_245()) || func_244()) || func_243()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_247()) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_247() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_80(8, -1)) || func_242()) || func_241()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_80(8, -1) || func_245()) || func_244()) || func_241()) || func_240())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_247()) || Global_30770) || func_246()) || func_80(8, -1)) || func_244()) || func_243()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_247()) || func_244()) || Global_110685) || Global_30770) || func_246()) || Global_42596) || func_80(8, -1)) || func_243()) || func_241()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_241()) || func_245()) || func_244()) || func_242())
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

bool func_240()
{
	return Global_98783.f_1;
}

bool func_241()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_242()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_243()
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

bool func_244()
{
	return Global_98796.f_346 > 0;
}

bool func_245()
{
	return Global_98796.f_345 > 0;
}

bool func_246()
{
	return Global_1312877;
}

bool func_247()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_248()
{
	func_78();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_249(bool bParam0)
{
	return func_229(func_230(), bParam0);
}

bool func_250(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_165();
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

int func_251(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_252(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_254())
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

bool func_253()
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

bool func_254()
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

void func_255()
{
	SYSTEM::WAIT(0);
	func_268(0);
	if (Global_31009)
	{
		UNK_0xC92DB9682A650680("AC_STOP");
	}
	func_267();
	func_115(&uLocal_341, 0, 0);
	if (func_208())
	{
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x2952D66A502EA873(iLocal_162, 0);
	}
	else
	{
		func_266(&Global_30827);
	}
	UNK_0x34D79252800B23FF(5);
	UNK_0x51B096AAC60548C1(1f);
	if ((UNK_0xC844350D5D58C99A(bLocal_140) && !UNK_0xEB6A8945D1AC98A1(bLocal_140)) && UNK_0xBFDE4EE64C4BF2D6(bLocal_140, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
	{
		UNK_0x0A94A109271BE75A(bLocal_140);
	}
	if (UNK_0xDF1306B443CD3D15(bLocal_155, 0))
	{
		UNK_0x71EDC33E5A423750(bLocal_155, 1);
	}
	func_209(0);
	func_256(-1);
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", true);
	UNK_0x10FAF14A60A0DBE1();
}

void func_256(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_208())
	{
		func_259(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_258(30000);
		StringCopy(&cVar0, func_257(Global_111627, 1), 64);
		if (func_41(Global_111627) > 0)
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
	func_266(&Global_30827);
	Global_111628 = 0;
	func_213(-1);
}

char* func_257(int iParam0, bool bParam1)
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

void func_258(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_259(int iParam0)
{
	func_260(iParam0, 0, func_265(iParam0));
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_230();
	func_263(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_262(iParam0, &bVar0);
	Var1 = { func_261(&bVar0) };
}

struct<16> func_261(bool bParam0)
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

void func_262(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_263(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_264(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_264(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_236(bParam0, iParam1);
	func_235(bParam0, iParam2);
	func_234(bParam0, iParam3);
	func_232(bParam0, bParam5);
	func_233(bParam0, iParam4);
	func_231(bParam0, iParam6);
}

int func_265(int iParam0)
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

void func_266(var uParam0)
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

void func_267()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_268(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_195(iVar0, bParam0);
		iVar0++;
	}
}

