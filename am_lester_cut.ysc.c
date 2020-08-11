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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	float fLocal_60 = 0f;
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
	struct<4> Local_73 = { 0, 0, 0, 0 } ;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 32;
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
	var uLocal_116 = 32;
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
	int iLocal_152 = 0;
	vector3 vLocal_153[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_250 = 0;
	bool bLocal_251 = false;
	bool bLocal_252 = false;
	bool bLocal_253 = false;
	int iLocal_254 = 0;
	var uLocal_255 = 16;
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
	bool bLocal_420 = false;
	bool bLocal_421 = false;
	bool bLocal_422 = false;
	bool bLocal_423 = false;
	int iLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	int iLocal_427 = 0;
	bool bLocal_428 = false;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	bLocal_421 = true;
	bLocal_423 = "MP_INTRO_MCS_13";
	func_232(ScriptParam_0);
	while (true)
	{
		func_231();
		if (func_221())
		{
			func_217();
		}
		func_212(&Global_1661963);
		switch (func_211(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_210() == 2)
				{
					vLocal_153[UNK_0x57270EE11514DC67() /*3*/] = 2;
				}
				else if (func_210() == 6)
				{
					vLocal_153[UNK_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			case 2:
				if (func_210() == 2)
				{
					if (!func_209(UNK_0xD803B885F5E47A62()))
					{
						func_19();
					}
					else if (UNK_0xE4EDC4B0E92C078B(Global_1661963))
					{
						func_12();
						UNK_0x661342B9651D16E2(Global_1661963, false);
						UNK_0x142CC44DB769B57E(&Global_1661963);
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 3))
						{
							UNK_0x5C8D148FC238F38A();
						}
						UNK_0x5D96D8530B3D0904(&(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2), false);
					}
					if (func_8(UNK_0xD803B885F5E47A62()))
					{
						vLocal_153[UNK_0x57270EE11514DC67() /*3*/] = 3;
						Global_2537071.f_1717 = 0;
					}
				}
				else if (func_210() == 6)
				{
					vLocal_153[UNK_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			case 5:
				func_6(&(Local_73.f_3));
				if (func_5(&(Local_73.f_3)))
				{
					vLocal_153[UNK_0x57270EE11514DC67() /*3*/] = 6;
				}
				break;
			case 3:
				vLocal_153[UNK_0x57270EE11514DC67() /*3*/] = 6;
			case 6:
				func_217();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_210())
			{
				case 0:
					Local_73.f_2 = -1;
					Local_73 = 2;
					break;
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						Local_73 = 6;
					}
					break;
				case 6:
					break;
			}
		}
	}
}

bool func_1()
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_73.f_1, false))
	{
		return true;
	}
	return false;
}

void func_2()
{
	if (UNK_0xBFF81ED3B99522C7())
	{
	}
}

void func_3()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0xBFF81ED3B99522C7())
	{
		if (iLocal_152 == 0)
		{
			UNK_0x0674E58A79778E99(&bLocal_422, false);
			UNK_0x5D96D8530B3D0904(&bLocal_422, true);
			if (Local_73.f_2 != -1)
			{
				if (!UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(Local_73.f_2)))
				{
					Local_73.f_2 = -1;
				}
			}
		}
		bVar0 = iLocal_152;
		if (UNK_0x81A93C8315C28F58(bVar0))
		{
			bVar1 = UNK_0x4B2BFE4A3BC248ED(bVar0);
			if (!UNK_0xEAE0D21A50E6C7F4(vLocal_153[iLocal_152 /*3*/].f_2, false))
			{
				UNK_0x0674E58A79778E99(&bLocal_422, true);
			}
			if (func_4(bVar1, 0, 1))
			{
				if (UNK_0xEAE0D21A50E6C7F4(vLocal_153[iLocal_152 /*3*/].f_2, true))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_422, 12);
					if (Local_73.f_2 == -1)
					{
						if (Local_73.f_2 != iLocal_152)
						{
							Local_73.f_2 = iLocal_152;
						}
					}
				}
				else if (Local_73.f_2 == iLocal_152)
				{
					Local_73.f_2 = -1;
				}
			}
		}
		iLocal_152++;
		if (iLocal_152 == 32)
		{
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, true))
			{
				UNK_0x5D96D8530B3D0904(&(Local_73.f_1), false);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 12))
			{
				if (Local_73.f_2 != -1)
				{
					Local_73.f_2 = -1;
				}
			}
			UNK_0x5D96D8530B3D0904(&bLocal_422, false);
			iLocal_152 = 0;
		}
	}
}

bool func_4(bool bParam0, bool bParam1, bool bParam2)
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

bool func_5(var uParam0)
{
	if (uParam0->f_1)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (UNK_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = UNK_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = UNK_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_8(int iParam0)
{
	if (func_11(iParam0))
	{
		return true;
	}
	if (func_9(iParam0))
	{
		return true;
	}
	return false;
}

bool func_9(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return false;
}

bool func_10(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

bool func_11(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, false);
	}
	return false;
}

void func_12()
{
	if (!func_18())
	{
		return;
	}
	if (!UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_13();
}

void func_13()
{
	func_15();
	func_14(0);
}

void func_14(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = UNK_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_15()
{
	if (!func_17())
	{
	}
	if (func_18())
	{
		UNK_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_16();
		UNK_0x35F2C6537D10DAEB();
	}
}

void func_16()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		case 0:
			return;
		case 1:
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		case 2:
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_52);
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		case 3:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 4:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 5:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 6:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 7:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 8:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 9:
			UNK_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		case 10:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		case 12:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 13:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_57);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 11:
			UNK_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		case 14:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 15:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_57);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 17:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		case 16:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 19:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 18:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_48));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		default:
			break;
	}
}

bool func_17()
{
	if (!func_18())
	{
		return false;
	}
	UNK_0x18B60B994182620C(&(Global_1312585.f_12));
	func_16();
	return UNK_0xB165082A56EE6E7F();
}

bool func_18()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

void func_19()
{
	bool bVar0;

	switch (vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 2))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 5))
				{
					if (!func_208())
					{
						if (!func_207())
						{
							if (!func_205())
							{
								if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
								{
									if (!func_204(0))
									{
										if (!func_201(UNK_0xD803B885F5E47A62(), 1, 0))
										{
											if (!func_200())
											{
												if (func_199() == 0)
												{
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
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 5))
			{
				if (((((func_201(UNK_0xD803B885F5E47A62(), 1, 0) || func_200()) || func_199() > 0) || func_198()) || func_196()) || func_195())
				{
					UNK_0x5D96D8530B3D0904(&bLocal_422, 5);
					func_12();
					if (UNK_0xE4EDC4B0E92C078B(Global_1661963))
					{
						UNK_0x661342B9651D16E2(Global_1661963, false);
						UNK_0x142CC44DB769B57E(&Global_1661963);
					}
				}
				else
				{
					if (UNK_0xE4EDC4B0E92C078B(Global_1661963))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 14))
						{
							if (Local_73.f_2 != -1)
							{
								if (Local_73.f_2 != UNK_0x57270EE11514DC67())
								{
									UNK_0x61755AC17D8F538E(Global_1661963, 39);
									UNK_0x516E63E474722206(Global_1661963, 0.7f);
									UNK_0x5D96D8530B3D0904(&bLocal_422, 14);
								}
							}
						}
						else if (Local_73.f_2 == -1 || Local_73.f_2 == UNK_0x57270EE11514DC67())
						{
							UNK_0x61755AC17D8F538E(Global_1661963, false);
							UNK_0x516E63E474722206(Global_1661963, 1f);
							UNK_0x0674E58A79778E99(&bLocal_422, 14);
						}
					}
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 8))
					{
						UNK_0x0674E58A79778E99(&bLocal_422, 8);
					}
					if (func_194())
					{
						if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
						{
							if ((bLocal_420 && UNK_0x62A1F4500E8F07E0()) || !bLocal_420)
							{
								if (!UNK_0xEAE0D21A50E6C7F4(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2, true))
								{
									UNK_0x5D96D8530B3D0904(&(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2), true);
								}
								if (UNK_0xEAE0D21A50E6C7F4(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2, true))
								{
									if (Local_73.f_2 == UNK_0x57270EE11514DC67())
									{
										func_12();
										if (UNK_0xE4EDC4B0E92C078B(Global_1661963))
										{
											UNK_0x661342B9651D16E2(Global_1661963, false);
											UNK_0x142CC44DB769B57E(&Global_1661963);
										}
										UNK_0xA37A90C62806D848(1);
										func_193(12, 1);
										func_191();
										UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 1);
										UNK_0x5D96D8530B3D0904(&bLocal_422, 25);
										UNK_0x536F1BE96C726C4B(1274.854f, -1721.154f, 53.6808f, 2f, 1, 0, 0, true);
										if (bLocal_421)
										{
											func_190();
											iLocal_430 = UNK_0xB01F55A0FD1CFD49("SECURITY_CAM");
										}
										vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_1 = 1;
									}
									else if (Local_73.f_2 != -1)
									{
										if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 13))
										{
											if (func_184(1, 1, 1, 1))
											{
												func_183("FM_LCUT_LRB", -1);
												UNK_0x5D96D8530B3D0904(&bLocal_422, 13);
											}
										}
									}
								}
							}
						}
						else if (!UNK_0xFEBC1E4EC9E001F0())
						{
							if (!func_182("FM_LCUT_LCP"))
							{
								func_183("FM_LCUT_LCP", -1);
							}
						}
					}
					else
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 9))
						{
							if (func_184(0, 1, 1, 1))
							{
								if (!func_198())
								{
									func_183("FM_LCUT_LBLP", -1);
									if (!UNK_0xE4EDC4B0E92C078B(Global_1661963))
									{
										Global_1661963 = UNK_0x6CC513A908911CF0(Global_1661964);
										UNK_0xBC8E0A7390523199(Global_1661963, 77);
										UNK_0xF412DD40DE84CE72(Global_1661963, 1);
										UNK_0x0EC848EFF66DF45A(Global_1661963, 7000);
									}
									UNK_0x5D96D8530B3D0904(&bLocal_422, 2);
									UNK_0x5D96D8530B3D0904(&bLocal_422, 9);
								}
							}
						}
						if (UNK_0xEAE0D21A50E6C7F4(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2, true))
						{
							UNK_0x0674E58A79778E99(&(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2), true);
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 13))
						{
							UNK_0x0674E58A79778E99(&bLocal_422, 13);
						}
					}
				}
			}
			else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
				{
					if (UNK_0x0F1CCD77290EE12F())
					{
						if ((((!func_201(UNK_0xD803B885F5E47A62(), 1, 0) && !func_200()) && func_199() == 0) && !func_198()) && !func_196())
						{
							if (!func_181(&uLocal_425))
							{
								func_7(&uLocal_425, 0, 0);
							}
							else if (func_180(&uLocal_425, 10, 0))
							{
								UNK_0x0674E58A79778E99(&bLocal_422, 5);
								UNK_0x0674E58A79778E99(&bLocal_422, 2);
								UNK_0x0674E58A79778E99(&bLocal_422, 3);
								UNK_0x0674E58A79778E99(&bLocal_422, 8);
								func_179(&uLocal_425);
								if (!UNK_0xE4EDC4B0E92C078B(Global_1661963))
								{
									Global_1661963 = UNK_0x6CC513A908911CF0(Global_1661964);
									UNK_0xBC8E0A7390523199(Global_1661963, 77);
								}
							}
						}
					}
				}
			}
			if (bLocal_420)
			{
			}
			break;
		case 1:
			if (bLocal_420)
			{
				if (func_178())
				{
					vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_1 = 2;
				}
			}
			else if (func_138())
			{
				vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_1 = 2;
			}
			break;
		case 2:
			if (func_83())
			{
				vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_1 = 3;
			}
			break;
		case 3:
			if (!UNK_0xEAE0D21A50E6C7F4(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2, false))
			{
				UNK_0x5D96D8530B3D0904(&(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2), false);
			}
			break;
	}
	if (func_82())
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_1661963))
		{
			UNK_0x142CC44DB769B57E(&Global_1661963);
		}
		func_12();
		bVar0 = Global_1388048[func_81(-1)];
		UNK_0x5D96D8530B3D0904(&bVar0, 2);
		UNK_0x5D96D8530B3D0904(&(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2), false);
		func_80(1303, bVar0, -1, 1);
		func_193(12, 0);
		if (bLocal_420)
		{
			UNK_0x5C8D148FC238F38A();
		}
		func_71();
		func_20(1);
	}
}

void func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1312448)
	{
		if (!func_70())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574637[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_67(UNK_0xD803B885F5E47A62(), bParam0);
	iVar2 = func_65(iVar1, bParam0);
	if (!func_64(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574637[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574637[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 255)
	{
		iVar3 = func_63(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_61(iVar4))
			{
				func_53(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_47(func_48(59, 0, 0), 0);
	func_42(func_48(135, 0, 0), 1);
	func_40(func_48(22, 0, 0), func_48(73, 0, 0));
	if (func_70())
	{
		if (func_39(77, -1))
		{
			func_38(1);
			func_37(1);
		}
	}
	if (func_36() || func_35())
	{
		func_33(77, 1, -1, 1);
		if (UNK_0x8CD06866876216F2())
		{
			func_21(28, 1, 0);
			func_21(29, 1, 0);
			func_21(30, 1, 0);
			func_21(31, 1, 0);
			func_21(32, 1, 0);
			func_21(33, 1, 0);
			func_21(34, 1, 0);
			func_21(35, 1, 0);
			func_21(36, 1, 0);
			func_21(37, 1, 0);
			func_21(38, 1, 0);
		}
	}
	if (func_48(21, 0, 0))
	{
		UNK_0x0F30FBDF741A7E3E(0);
	}
	Global_968399 = 0;
}

void func_21(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_32(iParam0, 0, 0))
		{
			if (bParam2 && Global_98796.f_18[iParam0])
			{
				if (func_31(iParam0) == 3 && !func_30(iParam0))
				{
					func_29(iParam0);
					func_28(iParam0, 0, 0);
					func_23(iParam0, 1, 0);
					func_22(iParam0);
				}
				else
				{
					func_28(iParam0, 1, 0);
					func_22(iParam0);
				}
			}
			else
			{
				func_28(iParam0, 0, 0);
				func_23(iParam0, 1, 0);
				func_22(iParam0);
			}
		}
		else
		{
			func_23(iParam0, 1, 0);
			func_22(iParam0);
		}
	}
	else if (func_32(iParam0, 0, 0))
	{
		func_23(iParam0, 0, 0);
		func_23(iParam0, 1, 0);
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_23(int iParam0, bool bParam1, bool bParam2)
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
		if (func_27() == 0)
		{
			bVar0 = func_25(func_26(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_24(func_26(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_24(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_81(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_25(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_81(bParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(int iParam0)
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

int func_27()
{
	return Global_30768;
}

void func_28(int iParam0, bool bParam1, bool bParam2)
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
		if (func_27() == 0)
		{
			bVar0 = func_25(func_26(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_24(func_26(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_29(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_28(iParam0, 10, 1);
		func_28(iParam0, 19, 1);
	}
}

bool func_30(int iParam0)
{
	return func_32(iParam0, 5, 1);
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
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
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

bool func_32(int iParam0, bool bParam1, bool bParam2)
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
		if (func_27() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_25(func_26(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_33(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (func_34())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_81(bParam2)];
		if (iVar0 != 0)
		{
			UNK_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

bool func_34()
{
	return true;
	return false;
}

bool func_35()
{
	return Global_1312865;
}

bool func_36()
{
	return Global_1312867;
}

void func_37(bool bParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	func_21(28, bParam0, 0);
	func_21(30, bParam0, 0);
	func_21(31, bParam0, 0);
	func_21(33, bParam0, 0);
	func_21(34, bParam0, 0);
	func_21(38, bParam0, 0);
}

void func_38(bool bParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	func_21(29, bParam0, 0);
	func_21(32, bParam0, 0);
	func_21(36, bParam0, 0);
	func_21(35, bParam0, 0);
	func_21(37, bParam0, 0);
}

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_81(bParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_40(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_21(0, bParam0, 1);
	func_21(1, bParam0, 1);
	func_21(2, bParam0, 1);
	func_21(3, bParam0, 1);
	func_21(4, bParam0, 1);
	func_21(5, bParam0, 1);
	func_21(6, bParam0, 1);
	func_21(7, bParam0, bVar0);
	func_21(8, bParam0, 1);
	func_21(9, bParam0, 1);
	func_21(10, bParam0, 1);
	func_21(11, bParam0, 1);
	func_21(12, bParam0, bVar0);
	func_21(13, bParam0, 1);
	func_21(21, bParam0, 1);
	func_21(14, bParam0, 1);
	func_21(15, bParam0, 1);
	func_21(16, bParam0, 1);
	func_21(17, bParam0, 1);
	func_21(18, bParam0, 1);
	func_21(19, bParam0, 1);
	func_21(20, bParam0, 1);
	func_21(22, bParam0, 1);
	func_21(23, bParam0, 1);
	func_21(24, bParam0, 1);
	func_21(25, bParam0, 1);
	func_21(26, bParam0, 1);
	func_21(27, bParam0, 1);
	func_41(1, !bParam1);
	if (!bVar0)
	{
		func_29(12);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_98796.f_9[iParam0] = 1;
	}
	else
	{
		Global_98796.f_9[iParam0] = 0;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = func_46(0);
	if (Global_262145.f_63 == 1 && func_48(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_21(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(44))
		{
			func_29(44);
		}
	}
	if (bParam0)
	{
		if (func_43(0) > 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1735), 10);
		}
	}
}

int func_43(int iParam0)
{
	int iVar0;

	if (Global_1671743[iParam0 /*8*/] == -1)
	{
		iVar0 = func_25(func_45(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_44(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0 /*8*/] = iVar0;
	}
	return Global_1671743[iParam0 /*8*/];
}

void func_44(int iParam0, bool bParam1)
{
	Global_1671743[iParam0 /*8*/] = bParam1;
	func_24(func_45(iParam0), bParam1, -1, 1, 0);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9978;
		default:
			break;
	}
	return 9978;
}

bool func_46(bool bParam0)
{
	bool bVar0;

	if (Global_1312448)
	{
		return true;
	}
	if (func_36())
	{
		return true;
	}
	if (func_35())
	{
		return true;
	}
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1726, 26))
		{
			bVar0 = func_25(1191, -1, 0);
			if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 23))
			{
				return false;
			}
		}
	}
	return func_39(122, -1);
}

void func_47(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = func_46(0);
	func_21(39, bParam0, 0);
	func_21(40, bParam0, 0);
	func_21(41, bParam0, 0);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_21(43, bParam0, 0);
		func_21(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(39))
		{
			func_29(39);
		}
		if (!func_30(40))
		{
			func_29(40);
		}
		if (!func_30(41))
		{
			func_29(41);
		}
		if (!func_30(42))
		{
			func_29(42);
		}
		if (!func_30(43))
		{
			func_29(43);
		}
	}
}

bool func_48(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return true;
		}
		if (iParam0 == 74)
		{
			return true;
		}
		if (func_50(UNK_0xD803B885F5E47A62(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return true;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return true;
		}
	}
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return true;
		}
	}
	if (func_36() || func_35())
	{
		return true;
	}
	bVar0 = iParam0;
	iVar1 = (bVar0 / 32);
	bVar0 = (bVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_49())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (bParam2)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1574637[iVar1], bVar0);
}

bool func_49()
{
	bool bVar0;

	if (Global_1312448)
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 23))
	{
		return true;
	}
	if (func_36())
	{
		return true;
	}
	if (func_35())
	{
		return true;
	}
	bVar0 = Global_1388048[func_81(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, 7))
	{
		UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 23);
		return true;
	}
	return false;
}

bool func_50(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_70())
	{
		return false;
	}
	if (func_52())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	iVar0 = func_51(iParam1);
	bVar1 = iVar0;
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_730, bVar1);
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		case 19:
			return 1;
		case 12:
			return 2;
		case 31:
			return 3;
		case 20:
			return 4;
		case 18:
			return 5;
		case 2:
			return 6;
		case 76:
			return 7;
		case 22:
			return 8;
		case 53:
			return 9;
		case 34:
			return 10;
		case 152:
			return 11;
		case 85:
			return 12;
		case 84:
			return 13;
		case 0:
			return 14;
		case 1:
			return 15;
		case 153:
			return 16;
		case 151:
			return 17;
		case 14:
			return 18;
		case 15:
			return 19;
		case 24:
			return 20;
		case 30:
			return 21;
		case 46:
			return 22;
		case 47:
			return 23;
		case 54:
			return 24;
		case 51:
			return 25;
		case 60:
			return 26;
		case 62:
			return 27;
		case 66:
			return 28;
		case 69:
			return 29;
		case 154:
			return 30;
		case 82:
			return 31;
		case 157:
			return 32;
		default:
			break;
	}
	return 1;
}

bool func_52()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146, 3);
}

void func_53(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_60(-1))
			{
				if (!func_70())
				{
					return;
				}
			}
			if (!func_60(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_59() && !func_58())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_57())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_60(-1))
				{
					if (!func_54())
					{
						return;
					}
				}
			}
		}
		bVar0 = iParam0;
		iVar1 = (bVar0 / 32);
		bVar0 = (bVar0 % 32);
		UNK_0x5D96D8530B3D0904(&(Global_1574637[iVar1]), bVar0);
	}
}

bool func_54()
{
	bool bVar0;

	if (func_209(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	bVar0 = Global_1388048[func_81(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
	{
		func_55(1);
		return true;
	}
	return false;
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 25))
		{
			func_56(UNK_0xD803B885F5E47A62(), 12);
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 25);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 25))
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142), 25);
	}
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_51(iParam1);
	bVar1 = iVar0;
	UNK_0x5D96D8530B3D0904(&(Global_1590535[iParam0 /*876*/].f_730), bVar1);
}

bool func_57()
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
	{
		return true;
	}
	bVar0 = Global_1388048[func_81(-1)];
	if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 6);
		}
		return true;
	}
	if (func_36())
	{
		return true;
	}
	if (func_35())
	{
		return true;
	}
	return false;
}

bool func_58()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_146, 7);
}

bool func_59()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_36())
	{
		return true;
	}
	if (func_35())
	{
		return true;
	}
	return func_39(121, -1);
}

bool func_60(bool bParam0)
{
	return func_39(123, bParam0);
}

bool func_61(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_36())
	{
		return true;
	}
	if (func_35())
	{
		return true;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			bVar0 = func_25(func_62(iParam0), -1, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, bVar1))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

int func_62(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		case 1:
			return 1201;
		case 2:
			return 1202;
		case 3:
			return 1203;
		case 4:
			return 1204;
		case 5:
			return 1206;
		case 6:
			return 3815;
		case 7:
			return 4018;
		case 8:
			return 5472;
		default:
			break;
	}
	return 1200;
}

int func_63(int iParam0)
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		case 21:
			return 2;
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_60(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		case 97:
		case 107:
			return 7;
		case 4:
			return 8;
		case 19:
			return 8;
		case 29:
			return 10;
		case 8:
			return 11;
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		case 89:
			return 13;
		case 31:
			return 14;
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		case 109:
		case 88:
			return 16;
		case 74:
		case 100:
			return 17;
		case 6:
			return 18;
		case 20:
			return 19;
		case 62:
		case 108:
		case 130:
			return 20;
		case 65:
		case 93:
			return 21;
		case 63:
		case 104:
			return 25;
		case 77:
		case 106:
			return 30;
		case 81:
		case 98:
			return 35;
		case 75:
		case 95:
			return 40;
		case 105:
			return 45;
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_64(bool bParam0)
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_36())
	{
		return true;
	}
	if (func_35())
	{
		return true;
	}
	return func_39(119, bParam0);
}

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(iParam0, 0);
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_67(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_68(bParam0);
}

int func_68(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_81(-1)];
			}
			else if (func_69(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_81(-1)];
	}
	return 0;
}

bool func_69(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2439138.f_1, bParam0);
	}
	return true;
}

bool func_70()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_36())
	{
		return true;
	}
	if (func_35())
	{
		return true;
	}
	return func_39(120, -1);
}

void func_71()
{
	if (!func_79(1, -1))
	{
		func_77(1, -1);
	}
	if (func_198() && func_27() == 0)
	{
	}
	else
	{
		UNK_0x45019D71A0DF8B62(0);
	}
	if (func_76(1))
	{
		UNK_0xED41266DE64A57FD(1);
	}
	else
	{
		UNK_0xED41266DE64A57FD(0);
	}
	Global_2450632.f_643 = 0;
	if (func_72())
	{
		if (!func_39(133, -1))
		{
			func_33(133, 1, -1, 1);
		}
	}
}

bool func_72()
{
	if (func_74() && func_73(0))
	{
		return true;
	}
	return false;
}

var func_73(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_74()
{
	return func_73(func_75() + 1);
}

int func_75()
{
	return Global_1312745;
}

bool func_76(int iParam0)
{
	return Global_1662155.f_16[iParam0 /*44*/].f_3;
}

void func_77(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_75();
	}
	Global_1387909 = 0;
	if (UNK_0xE0DC536BD2AC0301() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			UNK_0xD5F10CECBB7D51B6(false, bParam1);
			iVar1 = func_78(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			break;
		default:
			iVar1 = func_78(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			if (!UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0))
			{
				UNK_0x5D96D8530B3D0904(&bVar0, bParam0);
				UNK_0xD5F10CECBB7D51B6(bVar0, bParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_33(120, 0, bParam1, 1);
			func_33(124, 0, bParam1, 1);
			func_33(115, 0, bParam1, 1);
			func_33(119, 0, bParam1, 1);
			func_33(121, 0, bParam1, 1);
			func_33(122, 0, bParam1, 1);
			func_33(125, 0, bParam1, 1);
			func_24(1303, 0, bParam1, 1, 0);
			func_24(7233, 0, bParam1, 1, 0);
			break;
	}
}

int func_78(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_75();
	}
	switch (bParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		case 1:
			iVar0 = 915;
			break;
		case 2:
			iVar0 = 916;
			break;
		case 3:
			iVar0 = 917;
			break;
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_79(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_75();
	}
	iVar0 = func_78(bParam1);
	bVar1 = UNK_0x0A4C9A3D51EAE31F(iVar0);
	return UNK_0xEAE0D21A50E6C7F4(bVar1, bParam0);
}

void func_80(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_81(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_81(bParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_81(bParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_81(bParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_81(bParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_81(bParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_81(bParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_81(bParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_81(bParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_81(bParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_81(bParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_81(bParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_81(bParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_81(bParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_81(bParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_81(bParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_81(bParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_81(bParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_81(bParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_81(bParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_81(bParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_81(bParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_81(bParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_81(bParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_81(bParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_81(bParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_81(bParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_81(bParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_81(bParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_81(bParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_81(bParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_81(bParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_81(bParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_81(bParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_81(bParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_81(bParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_81(bParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_81(bParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_81(bParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_81(bParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_81(bParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_81(bParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_81(bParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_81(bParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_81(bParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_81(bParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_81(bParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_81(bParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_81(bParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_81(bParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_81(bParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_81(bParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_81(bParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_81(bParam2)] = bParam1;
			break;
		default:
			break;
	}
}

bool func_81(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;
	if (bVar0 == -1)
	{
		iVar1 = func_75();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			bVar0 = iVar1;
		}
		else
		{
			bVar0 = false;
			Global_2548146 = 1;
		}
	}
	return bVar0;
}

bool func_82()
{
	if (UNK_0xEAE0D21A50E6C7F4(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2, false))
	{
		return true;
	}
	return false;
}

bool func_83()
{
	switch (iLocal_250)
	{
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 18))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_251))
				{
					iLocal_424 = UNK_0x5C3B41825F6AC5A0(bLocal_251);
					UNK_0x321E019A46034F39(iLocal_424, true);
					UNK_0xDC5B2F9D0CCE3A10(iLocal_424, "FM_LEST_BLP");
					func_132("FM_LEST_GTL", 0);
					UNK_0x5D96D8530B3D0904(&bLocal_422, 18);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 20))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_251))
					{
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1272.747f, -1715.223f, 53.45897f, 1273.732f, -1717.427f, 55.70897f, 2f, 0, true, 0))
						{
							iLocal_254 = UNK_0xE9744DB7B8CA6965(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
							UNK_0x915804B434753CBD(bLocal_251, iLocal_254, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1148846080, 0);
							UNK_0xE14EC663EED44AD5(bLocal_253, iLocal_254, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1148846080 /* Float: 1000f */);
							UNK_0x5D96D8530B3D0904(&bLocal_422, 20);
						}
					}
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 3))
			{
				UNK_0xAE1670DD12E839C3(bLocal_423, 8);
				UNK_0x5D96D8530B3D0904(&bLocal_422, 3);
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 10))
			{
				if (UNK_0x75EECC9B0572F772())
				{
					UNK_0xCB667BE6562FEBD1("MP_1", 0, 1);
					UNK_0x5D96D8530B3D0904(&bLocal_422, 10);
				}
			}
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1275.095f, -1715.769f, 53.70897f, 1274.382f, -1714.219f, 56.02147f, 1.375f, 0, true, 0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 10))
					{
						iLocal_250++;
					}
				}
			}
			break;
		case 1:
			if (UNK_0x62A1F4500E8F07E0())
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == joaat("MP_F_FREEMODE_01"))
					{
						UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "MP_1", 0, false, 64);
					}
					else
					{
						UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "MP_1", 0, false, 64);
					}
				}
				func_131(1);
				UNK_0x4C902758BEA97C68(0);
				UNK_0x7F2C3F971FA7A9EA(0);
				func_122(UNK_0xD803B885F5E47A62(), 0, 32772, 0);
				func_118(0);
				iLocal_250++;
			}
			break;
		case 2:
			if (UNK_0x22A8E52414415B76())
			{
				func_114();
				iLocal_250++;
			}
			break;
		case 3:
			if (UNK_0x22A8E52414415B76())
			{
				func_113();
			}
			else
			{
				iLocal_250++;
			}
			break;
		case 4:
			if (bLocal_428)
			{
				if (!UNK_0x39B7A3CCD2467CAB())
				{
					if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
					{
						UNK_0x82E51BCA72537B6C(500);
					}
					bLocal_428 = false;
				}
			}
			else if (UNK_0x154B5473FBFD0156())
			{
				func_86(1, 1, 0, 1);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				UNK_0x7F2C3F971FA7A9EA(1);
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 25))
				{
					UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 0);
				}
				if (iLocal_427 != 0)
				{
					UNK_0x25BB71BA267FE042(iLocal_427);
				}
				UNK_0x0674E58A79778E99(&(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2), true);
				func_84();
				iLocal_250++;
			}
			break;
		case 5:
			return true;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 11))
	{
		if (UNK_0x3148AE92ED70DC30("MP_1", 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 228.4235f);
				UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), false, 0);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x5D96D8530B3D0904(&bLocal_422, 11);
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 26))
	{
		if (iLocal_250 > 2)
		{
			if (UNK_0xEABED1927EFB48CA(0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					UNK_0x5D96D8530B3D0904(&bLocal_422, 26);
				}
			}
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 19))
	{
		UNK_0x38C3A68D7861DCFD(0, 37, 1);
		UNK_0x38C3A68D7861DCFD(0, 14, 1);
		UNK_0x38C3A68D7861DCFD(0, 15, 1);
	}
	return false;
}

void func_84()
{
	int iVar0;

	iVar0 = func_85(53);
	Global_2414418[iVar0 /*83*/] = 53;
	StringCopy(&(Global_2414418[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414418[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414418[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_111();
	if (bParam0)
	{
		func_109(1);
		UNK_0xA37A90C62806D848(1);
	}
	UNK_0x790015DC92C918E2();
	func_106();
	UNK_0x4DC7B72197441408(0);
	func_102(0, 1, 1, 0, 0, bParam2);
	func_101();
	func_100(12, 0, -1);
	func_99(1);
	UNK_0x5413873D3F67BF93(false, -1);
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	func_98();
	UNK_0xBEF52C1D400C0A44(1);
	if (UNK_0x8CD06866876216F2())
	{
		if (bParam3)
		{
			if (UNK_0xF929B1A0A409FF93())
			{
				UNK_0xF601BB024C8F11A7(0, 0);
			}
		}
	}
	func_131(0);
	if (((((func_198() == 0 && func_97() == 0) && bParam1) && !func_95(UNK_0xD803B885F5E47A62())) && !UNK_0xEB880D98B5988D0C()) && func_93())
	{
		func_122(UNK_0xD803B885F5E47A62(), 1, 0, 0);
	}
	Global_2439138.f_3747 = 0;
	func_87();
}

void func_87()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x8CD06866876216F2() && func_181(&Global_2546022))
	{
		if (!func_180(&Global_2546022, 3500, 1) || UNK_0xFD59EF2472AF72AF(UNK_0xD803B885F5E47A62()))
		{
			if (!func_92())
			{
				if (UNK_0x757EF87A33649210())
				{
					func_91(&Global_2546022, 1, 0);
				}
				else if (!func_89(UNK_0xD803B885F5E47A62(), 0))
				{
					if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 1992968846) != 1 && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 1992968846) != 0)
					{
						UNK_0x946CEAB3EE0FE12A(1);
						UNK_0x0ADC5FFEF2329036(UNK_0xD803B885F5E47A62(), 1);
					}
					UNK_0x4FB9A846E72E2F23(UNK_0x16F2683693E537C9(), 255, false);
				}
			}
			else
			{
				func_91(&Global_2546022, 1, 0);
			}
		}
		else
		{
			if (UNK_0x8CD06866876216F2())
			{
				UNK_0x672BED15BAF1B335(UNK_0x16F2683693E537C9());
			}
			func_179(&Global_2546022);
		}
	}
	if (Global_2546026 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_2546026, bVar0))
			{
				bVar1 = UNK_0x117658E336116132(bVar0);
				if (func_4(bVar1, 1, 1))
				{
					func_88(bVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_88(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2546026, bParam0) && UNK_0x8CD06866876216F2())
	{
		if (!func_180(&(Global_2546027[bParam0 /*2*/]), 3500, 1) || UNK_0xFD59EF2472AF72AF(bParam0))
		{
			if (!func_92())
			{
				if (UNK_0x757EF87A33649210())
				{
					func_91(&(Global_2546027[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_89(bParam0, 0))
				{
					UNK_0x0ADC5FFEF2329036(bParam0, 1);
					if (!UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bParam0), 0))
					{
						UNK_0x4FB9A846E72E2F23(UNK_0x9539D44F3E4492F6(bParam0), 255, false);
					}
				}
			}
			else
			{
				func_91(&(Global_2546027[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bParam0), 0))
			{
				UNK_0x672BED15BAF1B335(UNK_0x9539D44F3E4492F6(bParam0));
			}
			func_179(&(Global_2546027[bParam0 /*2*/]));
			UNK_0x0674E58A79778E99(&Global_2546026, bParam0);
		}
	}
}

bool func_89(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_90(-1, 0) == 8;
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

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_75();
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

void func_91(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = UNK_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = UNK_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = UNK_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

bool func_92()
{
	if (UNK_0x22A8E52414415B76() || UNK_0xF929B1A0A409FF93())
	{
		return true;
	}
	return false;
}

bool func_93()
{
	if (func_94() == 0)
	{
		return true;
	}
	return false;
}

int func_94()
{
	return Global_1312467.f_18;
}

bool func_95(bool bParam0)
{
	if (func_89(bParam0, 0))
	{
		return true;
	}
	if (func_96())
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

bool func_96()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_97()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 7);
}

void func_98()
{
	Global_22211.f_5 = 0;
}

void func_99(int iParam0)
{
	Global_2537071.f_4531 = iParam0;
}

void func_100(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		default:
			if (bParam1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_1377170.f_1046), bParam0);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_1377170.f_1046), bParam0);
			}
			break;
	}
}

void func_101()
{
	func_99(1);
	func_100(4, 0, -1);
	func_100(6, 0, -1);
	func_100(7, 0, -1);
	func_100(3, 0, -1);
	func_100(1, 0, -1);
	func_100(2, 0, -1);
	func_100(11, 0, -1);
	func_100(13, 0, -1);
	func_100(14, 0, -1);
	func_100(16, 0, -1);
}

void func_102(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_131(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_105())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_104(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_131(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_104(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_95(UNK_0xD803B885F5E47A62())) && !func_89(UNK_0xD803B885F5E47A62(), 0)) && !func_103()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_95(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_103()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

int func_104(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_105()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_106()
{
	func_107(0);
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		func_108();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_204(0))
		{
			func_118(0);
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

void func_108()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_109(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		UNK_0x2CBCC7DC0EEFF804(iVar0, iParam0);
		func_110(iVar0);
		iVar0++;
	}
}

void func_110(int iParam0)
{
	Global_110290[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110290[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110290[iParam0 /*28*/].f_4), "", 64);
	Global_110290[iParam0 /*28*/].f_23 = 0;
	Global_110290[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110290[iParam0 /*28*/].f_27 = 0;
	Global_110290[iParam0 /*28*/].f_20 = 0;
	Global_110290[iParam0 /*28*/].f_22 = 0;
}

void func_111()
{
	if (!Global_1312575)
	{
		return;
	}
	func_112();
}

void func_112()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_113()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 346, true);
		if (UNK_0x5B99ACBBF316951B(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0x9749E8930AE90341(UNK_0xD803B885F5E47A62()))
			{
			}
		}
	}
}

void func_114()
{
	bool bVar0;

	if (UNK_0xE4EDC4B0E92C078B(iLocal_424))
	{
		UNK_0x142CC44DB769B57E(&iLocal_424);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_251))
	{
		bVar0 = bLocal_251;
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_253))
	{
		bVar0 = bLocal_253;
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
	func_12();
	UNK_0x71199B01895C6202(func_115(12));
	UNK_0x71199B01895C6202(joaat("PROP_WHEELCHAIR_01_S"));
	UNK_0x8D17794CE3273D70("missfinale_c2leadinoutfin_c_int");
}

int func_115(int iParam0)
{
	if (!func_117(iParam0))
	{
		return func_116(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_116(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_117(int iParam0)
{
	return iParam0 < 3;
}

void func_118(int iParam0)
{
	if (func_121())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_120())
		{
			func_119(1, 1);
		}
		else
		{
			func_119(0, 0);
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
	if (!func_105())
	{
		Global_19486.f_1 = 3;
	}
}

void func_119(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_204(0))
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

bool func_120()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_121()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_122(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;

	if (bParam1)
	{
		if (UNK_0xC6F697B2083C83D4())
		{
			UNK_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_130())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			bParam3 = true;
		}
	}
	if (!UNK_0x8CD06866876216F2())
	{
		bVar0 = iParam2;
		UNK_0x98E4DC66A651C9FA(bParam0, bParam1, bVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || UNK_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_93())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (UNK_0x40B8C182D63932FC(bParam0) && (UNK_0xE1DBBD6CE209517C(bParam0) || bParam3 == 1))
		{
			if (bParam3 && UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bParam0), 0))
			{
				return;
			}
			bVar27 = UNK_0x9539D44F3E4492F6(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && UNK_0x8CD06866876216F2())
				{
					UNK_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_89(UNK_0xD803B885F5E47A62(), 0) && !func_96()))
				{
					UNK_0x4A4806F9D471E491(bVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (UNK_0x8CD06866876216F2() && !bVar19)
					{
						UNK_0x30134914EFF0516E(0);
					}
					Global_2425662[bParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_127(0, 0, 0);
					if (bVar25)
					{
						UNK_0x066C43E677C08D5C();
					}
				}
				if (!func_126(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
				{
					if (!bVar22)
					{
						UNK_0x20641932E5104B25(bVar27, true, 0);
					}
				}
				if (!UNK_0xD59B17D2DFF98E26(bVar27))
				{
					if (!bVar21)
					{
						UNK_0x1E9649458B15960F(bVar27, false);
					}
					UNK_0x120A395B0ECB8EA5(bVar27, true);
				}
				else if (!bVar21)
				{
					UNK_0x1E9649458B15960F(bVar27, false);
				}
				UNK_0x25C5402CC10F76CD(bVar27, true);
				UNK_0x62DE699599F0417E(bParam0, 0);
				UNK_0x7569764C11F70C0A(bParam0, 0);
				if (UNK_0xCCBA4C0B3BD2AB7B(bVar27) && UNK_0x8A83E339B374E53A(bVar27))
				{
					UNK_0xE7EE28867F07D06D(bVar27);
				}
				UNK_0x46CB381A452EF99D(bVar27, 1);
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()) == 0)
				{
					func_125();
					func_124();
				}
				if (UNK_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (UNK_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[bParam0 /*421*/].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_126(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
				{
					if (!bVar22)
					{
						UNK_0x20641932E5104B25(bVar27, !bVar15, 0);
					}
					if (!UNK_0xD59B17D2DFF98E26(bVar27))
					{
						if (!bVar21)
						{
							UNK_0x1E9649458B15960F(bVar27, bVar16);
						}
						if (!bVar16)
						{
							UNK_0x120A395B0ECB8EA5(bVar27, true);
						}
					}
					if (func_123(Global_4456448.f_232883))
					{
						UNK_0x1E9649458B15960F(bVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					UNK_0x62DE699599F0417E(bParam0, 0);
				}
				else
				{
					UNK_0x62DE699599F0417E(bParam0, 1);
				}
				UNK_0x25C5402CC10F76CD(bVar27, bVar17);
				if (bVar3)
				{
					if (!UNK_0x2EF364CB160B45F2(bVar27) && !UNK_0x405E212DDE472467(bVar27, 0))
					{
						UNK_0x327AAEE25F323797(bVar27);
					}
				}
			}
			bVar28 = false;
			if (bVar2)
			{
				bVar28 = (bVar28 || 2);
			}
			if (bVar3)
			{
				bVar28 = (bVar28 || 4);
			}
			if (bVar4)
			{
				bVar28 = (bVar28 || 8);
			}
			if (bVar5)
			{
				bVar28 = (bVar28 || 16);
			}
			if (bVar6)
			{
				bVar28 = (bVar28 || 32);
			}
			if (bVar7)
			{
				bVar28 = (bVar28 || 64);
			}
			if (bVar8)
			{
				bVar28 = (bVar28 || 128);
			}
			if (bVar9)
			{
				bVar28 = (bVar28 || 256);
			}
			if (bVar10)
			{
				bVar28 = (bVar28 || 512);
			}
			if (bVar11)
			{
				bVar28 = (bVar28 || 1024);
			}
			if (bVar12)
			{
				bVar28 = (bVar28 || 2048);
			}
			if (bVar13)
			{
				bVar28 = (bVar28 || 4096);
			}
			UNK_0x98E4DC66A651C9FA(bParam0, bParam1, bVar28);
		}
	}
}

bool func_123(int iParam0)
{
	return iParam0 == 17;
}

void func_124()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_125()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_126(bool bParam0)
{
	int iVar0;

	if (UNK_0x405E212DDE472467(bParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = UNK_0xD1960163A3042274(bParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

void func_127(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (UNK_0x437347B10A200C4B(bParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bParam1))
			{
				if (!UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), UNK_0x83FACCC48B68F9D1(bParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_129();
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, true))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						UNK_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), true);
			}
		}
		if (func_89(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0xD51AAA59D51D8056(bParam0, bParam1, 1);
		}
		else
		{
			UNK_0x7AEFB64DFEBF60B0(bParam0, bParam1);
		}
		UNK_0xF374D547F2AC15B0(bParam0, bParam1);
		func_128(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_128(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_129()
{
	int iVar0;

	if (!UNK_0xB7DDF77EF860941D())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = UNK_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), false);
		}
	}
}

bool func_130()
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

void func_131(int iParam0)
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

void func_132(char* sParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_136(sParam0))
	{
		return;
	}
	func_13();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_135();
	func_134(bParam1);
	func_133();
}

void func_133()
{
	UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), true);
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), false);
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_1312585.f_59), false);
}

void func_135()
{
	Global_1312585.f_10 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
}

bool func_136(bool bParam0)
{
	if (!func_18())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_137(bParam0);
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_137(bool bParam0)
{
	if (!func_18())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

bool func_138()
{
	switch (iLocal_429)
	{
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 25))
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
				UNK_0x5D96D8530B3D0904(&bLocal_422, 25);
			}
			if (UNK_0x83D8570832F172A7(iLocal_430) && func_190())
			{
				func_171();
				func_170();
				func_167(0, 0, 1, 0, 1, 1, 0);
				func_122(UNK_0xD803B885F5E47A62(), 0, 8196, 0);
				UNK_0xB5EB44E161D3DCB8(0, true);
				UNK_0x4AE2D6991D4E4082(UNK_0x16F2683693E537C9(), 1, 1);
				func_164(1, 1);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
				{
					UNK_0x536F1BE96C726C4B(1273.885f, -1718.004f, 53.7715f, 3f, 1, 0, 0, false);
					UNK_0x327AAEE25F323797(bLocal_252);
					UNK_0xA47B46945FF6DE74(bLocal_252, 1275.256f, -1722.368f, 53.655f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bLocal_252, 12.6638f);
					UNK_0xBD453909DC26A85D(bLocal_252, joaat("MOTIONSTATE_WALK"), false, 0, 0);
					UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
					UNK_0x5745EA6329A91E29(bLocal_252, joaat("WEAPON_UNARMED"), true);
				}
				iLocal_431 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
				UNK_0xE3BB8E05FCEB3FBE(iLocal_431, true);
				UNK_0x86F44313DFA8F00C(iLocal_431, 1276.409f, -1719.918f, 56.1054f, -29.932f, 0f, 137.9132f, 50f, 0, 1, 1, 2);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				UNK_0x7E60C62A7CE58FC8(iLocal_430, "SET_DETAILS");
				func_163("FM_LEST_CAM");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(iLocal_430, "SET_LOCATION");
				func_163("FM_LEST_CAM2");
				UNK_0x7E60D21B163E9D56();
				if (UNK_0xE0FCC099E413CCBA() == -1)
				{
					UNK_0x63D6BFA449464BBF("scanline_cam");
				}
				UNK_0x5D96D8530B3D0904(&bLocal_422, 15);
				func_7(&uLocal_432, 0, 0);
				UNK_0x523BCC9DC80CD82F(func_115(12));
				UNK_0x523BCC9DC80CD82F(joaat("PROP_WHEELCHAIR_01_S"));
				UNK_0x3F423BF5B8125A50("MissLester1ALeadInOut");
				UNK_0x5D96D8530B3D0904(&bLocal_422, 23);
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 17))
				{
					if (UNK_0x76395FF5E8D5E643(208246292))
					{
						UNK_0x1BA7FCEAFCE8D46E(208246292, 0, false, false);
						UNK_0x5D96D8530B3D0904(&bLocal_422, 17);
					}
				}
				iLocal_429 = 1;
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 21))
				{
					if (func_180(&uLocal_432, 1000, 0))
					{
						UNK_0xDBE4EC9C88839074(bLocal_252, 1276.409f, -1719.918f, 56.1054f, -1, 0, 2);
						UNK_0x5D96D8530B3D0904(&bLocal_422, 21);
					}
				}
			}
			if (func_180(&uLocal_432, 1500, 0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 17))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_251))
						{
							if (func_144(&uLocal_255, "FM_1AU", "FM_LESTCUT", 7, 0, 0, 0))
							{
								func_179(&uLocal_432);
								func_7(&uLocal_432, 0, 0);
								iLocal_429++;
							}
						}
					}
				}
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
			{
				if (!func_208())
				{
					UNK_0x4E885A246A9D983A(bLocal_252, 104, true);
					UNK_0x5D96D8530B3D0904(&bLocal_422, 22);
					UNK_0xBC43ED9FE28DB191(bLocal_252);
					UNK_0x96167B03C5A77156(bLocal_252, 1273.576f, -1718.459f, 53.7715f, 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					func_179(&uLocal_432);
					func_7(&uLocal_432, 0, 0);
					iLocal_429++;
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
			{
				if (func_180(&uLocal_432, 5000, 0) || UNK_0x3D1053F9EB43B7AD(bLocal_252, 1275.138f, -1718.426f, 53.72994f, 1272.451f, -1719.627f, 55.45897f, 1.5625f, 0, true, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 1273.885f, -1718.004f, 53.7715f, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 21.8709f);
						UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
						if (UNK_0xA4FD7964FEE91ED8(0) == 4)
						{
							UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_AIMING"), false, 0, 0);
							UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
						}
					}
					func_143();
					func_86(1, 1, 0, 1);
					UNK_0x0674E58A79778E99(&bLocal_422, 22);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					func_122(UNK_0xD803B885F5E47A62(), 1, 0, 0);
					UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 1);
					UNK_0x5D96D8530B3D0904(&bLocal_422, 25);
					UNK_0x5F30A037D837553E(0);
					UNK_0x5D96D8530B3D0904(&bLocal_422, 24);
					iLocal_429 = 99;
				}
			}
			break;
		case 99:
			if (UNK_0x76395FF5E8D5E643(208246292))
			{
				UNK_0x1BA7FCEAFCE8D46E(208246292, 4, false, false);
				UNK_0x5D96D8530B3D0904(&bLocal_422, 19);
				iLocal_429 = 100;
			}
			break;
		case 100:
			return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 15))
	{
		if (UNK_0x83D8570832F172A7(iLocal_430))
		{
			UNK_0x7E60C62A7CE58FC8(iLocal_430, "SET_TIME");
			if (UNK_0xD8A54335F18763BA() >= 0 && UNK_0xD8A54335F18763BA() <= 12)
			{
				UNK_0x3CAEA85DA607305E(UNK_0xD8A54335F18763BA());
			}
			else
			{
				UNK_0x3CAEA85DA607305E((UNK_0xD8A54335F18763BA() - 12));
			}
			UNK_0x3CAEA85DA607305E(UNK_0x8D199E381D262EEF());
			UNK_0x3CAEA85DA607305E(false);
			if (UNK_0xD8A54335F18763BA() >= 0 && UNK_0xD8A54335F18763BA() < 12)
			{
				func_163("FM_LEST_AM");
			}
			else
			{
				func_163("FM_LEST_PM");
			}
			UNK_0x7E60D21B163E9D56();
			UNK_0x6567AE843FADBA94(iLocal_430, 255, 255, 255, 255, 0);
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 22))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
		{
			UNK_0x4E885A246A9D983A(bLocal_252, 104, true);
			UNK_0x9DD8618CA5BF832D(bLocal_252, 60, true);
			UNK_0x9DD8618CA5BF832D(bLocal_252, 342, true);
			UNK_0x9DD8618CA5BF832D(bLocal_252, 348, true);
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 23))
	{
		if (func_139())
		{
			UNK_0x0674E58A79778E99(&bLocal_422, 23);
		}
	}
	return false;
}

bool func_139()
{
	bool bVar0;

	UNK_0x523BCC9DC80CD82F(func_115(12));
	UNK_0x523BCC9DC80CD82F(joaat("PROP_WHEELCHAIR_01_S"));
	UNK_0x3F423BF5B8125A50("missfinale_c2leadinoutfin_c_int");
	if (!UNK_0xC844350D5D58C99A(bLocal_251))
	{
		if (UNK_0xB87F6CF6E5628C67(func_115(12)))
		{
			if (func_141(&bLocal_251, 12, 1276.39f, -1712.845f, 54.372f, 338.0729f, 1))
			{
				UNK_0x11AD11297DC58CC7(bLocal_251, true);
				UNK_0xE121AE1BBF90E186(bLocal_251, true);
				func_140(&uLocal_255, 8, bLocal_251, "Lester", 0, 1);
				UNK_0x9A28E8CB86CD4694(bLocal_251, true, 0, 0, false);
			}
		}
	}
	if (!UNK_0xC844350D5D58C99A(bLocal_253))
	{
		if (UNK_0xB87F6CF6E5628C67(joaat("PROP_WHEELCHAIR_01_S")))
		{
			bLocal_253 = UNK_0x7707E48765093646(joaat("PROP_WHEELCHAIR_01_S"), 1276.39f, -1712.845f, 54.372f, false, false, false);
		}
	}
	if (!UNK_0xC844350D5D58C99A(bLocal_251))
	{
		return false;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_251))
	{
		if (!UNK_0x8A83E339B374E53A(bLocal_251))
		{
			return false;
		}
	}
	if (!UNK_0xC844350D5D58C99A(bLocal_253))
	{
		return false;
	}
	if (!UNK_0xB4AE0788C1587752("missfinale_c2leadinoutfin_c_int"))
	{
		return false;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_251))
	{
		iLocal_254 = UNK_0xE9744DB7B8CA6965(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
		UNK_0x915804B434753CBD(bLocal_251, iLocal_254, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 0, 1148846080, 0);
		UNK_0xE14EC663EED44AD5(bLocal_253, iLocal_254, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, -8f, 4, 1148846080 /* Float: 1000f */);
		UNK_0xC90224D9E95E5E3A(iLocal_254, true);
		bVar0 = true;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_140(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_141(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	bool bVar0;

	if (!func_117(iParam1))
	{
		bVar0 = func_115(iParam1);
		UNK_0x523BCC9DC80CD82F(bVar0);
		if (UNK_0xB87F6CF6E5628C67(bVar0))
		{
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				UNK_0xEBA53F35D0085654(bParam0);
			}
			*bParam0 = UNK_0x36F2404464202779(26, bVar0, vParam2, bParam5, 0, false);
			UNK_0x78ED16BE998AECC7(*bParam0);
			if (bVar0 == joaat("IG_LAMARDAVIS"))
			{
				if (UNK_0x36C584991B4C183F(*bParam0, 3) == 0)
				{
					UNK_0x64F9F278AB9DCA2C(*bParam0, 5, 2, false, 0);
				}
			}
			func_142(*bParam0, iParam1);
			if (bParam6)
			{
				UNK_0x71199B01895C6202(bVar0);
			}
			return true;
		}
	}
	return false;
}

int func_142(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94578[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_143()
{
	bool bVar0;

	if (UNK_0x9F4FE516EAACCFC5(iLocal_431))
	{
		UNK_0xE3BB8E05FCEB3FBE(iLocal_431, false);
		UNK_0x9A8DDC7C522F5BF5(iLocal_431, 0);
	}
	UNK_0x0674E58A79778E99(&bLocal_422, 15);
	UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	if (UNK_0xC844350D5D58C99A(bLocal_252))
	{
		bVar0 = bLocal_252;
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
	UNK_0xE17FDF9E3068281B(&iLocal_430);
	UNK_0x225CFE81EA219E44();
}

int func_144(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_162(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_145(sParam2, iParam3, 0);
}

int func_145(char* sParam0, int iParam1, bool bParam2)
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
					func_161();
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
		if (func_160(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_159();
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
				func_153();
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
				if (func_152())
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
			if (func_105())
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
			func_151();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_150();
		func_146();
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
		func_161();
	}
	return 0;
}

void func_146()
{
	if (!func_147())
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

bool func_147()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_149())
	{
		return false;
	}
	if (func_148(UNK_0xD803B885F5E47A62()))
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

bool func_148(int iParam0)
{
	return func_10(iParam0, 20);
}

int func_149()
{
	return -1;
}

void func_150()
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

void func_151()
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

bool func_152()
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

void func_153()
{
	if (func_158(14))
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
		Global_19486 = func_154();
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

var func_154()
{
	func_155();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_155()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_157(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_156(UNK_0x16F2683693E537C9());
			if (func_117(iVar0) && (!func_158(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_117(Global_111638.f_2358.f_539.f_4321))
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

int func_156(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_157(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_157(int iParam0)
{
	if (func_117(iParam0))
	{
		return func_116(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_158(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_159()
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

bool func_160(bool bParam0, int iParam1)
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

void func_161()
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

void func_162(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_163(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_164(bool bParam0, int iParam1)
{
	func_166();
	func_109(1);
	UNK_0xA37A90C62806D848(1);
	UNK_0x790015DC92C918E2();
	func_102(1, 1, 1, 0, 0, 0);
	func_165();
	func_100(12, 1, -1);
	func_99(0);
	UNK_0x5413873D3F67BF93(true, -1);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	func_109(1);
	func_131(1);
	Global_2439138.f_3747 = 1;
	if (bParam0)
	{
		if (!UNK_0xF929B1A0A409FF93())
		{
			UNK_0xF601BB024C8F11A7(1, iParam1);
		}
	}
}

void func_165()
{
	func_99(0);
	func_100(4, 1, -1);
	func_100(6, 1, -1);
	func_100(7, 1, -1);
	func_100(3, 1, -1);
	func_100(1, 1, -1);
	func_100(2, 1, -1);
	func_100(11, 1, -1);
	func_100(13, 1, -1);
	func_100(14, 1, -1);
	func_100(16, 1, -1);
}

void func_166()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = UNK_0x12AB0310C2281427(&(Global_1312575.f_1));
}

void func_167(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;

	func_169();
	func_107(1);
	func_99(1);
	func_100(12, 1, -1);
	func_168();
	UNK_0xBEF52C1D400C0A44(0);
	if (bParam0)
	{
		UNK_0x225FD7B8E8464E9E(UNK_0xD803B885F5E47A62(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_122(UNK_0xD803B885F5E47A62(), 0, iVar0, 0);
	if (bParam5)
	{
		if (UNK_0x82F88FD400E98881(UNK_0x16F2683693E537C9()))
		{
			UNK_0xDB4B1656BA06B94E(UNK_0x16F2683693E537C9(), 0);
		}
	}
}

void func_168()
{
	Global_22211.f_5 = 1;
}

void func_169()
{
	func_118(0);
	func_107(1);
}

void func_170()
{
	Global_2439138.f_1156.f_9 = 1;
}

void func_171()
{
	if (func_177() || func_176())
	{
		func_175();
		func_172();
	}
}

void func_172()
{
	if ((!func_174() && !func_173()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_173()
{
	return Global_2450632.f_591;
}

bool func_174()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

void func_175()
{
	Global_2450632.f_656 = 1;
}

bool func_176()
{
	return Global_2450632.f_635;
}

bool func_177()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_178()
{
	switch (iLocal_250)
	{
		case 0:
			if (UNK_0x22A8E52414415B76())
			{
				iLocal_250++;
			}
			break;
		case 1:
			if (UNK_0x22A8E52414415B76())
			{
				func_113();
			}
			else
			{
				iLocal_250++;
			}
			break;
		case 2:
			if (bLocal_428)
			{
				if (!UNK_0x39B7A3CCD2467CAB())
				{
					if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
					{
						UNK_0x82E51BCA72537B6C(500);
					}
					bLocal_428 = false;
				}
			}
			else if (UNK_0x154B5473FBFD0156())
			{
				func_86(1, 1, 0, 1);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				UNK_0x7F2C3F971FA7A9EA(1);
				if (iLocal_427 != 0)
				{
					UNK_0x25BB71BA267FE042(iLocal_427);
				}
				UNK_0x0674E58A79778E99(&(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2), true);
				iLocal_250++;
			}
			break;
		case 3:
			return true;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_422, 11))
	{
		if (UNK_0x3148AE92ED70DC30("MP_1", 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 228.4235f);
				UNK_0x5D96D8530B3D0904(&bLocal_422, 11);
			}
		}
	}
	return false;
}

void func_179(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_180(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_7(uParam0, bParam2, 0);
	if (UNK_0x8CD06866876216F2() && !bParam2)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

bool func_181(var uParam0)
{
	return uParam0->f_1;
}

bool func_182(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_183(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_184(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && UNK_0xFEBC1E4EC9E001F0())
	{
		return false;
	}
	if (func_208())
	{
		return false;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	if (func_189())
	{
		return false;
	}
	if (func_200())
	{
		return false;
	}
	if (bParam1)
	{
		if (func_201(UNK_0xD803B885F5E47A62(), 1, 0))
		{
			return false;
		}
	}
	if (bParam0)
	{
		if (func_188(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (func_187())
	{
		return false;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (bParam3)
	{
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (Global_1574184)
	{
		return false;
	}
	if (func_186())
	{
		return false;
	}
	if (func_173())
	{
		return false;
	}
	if (func_174())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (Global_2547056)
	{
		return false;
	}
	if (func_185(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_185(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("MP_M_FREEMODE_01") || iVar1 == joaat("MP_F_FREEMODE_01"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_186()
{
	return Global_2450632.f_744;
}

bool func_187()
{
	return Global_2439138.f_3047.f_578;
}

bool func_188(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return false;
	}
	return true;
}

bool func_189()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_190()
{
	bool bVar0;

	if (!UNK_0xC844350D5D58C99A(bLocal_252))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			bVar0 = UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9());
			bLocal_252 = UNK_0x36F2404464202779(4, bVar0, 1273.827f, -1717.873f, 53.7715f, 19.2225f, 0, false);
			UNK_0xE121AE1BBF90E186(bLocal_252, true);
			UNK_0x11AD11297DC58CC7(bLocal_252, true);
			UNK_0x7237EE202FA06DBA(UNK_0x16F2683693E537C9(), bLocal_252);
		}
	}
	if (!UNK_0xC844350D5D58C99A(bLocal_252))
	{
		return false;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_252))
	{
		if (!UNK_0x8A83E339B374E53A(bLocal_252))
		{
			return false;
		}
	}
	return true;
}

void func_191()
{
	UNK_0x45019D71A0DF8B62(1);
	func_192(1, -1);
	UNK_0xED41266DE64A57FD(1);
	if (func_39(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2450632.f_643 = 1;
}

void func_192(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_75();
	}
	switch (bParam0)
	{
		case 0:
			UNK_0xD5F10CECBB7D51B6(false, bParam1);
			break;
		default:
			iVar1 = func_78(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0))
			{
				UNK_0x0674E58A79778E99(&bVar0, bParam0);
				UNK_0xD5F10CECBB7D51B6(bVar0, bParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_33(120, 0, bParam1, 1);
			func_33(124, 0, bParam1, 1);
			func_33(115, 0, bParam1, 1);
			func_33(119, 0, bParam1, 1);
			break;
	}
}

void func_193(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208, bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208, bParam0))
	{
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208), bParam0);
	}
}

bool func_194()
{
	bool bVar0;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (bLocal_421)
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1274.547f, -1720.694f, 53.6807f) > 500f)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_252))
			{
				bVar0 = bLocal_252;
				UNK_0x2ABAFAE29D459CE5(&bVar0);
			}
			return false;
		}
		func_190();
	}
	if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1273.804f, -1722.466f, 53.21749f, 1277.147f, -1720.779f, 56.09249f, 3.4375f, 0, true, 0))
	{
		return false;
	}
	return true;
}

bool func_195()
{
	return Global_1674354;
}

bool func_196()
{
	int iVar0;

	return false;
	if (func_197(0))
	{
		iVar0 = 1;
	}
	if (func_197(9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_197(bool bParam0)
{
	bool bVar0;

	if (Global_2460714)
	{
		return true;
	}
	bVar0 = func_25(2479, -1, 0);
	return UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0);
}

bool func_198()
{
	return Global_1312877;
}

int func_199()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_197;
}

bool func_200()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, false);
}

bool func_201(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_202(iParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_202(int iParam0)
{
	return func_203(iParam0);
}

bool func_203(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, false);
}

bool func_204(int iParam0)
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

bool func_205()
{
	return func_206();
}

bool func_206()
{
	return Global_1370527.f_40 == 3;
}

bool func_207()
{
	if (Global_20805 == 4)
	{
		if (UNK_0x1EE04CEA36EF313B())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_208()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_209(int iParam0)
{
	if (func_36())
	{
		return true;
	}
	if (func_35())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_142, 25);
}

int func_210()
{
	return Local_73;
}

int func_211(int iParam0)
{
	return vLocal_153[iParam0 /*3*/];
}

void func_212(var uParam0)
{
	if (func_214(1))
	{
		if (UNK_0xE4EDC4B0E92C078B(*uParam0) && !UNK_0x0BB13030F24E9E05(*uParam0))
		{
			UNK_0x6ABCCE651368DB93(*uParam0, true);
			UNK_0x4F505BE81426535E(*uParam0, false);
			UNK_0x2A065371C9D96655(*uParam0, 5);
		}
	}
	else if (UNK_0xE4EDC4B0E92C078B(*uParam0) && (UNK_0x0BB13030F24E9E05(*uParam0) && !func_213()))
	{
		UNK_0x6ABCCE651368DB93(*uParam0, false);
		UNK_0x4F505BE81426535E(*uParam0, true);
	}
}

bool func_213()
{
	return false;
}

bool func_214(bool bParam0)
{
	return func_215(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_215(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_216(iParam0))
		{
			return false;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_149();
}

bool func_216(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_149())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return false;
}

void func_217()
{
	bool bVar0;

	func_12();
	func_193(12, 0);
	func_71();
	if (iLocal_427 != 0)
	{
		UNK_0x25BB71BA267FE042(iLocal_427);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_252))
	{
		bVar0 = bLocal_252;
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
	if (UNK_0xE4EDC4B0E92C078B(Global_1661963))
	{
		UNK_0x661342B9651D16E2(Global_1661963, false);
		UNK_0x142CC44DB769B57E(&Global_1661963);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 17))
	{
		if (UNK_0x76395FF5E8D5E643(208246292))
		{
			UNK_0x1BA7FCEAFCE8D46E(208246292, 4, false, false);
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 19))
	{
		UNK_0xEAB026E686C0D991(0, 37, 1);
		UNK_0xEAB026E686C0D991(0, 14, 1);
		UNK_0xEAB026E686C0D991(0, 15, 1);
	}
	if (func_220())
	{
		func_219();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x0674E58A79778E99(&(vLocal_153[UNK_0x57270EE11514DC67() /*3*/].f_2), true);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 25))
	{
		UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_422, 24))
	{
		UNK_0x5F30A037D837553E(1);
	}
	func_114();
	UNK_0x5C8D148FC238F38A();
	func_218();
}

void func_218()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_219()
{
	Global_2439138.f_1156.f_9 = 0;
}

bool func_220()
{
	return Global_2439138.f_1156.f_9;
}

bool func_221()
{
	var uVar0;

	func_228(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_227())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_226())
	{
		return true;
	}
	if (func_225(159))
	{
		if (!func_224())
		{
			return true;
		}
	}
	if (func_225(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_222() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_222()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_222()
{
	switch (func_27())
	{
		case 0:
			return func_223();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_223()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("FREEMODE");
		default:
			break;
	}
	return joaat("FREEMODE");
}

bool func_224()
{
	return Global_2450632.f_598;
}

bool func_225(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_226()
{
	return Global_2460680;
}

bool func_227()
{
	return Global_2450632.f_593;
}

void func_228(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			UNK_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_229(iVar0);
					break;
				case 589125870:
					UNK_0x218F818E64020C17(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_229(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_4(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_230(bVar4, &bVar5))
						{
							UNK_0x920D29D81E211607(bVar4, vVar0.z);
						}
						if (bVar5)
						{
							UNK_0x046C362CF15F1935(&bVar4);
						}
					}
				}
			}
		}
	}
}

bool func_230(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(bParam0))
		{
			if (UNK_0x7DDF43006A714856(bParam0))
			{
				if (!UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(bParam0)))
				{
					UNK_0x73270B3C9CC833FD(bParam0, false, 1);
					*bParam1 = 1;
				}
			}
		}
		if (UNK_0x9C77D2D0559097F0(bParam0, 0))
		{
			if (UNK_0xAFE0D3608EDA7039(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_231()
{
	SYSTEM::WAIT(0);
}

void func_232(struct<21> Param0)
{
	func_236(func_237(Param0), Param0);
	func_234(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_73, 79);
	UNK_0x35B62793EAE9ADDF(&vLocal_153, 97);
	UNK_0x256D93AFAE851A7A(0);
	if (!func_233())
	{
		func_217();
	}
}

bool func_233()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!UNK_0x8CD06866876216F2())
		{
			return false;
		}
		if (UNK_0x67CCE3DFA3467CAD())
		{
			return true;
		}
		if (func_227())
		{
			return false;
		}
		if (func_225(157))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		SYSTEM::WAIT(0);
	}
	return false;
}

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_218();
			}
			else
			{
				return 0;
			}
		}
		if (!func_235())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
				if (func_227())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
				if (func_225(157))
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!UNK_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_218();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = UNK_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_218();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!UNK_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_218();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_235()
{
	return Global_1312854;
}

void func_236(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_218();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 127:
			return 32;
		case 128:
			return 32;
		case 129:
			return 32;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 130:
			return 32;
		case 131:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 142:
			return 32;
		case 143:
			return 32;
		case 132:
			return 32;
		case 133:
			return 32;
		case 137:
			return 32;
		case 135:
			return 32;
		case 136:
			return 32;
		case 140:
			return 32;
		case 141:
			return 32;
		case 138:
			return 32;
		case 139:
			return 32;
		case 144:
			return 32;
		case 145:
			return 32;
		case 146:
			return 32;
		case 147:
			return 32;
		case 148:
			return 2;
		case 153:
			return 1;
		case 149:
			return 2;
		case 150:
			return 4;
		case 151:
			return 2;
		case 152:
			return 2;
		case 134:
			return 1;
		case 154:
			return 2;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		case 176:
			return 1;
		case 161:
			return 4;
		case 164:
			return 4;
		case 165:
			return 1;
		case 166:
			return 1;
		case 172:
			return 1;
		case 168:
			return 2;
		case 173:
			return 1;
		case 169:
			return 1;
		case 167:
			return 2;
		case 170:
			return 8;
		case 171:
			return 8;
		case 174:
			return 1;
		case 162:
			return 16;
		case 163:
			return 32;
		default:
			break;
	}
	return 0;
}

